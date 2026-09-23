#include "soulcalibur2_funcs.61.h"

DEFINE_REX_FUNC(sub_820E23C8) {
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
	ctx.lr = 0x820E23D0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820e2430
	if (ctx.cr0.eq) goto loc_820E2430;
	// lwz r10,-16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + -16);
	// addi r29,r3,-16
	r29.s64 = ctx.r3.s64 + -16;
	// mulli r11,r10,144
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(144));
	// addic. r30,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	r30.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// blt 0x820e2418
	if (ctx.cr0.lt) goto loc_820E2418;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r28,r11,2048
	r28.s64 = ctx.r11.s64 + 2048;
loc_820E2404:
	// stwu r28,-144(r31)
	ea = -144 + r31.u32;
	REX_STORE_U32(ea, r28.u32);
	r31.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8229d680
	ctx.lr = 0x820E2410;
	sub_8229D680(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x820e2404
	if (!ctx.cr0.lt) goto loc_820E2404;
loc_820E2418:
	// clrlwi. r11,r27,31
	ctx.r11.u64 = r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820e2428
	if (ctx.cr0.eq) goto loc_820E2428;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c80a8
	ctx.lr = 0x820E2428;
	sub_822C80A8(ctx, base);
loc_820E2428:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x820e2458
	goto loc_820E2458;
loc_820E2430:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8229d680
	ctx.lr = 0x820E2444;
	sub_8229D680(ctx, base);
	// clrlwi. r11,r27,31
	ctx.r11.u64 = r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820e2454
	if (ctx.cr0.eq) goto loc_820E2454;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x820E2454;
	sub_822C80A8(ctx, base);
loc_820E2454:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_820E2458:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_820E8628) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,492(r3)
	REX_STORE_U32(ctx.r3.u32 + 492, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E9B08) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,400(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 400, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820EA5C0) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e84
	ctx.lr = 0x820EA5C8;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f28
	ctx.lr = 0x820EA5D0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r29,r11,432
	r29.s64 = ctx.r11.s64 + 432;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r31,-32170
	r31.s64 = -2108293120;
	// lfs f31,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f31.f64 = double(temp.f32);
	// lwz r11,40(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 40);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820ea6d8
	if (!ctx.cr6.eq) goto loc_820EA6D8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-28236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -28236);
	// bl 0x820f2850
	ctx.lr = 0x820EA604;
	sub_820F2850(ctx, base);
	// lwz r11,-28236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -28236);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x820f2850
	ctx.lr = 0x820EA618;
	sub_820F2850(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x820ea6d8
	if (!ctx.cr6.eq) goto loc_820EA6D8;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x820ea6d8
	if (!ctx.cr6.eq) goto loc_820EA6D8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-28236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -28236);
	// bl 0x822025c8
	ctx.lr = 0x820EA634;
	sub_822025C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-28236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -28236);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// bl 0x822025c8
	ctx.lr = 0x820EA644;
	sub_822025C8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,-28236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -28236);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// bl 0x822025c8
	ctx.lr = 0x820EA654;
	sub_822025C8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,-28236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -28236);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// bl 0x822025c8
	ctx.lr = 0x820EA664;
	sub_822025C8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,-28236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -28236);
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
	// bl 0x822025c8
	ctx.lr = 0x820EA674;
	sub_822025C8(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,-28236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -28236);
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	f26.f64 = ctx.f1.f64;
	// bl 0x822025c8
	ctx.lr = 0x820EA684;
	sub_822025C8(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,-28236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -28236);
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	f25.f64 = ctx.f1.f64;
	// bl 0x822025c8
	ctx.lr = 0x820EA694;
	sub_822025C8(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,-28236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -28236);
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	f24.f64 = ctx.f1.f64;
	// bl 0x822025c8
	ctx.lr = 0x820EA6A4;
	sub_822025C8(ctx, base);
	// fadds f0,f1,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + f24.f64));
	// fadds f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 + f25.f64));
	// fadds f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 + f26.f64));
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + f27.f64));
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + f28.f64));
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// fadds f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 + f30.f64));
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// ble cr6,0x820ea6d8
	if (!ctx.cr6.gt) goto loc_820EA6D8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-28236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -28236);
	// fsubs f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 - ctx.f0.f64));
	// bl 0x82202560
	ctx.lr = 0x820EA6D8;
	sub_82202560(ctx, base);
loc_820EA6D8:
	// addi r3,r29,84
	ctx.r3.s64 = r29.s64 + 84;
	// bl 0x821d6398
	ctx.lr = 0x820EA6E0;
	sub_821D6398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820ea918
	if (!ctx.cr0.eq) goto loc_820EA918;
	// lwz r11,124(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 124);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x820ea8b0
	if (ctx.cr6.lt) goto loc_820EA8B0;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x820ea784
	if (ctx.cr6.lt) goto loc_820EA784;
	// bne cr6,0x820ea8b8
	if (!ctx.cr6.eq) goto loc_820EA8B8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820ea528
	ctx.lr = 0x820EA708;
	sub_820EA528(ctx, base);
	// lwz r3,-28236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -28236);
	// lfs f1,100(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,112(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 112);
	// bl 0x82202560
	ctx.lr = 0x820EA718;
	sub_82202560(ctx, base);
	// lwz r3,-28236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -28236);
	// lfs f1,92(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,96(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 96);
	// bl 0x82202560
	ctx.lr = 0x820EA728;
	sub_82202560(ctx, base);
	// addi r3,r29,84
	ctx.r3.s64 = r29.s64 + 84;
	// bl 0x821d6398
	ctx.lr = 0x820EA730;
	sub_821D6398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820ea744
	if (!ctx.cr0.eq) goto loc_820EA744;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
loc_820EA744:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,128(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 128);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820ea8b8
	if (ctx.cr6.lt) goto loc_820EA8B8;
	// lwz r3,-28236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -28236);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r4,112(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 112);
	// bl 0x82202560
	ctx.lr = 0x820EA764;
	sub_82202560(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,-28236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -28236);
	// lwz r4,96(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 96);
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82202560
	ctx.lr = 0x820EA778;
	sub_82202560(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,124(r30)
	REX_STORE_U32(r30.u32 + 124, ctx.r11.u32);
	// b 0x820ea8b8
	goto loc_820EA8B8;
loc_820EA784:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f30,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f30.f64 = double(temp.f32);
	// bne cr6,0x820ea7d0
	if (!ctx.cr6.eq) goto loc_820EA7D0;
	// stfs f30,24(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 24, temp.u32);
	// mr r29,r27
	r29.u64 = r27.u64;
	// addi r28,r30,24
	r28.s64 = r30.s64 + 24;
loc_820EA7A8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,-28236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -28236);
	// bl 0x822025c8
	ctx.lr = 0x820EA7B4;
	sub_822025C8(ctx, base);
	// stfsu f1,4(r28)
	ctx.fpscr.disableFlushMode();
	ea = 4 + r28.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	r28.u32 = ea;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lfs f0,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,24(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 24, temp.u32);
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(r29.s32, 8, ctx.xer);
	// blt cr6,0x820ea7a8
	if (ctx.cr6.lt) goto loc_820EA7A8;
loc_820EA7D0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820ea528
	ctx.lr = 0x820EA7D8;
	sub_820EA528(ctx, base);
	// lwz r3,-28236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -28236);
	// lfs f1,100(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,112(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 112);
	// bl 0x82202560
	ctx.lr = 0x820EA7E8;
	sub_82202560(ctx, base);
	// mr r29,r27
	r29.u64 = r27.u64;
	// addi r28,r30,28
	r28.s64 = r30.s64 + 28;
loc_820EA7F0:
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x820ea81c
	if (ctx.cr6.eq) goto loc_820EA81C;
	// lfs f13,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f0,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,-28236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -28236);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f13,92(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x82202560
	ctx.lr = 0x820EA81C;
	sub_82202560(ctx, base);
loc_820EA81C:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(r29.s32, 8, ctx.xer);
	// blt cr6,0x820ea7f0
	if (ctx.cr6.lt) goto loc_820EA7F0;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,128(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 128);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820ea8b8
	if (ctx.cr6.lt) goto loc_820EA8B8;
	// lwz r4,112(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 112);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x820ea86c
	if (!ctx.cr6.eq) goto loc_820EA86C;
	// lwz r11,124(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 124);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820ea86c
	if (!ctx.cr6.eq) goto loc_820EA86C;
	// lwz r3,-28236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -28236);
	// bl 0x82202540
	ctx.lr = 0x820EA864;
	sub_82202540(ctx, base);
	// bl 0x820e85f8
	ctx.lr = 0x820EA868;
	sub_820E85F8(ctx, base);
	// b 0x820ea8a4
	goto loc_820EA8A4;
loc_820EA86C:
	// lwz r3,-28236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -28236);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82202560
	ctx.lr = 0x820EA878;
	sub_82202560(ctx, base);
	// mr r29,r27
	r29.u64 = r27.u64;
loc_820EA87C:
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x820ea898
	if (ctx.cr6.eq) goto loc_820EA898;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,-28236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -28236);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82202560
	ctx.lr = 0x820EA898;
	sub_82202560(ctx, base);
loc_820EA898:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(r29.s32, 8, ctx.xer);
	// blt cr6,0x820ea87c
	if (ctx.cr6.lt) goto loc_820EA87C;
loc_820EA8A4:
	// stw r27,4(r30)
	REX_STORE_U32(r30.u32 + 4, r27.u32);
	// stw r27,124(r30)
	REX_STORE_U32(r30.u32 + 124, r27.u32);
	// b 0x820ea8b8
	goto loc_820EA8B8;
loc_820EA8B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
loc_820EA8B8:
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// lwz r11,-28256(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -28256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ea918
	if (ctx.cr6.eq) goto loc_820EA918;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// addi r8,r10,-7072
	ctx.r8.s64 = ctx.r10.s64 + -7072;
	// lbz r10,188(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 188);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x820ea8f0
	if (!ctx.cr0.eq) goto loc_820EA8F0;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,-28256(r9)
	REX_STORE_U32(ctx.r9.u32 + -28256, ctx.r11.u32);
loc_820EA8F0:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r10,r10,3884
	ctx.r10.u64 = ctx.r10.u64 | 3884;
	// lbzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x820ea918
	if (!ctx.cr0.eq) goto loc_820EA918;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,-28256(r9)
	REX_STORE_U32(ctx.r9.u32 + -28256, ctx.r11.u32);
loc_820EA918:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f74
	ctx.lr = 0x820EA924;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_820FF430) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x820ff444
	if (ctx.cr6.lt) goto loc_820FF444;
	// bne cr6,0x820ff444
	if (!ctx.cr6.eq) goto loc_820FF444;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
loc_820FF444:
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FF500) {
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
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,21952
	r31.s64 = ctx.r11.s64 + 21952;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820ffba0
	ctx.lr = 0x820FF524;
	sub_820FFBA0(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// addi r4,r11,680
	ctx.r4.s64 = ctx.r11.s64 + 680;
	// bl 0x820ffbc8
	ctx.lr = 0x820FF538;
	sub_820FFBC8(ctx, base);
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x820ffbd0
	ctx.lr = 0x820FF548;
	sub_820FFBD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820ffbd8
	ctx.lr = 0x820FF550;
	sub_820FFBD8(ctx, base);
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

DEFINE_REX_FUNC(sub_82100B00) {
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
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// addi r30,r11,22576
	r30.s64 = ctx.r11.s64 + 22576;
	// lwz r11,156(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 156);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x82100bf8
	if (ctx.cr6.eq) goto loc_82100BF8;
	// lwz r11,152(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82100bf8
	if (ctx.cr6.eq) goto loc_82100BF8;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r31,r11,80
	r31.s64 = ctx.r11.s64 + 80;
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// lwz r10,136(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm. r10,r10,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82100b58
	if (ctx.cr0.eq) goto loc_82100B58;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,196(r30)
	REX_STORE_U32(r30.u32 + 196, ctx.r11.u32);
	// b 0x82100bf8
	goto loc_82100BF8;
loc_82100B58:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x82100b74
	if (!ctx.cr6.eq) goto loc_82100B74;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r10,r10,32832
	ctx.r10.u64 = ctx.r10.u64 | 32832;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x82100be0
	goto loc_82100BE0;
loc_82100B74:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,32832
	ctx.r10.u64 = ctx.r10.u64 | 32832;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r11,156(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82100bb0
	if (ctx.cr6.eq) goto loc_82100BB0;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r10,136(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82100bb0
	if (ctx.cr0.eq) goto loc_82100BB0;
	// lwz r11,156(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82100BB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82100BB0:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r10,164(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82100be0
	if (ctx.cr6.eq) goto loc_82100BE0;
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82100be0
	if (ctx.cr0.eq) goto loc_82100BE0;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r10,164(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// lwz r3,160(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82100BE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82100BE0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,15
	ctx.r3.s64 = 15;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212bc38
	ctx.lr = 0x82100BF0;
	sub_8212BC38(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,156(r30)
	REX_STORE_U32(r30.u32 + 156, ctx.r11.u32);
loc_82100BF8:
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

DEFINE_REX_FUNC(sub_82107E38) {
	REX_FUNC_PROLOGUE();
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,-66
	ctx.r11.s64 = ctx.r11.s64 + -66;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32256
	ctx.r12.s64 = -2113929216;
	// addi r12,r12,27272
	ctx.r12.s64 = ctx.r12.s64 + 27272;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32240
	ctx.r12.s64 = -2112880640;
	// nop 
	// addi r12,r12,32372
	ctx.r12.s64 = ctx.r12.s64 + 32372;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82107EB4;
	case 1:
		goto loc_82107EC8;
	case 2:
		goto loc_82107EA4;
	case 3:
		goto loc_82107EC8;
	case 4:
		goto loc_82107EC8;
	case 5:
		goto loc_82107E9C;
	case 6:
		goto loc_82107EC8;
	case 7:
		goto loc_82107EBC;
	case 8:
		goto loc_82107EC8;
	case 9:
		goto loc_82107EC4;
	case 10:
		goto loc_82107E8C;
	case 11:
		goto loc_82107E7C;
	case 12:
		goto loc_82107EC8;
	case 13:
		goto loc_82107EC8;
	case 14:
		goto loc_82107EAC;
	case 15:
		goto loc_82107EC8;
	case 16:
		goto loc_82107EC8;
	case 17:
		goto loc_82107E84;
	case 18:
		goto loc_82107E94;
	case 19:
		goto loc_82107E74;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82107E74:
	// li r3,104
	ctx.r3.s64 = 104;
	// blr 
	return;
loc_82107E7C:
	// li r3,109
	ctx.r3.s64 = 109;
	// blr 
	return;
loc_82107E84:
	// li r3,119
	ctx.r3.s64 = 119;
	// blr 
	return;
loc_82107E8C:
	// li r3,108
	ctx.r3.s64 = 108;
	// blr 
	return;
loc_82107E94:
	// li r3,116
	ctx.r3.s64 = 116;
	// blr 
	return;
loc_82107E9C:
	// li r3,117
	ctx.r3.s64 = 117;
	// blr 
	return;
loc_82107EA4:
	// li r3,97
	ctx.r3.s64 = 97;
	// blr 
	return;
loc_82107EAC:
	// li r3,115
	ctx.r3.s64 = 115;
	// blr 
	return;
loc_82107EB4:
	// li r3,98
	ctx.r3.s64 = 98;
	// blr 
	return;
loc_82107EBC:
	// li r3,105
	ctx.r3.s64 = 105;
	// blr 
	return;
loc_82107EC4:
	// li r3,107
	ctx.r3.s64 = 107;
loc_82107EC8:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210E1F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
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
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f29.u64);
	// stfd f30,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,7
	ctx.r8.s64 = 7;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r31,0
	r31.s64 = 0;
	// li r7,9
	ctx.r7.s64 = 9;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r31,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r5,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// stw r3,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// lis r30,-32256
	r30.s64 = -2113929216;
	// stw r6,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,125(r10)
	REX_STORE_U8(ctx.r10.u32 + 125, ctx.r11.u8);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stb r9,126(r10)
	REX_STORE_U8(ctx.r10.u32 + 126, ctx.r9.u8);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stb r4,120(r10)
	REX_STORE_U8(ctx.r10.u32 + 120, ctx.r4.u8);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// stb r8,123(r10)
	REX_STORE_U8(ctx.r10.u32 + 123, ctx.r8.u8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stb r31,121(r10)
	REX_STORE_U8(ctx.r10.u32 + 121, r31.u8);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// lfs f1,1992(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,15632(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 15632);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,124(r10)
	REX_STORE_U8(ctx.r10.u32 + 124, ctx.r11.u8);
	// lfs f12,15628(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 15628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16200(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16200);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,16232(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,152(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 152, temp.u32);
	// stfs f12,156(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 156, temp.u32);
	// stfs f11,160(r10)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 160, temp.u32);
	// stfs f1,164(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 164, temp.u32);
	// stfs f0,136(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 136, temp.u32);
	// stfs f0,140(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 140, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f0,144(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 144, temp.u32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// stfs f1,148(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 148, temp.u32);
	// lis r30,-32170
	r30.s64 = -2108293120;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// li r5,2
	ctx.r5.s64 = 2;
	// lfs f31,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f31.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r8,r11,408
	ctx.r8.s64 = ctx.r11.s64 + 408;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// lwz r3,-28236(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -28236);
	// bl 0x820f3460
	ctx.lr = 0x8210E318;
	sub_820F3460(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-28236(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -28236);
	// bl 0x820f2d80
	ctx.lr = 0x8210E324;
	sub_820F2D80(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-28236(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -28236);
	// bl 0x82202540
	ctx.lr = 0x8210E330;
	sub_82202540(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r9,68(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 68);
	// lfs f30,28564(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28564);
	f30.f64 = double(temp.f32);
	// lfs f29,28664(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28664);
	f29.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8210E360;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// lfs f3,28660(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28660);
	ctx.f3.f64 = double(temp.f32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8210E384;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f2,2348(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2348);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2340(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2340);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,7840(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7840);
	// addi r10,r11,108
	ctx.r10.s64 = ctx.r11.s64 + 108;
	// stfs f31,108(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stfs f31,112(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// stfs f31,116(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// stfs f31,120(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// bl 0x821ff668
	ctx.lr = 0x8210E3B4;
	sub_821FF668(ctx, base);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// stb r31,23880(r11)
	REX_STORE_U8(ctx.r11.u32 + 23880, r31.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
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

DEFINE_REX_FUNC(sub_82115718) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// addi r4,r3,80
	ctx.r4.s64 = ctx.r3.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// lwz r3,504(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 504);
	// b 0x821fadc0
	sub_821FADC0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82115C08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// bl 0x822d4e88
	ctx.lr = 0x82115C10;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f0c
	ctx.lr = 0x82115C18;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// lfs f30,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f30.f64 = double(temp.f32);
	// bl 0x821e78c8
	ctx.lr = 0x82115C30;
	sub_821E78C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 280);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x82204b00
	ctx.lr = 0x82115C44;
	sub_82204B00(ctx, base);
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	f26.f64 = ctx.f1.f64;
	// lfs f1,284(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 284);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x82204b00
	ctx.lr = 0x82115C54;
	sub_82204B00(ctx, base);
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	f25.f64 = ctx.f1.f64;
	// lfs f1,276(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 276);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x82204b00
	ctx.lr = 0x82115C64;
	sub_82204B00(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	f24.f64 = ctx.f1.f64;
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
	// lfs f20,28224(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28224);
	f20.f64 = double(temp.f32);
	// lfs f21,2012(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2012);
	f21.f64 = double(temp.f32);
	// li r29,720
	r29.s64 = 720;
	// lfs f27,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	f27.f64 = double(temp.f32);
	// addi r28,r31,160
	r28.s64 = r31.s64 + 160;
	// lfs f22,28308(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 28308);
	f22.f64 = double(temp.f32);
	// lfs f19,31352(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 31352);
	f19.f64 = double(temp.f32);
	// lfs f18,31348(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 31348);
	f18.f64 = double(temp.f32);
loc_82115CA0:
	// li r11,20
	ctx.r11.s64 = 20;
	// lwz r10,264(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 264);
	// divw r11,r29,r11
	ctx.r11.u64 = uint32_t((ctx.r11.s32 && !(r29.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? r29.s32 / ctx.r11.s32 : 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f17,f0
	f17.f64 = double(float(ctx.f0.f64));
	// fsubs f23,f17,f30
	f23.f64 = double(float(f17.f64 - f30.f64));
	// bne cr6,0x82115ce4
	if (!ctx.cr6.eq) goto loc_82115CE4;
	// lfs f28,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	f28.f64 = double(temp.f32);
	// fmr f29,f18
	f29.f64 = f18.f64;
	// fcmpu cr6,f28,f19
	ctx.cr6.compare(f28.f64, f19.f64);
	// ble cr6,0x82115cf8
	if (!ctx.cr6.gt) goto loc_82115CF8;
	// fmr f28,f19
	f28.f64 = f19.f64;
	// b 0x82115cf8
	goto loc_82115CF8;
loc_82115CE4:
	// lfs f29,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	f29.f64 = double(temp.f32);
	// fcmpu cr6,f29,f19
	ctx.cr6.compare(f29.f64, f19.f64);
	// ble cr6,0x82115cf4
	if (!ctx.cr6.gt) goto loc_82115CF4;
	// fmr f29,f19
	f29.f64 = f19.f64;
loc_82115CF4:
	// fsubs f28,f19,f29
	ctx.fpscr.disableFlushMode();
	f28.f64 = double(float(f19.f64 - f29.f64));
loc_82115CF8:
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,256(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 256);
	// fmr f5,f23
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = f23.f64;
	// fmr f4,f28
	ctx.f4.f64 = f28.f64;
	// fmr f3,f22
	ctx.f3.f64 = f22.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x821e8688
	ctx.lr = 0x82115D18;
	sub_821E8688(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// fctiwz f0,f23
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(f23.f64) ? int64_t(0x80000000U) : (f23.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f23.f64));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82115dfc
	if (!ctx.cr6.eq) goto loc_82115DFC;
	// fadds f29,f28,f29
	f29.f64 = double(float(f28.f64 + f29.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stfs f30,132(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f22,136(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// fsubs f0,f29,f31
	ctx.f0.f64 = double(float(f29.f64 - f31.f64));
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f22,104(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ble cr6,0x82115ec8
	if (!ctx.cr6.gt) goto loc_82115EC8;
	// addi r30,r11,-1
	r30.s64 = ctx.r11.s64 + -1;
loc_82115D64:
	// lfs f0,276(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fadds f1,f0,f26
	ctx.f1.f64 = double(float(ctx.f0.f64 + f26.f64));
	// bl 0x82204b00
	ctx.lr = 0x82115D74;
	sub_82204B00(ctx, base);
	// lfs f0,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// fmr f26,f1
	f26.f64 = ctx.f1.f64;
	// fadds f1,f25,f0
	ctx.f1.f64 = double(float(f25.f64 + ctx.f0.f64));
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x82204b00
	ctx.lr = 0x82115D88;
	sub_82204B00(ctx, base);
	// lfs f0,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// fmr f25,f1
	f25.f64 = ctx.f1.f64;
	// fadds f1,f0,f24
	ctx.f1.f64 = double(float(ctx.f0.f64 + f24.f64));
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x82204b00
	ctx.lr = 0x82115D9C;
	sub_82204B00(ctx, base);
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	f24.f64 = ctx.f1.f64;
	// bl 0x820e0028
	ctx.lr = 0x82115DA4;
	sub_820E0028(ctx, base);
	// fmuls f28,f1,f27
	ctx.fpscr.disableFlushMode();
	f28.f64 = double(float(ctx.f1.f64 * f27.f64));
	// fmr f1,f25
	ctx.f1.f64 = f25.f64;
	// bl 0x820e0028
	ctx.lr = 0x82115DB0;
	sub_820E0028(ctx, base);
	// fmadds f28,f1,f27,f28
	ctx.fpscr.disableFlushMode();
	f28.f64 = double(float(std::fma(ctx.f1.f64, f27.f64, f28.f64)));
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// bl 0x820e0028
	ctx.lr = 0x82115DBC;
	sub_820E0028(ctx, base);
	// fadds f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + f28.f64));
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f30,132(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r6,260(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 260);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r5,256(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 256);
	// fadds f30,f30,f31
	f30.f64 = double(float(f30.f64 + f31.f64));
	// fmadds f0,f0,f21,f27
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f21.f64, f27.f64)));
	// fmadds f0,f0,f20,f29
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f20.f64, f29.f64)));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x821e8680
	ctx.lr = 0x82115DF0;
	sub_821E8680(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82115d64
	if (!ctx.cr0.eq) goto loc_82115D64;
	// b 0x82115ec8
	goto loc_82115EC8;
loc_82115DFC:
	// stfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fadds f0,f29,f31
	ctx.f0.f64 = double(float(f29.f64 + f31.f64));
	// stfs f30,148(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f22,152(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f30,116(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f22,120(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// ble cr6,0x82115ec8
	if (!ctx.cr6.gt) goto loc_82115EC8;
	// addi r30,r11,-1
	r30.s64 = ctx.r11.s64 + -1;
loc_82115E34:
	// lfs f0,276(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fadds f1,f0,f26
	ctx.f1.f64 = double(float(ctx.f0.f64 + f26.f64));
	// bl 0x82204b00
	ctx.lr = 0x82115E44;
	sub_82204B00(ctx, base);
	// lfs f0,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// fmr f26,f1
	f26.f64 = ctx.f1.f64;
	// fadds f1,f25,f0
	ctx.f1.f64 = double(float(f25.f64 + ctx.f0.f64));
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x82204b00
	ctx.lr = 0x82115E58;
	sub_82204B00(ctx, base);
	// lfs f0,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// fmr f25,f1
	f25.f64 = ctx.f1.f64;
	// fadds f1,f0,f24
	ctx.f1.f64 = double(float(ctx.f0.f64 + f24.f64));
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x82204b00
	ctx.lr = 0x82115E6C;
	sub_82204B00(ctx, base);
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	f24.f64 = ctx.f1.f64;
	// bl 0x820e0028
	ctx.lr = 0x82115E74;
	sub_820E0028(ctx, base);
	// fmuls f28,f1,f27
	ctx.fpscr.disableFlushMode();
	f28.f64 = double(float(ctx.f1.f64 * f27.f64));
	// fmr f1,f25
	ctx.f1.f64 = f25.f64;
	// bl 0x820e0028
	ctx.lr = 0x82115E80;
	sub_820E0028(ctx, base);
	// fmadds f28,f1,f27,f28
	ctx.fpscr.disableFlushMode();
	f28.f64 = double(float(std::fma(ctx.f1.f64, f27.f64, f28.f64)));
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// bl 0x820e0028
	ctx.lr = 0x82115E8C;
	sub_820E0028(ctx, base);
	// fadds f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + f28.f64));
	// stfs f30,116(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f30,148(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r6,260(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 260);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r5,256(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 256);
	// fadds f30,f30,f31
	f30.f64 = double(float(f30.f64 + f31.f64));
	// fmadds f0,f0,f21,f27
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f21.f64, f27.f64)));
	// fnmsubs f0,f0,f20,f29
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, f20.f64, -f29.f64)));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x821e8680
	ctx.lr = 0x82115EC0;
	sub_821E8680(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82115e34
	if (!ctx.cr0.eq) goto loc_82115E34;
loc_82115EC8:
	// addi r29,r29,720
	r29.s64 = r29.s64 + 720;
	// fmr f30,f17
	ctx.fpscr.disableFlushMode();
	f30.f64 = f17.f64;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpwi cr6,r29,15120
	ctx.cr6.compare<int32_t>(r29.s32, 15120, ctx.xer);
	// blt cr6,0x82115ca0
	if (ctx.cr6.lt) goto loc_82115CA0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821e78c8
	ctx.lr = 0x82115EE4;
	sub_821E78C8(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f58
	ctx.lr = 0x82115EF0;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82120D10) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,23
	ctx.r4.s64 = 23;
	// lfs f1,16204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16204);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8212d7c8
	sub_8212D7C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82121798) {
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
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821217ec
	if (ctx.cr6.eq) goto loc_821217EC;
	// lbz r10,176(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 176);
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lbz r8,178(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 178);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// addi r10,r9,-8304
	ctx.r10.s64 = ctx.r9.s64 + -8304;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r3,496(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 496);
	// rlwinm r4,r11,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// bl 0x82190670
	ctx.lr = 0x821217EC;
	sub_82190670(ctx, base);
loc_821217EC:
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// lwz r11,29816(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 29816);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,29816(r10)
	REX_STORE_U32(ctx.r10.u32 + 29816, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821233A0) {
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
	ctx.lr = 0x821233A8;
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8212bb40
	ctx.lr = 0x821233C4;
	sub_8212BB40(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// lha r11,124(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 124));
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bge cr6,0x821233dc
	if (!ctx.cr6.lt) goto loc_821233DC;
	// li r11,30
	ctx.r11.s64 = 30;
	// b 0x821233e8
	goto loc_821233E8;
loc_821233DC:
	// cmpwi cr6,r11,170
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 170, ctx.xer);
	// ble cr6,0x821233e8
	if (!ctx.cr6.gt) goto loc_821233E8;
	// li r11,170
	ctx.r11.s64 = 170;
loc_821233E8:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r10,10140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10140);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// rlwinm r11,r10,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xFFFFC000;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,2360(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2360);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r9,r10,30520
	ctx.r9.s64 = ctx.r10.s64 + 30520;
	// lfs f12,20204(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20204);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,20156
	ctx.r10.s64 = ctx.r11.s64 + 20156;
	// lfs f11,20208(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20208);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20212(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20212);
	ctx.f10.f64 = double(temp.f32);
	// lfs f30,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	f30.f64 = double(temp.f32);
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r25,4(r9)
	r25.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsqrts f31,f0
	f31.f64 = double(float(sqrt(ctx.f0.f64)));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82123168
	ctx.lr = 0x82123458;
	sub_82123168(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x821232c0
	ctx.lr = 0x82123464;
	sub_821232C0(ctx, base);
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f30.f64);
	// ble cr6,0x82123480
	if (!ctx.cr6.gt) goto loc_82123480;
	// fsubs f13,f31,f30
	ctx.f13.f64 = double(float(f31.f64 - f30.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f0,f13,f0,f31
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f0.f64, -f31.f64)));
	// fsqrts f31,f0
	f31.f64 = double(float(sqrt(ctx.f0.f64)));
loc_82123480:
	// lis r27,-32170
	r27.s64 = -2108293120;
	// lwz r11,29816(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 29816);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bge cr6,0x821236ac
	if (!ctx.cr6.lt) goto loc_821236AC;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// addi r6,r8,-30200
	ctx.r6.s64 = ctx.r8.s64 + -30200;
	// addi r9,r11,3144
	ctx.r9.s64 = ctx.r11.s64 + 3144;
	// addi r8,r10,2392
	ctx.r8.s64 = ctx.r10.s64 + 2392;
	// addi r7,r7,3568
	ctx.r7.s64 = ctx.r7.s64 + 3568;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,131
	ctx.r4.s64 = 131;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x821f7d50
	ctx.lr = 0x821234C0;
	sub_821F7D50(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r26,r11,31764
	r26.s64 = ctx.r11.s64 + 31764;
	// beq 0x821234dc
	if (ctx.cr0.eq) goto loc_821234DC;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// b 0x821234e0
	goto loc_821234E0;
loc_821234DC:
	// li r31,0
	r31.s64 = 0;
loc_821234E0:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// lis r9,-32176
	ctx.r9.s64 = -2108686336;
	// addi r29,r11,320
	r29.s64 = ctx.r11.s64 + 320;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r30,r10,9680
	r30.s64 = ctx.r10.s64 + 9680;
	// addi r28,r9,7104
	r28.s64 = ctx.r9.s64 + 7104;
	// beq cr6,0x821235a4
	if (ctx.cr6.eq) goto loc_821235A4;
	// lwz r11,29816(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 29816);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// li r5,192
	ctx.r5.s64 = 192;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r28,384
	ctx.r4.s64 = r28.s64 + 384;
	// stw r11,29816(r27)
	REX_STORE_U32(r27.u32 + 29816, ctx.r11.u32);
	// bl 0x821ff870
	ctx.lr = 0x8212351C;
	sub_821FF870(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f0,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// stw r9,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r9.u32);
	// stw r8,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r8.u32);
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
	// lhz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 88);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm r11,r11,2,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lwzx r9,r11,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// lbzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwimi r8,r9,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// fcfid f0,f13
	ctx.f0.f64 = double(ctx.f13.s64);
	// rlwinm r10,r9,24,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r11.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r11,86(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// sth r11,88(r31)
	REX_STORE_U16(r31.u32 + 88, ctx.r11.u16);
loc_821235A4:
	// lwz r11,29816(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 29816);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bge cr6,0x821235fc
	if (!ctx.cr6.lt) goto loc_821235FC;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// addi r6,r8,-30208
	ctx.r6.s64 = ctx.r8.s64 + -30208;
	// addi r9,r11,3144
	ctx.r9.s64 = ctx.r11.s64 + 3144;
	// addi r8,r10,2392
	ctx.r8.s64 = ctx.r10.s64 + 2392;
	// addi r7,r7,3568
	ctx.r7.s64 = ctx.r7.s64 + 3568;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,131
	ctx.r4.s64 = 131;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x821f7d50
	ctx.lr = 0x821235E0;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821235f4
	if (ctx.cr0.eq) goto loc_821235F4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// b 0x821235f8
	goto loc_821235F8;
loc_821235F4:
	// li r31,0
	r31.s64 = 0;
loc_821235F8:
	// lwz r11,29816(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 29816);
loc_821235FC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821236ac
	if (ctx.cr6.eq) goto loc_821236AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r11,29816(r27)
	REX_STORE_U32(r27.u32 + 29816, ctx.r11.u32);
	// li r5,192
	ctx.r5.s64 = 192;
	// addi r4,r28,384
	ctx.r4.s64 = r28.s64 + 384;
	// bl 0x821ff870
	ctx.lr = 0x8212361C;
	sub_821FF870(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 * ctx.f0.f64));
	// sth r10,222(r31)
	REX_STORE_U16(r31.u32 + 222, ctx.r10.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// stw r9,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r9.u32);
	// stw r8,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r8.u32);
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// lhz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 88);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm r11,r11,2,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lwzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lbzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// rlwimi r9,r10,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r10,24,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwinm r9,r9,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// stw r11,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r11.u32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r11,86(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// sth r11,88(r31)
	REX_STORE_U16(r31.u32 + 88, ctx.r11.u16);
loc_821236AC:
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

DEFINE_REX_FUNC(sub_8212D7C8) {
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
	// bl 0x822d4e6c
	ctx.lr = 0x8212D7D0;
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, f30.u64);
	// stfd f31,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// lha r28,90(r3)
	r28.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 90));
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r31,8(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mr r21,r27
	r21.u64 = r27.u64;
	// extsb r25,r10
	r25.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212dd00
	if (!ctx.cr6.eq) goto loc_8212DD00;
	// bl 0x821159c8
	ctx.lr = 0x8212D820;
	sub_821159C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8212dd00
	if (!ctx.cr0.eq) goto loc_8212DD00;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// rlwinm r8,r25,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-22980
	ctx.r11.s64 = ctx.r11.s64 + -22980;
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// beq cr6,0x8212d848
	if (ctx.cr6.eq) goto loc_8212D848;
loc_8212D840:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8212dd04
	goto loc_8212DD04;
loc_8212D848:
	// rlwinm r11,r30,0,16,19
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xF000;
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// beq cr6,0x8212dcf0
	if (ctx.cr6.eq) goto loc_8212DCF0;
	// cmpwi cr6,r11,8192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8192, ctx.xer);
	// beq cr6,0x8212dce4
	if (ctx.cr6.eq) goto loc_8212DCE4;
	// cmpwi cr6,r11,12288
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12288, ctx.xer);
	// beq cr6,0x8212dcd4
	if (ctx.cr6.eq) goto loc_8212DCD4;
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x8212dcbc
	if (ctx.cr6.eq) goto loc_8212DCBC;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// clrlwi r30,r30,20
	r30.u64 = r30.u32 & 0xFFF;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lis r9,-32175
	ctx.r9.s64 = -2108620800;
	// lfs f31,1992(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	f31.f64 = double(temp.f32);
	// cmpwi cr6,r30,75
	ctx.cr6.compare<int32_t>(r30.s32, 75, ctx.xer);
	// addi r29,r11,-5488
	r29.s64 = ctx.r11.s64 + -5488;
	// addi r24,r10,15284
	r24.s64 = ctx.r10.s64 + 15284;
	// addi r23,r9,-9424
	r23.s64 = ctx.r9.s64 + -9424;
	// bgt cr6,0x8212dab0
	if (ctx.cr6.gt) goto loc_8212DAB0;
	// beq cr6,0x8212d9e4
	if (ctx.cr6.eq) goto loc_8212D9E4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8212d924
	if (ctx.cr6.eq) goto loc_8212D924;
	// cmpwi cr6,r30,33
	ctx.cr6.compare<int32_t>(r30.s32, 33, ctx.xer);
	// ble cr6,0x8212dae8
	if (!ctx.cr6.gt) goto loc_8212DAE8;
	// cmpwi cr6,r30,36
	ctx.cr6.compare<int32_t>(r30.s32, 36, ctx.xer);
	// ble cr6,0x8212d8fc
	if (!ctx.cr6.gt) goto loc_8212D8FC;
	// cmpwi cr6,r30,43
	ctx.cr6.compare<int32_t>(r30.s32, 43, ctx.xer);
	// bne cr6,0x8212dae8
	if (!ctx.cr6.eq) goto loc_8212DAE8;
	// lwz r10,5796(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5796);
	// addi r9,r29,-88
	ctx.r9.s64 = r29.s64 + -88;
	// lwz r11,5792(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5792);
	// mulli r10,r10,6
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(6));
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lbz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 0);
	// lha r28,92(r31)
	r28.s64 = int16_t(REX_LOAD_U16(r31.u32 + 92));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,5560(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 5560);
	// extsb r25,r7
	r25.s64 = ctx.r7.s8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// lhax r30,r11,r9
	r30.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32));
	// blt cr6,0x8212db24
	if (ctx.cr6.lt) goto loc_8212DB24;
	// li r21,1
	r21.s64 = 1;
	// b 0x8212db24
	goto loc_8212DB24;
loc_8212D8FC:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,-27648
	ctx.r3.s64 = ctx.r11.s64 + -27648;
	// bl 0x8211f810
	ctx.lr = 0x8212D90C;
	sub_8211F810(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r6,r30,34
	ctx.r6.s64 = r30.s64 + 34;
	// bl 0x8212d560
	ctx.lr = 0x8212D920;
	sub_8212D560(ctx, base);
	// b 0x8212dd04
	goto loc_8212DD04;
loc_8212D924:
	// lwz r11,5780(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 5780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212d9dc
	if (ctx.cr6.eq) goto loc_8212D9DC;
	// lwz r9,5796(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 5796);
	// li r10,7
	ctx.r10.s64 = 7;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// divw r10,r9,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r9.s32 / ctx.r10.s32 : 0);
	// mulli r10,r10,7
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(7));
	// lha r8,56(r11)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 56));
	// lha r7,54(r11)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 54));
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// subf r10,r7,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r7.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bge cr6,0x8212d964
	if (!ctx.cr6.lt) goto loc_8212D964;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8212d970
	goto loc_8212D970;
loc_8212D964:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// ble cr6,0x8212d970
	if (!ctx.cr6.gt) goto loc_8212D970;
	// li r10,3
	ctx.r10.s64 = 3;
loc_8212D970:
	// mulli r11,r11,3
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(3));
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r29,-4140
	ctx.r11.s64 = r29.s64 + -4140;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lha r30,-2(r11)
	r30.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + -2));
	// bne cr6,0x8212db24
	if (!ctx.cr6.eq) goto loc_8212DB24;
	// lhz r11,98(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 98);
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bne cr6,0x8212db24
	if (!ctx.cr6.eq) goto loc_8212DB24;
	// addi r11,r25,1
	ctx.r11.s64 = r25.s64 + 1;
	// stfs f31,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// li r10,47
	ctx.r10.s64 = 47;
	// stfs f31,228(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stw r11,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r27,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r10.u32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// stw r27,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, r27.u32);
	// sth r27,232(r1)
	REX_STORE_U16(ctx.r1.u32 + 232, r27.u16);
	// sth r11,234(r1)
	REX_STORE_U16(ctx.r1.u32 + 234, ctx.r11.u16);
	// stw r27,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, r27.u32);
	// bl 0x82203fe0
	ctx.lr = 0x8212D9D8;
	sub_82203FE0(ctx, base);
	// b 0x8212db24
	goto loc_8212DB24;
loc_8212D9DC:
	// li r30,9
	r30.s64 = 9;
	// b 0x8212db24
	goto loc_8212DB24;
loc_8212D9E4:
	// addi r11,r29,72
	ctx.r11.s64 = r29.s64 + 72;
	// lwz r10,5796(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5796);
	// rlwinm r9,r28,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r29,-3964
	ctx.r7.s64 = r29.s64 + -3964;
	// rlwinm r6,r28,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r29,144
	ctx.r5.s64 = r29.s64 + 144;
	// lhax r9,r9,r11
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r11,r6,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + r23.u32);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r10,r10,r7
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r7.u32));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r9,1(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lbz r7,2(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// extsb r8,r7
	ctx.r8.s64 = ctx.r7.s8;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r9,r9,r5
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + ctx.r5.u32));
	// bne cr6,0x8212da54
	if (!ctx.cr6.eq) goto loc_8212DA54;
	// addi r11,r25,1
	ctx.r11.s64 = r25.s64 + 1;
loc_8212DA54:
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stfs f31,164(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stw r8,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r27,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// sth r27,168(r1)
	REX_STORE_U16(ctx.r1.u32 + 168, r27.u16);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// sth r9,170(r1)
	REX_STORE_U16(ctx.r1.u32 + 170, ctx.r9.u16);
	// stw r27,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, r27.u32);
	// bl 0x82203fe0
	ctx.lr = 0x8212DA88;
	sub_82203FE0(ctx, base);
	// lwz r10,5796(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5796);
	// lwz r11,5792(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5792);
	// mulli r10,r10,5
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(5));
	// lbz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsb r25,r9
	r25.s64 = ctx.r9.s8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lha r28,92(r31)
	r28.s64 = int16_t(REX_LOAD_U16(r31.u32 + 92));
	// lhax r30,r11,r29
	r30.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + r29.u32));
	// b 0x8212db24
	goto loc_8212DB24;
loc_8212DAB0:
	// cmpwi cr6,r30,154
	ctx.cr6.compare<int32_t>(r30.s32, 154, ctx.xer);
	// blt cr6,0x8212dae8
	if (ctx.cr6.lt) goto loc_8212DAE8;
	// cmpwi cr6,r30,155
	ctx.cr6.compare<int32_t>(r30.s32, 155, ctx.xer);
	// ble cr6,0x8212dad0
	if (!ctx.cr6.gt) goto loc_8212DAD0;
	// cmpwi cr6,r30,157
	ctx.cr6.compare<int32_t>(r30.s32, 157, ctx.xer);
	// ble cr6,0x8212dae8
	if (!ctx.cr6.gt) goto loc_8212DAE8;
	// cmpwi cr6,r30,160
	ctx.cr6.compare<int32_t>(r30.s32, 160, ctx.xer);
	// bgt cr6,0x8212dae8
	if (ctx.cr6.gt) goto loc_8212DAE8;
loc_8212DAD0:
	// addi r10,r30,-154
	ctx.r10.s64 = r30.s64 + -154;
	// addi r11,r29,-4140
	ctx.r11.s64 = r29.s64 + -4140;
	// mulli r10,r10,6
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(6));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhax r30,r10,r11
	r30.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32));
	// b 0x8212db24
	goto loc_8212DB24;
loc_8212DAE8:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lbz r11,188(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 188);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8212db08
	if (ctx.cr0.eq) goto loc_8212DB08;
	// cmpwi cr6,r30,47
	ctx.cr6.compare<int32_t>(r30.s32, 47, ctx.xer);
	// blt cr6,0x8212db08
	if (ctx.cr6.lt) goto loc_8212DB08;
	// cmpwi cr6,r30,71
	ctx.cr6.compare<int32_t>(r30.s32, 71, ctx.xer);
	// ble cr6,0x8212db18
	if (!ctx.cr6.gt) goto loc_8212DB18;
loc_8212DB08:
	// cmpwi cr6,r30,161
	ctx.cr6.compare<int32_t>(r30.s32, 161, ctx.xer);
	// blt cr6,0x8212db24
	if (ctx.cr6.lt) goto loc_8212DB24;
	// cmpwi cr6,r30,170
	ctx.cr6.compare<int32_t>(r30.s32, 170, ctx.xer);
	// bgt cr6,0x8212db24
	if (ctx.cr6.gt) goto loc_8212DB24;
loc_8212DB18:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// lha r28,90(r31)
	r28.s64 = int16_t(REX_LOAD_U16(r31.u32 + 90));
	// extsb r25,r11
	r25.s64 = ctx.r11.s8;
loc_8212DB24:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8212d840
	if (ctx.cr6.lt) goto loc_8212D840;
	// cmpwi cr6,r30,223
	ctx.cr6.compare<int32_t>(r30.s32, 223, ctx.xer);
	// bgt cr6,0x8212d840
	if (ctx.cr6.gt) goto loc_8212D840;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r29,144
	ctx.r8.s64 = r29.s64 + 144;
	// lwzx r11,r11,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r31,r9
	r31.s64 = ctx.r9.s8;
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r29,r7
	r29.s64 = ctx.r7.s8;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// extsb r28,r11
	r28.s64 = ctx.r11.s8;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r11,r8
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32));
	// bne cr6,0x8212db84
	if (!ctx.cr6.eq) goto loc_8212DB84;
	// addi r31,r25,1
	r31.s64 = r25.s64 + 1;
loc_8212DB84:
	// cmpwi cr6,r30,77
	ctx.cr6.compare<int32_t>(r30.s32, 77, ctx.xer);
	// bne cr6,0x8212dbb8
	if (!ctx.cr6.eq) goto loc_8212DBB8;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lbz r10,-22961(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + -22961);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8212dbb8
	if (ctx.cr0.eq) goto loc_8212DBB8;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822034d8
	ctx.lr = 0x8212DBB4;
	sub_822034D8(ctx, base);
	// b 0x8212dd04
	goto loc_8212DD04;
loc_8212DBB8:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// beq cr6,0x8212dc04
	if (ctx.cr6.eq) goto loc_8212DC04;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stfs f30,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// sth r10,106(r1)
	REX_STORE_U16(ctx.r1.u32 + 106, ctx.r10.u16);
	// mulli r11,r25,12
	ctx.r11.s64 = static_cast<int64_t>(r25.u64 * static_cast<uint64_t>(12));
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// sth r27,104(r1)
	REX_STORE_U16(ctx.r1.u32 + 104, r27.u16);
	// stw r27,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r27.u32);
	// addi r10,r9,20148
	ctx.r10.s64 = ctx.r9.s64 + 20148;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8212dc38
	goto loc_8212DC38;
loc_8212DC04:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// bne cr6,0x8212dc40
	if (!ctx.cr6.eq) goto loc_8212DC40;
	// stfs f30,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// stw r28,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r28.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r27,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r27.u32);
	// sth r27,136(r1)
	REX_STORE_U16(ctx.r1.u32 + 136, r27.u16);
	// sth r11,138(r1)
	REX_STORE_U16(ctx.r1.u32 + 138, ctx.r11.u16);
	// stw r27,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r27.u32);
loc_8212DC38:
	// bl 0x82203fe0
	ctx.lr = 0x8212DC3C;
	sub_82203FE0(ctx, base);
	// b 0x8212dd04
	goto loc_8212DD04;
loc_8212DC40:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// extsh r30,r11
	r30.s64 = ctx.r11.s16;
	// stw r31,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r31.u32);
	// li r11,-64
	ctx.r11.s64 = -64;
	// stw r29,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r29.u32);
	// stw r28,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, r28.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r27,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, r27.u32);
	// lfs f0,16232(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16232);
	ctx.f0.f64 = double(temp.f32);
	// sth r11,200(r1)
	REX_STORE_U16(ctx.r1.u32 + 200, ctx.r11.u16);
	// fmuls f30,f30,f0
	f30.f64 = double(float(f30.f64 * ctx.f0.f64));
	// stfs f30,192(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// sth r30,202(r1)
	REX_STORE_U16(ctx.r1.u32 + 202, r30.u16);
	// stw r27,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, r27.u32);
	// bl 0x82203fe0
	ctx.lr = 0x8212DC80;
	sub_82203FE0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,64
	ctx.r10.s64 = 64;
	// stfs f30,256(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f31,260(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stw r31,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, r31.u32);
	// stw r29,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, r29.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r28,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// sth r10,264(r1)
	REX_STORE_U16(ctx.r1.u32 + 264, ctx.r10.u16);
	// sth r30,266(r1)
	REX_STORE_U16(ctx.r1.u32 + 266, r30.u16);
	// stw r27,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, r27.u32);
	// b 0x8212dc38
	goto loc_8212DC38;
loc_8212DCBC:
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8212b920
	ctx.lr = 0x8212DCD0;
	sub_8212B920(ctx, base);
	// b 0x8212dd04
	goto loc_8212DD04;
loc_8212DCD4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8212bb40
	ctx.lr = 0x8212DCE0;
	sub_8212BB40(ctx, base);
	// b 0x8212dd04
	goto loc_8212DD04;
loc_8212DCE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8212be90
	ctx.lr = 0x8212DCEC;
	sub_8212BE90(ctx, base);
	// b 0x8212dd00
	goto loc_8212DD00;
loc_8212DCF0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8212bf38
	ctx.lr = 0x8212DD00;
	sub_8212BF38(ctx, base);
loc_8212DD00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8212DD04:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_8214C448) {
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
	// bl 0x822d4e70
	ctx.lr = 0x8214C450;
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-1856(r1)
	ea = -1856 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// bl 0x8211c0f0
	ctx.lr = 0x8214C474;
	sub_8211C0F0(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,24584(r11)
	REX_STORE_U32(ctx.r11.u32 + 24584, r29.u32);
	// lfs f2,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,112(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82125860
	ctx.lr = 0x8214C494;
	sub_82125860(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r8,-32169
	ctx.r8.s64 = -2108227584;
	// stfs f1,24540(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 24540, temp.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// addi r24,r31,1472
	r24.s64 = r31.s64 + 1472;
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// rlwinm r10,r11,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r11,24280(r8)
	REX_STORE_U32(ctx.r8.u32 + 24280, ctx.r11.u32);
	// li r25,0
	r25.s64 = 0;
	// lwz r8,32(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 32);
	// mr r29,r24
	r29.u64 = r24.u64;
	// addi r22,r9,24136
	r22.s64 = ctx.r9.s64 + 24136;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8214c578
	if (!ctx.cr6.gt) goto loc_8214C578;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// addi r28,r22,8
	r28.s64 = r22.s64 + 8;
	// addi r26,r11,-1472
	r26.s64 = ctx.r11.s64 + -1472;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,2020(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2020);
	f31.f64 = double(temp.f32);
	// lfs f30,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f30.f64 = double(temp.f32);
loc_8214C4F0:
	// addi r27,r28,-4
	r27.s64 = r28.s64 + -4;
	// addi r4,r28,-8
	ctx.r4.s64 = r28.s64 + -8;
	// addi r6,r27,4
	ctx.r6.s64 = r27.s64 + 4;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820e0e38
	ctx.lr = 0x8214C508;
	sub_820E0E38(ctx, base);
	// lfs f0,-8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x8214c52c
	if (ctx.cr6.gt) goto loc_8214C52C;
	// lfs f13,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// bgt cr6,0x8214c52c
	if (ctx.cr6.gt) goto loc_8214C52C;
	// lfs f13,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// ble cr6,0x8214c54c
	if (!ctx.cr6.gt) goto loc_8214C54C;
loc_8214C52C:
	// lfs f13,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f12,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fdivs f3,f30,f13
	ctx.f3.f64 = double(float(f30.f64 / ctx.f13.f64));
	// fdivs f2,f30,f12
	ctx.f2.f64 = double(float(f30.f64 / ctx.f12.f64));
	// fdivs f1,f30,f0
	ctx.f1.f64 = double(float(f30.f64 / ctx.f0.f64));
	// bl 0x820e0d78
	ctx.lr = 0x8214C54C;
	sub_820E0D78(ctx, base);
loc_8214C54C:
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8214C55C;
	sub_822D4FA0(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r29,r29,64
	r29.s64 = r29.s64 + 64;
	// addi r26,r26,64
	r26.s64 = r26.s64 + 64;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8214c4f0
	if (ctx.cr6.lt) goto loc_8214C4F0;
loc_8214C578:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x8214c590
	if (ctx.cr6.eq) goto loc_8214C590;
	// addi r4,r31,3968
	ctx.r4.s64 = r31.s64 + 3968;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,1664
	ctx.r5.s64 = 1664;
	// bl 0x822d4fa0
	ctx.lr = 0x8214C590;
	sub_822D4FA0(ctx, base);
loc_8214C590:
	// lwz r29,8(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8214c5c4
	if (ctx.cr6.eq) goto loc_8214C5C4;
	// addi r28,r31,128
	r28.s64 = r31.s64 + 128;
loc_8214C5A0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214C5B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r29,24(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 24);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8214c5a0
	if (!ctx.cr6.eq) goto loc_8214C5A0;
loc_8214C5C4:
	// lwz r29,16(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8214c5f8
	if (ctx.cr6.eq) goto loc_8214C5F8;
	// addi r28,r31,128
	r28.s64 = r31.s64 + 128;
loc_8214C5D4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214C5EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r29,24(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 24);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8214c5d4
	if (!ctx.cr6.eq) goto loc_8214C5D4;
loc_8214C5F8:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x8214c610
	if (ctx.cr6.eq) goto loc_8214C610;
	// addi r3,r31,3968
	ctx.r3.s64 = r31.s64 + 3968;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,1664
	ctx.r5.s64 = 1664;
	// bl 0x822d4fa0
	ctx.lr = 0x8214C610;
	sub_822D4FA0(ctx, base);
loc_8214C610:
	// lwz r29,12(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8214c64c
	if (ctx.cr6.eq) goto loc_8214C64C;
	// addi r27,r31,128
	r27.s64 = r31.s64 + 128;
loc_8214C620:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r28,64(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 64);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8214b1c8
	ctx.lr = 0x8214C634;
	sub_8214B1C8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8216a468
	ctx.lr = 0x8214C640;
	sub_8216A468(ctx, base);
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8214c620
	if (!ctx.cr6.eq) goto loc_8214C620;
loc_8214C64C:
	// lwz r29,20(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8214c688
	if (ctx.cr6.eq) goto loc_8214C688;
	// addi r27,r31,128
	r27.s64 = r31.s64 + 128;
loc_8214C65C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r28,64(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 64);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8214b1c8
	ctx.lr = 0x8214C670;
	sub_8214B1C8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8216a468
	ctx.lr = 0x8214C67C;
	sub_8216A468(ctx, base);
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8214c65c
	if (!ctx.cr6.eq) goto loc_8214C65C;
loc_8214C688:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// mr r29,r24
	r29.u64 = r24.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r28,r11,r31
	r28.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// bne cr6,0x8214c710
	if (!ctx.cr6.eq) goto loc_8214C710;
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8214c6f4
	if (!ctx.cr6.gt) goto loc_8214C6F4;
	// addi r27,r22,-8
	r27.s64 = r22.s64 + -8;
loc_8214C6B4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f1,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f2,12(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfsu f3,16(r27)
	ea = 16 + r27.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f3.f64 = double(temp.f32);
	r27.u32 = ea;
	// bl 0x820e0d78
	ctx.lr = 0x8214C6CC;
	sub_820E0D78(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8214C6DC;
	sub_822D4FA0(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r28,r28,64
	r28.s64 = r28.s64 + 64;
	// addi r29,r29,64
	r29.s64 = r29.s64 + 64;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8214c6b4
	if (ctx.cr6.lt) goto loc_8214C6B4;
loc_8214C6F4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,56
	ctx.r3.s64 = r30.s64 + 56;
	// bl 0x8214bbe8
	ctx.lr = 0x8214C700;
	sub_8214BBE8(ctx, base);
loc_8214C700:
	// addi r1,r1,1856
	ctx.r1.s64 = ctx.r1.s64 + 1856;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822d4ec0
	return;
loc_8214C710:
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8214c700
	if (!ctx.cr6.gt) goto loc_8214C700;
	// addi r31,r22,-8
	r31.s64 = r22.s64 + -8;
loc_8214C720:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f2,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfsu f3,16(r31)
	ea = 16 + r31.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f3.f64 = double(temp.f32);
	r31.u32 = ea;
	// bl 0x820e0d78
	ctx.lr = 0x8214C738;
	sub_820E0D78(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8214C748;
	sub_822D4FA0(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,64
	r29.s64 = r29.s64 + 64;
	// addi r28,r28,64
	r28.s64 = r28.s64 + 64;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8214c720
	if (ctx.cr6.lt) goto loc_8214C720;
	// b 0x8214c700
	goto loc_8214C700;
}

DEFINE_REX_FUNC(sub_8215CB30) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8215cd58
	if (ctx.cr0.eq) goto loc_8215CD58;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1df8
	ctx.lr = 0x8215CB68;
	sub_820E1DF8(ctx, base);
	// lfs f10,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fabs f0,f10
	ctx.f0.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x8215cd58
	if (ctx.cr6.gt) goto loc_8215CD58;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,125(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 125);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f8,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f8.f64 = double(temp.f32);
	// beq 0x8215cc4c
	if (ctx.cr0.eq) goto loc_8215CC4C;
	// lfs f12,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f11,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// fmsubs f11,f11,f0,f12
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, -ctx.f12.f64)));
	// fmsubs f12,f13,f7,f9
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, -ctx.f9.f64)));
	// fcmpu cr6,f11,f8
	ctx.cr6.compare(ctx.f11.f64, ctx.f8.f64);
	// ble cr6,0x8215cbc4
	if (!ctx.cr6.gt) goto loc_8215CBC4;
	// fcmpu cr6,f12,f8
	ctx.cr6.compare(ctx.f12.f64, ctx.f8.f64);
	// blt cr6,0x8215cbd4
	if (ctx.cr6.lt) goto loc_8215CBD4;
loc_8215CBC4:
	// fcmpu cr6,f11,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f8.f64);
	// bge cr6,0x8215cbdc
	if (!ctx.cr6.lt) goto loc_8215CBDC;
	// fcmpu cr6,f12,f8
	ctx.cr6.compare(ctx.f12.f64, ctx.f8.f64);
	// ble cr6,0x8215cbdc
	if (!ctx.cr6.gt) goto loc_8215CBDC;
loc_8215CBD4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8215cbe0
	goto loc_8215CBE0;
loc_8215CBDC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8215CBE0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8215cc4c
	if (!ctx.cr0.eq) goto loc_8215CC4C;
	// lfs f11,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f8
	ctx.cr6.compare(ctx.f12.f64, ctx.f8.f64);
	// fsubs f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f7,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// fsubs f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// lfs f5,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmadds f11,f11,f0,f9
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f9.f64)));
	// fmadds f11,f7,f5,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f7.f64, ctx.f5.f64, ctx.f11.f64)));
	// ble cr6,0x8215cc20
	if (!ctx.cr6.gt) goto loc_8215CC20;
	// fcmpu cr6,f11,f8
	ctx.cr6.compare(ctx.f11.f64, ctx.f8.f64);
	// blt cr6,0x8215cc30
	if (ctx.cr6.lt) goto loc_8215CC30;
loc_8215CC20:
	// fcmpu cr6,f12,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f8.f64);
	// bge cr6,0x8215cc38
	if (!ctx.cr6.lt) goto loc_8215CC38;
	// fcmpu cr6,f11,f8
	ctx.cr6.compare(ctx.f11.f64, ctx.f8.f64);
	// ble cr6,0x8215cc38
	if (!ctx.cr6.gt) goto loc_8215CC38;
loc_8215CC30:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8215cc3c
	goto loc_8215CC3C;
loc_8215CC38:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8215CC3C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8215cc4c
	if (!ctx.cr0.eq) goto loc_8215CC4C;
loc_8215CC44:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8215cd5c
	goto loc_8215CD5C;
loc_8215CC4C:
	// fmuls f11,f10,f10
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmsubs f10,f31,f31,f11
	ctx.f10.f64 = double(float(std::fma(f31.f64, f31.f64, -ctx.f11.f64)));
	// fmadds f11,f0,f0,f12
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f12.f64)));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x8215cc44
	if (!ctx.cr6.gt) goto loc_8215CC44;
	// lfs f11,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fmadds f11,f11,f11,f12
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f12.f64)));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// blt cr6,0x8215cc44
	if (ctx.cr6.lt) goto loc_8215CC44;
	// lfs f11,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f9,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f11,f9,f9,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f11.f64)));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// blt cr6,0x8215cc44
	if (ctx.cr6.lt) goto loc_8215CC44;
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// bge cr6,0x8215ccb4
	if (!ctx.cr6.lt) goto loc_8215CCB4;
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// blt cr6,0x8215ccb4
	if (ctx.cr6.lt) goto loc_8215CCB4;
	// lfs f12,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8215cc44
	if (!ctx.cr6.gt) goto loc_8215CC44;
loc_8215CCB4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,2004(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2004);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f9,f7
	ctx.cr6.compare(ctx.f9.f64, ctx.f7.f64);
	// ble cr6,0x8215cd04
	if (!ctx.cr6.gt) goto loc_8215CD04;
	// lfs f12,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f9,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f5,f12,f0
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmsubs f5,f11,f13,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, -ctx.f5.f64)));
	// fabs f5,f5
	ctx.f5.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fmuls f5,f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fcmpu cr6,f6,f5
	ctx.cr6.compare(ctx.f6.f64, ctx.f5.f64);
	// blt cr6,0x8215cd04
	if (ctx.cr6.lt) goto loc_8215CD04;
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmadds f12,f12,f13,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f11.f64)));
	// fcmpu cr6,f12,f8
	ctx.cr6.compare(ctx.f12.f64, ctx.f8.f64);
	// blt cr6,0x8215cd04
	if (ctx.cr6.lt) goto loc_8215CD04;
	// fcmpu cr6,f12,f9
	ctx.cr6.compare(ctx.f12.f64, ctx.f9.f64);
	// ble cr6,0x8215cc44
	if (!ctx.cr6.gt) goto loc_8215CC44;
loc_8215CD04:
	// lfs f9,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f9,f7
	ctx.cr6.compare(ctx.f9.f64, ctx.f7.f64);
	// ble cr6,0x8215cd58
	if (!ctx.cr6.gt) goto loc_8215CD58;
	// lfs f12,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f12,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmsubs f7,f11,f13,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, -ctx.f7.f64)));
	// fabs f7,f7
	ctx.f7.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fmuls f7,f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fcmpu cr6,f10,f7
	ctx.cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// blt cr6,0x8215cd58
	if (ctx.cr6.lt) goto loc_8215CD58;
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// blt cr6,0x8215cd58
	if (ctx.cr6.lt) goto loc_8215CD58;
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// ble cr6,0x8215cd5c
	if (!ctx.cr6.gt) goto loc_8215CD5C;
loc_8215CD58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8215CD5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

DEFINE_REX_FUNC(sub_8216B550) {
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
	// bl 0x82169520
	ctx.lr = 0x8216B570;
	sub_82169520(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216aea8
	ctx.lr = 0x8216B57C;
	sub_8216AEA8(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r9,100(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r8,104(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 104);
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// stw r10,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r9,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// stw r8,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r8.u32);
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

DEFINE_REX_FUNC(sub_8216C218) {
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
	ctx.lr = 0x8216C220;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8216c268
	if (!ctx.cr6.eq) goto loc_8216C268;
	// lwz r10,112(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r10,164(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 164);
	// lfs f0,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,192(r10)
	REX_STORE_U32(ctx.r10.u32 + 192, ctx.r11.u32);
	// lwz r10,112(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r10,168(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 168);
	// stw r11,192(r10)
	REX_STORE_U32(ctx.r10.u32 + 192, ctx.r11.u32);
	// stfs f0,220(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// stw r8,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r8.u32);
	// b 0x8216c3ac
	goto loc_8216C3AC;
loc_8216C268:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r3,3840
	ctx.r3.s64 = 251658240;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// ori r3,r3,74
	ctx.r3.u64 = ctx.r3.u64 | 74;
	// lwz r4,344(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x8216C280;
	sub_820E68B8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,-8564
	r31.s64 = ctx.r11.s64 + -8564;
	// li r8,-1
	ctx.r8.s64 = -1;
	// lfd f31,26664(r10)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 26664);
	// li r5,1
	ctx.r5.s64 = 1;
	// stfd f31,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f31,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f31.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x821eacb0
	ctx.lr = 0x8216C2C0;
	sub_821EACB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r11,21804
	ctx.r5.s64 = ctx.r11.s64 + 21804;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eb1a0
	ctx.lr = 0x8216C2D8;
	sub_821EB1A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x8216c2fc
	if (ctx.cr6.eq) goto loc_8216C2FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,28076(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28076);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_8216C2FC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8216c314
	if (!ctx.cr6.gt) goto loc_8216C314;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_8216C314:
	// stfd f31,48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 48, f31.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f1,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821eacb0
	ctx.lr = 0x8216C33C;
	sub_821EACB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r5,r9,-8572
	ctx.r5.s64 = ctx.r9.s64 + -8572;
	// lfs f2,-18584(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -18584);
	ctx.f2.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,15632(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15632);
	ctx.f1.f64 = double(temp.f32);
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// bl 0x821eaf80
	ctx.lr = 0x8216C370;
	sub_821EAF80(ctx, base);
	// stfd f31,32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 32, f31.u64);
	// stfd f31,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f31.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// addi r3,r11,-24464
	ctx.r3.s64 = ctx.r11.s64 + -24464;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821eacb0
	ctx.lr = 0x8216C394;
	sub_821EACB0(ctx, base);
	// b 0x8216c3ac
	goto loc_8216C3AC;
loc_8216C398:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x8216c3ac
	if (!ctx.cr6.eq) goto loc_8216C3AC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8216c1b0
	ctx.lr = 0x8216C3AC;
	sub_8216C1B0(ctx, base);
loc_8216C3AC:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r3,100(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 100);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824d3eac
	ctx.lr = 0x8216C3C0;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8216c398
	if (!ctx.cr0.eq) goto loc_8216C398;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82171B70) {
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
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// addi r7,r10,27576
	ctx.r7.s64 = ctx.r10.s64 + 27576;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r8,r7,24
	ctx.r8.s64 = ctx.r7.s64 + 24;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82171358
	ctx.lr = 0x82171BA4;
	sub_82171358(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-7256
	ctx.r11.s64 = ctx.r11.s64 + -7256;
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

DEFINE_REX_FUNC(sub_82172450) {
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
	// bl 0x822d4e88
	ctx.lr = 0x82172458;
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r28,r11,13128
	r28.s64 = ctx.r11.s64 + 13128;
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lfs f30,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f30.f64 = double(temp.f32);
	// blt cr6,0x821724e4
	if (ctx.cr6.lt) goto loc_821724E4;
	// beq cr6,0x82172a98
	if (ctx.cr6.eq) goto loc_82172A98;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x821724b8
	if (ctx.cr6.lt) goto loc_821724B8;
	// bne cr6,0x82172c38
	if (!ctx.cr6.eq) goto loc_82172C38;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// li r29,1
	r29.s64 = 1;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// bl 0x821affa8
	ctx.lr = 0x821724A8;
	sub_821AFFA8(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// sth r29,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, r29.u16);
	// b 0x82172c38
	goto loc_82172C38;
loc_821724B8:
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 92);
	// bl 0x8245e260
	ctx.lr = 0x821724C0;
	sub_8245E260(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x82172c38
	if (ctx.cr6.eq) goto loc_82172C38;
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 92);
	// bl 0x8245e260
	ctx.lr = 0x821724D0;
	sub_8245E260(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// beq cr6,0x82172c38
	if (ctx.cr6.eq) goto loc_82172C38;
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// stw r11,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r11.u32);
	// b 0x82172c38
	goto loc_82172C38;
loc_821724E4:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// andi. r11,r11,16416
	ctx.r11.u64 = ctx.r11.u64 & 16416;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82172bbc
	if (!ctx.cr0.eq) goto loc_82172BBC;
	// lbz r11,1888(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 1888);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82172bbc
	if (ctx.cr6.eq) goto loc_82172BBC;
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// li r29,1
	r29.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r11.u32);
	// beq 0x8217257c
	if (ctx.cr0.eq) goto loc_8217257C;
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stb r29,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, r29.u8);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stb r29,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, r29.u8);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// bne cr6,0x82172554
	if (!ctx.cr6.eq) goto loc_82172554;
	// stb r30,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, r30.u8);
	// b 0x82172558
	goto loc_82172558;
loc_82172554:
	// stb r29,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, r29.u8);
loc_82172558:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r10,216(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// bge cr6,0x821725a8
	if (!ctx.cr6.lt) goto loc_821725A8;
	// stb r29,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, r29.u8);
	// b 0x821725ac
	goto loc_821725AC;
loc_8217257C:
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stb r30,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, r30.u8);
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stb r30,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, r30.u8);
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stb r30,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, r30.u8);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
loc_821725A8:
	// stb r30,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, r30.u8);
loc_821725AC:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm. r10,r11,0,20,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC00;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821725dc
	if (!ctx.cr0.eq) goto loc_821725DC;
loc_821725BC:
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// addis r3,r11,1280
	ctx.r3.s64 = ctx.r11.s64 + 83886080;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,34
	ctx.r3.s64 = ctx.r3.s64 + 34;
	// bl 0x82101d88
	ctx.lr = 0x821725D8;
	sub_82101D88(ctx, base);
	// b 0x82172c38
	goto loc_82172C38;
loc_821725DC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f31,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// beq 0x82172630
	if (ctx.cr0.eq) goto loc_82172630;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f31,156(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// stfs f31,160(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// stfs f30,164(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 164, temp.u32);
	// lfs f0,-6852(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6852);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
loc_82172604:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r11.u32);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// ble cr6,0x8217261c
	if (!ctx.cr6.gt) goto loc_8217261C;
	// stw r30,176(r31)
	REX_STORE_U32(r31.u32 + 176, r30.u32);
loc_8217261C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,176(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 176);
	// bl 0x821700d0
	ctx.lr = 0x82172628;
	sub_821700D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82172604
	if (ctx.cr0.eq) goto loc_82172604;
loc_82172630:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82172684
	if (ctx.cr0.eq) goto loc_82172684;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// stfs f31,160(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// stfs f30,164(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 164, temp.u32);
	// lfs f0,15632(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15632);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
loc_82172658:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r11.u32);
	// bge 0x82172670
	if (!ctx.cr0.lt) goto loc_82172670;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r11.u32);
loc_82172670:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,176(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 176);
	// bl 0x821700d0
	ctx.lr = 0x8217267C;
	sub_821700D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82172658
	if (ctx.cr0.eq) goto loc_82172658;
loc_82172684:
	// li r3,18
	ctx.r3.s64 = 18;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8212bc38
	ctx.lr = 0x82172690;
	sub_8212BC38(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// stw r30,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, r30.u32);
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bgt cr6,0x82172a90
	if (ctx.cr6.gt) goto loc_82172A90;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,-7728
	ctx.r12.s64 = ctx.r12.s64 + -7728;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32233
	ctx.r12.s64 = -2112421888;
	// nop 
	// addi r12,r12,9932
	ctx.r12.s64 = ctx.r12.s64 + 9932;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_821726CC;
	case 1:
		goto loc_8217270C;
	case 2:
		goto loc_8217274C;
	case 3:
		goto loc_82172780;
	case 4:
		goto loc_821727C0;
	case 5:
		goto loc_821727F4;
	case 6:
		goto loc_82172834;
	case 7:
		goto loc_82172868;
	case 8:
		goto loc_8217289C;
	case 9:
		goto loc_821728D0;
	case 10:
		goto loc_82172904;
	case 11:
		goto loc_82172938;
	case 12:
		goto loc_82172978;
	case 13:
		goto loc_821729AC;
	case 14:
		goto loc_821729E0;
	case 15:
		goto loc_82172A14;
	case 16:
		goto loc_82172A48;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_821726CC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-6860
	ctx.r6.s64 = ctx.r11.s64 + -6860;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7d50
	ctx.lr = 0x821726F0;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82172a88
	if (ctx.cr0.eq) goto loc_82172A88;
	// li r6,14
	ctx.r6.s64 = 14;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,136
	ctx.r4.s64 = r31.s64 + 136;
	// bl 0x82171b70
	ctx.lr = 0x82172708;
	sub_82171B70(ctx, base);
	// b 0x82172a8c
	goto loc_82172A8C;
loc_8217270C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,25868
	ctx.r6.s64 = ctx.r11.s64 + 25868;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7d50
	ctx.lr = 0x82172730;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82172a88
	if (ctx.cr0.eq) goto loc_82172A88;
	// li r6,0
	ctx.r6.s64 = 0;
loc_8217273C:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,136
	ctx.r4.s64 = r31.s64 + 136;
	// bl 0x82171c58
	ctx.lr = 0x82172748;
	sub_82171C58(ctx, base);
	// b 0x82172a8c
	goto loc_82172A8C;
loc_8217274C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-6872
	ctx.r6.s64 = ctx.r11.s64 + -6872;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7d50
	ctx.lr = 0x82172770;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82172a88
	if (ctx.cr0.eq) goto loc_82172A88;
	// li r6,6
	ctx.r6.s64 = 6;
	// b 0x8217273c
	goto loc_8217273C;
loc_82172780:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-8168
	ctx.r6.s64 = ctx.r11.s64 + -8168;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7d50
	ctx.lr = 0x821727A4;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82172a88
	if (ctx.cr0.eq) goto loc_82172A88;
	// li r6,15
	ctx.r6.s64 = 15;
loc_821727B0:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,136
	ctx.r4.s64 = r31.s64 + 136;
	// bl 0x82171d88
	ctx.lr = 0x821727BC;
	sub_82171D88(ctx, base);
	// b 0x82172a8c
	goto loc_82172A8C;
loc_821727C0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-6880
	ctx.r6.s64 = ctx.r11.s64 + -6880;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7d50
	ctx.lr = 0x821727E4;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82172a88
	if (ctx.cr0.eq) goto loc_82172A88;
	// li r6,16
	ctx.r6.s64 = 16;
	// b 0x821727b0
	goto loc_821727B0;
loc_821727F4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-6888
	ctx.r6.s64 = ctx.r11.s64 + -6888;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7d50
	ctx.lr = 0x82172818;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82172a88
	if (ctx.cr0.eq) goto loc_82172A88;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82172824:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,136
	ctx.r4.s64 = r31.s64 + 136;
	// bl 0x82171eb8
	ctx.lr = 0x82172830;
	sub_82171EB8(ctx, base);
	// b 0x82172a8c
	goto loc_82172A8C;
loc_82172834:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-6896
	ctx.r6.s64 = ctx.r11.s64 + -6896;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7d50
	ctx.lr = 0x82172858;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82172a88
	if (ctx.cr0.eq) goto loc_82172A88;
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x82172824
	goto loc_82172824;
loc_82172868:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-6904
	ctx.r6.s64 = ctx.r11.s64 + -6904;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7d50
	ctx.lr = 0x8217288C;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82172a88
	if (ctx.cr0.eq) goto loc_82172A88;
	// li r6,3
	ctx.r6.s64 = 3;
	// b 0x82172824
	goto loc_82172824;
loc_8217289C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-6912
	ctx.r6.s64 = ctx.r11.s64 + -6912;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7d50
	ctx.lr = 0x821728C0;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82172a88
	if (ctx.cr0.eq) goto loc_82172A88;
	// li r6,7
	ctx.r6.s64 = 7;
	// b 0x82172824
	goto loc_82172824;
loc_821728D0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-6920
	ctx.r6.s64 = ctx.r11.s64 + -6920;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7d50
	ctx.lr = 0x821728F4;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82172a88
	if (ctx.cr0.eq) goto loc_82172A88;
	// li r6,8
	ctx.r6.s64 = 8;
	// b 0x82172824
	goto loc_82172824;
loc_82172904:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-6928
	ctx.r6.s64 = ctx.r11.s64 + -6928;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7d50
	ctx.lr = 0x82172928;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82172a88
	if (ctx.cr0.eq) goto loc_82172A88;
	// li r6,9
	ctx.r6.s64 = 9;
	// b 0x82172824
	goto loc_82172824;
loc_82172938:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-6932
	ctx.r6.s64 = ctx.r11.s64 + -6932;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7d50
	ctx.lr = 0x8217295C;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82172a88
	if (ctx.cr0.eq) goto loc_82172A88;
	// li r6,4
	ctx.r6.s64 = 4;
loc_82172968:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,136
	ctx.r4.s64 = r31.s64 + 136;
	// bl 0x82171f18
	ctx.lr = 0x82172974;
	sub_82171F18(ctx, base);
	// b 0x82172a8c
	goto loc_82172A8C;
loc_82172978:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-6940
	ctx.r6.s64 = ctx.r11.s64 + -6940;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7d50
	ctx.lr = 0x8217299C;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82172a88
	if (ctx.cr0.eq) goto loc_82172A88;
	// li r6,10
	ctx.r6.s64 = 10;
	// b 0x82172968
	goto loc_82172968;
loc_821729AC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-6948
	ctx.r6.s64 = ctx.r11.s64 + -6948;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7d50
	ctx.lr = 0x821729D0;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82172a88
	if (ctx.cr0.eq) goto loc_82172A88;
	// li r6,11
	ctx.r6.s64 = 11;
	// b 0x82172968
	goto loc_82172968;
loc_821729E0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-6956
	ctx.r6.s64 = ctx.r11.s64 + -6956;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7d50
	ctx.lr = 0x82172A04;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82172a88
	if (ctx.cr0.eq) goto loc_82172A88;
	// li r6,12
	ctx.r6.s64 = 12;
	// b 0x82172968
	goto loc_82172968;
loc_82172A14:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-6964
	ctx.r6.s64 = ctx.r11.s64 + -6964;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7d50
	ctx.lr = 0x82172A38;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82172a88
	if (ctx.cr0.eq) goto loc_82172A88;
	// li r6,5
	ctx.r6.s64 = 5;
	// b 0x82172a78
	goto loc_82172A78;
loc_82172A48:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-6972
	ctx.r6.s64 = ctx.r11.s64 + -6972;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7d50
	ctx.lr = 0x82172A6C;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82172a88
	if (ctx.cr0.eq) goto loc_82172A88;
	// li r6,13
	ctx.r6.s64 = 13;
loc_82172A78:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,136
	ctx.r4.s64 = r31.s64 + 136;
	// bl 0x82172048
	ctx.lr = 0x82172A84;
	sub_82172048(ctx, base);
	// b 0x82172a8c
	goto loc_82172A8C;
loc_82172A88:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82172A8C:
	// stw r3,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r3.u32);
loc_82172A90:
	// stfs f31,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 184, temp.u32);
	// stw r29,172(r31)
	REX_STORE_U32(r31.u32 + 172, r29.u32);
loc_82172A98:
	// lfs f0,1840(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,188(r31)
	REX_STORE_U32(r31.u32 + 188, r30.u32);
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// lfs f13,184(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 184, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,29356(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 29356);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stb r30,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, r30.u8);
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stb r30,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, r30.u8);
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stb r30,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, r30.u8);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stb r30,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, r30.u8);
	// lfs f0,184(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82172b50
	if (ctx.cr6.lt) goto loc_82172B50;
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r11,r31,120
	ctx.r11.s64 = r31.s64 + 120;
	// stb r9,36(r10)
	REX_STORE_U8(ctx.r10.u32 + 36, ctx.r9.u8);
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// stw r10,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,84(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stw r30,100(r31)
	REX_STORE_U32(r31.u32 + 100, r30.u32);
	// stw r9,84(r10)
	REX_STORE_U32(ctx.r10.u32 + 84, ctx.r9.u32);
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r7,112(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 112);
	// stw r7,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r7.u32);
	// lwz r6,104(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r8,116(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 108);
	// stw r9,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r9.u32);
	// stw r6,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r6.u32);
	// stw r8,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r8.u32);
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// stw r11,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r11.u32);
	// stw r30,172(r31)
	REX_STORE_U32(r31.u32 + 172, r30.u32);
	// b 0x821725bc
	goto loc_821725BC;
loc_82172B50:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,-30112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30112);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,2012(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2012);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x820e0028
	ctx.lr = 0x82172B6C;
	sub_820E0028(ctx, base);
	// fmuls f31,f1,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// addi r30,r31,152
	r30.s64 = r31.s64 + 152;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820e1cc0
	ctx.lr = 0x82172B84;
	sub_820E1CC0(ctx, base);
	// addi r29,r31,104
	r29.s64 = r31.s64 + 104;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x820e1b28
	ctx.lr = 0x82172B98;
	sub_820E1B28(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fsubs f1,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f30.f64 - f31.f64));
	// bl 0x820e1cc0
	ctx.lr = 0x82172BA8;
	sub_820E1CC0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x820e1ba8
	ctx.lr = 0x82172BB8;
	sub_820E1BA8(ctx, base);
	// b 0x821725bc
	goto loc_821725BC;
loc_82172BBC:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// li r30,0
	r30.s64 = 0;
	// stw r30,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, r30.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r3,88(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, r30.u32);
	// beq cr6,0x82172be0
	if (ctx.cr6.eq) goto loc_82172BE0;
	// bl 0x82101d68
	ctx.lr = 0x82172BE0;
	sub_82101D68(ctx, base);
loc_82172BE0:
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 92);
	// bl 0x82101d68
	ctx.lr = 0x82172BE8;
	sub_82101D68(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,15
	ctx.r3.s64 = 15;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stb r30,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, r30.u8);
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stb r30,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, r30.u8);
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stb r30,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, r30.u8);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stb r30,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, r30.u8);
	// bl 0x8212bc38
	ctx.lr = 0x82172C28;
	sub_8212BC38(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r11.u32);
	// stw r10,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r10.u32);
loc_82172C38:
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82172c4c
	if (ctx.cr6.eq) goto loc_82172C4C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82172d90
	if (!ctx.cr6.eq) goto loc_82172D90;
loc_82172C4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821eb2c0
	ctx.lr = 0x82172C54;
	sub_821EB2C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,-7656
	ctx.r3.s64 = ctx.r10.s64 + -7656;
	// lfd f1,26664(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 26664);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x82172C7C;
	sub_821EACB0(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// addi r30,r11,432
	r30.s64 = ctx.r11.s64 + 432;
	// ori r3,r3,142
	ctx.r3.u64 = ctx.r3.u64 | 142;
	// lwz r4,344(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x82172C94;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,-7000
	ctx.r5.s64 = ctx.r11.s64 + -7000;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// li r7,99
	ctx.r7.s64 = 99;
	// bl 0x821eb1a0
	ctx.lr = 0x82172CB0;
	sub_821EB1A0(ctx, base);
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// lwz r4,344(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 344);
	// ori r3,r3,142
	ctx.r3.u64 = ctx.r3.u64 | 142;
	// lwz r31,180(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 180);
	// bl 0x820e68b8
	ctx.lr = 0x82172CC4;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r9,-7040
	ctx.r3.s64 = ctx.r9.s64 + -7040;
	// lfs f0,26792(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26792);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r31,1
	ctx.r7.s64 = r31.s64 + 1;
	// lfd f31,-7008(r10)
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + -7008);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// stfd f31,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f31.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x821eacb0
	ctx.lr = 0x82172D04;
	sub_821EACB0(ctx, base);
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,26800
	ctx.r3.s64 = ctx.r11.s64 + 26800;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8216e7b0
	ctx.lr = 0x82172D1C;
	sub_8216E7B0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,9999
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9999, ctx.xer);
	// ble cr6,0x82172d3c
	if (!ctx.cr6.gt) goto loc_82172D3C;
	// li r10,59
	ctx.r10.s64 = 59;
	// li r11,9999
	ctx.r11.s64 = 9999;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82172D3C:
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// lwz r4,344(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 344);
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// ori r3,r3,141
	ctx.r3.u64 = ctx.r3.u64 | 141;
	// lwz r29,88(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x820e68b8
	ctx.lr = 0x82172D58;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfd f31,32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 32, f31.u64);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// addi r3,r10,-7080
	ctx.r3.s64 = ctx.r10.s64 + -7080;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lfd f1,28704(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 28704);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x82172D90;
	sub_821EACB0(ctx, base);
loc_82172D90:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8218E9F0) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r10,r10,-32480
	ctx.r10.s64 = ctx.r10.s64 + -32480;
	// lwz r9,30792(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 30792);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,30792(r11)
	REX_STORE_U32(ctx.r11.u32 + 30792, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218F040) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e84
	ctx.lr = 0x8218F048;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r30,5
	r30.s64 = 5;
	// addi r28,r11,11040
	r28.s64 = ctx.r11.s64 + 11040;
	// li r27,0
	r27.s64 = 0;
	// addi r11,r28,632
	ctx.r11.s64 = r28.s64 + 632;
	// addi r31,r11,8
	r31.s64 = ctx.r11.s64 + 8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
loc_8218F074:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r3,r31,-8
	ctx.r3.s64 = r31.s64 + -8;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,10124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 10124);
	// stfs f31,4(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
	// stw r11,-4(r31)
	REX_STORE_U32(r31.u32 + -4, ctx.r11.u32);
	// bl 0x8218ec18
	ctx.lr = 0x8218F094;
	sub_8218EC18(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,128
	r31.s64 = r31.s64 + 128;
	// bne 0x8218f074
	if (!ctx.cr0.eq) goto loc_8218F074;
	// li r11,26
	ctx.r11.s64 = 26;
	// addi r10,r28,520
	ctx.r10.s64 = r28.s64 + 520;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8218F0B4:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8218f0b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218F0B4;
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8218f0e8
	if (!ctx.cr6.eq) goto loc_8218F0E8;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8218efb0
	ctx.lr = 0x8218F0D8;
	sub_8218EFB0(ctx, base);
	// stw r27,40(r29)
	REX_STORE_U32(r29.u32 + 40, r27.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8218ec90
	ctx.lr = 0x8218F0E8;
	sub_8218EC90(ctx, base);
loc_8218F0E8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,28(r29)
	REX_STORE_U32(r29.u32 + 28, ctx.r10.u32);
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 56, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82192B28) {
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
	ctx.lr = 0x82192B30;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// addi r29,r31,92
	r29.s64 = r31.s64 + 92;
	// lwz r28,148(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 148);
	// bl 0x82191bb0
	ctx.lr = 0x82192B4C;
	sub_82191BB0(ctx, base);
	// stfd f1,48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f1.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r11,3672
	ctx.r5.s64 = ctx.r11.s64 + 3672;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// bl 0x821eb1a0
	ctx.lr = 0x82192B70;
	sub_821EB1A0(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// addi r29,r31,112
	r29.s64 = r31.s64 + 112;
	// addi r28,r31,108
	r28.s64 = r31.s64 + 108;
	// lwz r4,344(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x82192B90;
	sub_820E68B8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82191bb0
	ctx.lr = 0x82192B9C;
	sub_82191BB0(ctx, base);
	// stfd f1,48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f1.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r11,3656
	ctx.r5.s64 = ctx.r11.s64 + 3656;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// bl 0x821eb1a0
	ctx.lr = 0x82192BC0;
	sub_821EB1A0(ctx, base);
	// lfs f0,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,108(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82192bd4
	if (ctx.cr6.gt) goto loc_82192BD4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82192BD4:
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// lfs f0,20484(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20484);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// cmpwi cr6,r11,500
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 500, ctx.xer);
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r10,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// bgt cr6,0x82192c20
	if (ctx.cr6.gt) goto loc_82192C20;
	// li r29,500
	r29.s64 = 500;
loc_82192C20:
	// cmpwi cr6,r10,200
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 200, ctx.xer);
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// bgt cr6,0x82192c30
	if (ctx.cr6.gt) goto loc_82192C30;
	// li r30,200
	r30.s64 = 200;
loc_82192C30:
	// srawi r11,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r11.s64 = r29.s32 >> 1;
	// li r3,10
	ctx.r3.s64 = 10;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// subfic r11,r11,640
	ctx.xer.ca = ctx.r11.u32 <= 640;
	ctx.r11.u64 = static_cast<uint64_t>(640) - ctx.r11.u64;
	// srawi r10,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r10.s64 = r30.s32 >> 1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// subfic r11,r10,360
	ctx.xer.ca = ctx.r10.u32 <= 360;
	ctx.r11.u64 = static_cast<uint64_t>(360) - ctx.r10.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f13,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// bl 0x82191bb0
	ctx.lr = 0x82192C80;
	sub_82191BB0(ctx, base);
	// extsw r11,r29
	ctx.r11.s64 = r29.s32;
	// extsw r9,r30
	ctx.r9.s64 = r30.s32;
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f13,120(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// std r9,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r9.u64);
	// lfd f12,120(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfs f7,16200(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16200);
	ctx.f7.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f1,132(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// addi r10,r31,144
	ctx.r10.s64 = r31.s64 + 144;
	// lfs f2,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,124(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f1.f64 = double(temp.f32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// fmr f3,f0
	ctx.f3.f64 = ctx.f0.f64;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// fmr f6,f7
	ctx.f6.f64 = ctx.f7.f64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// frsp f4,f13
	ctx.f4.f64 = double(float(ctx.f13.f64));
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// frsp f5,f12
	ctx.f5.f64 = double(float(ctx.f12.f64));
	// bl 0x82104548
	ctx.lr = 0x82192CE8;
	sub_82104548(ctx, base);
	// stw r3,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r3.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8219B998) {
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
	ctx.lr = 0x8219B9A0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// add r29,r11,r7
	r29.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r31,r10,r7
	r31.u64 = ctx.r10.u64 + ctx.r7.u64;
	// beq cr6,0x8219ba14
	if (ctx.cr6.eq) goto loc_8219BA14;
	// lfs f0,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,20(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lfs f0,24(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f0,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f1,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e20b0
	ctx.lr = 0x8219BA14;
	sub_820E20B0(ctx, base);
loc_8219BA14:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1df8
	ctx.lr = 0x8219BA24;
	sub_820E1DF8(ctx, base);
	// lfs f13,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f13,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// beq cr6,0x8219ba64
	if (ctx.cr6.eq) goto loc_8219BA64;
	// bl 0x821feec8
	ctx.lr = 0x8219BA54;
	sub_821FEEC8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x820e20b0
	ctx.lr = 0x8219BA64;
	sub_820E20B0(ctx, base);
loc_8219BA64:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8219FDF0) {
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
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// stw r10,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// bl 0x8219fac8
	ctx.lr = 0x8219FE14;
	sub_8219FAC8(ctx, base);
	// bl 0x8219fb40
	ctx.lr = 0x8219FE18;
	sub_8219FB40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A0BA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r10,56(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,48(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f11.f64 = double(temp.f32);
loc_821A0BD8:
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r11,r10,-64
	ctx.r11.s64 = ctx.r10.s64 + -64;
	// addi r10,r10,3072
	ctx.r10.s64 = ctx.r10.s64 + 3072;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821A0BE8:
	// stfs f11,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f13,60(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfsu f12,64(r11)
	ea = 64 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821a0be8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A0BE8;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821a0bd8
	if (ctx.cr6.lt) goto loc_821A0BD8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A26B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821A26C0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// addi r31,r3,28
	r31.s64 = ctx.r3.s64 + 28;
	// li r30,2
	r30.s64 = 2;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r29,116(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
loc_821A26E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lbz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 108);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821a2700
	if (ctx.cr0.eq) goto loc_821A2700;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lbz r4,24(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 24);
	// bl 0x821a3d18
	ctx.lr = 0x821A2700;
	sub_821A3D18(ctx, base);
loc_821A2700:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x821a26e4
	if (!ctx.cr0.eq) goto loc_821A26E4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821A34D0) {
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
	ctx.lr = 0x821A34D8;
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r6,r9,6964
	ctx.r6.s64 = ctx.r9.s64 + 6964;
	// addi r9,r11,11616
	ctx.r9.s64 = ctx.r11.s64 + 11616;
	// addi r8,r10,13304
	ctx.r8.s64 = ctx.r10.s64 + 13304;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x821f7d50
	ctx.lr = 0x821A351C;
	sub_821F7D50(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a353c
	if (ctx.cr0.eq) goto loc_821A353C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r10,r10,31764
	ctx.r10.s64 = ctx.r10.s64 + 31764;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821a3540
	goto loc_821A3540;
loc_821A353C:
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_821A3540:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x821a35fc
	if (ctx.cr6.eq) goto loc_821A35FC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,140(r30)
	REX_STORE_U32(r30.u32 + 140, r30.u32);
	// addi r31,r30,80
	r31.s64 = r30.s64 + 80;
	// stw r29,144(r30)
	REX_STORE_U32(r30.u32 + 144, r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// stw r11,80(r30)
	REX_STORE_U32(r30.u32 + 80, ctx.r11.u32);
	// stw r28,128(r30)
	REX_STORE_U32(r30.u32 + 128, r28.u32);
	// stw r27,132(r30)
	REX_STORE_U32(r30.u32 + 132, r27.u32);
	// lfs f1,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// stw r26,136(r30)
	REX_STORE_U32(r30.u32 + 136, r26.u32);
	// stfs f1,84(r30)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 84, temp.u32);
	// stw r25,100(r30)
	REX_STORE_U32(r30.u32 + 100, r25.u32);
	// beq cr6,0x821a3580
	if (ctx.cr6.eq) goto loc_821A3580;
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
loc_821A3580:
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// addi r5,r31,8
	ctx.r5.s64 = r31.s64 + 8;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f31,-30120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -30120);
	f31.f64 = double(temp.f32);
	// lfs f2,3896(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3896);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// bl 0x821a23f8
	ctx.lr = 0x821A35B8;
	sub_821A23F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a35f4
	if (ctx.cr0.eq) goto loc_821A35F4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r5,r31,12
	ctx.r5.s64 = r31.s64 + 12;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f2,28316(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28316);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,26864(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26864);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821a2bd0
	ctx.lr = 0x821A35E4;
	sub_821A2BD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a35f4
	if (ctx.cr0.eq) goto loc_821A35F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x821a3600
	goto loc_821A3600;
loc_821A35F4:
	// li r11,12
	ctx.r11.s64 = 12;
	// stb r11,36(r30)
	REX_STORE_U8(r30.u32 + 36, ctx.r11.u8);
loc_821A35FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A3600:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_821A7EA8) {
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
	ctx.lr = 0x821A7EB0;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821eb2c0
	ctx.lr = 0x821A7EC4;
	sub_821EB2C0(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// addi r30,r11,432
	r30.s64 = ctx.r11.s64 + 432;
	// ori r3,r3,170
	ctx.r3.u64 = ctx.r3.u64 | 170;
	// lwz r4,344(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x821A7EDC;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r29,r9,28100
	r29.s64 = ctx.r9.s64 + 28100;
	// lfd f2,7400(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + 7400);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfd f1,7392(r10)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + 7392);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x821A7F14;
	sub_821EACB0(ctx, base);
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// lwz r4,344(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 344);
	// ori r3,r3,258
	ctx.r3.u64 = ctx.r3.u64 | 258;
	// bl 0x820e68b8
	ctx.lr = 0x821A7F24;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f2,7384(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + 7384);
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfd f31,7376(r10)
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 7376);
	// stfd f31,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f31.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821eacb0
	ctx.lr = 0x821A7F58;
	sub_821EACB0(ctx, base);
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// lwz r4,344(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 344);
	// ori r3,r3,260
	ctx.r3.u64 = ctx.r3.u64 | 260;
	// bl 0x820e68b8
	ctx.lr = 0x821A7F68;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfd f31,24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 24, f31.u64);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfd f31,7368(r11)
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 7368);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// stfd f31,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f31.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x821eacb0
	ctx.lr = 0x821A7F98;
	sub_821EACB0(ctx, base);
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// lwz r4,344(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 344);
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// bl 0x820e68b8
	ctx.lr = 0x821A7FA8;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f1,7360(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 7360);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stfd f31,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f31.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821eacb0
	ctx.lr = 0x821A7FD4;
	sub_821EACB0(ctx, base);
	// bl 0x821afdb0
	ctx.lr = 0x821A7FD8;
	sub_821AFDB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821a8078
	if (!ctx.cr0.eq) goto loc_821A8078;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r9,r11,13128
	ctx.r9.s64 = ctx.r11.s64 + 13128;
	// lwz r11,1092(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 1092);
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821a8030
	if (ctx.cr0.eq) goto loc_821A8030;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_821A8000:
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r8,r8,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x821a8024
	if (!ctx.cr0.eq) goto loc_821A8024;
	// addi r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 + 136;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,136
	ctx.r9.s64 = ctx.r9.s64 + 136;
	// cmplwi cr6,r11,544
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 544, ctx.xer);
	// blt cr6,0x821a8000
	if (ctx.cr6.lt) goto loc_821A8000;
	// b 0x821a8028
	goto loc_821A8028;
loc_821A8024:
	// stw r10,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r10.u32);
loc_821A8028:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x821a8074
	goto loc_821A8074;
loc_821A8030:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821a8048
	if (ctx.cr0.eq) goto loc_821A8048;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-8552
	ctx.r3.s64 = ctx.r11.s64 + -8552;
	// bl 0x82208e10
	ctx.lr = 0x821A8048;
	sub_82208E10(ctx, base);
loc_821A8048:
	// andi. r11,r11,16416
	ctx.r11.u64 = ctx.r11.u64 & 16416;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821a8078
	if (ctx.cr0.eq) goto loc_821A8078;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,30
	ctx.r4.s64 = 30;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f3,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x821afa50
	ctx.lr = 0x821A8070;
	sub_821AFA50(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
loc_821A8074:
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
loc_821A8078:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821B0D38) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r11,r11,-7072
	ctx.r11.s64 = ctx.r11.s64 + -7072;
	// lwz r10,116(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821b0d58
	if (ctx.cr6.eq) goto loc_821B0D58;
	// lhz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 19, ctx.xer);
	// beq cr6,0x821b0d80
	if (ctx.cr6.eq) goto loc_821B0D80;
loc_821B0D58:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r10,r10,3812
	ctx.r10.u64 = ctx.r10.u64 | 3812;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821b0d88
	if (ctx.cr6.eq) goto loc_821B0D88;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r10,r10,3784
	ctx.r10.u64 = ctx.r10.u64 | 3784;
	// lhzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bne cr6,0x821b0d88
	if (!ctx.cr6.eq) goto loc_821B0D88;
loc_821B0D80:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_821B0D88:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B1958) {
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,504(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 504);
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x821b19b4
	if (ctx.cr6.eq) goto loc_821B19B4;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x821b19b4
	if (ctx.cr6.eq) goto loc_821B19B4;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r31,r11,-7072
	r31.s64 = ctx.r11.s64 + -7072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c8d68
	ctx.lr = 0x821B1994;
	sub_821C8D68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821b19b4
	if (!ctx.cr0.eq) goto loc_821B19B4;
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821c8d68
	ctx.lr = 0x821B19A8;
	sub_821C8D68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x821b19b8
	if (ctx.cr0.eq) goto loc_821B19B8;
loc_821B19B4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821B19B8:
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

DEFINE_REX_FUNC(sub_821B3420) {
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
	// bl 0x821b3168
	ctx.lr = 0x821B3438;
	sub_821B3168(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821b346c
	if (!ctx.cr0.eq) goto loc_821B346C;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,432
	ctx.r10.s64 = ctx.r10.s64 + 432;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r9,-27096
	ctx.r3.s64 = ctx.r9.s64 + -27096;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r11,72(r10)
	REX_STORE_U16(ctx.r10.u32 + 72, ctx.r11.u16);
	// bl 0x821a1130
	ctx.lr = 0x821B3464;
	sub_821A1130(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821b34d8
	goto loc_821B34D8;
loc_821B346C:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r30,r11,432
	r30.s64 = ctx.r11.s64 + 432;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,1996(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// stfs f0,556(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 556, temp.u32);
	// sth r11,72(r30)
	REX_STORE_U16(r30.u32 + 72, ctx.r11.u16);
	// stfs f0,552(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 552, temp.u32);
	// stw r10,340(r30)
	REX_STORE_U32(r30.u32 + 340, ctx.r10.u32);
	// stw r9,336(r30)
	REX_STORE_U32(r30.u32 + 336, ctx.r9.u32);
	// addi r31,r8,-27096
	r31.s64 = ctx.r8.s64 + -27096;
	// lwz r5,328(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 328);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,320(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 320);
	// bl 0x821a1130
	ctx.lr = 0x821B34B4;
	sub_821A1130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r31,316(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 316);
	// bl 0x821a1148
	ctx.lr = 0x821B34C0;
	sub_821A1148(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,572(r30)
	REX_STORE_U32(r30.u32 + 572, ctx.r11.u32);
	// stw r10,580(r30)
	REX_STORE_U32(r30.u32 + 580, ctx.r10.u32);
loc_821B34D8:
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

DEFINE_REX_FUNC(sub_821BDEB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lhz r10,256(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 256);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lhz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 88);
	// cmplwi cr6,r10,19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 19, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x821bdf20
	if (ctx.cr6.eq) goto loc_821BDF20;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x821bdf20
	if (!ctx.cr6.gt) goto loc_821BDF20;
	// lfs f0,5468(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 5468);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5476(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 5476);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x821bdf0c
	if (ctx.cr6.gt) goto loc_821BDF0C;
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
loc_821BDF0C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821bdf20
	if (!ctx.cr6.lt) goto loc_821BDF20;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_821BDF20:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BE890) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-9768(r10)
	REX_STORE_U32(ctx.r10.u32 + -9768, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BE8D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821be970
	if (!ctx.cr6.eq) goto loc_821BE970;
	// lbz r11,188(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 188);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821be970
	if (!ctx.cr0.eq) goto loc_821BE970;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r11,188(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 188);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821be970
	if (!ctx.cr0.eq) goto loc_821BE970;
	// lwz r10,872(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 872);
	// lhz r11,624(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 624);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// lfs f1,44(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5584(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 5584);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm. r9,r11,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// beq 0x821be954
	if (ctx.cr0.eq) goto loc_821BE954;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,16308(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16308);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f0,f12,f13
	ctx.f12.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmuls f1,f12,f1
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
loc_821BE954:
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,27848(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 27848);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f0,f0,f12,f13
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f12.f64, -ctx.f13.f64)));
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// blr 
	return;
loc_821BE970:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C0810) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821C0818;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822091c8
	ctx.lr = 0x821C0830;
	sub_822091C8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822c9170
	ctx.lr = 0x821C0838;
	sub_822C9170(ctx, base);
	// ld r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// li r30,7
	r30.s64 = 7;
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
loc_821C0848:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821c0788
	ctx.lr = 0x821C0850;
	sub_821C0788(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r29,6
	r29.s64 = r29.s64 + 6;
	// bne 0x821c0848
	if (!ctx.cr0.eq) goto loc_821C0848;
	// addi r4,r31,50
	ctx.r4.s64 = r31.s64 + 50;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822091c8
	ctx.lr = 0x821C086C;
	sub_822091C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c9148
	ctx.lr = 0x821C0874;
	sub_822C9148(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// addi r4,r31,52
	ctx.r4.s64 = r31.s64 + 52;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// sth r11,50(r31)
	REX_STORE_U16(r31.u32 + 50, ctx.r11.u16);
	// bl 0x822091c8
	ctx.lr = 0x821C088C;
	sub_822091C8(ctx, base);
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x822c9148
	ctx.lr = 0x821C0894;
	sub_822C9148(ctx, base);
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r4,r31,54
	ctx.r4.s64 = r31.s64 + 54;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// sth r11,52(r31)
	REX_STORE_U16(r31.u32 + 52, ctx.r11.u16);
	// bl 0x822091c8
	ctx.lr = 0x821C08AC;
	sub_822091C8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c9148
	ctx.lr = 0x821C08B4;
	sub_822C9148(ctx, base);
	// lhz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,86
	ctx.r3.s64 = ctx.r1.s64 + 86;
	// sth r11,54(r31)
	REX_STORE_U16(r31.u32 + 54, ctx.r11.u16);
	// bl 0x822091c8
	ctx.lr = 0x821C08CC;
	sub_822091C8(ctx, base);
	// addi r3,r1,86
	ctx.r3.s64 = ctx.r1.s64 + 86;
	// bl 0x822c9148
	ctx.lr = 0x821C08D4;
	sub_822C9148(ctx, base);
	// lhz r11,86(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// addi r4,r31,58
	ctx.r4.s64 = r31.s64 + 58;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// sth r11,56(r31)
	REX_STORE_U16(r31.u32 + 56, ctx.r11.u16);
	// bl 0x822091c8
	ctx.lr = 0x821C08EC;
	sub_822091C8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822c9148
	ctx.lr = 0x821C08F4;
	sub_822C9148(ctx, base);
	// lhz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// addi r4,r31,60
	ctx.r4.s64 = r31.s64 + 60;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,90
	ctx.r3.s64 = ctx.r1.s64 + 90;
	// sth r11,58(r31)
	REX_STORE_U16(r31.u32 + 58, ctx.r11.u16);
	// bl 0x822091c8
	ctx.lr = 0x821C090C;
	sub_822091C8(ctx, base);
	// addi r3,r1,90
	ctx.r3.s64 = ctx.r1.s64 + 90;
	// bl 0x822c9148
	ctx.lr = 0x821C0914;
	sub_822C9148(ctx, base);
	// lhz r11,90(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// addi r4,r31,62
	ctx.r4.s64 = r31.s64 + 62;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// sth r11,60(r31)
	REX_STORE_U16(r31.u32 + 60, ctx.r11.u16);
	// bl 0x822091c8
	ctx.lr = 0x821C092C;
	sub_822091C8(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x822c9148
	ctx.lr = 0x821C0934;
	sub_822C9148(ctx, base);
	// lhz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 92);
	// addi r4,r31,64
	ctx.r4.s64 = r31.s64 + 64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,94
	ctx.r3.s64 = ctx.r1.s64 + 94;
	// sth r11,62(r31)
	REX_STORE_U16(r31.u32 + 62, ctx.r11.u16);
	// bl 0x822091c8
	ctx.lr = 0x821C094C;
	sub_822091C8(ctx, base);
	// addi r3,r1,94
	ctx.r3.s64 = ctx.r1.s64 + 94;
	// bl 0x822c9148
	ctx.lr = 0x821C0954;
	sub_822C9148(ctx, base);
	// lhz r11,94(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 94);
	// addi r4,r31,66
	ctx.r4.s64 = r31.s64 + 66;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r11,64(r31)
	REX_STORE_U16(r31.u32 + 64, ctx.r11.u16);
	// bl 0x822091c8
	ctx.lr = 0x821C096C;
	sub_822091C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822c9148
	ctx.lr = 0x821C0974;
	sub_822C9148(ctx, base);
	// lhz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// addi r4,r31,68
	ctx.r4.s64 = r31.s64 + 68;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,98
	ctx.r3.s64 = ctx.r1.s64 + 98;
	// sth r11,66(r31)
	REX_STORE_U16(r31.u32 + 66, ctx.r11.u16);
	// bl 0x822091c8
	ctx.lr = 0x821C098C;
	sub_822091C8(ctx, base);
	// addi r3,r1,98
	ctx.r3.s64 = ctx.r1.s64 + 98;
	// bl 0x822c9148
	ctx.lr = 0x821C0994;
	sub_822C9148(ctx, base);
	// addi r4,r31,70
	ctx.r4.s64 = r31.s64 + 70;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lhz r11,98(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 98);
	// sth r11,68(r31)
	REX_STORE_U16(r31.u32 + 68, ctx.r11.u16);
	// bl 0x822091c8
	ctx.lr = 0x821C09AC;
	sub_822091C8(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x822c9148
	ctx.lr = 0x821C09B4;
	sub_822C9148(ctx, base);
	// lhz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 100);
	// addi r4,r31,72
	ctx.r4.s64 = r31.s64 + 72;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,102
	ctx.r3.s64 = ctx.r1.s64 + 102;
	// sth r11,70(r31)
	REX_STORE_U16(r31.u32 + 70, ctx.r11.u16);
	// bl 0x822091c8
	ctx.lr = 0x821C09CC;
	sub_822091C8(ctx, base);
	// addi r3,r1,102
	ctx.r3.s64 = ctx.r1.s64 + 102;
	// bl 0x822c9148
	ctx.lr = 0x821C09D4;
	sub_822C9148(ctx, base);
	// lhz r11,102(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 102);
	// addi r4,r31,74
	ctx.r4.s64 = r31.s64 + 74;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// sth r11,72(r31)
	REX_STORE_U16(r31.u32 + 72, ctx.r11.u16);
	// bl 0x822091c8
	ctx.lr = 0x821C09EC;
	sub_822091C8(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x822c9148
	ctx.lr = 0x821C09F4;
	sub_822C9148(ctx, base);
	// lhz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// addi r4,r31,76
	ctx.r4.s64 = r31.s64 + 76;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,106
	ctx.r3.s64 = ctx.r1.s64 + 106;
	// sth r11,74(r31)
	REX_STORE_U16(r31.u32 + 74, ctx.r11.u16);
	// bl 0x822091c8
	ctx.lr = 0x821C0A0C;
	sub_822091C8(ctx, base);
	// addi r3,r1,106
	ctx.r3.s64 = ctx.r1.s64 + 106;
	// bl 0x822c9148
	ctx.lr = 0x821C0A14;
	sub_822C9148(ctx, base);
	// lhz r11,106(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 106);
	// addi r4,r31,78
	ctx.r4.s64 = r31.s64 + 78;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// sth r11,76(r31)
	REX_STORE_U16(r31.u32 + 76, ctx.r11.u16);
	// bl 0x822091c8
	ctx.lr = 0x821C0A2C;
	sub_822091C8(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x822c9148
	ctx.lr = 0x821C0A34;
	sub_822C9148(ctx, base);
	// lhz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 108);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,110
	ctx.r3.s64 = ctx.r1.s64 + 110;
	// sth r11,78(r31)
	REX_STORE_U16(r31.u32 + 78, ctx.r11.u16);
	// bl 0x822091c8
	ctx.lr = 0x821C0A4C;
	sub_822091C8(ctx, base);
	// addi r3,r1,110
	ctx.r3.s64 = ctx.r1.s64 + 110;
	// bl 0x822c9148
	ctx.lr = 0x821C0A54;
	sub_822C9148(ctx, base);
	// lhz r11,110(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// addi r4,r31,82
	ctx.r4.s64 = r31.s64 + 82;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// sth r11,80(r31)
	REX_STORE_U16(r31.u32 + 80, ctx.r11.u16);
	// bl 0x822091c8
	ctx.lr = 0x821C0A6C;
	sub_822091C8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822c9148
	ctx.lr = 0x821C0A74;
	sub_822C9148(ctx, base);
	// lhz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,114
	ctx.r3.s64 = ctx.r1.s64 + 114;
	// sth r11,82(r31)
	REX_STORE_U16(r31.u32 + 82, ctx.r11.u16);
	// bl 0x822091c8
	ctx.lr = 0x821C0A8C;
	sub_822091C8(ctx, base);
	// addi r3,r1,114
	ctx.r3.s64 = ctx.r1.s64 + 114;
	// bl 0x822c9148
	ctx.lr = 0x821C0A94;
	sub_822C9148(ctx, base);
	// lhz r11,114(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 114);
	// addi r4,r31,86
	ctx.r4.s64 = r31.s64 + 86;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// sth r11,84(r31)
	REX_STORE_U16(r31.u32 + 84, ctx.r11.u16);
	// bl 0x822091c8
	ctx.lr = 0x821C0AAC;
	sub_822091C8(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x822c9148
	ctx.lr = 0x821C0AB4;
	sub_822C9148(ctx, base);
	// lhz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 116);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,118
	ctx.r3.s64 = ctx.r1.s64 + 118;
	// sth r11,86(r31)
	REX_STORE_U16(r31.u32 + 86, ctx.r11.u16);
	// bl 0x822091c8
	ctx.lr = 0x821C0ACC;
	sub_822091C8(ctx, base);
	// addi r3,r1,118
	ctx.r3.s64 = ctx.r1.s64 + 118;
	// bl 0x822c9148
	ctx.lr = 0x821C0AD4;
	sub_822C9148(ctx, base);
	// lhz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// addi r4,r31,90
	ctx.r4.s64 = r31.s64 + 90;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// sth r11,88(r31)
	REX_STORE_U16(r31.u32 + 88, ctx.r11.u16);
	// bl 0x822091c8
	ctx.lr = 0x821C0AEC;
	sub_822091C8(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x822c9148
	ctx.lr = 0x821C0AF4;
	sub_822C9148(ctx, base);
	// lhz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 120);
	// sth r11,90(r31)
	REX_STORE_U16(r31.u32 + 90, ctx.r11.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821C8158) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lha r10,30(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 30));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x821c818c
	if (!ctx.cr0.gt) goto loc_821C818C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// ble cr6,0x821c8234
	if (!ctx.cr6.gt) goto loc_821C8234;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// ble cr6,0x821c81f8
	if (!ctx.cr6.gt) goto loc_821C81F8;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// beq cr6,0x821c8234
	if (ctx.cr6.eq) goto loc_821C8234;
loc_821C818C:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_821C8190:
	// lbz r9,18(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 18);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x821c8270
	if (ctx.cr0.eq) goto loc_821C8270;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lha r9,19312(r3)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 19312));
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lha r10,19312(r10)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 19312));
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lfs f12,-8492(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -8492);
	ctx.f12.f64 = double(temp.f32);
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r11,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r11.u64);
	// lfd f0,-8(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x821c81ec
	if (ctx.cr6.gt) goto loc_821C81EC;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_821C81EC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,12312(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12312);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821c8340
	goto loc_821C8340;
loc_821C81F8:
	// lwa r7,16468(r3)
	ctx.r7.s64 = int32_t(REX_LOAD_U32(ctx.r3.u32 + 16468));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r7,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfs f13,16372(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16372);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lha r9,5452(r9)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + 5452));
	// lfd f12,-16(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// b 0x821c8268
	goto loc_821C8268;
loc_821C8234:
	// lha r9,34(r11)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 34));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// std r9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfs f13,16372(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16372);
	ctx.f13.f64 = double(temp.f32);
	// lwa r8,524(r11)
	ctx.r8.s64 = int32_t(REX_LOAD_U32(ctx.r11.u32 + 524));
	// std r8,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r8.u64);
	// lfd f11,-8(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// frsp f12,f11
	ctx.f12.f64 = double(float(ctx.f11.f64));
loc_821C8268:
	// fdivs f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// b 0x821c8190
	goto loc_821C8190;
loc_821C8270:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x821c8348
	if (ctx.cr6.eq) goto loc_821C8348;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x821c82e0
	if (ctx.cr6.eq) goto loc_821C82E0;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x821c83b0
	if (ctx.cr6.eq) goto loc_821C83B0;
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// beq cr6,0x821c83b0
	if (ctx.cr6.eq) goto loc_821C83B0;
	// lha r9,32(r11)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 32));
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lwz r8,520(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 520);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,12308(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12308);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r10,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r8,r8,-5
	ctx.r8.s64 = ctx.r8.s64 + -5;
	// subfe r10,r9,r7
	temp.u8 = (~ctx.r9.u32 + ctx.r7.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// std r8,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r8.u64);
	// lfd f12,-8(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r11.u64);
	// lfd f11,-8(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// b 0x821c8394
	goto loc_821C8394;
loc_821C82E0:
	// lha r8,32(r11)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 32));
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,520(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 520);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r10,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// subfe r10,r8,r6
	temp.u8 = (~ctx.r8.u32 + ctx.r6.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// std r9,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r9.u64);
	// lfd f12,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// std r11,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r11.u64);
	// lfs f0,2000(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// lfd f11,-8(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fdivs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
loc_821C8340:
	// fmadds f0,f12,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// b 0x821c83b0
	goto loc_821C83B0;
loc_821C8348:
	// lha r9,32(r11)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 32));
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lwz r8,520(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 520);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,12308(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12308);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r10,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// subfe r10,r9,r7
	temp.u8 = (~ctx.r9.u32 + ctx.r7.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// std r8,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r8.u64);
	// lfd f12,-8(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
loc_821C8394:
	// fcfid f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_821C83B0:
	// fmuls f1,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D4658) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// addi r10,r10,-7176
	ctx.r10.s64 = ctx.r10.s64 + -7176;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// lbz r11,62(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 62);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r11,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D49C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mulli r10,r3,136
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(136));
	// addi r8,r11,13128
	ctx.r8.s64 = ctx.r11.s64 + 13128;
	// lwzx r7,r10,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r11,r7,0,16,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xC000;
	// cmplwi cr6,r11,49152
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49152, ctx.xer);
	// bne cr6,0x821d4a34
	if (!ctx.cr6.eq) goto loc_821D4A34;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-8884
	ctx.r11.s64 = ctx.r11.s64 + -8884;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x821d4a10
	if (!ctx.cr6.lt) goto loc_821D4A10;
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm. r9,r9,0,16,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821d4a18
	if (ctx.cr0.eq) goto loc_821D4A18;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x821d4a14
	goto loc_821D4A14;
loc_821D4A10:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_821D4A14:
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_821D4A18:
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
	// rlwinm r7,r7,0,18,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFF3FFF;
	// stwx r7,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r7.u32);
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r8,r8,0,18,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFF3FFF;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// b 0x821d4a4c
	goto loc_821D4A4C;
loc_821D4A34:
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-8884
	ctx.r10.s64 = ctx.r10.s64 + -8884;
	// li r9,-1
	ctx.r9.s64 = -1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_821D4A4C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r11,180
	ctx.r11.s64 = 180;
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// eqv r11,r10,r11
	ctx.r11.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D8220) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lha r10,30(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 30));
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x821d8288
	if (ctx.cr6.eq) goto loc_821D8288;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x821d8280
	if (ctx.cr6.eq) goto loc_821D8280;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r11,r11,-7072
	ctx.r11.s64 = ctx.r11.s64 + -7072;
	// lwz r10,5456(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 5456);
	// lha r9,5452(r11)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 5452));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821d8280
	if (ctx.cr6.lt) goto loc_821D8280;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r10,r10,9152
	ctx.r10.u64 = ctx.r10.u64 | 9152;
	// ori r9,r9,9148
	ctx.r9.u64 = ctx.r9.u64 | 9148;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lhax r11,r11,r9
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_821D8280:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821D8288:
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821d8280
	if (!ctx.cr6.eq) goto loc_821D8280;
	// b 0x821b0d38
	sub_821B0D38(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821D8E30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// addi r8,r11,432
	ctx.r8.s64 = ctx.r11.s64 + 432;
	// bne cr6,0x821d8e44
	if (!ctx.cr6.eq) goto loc_821D8E44;
	// lwz r4,36(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
loc_821D8E44:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821d8e50
	if (!ctx.cr6.eq) goto loc_821D8E50;
	// lha r3,32(r8)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r8.u32 + 32));
loc_821D8E50:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// ble cr6,0x821d8e7c
	if (!ctx.cr6.gt) goto loc_821D8E7C;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
	// addi r11,r11,-7280
	ctx.r11.s64 = ctx.r11.s64 + -7280;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821D8E70:
	// lbzu r9,12(r11)
	ea = 12 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bdnz 0x821d8e70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D8E70;
loc_821D8E7C:
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r10,r8,1896
	ctx.r10.s64 = ctx.r8.s64 + 1896;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DC038) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821DC040;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x821dc068
	if (!ctx.cr6.eq) goto loc_821DC068;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x821db218
	ctx.lr = 0x821DC060;
	sub_821DB218(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821dfd28
	ctx.lr = 0x821DC068;
	sub_821DFD28(ctx, base);
loc_821DC068:
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r31,r10,-7072
	r31.s64 = ctx.r10.s64 + -7072;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r31,16470
	ctx.r9.s64 = r31.s64 + 16470;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r29,-1
	r29.s64 = -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// sth r30,5452(r11)
	REX_STORE_U16(ctx.r11.u32 + 5452, r30.u16);
	// sth r30,5452(r31)
	REX_STORE_U16(r31.u32 + 5452, r30.u16);
loc_821DC094:
	// stbu r29,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U8(ea, r29.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x821dc094
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DC094;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821cd388
	ctx.lr = 0x821DC0A4;
	sub_821CD388(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r11,8
	ctx.r11.s64 = 8;
	// ori r8,r10,3704
	ctx.r8.u64 = ctx.r10.u64 | 3704;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addis r9,r31,1
	ctx.r9.s64 = r31.s64 + 65536;
	// ori r7,r10,9148
	ctx.r7.u64 = ctx.r10.u64 | 9148;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r9,20166
	ctx.r9.s64 = ctx.r9.s64 + 20166;
	// lwzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r8.u32);
	// sth r30,5452(r11)
	REX_STORE_U16(ctx.r11.u32 + 5452, r30.u16);
	// sthx r30,r31,r7
	REX_STORE_U16(r31.u32 + ctx.r7.u32, r30.u16);
loc_821DC0D4:
	// stbu r29,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U8(ea, r29.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x821dc0d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DC0D4;
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821cd388
	ctx.lr = 0x821DC0E8;
	sub_821CD388(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821DE0C0) {
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
	// bl 0x821b3110
	ctx.lr = 0x821DE0D8;
	sub_821B3110(ctx, base);
	// addi r3,r3,288
	ctx.r3.s64 = ctx.r3.s64 + 288;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dde50
	ctx.lr = 0x821DE0E4;
	sub_821DDE50(ctx, base);
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

DEFINE_REX_FUNC(sub_821DFC88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x821DFC90;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r7,-32226
	ctx.r7.s64 = -2111963136;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r6,r9,15328
	ctx.r6.s64 = ctx.r9.s64 + 15328;
	// addi r9,r11,-8792
	ctx.r9.s64 = ctx.r11.s64 + -8792;
	// addi r8,r10,-2560
	ctx.r8.s64 = ctx.r10.s64 + -2560;
	// addi r7,r7,-9176
	ctx.r7.s64 = ctx.r7.s64 + -9176;
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x821f7d50
	ctx.lr = 0x821DFCCC;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821dfce8
	if (ctx.cr0.eq) goto loc_821DFCE8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,31764
	ctx.r11.s64 = ctx.r11.s64 + 31764;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x821dfcec
	goto loc_821DFCEC;
loc_821DFCE8:
	// li r31,0
	r31.s64 = 0;
loc_821DFCEC:
	// stw r29,104(r31)
	REX_STORE_U32(r31.u32 + 104, r29.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r30,108(r31)
	REX_STORE_U32(r31.u32 + 108, r30.u32);
	// bl 0x820e4bb0
	ctx.lr = 0x821DFCFC;
	sub_820E4BB0(ctx, base);
	// stw r3,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// bl 0x821aff90
	ctx.lr = 0x821DFD04;
	sub_821AFF90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821E1250) {
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
	// lis r30,-32166
	r30.s64 = -2108030976;
	// lwz r31,5592(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 5592);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821e128c
	if (ctx.cr6.eq) goto loc_821E128C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e48c0
	ctx.lr = 0x821E127C;
	sub_820E48C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x821E1284;
	sub_822C80A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,5592(r30)
	REX_STORE_U32(r30.u32 + 5592, ctx.r11.u32);
loc_821E128C:
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

DEFINE_REX_FUNC(sub_821E2028) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lbz r10,2971(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2971);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821e2068
	if (!ctx.cr0.eq) goto loc_821E2068;
	// lbz r11,2973(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2973);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821e2068
	if (!ctx.cr0.eq) goto loc_821E2068;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,10
	ctx.r11.s64 = 10;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// adde r11,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_821E2068:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E2A20) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lbz r10,2971(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2971);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821e2a64
	if (!ctx.cr0.eq) goto loc_821E2A64;
	// lbz r11,2973(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2973);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821e2a64
	if (!ctx.cr0.eq) goto loc_821E2A64;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// blt cr6,0x821e2a58
	if (ctx.cr6.lt) goto loc_821E2A58;
	// cmpwi cr6,r11,288
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 288, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x821e2a5c
	if (ctx.cr6.lt) goto loc_821E2A5C;
loc_821E2A58:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821E2A5C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_821E2A64:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E34E0) {
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
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E3504;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e3538
	if (ctx.cr0.eq) goto loc_821E3538;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// addi r11,r11,3396
	ctx.r11.s64 = ctx.r11.s64 + 3396;
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821e3538
	if (!ctx.cr0.eq) goto loc_821E3538;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e3468
	ctx.lr = 0x821E3530;
	sub_821E3468(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821e353c
	goto loc_821E353C;
loc_821E3538:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E353C:
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

DEFINE_REX_FUNC(sub_821E5360) {
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
	ctx.lr = 0x821E5368;
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
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// stfs f1,116(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// li r10,768
	ctx.r10.s64 = 768;
	// stfs f2,120(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// addi r11,r11,17728
	ctx.r11.s64 = ctx.r11.s64 + 17728;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// sth r10,16(r3)
	REX_STORE_U16(ctx.r3.u32 + 16, ctx.r10.u16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// fmr f29,f2
	f29.f64 = ctx.f2.f64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// bl 0x82204da8
	ctx.lr = 0x821E53A8;
	sub_82204DA8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e53c8
	if (ctx.cr0.eq) goto loc_821E53C8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,16120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16120);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(f31.f64 - ctx.f0.f64));
	// lfs f0,16116(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16116);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_821E53C8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r28,r31,80
	r28.s64 = r31.s64 + 80;
	// li r26,0
	r26.s64 = 0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r28
	r29.u64 = r28.u64;
	// lfs f30,26632(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26632);
	f30.f64 = double(temp.f32);
	// mr r30,r26
	r30.u64 = r26.u64;
	// addi r27,r11,16232
	r27.s64 = ctx.r11.s64 + 16232;
loc_821E53E8:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821366d8
	ctx.lr = 0x821E5408;
	sub_821366D8(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e543c
	if (ctx.cr0.eq) goto loc_821E543C;
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f29.f64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r4,1
	ctx.r4.s64 = 1;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmadds f1,f0,f30,f31
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, f31.f64)));
	// bl 0x821e46d8
	ctx.lr = 0x821E543C;
	sub_821E46D8(ctx, base);
loc_821E543C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(r30.s32, 7, ctx.xer);
	// blt cr6,0x821e53e8
	if (ctx.cr6.lt) goto loc_821E53E8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r26,112(r31)
	REX_STORE_U32(r31.u32 + 112, r26.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f3,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,120(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,116(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// bl 0x821e4390
	ctx.lr = 0x821E5470;
	sub_821E4390(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821E547C:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e548c
	if (ctx.cr6.eq) goto loc_821E548C;
	// stb r26,188(r11)
	REX_STORE_U8(ctx.r11.u32 + 188, r26.u8);
loc_821E548C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x821e547c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E547C;
	// stw r26,108(r31)
	REX_STORE_U32(r31.u32 + 108, r26.u32);
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

DEFINE_REX_FUNC(sub_821EB3E0) {
	REX_FUNC_PROLOGUE();
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r8,r9,7656
	ctx.r8.s64 = ctx.r9.s64 + 7656;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,7656(r9)
	REX_STORE_U32(ctx.r9.u32 + 7656, ctx.r11.u32);
	// stw r10,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// b 0x821eb2c0
	sub_821EB2C0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821EB5D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32165
	ctx.r8.s64 = -2107965440;
	// lis r7,-32166
	ctx.r7.s64 = -2108030976;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// addi r8,r8,13128
	ctx.r8.s64 = ctx.r8.s64 + 13128;
	// lfs f13,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stw r10,7700(r7)
	REX_STORE_U32(ctx.r7.u32 + 7700, ctx.r10.u32);
	// stfs f13,220(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 220, temp.u32);
	// stfs f13,224(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 224, temp.u32);
	// stfs f0,228(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 228, temp.u32);
	// stfs f0,236(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 236, temp.u32);
	// stfs f13,240(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 240, temp.u32);
	// stfs f0,244(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 244, temp.u32);
	// stfs f13,252(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 252, temp.u32);
	// stfs f0,256(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 256, temp.u32);
	// stfs f0,260(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 260, temp.u32);
	// stfs f0,268(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 268, temp.u32);
	// stfs f0,272(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 272, temp.u32);
	// stfs f0,276(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 276, temp.u32);
	// lbz r11,1819(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 1819);
	// stw r11,208(r6)
	REX_STORE_U32(ctx.r6.u32 + 208, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821ED1C0) {
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
	ctx.lr = 0x821ED1C8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,-32032
	r30.s64 = ctx.r11.s64 + -32032;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821f28a0
	ctx.lr = 0x821ED1E4;
	sub_821F28A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x821f2908
	ctx.lr = 0x821ED1F0;
	sub_821F2908(ctx, base);
	// lbz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x821f20e8
	ctx.lr = 0x821ED20C;
	sub_821F20E8(ctx, base);
	// addi r28,r31,176
	r28.s64 = r31.s64 + 176;
	// lwz r27,16(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x821ed284
	if (!ctx.cr6.gt) goto loc_821ED284;
loc_821ED21C:
	// lwz r29,24(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 24);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x821ed27c
	if (ctx.cr6.eq) goto loc_821ED27C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f2bf0
	ctx.lr = 0x821ED238;
	sub_821F2BF0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x821ed25c
	if (!ctx.cr6.gt) goto loc_821ED25C;
loc_821ED244:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821f0280
	ctx.lr = 0x821ED24C;
	sub_821F0280(ctx, base);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r28,r28,28
	r28.s64 = r28.s64 + 28;
	// bgt 0x821ed244
	if (ctx.cr0.gt) goto loc_821ED244;
loc_821ED25C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x821f2c50
	ctx.lr = 0x821ED27C;
	sub_821F2C50(ctx, base);
loc_821ED27C:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bgt 0x821ed21c
	if (ctx.cr0.gt) goto loc_821ED21C;
loc_821ED284:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821F15C0) {
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
	ctx.lr = 0x821F15C8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x822c80d0
	ctx.lr = 0x821F15E0;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r30,0
	r30.s64 = 0;
	// beq 0x821f1600
	if (ctx.cr0.eq) goto loc_821F1600;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stb r30,8(r3)
	REX_STORE_U8(ctx.r3.u32 + 8, r30.u8);
	// b 0x821f1604
	goto loc_821F1604;
loc_821F1600:
	// mr r31,r30
	r31.u64 = r30.u64;
loc_821F1604:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,144
	ctx.r3.s64 = 144;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// bl 0x822c80d0
	ctx.lr = 0x821F1614;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f1624
	if (ctx.cr0.eq) goto loc_821F1624;
	// bl 0x8229d5f8
	ctx.lr = 0x821F1620;
	sub_8229D5F8(ctx, base);
	// b 0x821f1628
	goto loc_821F1628;
loc_821F1624:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_821F1628:
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F1650;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,8(r31)
	REX_STORE_U8(r31.u32 + 8, r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821F2B30) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822a1098
	ctx.lr = 0x821F2B6C;
	sub_822A1098(ctx, base);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f2b88
	if (ctx.cr0.eq) goto loc_821F2B88;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822a9f80
	ctx.lr = 0x821F2B88;
	sub_822A9F80(ctx, base);
loc_821F2B88:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

DEFINE_REX_FUNC(sub_821F5538) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x821F5540;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f5570
	if (ctx.cr6.eq) goto loc_821F5570;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F556C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
loc_821F5570:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f5584
	if (ctx.cr6.eq) goto loc_821F5584;
	// bl 0x822c80a8
	ctx.lr = 0x821F5580;
	sub_822C80A8(ctx, base);
	// stw r29,16(r31)
	REX_STORE_U32(r31.u32 + 16, r29.u32);
loc_821F5584:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f5604
	if (ctx.cr6.eq) goto loc_821F5604;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r28,r29
	r28.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821f55f0
	if (!ctx.cr6.gt) goto loc_821F55F0;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_821F55A4:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821f55dc
	if (ctx.cr6.eq) goto loc_821F55DC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f55d4
	if (ctx.cr6.eq) goto loc_821F55D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F55D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821F55D4:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stwx r29,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r29.u32);
loc_821F55DC:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821f55a4
	if (ctx.cr6.lt) goto loc_821F55A4;
loc_821F55F0:
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f5604
	if (ctx.cr6.eq) goto loc_821F5604;
	// bl 0x822c80a8
	ctx.lr = 0x821F5600;
	sub_822C80A8(ctx, base);
	// stw r29,32(r31)
	REX_STORE_U32(r31.u32 + 32, r29.u32);
loc_821F5604:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r29,28(r31)
	REX_STORE_U32(r31.u32 + 28, r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f57a0
	if (ctx.cr6.eq) goto loc_821F57A0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r28,r29
	r28.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821f578c
	if (!ctx.cr6.gt) goto loc_821F578C;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_821F5628:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f5754
	if (ctx.cr6.eq) goto loc_821F5754;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f565c
	if (ctx.cr6.eq) goto loc_821F565C;
	// bl 0x822c80a8
	ctx.lr = 0x821F564C;
	sub_822C80A8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
loc_821F565C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f5688
	if (ctx.cr6.eq) goto loc_821F5688;
	// bl 0x822c80a8
	ctx.lr = 0x821F5678;
	sub_822C80A8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r29.u32);
loc_821F5688:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lwz r6,20(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x822ba200
	ctx.lr = 0x821F56A8;
	sub_822BA200(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f56d4
	if (ctx.cr6.eq) goto loc_821F56D4;
	// bl 0x822c80a8
	ctx.lr = 0x821F56C4;
	sub_822C80A8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r29,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r29.u32);
loc_821F56D4:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r3,32(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f5700
	if (ctx.cr6.eq) goto loc_821F5700;
	// bl 0x822c80a8
	ctx.lr = 0x821F56F0;
	sub_822C80A8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r29,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, r29.u32);
loc_821F5700:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f572c
	if (ctx.cr6.eq) goto loc_821F572C;
	// bl 0x822c80a8
	ctx.lr = 0x821F571C;
	sub_822C80A8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r29,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, r29.u32);
loc_821F572C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f5754
	if (ctx.cr6.eq) goto loc_821F5754;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821f54d0
	ctx.lr = 0x821F5748;
	sub_821F54D0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r29,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r29.u32);
loc_821F5754:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f5778
	if (ctx.cr6.eq) goto loc_821F5778;
	// bl 0x822c80a8
	ctx.lr = 0x821F576C;
	sub_822C80A8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r29,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r29.u32);
loc_821F5778:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821f5628
	if (ctx.cr6.lt) goto loc_821F5628;
loc_821F578C:
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f57a0
	if (ctx.cr6.eq) goto loc_821F57A0;
	// bl 0x822c80a8
	ctx.lr = 0x821F579C;
	sub_822C80A8(ctx, base);
	// stw r29,24(r31)
	REX_STORE_U32(r31.u32 + 24, r29.u32);
loc_821F57A0:
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r29,20(r31)
	REX_STORE_U32(r31.u32 + 20, r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f57bc
	if (ctx.cr6.eq) goto loc_821F57BC;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821f4198
	ctx.lr = 0x821F57B8;
	sub_821F4198(ctx, base);
	// stw r29,36(r31)
	REX_STORE_U32(r31.u32 + 36, r29.u32);
loc_821F57BC:
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f57d0
	if (ctx.cr6.eq) goto loc_821F57D0;
	// bl 0x822c80a8
	ctx.lr = 0x821F57CC;
	sub_822C80A8(ctx, base);
	// stw r29,40(r31)
	REX_STORE_U32(r31.u32 + 40, r29.u32);
loc_821F57D0:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f57e4
	if (ctx.cr6.eq) goto loc_821F57E4;
	// bl 0x822c80a8
	ctx.lr = 0x821F57E0;
	sub_822C80A8(ctx, base);
	// stw r29,48(r31)
	REX_STORE_U32(r31.u32 + 48, r29.u32);
loc_821F57E4:
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
	// std r29,0(r31)
	REX_STORE_U64(r31.u32 + 0, r29.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82202338) {
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
	ctx.lr = 0x82202340;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// addi r3,r11,84
	ctx.r3.s64 = ctx.r11.s64 + 84;
	// bl 0x821d6c30
	ctx.lr = 0x82202358;
	sub_821D6C30(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82202538
	if (ctx.cr6.eq) goto loc_82202538;
	// lwz r11,672(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 672);
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822024d4
	if (ctx.cr6.eq) goto loc_822024D4;
	// lwz r10,676(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 676);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x822024d4
	if (!ctx.cr6.eq) goto loc_822024D4;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwa r10,684(r31)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(r31.u32 + 684));
	// lwz r11,680(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 680);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// bge cr6,0x822023c4
	if (!ctx.cr6.lt) goto loc_822023C4;
	// addi r11,r11,61
	ctx.r11.s64 = ctx.r11.s64 + 61;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// b 0x822023c8
	goto loc_822023C8;
loc_822023C4:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_822023C8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822023d4
	if (ctx.cr6.eq) goto loc_822023D4;
	// stfs f0,128(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 128, temp.u32);
loc_822023D4:
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r31,244
	ctx.r10.s64 = r31.s64 + 244;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
loc_822023F0:
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// bge cr6,0x82202400
	if (!ctx.cr6.lt) goto loc_82202400;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x82202404
	goto loc_82202404;
loc_82202400:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_82202404:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220243c
	if (ctx.cr6.eq) goto loc_8220243C;
	// lwz r7,680(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 680);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x8220243c
	if (ctx.cr6.eq) goto loc_8220243C;
	// lwa r7,672(r31)
	ctx.r7.s64 = int32_t(REX_LOAD_U32(r31.u32 + 672));
	// lfs f0,128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fnmsubs f0,f12,f0,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f0.f64, -ctx.f0.f64)));
	// stfs f0,128(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 128, temp.u32);
loc_8220243C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x822023f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822023F0;
	// lwz r11,684(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 684);
	// lwz r9,672(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 672);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822024c8
	if (ctx.cr6.lt) goto loc_822024C8;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r27,684(r31)
	REX_STORE_U32(r31.u32 + 684, r27.u32);
	// stw r27,672(r31)
	REX_STORE_U32(r31.u32 + 672, r27.u32);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// stw r27,676(r31)
	REX_STORE_U32(r31.u32 + 676, r27.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
loc_82202478:
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// bge cr6,0x82202488
	if (!ctx.cr6.lt) goto loc_82202488;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8220248c
	goto loc_8220248C;
loc_82202488:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_8220248C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82202498
	if (ctx.cr6.eq) goto loc_82202498;
	// stfs f0,128(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 128, temp.u32);
loc_82202498:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82202478
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82202478;
	// lwz r11,680(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 680);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x822024c0
	if (!ctx.cr6.lt) goto loc_822024C0;
	// addi r11,r11,61
	ctx.r11.s64 = ctx.r11.s64 + 61;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// b 0x822024c4
	goto loc_822024C4;
loc_822024C0:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_822024C4:
	// stfs f13,128(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 128, temp.u32);
loc_822024C8:
	// lwz r11,684(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 684);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,684(r31)
	REX_STORE_U32(r31.u32 + 684, ctx.r11.u32);
loc_822024D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82202200
	ctx.lr = 0x822024DC;
	sub_82202200(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r27
	r30.u64 = r27.u64;
	// addi r29,r31,244
	r29.s64 = r31.s64 + 244;
	// cmpwi cr6,r27,8
	ctx.cr6.compare<int32_t>(r27.s32, 8, ctx.xer);
	// bge cr6,0x822024f8
	if (!ctx.cr6.lt) goto loc_822024F8;
loc_822024F0:
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x822024fc
	goto loc_822024FC;
loc_822024F8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_822024FC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82202528
	if (ctx.cr6.eq) goto loc_82202528;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(r30.s32, r28.s32, ctx.xer);
	// lwz r5,664(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 664);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x82202524
	if (ctx.cr6.eq) goto loc_82202524;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82202524:
	// bctrl 
	ctx.lr = 0x82202528;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82202528:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// blt cr6,0x822024f0
	if (ctx.cr6.lt) goto loc_822024F0;
loc_82202538:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8220A9B8) {
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
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x824d42fc
	ctx.lr = 0x8220A9D4;
	__imp__XexLoadImage(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8220a9e8
	if (!ctx.cr0.lt) goto loc_8220A9E8;
	// bl 0x8220c390
	ctx.lr = 0x8220A9E0;
	sub_8220C390(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8220a9ec
	goto loc_8220A9EC;
loc_8220A9E8:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8220A9EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220C110) {
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
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r10,r10,0
	ctx.r10.s64 = ctx.r10.s64 + 0;
	// addi r30,r11,12
	r30.s64 = ctx.r11.s64 + 12;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// bge cr6,0x8220c16c
	if (!ctx.cr6.lt) goto loc_8220C16C;
loc_8220C144:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220c16c
	if (!ctx.cr6.eq) goto loc_8220C16C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220c160
	if (ctx.cr6.eq) goto loc_8220C160;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220C160;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220C160:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// blt cr6,0x8220c144
	if (ctx.cr6.lt) goto loc_8220C144;
loc_8220C16C:
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

DEFINE_REX_FUNC(sub_8220FDB0) {
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
	// lhz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// lhz r9,2(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r8,6(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// lhz r6,10(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// lhz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// lhz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// sth r10,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r10.u16);
	// sth r9,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, ctx.r9.u16);
	// sth r8,100(r1)
	REX_STORE_U16(ctx.r1.u32 + 100, ctx.r8.u16);
	// sth r7,102(r1)
	REX_STORE_U16(ctx.r1.u32 + 102, ctx.r7.u16);
	// sth r6,104(r1)
	REX_STORE_U16(ctx.r1.u32 + 104, ctx.r6.u16);
	// sth r5,106(r1)
	REX_STORE_U16(ctx.r1.u32 + 106, ctx.r5.u16);
	// sth r11,108(r1)
	REX_STORE_U16(ctx.r1.u32 + 108, ctx.r11.u16);
	// bl 0x824d442c
	ctx.lr = 0x8220FE0C;
	__imp__RtlTimeFieldsToTime(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8220fe28
	if (!ctx.cr0.eq) goto loc_8220FE28;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// bl 0x8220a840
	ctx.lr = 0x8220FE20;
	sub_8220A840(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8220fe3c
	goto loc_8220FE3C;
loc_8220FE28:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_8220FE3C:
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

DEFINE_REX_FUNC(sub_82210A98) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,15,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210B98) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,6,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210C68) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,10564(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10564);
	// subfic r10,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r4.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// stw r10,10420(r3)
	REX_STORE_U32(ctx.r3.u32 + 10420, ctx.r10.u32);
	// stw r11,10564(r3)
	REX_STORE_U32(ctx.r3.u32 + 10564, ctx.r11.u32);
	// ld r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// rldicr r12,r12,44,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// std r10,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// or r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211780) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10568(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwimi r11,r4,21,10,10
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 21) & 0x200000) | (ctx.r11.u64 & 0xFFFFFFFFFFDFFFFF);
	// stw r11,10568(r3)
	REX_STORE_U32(ctx.r3.u32 + 10568, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211DE8) {
	REX_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1164(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1164);
	// rlwinm r3,r11,9,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x3;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822123D0) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwimi r8,r5,2,29,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x4) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r8,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822138A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
loc_822138A0:
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822138b4
	if (!ctx.cr6.lt) goto loc_822138B4;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_822138B4:
	// rldicl r9,r11,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x822138c4
	if (!ctx.cr6.gt) goto loc_822138C4;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_822138C4:
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
loc_822138CC:
	// mfmsr r7
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r7.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r8,0,r3
	ea = ctx.r3.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r8.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r8,r11
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x822138f0
	if (!ctx.cr6.eq) goto loc_822138F0;
	// stdcx. r10,0,r3
	ea = ctx.r3.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r10.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x822138cc
	if (!ctx.cr0.eq) goto loc_822138CC;
	// b 0x822138f8
	goto loc_822138F8;
loc_822138F0:
	// stdcx. r8,0,r3
	ea = ctx.r3.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r8.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_822138F8:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpld cr6,r8,r11
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x822138a0
	if (!ctx.cr6.eq) goto loc_822138A0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82215E78) {
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
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82215E8C:
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
	// bne 0x82215e8c
	if (!ctx.cr0.eq) goto loc_82215E8C;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82215ed4
	if (!ctx.cr6.eq) goto loc_82215ED4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x82215ed4
	if (!ctx.cr6.eq) goto loc_82215ED4;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82215ed4
	if (ctx.cr0.eq) goto loc_82215ED4;
	// lwz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x82215e78
	ctx.lr = 0x82215ED4;
	sub_82215E78(ctx, base);
loc_82215ED4:
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

DEFINE_REX_FUNC(sub_82218538) {
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
	ctx.lr = 0x82218540;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
loc_82218550:
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
	// bne 0x82218550
	if (!ctx.cr0.eq) goto loc_82218550;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822186b8
	if (!ctx.cr6.eq) goto loc_822186B8;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82218610
	if (!ctx.cr6.eq) goto loc_82218610;
	// lwz r11,152(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 152);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8221869c
	if (!ctx.cr6.gt) goto loc_8221869C;
	// addi r31,r30,88
	r31.s64 = r30.s64 + 88;
loc_82218598:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,-60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -60);
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r8,r11,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lbzx r9,r10,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// stbx r11,r10,r8
	REX_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822185f8
	if (!ctx.cr6.eq) goto loc_822185F8;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822185f8
	if (!ctx.cr6.eq) goto loc_822185F8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822184a8
	ctx.lr = 0x822185F8;
	sub_822184A8(ctx, base);
loc_822185F8:
	// lwz r11,152(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 152);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82218598
	if (ctx.cr6.lt) goto loc_82218598;
	// b 0x8221869c
	goto loc_8221869C;
loc_82218610:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x8221869c
	if (!ctx.cr6.eq) goto loc_8221869C;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82218658
	if (ctx.cr6.eq) goto loc_82218658;
	// lwz r10,88(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 88);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r8,r11,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lbzx r9,r10,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// stbx r11,r10,r8
	REX_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u8);
loc_82218658:
	// lwz r4,88(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 88);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221867c
	if (!ctx.cr6.eq) goto loc_8221867C;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221867c
	if (!ctx.cr6.eq) goto loc_8221867C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822184a8
	ctx.lr = 0x8221867C;
	sub_822184A8(ctx, base);
loc_8221867C:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// rlwinm r11,r11,0,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8221869c
	if (!ctx.cr6.eq) goto loc_8221869C;
	// lbz r11,11071(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 11071);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,11071(r28)
	REX_STORE_U8(r28.u32 + 11071, ctx.r11.u8);
loc_8221869C:
	// lis r11,30840
	ctx.r11.s64 = 2021130240;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// ori r11,r11,30840
	ctx.r11.u64 = ctx.r11.u64 | 30840;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// bl 0x823cd250
	ctx.lr = 0x822186B4;
	sub_823CD250(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822186B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822213D8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r5,r11,0,0,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r4,r10,0,0,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// b 0x82215c10
	sub_82215C10(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82222048) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82221b78
	ctx.lr = 0x8222207C;
	sub_82221B78(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r7,r11,25,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7;
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r9,r11,25,26,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x38;
	// rlwinm r6,r11,28,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r7,r11,31,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r5,r10,26,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwinm r6,r10,24,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x3;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r7,r10,28,30,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3;
	// rlwimi r11,r9,1,0,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r11.u64 & 0xFFFFFFFF00000001);
	// rlwinm r9,r10,30,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// rlwinm r6,r8,26,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// rlwimi r8,r11,6,0,25
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0) | (ctx.r8.u64 & 0xFFFFFFFF0000003F);
	// stw r8,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// bl 0x82215b80
	ctx.lr = 0x82222108;
	sub_82215B80(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r3,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// stw r10,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// stw r9,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r9.u32);
	// stw r8,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r8.u32);
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

DEFINE_REX_FUNC(sub_82226530) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
loc_82226534:
	// rlwinm r11,r4,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// clrlwi r8,r4,27
	ctx.r8.u64 = ctx.r4.u32 & 0x1F;
	// addi r11,r11,2528
	ctx.r11.s64 = ctx.r11.s64 + 2528;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// slw r7,r7,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r5,r11,r3
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// andc r8,r5,r7
	ctx.r8.u64 = ctx.r5.u64 & ~ctx.r7.u64;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stwx r9,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// bne 0x82226534
	if (!ctx.cr0.eq) goto loc_82226534;
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

DEFINE_REX_FUNC(sub_822288E0) {
	REX_FUNC_PROLOGUE();
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// bge cr6,0x822288f0
	if (!ctx.cr6.lt) goto loc_822288F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822288F0:
	// cmpdi cr6,r4,0
	ctx.cr6.compare<int64_t>(ctx.r4.s64, 0, ctx.xer);
	// bne cr6,0x82228904
	if (!ctx.cr6.eq) goto loc_82228904;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82228904:
	// cmpd cr6,r3,r4
	ctx.cr6.compare<int64_t>(ctx.r3.s64, ctx.r4.s64, ctx.xer);
	// blt cr6,0x82228918
	if (ctx.cr6.lt) goto loc_82228918;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65534
	ctx.r3.u64 = ctx.r3.u64 | 65534;
	// blr 
	return;
loc_82228918:
	// lis r11,0
	ctx.r11.s64 = 0;
	// tdllei r4,0
	if (ctx.r4.s64 == 0ll || ctx.r4.u64 < 0ull) ppc_trap(ctx, base, 0);
	// ori r11,r11,65534
	ctx.r11.u64 = ctx.r11.u64 | 65534;
	// mulld r10,r3,r11
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * ctx.r11.u64);
	// rotldi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 1);
	// divd r10,r10,r4
	ctx.r10.s64 = (ctx.r4.s64 && !(ctx.r10.s64 == INT64_MIN && ctx.r4.s64 == -1)) ? ctx.r10.s64 / ctx.r4.s64 : 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// andc r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 & ~ctx.r11.u64;
	// tdlgei r11,-1
	if (ctx.r11.s64 == -1ll || ctx.r11.u64 > 18446744073709551615ull) ppc_trap(ctx, base, 0);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82229100) {
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
	ctx.lr = 0x82229108;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,21992(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 21992);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r7,21988(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 21988);
	// rldicr r6,r8,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// or r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 | ctx.r7.u64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82229134:
	// stdu r7,8(r8)
	ea = 8 + ctx.r8.u32;
	REX_STORE_U64(ea, ctx.r7.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x82229134
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82229134;
	// lwz r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// sradi r7,r11,32
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0xFFFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s64 >> 32;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r11,22032(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 22032);
	// ori r6,r10,65535
	ctx.r6.u64 = ctx.r10.u64 | 65535;
	// lwz r4,21984(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 21984);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// lwz r3,16968(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 16968);
	// lwz r31,22024(r9)
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 22024);
	// lfs f0,22000(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 22000);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r30,22028(r9)
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 22028);
	// lwz r29,23760(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 23760);
	// lfs f13,21996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 21996);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r27,r10,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r28,11024(r9)
	r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 11024);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r6,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r4,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r3,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// stw r31,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// clrlwi r8,r8,29
	ctx.r8.u64 = ctx.r8.u32 & 0x7;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// stw r5,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// stw r29,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r29.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwbrx r7,r27,r28
	ctx.r7.u64 = __builtin_bswap32(REX_LOAD_U32(r27.u32 + r28.u32));
	// lwbrx r10,r10,r28
	ctx.r10.u64 = __builtin_bswap32(REX_LOAD_U32(ctx.r10.u32 + r28.u32));
	// lwbrx r5,r8,r28
	ctx.r5.u64 = __builtin_bswap32(REX_LOAD_U32(ctx.r8.u32 + r28.u32));
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8222922c
	if (ctx.cr6.eq) goto loc_8222922C;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// stw r11,22032(r9)
	REX_STORE_U32(ctx.r9.u32 + 22032, ctx.r11.u32);
	// beq cr6,0x8222922c
	if (ctx.cr6.eq) goto loc_8222922C;
	// cmpldi cr6,r5,0
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, 0, ctx.xer);
	// beq cr6,0x8222922c
	if (ctx.cr6.eq) goto loc_8222922C;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpld cr6,r8,r5
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r5.u64, ctx.xer);
	// rldicr r11,r11,32,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bgt cr6,0x8222920c
	if (ctx.cr6.gt) goto loc_8222920C;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_8222920C:
	// cmpld cr6,r10,r8
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r8.u64, ctx.xer);
	// bgt cr6,0x82229218
	if (ctx.cr6.gt) goto loc_82229218;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82229218:
	// subf r4,r7,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r7.u64;
	// subf r3,r8,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r8.u64;
	// bl 0x822288e0
	ctx.lr = 0x82229224;
	sub_822288E0(ctx, base);
	// rlwimi r3,r6,0,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// stw r3,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
loc_8222922C:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82228ff0
	ctx.lr = 0x82229234;
	sub_82228FF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8222950c
	if (ctx.cr0.eq) goto loc_8222950C;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-7164
	ctx.r9.s64 = ctx.r11.s64 + -7164;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,-7164(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -7164);
	// ld r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 4);
	// ld r8,484(r9)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r9.u32 + 484);
	// ld r7,12(r9)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r9.u32 + 12);
	// ld r6,492(r9)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r9.u32 + 492);
	// subf r8,r10,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r10.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// subf r7,r7,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r7.u64;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// subf r3,r11,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r11.u64;
	// bl 0x822288e0
	ctx.lr = 0x8222927C;
	sub_822288E0(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// rlwimi r11,r3,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// bl 0x822288e0
	ctx.lr = 0x82229290;
	sub_822288E0(ctx, base);
	// ld r11,124(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 124);
	// ld r10,604(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 604);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// ld r7,132(r9)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r9.u32 + 132);
	// ld r6,612(r9)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r9.u32 + 612);
	// subf r29,r11,r10
	r29.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r3,r7,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r7.u64;
	// bl 0x822288e0
	ctx.lr = 0x822292B4;
	sub_822288E0(ctx, base);
	// ld r5,620(r9)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r9.u32 + 620);
	// ld r31,140(r9)
	r31.u64 = REX_LOAD_U64(ctx.r9.u32 + 140);
	// rlwimi r30,r3,16,0,15
	r30.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000) | (r30.u64 & 0xFFFFFFFF0000FFFF);
	// subf r11,r5,r29
	ctx.r11.u64 = r29.u64 - ctx.r5.u64;
	// stw r30,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r30.u32);
	// subf r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bl 0x822288e0
	ctx.lr = 0x822292D8;
	sub_822288E0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// subf r3,r31,r5
	ctx.r3.u64 = ctx.r5.u64 - r31.u64;
	// bl 0x822288e0
	ctx.lr = 0x822292E4;
	sub_822288E0(ctx, base);
	// ld r11,444(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 444);
	// ld r10,924(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 924);
	// rlwimi r6,r3,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// ld r7,436(r9)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r9.u32 + 436);
	// lis r5,0
	ctx.r5.s64 = 0;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// ld r11,916(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 916);
	// lis r3,0
	ctx.r3.s64 = 0;
	// stw r6,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// ori r4,r5,65535
	ctx.r4.u64 = ctx.r5.u64 | 65535;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r5,r3,43689
	ctx.r5.u64 = ctx.r3.u64 | 43689;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bge cr6,0x82229328
	if (!ctx.cr6.lt) goto loc_82229328;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82229358
	goto loc_82229358;
loc_82229328:
	// cmpdi cr6,r8,0
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 0, ctx.xer);
	// bne cr6,0x82229338
	if (!ctx.cr6.eq) goto loc_82229338;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82229358
	goto loc_82229358;
loc_82229338:
	// mulld r10,r11,r5
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * ctx.r5.u64);
	// rotldi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 1);
	// divd r10,r10,r8
	ctx.r10.s64 = (ctx.r8.s64 && !(ctx.r10.s64 == INT64_MIN && ctx.r8.s64 == -1)) ? ctx.r10.s64 / ctx.r8.s64 : 0;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// andc r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// tdllei r8,0
	if (ctx.r8.s64 == 0ll || ctx.r8.u64 < 0ull) ppc_trap(ctx, base, 0);
	// tdlgei r10,-1
	if (ctx.r10.s64 == -1ll || ctx.r10.u64 > 18446744073709551615ull) ppc_trap(ctx, base, 0);
loc_82229358:
	// ld r10,452(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 452);
	// ld r7,932(r9)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r9.u32 + 932);
	// lwz r6,148(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// subf r10,r10,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r10.u64;
	// rlwimi r11,r6,0,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// cmpdi cr6,r10,0
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 0, ctx.xer);
	// bge cr6,0x8222937c
	if (!ctx.cr6.lt) goto loc_8222937C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x822293ac
	goto loc_822293AC;
loc_8222937C:
	// cmpdi cr6,r8,0
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 0, ctx.xer);
	// bne cr6,0x8222938c
	if (!ctx.cr6.eq) goto loc_8222938C;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x822293ac
	goto loc_822293AC;
loc_8222938C:
	// mulld r7,r10,r5
	ctx.r7.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r5.u64);
	// rotldi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u64, 1);
	// divd r7,r7,r8
	ctx.r7.s64 = (ctx.r8.s64 && !(ctx.r7.s64 == INT64_MIN && ctx.r8.s64 == -1)) ? ctx.r7.s64 / ctx.r8.s64 : 0;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// andc r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r6.u64;
	// tdllei r8,0
	if (ctx.r8.s64 == 0ll || ctx.r8.u64 < 0ull) ppc_trap(ctx, base, 0);
	// tdlgei r7,-1
	if (ctx.r7.s64 == -1ll || ctx.r7.u64 > 18446744073709551615ull) ppc_trap(ctx, base, 0);
loc_822293AC:
	// ld r7,236(r9)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r9.u32 + 236);
	// rlwimi r11,r10,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// ld r6,716(r9)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r9.u32 + 716);
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// subf r10,r7,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r7.u64;
	// cmpdi cr6,r10,0
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 0, ctx.xer);
	// bge cr6,0x822293d0
	if (!ctx.cr6.lt) goto loc_822293D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82229400
	goto loc_82229400;
loc_822293D0:
	// cmpdi cr6,r8,0
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 0, ctx.xer);
	// bne cr6,0x822293e0
	if (!ctx.cr6.eq) goto loc_822293E0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82229400
	goto loc_82229400;
loc_822293E0:
	// mulld r10,r10,r5
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r5.u64);
	// rotldi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 1);
	// divd r10,r10,r8
	ctx.r10.s64 = (ctx.r8.s64 && !(ctx.r10.s64 == INT64_MIN && ctx.r8.s64 == -1)) ? ctx.r10.s64 / ctx.r8.s64 : 0;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// andc r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// tdllei r8,0
	if (ctx.r8.s64 == 0ll || ctx.r8.u64 < 0ull) ppc_trap(ctx, base, 0);
	// tdlgei r10,-1
	if (ctx.r10.s64 == -1ll || ctx.r10.u64 > 18446744073709551615ull) ppc_trap(ctx, base, 0);
loc_82229400:
	// ld r10,92(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 92);
	// ld r7,572(r9)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r9.u32 + 572);
	// lwz r6,152(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// subf r10,r10,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r10.u64;
	// rlwimi r11,r6,0,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// cmpdi cr6,r10,0
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 0, ctx.xer);
	// bge cr6,0x82229424
	if (!ctx.cr6.lt) goto loc_82229424;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82229454
	goto loc_82229454;
loc_82229424:
	// cmpdi cr6,r8,0
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 0, ctx.xer);
	// bne cr6,0x82229434
	if (!ctx.cr6.eq) goto loc_82229434;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82229454
	goto loc_82229454;
loc_82229434:
	// mulld r7,r10,r5
	ctx.r7.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r5.u64);
	// rotldi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u64, 1);
	// divd r7,r7,r8
	ctx.r7.s64 = (ctx.r8.s64 && !(ctx.r7.s64 == INT64_MIN && ctx.r8.s64 == -1)) ? ctx.r7.s64 / ctx.r8.s64 : 0;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// andc r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r6.u64;
	// tdllei r8,0
	if (ctx.r8.s64 == 0ll || ctx.r8.u64 < 0ull) ppc_trap(ctx, base, 0);
	// tdlgei r7,-1
	if (ctx.r7.s64 == -1ll || ctx.r7.u64 > 18446744073709551615ull) ppc_trap(ctx, base, 0);
loc_82229454:
	// ld r7,460(r9)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r9.u32 + 460);
	// rlwimi r11,r10,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// ld r6,940(r9)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r9.u32 + 940);
	// stw r11,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// subf r10,r7,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r7.u64;
	// rldicr r11,r10,1,62
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bge cr6,0x8222947c
	if (!ctx.cr6.lt) goto loc_8222947C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822294ac
	goto loc_822294AC;
loc_8222947C:
	// cmpdi cr6,r8,0
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 0, ctx.xer);
	// bne cr6,0x8222948c
	if (!ctx.cr6.eq) goto loc_8222948C;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x822294ac
	goto loc_822294AC;
loc_8222948C:
	// mulld r10,r11,r5
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * ctx.r5.u64);
	// rotldi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 1);
	// divd r10,r10,r8
	ctx.r10.s64 = (ctx.r8.s64 && !(ctx.r10.s64 == INT64_MIN && ctx.r8.s64 == -1)) ? ctx.r10.s64 / ctx.r8.s64 : 0;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// andc r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// tdllei r8,0
	if (ctx.r8.s64 == 0ll || ctx.r8.u64 < 0ull) ppc_trap(ctx, base, 0);
	// tdlgei r10,-1
	if (ctx.r10.s64 == -1ll || ctx.r10.u64 > 18446744073709551615ull) ppc_trap(ctx, base, 0);
loc_822294AC:
	// ld r10,468(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 468);
	// ld r9,948(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 948);
	// lwz r7,156(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// rlwimi r11,r7,0,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// rldicr r10,r10,1,62
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// cmpdi cr6,r10,0
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 0, ctx.xer);
	// bge cr6,0x822294d4
	if (!ctx.cr6.lt) goto loc_822294D4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82229504
	goto loc_82229504;
loc_822294D4:
	// cmpdi cr6,r8,0
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 0, ctx.xer);
	// bne cr6,0x822294e4
	if (!ctx.cr6.eq) goto loc_822294E4;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82229504
	goto loc_82229504;
loc_822294E4:
	// mulld r9,r10,r5
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r5.u64);
	// rotldi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 1);
	// divd r9,r9,r8
	ctx.r9.s64 = (ctx.r8.s64 && !(ctx.r9.s64 == INT64_MIN && ctx.r8.s64 == -1)) ? ctx.r9.s64 / ctx.r8.s64 : 0;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// andc r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// tdllei r8,0
	if (ctx.r8.s64 == 0ll || ctx.r8.u64 < 0ull) ppc_trap(ctx, base, 0);
	// tdlgei r9,-1
	if (ctx.r9.s64 == -1ll || ctx.r9.u64 > 18446744073709551615ull) ppc_trap(ctx, base, 0);
loc_82229504:
	// rlwimi r11,r10,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// b 0x8222952c
	goto loc_8222952C;
loc_8222950C:
	// lwz r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// li r11,-1
	ctx.r11.s64 = -1;
	// oris r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 4294901760;
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r11,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
loc_8222952C:
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// lis r3,17459
	ctx.r3.s64 = 1144193024;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r3,r3,25703
	ctx.r3.u64 = ctx.r3.u64 | 25703;
	// bl 0x823cd418
	ctx.lr = 0x82229544;
	sub_823CD418(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8223C460) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// ld r9,40(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 40);
	// li r8,20
	ctx.r8.s64 = 20;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,392(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 392);
	// divdu r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 ? ctx.r9.u64 / ctx.r8.u64 : 0;
	// addi r8,r3,392
	ctx.r8.s64 = ctx.r3.s64 + 392;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// sth r9,68(r3)
	REX_STORE_U16(ctx.r3.u32 + 68, ctx.r9.u16);
	// std r11,296(r3)
	REX_STORE_U64(ctx.r3.u32 + 296, ctx.r11.u64);
	// stw r11,304(r3)
	REX_STORE_U32(ctx.r3.u32 + 304, ctx.r11.u32);
	// stb r11,308(r3)
	REX_STORE_U8(ctx.r3.u32 + 308, ctx.r11.u8);
	// stw r11,312(r3)
	REX_STORE_U32(ctx.r3.u32 + 312, ctx.r11.u32);
	// beq cr6,0x8223c4f8
	if (ctx.cr6.eq) goto loc_8223C4F8;
	// addi r7,r3,384
	ctx.r7.s64 = ctx.r3.s64 + 384;
loc_8223C4A4:
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223c4cc
	if (ctx.cr6.eq) goto loc_8223C4CC;
	// lwz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8223c4c0
	if (!ctx.cr6.eq) goto loc_8223C4C0;
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
loc_8223C4C0:
	// lwz r6,4(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r6,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
loc_8223C4CC:
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223c4e4
	if (ctx.cr6.eq) goto loc_8223C4E4;
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// b 0x8223c4e8
	goto loc_8223C4E8;
loc_8223C4E4:
	// stw r10,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
loc_8223C4E8:
	// stw r10,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8223c4a4
	if (!ctx.cr6.eq) goto loc_8223C4A4;
loc_8223C4F8:
	// li r10,25
	ctx.r10.s64 = 25;
	// addi r11,r3,72
	ctx.r11.s64 = ctx.r3.s64 + 72;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8223C504:
	// ld r10,280(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 280);
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8223c504
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223C504;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82241354) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822413A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
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
	// bl 0x822d4e88
	ctx.lr = 0x822413A8;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f20
	ctx.lr = 0x822413B0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r10,r7,29
	ctx.r10.u64 = ctx.r7.u32 & 0x7;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822413d8
	if (ctx.cr6.eq) goto loc_822413D8;
loc_822413C4:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f6c
	ctx.lr = 0x822413D4;
	// b 0x822d4ed8
	return;
loc_822413D8:
	// cmpwi cr6,r7,320
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 320, ctx.xer);
	// bne cr6,0x822413c4
	if (!ctx.cr6.eq) goto loc_822413C4;
	// lis r7,-32163
	ctx.r7.s64 = -2107834368;
	// lfs f8,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// li r28,39
	r28.s64 = 39;
	// lfs f7,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r9,r7,-5568
	ctx.r9.s64 = ctx.r7.s64 + -5568;
	// lfs f6,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// addi r29,r5,1276
	r29.s64 = ctx.r5.s64 + 1276;
	// lfs f31,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	f31.f64 = double(temp.f32);
	// addi r10,r8,640
	ctx.r10.s64 = ctx.r8.s64 + 640;
	// lfs f5,1276(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 1276);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,-5568(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -5568);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r9,1264
	r31.s64 = ctx.r9.s64 + 1264;
	// lfs f4,1272(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 1272);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r11,636
	ctx.r11.s64 = ctx.r11.s64 + 636;
	// lfs f13,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
	// lfs f12,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r5,12
	r30.s64 = ctx.r5.s64 + 12;
	// lfs f2,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// addi r29,r29,-12
	r29.s64 = r29.s64 + -12;
	// lfs f11,1276(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1276);
	ctx.f11.f64 = double(temp.f32);
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// lfs f10,1272(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1272);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,1268(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1268);
	ctx.f9.f64 = double(temp.f32);
	// lfs f1,1264(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1264);
	ctx.f1.f64 = double(temp.f32);
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// lfs f3,1268(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 1268);
	ctx.f3.f64 = double(temp.f32);
	// lfs f30,1264(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 1264);
	f30.f64 = double(temp.f32);
loc_82241450:
	// fmuls f29,f5,f0
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f28,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	f28.f64 = double(temp.f32);
	// fmuls f27,f4,f13
	f27.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f26,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	f26.f64 = double(temp.f32);
	// fmuls f25,f3,f12
	f25.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// lfs f24,-12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	f24.f64 = double(temp.f32);
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f22,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f22.f64 = double(temp.f32);
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f22,0(r7)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmuls f23,f30,f2
	f23.f64 = double(float(f30.f64 * ctx.f2.f64));
	// stfs f28,-4(r7)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r7.u32 + -4, temp.u32);
	// fmuls f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// stfs f26,-8(r7)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r7.u32 + -8, temp.u32);
	// fmuls f2,f31,f2
	ctx.f2.f64 = double(float(f31.f64 * ctx.f2.f64));
	// stfs f24,-12(r7)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r7.u32 + -12, temp.u32);
	// addi r7,r7,-16
	ctx.r7.s64 = ctx.r7.s64 + -16;
	// fmsubs f8,f8,f11,f29
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, -f29.f64)));
	// stfs f8,0(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmsubs f7,f7,f10,f27
	ctx.f7.f64 = double(float(std::fma(ctx.f7.f64, ctx.f10.f64, -f27.f64)));
	// stfs f7,4(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmsubs f6,f6,f9,f25
	ctx.f6.f64 = double(float(std::fma(ctx.f6.f64, ctx.f9.f64, -f25.f64)));
	// stfs f6,8(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmadds f7,f5,f11,f0
	ctx.f7.f64 = double(float(std::fma(ctx.f5.f64, ctx.f11.f64, ctx.f0.f64)));
	// fmadds f6,f4,f10,f13
	ctx.f6.f64 = double(float(std::fma(ctx.f4.f64, ctx.f10.f64, ctx.f13.f64)));
	// fmsubs f8,f31,f1,f23
	ctx.f8.f64 = double(float(std::fma(f31.f64, ctx.f1.f64, -f23.f64)));
	// stfs f8,12(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmadds f5,f3,f9,f12
	ctx.f5.f64 = double(float(std::fma(ctx.f3.f64, ctx.f9.f64, ctx.f12.f64)));
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmadds f4,f30,f1,f2
	ctx.f4.f64 = double(float(std::fma(f30.f64, ctx.f1.f64, ctx.f2.f64)));
	// stfs f6,-4(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f5,-8(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stfs f4,-12(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// lfs f0,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + -8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + -12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + -4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + -8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,-12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + -12);
	ctx.f3.f64 = double(temp.f32);
	// lfsu f2,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f2.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// lfsu f1,-16(r31)
	ea = -16 + r31.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	r31.u32 = ea;
	// lfsu f31,16(r30)
	ea = 16 + r30.u32;
	temp.u32 = REX_LOAD_U32(ea);
	f31.f64 = double(temp.f32);
	r30.u32 = ea;
	// lfsu f30,-16(r29)
	ea = -16 + r29.u32;
	temp.u32 = REX_LOAD_U32(ea);
	f30.f64 = double(temp.f32);
	r29.u32 = ea;
	// bdnz 0x82241450
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82241450;
	// fmuls f29,f5,f0
	f29.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f28,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	f28.f64 = double(temp.f32);
	// fmuls f27,f4,f13
	f27.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f26,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	f26.f64 = double(temp.f32);
	// fmuls f25,f3,f12
	f25.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// lfs f24,-12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	f24.f64 = double(temp.f32);
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f22,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f22.f64 = double(temp.f32);
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f22,0(r7)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmuls f23,f30,f2
	f23.f64 = double(float(f30.f64 * ctx.f2.f64));
	// stfs f28,-4(r7)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r7.u32 + -4, temp.u32);
	// fmuls f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// stfs f26,-8(r7)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r7.u32 + -8, temp.u32);
	// fmuls f2,f31,f2
	ctx.f2.f64 = double(float(f31.f64 * ctx.f2.f64));
	// stfs f24,-12(r7)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r7.u32 + -12, temp.u32);
	// li r7,320
	ctx.r7.s64 = 320;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// fmsubs f8,f8,f11,f29
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, -f29.f64)));
	// stfs f8,0(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmsubs f7,f7,f10,f27
	ctx.f7.f64 = double(float(std::fma(ctx.f7.f64, ctx.f10.f64, -f27.f64)));
	// stfs f7,4(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmsubs f6,f6,f9,f25
	ctx.f6.f64 = double(float(std::fma(ctx.f6.f64, ctx.f9.f64, -f25.f64)));
	// stfs f6,8(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmadds f7,f5,f11,f0
	ctx.f7.f64 = double(float(std::fma(ctx.f5.f64, ctx.f11.f64, ctx.f0.f64)));
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// fmadds f6,f4,f10,f13
	ctx.f6.f64 = double(float(std::fma(ctx.f4.f64, ctx.f10.f64, ctx.f13.f64)));
	// fmsubs f8,f31,f1,f23
	ctx.f8.f64 = double(float(std::fma(f31.f64, ctx.f1.f64, -f23.f64)));
	// stfs f8,12(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmadds f5,f3,f9,f12
	ctx.f5.f64 = double(float(std::fma(ctx.f3.f64, ctx.f9.f64, ctx.f12.f64)));
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmadds f4,f30,f1,f2
	ctx.f4.f64 = double(float(std::fma(f30.f64, ctx.f1.f64, ctx.f2.f64)));
	// stfs f6,-4(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f5,-8(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f4,-12(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// bl 0x82244cf8
	ctx.lr = 0x822415B0;
	sub_82244CF8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f6c
	ctx.lr = 0x822415C0;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8224AF50) {
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
	// li r3,24
	ctx.r3.s64 = 24;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82255b48
	ctx.lr = 0x8224AF74;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8224afa0
	if (ctx.cr0.eq) goto loc_8224AFA0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
loc_8224AFA0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8224afb4
	if (!ctx.cr6.eq) goto loc_8224AFB4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8224afc0
	goto loc_8224AFC0;
loc_8224AFB4:
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_8224AFC0:
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

DEFINE_REX_FUNC(sub_8224CBA0) {
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
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r31,r11,26300
	r31.s64 = ctx.r11.s64 + 26300;
	// lwz r11,26320(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 26320);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8224cbe4
	if (!ctx.cr0.eq) goto loc_8224CBE4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,26320(r10)
	REX_STORE_U32(ctx.r10.u32 + 26320, ctx.r11.u32);
	// bl 0x8227acf8
	ctx.lr = 0x8224CBD8;
	sub_8227ACF8(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,15400
	ctx.r3.s64 = ctx.r11.s64 + 15400;
	// bl 0x822d5848
	ctx.lr = 0x8224CBE4;
	sub_822D5848(ctx, base);
loc_8224CBE4:
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,65534
	ctx.r4.u64 = ctx.r4.u64 | 65534;
	// bl 0x8227ae40
	ctx.lr = 0x8224CBF4;
	sub_8227AE40(ctx, base);
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

DEFINE_REX_FUNC(sub_8224E610) {
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
	// li r3,176
	ctx.r3.s64 = 176;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82255b48
	ctx.lr = 0x8224E634;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224e648
	if (ctx.cr0.eq) goto loc_8224E648;
	// bl 0x822495b0
	ctx.lr = 0x8224E640;
	sub_822495B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8224e64c
	goto loc_8224E64C;
loc_8224E648:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8224E64C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8224e660
	if (!ctx.cr6.eq) goto loc_8224E660;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8224e66c
	goto loc_8224E66C;
loc_8224E660:
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_8224E66C:
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

DEFINE_REX_FUNC(sub_822516B0) {
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
	// bl 0x822469c0
	ctx.lr = 0x822516C4;
	sub_822469C0(ctx, base);
	// mr. r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// beq 0x82251728
	if (ctx.cr0.eq) goto loc_82251728;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r10,r10,23872
	ctx.r10.s64 = ctx.r10.s64 + 23872;
	// lwz r9,544(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 544);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82251728
	if (!ctx.cr6.lt) goto loc_82251728;
	// rlwinm r7,r11,25,7,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFC;
	// clrlwi r11,r11,23
	ctx.r11.u64 = ctx.r11.u32 & 0x1FF;
	// mulli r9,r11,12
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwzx r11,r7,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82251728
	if (!ctx.cr6.eq) goto loc_82251728;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r9,r8,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82251728
	if (!ctx.cr6.eq) goto loc_82251728;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82251734
	if (!ctx.cr6.eq) goto loc_82251734;
loc_82251728:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x82251788
	goto loc_82251788;
loc_82251734:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82251728
	if (!ctx.cr0.eq) goto loc_82251728;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8225da70
	ctx.lr = 0x8225174C;
	sub_8225DA70(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x8224da00
	ctx.lr = 0x82251758;
	sub_8224DA00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82251788
	if (ctx.cr0.lt) goto loc_82251788;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// bne cr6,0x82251784
	if (!ctx.cr6.eq) goto loc_82251784;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82249b00
	ctx.lr = 0x82251780;
	sub_82249B00(ctx, base);
	// b 0x82251788
	goto loc_82251788;
loc_82251784:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82251788:
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

DEFINE_REX_FUNC(sub_82254560) {
	REX_FUNC_PROLOGUE();
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82253ff0
	sub_82253FF0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82254568) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82254570;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225465c
	if (ctx.cr6.eq) goto loc_8225465C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8225465c
	if (ctx.cr6.eq) goto loc_8225465C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8227a2f8
	ctx.lr = 0x822545A8;
	sub_8227A2F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82254664
	if (ctx.cr0.lt) goto loc_82254664;
	// not r11,r30
	ctx.r11.u64 = ~r30.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8225b210
	ctx.lr = 0x822545CC;
	sub_8225B210(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82254638
	if (ctx.cr0.lt) goto loc_82254638;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8224e890
	ctx.lr = 0x822545E0;
	sub_8224E890(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82254624
	if (ctx.cr0.lt) goto loc_82254624;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,23832(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 23832);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82254608
	if (ctx.cr6.eq) goto loc_82254608;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82253ff0
	ctx.lr = 0x82254608;
	sub_82253FF0(ctx, base);
loc_82254608:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82254630
	if (ctx.cr6.eq) goto loc_82254630;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82258ee0
	ctx.lr = 0x8225461C;
	sub_82258EE0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x82254630
	if (!ctx.cr0.lt) goto loc_82254630;
loc_82254624:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822516b0
	ctx.lr = 0x8225462C;
	sub_822516B0(ctx, base);
	// b 0x82254638
	goto loc_82254638;
loc_82254630:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_82254638:
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82254654
	if (ctx.cr6.eq) goto loc_82254654;
	// bl 0x8227b848
	ctx.lr = 0x8225464C;
	sub_8227B848(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x82254654;
	sub_82255B70(ctx, base);
loc_82254654:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82254664
	goto loc_82254664;
loc_8225465C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82254664:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82257318) {
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
	ctx.lr = 0x82257320;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// lwz r4,23544(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 23544);
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// bl 0x82255c88
	ctx.lr = 0x82257344;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82257358
	if (!ctx.cr0.eq) goto loc_82257358;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x82257370
	goto loc_82257370;
loc_82257358:
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
	// bl 0x82260668
	ctx.lr = 0x82257370;
	sub_82260668(ctx, base);
loc_82257370:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822589E8) {
	REX_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822589f8
	if (!ctx.cr6.eq) goto loc_822589F8;
	// blr 
	return;
loc_822589F8:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82258378
	sub_82258378(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82259970) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82259978;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82256990
	ctx.lr = 0x8225998C;
	sub_82256990(ctx, base);
	// b 0x82259a38
	goto loc_82259A38;
loc_82259990:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x822599a8
	if (ctx.cr6.eq) goto loc_822599A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82257bf8
	ctx.lr = 0x822599A0;
	sub_82257BF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82259a2c
	if (ctx.cr0.eq) goto loc_82259A2C;
loc_822599A8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x822599c0
	if (ctx.cr6.eq) goto loc_822599C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225ee88
	ctx.lr = 0x822599B8;
	sub_8225EE88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82259a2c
	if (ctx.cr0.eq) goto loc_82259A2C;
loc_822599C0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82257c40
	ctx.lr = 0x822599CC;
	sub_82257C40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82259a2c
	if (!ctx.cr0.eq) goto loc_82259A2C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822469c0
	ctx.lr = 0x822599DC;
	sub_822469C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82247078
	ctx.lr = 0x822599F0;
	sub_82247078(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822469c0
	ctx.lr = 0x822599F8;
	sub_822469C0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8224da00
	ctx.lr = 0x82259A00;
	sub_8224DA00(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82259a18
	if (ctx.cr6.eq) goto loc_82259A18;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82259a50
	if (ctx.cr6.eq) goto loc_82259A50;
loc_82259A18:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822469c0
	ctx.lr = 0x82259A20;
	sub_822469C0(ctx, base);
	// bl 0x82259908
	ctx.lr = 0x82259A24;
	sub_82259908(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82259a58
	if (!ctx.cr0.eq) goto loc_82259A58;
loc_82259A2C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82256a80
	ctx.lr = 0x82259A38;
	sub_82256A80(ctx, base);
loc_82259A38:
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82259990
	if (!ctx.cr6.eq) goto loc_82259990;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82259A48:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4edc
	return;
loc_82259A50:
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x82259a48
	goto loc_82259A48;
loc_82259A58:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822469c0
	ctx.lr = 0x82259A60;
	sub_822469C0(ctx, base);
	// b 0x82259a48
	goto loc_82259A48;
}

DEFINE_REX_FUNC(sub_8225D550) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8225D788) {
	REX_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r7,r9,r8
	ctx.r7.u64 = uint32_t((ctx.r8.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r9.s32 / ctx.r8.s32 : 0);
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r7,r7,r8
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8225E278) {
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
	// li r4,2008
	ctx.r4.s64 = 2008;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8225da70
	ctx.lr = 0x8225E2A0;
	sub_8225DA70(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8227c2b8
	ctx.lr = 0x8225E2AC;
	sub_8227C2B8(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
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

DEFINE_REX_FUNC(sub_8225F0B0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8225e050
	ctx.lr = 0x8225F0D4;
	sub_8225E050(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8224da00
	ctx.lr = 0x8225F0E0;
	sub_8224DA00(ctx, base);
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

DEFINE_REX_FUNC(sub_82260BB8) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r10,132(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// rlwinm r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// stw r11,336(r1)
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r11.u32);
	// bne cr6,0x82260cc8
	if (!ctx.cr6.eq) goto loc_82260CC8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,64(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lfs f0,-29184(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -29184);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82291750
	ctx.lr = 0x82260C14;
	sub_82291750(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f3,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f3.f64 = double(temp.f32);
	// fdivs f2,f3,f30
	ctx.f2.f64 = double(float(ctx.f3.f64 / f30.f64));
	// fdivs f1,f3,f31
	ctx.f1.f64 = double(float(ctx.f3.f64 / f31.f64));
	// bl 0x82291130
	ctx.lr = 0x82260C2C;
	sub_82291130(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfs f3,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 60);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,56(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82291130
	ctx.lr = 0x82260C40;
	sub_82291130(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f2,15944(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15944);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// bl 0x822911a8
	ctx.lr = 0x82260C60;
	sub_822911A8(ctx, base);
	// addi r31,r30,68
	r31.s64 = r30.s64 + 68;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82291210
	ctx.lr = 0x82260C74;
	sub_82291210(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// bl 0x82291210
	ctx.lr = 0x82260C84;
	sub_82291210(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// bl 0x82291210
	ctx.lr = 0x82260C94;
	sub_82291210(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// lfs f2,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x822911a8
	ctx.lr = 0x82260CAC;
	sub_822911A8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82291210
	ctx.lr = 0x82260CBC;
	sub_82291210(ctx, base);
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 132);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,132(r30)
	REX_STORE_U32(r30.u32 + 132, ctx.r11.u32);
loc_82260CC8:
	// lwz r3,336(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x822d7b58
	ctx.lr = 0x82260CD0;
	sub_822D7B58(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
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

DEFINE_REX_FUNC(sub_82268478) {
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
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r31,r11,29900
	r31.s64 = ctx.r11.s64 + 29900;
	// lwz r11,29920(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 29920);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822684c0
	if (!ctx.cr0.eq) goto loc_822684C0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,29920(r10)
	REX_STORE_U32(ctx.r10.u32 + 29920, ctx.r11.u32);
	// li r4,22592
	ctx.r4.s64 = 22592;
	// bl 0x8227ad18
	ctx.lr = 0x822684B4;
	sub_8227AD18(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,15856
	ctx.r3.s64 = ctx.r11.s64 + 15856;
	// bl 0x822d5848
	ctx.lr = 0x822684C0;
	sub_822D5848(ctx, base);
loc_822684C0:
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

DEFINE_REX_FUNC(sub_8226AB80) {
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
	ctx.lr = 0x8226AB88;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r10,116(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bne cr6,0x8226abc0
	if (!ctx.cr6.eq) goto loc_8226ABC0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// b 0x8226acfc
	goto loc_8226ACFC;
loc_8226ABC0:
	// bl 0x822094c8
	ctx.lr = 0x8226ABC4;
	sub_822094C8(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// bge cr6,0x8226abd8
	if (!ctx.cr6.lt) goto loc_8226ABD8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8226ABD8:
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// ble cr6,0x8226abe4
	if (!ctx.cr6.gt) goto loc_8226ABE4;
	// li r11,34
	ctx.r11.s64 = 34;
loc_8226ABE4:
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r3,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r3.u32);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2388(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2388);
	ctx.f13.f64 = double(temp.f32);
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
	// fmr f30,f0
	f30.f64 = ctx.f0.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmuls f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// beq cr6,0x8226ac70
	if (ctx.cr6.eq) goto loc_8226AC70;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8226ac70
	if (ctx.cr6.eq) goto loc_8226AC70;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8226ac40
	if (ctx.cr6.eq) goto loc_8226AC40;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8226ac9c
	if (!ctx.cr6.eq) goto loc_8226AC9C;
loc_8226AC40:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8226ac64
	if (ctx.cr6.eq) goto loc_8226AC64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8226ac64
	if (ctx.cr6.eq) goto loc_8226AC64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226a8b8
	ctx.lr = 0x8226AC5C;
	sub_8226A8B8(ctx, base);
loc_8226AC5C:
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// b 0x8226ac9c
	goto loc_8226AC9C;
loc_8226AC64:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226a540
	ctx.lr = 0x8226AC6C;
	sub_8226A540(ctx, base);
	// b 0x8226ac5c
	goto loc_8226AC5C;
loc_8226AC70:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8226ac90
	if (ctx.cr6.eq) goto loc_8226AC90;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8226ac90
	if (ctx.cr6.eq) goto loc_8226AC90;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226a278
	ctx.lr = 0x8226AC8C;
	sub_8226A278(ctx, base);
	// b 0x8226ac98
	goto loc_8226AC98;
loc_8226AC90:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82269f00
	ctx.lr = 0x8226AC98;
	sub_82269F00(ctx, base);
loc_8226AC98:
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
loc_8226AC9C:
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8226acfc
	if (!ctx.cr6.gt) goto loc_8226ACFC;
	// li r30,0
	r30.s64 = 0;
loc_8226ACB0:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwzx r3,r11,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// bl 0x82256c10
	ctx.lr = 0x8226ACC0;
	sub_82256C10(ctx, base);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + f30.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwzx r3,r11,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// bl 0x82256c60
	ctx.lr = 0x8226ACE8;
	sub_82256C60(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8226acb0
	if (ctx.cr6.lt) goto loc_8226ACB0;
loc_8226ACFC:
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x822d7b58
	ctx.lr = 0x8226AD04;
	sub_822D7B58(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82275240) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// sth r4,126(r1)
	REX_STORE_U16(ctx.r1.u32 + 126, ctx.r4.u16);
	// bl 0x8225ee88
	ctx.lr = 0x82275260;
	sub_8225EE88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82275284
	if (ctx.cr0.eq) goto loc_82275284;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// addi r5,r1,126
	ctx.r5.s64 = ctx.r1.s64 + 126;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82274fa8
	ctx.lr = 0x82275284;
	sub_82274FA8(ctx, base);
loc_82275284:
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

DEFINE_REX_FUNC(sub_82276838) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8227684c
	if (!ctx.cr6.eq) goto loc_8227684C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_8227684C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82276D08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82276D10;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82276e04
	if (ctx.cr6.lt) goto loc_82276E04;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82276e04
	if (!ctx.cr6.lt) goto loc_82276E04;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r29,r4,12
	r29.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(12));
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + ctx.r11.u64;
	// bl 0x8224e998
	ctx.lr = 0x82276D44;
	sub_8224E998(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82276d94
	if (ctx.cr6.eq) goto loc_82276D94;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r10,r30,r10
	ctx.r10.u64 = ctx.r10.u64 - r30.u64;
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + ctx.r11.u64;
	// mulli r11,r10,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// addi r5,r11,-12
	ctx.r5.s64 = ctx.r11.s64 + -12;
	// bl 0x822d6840
	ctx.lr = 0x82276D70;
	sub_822D6840(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r11,-4
	ctx.r5.s64 = ctx.r11.s64 + -4;
	// bl 0x822d6840
	ctx.lr = 0x82276D94;
	sub_822D6840(ctx, base);
loc_82276D94:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mulli r4,r11,12
	ctx.r4.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// bl 0x82255b88
	ctx.lr = 0x82276DA8;
	sub_82255B88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82276dbc
	if (!ctx.cr0.eq) goto loc_82276DBC;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82276dc0
	if (!ctx.cr6.eq) goto loc_82276DC0;
loc_82276DBC:
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_82276DC0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82255b88
	ctx.lr = 0x82276DD4;
	sub_82255B88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82276de8
	if (!ctx.cr0.eq) goto loc_82276DE8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82276dec
	if (!ctx.cr6.eq) goto loc_82276DEC;
loc_82276DE8:
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
loc_82276DEC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// b 0x82276e08
	goto loc_82276E08;
loc_82276E04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82276E08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82279A10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82279A18;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82279ac0
	if (ctx.cr6.eq) goto loc_82279AC0;
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82279ac0
	if (!ctx.cr6.lt) goto loc_82279AC0;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82279ac0
	if (ctx.cr6.lt) goto loc_82279AC0;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// blt cr6,0x82279ac0
	if (ctx.cr6.lt) goto loc_82279AC0;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82279ac0
	if (ctx.cr6.lt) goto loc_82279AC0;
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82279ac0
	if (ctx.cr6.gt) goto loc_82279AC0;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r8,16
	ctx.r8.s64 = 16;
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
	// beq cr6,0x82279ab8
	if (ctx.cr6.eq) goto loc_82279AB8;
loc_82279A98:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8227cd40
	ctx.lr = 0x82279AAC;
	sub_8227CD40(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// blt cr6,0x82279a98
	if (ctx.cr6.lt) goto loc_82279A98;
loc_82279AB8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82279ac4
	goto loc_82279AC4;
loc_82279AC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82279AC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8227C190) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8227C198;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8227c1f8
	if (!ctx.cr6.eq) goto loc_8227C1F8;
	// addi r29,r11,50
	r29.s64 = ctx.r11.s64 + 50;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r4,r29,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82255b88
	ctx.lr = 0x8227C1C4;
	sub_82255B88(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8227c1d8
	if (!ctx.cr0.eq) goto loc_8227C1D8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8227c218
	goto loc_8227C218;
loc_8227C1D8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x822d5870
	ctx.lr = 0x8227C1F0;
	sub_822D5870(ctx, base);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
loc_8227C1F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r28.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8227C218:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8227D7D0) {
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
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227d844
	if (ctx.cr0.eq) goto loc_8227D844;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8227d838
	if (ctx.cr6.lt) goto loc_8227D838;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8227d838
	if (!ctx.cr6.lt) goto loc_8227D838;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227D828;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8227d918
	if (ctx.cr0.lt) goto loc_8227D918;
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// b 0x8227d8f8
	goto loc_8227D8F8;
loc_8227D838:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,29
	ctx.r3.u64 = ctx.r3.u64 | 29;
	// b 0x8227d918
	goto loc_8227D918;
loc_8227D844:
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227d898
	if (ctx.cr0.eq) goto loc_8227D898;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + r30.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8227d838
	if (!ctx.cr6.lt) goto loc_8227D838;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + r30.u64;
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227D884;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8227d918
	if (ctx.cr0.lt) goto loc_8227D918;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// b 0x8227d8f4
	goto loc_8227D8F4;
loc_8227D898:
	// rlwinm. r11,r4,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227d910
	if (ctx.cr0.eq) goto loc_8227D910;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bgt cr6,0x8227d838
	if (ctx.cr6.gt) goto loc_8227D838;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// subfic r11,r10,1
	ctx.xer.ca = ctx.r10.u32 <= 1;
	ctx.r11.u64 = static_cast<uint64_t>(1) - ctx.r10.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8227d838
	if (ctx.cr6.lt) goto loc_8227D838;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227D8E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8227d918
	if (ctx.cr0.lt) goto loc_8227D918;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8227D8F4:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_8227D8F8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// b 0x8227d918
	goto loc_8227D918;
loc_8227D910:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_8227D918:
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

DEFINE_REX_FUNC(sub_82282A94) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82282F80) {
	REX_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82282ed8
	sub_82282ED8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82282F88) {
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
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r11,r11,30504
	ctx.r11.s64 = ctx.r11.s64 + 30504;
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82282fd0
	if (!ctx.cr6.eq) goto loc_82282FD0;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,30524
	ctx.r10.s64 = ctx.r10.s64 + 30524;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82282fd0
	if (!ctx.cr6.eq) goto loc_82282FD0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82282ed8
	ctx.lr = 0x82282FC4;
	sub_82282ED8(ctx, base);
	// bl 0x82281c78
	ctx.lr = 0x82282FC8;
	sub_82281C78(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82282fd4
	goto loc_82282FD4;
loc_82282FD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82282FD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822852F8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82285370) {
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
	// li r3,400
	ctx.r3.s64 = 400;
	// bl 0x82245ff0
	ctx.lr = 0x8228538C;
	sub_82245FF0(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822853a4
	if (!ctx.cr0.eq) goto loc_822853A4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x822853b8
	goto loc_822853B8;
loc_822853A4:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,50
	ctx.r10.s64 = 50;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_822853B8:
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

DEFINE_REX_FUNC(sub_82286228) {
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
	// stw r4,148(r3)
	REX_STORE_U32(ctx.r3.u32 + 148, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8228625c
	if (!ctx.cr6.eq) goto loc_8228625C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82286254;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82286274
	goto loc_82286274;
loc_8228625C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82286274;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82286274:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82286FA0) {
	REX_FUNC_PROLOGUE();
	// lwz r10,156(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82286fc4
	if (ctx.cr6.eq) goto loc_82286FC4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82286FC4:
	// lwz r10,180(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 180);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82286fec
	if (!ctx.cr6.eq) goto loc_82286FEC;
	// lwz r3,332(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 332);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82286FEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822876A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822876B0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// xor r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 ^ ctx.r11.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822876f0
	if (ctx.cr0.eq) goto loc_822876F0;
	// lwz r3,332(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 332);
	// not r11,r5
	ctx.r11.u64 = ~ctx.r5.u64;
	// li r5,20
	ctx.r5.s64 = 20;
	// rlwinm r6,r11,28,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822876F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822876F0:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// xor r11,r30,r11
	ctx.r11.u64 = r30.u64 ^ ctx.r11.u64;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82287724
	if (ctx.cr0.eq) goto loc_82287724;
	// lwz r3,332(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 332);
	// not r11,r30
	ctx.r11.u64 = ~r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287724;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82287724:
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 136);
	// clrlwi r11,r30,30
	ctx.r11.u64 = r30.u32 & 0x3;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// addi r29,r10,7216
	r29.s64 = ctx.r10.s64 + 7216;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82287764
	if (ctx.cr6.eq) goto loc_82287764;
	// lwz r3,332(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 332);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r6,r11,r29
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r11,52(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287764;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82287764:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// xor r11,r30,r11
	ctx.r11.u64 = r30.u64 ^ ctx.r11.u64;
	// rlwinm. r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82287798
	if (ctx.cr0.eq) goto loc_82287798;
	// lwz r3,332(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 332);
	// rlwinm r11,r30,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xC;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r6,r11,r29
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r11,52(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287798;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82287798:
	// stw r30,136(r31)
	REX_STORE_U32(r31.u32 + 136, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8228B620) {
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
	ctx.lr = 0x8228B628;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,100
	r27.s64 = ctx.r3.s64 + 100;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x824d438c
	ctx.lr = 0x8228B648;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,17
	ctx.r11.s64 = 17;
	// divwu r11,r30,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? r30.u32 / ctx.r11.u32 : 0);
	// mulli r11,r11,17
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(17));
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r31
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// b 0x8228b6a0
	goto loc_8228B6A0;
loc_8228B668:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8228b69c
	if (!ctx.cr6.eq) goto loc_8228B69C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228b69c
	if (!ctx.cr6.eq) goto loc_8228B69C;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x822938c8
	ctx.lr = 0x8228B694;
	sub_822938C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8228b6a8
	if (!ctx.cr0.eq) goto loc_8228B6A8;
loc_8228B69C:
	// lwz r31,60(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 60);
loc_8228B6A0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8228b668
	if (!ctx.cr6.eq) goto loc_8228B668;
loc_8228B6A8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824d437c
	ctx.lr = 0x8228B6B0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8228E888) {
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
	// b 0x8228e8c8
	goto loc_8228E8C8;
loc_8228E8A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,12(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228e8bc
	if (ctx.cr6.eq) goto loc_8228E8BC;
	// bl 0x82216cc8
	ctx.lr = 0x8228E8BC;
	sub_82216CC8(ctx, base);
loc_8228E8BC:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82255b70
	ctx.lr = 0x8228E8C4;
	sub_82255B70(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
loc_8228E8C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228e8a4
	if (!ctx.cr6.eq) goto loc_8228E8A4;
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

DEFINE_REX_FUNC(sub_82290A50) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// vspltisw128 v63,-1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// vor128 v59,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vspltisw128 v58,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,12896
	ctx.r11.s64 = ctx.r11.s64 + 12896;
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// addi r10,r10,12880
	ctx.r10.s64 = ctx.r10.s64 + 12880;
	// vupkd3d128 v60,v58,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v58.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v58.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v60 = vTemp;
	// vor128 v12,v58,v58
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v58.u8));
	// vcsxwfp128 v57,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v57.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// vslw128 v56,v62,v62
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v62.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v62.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_sllv_epi32(a, shift));
	}
	// lvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v0,v60,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x0));
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v55,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// addi r10,r9,12864
	ctx.r10.s64 = ctx.r9.s64 + 12864;
	// vspltw128 v8,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// vandc128 v2,v59,v56
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// vspltw128 v9,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x55));
	// vspltw128 v54,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// addi r11,r11,12848
	ctx.r11.s64 = ctx.r11.s64 + 12848;
	// vor128 v10,v55,v55
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v55.u8));
	// vspltw128 v26,v63,1
	simde_mm_store_si128((simde__m128i*)v26.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v53,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// lvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpgtfp v11,v2,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v61,v61,3
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x0));
	// vrefp v13,v2
	simde_mm_store_ps(ctx.v13.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v2.f32)));
	// vspltw128 v52,v62,3
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x0));
	// vspltw128 v31,v62,1
	simde_mm_store_si128((simde__m128i*)v31.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// lvx128 v60,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v30,v62,2
	simde_mm_store_si128((simde__m128i*)v30.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// vspltw128 v1,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// vxor128 v62,v61,v56
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// vspltw128 v27,v60,2
	simde_mm_store_si128((simde__m128i*)v27.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x55));
	// vspltw128 v28,v60,1
	simde_mm_store_si128((simde__m128i*)v28.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xAA));
	// vspltw128 v63,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vspltw128 v29,v60,0
	simde_mm_store_si128((simde__m128i*)v29.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// vsel v7,v12,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// vnmsubfp v10,v2,v13,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor v3,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vsel v12,v9,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8))));
	// vmaddfp v13,v13,v10,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v9,v2,v13,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v8,v13,v13
	simde_mm_store_ps(ctx.v8.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v13,v9,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vsel v10,v3,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vsel v13,v2,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// vcmpgtfp128 v2,v59,v61
	simde_mm_store_ps(ctx.v2.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vaddfp128 v6,v13,v54
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v54.f32)));
	// vor v8,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vmaddfp v10,v13,v26,v13
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(v26.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vcmpgtfp128 v4,v13,v53
	simde_mm_store_ps(ctx.v4.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v53.f32)));
	// vcmpgtfp128 v26,v58,v59
	simde_mm_store_ps(v26.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v59.f32)));
	// vrefp v13,v6
	simde_mm_store_ps(ctx.v13.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v6.f32)));
	// vaddfp128 v61,v10,v57
	simde_mm_store_ps(ctx.v61.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v57.f32)));
	// vsel v25,v7,v12,v4
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// vnmsubfp v3,v6,v13,v0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor v10,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vmaddfp v13,v13,v3,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v3,v6,v13,v0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vspltw128 v6,v60,3
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x0));
	// vcmpeqfp v5,v13,v13
	simde_mm_store_ps(ctx.v5.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v13,v3,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vcmpgtfp128 v3,v62,v59
	simde_mm_store_ps(ctx.v3.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v59.f32)));
	// vsel v9,v10,v13,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vxor128 v10,v55,v56
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// vmulfp128 v13,v61,v9
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vor128 v9,v55,v55
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v55.u8));
	// vsel v12,v8,v13,v4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vmulfp128 v13,v12,v12
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vandc128 v62,v12,v56
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vcmpgtfp128 v4,v63,v62
	simde_mm_store_ps(ctx.v4.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vaddfp128 v8,v13,v52
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v52.f32)));
	// vmaddfp v7,v13,v6,v27
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(v27.f32)));
	// vmaddfp v8,v13,v8,v30
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(v30.f32)));
	// vmaddfp v7,v13,v7,v28
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(v28.f32)));
	// vmaddfp v8,v13,v8,v31
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(v31.f32)));
	// vmaddfp v7,v13,v7,v29
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(v29.f32)));
	// vmaddfp v8,v13,v8,v1
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v63,v7,v13
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vrefp v13,v8
	simde_mm_store_ps(ctx.v13.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v8.f32)));
	// vor v5,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vor v6,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vnmsubfp v1,v5,v13,v0
	simde_mm_store_ps(ctx.v1.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor v8,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vmaddfp v13,v13,v1,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v0,v6,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v5,v13,v13
	simde_mm_store_ps(ctx.v5.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v13,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vsel v13,v8,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmulfp128 v0,v63,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v12,v0,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vsel v13,v0,v12,v4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// vxor128 v0,v13,v56
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// vsel v12,v13,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vaddfp v12,v12,v25
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(v25.f32)));
	// vxor128 v0,v12,v56
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// vsel v13,v12,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vsel v0,v13,v9,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// vsel v1,v0,v10,v3
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A3D10) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a3d3c
	if (ctx.cr6.eq) goto loc_822A3D3C;
	// bl 0x82218538
	ctx.lr = 0x822A3D34;
	sub_82218538(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_822A3D3C:
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

DEFINE_REX_FUNC(sub_822A4C18) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// bl 0x822a4590
	ctx.lr = 0x822A4C48;
	sub_822A4590(ctx, base);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lbz r11,99(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 99);
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f30,4(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822a4c78
	if (!ctx.cr6.eq) goto loc_822A4C78;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x82216020
	ctx.lr = 0x822A4C78;
	sub_82216020(ctx, base);
loc_822A4C78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

DEFINE_REX_FUNC(sub_822A7FA8) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822a7fe0
	if (!ctx.cr6.lt) goto loc_822A7FE0;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x822a7fe4
	if (!ctx.cr6.gt) goto loc_822A7FE4;
loc_822A7FE0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822A7FE4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822a8040
	if (ctx.cr0.eq) goto loc_822A8040;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf r10,r10,r30
	ctx.r10.u64 = r30.u64 - ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// srawi r30,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	r30.s64 = ctx.r10.s32 >> 4;
	// bne cr6,0x822a8010
	if (!ctx.cr6.eq) goto loc_822A8010;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a7ce8
	ctx.lr = 0x822A8010;
	sub_822A7CE8(ctx, base);
loc_822A8010:
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a807c
	if (ctx.cr6.eq) goto loc_822A807C;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822a8078
	goto loc_822A8078;
loc_822A8040:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822a8058
	if (!ctx.cr6.eq) goto loc_822A8058;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a7ce8
	ctx.lr = 0x822A8058;
	sub_822A7CE8(ctx, base);
loc_822A8058:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a807c
	if (ctx.cr6.eq) goto loc_822A807C;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
loc_822A8078:
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_822A807C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
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

DEFINE_REX_FUNC(sub_822AB0AC) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822AB124) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822AB140) {
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
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r31,31464(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 31464);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8229ff40
	ctx.lr = 0x822AB160;
	sub_8229FF40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8229f460
	ctx.lr = 0x822AB16C;
	sub_8229F460(ctx, base);
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

DEFINE_REX_FUNC(sub_822AC340) {
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
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822ac37c
	if (ctx.cr6.eq) goto loc_822AC37C;
loc_822AC364:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,12(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x822abf40
	ctx.lr = 0x822AC370;
	sub_822ABF40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x822ac364
	if (!ctx.cr6.eq) goto loc_822AC364;
loc_822AC37C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_822AD960) {
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
	// bl 0x822acbf0
	ctx.lr = 0x822AD978;
	sub_822ACBF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822abe68
	ctx.lr = 0x822AD980;
	sub_822ABE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822acb78
	ctx.lr = 0x822AD988;
	sub_822ACB78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822acc40
	ctx.lr = 0x822AD990;
	sub_822ACC40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
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

DEFINE_REX_FUNC(sub_822AE9E8) {
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
	ctx.lr = 0x822AE9F0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r29,452(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 452);
	// bl 0x822a99c0
	ctx.lr = 0x822AEA14;
	sub_822A99C0(ctx, base);
	// add r23,r3,r31
	r23.u64 = ctx.r3.u64 + r31.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stb r27,465(r23)
	REX_STORE_U8(r23.u32 + 465, r27.u8);
	// lbz r11,464(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 464);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822aea38
	if (!ctx.cr0.eq) goto loc_822AEA38;
loc_822AEA30:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822aeb64
	goto loc_822AEB64;
loc_822AEA38:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,460
	ctx.r5.s64 = r31.s64 + 460;
	// addi r4,r31,440
	ctx.r4.s64 = r31.s64 + 440;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822aa9e0
	ctx.lr = 0x822AEA4C;
	sub_822AA9E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r3,465(r23)
	REX_STORE_U8(r23.u32 + 465, ctx.r3.u8);
	// beq 0x822aea30
	if (ctx.cr0.eq) goto loc_822AEA30;
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r30,r11,r31
	r30.u64 = ctx.r11.u64 + r31.u64;
	// addi r25,r30,488
	r25.s64 = r30.s64 + 488;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822b6e80
	ctx.lr = 0x822AEA70;
	sub_822B6E80(ctx, base);
	// addi r24,r30,536
	r24.s64 = r30.s64 + 536;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822b6e80
	ctx.lr = 0x822AEA80;
	sub_822B6E80(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// beq cr6,0x822aea94
	if (ctx.cr6.eq) goto loc_822AEA94;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(r29.s32, 2, ctx.xer);
	// bne cr6,0x822aea98
	if (!ctx.cr6.eq) goto loc_822AEA98;
loc_822AEA94:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822AEA98:
	// lwz r26,20(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r29,16(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(r29.u32, r26.u32, ctx.xer);
	// beq cr6,0x822aeb60
	if (ctx.cr6.eq) goto loc_822AEB60;
	// clrlwi r27,r11,24
	r27.u64 = ctx.r11.u32 & 0xFF;
loc_822AEAB0:
	// lwz r30,0(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x822aeaf8
	if (ctx.cr6.eq) goto loc_822AEAF8;
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r3,820(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 820);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822aeaf8
	if (ctx.cr6.eq) goto loc_822AEAF8;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x822ba5b8
	ctx.lr = 0x822AEAEC;
	sub_822BA5B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x822aeb48
	if (!ctx.cr6.eq) goto loc_822AEB48;
loc_822AEAF8:
	// clrlwi. r11,r22,24
	ctx.r11.u64 = r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822aeb14
	if (ctx.cr0.eq) goto loc_822AEB14;
	// cntlzw r11,r27
	ctx.r11.u64 = r27.u32 == 0 ? 32 : __builtin_clz(r27.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x822b7690
	ctx.lr = 0x822AEB10;
	sub_822B7690(ctx, base);
	// b 0x822aeb1c
	goto loc_822AEB1C;
loc_822AEB14:
	// add r11,r30,r28
	ctx.r11.u64 = r30.u64 + r28.u64;
	// lbz r3,193(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 193);
loc_822AEB1C:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822aeb48
	if (ctx.cr0.eq) goto loc_822AEB48;
	// lwz r11,160(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 160);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822aeb3c
	if (ctx.cr6.eq) goto loc_822AEB3C;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_822AEB3C:
	// bl 0x822ad9c0
	ctx.lr = 0x822AEB40;
	sub_822AD9C0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,465(r23)
	REX_STORE_U8(r23.u32 + 465, ctx.r11.u8);
loc_822AEB48:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(r29.u32, r26.u32, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x822aeab0
	if (!ctx.cr6.eq) goto loc_822AEAB0;
loc_822AEB60:
	// lbz r3,465(r23)
	ctx.r3.u64 = REX_LOAD_U8(r23.u32 + 465);
loc_822AEB64:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_822B8930) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r9,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r9,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
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
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stb r10,72(r3)
	REX_STORE_U8(ctx.r3.u32 + 72, ctx.r10.u8);
	// stb r11,73(r3)
	REX_STORE_U8(ctx.r3.u32 + 73, ctx.r11.u8);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r9,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B9778) {
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
	// stfs f1,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822c5ac0
	ctx.lr = 0x822B979C;
	sub_822C5AC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822b97b0
	if (!ctx.cr0.eq) goto loc_822B97B0;
	// lbz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 72);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822b9818
	if (ctx.cr0.eq) goto loc_822B9818;
loc_822B97B0:
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lhz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 80);
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r11,376
	ctx.r7.s64 = ctx.r11.s64 + 376;
	// rotlwi r9,r11,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,31492(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 31492);
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// srd r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r11.u8 & 0x7F));
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stfsx f0,r7,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// lfs f0,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6020(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 6020, temp.u32);
	// lfs f0,44(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6024(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 6024, temp.u32);
	// lfs f0,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6028(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 6028, temp.u32);
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// stb r6,72(r31)
	REX_STORE_U8(r31.u32 + 72, ctx.r6.u8);
loc_822B9818:
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

DEFINE_REX_FUNC(sub_822BC270) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r9,3
	ctx.r9.s64 = 3;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// lfs f13,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f10,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r7,8
	ctx.r11.s64 = ctx.r7.s64 + 8;
	// lfs f12,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f11,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f7,f11,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f6,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	ctx.f6.f64 = double(temp.f32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f10,12(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
loc_822BC2C0:
	// lfs f12,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f12,f8
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// lfs f11,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// fmadds f0,f11,f9,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f9.f64, ctx.f0.f64)));
	// fmadds f0,f10,f7,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f7.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822bc2ec
	if (!ctx.cr6.gt) goto loc_822BC2EC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_822BC2EC:
	// fneg f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822bc2fc
	if (!ctx.cr6.lt) goto loc_822BC2FC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_822BC2FC:
	// fmuls f13,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f11,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f5,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f10,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f13,f12,f5
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// bdnz 0x822bc2c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822BC2C0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2E80) {
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
	// bl 0x822d4e64
	ctx.lr = 0x822C2E88;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// lwz r10,72(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 72);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// add r20,r11,r4
	r20.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r11,64(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 64);
	// rlwinm. r9,r11,0,21,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r27,r20,r10
	r27.u64 = r20.u64 + ctx.r10.u64;
	// beq 0x822c31cc
	if (ctx.cr0.eq) goto loc_822C31CC;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x822b8668
	ctx.lr = 0x822C2EC0;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c3054
	if (ctx.cr0.eq) goto loc_822C3054;
	// lwz r10,64(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 64);
	// li r28,1
	r28.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822C2ED4:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// slw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// and. r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822c2ef4
	if (!ctx.cr0.eq) goto loc_822C2EF4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// blt cr6,0x822c2ed4
	if (ctx.cr6.lt) goto loc_822C2ED4;
	// b 0x822c2ef8
	goto loc_822C2EF8;
loc_822C2EF4:
	// addi r28,r11,2
	r28.s64 = ctx.r11.s64 + 2;
loc_822C2EF8:
	// lwz r11,68(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 68);
	// li r29,0
	r29.s64 = 0;
	// mullw. r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c3514
	if (ctx.cr0.eq) goto loc_822C3514;
	// li r21,2
	r21.s64 = 2;
	// li r22,4
	r22.s64 = 4;
loc_822C2F10:
	// lwz r11,64(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 64);
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822c2f40
	if (ctx.cr0.eq) goto loc_822C2F40;
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r31,r21
	r31.u64 = r21.u64;
loc_822C2F24:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c9148
	ctx.lr = 0x822C2F2C;
	sub_822C9148(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// bne 0x822c2f24
	if (!ctx.cr0.eq) goto loc_822C2F24;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// b 0x822c2fc0
	goto loc_822C2FC0;
loc_822C2F40:
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822c2f6c
	if (ctx.cr0.eq) goto loc_822C2F6C;
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r31,r22
	r31.u64 = r22.u64;
loc_822C2F50:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c9148
	ctx.lr = 0x822C2F58;
	sub_822C9148(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// bne 0x822c2f50
	if (!ctx.cr0.eq) goto loc_822C2F50;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// b 0x822c2fc0
	goto loc_822C2FC0;
loc_822C2F6C:
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822c2f98
	if (ctx.cr0.eq) goto loc_822C2F98;
	// mr r30,r27
	r30.u64 = r27.u64;
	// li r31,6
	r31.s64 = 6;
loc_822C2F7C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c9148
	ctx.lr = 0x822C2F84;
	sub_822C9148(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// bne 0x822c2f7c
	if (!ctx.cr0.eq) goto loc_822C2F7C;
	// addi r27,r27,12
	r27.s64 = r27.s64 + 12;
	// b 0x822c2fc0
	goto loc_822C2FC0;
loc_822C2F98:
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c2fc0
	if (ctx.cr0.eq) goto loc_822C2FC0;
	// mr r30,r27
	r30.u64 = r27.u64;
	// li r31,8
	r31.s64 = 8;
loc_822C2FA8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c9148
	ctx.lr = 0x822C2FB0;
	sub_822C9148(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// bne 0x822c2fa8
	if (!ctx.cr0.eq) goto loc_822C2FA8;
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
loc_822C2FC0:
	// lwz r11,64(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 64);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822c2fd0
	if (ctx.cr0.eq) goto loc_822C2FD0;
	// addi r27,r27,2
	r27.s64 = r27.s64 + 2;
loc_822C2FD0:
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c2fe4
	if (ctx.cr0.eq) goto loc_822C2FE4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822c9148
	ctx.lr = 0x822C2FE0;
	sub_822C9148(ctx, base);
	// addi r27,r27,2
	r27.s64 = r27.s64 + 2;
loc_822C2FE4:
	// lwz r11,64(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 64);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c3010
	if (ctx.cr0.eq) goto loc_822C3010;
	// mr r30,r27
	r30.u64 = r27.u64;
	// li r31,3
	r31.s64 = 3;
loc_822C2FF8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c9148
	ctx.lr = 0x822C3000;
	sub_822C9148(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// bne 0x822c2ff8
	if (!ctx.cr0.eq) goto loc_822C2FF8;
	// addi r27,r27,6
	r27.s64 = r27.s64 + 6;
loc_822C3010:
	// lwz r11,64(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 64);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c303c
	if (ctx.cr0.eq) goto loc_822C303C;
	// mr r30,r27
	r30.u64 = r27.u64;
	// li r31,3
	r31.s64 = 3;
loc_822C3024:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c9148
	ctx.lr = 0x822C302C;
	sub_822C9148(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// bne 0x822c3024
	if (!ctx.cr0.eq) goto loc_822C3024;
	// addi r27,r27,6
	r27.s64 = r27.s64 + 6;
loc_822C303C:
	// lwz r11,68(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 68);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822c2f10
	if (ctx.cr6.lt) goto loc_822C2F10;
	// b 0x822c3514
	goto loc_822C3514;
loc_822C3054:
	// lwz r11,68(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 68);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822c3514
	if (!ctx.cr6.gt) goto loc_822C3514;
	// li r21,2
	r21.s64 = 2;
	// li r22,4
	r22.s64 = 4;
loc_822C306C:
	// lwz r11,64(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 64);
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822c309c
	if (ctx.cr0.eq) goto loc_822C309C;
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r31,r21
	r31.u64 = r21.u64;
loc_822C3080:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c9148
	ctx.lr = 0x822C3088;
	sub_822C9148(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// bne 0x822c3080
	if (!ctx.cr0.eq) goto loc_822C3080;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// b 0x822c311c
	goto loc_822C311C;
loc_822C309C:
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822c30c8
	if (ctx.cr0.eq) goto loc_822C30C8;
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r31,r22
	r31.u64 = r22.u64;
loc_822C30AC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c9148
	ctx.lr = 0x822C30B4;
	sub_822C9148(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// bne 0x822c30ac
	if (!ctx.cr0.eq) goto loc_822C30AC;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// b 0x822c311c
	goto loc_822C311C;
loc_822C30C8:
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822c30f4
	if (ctx.cr0.eq) goto loc_822C30F4;
	// mr r30,r27
	r30.u64 = r27.u64;
	// li r31,6
	r31.s64 = 6;
loc_822C30D8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c9148
	ctx.lr = 0x822C30E0;
	sub_822C9148(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// bne 0x822c30d8
	if (!ctx.cr0.eq) goto loc_822C30D8;
	// addi r27,r27,12
	r27.s64 = r27.s64 + 12;
	// b 0x822c311c
	goto loc_822C311C;
loc_822C30F4:
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c311c
	if (ctx.cr0.eq) goto loc_822C311C;
	// mr r30,r27
	r30.u64 = r27.u64;
	// li r31,8
	r31.s64 = 8;
loc_822C3104:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c9148
	ctx.lr = 0x822C310C;
	sub_822C9148(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// bne 0x822c3104
	if (!ctx.cr0.eq) goto loc_822C3104;
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
loc_822C311C:
	// lwz r11,64(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 64);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c3148
	if (ctx.cr0.eq) goto loc_822C3148;
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r31,r21
	r31.u64 = r21.u64;
loc_822C3130:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c9148
	ctx.lr = 0x822C3138;
	sub_822C9148(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// bne 0x822c3130
	if (!ctx.cr0.eq) goto loc_822C3130;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
loc_822C3148:
	// lwz r11,64(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 64);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c3160
	if (ctx.cr0.eq) goto loc_822C3160;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C315C;
	sub_822C9160(ctx, base);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
loc_822C3160:
	// lwz r11,64(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 64);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c318c
	if (ctx.cr0.eq) goto loc_822C318C;
	// mr r30,r27
	r30.u64 = r27.u64;
	// li r31,3
	r31.s64 = 3;
loc_822C3174:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c9148
	ctx.lr = 0x822C317C;
	sub_822C9148(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// bne 0x822c3174
	if (!ctx.cr0.eq) goto loc_822C3174;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
loc_822C318C:
	// lwz r11,64(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 64);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c31b8
	if (ctx.cr0.eq) goto loc_822C31B8;
	// mr r30,r27
	r30.u64 = r27.u64;
	// li r31,3
	r31.s64 = 3;
loc_822C31A0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C31A8;
	sub_822C9160(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x822c31a0
	if (!ctx.cr0.eq) goto loc_822C31A0;
	// addi r27,r27,12
	r27.s64 = r27.s64 + 12;
loc_822C31B8:
	// lwz r11,68(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 68);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822c306c
	if (ctx.cr6.lt) goto loc_822C306C;
	// b 0x822c3514
	goto loc_822C3514;
loc_822C31CC:
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c332c
	if (ctx.cr0.eq) goto loc_822C332C;
	// lwz r11,68(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 68);
	// li r23,0
	r23.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822c3514
	if (!ctx.cr6.gt) goto loc_822C3514;
	// li r25,0
	r25.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// li r21,2
	r21.s64 = 2;
	// li r22,4
	r22.s64 = 4;
loc_822C31F8:
	// lwz r10,64(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 64);
	// lwz r11,72(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 72);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r31,r20,r11
	r31.u64 = r20.u64 + ctx.r11.u64;
	// beq 0x822c3228
	if (ctx.cr0.eq) goto loc_822C3228;
	// add r3,r24,r31
	ctx.r3.u64 = r24.u64 + r31.u64;
	// bl 0x822c91b8
	ctx.lr = 0x822C3214;
	sub_822C91B8(ctx, base);
	// lwz r11,68(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 68);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
loc_822C3228:
	// lwz r11,64(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 64);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c3264
	if (ctx.cr0.eq) goto loc_822C3264;
	// add r29,r25,r31
	r29.u64 = r25.u64 + r31.u64;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_822C323C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c9148
	ctx.lr = 0x822C3244;
	sub_822C9148(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// bne 0x822c323c
	if (!ctx.cr0.eq) goto loc_822C323C;
	// lwz r11,68(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 68);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
loc_822C3264:
	// li r28,0
	r28.s64 = 0;
loc_822C3268:
	// lwz r11,64(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 64);
	// slw r10,r22,r28
	ctx.r10.u64 = r28.u8 & 0x20 ? 0 : (r22.u32 << (r28.u8 & 0x3F));
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c32bc
	if (ctx.cr0.eq) goto loc_822C32BC;
	// add r29,r27,r31
	r29.u64 = r27.u64 + r31.u64;
	// mr r30,r21
	r30.u64 = r21.u64;
loc_822C3280:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c9148
	ctx.lr = 0x822C3288;
	sub_822C9148(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// bne 0x822c3280
	if (!ctx.cr0.eq) goto loc_822C3280;
	// lwz r11,68(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 68);
	// addi r9,r28,1
	ctx.r9.s64 = r28.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// add r31,r10,r31
	r31.u64 = ctx.r10.u64 + r31.u64;
	// blt cr6,0x822c3268
	if (ctx.cr6.lt) goto loc_822C3268;
loc_822C32BC:
	// lwz r11,64(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 64);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c32e4
	if (ctx.cr0.eq) goto loc_822C32E4;
	// add r3,r27,r31
	ctx.r3.u64 = r27.u64 + r31.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C32D0;
	sub_822C9160(ctx, base);
	// lwz r11,68(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 68);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
loc_822C32E4:
	// lwz r11,64(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 64);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c330c
	if (ctx.cr0.eq) goto loc_822C330C;
	// add r30,r25,r31
	r30.u64 = r25.u64 + r31.u64;
	// mr r31,r22
	r31.u64 = r22.u64;
loc_822C32F8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c9148
	ctx.lr = 0x822C3300;
	sub_822C9148(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// bne 0x822c32f8
	if (!ctx.cr0.eq) goto loc_822C32F8;
loc_822C330C:
	// lwz r11,68(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 68);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r24,r24,12
	r24.s64 = r24.s64 + 12;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// addi r25,r25,8
	r25.s64 = r25.s64 + 8;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822c31f8
	if (ctx.cr6.lt) goto loc_822C31F8;
	// b 0x822c3514
	goto loc_822C3514;
loc_822C332C:
	// li r31,7
	r31.s64 = 7;
	// li r21,2
	r21.s64 = 2;
	// li r22,4
	r22.s64 = 4;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r23,1
	r23.s64 = 1;
	// stw r21,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r21.u32);
	// li r6,9
	ctx.r6.s64 = 9;
	// stw r31,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// stw r31,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// stw r31,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// stw r23,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r23.u32);
	// stw r21,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r21.u32);
	// stb r22,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r22.u8);
	// stb r22,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r22.u8);
	// stb r21,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r21.u8);
	// stb r21,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, r21.u8);
	// stb r21,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, r21.u8);
	// stb r21,85(r1)
	REX_STORE_U8(ctx.r1.u32 + 85, r21.u8);
	// stb r22,86(r1)
	REX_STORE_U8(ctx.r1.u32 + 86, r22.u8);
	// stb r22,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, r22.u8);
	// stb r22,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, r22.u8);
	// stb r22,89(r1)
	REX_STORE_U8(ctx.r1.u32 + 89, r22.u8);
	// bl 0x822b8668
	ctx.lr = 0x822C33A0;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c33bc
	if (ctx.cr0.eq) goto loc_822C33BC;
	// addi r4,r26,272
	ctx.r4.s64 = r26.s64 + 272;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,40
	ctx.r5.s64 = 40;
	// bl 0x822d4fa0
	ctx.lr = 0x822C33B8;
	sub_822D4FA0(ctx, base);
	// b 0x822c33e4
	goto loc_822C33E4;
loc_822C33BC:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x822b8668
	ctx.lr = 0x822C33D0;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c33e4
	if (!ctx.cr0.eq) goto loc_822C33E4;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// stw r31,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r31.u32);
loc_822C33E4:
	// lwz r11,68(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 68);
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822c3514
	if (!ctx.cr6.gt) goto loc_822C3514;
loc_822C33F4:
	// li r28,0
	r28.s64 = 0;
	// addi r25,r1,96
	r25.s64 = ctx.r1.s64 + 96;
loc_822C33FC:
	// lwz r11,64(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 64);
	// slw r10,r23,r28
	ctx.r10.u64 = r28.u8 & 0x20 ? 0 : (r23.u32 << (r28.u8 & 0x3F));
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c34f4
	if (ctx.cr0.eq) goto loc_822C34F4;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x822c34f4
	if (ctx.cr6.gt) goto loc_822C34F4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822c3440
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822C3440;
	// bdzf 4*cr6+eq,0x822c344c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822C344C;
	// bdzf 4*cr6+eq,0x822c344c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822C344C;
	// bdzf 4*cr6+eq,0x822c3484
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822C3484;
	// bdzf 4*cr6+eq,0x822c3484
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822C3484;
	// bdzf 4*cr6+eq,0x822c344c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822C344C;
	// bdzf 4*cr6+eq,0x822c3484
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822C3484;
	// bne cr6,0x822c34bc
	if (!ctx.cr6.eq) goto loc_822C34BC;
loc_822C3440:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lbzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r28.u32);
	// b 0x822c34f0
	goto loc_822C34F0;
loc_822C344C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r30,0
	r30.s64 = 0;
	// lbzx r31,r11,r28
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + r28.u32);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x822c347c
	if (ctx.cr0.eq) goto loc_822C347C;
	// mr r29,r27
	r29.u64 = r27.u64;
loc_822C3464:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c9148
	ctx.lr = 0x822C346C;
	sub_822C9148(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// blt cr6,0x822c3464
	if (ctx.cr6.lt) goto loc_822C3464;
loc_822C347C:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x822c34f0
	goto loc_822C34F0;
loc_822C3484:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r30,0
	r30.s64 = 0;
	// lbzx r31,r11,r28
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + r28.u32);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x822c34b4
	if (ctx.cr0.eq) goto loc_822C34B4;
	// mr r29,r27
	r29.u64 = r27.u64;
loc_822C349C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C34A4;
	sub_822C9160(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// blt cr6,0x822c349c
	if (ctx.cr6.lt) goto loc_822C349C;
loc_822C34B4:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x822c34f0
	goto loc_822C34F0;
loc_822C34BC:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r30,0
	r30.s64 = 0;
	// lbzx r31,r11,r28
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + r28.u32);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x822c34ec
	if (ctx.cr0.eq) goto loc_822C34EC;
	// mr r29,r27
	r29.u64 = r27.u64;
loc_822C34D4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c9170
	ctx.lr = 0x822C34DC;
	sub_822C9170(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// blt cr6,0x822c34d4
	if (ctx.cr6.lt) goto loc_822C34D4;
loc_822C34EC:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
loc_822C34F0:
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
loc_822C34F4:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmplwi cr6,r28,10
	ctx.cr6.compare<uint32_t>(r28.u32, 10, ctx.xer);
	// blt cr6,0x822c33fc
	if (ctx.cr6.lt) goto loc_822C33FC;
	// lwz r11,68(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 68);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822c33f4
	if (ctx.cr6.lt) goto loc_822C33F4;
loc_822C3514:
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x822b8668
	ctx.lr = 0x822C3528;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c357c
	if (ctx.cr0.eq) goto loc_822C357C;
	// lwz r11,196(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 196);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822c3574
	if (!ctx.cr6.eq) goto loc_822C3574;
	// lwz r11,84(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 84);
	// li r31,0
	r31.s64 = 0;
	// lwz r10,80(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 80);
	// add r30,r11,r20
	r30.u64 = ctx.r11.u64 + r20.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x822c35b0
	if (!ctx.cr6.gt) goto loc_822C35B0;
loc_822C3554:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C355C;
	sub_822C9160(ctx, base);
	// lwz r11,80(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 80);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822c3554
	if (ctx.cr6.lt) goto loc_822C3554;
	// b 0x822c35b0
	goto loc_822C35B0;
loc_822C3574:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822c35b0
	if (!ctx.cr6.eq) goto loc_822C35B0;
loc_822C357C:
	// lwz r11,84(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 84);
	// li r31,0
	r31.s64 = 0;
	// lwz r10,80(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 80);
	// add r30,r11,r20
	r30.u64 = ctx.r11.u64 + r20.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x822c35b0
	if (!ctx.cr6.gt) goto loc_822C35B0;
loc_822C3594:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c9148
	ctx.lr = 0x822C359C;
	sub_822C9148(ctx, base);
	// lwz r11,80(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 80);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822c3594
	if (ctx.cr6.lt) goto loc_822C3594;
loc_822C35B0:
	// lwz r11,96(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 96);
	// li r30,0
	r30.s64 = 0;
	// lwz r10,92(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 92);
	// add r31,r11,r20
	r31.u64 = ctx.r11.u64 + r20.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x822c3634
	if (!ctx.cr6.gt) goto loc_822C3634;
loc_822C35C8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C35D0;
	sub_822C9160(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x822c9160
	ctx.lr = 0x822C35D8;
	sub_822C9160(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x822c9160
	ctx.lr = 0x822C35E0;
	sub_822C9160(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x822c9160
	ctx.lr = 0x822C35E8;
	sub_822C9160(ctx, base);
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x822b8668
	ctx.lr = 0x822C35FC;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c3614
	if (ctx.cr0.eq) goto loc_822C3614;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x822c9160
	ctx.lr = 0x822C360C;
	sub_822C9160(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x822c9160
	ctx.lr = 0x822C3614;
	sub_822C9160(ctx, base);
loc_822C3614:
	// lwz r11,92(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 92);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,100(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 100);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r10,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// blt cr6,0x822c35c8
	if (ctx.cr6.lt) goto loc_822C35C8;
loc_822C3634:
	// lwz r11,108(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 108);
	// li r31,0
	r31.s64 = 0;
	// lwz r10,104(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 104);
	// add r30,r11,r20
	r30.u64 = ctx.r11.u64 + r20.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x822c3668
	if (!ctx.cr6.gt) goto loc_822C3668;
loc_822C364C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C3654;
	sub_822C9160(ctx, base);
	// lwz r11,104(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 104);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822c364c
	if (ctx.cr6.lt) goto loc_822C364C;
loc_822C3668:
	// lwz r11,180(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 180);
	// li r31,0
	r31.s64 = 0;
	// lwz r10,176(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 176);
	// add r30,r11,r20
	r30.u64 = ctx.r11.u64 + r20.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x822c369c
	if (!ctx.cr6.gt) goto loc_822C369C;
loc_822C3680:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C3688;
	sub_822C9160(ctx, base);
	// lwz r11,176(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 176);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822c3680
	if (ctx.cr6.lt) goto loc_822C3680;
loc_822C369C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(__restvmx_20) {
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
	uint32_t ea{};
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx v20,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx v21,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx v22,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx v23,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx v24,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx v25,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__restvmx_90) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_822DD0F4) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822DD3E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822DD3E8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822dd478
	if (!ctx.cr6.eq) goto loc_822DD478;
	// lwz r3,0(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r3,r6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x822dd454
	if (!ctx.cr6.eq) goto loc_822DD454;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822dba28
	ctx.lr = 0x822DD420;
	sub_822DBA28(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822dd434
	if (!ctx.cr0.eq) goto loc_822DD434;
loc_822DD42C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822dd47c
	goto loc_822DD47C;
loc_822DD434:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x822d4fa0
	ctx.lr = 0x822DD450;
	sub_822D4FA0(ctx, base);
	// b 0x822dd46c
	goto loc_822DD46C;
loc_822DD454:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x822e20c8
	ctx.lr = 0x822DD460;
	sub_822E20C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822dd42c
	if (ctx.cr0.eq) goto loc_822DD42C;
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_822DD46C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_822DD478:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822DD47C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822E1B00) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822E1B08;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r30,-4096
	r30.s64 = -4096;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e1b44
	if (ctx.cr6.eq) goto loc_822E1B44;
	// divwu r11,r30,r3
	ctx.r11.u64 = uint32_t(ctx.r3.u32 ? r30.u32 / ctx.r3.u32 : 0);
	// twllei r3,0
	if (ctx.r3.s32 == 0 || ctx.r3.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x822e1b44
	if (!ctx.cr6.lt) goto loc_822E1B44;
	// bl 0x822db6c0
	ctx.lr = 0x822E1B30;
	sub_822DB6C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x822e1bbc
	goto loc_822E1BBC;
loc_822E1B44:
	// mullw. r31,r3,r4
	r31.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x822e1b50
	if (!ctx.cr0.eq) goto loc_822E1B50;
	// li r31,1
	r31.s64 = 1;
loc_822E1B50:
	// lis r29,-32162
	r29.s64 = -2107768832;
loc_822E1B54:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bgt cr6,0x822e1b78
	if (ctx.cr6.gt) goto loc_822E1B78;
	// bl 0x8220fda0
	ctx.lr = 0x822E1B64;
	sub_8220FDA0(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8220e3f8
	ctx.lr = 0x822E1B70;
	sub_8220E3F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822e1bbc
	if (!ctx.cr0.eq) goto loc_822E1BBC;
loc_822E1B78:
	// lwz r11,-30528(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -30528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e1bac
	if (ctx.cr6.eq) goto loc_822E1BAC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822dbec0
	ctx.lr = 0x822E1B8C;
	sub_822DBEC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822e1b54
	if (!ctx.cr0.eq) goto loc_822E1B54;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822e1ba4
	if (ctx.cr6.eq) goto loc_822E1BA4;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_822E1BA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822e1bbc
	goto loc_822E1BBC;
loc_822E1BAC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822e1bbc
	if (ctx.cr6.eq) goto loc_822E1BBC;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_822E1BBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822E88C0) {
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
	// bl 0x822e84f8
	ctx.lr = 0x822E88D8;
	sub_822E84F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822eece8
	ctx.lr = 0x822E88E0;
	sub_822EECE8(ctx, base);
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

DEFINE_REX_FUNC(sub_822E91D0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E96B0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E98C8) {
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
	ctx.lr = 0x822E98D0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// sth r29,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r29.u16);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822E98F4:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x822e98f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E98F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822E9914;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822e99d4
	if (ctx.cr6.lt) goto loc_822E99D4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e8d68
	ctx.lr = 0x822E9924;
	sub_822E8D68(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e8d60
	ctx.lr = 0x822E9930;
	sub_822E8D60(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824607c8
	ctx.lr = 0x822E993C;
	sub_824607C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x822e95a0
	ctx.lr = 0x822E9954;
	sub_822E95A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822e99d4
	if (ctx.cr6.lt) goto loc_822E99D4;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r30,r31,56
	r30.s64 = r31.s64 + 56;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e99d4
	if (ctx.cr6.eq) goto loc_822E99D4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,72(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822E9980;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r3,660(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 660);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r11,656(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 656);
	// lis r5,-32172
	ctx.r5.s64 = -2108424192;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r5,1876
	ctx.r8.s64 = ctx.r5.s64 + 1876;
	// lfs f1,1992(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// subfic r7,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r7.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// subfe r7,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// and r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 & ctx.r6.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// ori r6,r7,2
	ctx.r6.u64 = ctx.r7.u64 | 2;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,32(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x822E99D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822E99D4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822ED200) {
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
	// bl 0x822f6008
	ctx.lr = 0x822ED218;
	sub_822F6008(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,-27752
	ctx.r10.s64 = ctx.r11.s64 + -27752;
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

DEFINE_REX_FUNC(sub_822ED768) {
	REX_FUNC_PROLOGUE();
	// lwz r3,52(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822ED848) {
	REX_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// b 0x823cd118
	sub_823CD118(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822EDD40) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822EDD48;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822edd74
	if (ctx.cr6.eq) goto loc_822EDD74;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EDD70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_822EDD74:
	// lwz r3,44(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 44);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822eddb4
	if (ctx.cr6.eq) goto loc_822EDDB4;
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 120);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822eddb4
	if (!ctx.cr6.eq) goto loc_822EDDB4;
	// bl 0x82208848
	ctx.lr = 0x822EDD94;
	sub_82208848(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822eddb4
	if (!ctx.cr6.lt) goto loc_822EDDB4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EDDB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_822EDDB4:
	// lwz r31,132(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 132);
	// addi r29,r30,132
	r29.s64 = r30.s64 + 132;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822eddfc
	if (ctx.cr6.eq) goto loc_822EDDFC;
loc_822EDDC4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EDDDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822EDDF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x822eddc4
	if (!ctx.cr6.eq) goto loc_822EDDC4;
loc_822EDDFC:
	// lwz r3,124(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ede14
	if (ctx.cr6.eq) goto loc_822EDE14;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// bl 0x823cd250
	ctx.lr = 0x822EDE14;
	sub_823CD250(ctx, base);
loc_822EDE14:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EDE28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822F4308) {
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
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x822F432C;
	sub_822D5870(ctx, base);
	// addi r3,r31,284
	ctx.r3.s64 = r31.s64 + 284;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x822F433C;
	sub_822D5870(ctx, base);
	// addi r3,r31,364
	ctx.r3.s64 = r31.s64 + 364;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x822F434C;
	sub_822D5870(ctx, base);
	// addi r3,r31,204
	ctx.r3.s64 = r31.s64 + 204;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x822F435C;
	sub_822D5870(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,444(r31)
	REX_STORE_U32(r31.u32 + 444, ctx.r11.u32);
	// stw r11,448(r31)
	REX_STORE_U32(r31.u32 + 448, ctx.r11.u32);
	// bl 0x822fb6d0
	ctx.lr = 0x822F4370;
	sub_822FB6D0(ctx, base);
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

DEFINE_REX_FUNC(sub_822F4F40) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822F5B00) {
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
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f5b3c
	if (ctx.cr6.eq) goto loc_822F5B3C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F5B3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822F5B3C:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r3,0
	ctx.r3.s64 = 0;
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

DEFINE_REX_FUNC(sub_822F7D98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822F7DA0;
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
	ctx.lr = 0x822F7DC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,256(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r30,52(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x822f4790
	ctx.lr = 0x822F7DD8;
	sub_822F4790(ctx, base);
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
	ctx.lr = 0x822F7DF0;
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
	ctx.lr = 0x822F7E04;
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
	ctx.lr = 0x822F7E20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f7e44
	if (ctx.cr6.eq) goto loc_822F7E44;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F7E40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
loc_822F7E44:
	// addi r11,r31,244
	ctx.r11.s64 = r31.s64 + 244;
loc_822F7E48:
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
	// bne 0x822f7e48
	if (!ctx.cr0.eq) goto loc_822F7E48;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r11.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// blt cr6,0x822f7e7c
	if (ctx.cr6.lt) goto loc_822F7E7C;
	// stw r28,256(r31)
	REX_STORE_U32(r31.u32 + 256, r28.u32);
loc_822F7E7C:
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
	ctx.lr = 0x822F7E94;
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
	ctx.lr = 0x822F7EA8;
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
	ctx.lr = 0x822F7EBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822FF770) {
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
	// beq cr6,0x822ff7ac
	if (ctx.cr6.eq) goto loc_822FF7AC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8229a710
	ctx.lr = 0x822FF79C;
	sub_8229A710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ff578
	ctx.lr = 0x822FF7A4;
	sub_822FF578(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823143d0
	ctx.lr = 0x822FF7AC;
	sub_823143D0(ctx, base);
loc_822FF7AC:
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

DEFINE_REX_FUNC(sub_82300D78) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,316(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82300d9c
	if (ctx.cr6.eq) goto loc_82300D9C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82300d9c
	if (!ctx.cr6.gt) goto loc_82300D9C;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// blr 
	return;
loc_82300D9C:
	// lwz r10,324(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 324);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r10,332(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// lwz r9,340(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// mullw r8,r10,r3
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// lwz r7,328(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 328);
	// subf r6,r9,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r9.u64;
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r11,r6,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// divw r10,r6,r7
	ctx.r10.u64 = uint32_t((ctx.r7.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r6.s32 / ctx.r7.s32 : 0);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// andc r4,r7,r5
	ctx.r4.u64 = ctx.r7.u64 & ~ctx.r5.u64;
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82303EC0) {
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
	// bl 0x822d4e74
	ctx.lr = 0x82303EC8;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x822d4f28
	ctx.lr = 0x82303ED0;
	// stwu r1,-976(r1)
	ea = -976 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lfs f0,30140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 30140);
	ctx.f0.f64 = double(temp.f32);
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f13,16788(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16788);
	ctx.f13.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f31,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfs f12,29440(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 29440);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f11,-23944(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -23944);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-24428(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -24428);
	ctx.f10.f64 = double(temp.f32);
	// li r23,0
	r23.s64 = 0;
	// lfs f9,29356(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 29356);
	ctx.f9.f64 = double(temp.f32);
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(r26.s32, 1, ctx.xer);
	// lfs f8,27892(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 27892);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,16184(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16184);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-18468(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -18468);
	ctx.f6.f64 = double(temp.f32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f9,124(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f8,128(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f7,132(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f6,136(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// blt cr6,0x82303f78
	if (ctx.cr6.lt) goto loc_82303F78;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// bge cr6,0x82303f90
	if (!ctx.cr6.lt) goto loc_82303F90;
loc_82303F78:
	// lis r23,-32764
	r23.s64 = -2147221504;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x822d4f74
	ctx.lr = 0x82303F8C;
	// b 0x822d4ec4
	return;
loc_82303F90:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x82304014
	if (!ctx.cr6.gt) goto loc_82304014;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_82303FA0:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(r26.s32, 4, ctx.xer);
	// blt cr6,0x82303fe4
	if (ctx.cr6.lt) goto loc_82303FE4;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r6,r26,-3
	ctx.r6.s64 = r26.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82303FB8:
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stfsx f31,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// stfs f31,4(r7)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f31,-4(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + -4, temp.u32);
	// stfsx f31,r10,r8
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// blt cr6,0x82303fb8
	if (ctx.cr6.lt) goto loc_82303FB8;
loc_82303FE4:
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r26.s32, ctx.xer);
	// bge cr6,0x82304008
	if (!ctx.cr6.lt) goto loc_82304008;
	// subf r8,r9,r26
	ctx.r8.u64 = r26.u64 - ctx.r9.u64;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82303FFC:
	// stfsx f31,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82303ffc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82303FFC;
loc_82304008:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x82303fa0
	if (!ctx.cr0.eq) goto loc_82303FA0;
loc_82304014:
	// cmpwi cr6,r26,5
	ctx.cr6.compare<int32_t>(r26.s32, 5, ctx.xer);
	// bne cr6,0x82304034
	if (!ctx.cr6.eq) goto loc_82304034;
	// cmpwi cr6,r25,5
	ctx.cr6.compare<int32_t>(r25.s32, 5, ctx.xer);
	// bne cr6,0x82304034
	if (!ctx.cr6.eq) goto loc_82304034;
	// cmplwi cr6,r31,1543
	ctx.cr6.compare<uint32_t>(r31.u32, 1543, ctx.xer);
	// bne cr6,0x823042a4
	if (!ctx.cr6.eq) goto loc_823042A4;
	// cmplwi cr6,r30,55
	ctx.cr6.compare<uint32_t>(r30.u32, 55, ctx.xer);
	// beq cr6,0x823042b4
	if (ctx.cr6.eq) goto loc_823042B4;
loc_82304034:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,26664(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 26664);
	// bl 0x822d47d0
	ctx.lr = 0x82304040;
	sub_822D47D0(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// lfs f0,16228(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16228);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f26,f13,f0
	f26.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// ble cr6,0x823040c4
	if (!ctx.cr6.gt) goto loc_823040C4;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82304068:
	// addi r7,r1,576
	ctx.r7.s64 = ctx.r1.s64 + 576;
	// and r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 & r31.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stwx r9,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u32);
	// bne cr6,0x82304098
	if (!ctx.cr6.eq) goto loc_82304098;
loc_8230407C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bgt cr6,0x82304468
	if (ctx.cr6.gt) goto loc_82304468;
	// and r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 & r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8230407c
	if (ctx.cr6.eq) goto loc_8230407C;
loc_82304098:
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,704
	ctx.r5.s64 = ctx.r1.s64 + 704;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsx f0,r7,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r26.s32, ctx.xer);
	// stfsx f0,r8,r5
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r5.u32, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// blt cr6,0x82304068
	if (ctx.cr6.lt) goto loc_82304068;
loc_823040C4:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82303d60
	ctx.lr = 0x823040D4;
	sub_82303D60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x82304148
	if (!ctx.cr6.gt) goto loc_82304148;
	// li r8,0
	ctx.r8.s64 = 0;
loc_823040EC:
	// addi r7,r1,448
	ctx.r7.s64 = ctx.r1.s64 + 448;
	// and r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 & r30.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stwx r9,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u32);
	// bne cr6,0x8230411c
	if (!ctx.cr6.eq) goto loc_8230411C;
loc_82304100:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bgt cr6,0x82304468
	if (ctx.cr6.gt) goto loc_82304468;
	// and r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 & r30.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82304100
	if (ctx.cr6.eq) goto loc_82304100;
loc_8230411C:
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsx f0,r7,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// cmpw cr6,r9,r25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r25.s32, ctx.xer);
	// stfsx f0,r8,r5
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r5.u32, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// blt cr6,0x823040ec
	if (ctx.cr6.lt) goto loc_823040EC;
loc_82304148:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82303d60
	ctx.lr = 0x82304158;
	sub_82303D60(ctx, base);
	// addi r27,r25,-1
	r27.s64 = r25.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(r27.s32, 4, ctx.xer);
	// blt cr6,0x823041d8
	if (ctx.cr6.lt) goto loc_823041D8;
	// addi r9,r27,-3
	ctx.r9.s64 = r27.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r1,196
	ctx.r8.s64 = ctx.r1.s64 + 196;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
loc_82304180:
	// addi r4,r1,204
	ctx.r4.s64 = ctx.r1.s64 + 204;
	// lfsx f0,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfsx f13,r11,r5
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r31,r1,324
	r31.s64 = ctx.r1.s64 + 324;
	// lfsx f12,r11,r7
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r1,328
	r30.s64 = ctx.r1.s64 + 328;
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// addi r29,r1,332
	r29.s64 = ctx.r1.s64 + 332;
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfsx f9,r11,r4
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfsx f8,r11,r3
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fsubs f6,f8,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// stfsx f11,r11,r6
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// stfsx f10,r11,r31
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + r31.u32, temp.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stfsx f7,r11,r30
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + r30.u32, temp.u32);
	// stfsx f6,r11,r29
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + r29.u32, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x82304180
	if (ctx.cr6.lt) goto loc_82304180;
loc_823041D8:
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r27.s32, ctx.xer);
	// bge cr6,0x82304210
	if (!ctx.cr6.lt) goto loc_82304210;
	// subf r9,r10,r27
	ctx.r9.u64 = r27.u64 - ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823041EC:
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addi r9,r1,320
	ctx.r9.s64 = ctx.r1.s64 + 320;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfsx f12,r11,r9
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823041ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823041EC;
loc_82304210:
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f25,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 192);
	f25.f64 = double(temp.f32);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addi r9,r1,320
	ctx.r9.s64 = ctx.r1.s64 + 320;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f0,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// fsubs f13,f25,f0
	ctx.f13.f64 = double(float(f25.f64 - ctx.f0.f64));
	// lfs f27,15628(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15628);
	f27.f64 = double(temp.f32);
	// lfs f28,2000(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2000);
	f28.f64 = double(temp.f32);
	// lfs f24,1992(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 1992);
	f24.f64 = double(temp.f32);
	// fadds f12,f13,f27
	ctx.f12.f64 = double(float(ctx.f13.f64 + f27.f64));
	// stfs f12,-4(r7)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + -4, temp.u32);
	// ble cr6,0x823043d4
	if (!ctx.cr6.gt) goto loc_823043D4;
	// li r29,0
	r29.s64 = 0;
	// mr r28,r26
	r28.u64 = r26.u64;
	// addi r11,r1,704
	ctx.r11.s64 = ctx.r1.s64 + 704;
loc_82304264:
	// lfsx f0,r29,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, f25.f64);
	// ble cr6,0x82304298
	if (!ctx.cr6.gt) goto loc_82304298;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
loc_82304278:
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r25.s32, ctx.xer);
	// bge cr6,0x82304290
	if (!ctx.cr6.lt) goto loc_82304290;
	// lfsu f13,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82304278
	if (ctx.cr6.gt) goto loc_82304278;
loc_82304290:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823042f8
	if (!ctx.cr6.eq) goto loc_823042F8;
loc_82304298:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// li r31,0
	r31.s64 = 0;
	// b 0x82304314
	goto loc_82304314;
loc_823042A4:
	// cmplwi cr6,r31,55
	ctx.cr6.compare<uint32_t>(r31.u32, 55, ctx.xer);
	// bne cr6,0x82304034
	if (!ctx.cr6.eq) goto loc_82304034;
	// cmplwi cr6,r30,1543
	ctx.cr6.compare<uint32_t>(r30.u32, 1543, ctx.xer);
	// bne cr6,0x82304034
	if (!ctx.cr6.eq) goto loc_82304034;
loc_823042B4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r9,4(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,8(r24)
	ctx.r8.u64 = REX_LOAD_U32(r24.u32 + 8);
	// lwz r7,12(r24)
	ctx.r7.u64 = REX_LOAD_U32(r24.u32 + 12);
	// lwz r6,16(r24)
	ctx.r6.u64 = REX_LOAD_U32(r24.u32 + 16);
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stfs f0,12(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// stfs f0,16(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x822d4f74
	ctx.lr = 0x823042F4;
	// b 0x822d4ec4
	return;
loc_823042F8:
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r27.s32, ctx.xer);
	// ble cr6,0x8230430c
	if (!ctx.cr6.gt) goto loc_8230430C;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// li r31,0
	r31.s64 = 0;
	// b 0x82304314
	goto loc_82304314;
loc_8230430C:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_82304314:
	// rlwinm r30,r10,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lfsx f13,r30,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82304338
	if (!ctx.cr6.lt) goto loc_82304338;
loc_8230432C:
	// fadds f0,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f27.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x8230432c
	if (ctx.cr6.lt) goto loc_8230432C;
loc_82304338:
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// lfsx f13,r30,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f11,f12,f26
	ctx.f11.f64 = double(float(ctx.f12.f64 * f26.f64));
	// fmuls f29,f11,f28
	f29.f64 = double(float(ctx.f11.f64 * f28.f64));
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x822d4d68
	ctx.lr = 0x82304354;
	sub_822D4D68(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(f30.f64, f31.f64);
	// bge cr6,0x82304364
	if (!ctx.cr6.lt) goto loc_82304364;
	// fmr f30,f31
	f30.f64 = f31.f64;
loc_82304364:
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x822d4c88
	ctx.lr = 0x8230436C;
	sub_822D4C88(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8230437c
	if (!ctx.cr6.lt) goto loc_8230437C;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_8230437C:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// bne cr6,0x8230438c
	if (!ctx.cr6.eq) goto loc_8230438C;
	// fmr f0,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f24.f64;
	// fmr f30,f24
	f30.f64 = f24.f64;
loc_8230438C:
	// addi r11,r1,448
	ctx.r11.s64 = ctx.r1.s64 + 448;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,448
	ctx.r9.s64 = ctx.r1.s64 + 448;
	// addi r8,r1,576
	ctx.r8.s64 = ctx.r1.s64 + 576;
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// lwzx r7,r30,r11
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// addi r11,r1,704
	ctx.r11.s64 = ctx.r1.s64 + 704;
	// lwzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r29,r8
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + ctx.r8.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r5,r24
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + r24.u32);
	// lwzx r8,r3,r24
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + r24.u32);
	// stfsx f30,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// stfsx f0,r8,r10
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, temp.u32);
	// bne 0x82304264
	if (!ctx.cr0.eq) goto loc_82304264;
loc_823043D4:
	// fmr f11,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = f31.f64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x82304468
	if (!ctx.cr6.gt) goto loc_82304468;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
loc_823043E8:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f31.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(r26.s32, 2, ctx.xer);
	// fmr f12,f31
	ctx.f12.f64 = f31.f64;
	// blt cr6,0x82304430
	if (ctx.cr6.lt) goto loc_82304430;
	// lwz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// addi r7,r26,-1
	ctx.r7.s64 = r26.s64 + -1;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8230440C:
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfsx f10,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// lfs f9,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// blt cr6,0x8230440c
	if (ctx.cr6.lt) goto loc_8230440C;
loc_82304430:
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r26.s32, ctx.xer);
	// bge cr6,0x82304444
	if (!ctx.cr6.lt) goto loc_82304444;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
loc_82304444:
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x82304458
	if (!ctx.cr6.lt) goto loc_82304458;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_82304458:
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x823043e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823043E8;
	// fcmpu cr6,f11,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, f31.f64);
	// bgt cr6,0x82304484
	if (ctx.cr6.gt) goto loc_82304484;
loc_82304468:
	// lis r23,-32768
	r23.s64 = -2147483648;
	// ori r23,r23,16389
	r23.u64 = r23.u64 | 16389;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x822d4f74
	ctx.lr = 0x82304480;
	// b 0x822d4ec4
	return;
loc_82304484:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
	// lfs f12,2388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2388);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-29984(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -29984);
	ctx.f13.f64 = double(temp.f32);
loc_8230449C:
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(r26.s32, 4, ctx.xer);
	// blt cr6,0x823045a8
	if (ctx.cr6.lt) goto loc_823045A8;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// fdivs f0,f24,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f24.f64 / ctx.f11.f64));
	// addi r4,r26,-3
	ctx.r4.s64 = r26.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823044B8:
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfsx f10,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// lfs f7,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r5,r7,-4
	ctx.r5.s64 = ctx.r7.s64 + -4;
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfsx f8,r10,r9
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f5,-4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f3,f0,f5
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fmadds f2,f9,f13,f28
	ctx.f2.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, f28.f64)));
	// fmadds f10,f4,f13,f28
	ctx.f10.f64 = double(float(std::fma(ctx.f4.f64, ctx.f13.f64, f28.f64)));
	// fmadds f1,f6,f13,f28
	ctx.f1.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, f28.f64)));
	// fmadds f9,f3,f13,f28
	ctx.f9.f64 = double(float(std::fma(ctx.f3.f64, ctx.f13.f64, f28.f64)));
	// fctiwz f8,f2
	ctx.f8.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f8.u64);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// extsw r5,r5
	ctx.r5.s64 = ctx.r5.s32;
	// fctiwz f7,f10
	ctx.f7.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f7.u64);
	// lwz r30,92(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f6,f9
	ctx.f6.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f5,f1
	ctx.f5.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// std r5,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// stfd f5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r5,r5
	ctx.r5.s64 = ctx.r5.s32;
	// std r5,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// extsw r5,r30
	ctx.r5.s64 = r30.s32;
	// lfd f3,176(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// extsw r29,r29
	r29.s64 = r29.s32;
	// std r5,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// lfd f1,152(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// lfd f4,160(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// std r29,168(r1)
	REX_STORE_U64(ctx.r1.u32 + 168, r29.u64);
	// lfd f2,168(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f10,f4
	ctx.f10.f64 = double(ctx.f4.s64);
	// fcfid f8,f2
	ctx.f8.f64 = double(ctx.f2.s64);
	// fcfid f9,f3
	ctx.f9.f64 = double(ctx.f3.s64);
	// fcfid f7,f1
	ctx.f7.f64 = double(ctx.f1.s64);
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// fmuls f2,f6,f12
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// stfsx f2,r11,r10
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// fmuls f10,f4,f12
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// stfs f10,-4(r7)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r7.u32 + -4, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// fmuls f1,f5,f12
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// stfsx f1,r10,r9
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// fmuls f9,f3,f12
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// stfs f9,4(r8)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// blt cr6,0x823044b8
	if (ctx.cr6.lt) goto loc_823044B8;
loc_823045A8:
	// cmpw cr6,r6,r26
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r26.s32, ctx.xer);
	// bge cr6,0x82304600
	if (!ctx.cr6.lt) goto loc_82304600;
	// subf r9,r6,r26
	ctx.r9.u64 = r26.u64 - ctx.r6.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// fdivs f0,f24,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f24.f64 / ctx.f11.f64));
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823045C4:
	// lfsx f10,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmadds f8,f9,f13,f28
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, f28.f64)));
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lfd f6,144(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f12
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// stfsx f3,r10,r11
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823045c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823045C4;
loc_82304600:
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bne 0x8230449c
	if (!ctx.cr0.eq) goto loc_8230449C;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x822d4f74
	ctx.lr = 0x8230461C;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_82329158) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lhz r10,114(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 114);
	// lwz r11,424(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 424);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lwz r6,52(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 52);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r7,-2(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x823291e4
	if (!ctx.cr6.gt) goto loc_823291E4;
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhz r7,118(r4)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + 118);
	// divw r8,r11,r10
	ctx.r8.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// andc r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r6,-4
	ctx.r9.s64 = ctx.r6.s64 + -4;
	// subf r10,r7,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r7.u64;
loc_823291C4:
	// lwzux r8,r10,r7
	ea = ctx.r10.u32 + ctx.r7.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// lhz r8,118(r4)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + 118);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x823291c4
	if (ctx.cr6.lt) goto loc_823291C4;
	// blr 
	return;
loc_823291E4:
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lhz r9,118(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 118);
	// divw r7,r10,r11
	ctx.r7.u64 = uint32_t((ctx.r11.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r10.s32 / ctx.r11.s32 : 0);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// divw r4,r8,r7
	ctx.r4.u64 = uint32_t((ctx.r7.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r8.s32 / ctx.r7.s32 : 0);
	// andc r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r5.u64;
	// andc r10,r7,r3
	ctx.r10.u64 = ctx.r7.u64 & ~ctx.r3.u64;
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// addic. r8,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r8.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bltlr 
	if (ctx.cr0.lt) return;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r9,r8,r7
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// neg r5,r7
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
loc_82329238:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82329260
	if (!ctx.cr6.gt) goto loc_82329260;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82329248:
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r4,r6
	REX_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.r3.u32);
	// bdnz 0x82329248
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82329248;
loc_82329260:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// bge 0x82329238
	if (!ctx.cr0.lt) goto loc_82329238;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232EA90) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8232EA98;
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
	// beq cr6,0x8232eb10
	if (ctx.cr6.eq) goto loc_8232EB10;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232eb10
	if (ctx.cr6.eq) goto loc_8232EB10;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232eac8
	if (ctx.cr6.eq) goto loc_8232EAC8;
	// bl 0x824d438c
	ctx.lr = 0x8232EAC8;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_8232EAC8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r29,4(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// ble cr6,0x8232eb4c
	if (!ctx.cr6.gt) goto loc_8232EB4C;
	// subf r10,r30,r11
	ctx.r10.u64 = ctx.r11.u64 - r30.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// beq cr6,0x8232eb10
	if (ctx.cr6.eq) goto loc_8232EB10;
	// bl 0x824d437c
	ctx.lr = 0x8232EB10;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8232EB10:
	// lis r6,8192
	ctx.r6.s64 = 536870912;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82209f88
	ctx.lr = 0x8232EB28;
	sub_82209F88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x8233fdb0
	ctx.lr = 0x8232EB40;
	sub_8233FDB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
loc_8232EB4C:
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r10,r11,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// beq cr6,0x8232eb64
	if (ctx.cr6.eq) goto loc_8232EB64;
	// bl 0x824d437c
	ctx.lr = 0x8232EB64;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8232EB64:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8233fdb0
	ctx.lr = 0x8232EB78;
	sub_8233FDB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_823370E0) {
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
	// bl 0x822d4e68
	ctx.lr = 0x823370E8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,736(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 736);
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,24688(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24688);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lwz r10,20472(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20472);
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// li r21,1
	r21.s64 = 1;
	// addi r20,r11,8
	r20.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82337144
	if (!ctx.cr6.eq) goto loc_82337144;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82208828
	ctx.lr = 0x82337130;
	sub_82208828(ctx, base);
	// ld r11,20448(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 20448);
	// ld r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// stw r21,20472(r31)
	REX_STORE_U32(r31.u32 + 20472, r21.u32);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// std r9,20448(r31)
	REX_STORE_U64(r31.u32 + 20448, ctx.r9.u64);
loc_82337144:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233715c
	if (ctx.cr6.eq) goto loc_8233715C;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eb8
	return;
loc_8233715C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82337364
	if (ctx.cr6.eq) goto loc_82337364;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82337364
	if (ctx.cr6.eq) goto loc_82337364;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82337364
	if (ctx.cr6.eq) goto loc_82337364;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82337364
	if (ctx.cr6.eq) goto loc_82337364;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82337364
	if (ctx.cr6.eq) goto loc_82337364;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82337364
	if (ctx.cr6.eq) goto loc_82337364;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x82337364
	if (ctx.cr6.eq) goto loc_82337364;
	// lwz r11,22040(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22040);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823371f4
	if (!ctx.cr6.eq) goto loc_823371F4;
	// stw r29,22148(r31)
	REX_STORE_U32(r31.u32 + 22148, r29.u32);
	// lis r4,12338
	ctx.r4.s64 = 808583168;
	// stw r28,22152(r31)
	REX_STORE_U32(r31.u32 + 22152, r28.u32);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// stw r21,22144(r31)
	REX_STORE_U32(r31.u32 + 22144, r21.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r27,22156(r31)
	REX_STORE_U32(r31.u32 + 22156, r27.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r26,22160(r31)
	REX_STORE_U32(r31.u32 + 22160, r26.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r25,22164(r31)
	REX_STORE_U32(r31.u32 + 22164, r25.u32);
	// ori r4,r4,13385
	ctx.r4.u64 = ctx.r4.u64 | 13385;
	// stw r24,22168(r31)
	REX_STORE_U32(r31.u32 + 22168, r24.u32);
	// bl 0x82335f20
	ctx.lr = 0x823371DC;
	sub_82335F20(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8232e760
	ctx.lr = 0x823371E8;
	sub_8232E760(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eb8
	return;
loc_823371F4:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82331c88
	ctx.lr = 0x82337200;
	sub_82331C88(ctx, base);
	// lwz r11,22116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22116);
	// lwz r22,96(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r23,104(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(r22.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82337274
	if (!ctx.cr6.eq) goto loc_82337274;
	// lwz r10,22120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22120);
	// cmpw cr6,r23,r10
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82337274
	if (!ctx.cr6.eq) goto loc_82337274;
	// stw r29,22148(r31)
	REX_STORE_U32(r31.u32 + 22148, r29.u32);
	// lis r4,12338
	ctx.r4.s64 = 808583168;
	// stw r28,22152(r31)
	REX_STORE_U32(r31.u32 + 22152, r28.u32);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// stw r21,22144(r31)
	REX_STORE_U32(r31.u32 + 22144, r21.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r27,22156(r31)
	REX_STORE_U32(r31.u32 + 22156, r27.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r26,22160(r31)
	REX_STORE_U32(r31.u32 + 22160, r26.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r25,22164(r31)
	REX_STORE_U32(r31.u32 + 22164, r25.u32);
	// ori r4,r4,13385
	ctx.r4.u64 = ctx.r4.u64 | 13385;
	// stw r24,22168(r31)
	REX_STORE_U32(r31.u32 + 22168, r24.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82335f20
	ctx.lr = 0x8233725C;
	sub_82335F20(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8232e760
	ctx.lr = 0x82337268;
	sub_8232E760(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eb8
	return;
loc_82337274:
	// lwz r10,22124(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22124);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823372dc
	if (!ctx.cr6.eq) goto loc_823372DC;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(r22.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8233728c
	if (!ctx.cr6.gt) goto loc_8233728C;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_8233728C:
	// lwz r10,22120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22120);
	// cmpw cr6,r23,r10
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8233729c
	if (!ctx.cr6.gt) goto loc_8233729C;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_8233729C:
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r10,15387
	ctx.r5.s64 = ctx.r10.s64 + 15387;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8233feb8
	ctx.lr = 0x823372B8;
	sub_8233FEB8(ctx, base);
	// addi r9,r3,127
	ctx.r9.s64 = ctx.r3.s64 + 127;
	// stw r3,22124(r31)
	REX_STORE_U32(r31.u32 + 22124, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r8,r9,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// stw r8,22128(r31)
	REX_STORE_U32(r31.u32 + 22128, ctx.r8.u32);
	// bne cr6,0x823372dc
	if (!ctx.cr6.eq) goto loc_823372DC;
	// li r3,-9
	ctx.r3.s64 = -9;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eb8
	return;
loc_823372DC:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,22128(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 22128);
	// lis r4,12338
	ctx.r4.s64 = 808583168;
	// stw r11,22144(r31)
	REX_STORE_U32(r31.u32 + 22144, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r4,r4,13385
	ctx.r4.u64 = ctx.r4.u64 | 13385;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82335f20
	ctx.lr = 0x82337304;
	sub_82335F20(ctx, base);
	// lis r4,12338
	ctx.r4.s64 = 808583168;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r10,22128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22128);
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// lwz r9,22120(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 22120);
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r8,22116(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 22116);
	// ori r4,r4,13385
	ctx.r4.u64 = ctx.r4.u64 | 13385;
	// stw r21,22144(r31)
	REX_STORE_U32(r31.u32 + 22144, r21.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,22148(r31)
	REX_STORE_U32(r31.u32 + 22148, r29.u32);
	// stw r28,22152(r31)
	REX_STORE_U32(r31.u32 + 22152, r28.u32);
	// stw r27,22156(r31)
	REX_STORE_U32(r31.u32 + 22156, r27.u32);
	// stw r26,22160(r31)
	REX_STORE_U32(r31.u32 + 22160, r26.u32);
	// stw r25,22164(r31)
	REX_STORE_U32(r31.u32 + 22164, r25.u32);
	// stw r24,22168(r31)
	REX_STORE_U32(r31.u32 + 22168, r24.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// bl 0x82331d48
	ctx.lr = 0x8233734C;
	sub_82331D48(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8232e760
	ctx.lr = 0x82337358;
	sub_8232E760(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eb8
	return;
loc_82337364:
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_82347F10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82347F18;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3448(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3448);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,14956(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 14956);
	// lwz r29,14960(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 14960);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r6,14948(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 14948);
	// lwz r30,14952(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 14952);
	// bne cr6,0x8234808c
	if (!ctx.cr6.eq) goto loc_8234808C;
	// lwz r11,15628(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234808c
	if (!ctx.cr6.eq) goto loc_8234808C;
	// lwz r11,3752(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3752);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,3764(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 3764);
	// stw r9,3448(r3)
	REX_STORE_U32(ctx.r3.u32 + 3448, ctx.r9.u32);
	// lwz r7,616(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 616);
	// stw r7,616(r8)
	REX_STORE_U32(ctx.r8.u32 + 616, ctx.r7.u32);
	// lwz r5,3752(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 3752);
	// lwz r4,3764(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 3764);
	// lwz r3,604(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 604);
	// stw r3,604(r4)
	REX_STORE_U32(ctx.r4.u32 + 604, ctx.r3.u32);
	// lwz r11,3752(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3752);
	// lwz r9,3764(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3764);
	// lwz r8,608(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// stw r8,608(r9)
	REX_STORE_U32(ctx.r9.u32 + 608, ctx.r8.u32);
	// lwz r7,3752(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3752);
	// lwz r5,3764(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3764);
	// lwz r4,612(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 612);
	// stw r4,612(r5)
	REX_STORE_U32(ctx.r5.u32 + 612, ctx.r4.u32);
	// lwz r3,15964(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15964);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82348004
	if (ctx.cr6.eq) goto loc_82348004;
	// lwz r11,20416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82348004
	if (!ctx.cr6.eq) goto loc_82348004;
	// lwz r10,3764(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3764);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r9,592(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 592);
	// mulli r11,r9,68
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(68));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// stw r7,592(r10)
	REX_STORE_U32(ctx.r10.u32 + 592, ctx.r7.u32);
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// lwz r6,3752(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3752);
	// stw r6,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r6.u32);
	// lwz r5,14948(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 14948);
	// stw r5,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r5.u32);
	// lwz r4,14952(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 14952);
	// stw r4,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r4.u32);
	// lwz r3,14936(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 14936);
	// stw r3,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r3.u32);
	// lwz r10,14964(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 14964);
	// stw r10,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// lwz r9,14968(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 14968);
	// stw r9,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
loc_82348004:
	// lwz r11,21888(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21888);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82348058
	if (!ctx.cr6.eq) goto loc_82348058;
	// lwz r11,14836(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82348058
	if (!ctx.cr6.gt) goto loc_82348058;
	// ld r11,3632(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 3632);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// ble cr6,0x82348058
	if (!ctx.cr6.gt) goto loc_82348058;
	// lwz r11,20400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20400);
	// lwz r9,22188(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 22188);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,20404(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 20404);
	// lwz r7,22192(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 22192);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r8,22196(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 22196);
	// lwz r9,22200(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 22200);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r30,r8,r11
	r30.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r29,r9,r11
	r29.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82348058:
	// mullw r5,r10,r6
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// lwz r4,3788(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3788);
	// lwz r3,3844(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3844);
	// bl 0x822d4fa0
	ctx.lr = 0x82348068;
	sub_822D4FA0(ctx, base);
	// lwz r4,3792(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3792);
	// lwz r3,3848(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3848);
	// mullw r30,r29,r30
	r30.s64 = int64_t(r29.s32) * int64_t(r30.s32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8234807C;
	sub_822D4FA0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,3796(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3796);
	// lwz r3,3852(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3852);
	// bl 0x822d4fa0
	ctx.lr = 0x8234808C;
	sub_822D4FA0(ctx, base);
loc_8234808C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82354F70) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r6,240
	ctx.r6.s64 = 240;
	// li r7,224
	ctx.r7.s64 = 224;
	// li r8,176
	ctx.r8.s64 = 176;
	// li r9,160
	ctx.r9.s64 = 160;
	// li r4,208
	ctx.r4.s64 = 208;
	// lvx128 v63,r31,r5
	ea = (r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r31,r6
	ea = (r31.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v61,v63,11
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v60,r31,r7
	ea = (r31.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v59,v62,11
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v55,r31,r8
	ea = (r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v57,v60,11
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v54,r31,r9
	ea = (r31.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v53,v55,11
	simde_mm_store_ps(ctx.v53.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v55.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v58,r31,r4
	ea = (r31.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v51,v54,11
	simde_mm_store_ps(ctx.v51.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v54.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vcsxwfp128 v56,v58,11
	simde_mm_store_ps(ctx.v56.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// li r10,144
	ctx.r10.s64 = 144;
	// lvx128 v52,r30,r5
	ea = (r30.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,128
	ctx.r11.s64 = 128;
	// lvx128 v50,r30,r6
	ea = (r30.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v49,v52,0
	simde_mm_store_ps(ctx.v49.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v52.u32)));
	// lvx128 v48,r30,r7
	ea = (r30.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v47,v50,0
	simde_mm_store_ps(ctx.v47.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)));
	// lvx128 v43,r30,r8
	ea = (r30.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v45,v48,0
	simde_mm_store_ps(ctx.v45.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v48.u32)));
	// lvx128 v42,r30,r9
	ea = (r30.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v41,v43,0
	simde_mm_store_ps(ctx.v41.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v43.u32)));
	// lvx128 v37,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v32,v42,0
	simde_mm_store_ps(ctx.v32.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v42.u32)));
	// lvx128 v46,r30,r4
	ea = (r30.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v40,v61,v2
	simde_mm_store_ps(ctx.v40.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vmulfp128 v39,v59,v2
	simde_mm_store_ps(ctx.v39.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v2.f32)));
	// lvx128 v35,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v44,v46,0
	simde_mm_store_ps(ctx.v44.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// lvx128 v33,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v38,v57,v2
	simde_mm_store_ps(ctx.v38.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v2.f32)));
	// li r5,80
	ctx.r5.s64 = 80;
	// vmulfp128 v34,v53,v2
	simde_mm_store_ps(ctx.v34.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v2.f32)));
	// li r6,64
	ctx.r6.s64 = 64;
	// vmulfp128 v36,v56,v2
	simde_mm_store_ps(ctx.v36.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v2.f32)));
	// li r7,112
	ctx.r7.s64 = 112;
	// vmulfp128 v63,v51,v2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v2.f32)));
	// lvx128 v62,r30,r11
	ea = (r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v61,v37,11
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v37.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// li r8,96
	ctx.r8.s64 = 96;
	// vcsxwfp128 v59,v35,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v35.u32)));
	// lvx128 v60,r31,r5
	ea = (r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v57,v33,11
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v33.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v58,r31,r6
	ea = (r31.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r31,r7
	ea = (r31.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v55,v62,0
	simde_mm_store_ps(ctx.v55.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// li r9,48
	ctx.r9.s64 = 48;
	// vcsxwfp128 v54,v60,11
	simde_mm_store_ps(ctx.v54.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vmsum4fp128 v53,v40,v49
	simde_mm_store_ps(ctx.v53.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_load_ps(ctx.v49.f32), 0xFF));
	// li r10,32
	ctx.r10.s64 = 32;
	// vmsum4fp128 v52,v39,v47
	simde_mm_store_ps(ctx.v52.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v39.f32), simde_mm_load_ps(ctx.v47.f32), 0xFF));
	// li r11,16
	ctx.r11.s64 = 16;
	// vmsum4fp128 v51,v38,v45
	simde_mm_store_ps(ctx.v51.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_load_ps(ctx.v45.f32), 0xFF));
	// vmsum4fp128 v49,v34,v41
	simde_mm_store_ps(ctx.v49.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v34.f32), simde_mm_load_ps(ctx.v41.f32), 0xFF));
	// vmsum4fp128 v50,v36,v44
	simde_mm_store_ps(ctx.v50.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v36.f32), simde_mm_load_ps(ctx.v44.f32), 0xFF));
	// vmsum4fp128 v48,v63,v32
	simde_mm_store_ps(ctx.v48.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v32.f32), 0xFF));
	// vmulfp128 v47,v61,v2
	simde_mm_store_ps(ctx.v47.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vmulfp128 v46,v57,v2
	simde_mm_store_ps(ctx.v46.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vmulfp128 v45,v53,v1
	simde_mm_store_ps(ctx.v45.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v44,v52,v1
	simde_mm_store_ps(ctx.v44.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmsum4fp128 v41,v47,v59
	simde_mm_store_ps(ctx.v41.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_load_ps(ctx.v59.f32), 0xFF));
	// vmulfp128 v43,v51,v1
	simde_mm_store_ps(ctx.v43.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v40,v49,v1
	simde_mm_store_ps(ctx.v40.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v42,v50,v1
	simde_mm_store_ps(ctx.v42.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v39,v48,v1
	simde_mm_store_ps(ctx.v39.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vcfpuxws128 v38,v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v38.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v45.f32)));
	// vcfpuxws128 v37,v44,0
	simde_mm_store_si128((simde__m128i*)ctx.v37.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v44.f32)));
	// vcfpuxws128 v36,v43,0
	simde_mm_store_si128((simde__m128i*)ctx.v36.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v43.f32)));
	// vcfpuxws128 v34,v40,0
	simde_mm_store_si128((simde__m128i*)ctx.v34.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v40.f32)));
	// vcfpuxws128 v35,v42,0
	simde_mm_store_si128((simde__m128i*)ctx.v35.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v42.f32)));
	// vcfpuxws128 v33,v39,0
	simde_mm_store_si128((simde__m128i*)ctx.v33.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v39.f32)));
	// vmulfp128 v32,v41,v1
	simde_mm_store_ps(ctx.v32.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v1.f32)));
	// lvx128 v63,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v62,v58,11
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v58,r31,r8
	ea = (r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v60,v63,11
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v61,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v52,v58,11
	simde_mm_store_ps(ctx.v52.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v57,r31,r9
	ea = (r31.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v56,v56,11
	simde_mm_store_ps(ctx.v56.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v56.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v53,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v51,v57,11
	simde_mm_store_ps(ctx.v51.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v57.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vcsxwfp128 v49,v53,11
	simde_mm_store_ps(ctx.v49.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v53.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v50,r30,r5
	ea = (r30.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v59,v61,11
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v48,r30,r6
	ea = (r30.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v38,v35,4,0
	simde_mm_store_ps(ctx.v38.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v35.f32), 228), 4));
	// lvx128 v47,r30,r11
	ea = (r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v44,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v42,v54,v2
	simde_mm_store_ps(ctx.v42.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v2.f32)));
	// lvx128 v41,r30,r7
	ea = (r30.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v36,v37,1,0
	simde_mm_store_ps(ctx.v36.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v36.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v37.f32), 228), 1));
	// lvx128 v39,r30,r8
	ea = (r30.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v45,v50,0
	simde_mm_store_ps(ctx.v45.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)));
	// lvx128 v35,r30,r9
	ea = (r30.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v43,v48,0
	simde_mm_store_ps(ctx.v43.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v48.u32)));
	// vmulfp128 v63,v62,v2
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v2.f32)));
	// lvx128 v62,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v61,v60,v2
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vmsum4fp128 v60,v46,v55
	simde_mm_store_ps(ctx.v60.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v55.f32), 0xFF));
	// vmulfp128 v55,v52,v2
	simde_mm_store_ps(ctx.v55.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vrlimi128 v33,v34,1,0
	simde_mm_store_ps(ctx.v33.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v33.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v34.f32), 228), 1));
	// vmulfp128 v57,v56,v2
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vrlimi128 v38,v36,3,0
	simde_mm_store_ps(ctx.v38.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v36.f32), 228), 3));
	// vcsxwfp128 v54,v35,0
	simde_mm_store_ps(ctx.v54.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v35.u32)));
	// vmulfp128 v53,v51,v2
	simde_mm_store_ps(ctx.v53.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vcsxwfp128 v37,v44,0
	simde_mm_store_ps(ctx.v37.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v44.u32)));
	// vcsxwfp128 v58,v41,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v41.u32)));
	// vcsxwfp128 v56,v39,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v39.u32)));
	// vcsxwfp128 v52,v62,0
	simde_mm_store_ps(ctx.v52.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vcsxwfp128 v40,v47,0
	simde_mm_store_ps(ctx.v40.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v47.u32)));
	// vmsum4fp128 v51,v42,v45
	simde_mm_store_ps(ctx.v51.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v45.f32), 0xFF));
	// vmulfp128 v59,v59,v2
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vmulfp128 v50,v49,v2
	simde_mm_store_ps(ctx.v50.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vmsum4fp128 v48,v63,v43
	simde_mm_store_ps(ctx.v48.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v43.f32), 0xFF));
	// vcfpuxws128 v49,v32,0
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v32.f32)));
	// vmsum4fp128 v42,v53,v54
	simde_mm_store_ps(ctx.v42.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v54.f32), 0xFF));
	// vmulfp128 v44,v60,v1
	simde_mm_store_ps(ctx.v44.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmsum4fp128 v45,v57,v58
	simde_mm_store_ps(ctx.v45.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v58.f32), 0xFF));
	// vmsum4fp128 v43,v55,v56
	simde_mm_store_ps(ctx.v43.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v56.f32), 0xFF));
	// vmsum4fp128 v47,v61,v40
	simde_mm_store_ps(ctx.v47.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v40.f32), 0xFF));
	// vmsum4fp128 v46,v59,v37
	simde_mm_store_ps(ctx.v46.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v37.f32), 0xFF));
	// vmsum4fp128 v41,v50,v52
	simde_mm_store_ps(ctx.v41.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_load_ps(ctx.v52.f32), 0xFF));
	// vmulfp128 v40,v51,v1
	simde_mm_store_ps(ctx.v40.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v39,v48,v1
	simde_mm_store_ps(ctx.v39.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vcfpuxws128 v35,v44,0
	simde_mm_store_si128((simde__m128i*)ctx.v35.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v44.f32)));
	// vmulfp128 v63,v42,v1
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v34,v45,v1
	simde_mm_store_ps(ctx.v34.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v32,v43,v1
	simde_mm_store_ps(ctx.v32.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v37,v47,v1
	simde_mm_store_ps(ctx.v37.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v36,v46,v1
	simde_mm_store_ps(ctx.v36.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v61,v41,v1
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vcfpuxws128 v62,v40,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v40.f32)));
	// vrlimi128 v35,v49,4,0
	simde_mm_store_ps(ctx.v35.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v49.f32), 228), 4));
	// vcfpuxws128 v60,v39,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v39.f32)));
	// vcfpuxws128 v55,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v63.f32)));
	// vrlimi128 v35,v33,3,0
	simde_mm_store_ps(ctx.v35.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v33.f32), 228), 3));
	// vcfpuxws128 v57,v34,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v34.f32)));
	// vcfpuxws128 v56,v32,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v32.f32)));
	// vpkswus128 v53,v35,v38
	simde_mm_store_si128((simde__m128i*)ctx.v53.u16, simde_mm_packus_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.s32), simde_mm_load_si128((simde__m128i*)ctx.v35.s32)));
	// vcfpuxws128 v59,v37,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v37.f32)));
	// vcfpuxws128 v58,v36,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v36.f32)));
	// vcfpuxws128 v54,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v61.f32)));
	// vrlimi128 v60,v62,4,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 4));
	// vrlimi128 v56,v57,1,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v57.f32), 228), 1));
	// vrlimi128 v58,v59,4,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v59.f32), 228), 4));
	// vrlimi128 v54,v55,1,0
	simde_mm_store_ps(ctx.v54.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v55.f32), 228), 1));
	// vrlimi128 v60,v56,3,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v56.f32), 228), 3));
	// vrlimi128 v58,v54,3,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v54.f32), 228), 3));
	// vpkswus128 v52,v58,v60
	simde_mm_store_si128((simde__m128i*)ctx.v52.u16, simde_mm_packus_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.s32), simde_mm_load_si128((simde__m128i*)ctx.v58.s32)));
	// vpkuhus128 v51,v52,v53
	vTemp.u8[15] = ctx.v52.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v52.u16[7];
	vTemp.u8[7] = ctx.v53.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v53.u16[7];
	vTemp.u8[14] = ctx.v52.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v52.u16[6];
	vTemp.u8[6] = ctx.v53.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v53.u16[6];
	vTemp.u8[13] = ctx.v52.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v52.u16[5];
	vTemp.u8[5] = ctx.v53.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v53.u16[5];
	vTemp.u8[12] = ctx.v52.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v52.u16[4];
	vTemp.u8[4] = ctx.v53.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v53.u16[4];
	vTemp.u8[11] = ctx.v52.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v52.u16[3];
	vTemp.u8[3] = ctx.v53.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v53.u16[3];
	vTemp.u8[10] = ctx.v52.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v52.u16[2];
	vTemp.u8[2] = ctx.v53.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v53.u16[2];
	vTemp.u8[9] = ctx.v52.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v52.u16[1];
	vTemp.u8[1] = ctx.v53.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v53.u16[1];
	vTemp.u8[8] = ctx.v52.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v52.u16[0];
	vTemp.u8[0] = ctx.v53.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v53.u16[0];
	ctx.v51 = vTemp;
	// stvlx128 v51,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// stvrx128 v51,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v51.u8[i]);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8236A0E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8236A0F0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,296(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 296);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// stw r10,300(r3)
	REX_STORE_U32(ctx.r3.u32 + 300, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8236a174
	if (!ctx.cr6.eq) goto loc_8236A174;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,36(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8236a134
	if (!ctx.cr6.eq) goto loc_8236A134;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,40(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8236a13c
	if (ctx.cr6.eq) goto loc_8236A13C;
loc_8236A134:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,300(r31)
	REX_STORE_U32(r31.u32 + 300, ctx.r10.u32);
loc_8236A13C:
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8236a158
	if (!ctx.cr6.eq) goto loc_8236A158;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8236a164
	if (ctx.cr6.eq) goto loc_8236A164;
loc_8236A158:
	// lwz r11,300(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 300);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,300(r31)
	REX_STORE_U32(r31.u32 + 300, ctx.r11.u32);
loc_8236A164:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x8236a198
	goto loc_8236A198;
loc_8236A174:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// stw r10,300(r31)
	REX_STORE_U32(r31.u32 + 300, ctx.r10.u32);
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r6,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r6.s64 = r30.s32 >> 1;
	// stw r7,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// addze r30,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	r30.s64 = temp.s64;
loc_8236A198:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r5,8(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 4);
	// bl 0x8236a048
	ctx.lr = 0x8236A1B8;
	sub_8236A048(ctx, base);
	// stw r3,20(r29)
	REX_STORE_U32(r29.u32 + 20, ctx.r3.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,292(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 292);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// beq cr6,0x8236a1f0
	if (ctx.cr6.eq) goto loc_8236A1F0;
	// addi r3,r31,156
	ctx.r3.s64 = r31.s64 + 156;
	// bl 0x823b0b48
	ctx.lr = 0x8236A1E4;
	sub_823B0B48(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
loc_8236A1F0:
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x823b0cd8
	ctx.lr = 0x8236A1F8;
	sub_823B0CD8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8236EED0) {
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
	ctx.lr = 0x8236EED8;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	r25.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8236ef00
	if (ctx.cr6.eq) goto loc_8236EF00;
	// bl 0x82347148
	ctx.lr = 0x8236EEF8;
	sub_82347148(ctx, base);
	// stw r3,288(r27)
	REX_STORE_U32(r27.u32 + 288, ctx.r3.u32);
	// b 0x8236ef04
	goto loc_8236EF04;
loc_8236EF00:
	// bl 0x82347148
	ctx.lr = 0x8236EF04;
	sub_82347148(ctx, base);
loc_8236EF04:
	// lwz r11,288(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 288);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8236f374
	if (!ctx.cr6.eq) goto loc_8236F374;
	// lwz r11,21536(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 21536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236f2f0
	if (ctx.cr6.eq) goto loc_8236F2F0;
	// lwz r11,21864(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 21864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236f1b0
	if (ctx.cr6.eq) goto loc_8236F1B0;
	// lwz r11,22252(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 22252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236f1b0
	if (!ctx.cr6.eq) goto loc_8236F1B0;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r26,1
	r26.s64 = 1;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// mr r29,r25
	r29.u64 = r25.u64;
	// mr r30,r26
	r30.u64 = r26.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x8236f0a4
	if (ctx.cr6.eq) goto loc_8236F0A4;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8236efb4
	if (!ctx.cr6.lt) goto loc_8236EFB4;
loc_8236EF5C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236efb4
	if (ctx.cr6.eq) goto loc_8236EFB4;
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
	// bge 0x8236efa4
	if (!ctx.cr0.lt) goto loc_8236EFA4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236EFA4;
	sub_823380C8(ctx, base);
loc_8236EFA4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8236ef5c
	if (ctx.cr6.gt) goto loc_8236EF5C;
loc_8236EFB4:
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
	// bge 0x8236efec
	if (!ctx.cr0.lt) goto loc_8236EFEC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236EFEC;
	sub_823380C8(ctx, base);
loc_8236EFEC:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r29,r25
	r29.u64 = r25.u64;
	// stw r30,21540(r27)
	REX_STORE_U32(r27.u32 + 21540, r30.u32);
	// mr r30,r26
	r30.u64 = r26.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8236f064
	if (!ctx.cr6.lt) goto loc_8236F064;
loc_8236F00C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236f064
	if (ctx.cr6.eq) goto loc_8236F064;
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
	// bge 0x8236f054
	if (!ctx.cr0.lt) goto loc_8236F054;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236F054;
	sub_823380C8(ctx, base);
loc_8236F054:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8236f00c
	if (ctx.cr6.gt) goto loc_8236F00C;
loc_8236F064:
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
	// bge 0x8236f09c
	if (!ctx.cr0.lt) goto loc_8236F09C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236F09C;
	sub_823380C8(ctx, base);
loc_8236F09C:
	// stw r30,21544(r27)
	REX_STORE_U32(r27.u32 + 21544, r30.u32);
	// b 0x8236f2f0
	goto loc_8236F2F0;
loc_8236F0A4:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8236f104
	if (!ctx.cr6.lt) goto loc_8236F104;
loc_8236F0AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236f104
	if (ctx.cr6.eq) goto loc_8236F104;
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
	// bge 0x8236f0f4
	if (!ctx.cr0.lt) goto loc_8236F0F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236F0F4;
	sub_823380C8(ctx, base);
loc_8236F0F4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8236f0ac
	if (ctx.cr6.gt) goto loc_8236F0AC;
loc_8236F104:
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
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// stw r6,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// rotlwi r3,r5,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8236f138
	if (!ctx.cr0.lt) goto loc_8236F138;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236F138;
	sub_823380C8(ctx, base);
loc_8236F138:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8236f2cc
	if (!ctx.cr6.lt) goto loc_8236F2CC;
loc_8236F154:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236f2cc
	if (ctx.cr6.eq) goto loc_8236F2CC;
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
	// bge 0x8236f19c
	if (!ctx.cr0.lt) goto loc_8236F19C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236F19C;
	sub_823380C8(ctx, base);
loc_8236F19C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8236f154
	if (ctx.cr6.gt) goto loc_8236F154;
	// b 0x8236f2cc
	goto loc_8236F2CC;
loc_8236F1B0:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// li r30,2
	r30.s64 = 2;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x8236f26c
	if (ctx.cr6.eq) goto loc_8236F26C;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8236f22c
	if (!ctx.cr6.lt) goto loc_8236F22C;
loc_8236F1D4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236f22c
	if (ctx.cr6.eq) goto loc_8236F22C;
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
	// bge 0x8236f21c
	if (!ctx.cr0.lt) goto loc_8236F21C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236F21C;
	sub_823380C8(ctx, base);
loc_8236F21C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8236f1d4
	if (ctx.cr6.gt) goto loc_8236F1D4;
loc_8236F22C:
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
	// bge 0x8236f264
	if (!ctx.cr0.lt) goto loc_8236F264;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236F264;
	sub_823380C8(ctx, base);
loc_8236F264:
	// stw r30,21868(r27)
	REX_STORE_U32(r27.u32 + 21868, r30.u32);
	// b 0x8236f2f0
	goto loc_8236F2F0;
loc_8236F26C:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8236f2cc
	if (!ctx.cr6.lt) goto loc_8236F2CC;
loc_8236F274:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236f2cc
	if (ctx.cr6.eq) goto loc_8236F2CC;
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
	// bge 0x8236f2bc
	if (!ctx.cr0.lt) goto loc_8236F2BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236F2BC;
	sub_823380C8(ctx, base);
loc_8236F2BC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8236f274
	if (ctx.cr6.gt) goto loc_8236F274;
loc_8236F2CC:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// std r7,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r7.u64);
	// bge 0x8236f2f0
	if (!ctx.cr0.lt) goto loc_8236F2F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236F2F0;
	sub_823380C8(ctx, base);
loc_8236F2F0:
	// lwz r11,22076(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 22076);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236f30c
	if (ctx.cr6.eq) goto loc_8236F30C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82346bc0
	ctx.lr = 0x8236F30C;
	sub_82346BC0(ctx, base);
loc_8236F30C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x8236f318
	if (ctx.cr6.eq) goto loc_8236F318;
	// stw r25,22232(r27)
	REX_STORE_U32(r27.u32 + 22232, r25.u32);
loc_8236F318:
	// lwz r11,14836(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8236f334
	if (!ctx.cr6.gt) goto loc_8236F334;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x8236f368
	if (ctx.cr6.eq) goto loc_8236F368;
	// lwz r11,21684(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 21684);
	// stw r11,21676(r27)
	REX_STORE_U32(r27.u32 + 21676, ctx.r11.u32);
loc_8236F334:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x8236f368
	if (ctx.cr6.eq) goto loc_8236F368;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,24688(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 24688);
	// bl 0x82332ce0
	ctx.lr = 0x8236F350;
	sub_82332CE0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82332ff8
	ctx.lr = 0x8236F360;
	sub_82332FF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82371a54
	if (!ctx.cr6.eq) goto loc_82371A54;
loc_8236F368:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ec8
	return;
loc_8236F374:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236f394
	if (ctx.cr6.eq) goto loc_8236F394;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8236f394
	if (ctx.cr6.eq) goto loc_8236F394;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8236f394
	if (ctx.cr6.eq) goto loc_8236F394;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82371a50
	if (!ctx.cr6.eq) goto loc_82371A50;
loc_8236F394:
	// lwz r11,21552(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 21552);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236f41c
	if (ctx.cr6.eq) goto loc_8236F41C;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,8
	r30.s64 = 8;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x8236f3f8
	if (!ctx.cr6.lt) goto loc_8236F3F8;
loc_8236F3B8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236f3f8
	if (ctx.cr6.eq) goto loc_8236F3F8;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r30,r11,r30
	r30.u64 = r30.u64 - ctx.r11.u64;
	// std r6,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bge 0x8236f3e8
	if (!ctx.cr0.lt) goto loc_8236F3E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236F3E8;
	sub_823380C8(ctx, base);
loc_8236F3E8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8236f3b8
	if (ctx.cr6.gt) goto loc_8236F3B8;
loc_8236F3F8:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// bge 0x8236f41c
	if (!ctx.cr0.lt) goto loc_8236F41C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236F41C;
	sub_823380C8(ctx, base);
loc_8236F41C:
	// lwz r11,21536(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 21536);
	// li r26,1
	r26.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236f7fc
	if (ctx.cr6.eq) goto loc_8236F7FC;
	// lwz r11,21864(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 21864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236f6bc
	if (ctx.cr6.eq) goto loc_8236F6BC;
	// lwz r11,22252(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 22252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236f6bc
	if (!ctx.cr6.eq) goto loc_8236F6BC;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x8236f5b0
	if (ctx.cr6.eq) goto loc_8236F5B0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8236f4c0
	if (!ctx.cr6.lt) goto loc_8236F4C0;
loc_8236F468:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236f4c0
	if (ctx.cr6.eq) goto loc_8236F4C0;
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
	// bge 0x8236f4b0
	if (!ctx.cr0.lt) goto loc_8236F4B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236F4B0;
	sub_823380C8(ctx, base);
loc_8236F4B0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8236f468
	if (ctx.cr6.gt) goto loc_8236F468;
loc_8236F4C0:
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
	// bge 0x8236f4f8
	if (!ctx.cr0.lt) goto loc_8236F4F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236F4F8;
	sub_823380C8(ctx, base);
loc_8236F4F8:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r29,r25
	r29.u64 = r25.u64;
	// stw r30,21540(r27)
	REX_STORE_U32(r27.u32 + 21540, r30.u32);
	// mr r30,r26
	r30.u64 = r26.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8236f570
	if (!ctx.cr6.lt) goto loc_8236F570;
loc_8236F518:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236f570
	if (ctx.cr6.eq) goto loc_8236F570;
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
	// bge 0x8236f560
	if (!ctx.cr0.lt) goto loc_8236F560;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236F560;
	sub_823380C8(ctx, base);
loc_8236F560:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8236f518
	if (ctx.cr6.gt) goto loc_8236F518;
loc_8236F570:
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
	// bge 0x8236f5a8
	if (!ctx.cr0.lt) goto loc_8236F5A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236F5A8;
	sub_823380C8(ctx, base);
loc_8236F5A8:
	// stw r30,21544(r27)
	REX_STORE_U32(r27.u32 + 21544, r30.u32);
	// b 0x8236f7fc
	goto loc_8236F7FC;
loc_8236F5B0:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8236f610
	if (!ctx.cr6.lt) goto loc_8236F610;
loc_8236F5B8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236f610
	if (ctx.cr6.eq) goto loc_8236F610;
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
	// bge 0x8236f600
	if (!ctx.cr0.lt) goto loc_8236F600;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236F600;
	sub_823380C8(ctx, base);
loc_8236F600:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8236f5b8
	if (ctx.cr6.gt) goto loc_8236F5B8;
loc_8236F610:
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
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// stw r6,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// rotlwi r3,r5,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8236f644
	if (!ctx.cr0.lt) goto loc_8236F644;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236F644;
	sub_823380C8(ctx, base);
loc_8236F644:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8236f7d8
	if (!ctx.cr6.lt) goto loc_8236F7D8;
loc_8236F660:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236f7d8
	if (ctx.cr6.eq) goto loc_8236F7D8;
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
	// bge 0x8236f6a8
	if (!ctx.cr0.lt) goto loc_8236F6A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236F6A8;
	sub_823380C8(ctx, base);
loc_8236F6A8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8236f660
	if (ctx.cr6.gt) goto loc_8236F660;
	// b 0x8236f7d8
	goto loc_8236F7D8;
loc_8236F6BC:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// li r30,2
	r30.s64 = 2;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x8236f778
	if (ctx.cr6.eq) goto loc_8236F778;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8236f738
	if (!ctx.cr6.lt) goto loc_8236F738;
loc_8236F6E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236f738
	if (ctx.cr6.eq) goto loc_8236F738;
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
	// bge 0x8236f728
	if (!ctx.cr0.lt) goto loc_8236F728;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236F728;
	sub_823380C8(ctx, base);
loc_8236F728:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8236f6e0
	if (ctx.cr6.gt) goto loc_8236F6E0;
loc_8236F738:
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
	// bge 0x8236f770
	if (!ctx.cr0.lt) goto loc_8236F770;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236F770;
	sub_823380C8(ctx, base);
loc_8236F770:
	// stw r30,21868(r27)
	REX_STORE_U32(r27.u32 + 21868, r30.u32);
	// b 0x8236f7fc
	goto loc_8236F7FC;
loc_8236F778:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8236f7d8
	if (!ctx.cr6.lt) goto loc_8236F7D8;
loc_8236F780:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236f7d8
	if (ctx.cr6.eq) goto loc_8236F7D8;
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
	// bge 0x8236f7c8
	if (!ctx.cr0.lt) goto loc_8236F7C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236F7C8;
	sub_823380C8(ctx, base);
loc_8236F7C8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8236f780
	if (ctx.cr6.gt) goto loc_8236F780;
loc_8236F7D8:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// std r7,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r7.u64);
	// bge 0x8236f7fc
	if (!ctx.cr0.lt) goto loc_8236F7FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236F7FC;
	sub_823380C8(ctx, base);
loc_8236F7FC:
	// lwz r11,22076(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 22076);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236f818
	if (ctx.cr6.eq) goto loc_8236F818;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82346bc0
	ctx.lr = 0x8236F818;
	sub_82346BC0(ctx, base);
loc_8236F818:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8236f88c
	if (!ctx.cr6.lt) goto loc_8236F88C;
loc_8236F834:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236f88c
	if (ctx.cr6.eq) goto loc_8236F88C;
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
	// bge 0x8236f87c
	if (!ctx.cr0.lt) goto loc_8236F87C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236F87C;
	sub_823380C8(ctx, base);
loc_8236F87C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8236f834
	if (ctx.cr6.gt) goto loc_8236F834;
loc_8236F88C:
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
	// bge 0x8236f8c4
	if (!ctx.cr0.lt) goto loc_8236F8C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236F8C4;
	sub_823380C8(ctx, base);
loc_8236F8C4:
	// lwz r11,21864(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 21864);
	// stw r30,3960(r27)
	REX_STORE_U32(r27.u32 + 3960, r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236fa14
	if (ctx.cr6.eq) goto loc_8236FA14;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x8236f990
	if (ctx.cr6.eq) goto loc_8236F990;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8236f950
	if (!ctx.cr6.lt) goto loc_8236F950;
loc_8236F8F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236f950
	if (ctx.cr6.eq) goto loc_8236F950;
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
	// bge 0x8236f940
	if (!ctx.cr0.lt) goto loc_8236F940;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236F940;
	sub_823380C8(ctx, base);
loc_8236F940:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8236f8f8
	if (ctx.cr6.gt) goto loc_8236F8F8;
loc_8236F950:
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
	// bge 0x8236f988
	if (!ctx.cr0.lt) goto loc_8236F988;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236F988;
	sub_823380C8(ctx, base);
loc_8236F988:
	// stw r30,21676(r27)
	REX_STORE_U32(r27.u32 + 21676, r30.u32);
	// b 0x8236fa14
	goto loc_8236FA14;
loc_8236F990:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8236f9f0
	if (!ctx.cr6.lt) goto loc_8236F9F0;
loc_8236F998:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236f9f0
	if (ctx.cr6.eq) goto loc_8236F9F0;
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
	// bge 0x8236f9e0
	if (!ctx.cr0.lt) goto loc_8236F9E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236F9E0;
	sub_823380C8(ctx, base);
loc_8236F9E0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8236f998
	if (ctx.cr6.gt) goto loc_8236F998;
loc_8236F9F0:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// bge 0x8236fa14
	if (!ctx.cr0.lt) goto loc_8236FA14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236FA14;
	sub_823380C8(ctx, base);
loc_8236FA14:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,5
	r30.s64 = 5;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x8236fa88
	if (!ctx.cr6.lt) goto loc_8236FA88;
loc_8236FA30:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236fa88
	if (ctx.cr6.eq) goto loc_8236FA88;
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
	// bge 0x8236fa78
	if (!ctx.cr0.lt) goto loc_8236FA78;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236FA78;
	sub_823380C8(ctx, base);
loc_8236FA78:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8236fa30
	if (ctx.cr6.gt) goto loc_8236FA30;
loc_8236FA88:
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
	// bge 0x8236fac0
	if (!ctx.cr0.lt) goto loc_8236FAC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236FAC0;
	sub_823380C8(ctx, base);
loc_8236FAC0:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x8236facc
	if (ctx.cr6.eq) goto loc_8236FACC;
	// stw r30,4008(r27)
	REX_STORE_U32(r27.u32 + 4008, r30.u32);
loc_8236FACC:
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// bgt cr6,0x8236fc18
	if (ctx.cr6.gt) goto loc_8236FC18;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x8236fb90
	if (ctx.cr6.eq) goto loc_8236FB90;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8236fb50
	if (!ctx.cr6.lt) goto loc_8236FB50;
loc_8236FAF8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236fb50
	if (ctx.cr6.eq) goto loc_8236FB50;
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
	// bge 0x8236fb40
	if (!ctx.cr0.lt) goto loc_8236FB40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236FB40;
	sub_823380C8(ctx, base);
loc_8236FB40:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8236faf8
	if (ctx.cr6.gt) goto loc_8236FAF8;
loc_8236FB50:
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
	// bge 0x8236fb88
	if (!ctx.cr0.lt) goto loc_8236FB88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236FB88;
	sub_823380C8(ctx, base);
loc_8236FB88:
	// stw r30,252(r27)
	REX_STORE_U32(r27.u32 + 252, r30.u32);
	// b 0x8236fc24
	goto loc_8236FC24;
loc_8236FB90:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8236fbf0
	if (!ctx.cr6.lt) goto loc_8236FBF0;
loc_8236FB98:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236fbf0
	if (ctx.cr6.eq) goto loc_8236FBF0;
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
	// bge 0x8236fbe0
	if (!ctx.cr0.lt) goto loc_8236FBE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236FBE0;
	sub_823380C8(ctx, base);
loc_8236FBE0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8236fb98
	if (ctx.cr6.gt) goto loc_8236FB98;
loc_8236FBF0:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// bge 0x8236fc24
	if (!ctx.cr0.lt) goto loc_8236FC24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236FC14;
	sub_823380C8(ctx, base);
	// b 0x8236fc24
	goto loc_8236FC24;
loc_8236FC18:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x8236fc24
	if (ctx.cr6.eq) goto loc_8236FC24;
	// stw r25,252(r27)
	REX_STORE_U32(r27.u32 + 252, r25.u32);
loc_8236FC24:
	// lwz r11,3480(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 3480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236fd70
	if (ctx.cr6.eq) goto loc_8236FD70;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x8236fcec
	if (ctx.cr6.eq) goto loc_8236FCEC;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8236fcac
	if (!ctx.cr6.lt) goto loc_8236FCAC;
loc_8236FC54:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236fcac
	if (ctx.cr6.eq) goto loc_8236FCAC;
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
	// bge 0x8236fc9c
	if (!ctx.cr0.lt) goto loc_8236FC9C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236FC9C;
	sub_823380C8(ctx, base);
loc_8236FC9C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8236fc54
	if (ctx.cr6.gt) goto loc_8236FC54;
loc_8236FCAC:
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
	// bge 0x8236fce4
	if (!ctx.cr0.lt) goto loc_8236FCE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236FCE4;
	sub_823380C8(ctx, base);
loc_8236FCE4:
	// stw r30,3468(r27)
	REX_STORE_U32(r27.u32 + 3468, r30.u32);
	// b 0x8236fd70
	goto loc_8236FD70;
loc_8236FCEC:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8236fd4c
	if (!ctx.cr6.lt) goto loc_8236FD4C;
loc_8236FCF4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236fd4c
	if (ctx.cr6.eq) goto loc_8236FD4C;
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
	// bge 0x8236fd3c
	if (!ctx.cr0.lt) goto loc_8236FD3C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236FD3C;
	sub_823380C8(ctx, base);
loc_8236FD3C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8236fcf4
	if (ctx.cr6.gt) goto loc_8236FCF4;
loc_8236FD4C:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// bge 0x8236fd70
	if (!ctx.cr0.lt) goto loc_8236FD70;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236FD70;
	sub_823380C8(ctx, base);
loc_8236FD70:
	// lwz r11,3472(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 3472);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236fdc0
	if (!ctx.cr6.eq) goto loc_8236FDC0;
	// lwz r11,4008(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4008);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x8236fd9c
	if (ctx.cr6.gt) goto loc_8236FD9C;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x8236fd94
	if (ctx.cr6.eq) goto loc_8236FD94;
	// stw r26,3468(r27)
	REX_STORE_U32(r27.u32 + 3468, r26.u32);
loc_8236FD94:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x8236fdc4
	goto loc_8236FDC4;
loc_8236FD9C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x8236fda8
	if (ctx.cr6.eq) goto loc_8236FDA8;
	// stw r25,3468(r27)
	REX_STORE_U32(r27.u32 + 3468, r25.u32);
loc_8236FDA8:
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,-29304
	ctx.r11.s64 = ctx.r9.s64 + -29304;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,-4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// b 0x8236fdc4
	goto loc_8236FDC4;
loc_8236FDC0:
	// lwz r9,4008(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 4008);
loc_8236FDC4:
	// lwz r11,3008(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 3008);
	// stw r9,248(r27)
	REX_STORE_U32(r27.u32 + 248, ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r25,3004(r27)
	REX_STORE_U32(r27.u32 + 3004, r25.u32);
	// beq cr6,0x8236fe0c
	if (ctx.cr6.eq) goto loc_8236FE0C;
	// lwz r11,288(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8236fe0c
	if (ctx.cr6.eq) goto loc_8236FE0C;
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// blt cr6,0x8236fdf4
	if (ctx.cr6.lt) goto loc_8236FDF4;
	// stw r26,3004(r27)
	REX_STORE_U32(r27.u32 + 3004, r26.u32);
	// b 0x8236fe0c
	goto loc_8236FE0C;
loc_8236FDF4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236fe04
	if (ctx.cr6.eq) goto loc_8236FE04;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8236fe0c
	if (!ctx.cr6.eq) goto loc_8236FE0C;
loc_8236FE04:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,3004(r27)
	REX_STORE_U32(r27.u32 + 3004, ctx.r11.u32);
loc_8236FE0C:
	// lwz r10,3468(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 3468);
	// addi r11,r27,4048
	ctx.r11.s64 = r27.s64 + 4048;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8236fe20
	if (!ctx.cr6.eq) goto loc_8236FE20;
	// addi r11,r27,5328
	ctx.r11.s64 = r27.s64 + 5328;
loc_8236FE20:
	// stw r11,6608(r27)
	REX_STORE_U32(r27.u32 + 6608, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r27,6624
	ctx.r11.s64 = r27.s64 + 6624;
	// bne cr6,0x8236fe34
	if (!ctx.cr6.eq) goto loc_8236FE34;
	// addi r11,r27,10720
	ctx.r11.s64 = r27.s64 + 10720;
loc_8236FE34:
	// stw r11,14816(r27)
	REX_STORE_U32(r27.u32 + 14816, ctx.r11.u32);
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// stw r9,248(r27)
	REX_STORE_U32(r27.u32 + 248, ctx.r9.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82371a50
	if (!ctx.cr6.eq) goto loc_82371A50;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82371a50
	if (!ctx.cr6.gt) goto loc_82371A50;
	// cmpwi cr6,r9,31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 31, ctx.xer);
	// bgt cr6,0x82371a50
	if (ctx.cr6.gt) goto loc_82371A50;
	// lwz r11,21572(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 21572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236ff14
	if (ctx.cr6.eq) goto loc_8236FF14;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r30,2
	r30.s64 = 2;
	// mr r29,r25
	r29.u64 = r25.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8236fed8
	if (!ctx.cr6.lt) goto loc_8236FED8;
loc_8236FE80:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236fed8
	if (ctx.cr6.eq) goto loc_8236FED8;
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
	// bge 0x8236fec8
	if (!ctx.cr0.lt) goto loc_8236FEC8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236FEC8;
	sub_823380C8(ctx, base);
loc_8236FEC8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8236fe80
	if (ctx.cr6.gt) goto loc_8236FE80;
loc_8236FED8:
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
	// bge 0x8236ff10
	if (!ctx.cr0.lt) goto loc_8236FF10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236FF10;
	sub_823380C8(ctx, base);
loc_8236FF10:
	// stw r30,21576(r27)
	REX_STORE_U32(r27.u32 + 21576, r30.u32);
loc_8236FF14:
	// lwz r11,288(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823700b0
	if (!ctx.cr6.eq) goto loc_823700B0;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,3
	r30.s64 = 3;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8236ff94
	if (!ctx.cr6.lt) goto loc_8236FF94;
loc_8236FF3C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236ff94
	if (ctx.cr6.eq) goto loc_8236FF94;
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
	// bge 0x8236ff84
	if (!ctx.cr0.lt) goto loc_8236FF84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236FF84;
	sub_823380C8(ctx, base);
loc_8236FF84:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8236ff3c
	if (ctx.cr6.gt) goto loc_8236FF3C;
loc_8236FF94:
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
	// bge 0x8236ffcc
	if (!ctx.cr0.lt) goto loc_8236FFCC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236FFCC;
	sub_823380C8(ctx, base);
loc_8236FFCC:
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(r30.s32, 7, ctx.xer);
	// bne cr6,0x82370094
	if (!ctx.cr6.eq) goto loc_82370094;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,4
	r30.s64 = 4;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x82370048
	if (!ctx.cr6.lt) goto loc_82370048;
loc_8236FFF0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82370048
	if (ctx.cr6.eq) goto loc_82370048;
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
	// bge 0x82370038
	if (!ctx.cr0.lt) goto loc_82370038;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82370038;
	sub_823380C8(ctx, base);
loc_82370038:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8236fff0
	if (ctx.cr6.gt) goto loc_8236FFF0;
loc_82370048:
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
	// bge 0x82370080
	if (!ctx.cr0.lt) goto loc_82370080;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82370080;
	sub_823380C8(ctx, base);
loc_82370080:
	// cmpwi cr6,r30,14
	ctx.cr6.compare<int32_t>(r30.s32, 14, ctx.xer);
	// bge cr6,0x82371a50
	if (!ctx.cr6.lt) goto loc_82371A50;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r30,112
	ctx.r4.s64 = r30.s64 + 112;
	// b 0x8237009c
	goto loc_8237009C;
loc_82370094:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_8237009C:
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82347da8
	ctx.lr = 0x823700A8;
	sub_82347DA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82371a54
	if (!ctx.cr6.eq) goto loc_82371A54;
loc_823700B0:
	// lwz r11,4008(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4008);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x823700d4
	if (ctx.cr6.gt) goto loc_823700D4;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x823700d4
	if (ctx.cr6.eq) goto loc_823700D4;
	// addi r11,r27,2872
	ctx.r11.s64 = r27.s64 + 2872;
	// addi r10,r27,2828
	ctx.r10.s64 = r27.s64 + 2828;
	// stw r11,2940(r27)
	REX_STORE_U32(r27.u32 + 2940, ctx.r11.u32);
	// stw r10,2952(r27)
	REX_STORE_U32(r27.u32 + 2952, ctx.r10.u32);
loc_823700D4:
	// lwz r11,288(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8237122c
	if (ctx.cr6.eq) goto loc_8237122C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8237122c
	if (ctx.cr6.eq) goto loc_8237122C;
	// lwz r11,21568(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 21568);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82370318
	if (ctx.cr6.eq) goto loc_82370318;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8237016c
	if (!ctx.cr6.lt) goto loc_8237016C;
loc_82370114:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237016c
	if (ctx.cr6.eq) goto loc_8237016C;
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
	// bge 0x8237015c
	if (!ctx.cr0.lt) goto loc_8237015C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8237015C;
	sub_823380C8(ctx, base);
loc_8237015C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82370114
	if (ctx.cr6.gt) goto loc_82370114;
loc_8237016C:
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
	// add r28,r11,r29
	r28.u64 = ctx.r11.u64 + r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x823701a4
	if (!ctx.cr0.lt) goto loc_823701A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823701A4;
	sub_823380C8(ctx, base);
loc_823701A4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82370260
	if (ctx.cr6.eq) goto loc_82370260;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82370224
	if (!ctx.cr6.lt) goto loc_82370224;
loc_823701CC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82370224
	if (ctx.cr6.eq) goto loc_82370224;
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
	// bge 0x82370214
	if (!ctx.cr0.lt) goto loc_82370214;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82370214;
	sub_823380C8(ctx, base);
loc_82370214:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823701cc
	if (ctx.cr6.gt) goto loc_823701CC;
loc_82370224:
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
	// bge 0x8237025c
	if (!ctx.cr0.lt) goto loc_8237025C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8237025C;
	sub_823380C8(ctx, base);
loc_8237025C:
	// add r4,r30,r28
	ctx.r4.u64 = r30.u64 + r28.u64;
loc_82370260:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x82370318
	if (!ctx.cr6.eq) goto loc_82370318;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x823702dc
	if (!ctx.cr6.lt) goto loc_823702DC;
loc_82370284:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823702dc
	if (ctx.cr6.eq) goto loc_823702DC;
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
	// bge 0x823702cc
	if (!ctx.cr0.lt) goto loc_823702CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823702CC;
	sub_823380C8(ctx, base);
loc_823702CC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82370284
	if (ctx.cr6.gt) goto loc_82370284;
loc_823702DC:
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
	// bge 0x82370314
	if (!ctx.cr0.lt) goto loc_82370314;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82370314;
	sub_823380C8(ctx, base);
loc_82370314:
	// addi r4,r30,2
	ctx.r4.s64 = r30.s64 + 2;
loc_82370318:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8233cca0
	ctx.lr = 0x82370320;
	sub_8233CCA0(ctx, base);
	// lwz r11,288(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 288);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r11,408(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 408);
	// bne cr6,0x82370338
	if (!ctx.cr6.eq) goto loc_82370338;
	// stw r11,22232(r27)
	REX_STORE_U32(r27.u32 + 22232, ctx.r11.u32);
	// b 0x82370344
	goto loc_82370344;
loc_82370338:
	// lwz r10,22232(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 22232);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8236f368
	if (ctx.cr6.lt) goto loc_8236F368;
loc_82370344:
	// lwz r11,21660(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 21660);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8237059c
	if (ctx.cr6.eq) goto loc_8237059C;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x823703c4
	if (!ctx.cr6.lt) goto loc_823703C4;
loc_8237036C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823703c4
	if (ctx.cr6.eq) goto loc_823703C4;
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
	// bge 0x823703b4
	if (!ctx.cr0.lt) goto loc_823703B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823703B4;
	sub_823380C8(ctx, base);
loc_823703B4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8237036c
	if (ctx.cr6.gt) goto loc_8237036C;
loc_823703C4:
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
	// bge 0x823703fc
	if (!ctx.cr0.lt) goto loc_823703FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823703FC;
	sub_823380C8(ctx, base);
loc_823703FC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r30,21664(r27)
	REX_STORE_U32(r27.u32 + 21664, r30.u32);
	// beq cr6,0x823704c0
	if (ctx.cr6.eq) goto loc_823704C0;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8237047c
	if (!ctx.cr6.lt) goto loc_8237047C;
loc_82370424:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237047c
	if (ctx.cr6.eq) goto loc_8237047C;
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
	// bge 0x8237046c
	if (!ctx.cr0.lt) goto loc_8237046C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8237046C;
	sub_823380C8(ctx, base);
loc_8237046C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82370424
	if (ctx.cr6.gt) goto loc_82370424;
loc_8237047C:
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
	// bge 0x823704b4
	if (!ctx.cr0.lt) goto loc_823704B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823704B4;
	sub_823380C8(ctx, base);
loc_823704B4:
	// lwz r11,21664(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 21664);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r11,21664(r27)
	REX_STORE_U32(r27.u32 + 21664, ctx.r11.u32);
loc_823704C0:
	// lwz r11,21664(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 21664);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82370584
	if (!ctx.cr6.eq) goto loc_82370584;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82370540
	if (!ctx.cr6.lt) goto loc_82370540;
loc_823704E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82370540
	if (ctx.cr6.eq) goto loc_82370540;
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
	// bge 0x82370530
	if (!ctx.cr0.lt) goto loc_82370530;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82370530;
	sub_823380C8(ctx, base);
loc_82370530:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823704e8
	if (ctx.cr6.gt) goto loc_823704E8;
loc_82370540:
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
	// bge 0x82370578
	if (!ctx.cr0.lt) goto loc_82370578;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82370578;
	sub_823380C8(ctx, base);
loc_82370578:
	// lwz r11,21664(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 21664);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r11,21664(r27)
	REX_STORE_U32(r27.u32 + 21664, ctx.r11.u32);
loc_82370584:
	// lwz r11,21664(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 21664);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// stw r9,21668(r27)
	REX_STORE_U32(r27.u32 + 21668, ctx.r9.u32);
	// stw r8,21672(r27)
	REX_STORE_U32(r27.u32 + 21672, ctx.r8.u32);
loc_8237059C:
	// lwz r11,288(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823705b0
	if (!ctx.cr6.eq) goto loc_823705B0;
	// stw r26,4016(r27)
	REX_STORE_U32(r27.u32 + 4016, r26.u32);
	// b 0x82370668
	goto loc_82370668;
loc_823705B0:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82370624
	if (!ctx.cr6.lt) goto loc_82370624;
loc_823705CC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82370624
	if (ctx.cr6.eq) goto loc_82370624;
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
	// bge 0x82370614
	if (!ctx.cr0.lt) goto loc_82370614;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82370614;
	sub_823380C8(ctx, base);
loc_82370614:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823705cc
	if (ctx.cr6.gt) goto loc_823705CC;
loc_82370624:
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
	// bge 0x8237065c
	if (!ctx.cr0.lt) goto loc_8237065C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8237065C;
	sub_823380C8(ctx, base);
loc_8237065C:
	// cntlzw r11,r30
	ctx.r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r10,4016(r27)
	REX_STORE_U32(r27.u32 + 4016, ctx.r10.u32);
loc_82370668:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r26
	r30.u64 = r26.u64;
	// stw r25,4020(r27)
	REX_STORE_U32(r27.u32 + 4020, r25.u32);
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x823706e0
	if (!ctx.cr6.lt) goto loc_823706E0;
loc_82370688:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823706e0
	if (ctx.cr6.eq) goto loc_823706E0;
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
	// bge 0x823706d0
	if (!ctx.cr0.lt) goto loc_823706D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823706D0;
	sub_823380C8(ctx, base);
loc_823706D0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82370688
	if (ctx.cr6.gt) goto loc_82370688;
loc_823706E0:
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
	// bge 0x82370718
	if (!ctx.cr0.lt) goto loc_82370718;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82370718;
	sub_823380C8(ctx, base);
loc_82370718:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82370730
	if (ctx.cr6.eq) goto loc_82370730;
	// lwz r11,288(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82370730
	if (ctx.cr6.eq) goto loc_82370730;
	// stw r26,4020(r27)
	REX_STORE_U32(r27.u32 + 4020, r26.u32);
loc_82370730:
	// lwz r11,4020(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823709d4
	if (ctx.cr6.eq) goto loc_823709D4;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// li r30,6
	r30.s64 = 6;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x823708a8
	if (ctx.cr6.eq) goto loc_823708A8;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x823707b8
	if (!ctx.cr6.lt) goto loc_823707B8;
loc_82370760:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823707b8
	if (ctx.cr6.eq) goto loc_823707B8;
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
	// bge 0x823707a8
	if (!ctx.cr0.lt) goto loc_823707A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823707A8;
	sub_823380C8(ctx, base);
loc_823707A8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82370760
	if (ctx.cr6.gt) goto loc_82370760;
loc_823707B8:
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
	// bge 0x823707f0
	if (!ctx.cr0.lt) goto loc_823707F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823707F0;
	sub_823380C8(ctx, base);
loc_823707F0:
	// stw r30,4028(r27)
	REX_STORE_U32(r27.u32 + 4028, r30.u32);
	// li r30,6
	r30.s64 = 6;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x82370868
	if (!ctx.cr6.lt) goto loc_82370868;
loc_82370810:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82370868
	if (ctx.cr6.eq) goto loc_82370868;
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
	// bge 0x82370858
	if (!ctx.cr0.lt) goto loc_82370858;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82370858;
	sub_823380C8(ctx, base);
loc_82370858:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82370810
	if (ctx.cr6.gt) goto loc_82370810;
loc_82370868:
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
	// bge 0x823708a0
	if (!ctx.cr0.lt) goto loc_823708A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823708A0;
	sub_823380C8(ctx, base);
loc_823708A0:
	// stw r30,4032(r27)
	REX_STORE_U32(r27.u32 + 4032, r30.u32);
	// b 0x823709d4
	goto loc_823709D4;
loc_823708A8:
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x82370908
	if (!ctx.cr6.lt) goto loc_82370908;
loc_823708B0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82370908
	if (ctx.cr6.eq) goto loc_82370908;
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
	// bge 0x823708f8
	if (!ctx.cr0.lt) goto loc_823708F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823708F8;
	sub_823380C8(ctx, base);
loc_823708F8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823708b0
	if (ctx.cr6.gt) goto loc_823708B0;
loc_82370908:
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
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// stw r6,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// rotlwi r3,r5,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8237093c
	if (!ctx.cr0.lt) goto loc_8237093C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8237093C;
	sub_823380C8(ctx, base);
loc_8237093C:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,6
	r30.s64 = 6;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x823709b0
	if (!ctx.cr6.lt) goto loc_823709B0;
loc_82370958:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823709b0
	if (ctx.cr6.eq) goto loc_823709B0;
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
	// bge 0x823709a0
	if (!ctx.cr0.lt) goto loc_823709A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823709A0;
	sub_823380C8(ctx, base);
loc_823709A0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82370958
	if (ctx.cr6.gt) goto loc_82370958;
loc_823709B0:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// bge 0x823709d4
	if (!ctx.cr0.lt) goto loc_823709D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823709D4;
	sub_823380C8(ctx, base);
loc_823709D4:
	// lwz r11,288(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82370a48
	if (!ctx.cr6.eq) goto loc_82370A48;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82341fd0
	ctx.lr = 0x823709EC;
	sub_82341FD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82371a54
	if (!ctx.cr6.eq) goto loc_82371A54;
	// lwz r11,14868(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 14868);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82370a48
	if (ctx.cr6.eq) goto loc_82370A48;
	// lwz r10,144(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 144);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// lwz r11,272(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 272);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82370a48
	if (!ctx.cr6.gt) goto loc_82370A48;
loc_82370A14:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r10,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82370a2c
	if (ctx.cr6.eq) goto loc_82370A2C;
	// rlwimi r10,r26,5,24,26
	ctx.r10.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 5) & 0xE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF1F);
	// b 0x82370a30
	goto loc_82370A30;
loc_82370A2C:
	// rlwinm r10,r10,0,27,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF1F;
loc_82370A30:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,144(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 144);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82370a14
	if (ctx.cr6.lt) goto loc_82370A14;
loc_82370A48:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82341fd0
	ctx.lr = 0x82370A54;
	sub_82341FD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82371a54
	if (!ctx.cr6.eq) goto loc_82371A54;
	// stw r26,452(r27)
	REX_STORE_U32(r27.u32 + 452, r26.u32);
	// li r30,2
	r30.s64 = 2;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82370ad4
	if (!ctx.cr6.lt) goto loc_82370AD4;
loc_82370A7C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82370ad4
	if (ctx.cr6.eq) goto loc_82370AD4;
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
	// bge 0x82370ac4
	if (!ctx.cr0.lt) goto loc_82370AC4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82370AC4;
	sub_823380C8(ctx, base);
loc_82370AC4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82370a7c
	if (ctx.cr6.gt) goto loc_82370A7C;
loc_82370AD4:
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
	// bge 0x82370b0c
	if (!ctx.cr0.lt) goto loc_82370B0C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82370B0C;
	sub_823380C8(ctx, base);
loc_82370B0C:
	// lwz r11,4016(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4016);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r30,5193
	ctx.r11.s64 = r30.s64 + 5193;
	// beq cr6,0x82370b20
	if (ctx.cr6.eq) goto loc_82370B20;
	// addi r11,r30,5209
	ctx.r11.s64 = r30.s64 + 5209;
loc_82370B20:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,2
	r30.s64 = 2;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwzx r9,r10,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	// stw r9,20768(r27)
	REX_STORE_U32(r27.u32 + 20768, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82370ba0
	if (!ctx.cr6.lt) goto loc_82370BA0;
loc_82370B48:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82370ba0
	if (ctx.cr6.eq) goto loc_82370BA0;
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
	// bge 0x82370b90
	if (!ctx.cr0.lt) goto loc_82370B90;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82370B90;
	sub_823380C8(ctx, base);
loc_82370B90:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82370b48
	if (ctx.cr6.gt) goto loc_82370B48;
loc_82370BA0:
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
	// bge 0x82370bd8
	if (!ctx.cr0.lt) goto loc_82370BD8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82370BD8;
	sub_823380C8(ctx, base);
loc_82370BD8:
	// addi r11,r30,600
	ctx.r11.s64 = r30.s64 + 600;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,3
	r30.s64 = 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwzx r9,r10,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	// stw r9,2380(r27)
	REX_STORE_U32(r27.u32 + 2380, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82370c5c
	if (!ctx.cr6.lt) goto loc_82370C5C;
loc_82370C04:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82370c5c
	if (ctx.cr6.eq) goto loc_82370C5C;
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
	// bge 0x82370c4c
	if (!ctx.cr0.lt) goto loc_82370C4C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82370C4C;
	sub_823380C8(ctx, base);
loc_82370C4C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82370c04
	if (ctx.cr6.gt) goto loc_82370C04;
loc_82370C5C:
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
	// bge 0x82370c94
	if (!ctx.cr0.lt) goto loc_82370C94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82370C94;
	sub_823380C8(ctx, base);
loc_82370C94:
	// addi r11,r30,5430
	ctx.r11.s64 = r30.s64 + 5430;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,2
	r30.s64 = 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwzx r9,r10,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	// stw r9,21712(r27)
	REX_STORE_U32(r27.u32 + 21712, ctx.r9.u32);
	// stw r9,21716(r27)
	REX_STORE_U32(r27.u32 + 21716, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82370d1c
	if (!ctx.cr6.lt) goto loc_82370D1C;
loc_82370CC4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82370d1c
	if (ctx.cr6.eq) goto loc_82370D1C;
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
	// bge 0x82370d0c
	if (!ctx.cr0.lt) goto loc_82370D0C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82370D0C;
	sub_823380C8(ctx, base);
loc_82370D0C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82370cc4
	if (ctx.cr6.gt) goto loc_82370CC4;
loc_82370D1C:
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
	// bge 0x82370d54
	if (!ctx.cr0.lt) goto loc_82370D54;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82370D54;
	sub_823380C8(ctx, base);
loc_82370D54:
	// addi r11,r30,5248
	ctx.r11.s64 = r30.s64 + 5248;
	// lwz r10,4016(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 4016);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwzx r8,r9,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + r27.u32);
	// stw r8,20988(r27)
	REX_STORE_U32(r27.u32 + 20988, ctx.r8.u32);
	// beq cr6,0x82370d7c
	if (ctx.cr6.eq) goto loc_82370D7C;
	// lwz r11,288(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82370e38
	if (!ctx.cr6.eq) goto loc_82370E38;
loc_82370D7C:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,2
	r30.s64 = 2;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82370df0
	if (!ctx.cr6.lt) goto loc_82370DF0;
loc_82370D98:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82370df0
	if (ctx.cr6.eq) goto loc_82370DF0;
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
	// bge 0x82370de0
	if (!ctx.cr0.lt) goto loc_82370DE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82370DE0;
	sub_823380C8(ctx, base);
loc_82370DE0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82370d98
	if (ctx.cr6.gt) goto loc_82370D98;
loc_82370DF0:
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
	// bge 0x82370e28
	if (!ctx.cr0.lt) goto loc_82370E28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82370E28;
	sub_823380C8(ctx, base);
loc_82370E28:
	// addi r11,r30,5243
	ctx.r11.s64 = r30.s64 + 5243;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	// stw r9,20968(r27)
	REX_STORE_U32(r27.u32 + 20968, ctx.r9.u32);
loc_82370E38:
	// lwz r11,4040(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4040);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82370e50
	if (ctx.cr6.eq) goto loc_82370E50;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82342b80
	ctx.lr = 0x82370E50;
	sub_82342B80(ctx, base);
loc_82370E50:
	// lwz r11,440(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 440);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82370fe0
	if (ctx.cr6.eq) goto loc_82370FE0;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82370ed0
	if (!ctx.cr6.lt) goto loc_82370ED0;
loc_82370E78:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82370ed0
	if (ctx.cr6.eq) goto loc_82370ED0;
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
	// bge 0x82370ec0
	if (!ctx.cr0.lt) goto loc_82370EC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82370EC0;
	sub_823380C8(ctx, base);
loc_82370EC0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82370e78
	if (ctx.cr6.gt) goto loc_82370E78;
loc_82370ED0:
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
	// bge 0x82370f08
	if (!ctx.cr0.lt) goto loc_82370F08;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82370F08;
	sub_823380C8(ctx, base);
loc_82370F08:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x82370fd8
	if (!ctx.cr6.eq) goto loc_82370FD8;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,2
	r30.s64 = 2;
	// stw r25,332(r27)
	REX_STORE_U32(r27.u32 + 332, r25.u32);
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82370f88
	if (!ctx.cr6.lt) goto loc_82370F88;
loc_82370F30:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82370f88
	if (ctx.cr6.eq) goto loc_82370F88;
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
	// bge 0x82370f78
	if (!ctx.cr0.lt) goto loc_82370F78;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82370F78;
	sub_823380C8(ctx, base);
loc_82370F78:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82370f30
	if (ctx.cr6.gt) goto loc_82370F30;
loc_82370F88:
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
	// bge 0x82370fc0
	if (!ctx.cr0.lt) goto loc_82370FC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82370FC0;
	sub_823380C8(ctx, base);
loc_82370FC0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-23696
	ctx.r9.s64 = ctx.r11.s64 + -23696;
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r8,340(r27)
	REX_STORE_U32(r27.u32 + 340, ctx.r8.u32);
	// b 0x82370fe4
	goto loc_82370FE4;
loc_82370FD8:
	// stw r26,332(r27)
	REX_STORE_U32(r27.u32 + 332, r26.u32);
	// b 0x82370fe4
	goto loc_82370FE4;
loc_82370FE0:
	// stw r25,332(r27)
	REX_STORE_U32(r27.u32 + 332, r25.u32);
loc_82370FE4:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82371a50
	if (!ctx.cr6.eq) goto loc_82371A50;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82371064
	if (!ctx.cr6.lt) goto loc_82371064;
loc_8237100C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82371064
	if (ctx.cr6.eq) goto loc_82371064;
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
	// bge 0x82371054
	if (!ctx.cr0.lt) goto loc_82371054;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82371054;
	sub_823380C8(ctx, base);
loc_82371054:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8237100c
	if (ctx.cr6.gt) goto loc_8237100C;
loc_82371064:
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
	// bge 0x8237109c
	if (!ctx.cr0.lt) goto loc_8237109C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8237109C;
	sub_823380C8(ctx, base);
loc_8237109C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r30,2964(r27)
	REX_STORE_U32(r27.u32 + 2964, r30.u32);
	// beq cr6,0x82371160
	if (ctx.cr6.eq) goto loc_82371160;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8237111c
	if (!ctx.cr6.lt) goto loc_8237111C;
loc_823710C4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237111c
	if (ctx.cr6.eq) goto loc_8237111C;
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
	// bge 0x8237110c
	if (!ctx.cr0.lt) goto loc_8237110C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8237110C;
	sub_823380C8(ctx, base);
loc_8237110C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823710c4
	if (ctx.cr6.gt) goto loc_823710C4;
loc_8237111C:
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
	// bge 0x82371154
	if (!ctx.cr0.lt) goto loc_82371154;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82371154;
	sub_823380C8(ctx, base);
loc_82371154:
	// lwz r11,2964(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 2964);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r11,2964(r27)
	REX_STORE_U32(r27.u32 + 2964, ctx.r11.u32);
loc_82371160:
	// lwz r11,2964(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 2964);
	// mr r30,r26
	r30.u64 = r26.u64;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r29,r25
	r29.u64 = r25.u64;
	// stw r11,2972(r27)
	REX_STORE_U32(r27.u32 + 2972, ctx.r11.u32);
	// stw r11,2968(r27)
	REX_STORE_U32(r27.u32 + 2968, ctx.r11.u32);
	// stw r11,2984(r27)
	REX_STORE_U32(r27.u32 + 2984, ctx.r11.u32);
	// stw r11,2976(r27)
	REX_STORE_U32(r27.u32 + 2976, ctx.r11.u32);
	// stw r11,2980(r27)
	REX_STORE_U32(r27.u32 + 2980, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x823711ec
	if (!ctx.cr6.lt) goto loc_823711EC;
loc_82371194:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823711ec
	if (ctx.cr6.eq) goto loc_823711EC;
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
	// bge 0x823711dc
	if (!ctx.cr0.lt) goto loc_823711DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823711DC;
	sub_823380C8(ctx, base);
loc_823711DC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82371194
	if (ctx.cr6.gt) goto loc_82371194;
loc_823711EC:
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
	// bge 0x82371224
	if (!ctx.cr0.lt) goto loc_82371224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82371224;
	sub_823380C8(ctx, base);
loc_82371224:
	// stw r30,2092(r27)
	REX_STORE_U32(r27.u32 + 2092, r30.u32);
	// b 0x82371a40
	goto loc_82371A40;
loc_8237122C:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82341fd0
	ctx.lr = 0x82371238;
	sub_82341FD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82371a54
	if (!ctx.cr6.eq) goto loc_82371A54;
	// lwz r11,20692(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20692);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82371290
	if (ctx.cr6.eq) goto loc_82371290;
	// lwz r11,144(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 144);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82371290
	if (!ctx.cr6.gt) goto loc_82371290;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_82371260:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x8237127c
	if (ctx.cr6.eq) goto loc_8237127C;
	// lwz r10,272(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 272);
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r7,r8,17,15,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0x10000) | (ctx.r7.u64 & 0xFFFFFFFFFFFEFFFF);
	// stwx r7,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
loc_8237127C:
	// lwz r10,144(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 144);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82371260
	if (ctx.cr6.lt) goto loc_82371260;
loc_82371290:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82341fd0
	ctx.lr = 0x8237129C;
	sub_82341FD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82371a54
	if (!ctx.cr6.eq) goto loc_82371A54;
	// lwz r11,20708(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20708);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823712f8
	if (ctx.cr6.eq) goto loc_823712F8;
	// lwz r11,144(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 144);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823712f8
	if (!ctx.cr6.gt) goto loc_823712F8;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_823712C4:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x823712e4
	if (ctx.cr6.eq) goto loc_823712E4;
	// lwz r10,272(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 272);
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r7,r8,4,28,28
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x8) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF7);
	// rlwinm r6,r7,0,28,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stwx r6,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
loc_823712E4:
	// lwz r10,144(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 144);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823712c4
	if (ctx.cr6.lt) goto loc_823712C4;
loc_823712F8:
	// lwz r11,3004(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 3004);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82371564
	if (ctx.cr6.eq) goto loc_82371564;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8237137c
	if (!ctx.cr6.lt) goto loc_8237137C;
loc_82371324:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237137c
	if (ctx.cr6.eq) goto loc_8237137C;
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
	// bge 0x8237136c
	if (!ctx.cr0.lt) goto loc_8237136C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8237136C;
	sub_823380C8(ctx, base);
loc_8237136C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82371324
	if (ctx.cr6.gt) goto loc_82371324;
loc_8237137C:
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
	// bge 0x823713b4
	if (!ctx.cr0.lt) goto loc_823713B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823713B4;
	sub_823380C8(ctx, base);
loc_823713B4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82371400
	if (!ctx.cr6.eq) goto loc_82371400;
	// lwz r11,144(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 144);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// stw r25,3004(r27)
	REX_STORE_U32(r27.u32 + 3004, r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823715e8
	if (!ctx.cr6.gt) goto loc_823715E8;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_823713D4:
	// lwz r9,272(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 272);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r7,r8,0,21,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r6,144(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 144);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x823713d4
	if (ctx.cr6.lt) goto loc_823713D4;
	// b 0x823715e8
	goto loc_823715E8;
loc_82371400:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82371474
	if (!ctx.cr6.lt) goto loc_82371474;
loc_8237141C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82371474
	if (ctx.cr6.eq) goto loc_82371474;
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
	// bge 0x82371464
	if (!ctx.cr0.lt) goto loc_82371464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82371464;
	sub_823380C8(ctx, base);
loc_82371464:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8237141c
	if (ctx.cr6.gt) goto loc_8237141C;
loc_82371474:
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
	// bge 0x823714ac
	if (!ctx.cr0.lt) goto loc_823714AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823714AC;
	sub_823380C8(ctx, base);
loc_823714AC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x823714fc
	if (!ctx.cr6.eq) goto loc_823714FC;
	// lwz r11,144(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 144);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// stw r26,3004(r27)
	REX_STORE_U32(r27.u32 + 3004, r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823715e8
	if (!ctx.cr6.gt) goto loc_823715E8;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_823714CC:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x823714e4
	if (ctx.cr6.eq) goto loc_823714E4;
	// lwz r10,272(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 272);
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// ori r7,r8,2048
	ctx.r7.u64 = ctx.r8.u64 | 2048;
	// stwx r7,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
loc_823714E4:
	// lwz r10,144(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 144);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823714cc
	if (ctx.cr6.lt) goto loc_823714CC;
	// b 0x823715e8
	goto loc_823715E8;
loc_823714FC:
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82341fd0
	ctx.lr = 0x82371508;
	sub_82341FD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82371a54
	if (!ctx.cr6.eq) goto loc_82371A54;
	// lwz r11,21644(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 21644);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823715e8
	if (ctx.cr6.eq) goto loc_823715E8;
	// lwz r11,144(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 144);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823715e8
	if (!ctx.cr6.gt) goto loc_823715E8;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_82371530:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x8237154c
	if (ctx.cr6.eq) goto loc_8237154C;
	// lwz r10,272(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 272);
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r7,r8,12,20,20
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0x800) | (ctx.r7.u64 & 0xFFFFFFFFFFFFF7FF);
	// stwx r7,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
loc_8237154C:
	// lwz r10,144(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 144);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82371530
	if (ctx.cr6.lt) goto loc_82371530;
	// b 0x823715e8
	goto loc_823715E8;
loc_82371564:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,144(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 144);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// beq cr6,0x823715b0
	if (ctx.cr6.eq) goto loc_823715B0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823715e8
	if (!ctx.cr6.gt) goto loc_823715E8;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_82371580:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x82371598
	if (ctx.cr6.eq) goto loc_82371598;
	// lwz r10,272(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 272);
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// ori r7,r8,2048
	ctx.r7.u64 = ctx.r8.u64 | 2048;
	// stwx r7,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
loc_82371598:
	// lwz r10,144(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 144);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82371580
	if (ctx.cr6.lt) goto loc_82371580;
	// b 0x823715e8
	goto loc_823715E8;
loc_823715B0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823715e8
	if (!ctx.cr6.gt) goto loc_823715E8;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_823715BC:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x823715d4
	if (ctx.cr6.eq) goto loc_823715D4;
	// lwz r10,272(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 272);
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r7,r8,0,21,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// stwx r7,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
loc_823715D4:
	// lwz r10,144(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 144);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823715bc
	if (ctx.cr6.lt) goto loc_823715BC;
loc_823715E8:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8237165c
	if (!ctx.cr6.lt) goto loc_8237165C;
loc_82371604:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237165c
	if (ctx.cr6.eq) goto loc_8237165C;
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
	// bge 0x8237164c
	if (!ctx.cr0.lt) goto loc_8237164C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8237164C;
	sub_823380C8(ctx, base);
loc_8237164C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82371604
	if (ctx.cr6.gt) goto loc_82371604;
loc_8237165C:
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
	// bge 0x82371694
	if (!ctx.cr0.lt) goto loc_82371694;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82371694;
	sub_823380C8(ctx, base);
loc_82371694:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r30,2964(r27)
	REX_STORE_U32(r27.u32 + 2964, r30.u32);
	// beq cr6,0x82371758
	if (ctx.cr6.eq) goto loc_82371758;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82371714
	if (!ctx.cr6.lt) goto loc_82371714;
loc_823716BC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82371714
	if (ctx.cr6.eq) goto loc_82371714;
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
	// bge 0x82371704
	if (!ctx.cr0.lt) goto loc_82371704;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82371704;
	sub_823380C8(ctx, base);
loc_82371704:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823716bc
	if (ctx.cr6.gt) goto loc_823716BC;
loc_82371714:
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
	// bge 0x8237174c
	if (!ctx.cr0.lt) goto loc_8237174C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8237174C;
	sub_823380C8(ctx, base);
loc_8237174C:
	// lwz r11,2964(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 2964);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r11,2964(r27)
	REX_STORE_U32(r27.u32 + 2964, ctx.r11.u32);
loc_82371758:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x823717cc
	if (!ctx.cr6.lt) goto loc_823717CC;
loc_82371774:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823717cc
	if (ctx.cr6.eq) goto loc_823717CC;
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
	// bge 0x823717bc
	if (!ctx.cr0.lt) goto loc_823717BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823717BC;
	sub_823380C8(ctx, base);
loc_823717BC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82371774
	if (ctx.cr6.gt) goto loc_82371774;
loc_823717CC:
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
	// bge 0x82371804
	if (!ctx.cr0.lt) goto loc_82371804;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82371804;
	sub_823380C8(ctx, base);
loc_82371804:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r30,2976(r27)
	REX_STORE_U32(r27.u32 + 2976, r30.u32);
	// beq cr6,0x823718c8
	if (ctx.cr6.eq) goto loc_823718C8;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82371884
	if (!ctx.cr6.lt) goto loc_82371884;
loc_8237182C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82371884
	if (ctx.cr6.eq) goto loc_82371884;
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
	// bge 0x82371874
	if (!ctx.cr0.lt) goto loc_82371874;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82371874;
	sub_823380C8(ctx, base);
loc_82371874:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8237182c
	if (ctx.cr6.gt) goto loc_8237182C;
loc_82371884:
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
	// bge 0x823718bc
	if (!ctx.cr0.lt) goto loc_823718BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823718BC;
	sub_823380C8(ctx, base);
loc_823718BC:
	// lwz r11,2976(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 2976);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r11,2976(r27)
	REX_STORE_U32(r27.u32 + 2976, ctx.r11.u32);
loc_823718C8:
	// lwz r11,2976(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 2976);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// stw r11,2980(r27)
	REX_STORE_U32(r27.u32 + 2980, ctx.r11.u32);
	// stw r11,2984(r27)
	REX_STORE_U32(r27.u32 + 2984, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x82371990
	if (ctx.cr6.eq) goto loc_82371990;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82371950
	if (!ctx.cr6.lt) goto loc_82371950;
loc_823718F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82371950
	if (ctx.cr6.eq) goto loc_82371950;
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
	// bge 0x82371940
	if (!ctx.cr0.lt) goto loc_82371940;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82371940;
	sub_823380C8(ctx, base);
loc_82371940:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823718f8
	if (ctx.cr6.gt) goto loc_823718F8;
loc_82371950:
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
	// bge 0x82371988
	if (!ctx.cr0.lt) goto loc_82371988;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82371988;
	sub_823380C8(ctx, base);
loc_82371988:
	// stw r30,2092(r27)
	REX_STORE_U32(r27.u32 + 2092, r30.u32);
	// b 0x82371a14
	goto loc_82371A14;
loc_82371990:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x823719f0
	if (!ctx.cr6.lt) goto loc_823719F0;
loc_82371998:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823719f0
	if (ctx.cr6.eq) goto loc_823719F0;
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
	// bge 0x823719e0
	if (!ctx.cr0.lt) goto loc_823719E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823719E0;
	sub_823380C8(ctx, base);
loc_823719E0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82371998
	if (ctx.cr6.gt) goto loc_82371998;
loc_823719F0:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// bge 0x82371a14
	if (!ctx.cr0.lt) goto loc_82371A14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82371A14;
	sub_823380C8(ctx, base);
loc_82371A14:
	// lwz r11,4040(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4040);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82371a30
	if (ctx.cr6.eq) goto loc_82371A30;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82342b80
	ctx.lr = 0x82371A2C;
	sub_82342B80(ctx, base);
	// b 0x82371a34
	goto loc_82371A34;
loc_82371A30:
	// bl 0x82387658
	ctx.lr = 0x82371A34;
	sub_82387658(ctx, base);
loc_82371A34:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x82371a40
	if (ctx.cr6.eq) goto loc_82371A40;
	// stw r25,22232(r27)
	REX_STORE_U32(r27.u32 + 22232, r25.u32);
loc_82371A40:
	// lwz r11,84(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8236f334
	if (ctx.cr6.eq) goto loc_8236F334;
loc_82371A50:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82371A54:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8241A2E0) {
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
	// bge cr6,0x8241a3a4
	if (!ctx.cr6.lt) goto loc_8241A3A4;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f0,-13044(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -13044);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
loc_8241A344:
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lbzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,8(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x8241a344
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241A344;
loc_8241A3A4:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241a3c0
	if (ctx.cr6.eq) goto loc_8241A3C0;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82413d40
	ctx.lr = 0x8241A3C0;
	sub_82413D40(ctx, base);
loc_8241A3C0:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241a3dc
	if (ctx.cr6.eq) goto loc_8241A3DC;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82414110
	ctx.lr = 0x8241A3DC;
	sub_82414110(ctx, base);
loc_8241A3DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8241B848) {
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
	// bge cr6,0x8241b92c
	if (!ctx.cr6.lt) goto loc_8241B92C;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// li r5,-32768
	ctx.r5.s64 = -32768;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f0,23268(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 23268);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
loc_8241B8B0:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stfs f13,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// subf r7,r5,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r5.u64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x8241b8b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8241B8B0;
loc_8241B92C:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241b948
	if (ctx.cr6.eq) goto loc_8241B948;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82413d40
	ctx.lr = 0x8241B948;
	sub_82413D40(ctx, base);
loc_8241B948:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241b964
	if (ctx.cr6.eq) goto loc_8241B964;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82414110
	ctx.lr = 0x8241B964;
	sub_82414110(ctx, base);
loc_8241B964:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8241F860) {
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
	ctx.lr = 0x8241F868;
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
	// bne cr6,0x8241f8a8
	if (!ctx.cr6.eq) goto loc_8241F8A8;
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
	// li r7,1777
	ctx.r7.s64 = 1777;
	// bl 0x8240e308
	ctx.lr = 0x8241F8A8;
	sub_8240E308(ctx, base);
loc_8241F8A8:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8240e880
	ctx.lr = 0x8241F8B8;
	sub_8240E880(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x8241f920
	if (!ctx.cr6.eq) goto loc_8241F920;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8241f8dc
	if (ctx.cr6.eq) goto loc_8241F8DC;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8240e930
	ctx.lr = 0x8241F8DC;
	sub_8240E930(ctx, base);
loc_8241F8DC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8241f918
	if (ctx.cr6.eq) goto loc_8241F918;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8241f918
	if (ctx.cr6.eq) goto loc_8241F918;
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
	// li r6,35
	ctx.r6.s64 = 35;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,140(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// bctrl 
	ctx.lr = 0x8241F918;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8241F918:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8241f97c
	goto loc_8241F97C;
loc_8241F920:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8241f93c
	if (ctx.cr6.eq) goto loc_8241F93C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8240e930
	ctx.lr = 0x8241F93C;
	sub_8240E930(ctx, base);
loc_8241F93C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8241f978
	if (ctx.cr6.eq) goto loc_8241F978;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8241f978
	if (ctx.cr6.eq) goto loc_8241F978;
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
	// li r6,35
	ctx.r6.s64 = 35;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,140(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// bctrl 
	ctx.lr = 0x8241F978;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8241F978:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241F97C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_824218B8) {
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
	ctx.lr = 0x824218C0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82421900
	if (!ctx.cr6.eq) goto loc_82421900;
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
	// li r7,4098
	ctx.r7.s64 = 4098;
	// bl 0x8240e308
	ctx.lr = 0x82421900;
	sub_8240E308(ctx, base);
loc_82421900:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,86
	ctx.r4.s64 = 86;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82412c68
	ctx.lr = 0x82421910;
	sub_82412C68(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82421958
	if (ctx.cr6.eq) goto loc_82421958;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82421958
	if (ctx.cr6.eq) goto loc_82421958;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8241e418
	ctx.lr = 0x8242192C;
	sub_8241E418(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// addi r11,r11,11440
	ctx.r11.s64 = ctx.r11.s64 + 11440;
	// addi r4,r10,-18724
	ctx.r4.s64 = ctx.r10.s64 + -18724;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,51
	ctx.r6.s64 = 51;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,204(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// bctrl 
	ctx.lr = 0x82421958;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82421958:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82426648) {
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
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82425928
	ctx.lr = 0x8242666C;
	sub_82425928(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82426688
	if (ctx.cr0.lt) goto loc_82426688;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82425b70
	ctx.lr = 0x82426680;
	sub_82425B70(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_82426688:
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

DEFINE_REX_FUNC(sub_824277F8) {
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
	// bl 0x82427100
	ctx.lr = 0x82427810;
	sub_82427100(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-5836
	ctx.r11.s64 = ctx.r11.s64 + -5836;
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_82428468) {
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
	// bl 0x82427608
	ctx.lr = 0x82428488;
	sub_82427608(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824284a4
	if (ctx.cr0.eq) goto loc_824284A4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824284a4
	if (ctx.cr6.eq) goto loc_824284A4;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -4);
	// bl 0x82412de0
	ctx.lr = 0x824284A4;
	sub_82412DE0(ctx, base);
loc_824284A4:
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

DEFINE_REX_FUNC(sub_82428F48) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-2696
	ctx.r3.s64 = ctx.r11.s64 + -2696;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82429000) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// blt cr6,0x82429034
	if (ctx.cr6.lt) goto loc_82429034;
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// bgt cr6,0x82429034
	if (ctx.cr6.gt) goto loc_82429034;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-17176
	ctx.r6.s64 = ctx.r11.s64 + -17176;
	// addi r5,r10,8424
	ctx.r5.s64 = ctx.r10.s64 + 8424;
	// addi r4,r9,16880
	ctx.r4.s64 = ctx.r9.s64 + 16880;
	// li r7,1712
	ctx.r7.s64 = 1712;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8240e308
	sub_8240E308(ctx, base);
	return;
loc_82429034:
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stbx r6,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82429A48) {
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
	// bl 0x82412d18
	ctx.lr = 0x82429A70;
	sub_82412D18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// beq 0x82429a9c
	if (ctx.cr0.eq) goto loc_82429A9C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,145
	ctx.r4.s64 = 145;
	// bl 0x82428f58
	ctx.lr = 0x82429A8C;
	sub_82428F58(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-2576
	ctx.r11.s64 = ctx.r11.s64 + -2576;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82429aa0
	goto loc_82429AA0;
loc_82429A9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82429AA0:
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

DEFINE_REX_FUNC(sub_8242BD20) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8242BD28;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// li r3,4
	ctx.r3.s64 = 4;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x823cd118
	ctx.lr = 0x8242BD44;
	sub_823CD118(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8242bd5c
	if (!ctx.cr0.eq) goto loc_8242BD5C;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x8242bde8
	goto loc_8242BDE8;
loc_8242BD5C:
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x823cd118
	ctx.lr = 0x8242BD68;
	sub_823CD118(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8242bd8c
	if (!ctx.cr6.eq) goto loc_8242BD8C;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x8242bdd4
	goto loc_8242BDD4;
loc_8242BD8C:
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8242bc08
	ctx.lr = 0x8242BDA0;
	sub_8242BC08(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8242bdbc
	if (ctx.cr0.lt) goto loc_8242BDBC;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// b 0x8242bdcc
	goto loc_8242BDCC;
loc_8242BDBC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823cd250
	ctx.lr = 0x8242BDCC;
	sub_823CD250(ctx, base);
loc_8242BDCC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge cr6,0x8242bdf8
	if (!ctx.cr6.lt) goto loc_8242BDF8;
loc_8242BDD4:
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x823cd250
	ctx.lr = 0x8242BDE0;
	sub_823CD250(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge cr6,0x8242bdf8
	if (!ctx.cr6.lt) goto loc_8242BDF8;
loc_8242BDE8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_8242BDF8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8242EC38) {
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
	ctx.lr = 0x8242EC40;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r11,r11,9712
	ctx.r11.s64 = ctx.r11.s64 + 9712;
	// addi r10,r10,9692
	ctx.r10.s64 = ctx.r10.s64 + 9692;
	// addi r9,r9,9676
	ctx.r9.s64 = ctx.r9.s64 + 9676;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r24,r3,44
	r24.s64 = ctx.r3.s64 + 44;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242EC84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242c6e0
	ctx.lr = 0x8242EC8C;
	sub_8242C6E0(ctx, base);
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242ee7c
	if (ctx.cr6.eq) goto loc_8242EE7C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242cb40
	ctx.lr = 0x8242ECA8;
	sub_8242CB40(ctx, base);
	// lwz r3,156(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242ecbc
	if (ctx.cr6.eq) goto loc_8242ECBC;
	// bl 0x82473600
	ctx.lr = 0x8242ECB8;
	sub_82473600(ctx, base);
	// stw r25,156(r31)
	REX_STORE_U32(r31.u32 + 156, r25.u32);
loc_8242ECBC:
	// lwz r11,496(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 496);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8242ecf8
	if (ctx.cr6.eq) goto loc_8242ECF8;
	// addi r30,r31,492
	r30.s64 = r31.s64 + 492;
	// b 0x8242ece0
	goto loc_8242ECE0;
loc_8242ECD0:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242ece4
	if (ctx.cr6.eq) goto loc_8242ECE4;
	// bl 0x82473600
	ctx.lr = 0x8242ECE0;
	sub_82473600(ctx, base);
loc_8242ECE0:
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
loc_8242ECE4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8242bbb8
	ctx.lr = 0x8242ECF0;
	sub_8242BBB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8242ecd0
	if (!ctx.cr0.eq) goto loc_8242ECD0;
loc_8242ECF8:
	// lwz r10,524(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 524);
	// addi r11,r31,500
	ctx.r11.s64 = r31.s64 + 500;
	// b 0x8242ed20
	goto loc_8242ED20;
loc_8242ED04:
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
loc_8242ED20:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8242ed04
	if (!ctx.cr6.eq) goto loc_8242ED04;
	// stw r25,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, r25.u32);
	// stw r25,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r25.u32);
	// lwz r11,404(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 404);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242ed88
	if (ctx.cr6.eq) goto loc_8242ED88;
	// addi r28,r31,192
	r28.s64 = r31.s64 + 192;
	// b 0x8242ed78
	goto loc_8242ED78;
loc_8242ED44:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242ED5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242ED74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82473600
	ctx.lr = 0x8242ED78;
	sub_82473600(ctx, base);
loc_8242ED78:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8242d2c8
	ctx.lr = 0x8242ED80;
	sub_8242D2C8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8242ed44
	if (!ctx.cr0.eq) goto loc_8242ED44;
loc_8242ED88:
	// addi r26,r31,452
	r26.s64 = r31.s64 + 452;
	// b 0x8242ee04
	goto loc_8242EE04;
loc_8242ED90:
	// lwz r4,44(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 44);
	// lwz r3,16044(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16044);
	// bl 0x8247c0e8
	ctx.lr = 0x8242ED9C;
	sub_8247C0E8(ctx, base);
	// lwz r3,16044(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16044);
	// lwz r4,48(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 48);
	// bl 0x8247c0e8
	ctx.lr = 0x8242EDA8;
	sub_8247C0E8(ctx, base);
	// addi r28,r30,4
	r28.s64 = r30.s64 + 4;
	// b 0x8242ede4
	goto loc_8242EDE4;
loc_8242EDB0:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r27,r29,4
	r27.s64 = r29.s64 + 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242EDC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242EDE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82473600
	ctx.lr = 0x8242EDE4;
	sub_82473600(ctx, base);
loc_8242EDE4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824344e8
	ctx.lr = 0x8242EDEC;
	sub_824344E8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8242edb0
	if (!ctx.cr0.eq) goto loc_8242EDB0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8242d868
	ctx.lr = 0x8242EDFC;
	sub_8242D868(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82473600
	ctx.lr = 0x8242EE04;
	sub_82473600(ctx, base);
loc_8242EE04:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824344e8
	ctx.lr = 0x8242EE0C;
	sub_824344E8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8242ed90
	if (!ctx.cr0.eq) goto loc_8242ED90;
	// lwz r11,444(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 444);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242ee6c
	if (ctx.cr6.eq) goto loc_8242EE6C;
	// addi r28,r31,412
	r28.s64 = r31.s64 + 412;
	// b 0x8242ee5c
	goto loc_8242EE5C;
loc_8242EE28:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242EE40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242EE58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82473600
	ctx.lr = 0x8242EE5C;
	sub_82473600(ctx, base);
loc_8242EE5C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824344e8
	ctx.lr = 0x8242EE64;
	sub_824344E8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8242ee28
	if (!ctx.cr0.eq) goto loc_8242EE28;
loc_8242EE6C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242c890
	ctx.lr = 0x8242EE74;
	sub_8242C890(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242c7f0
	ctx.lr = 0x8242EE7C;
	sub_8242C7F0(ctx, base);
loc_8242EE7C:
	// stw r25,0(r31)
	REX_STORE_U32(r31.u32 + 0, r25.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242EE94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,16052
	ctx.r3.s64 = r31.s64 + 16052;
	// bl 0x8242e970
	ctx.lr = 0x8242EE9C;
	sub_8242E970(ctx, base);
	// addi r3,r31,16044
	ctx.r3.s64 = r31.s64 + 16044;
	// bl 0x82434c78
	ctx.lr = 0x8242EEA4;
	sub_82434C78(ctx, base);
	// addi r3,r31,604
	ctx.r3.s64 = r31.s64 + 604;
	// bl 0x8242e690
	ctx.lr = 0x8242EEAC;
	sub_8242E690(ctx, base);
	// addi r3,r31,548
	ctx.r3.s64 = r31.s64 + 548;
	// bl 0x8242d868
	ctx.lr = 0x8242EEB4;
	sub_8242D868(ctx, base);
	// addi r3,r31,500
	ctx.r3.s64 = r31.s64 + 500;
	// bl 0x8242d868
	ctx.lr = 0x8242EEBC;
	sub_8242D868(ctx, base);
	// addi r3,r31,492
	ctx.r3.s64 = r31.s64 + 492;
	// bl 0x82434c78
	ctx.lr = 0x8242EEC4;
	sub_82434C78(ctx, base);
	// addi r3,r31,452
	ctx.r3.s64 = r31.s64 + 452;
	// bl 0x8242d868
	ctx.lr = 0x8242EECC;
	sub_8242D868(ctx, base);
	// addi r3,r31,412
	ctx.r3.s64 = r31.s64 + 412;
	// bl 0x8242d868
	ctx.lr = 0x8242EED4;
	sub_8242D868(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x8242d988
	ctx.lr = 0x8242EEDC;
	sub_8242D988(ctx, base);
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// bl 0x8242c4b8
	ctx.lr = 0x8242EEE4;
	sub_8242C4B8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8242c4b8
	ctx.lr = 0x8242EEEC;
	sub_8242C4B8(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8242c4b8
	ctx.lr = 0x8242EEF4;
	sub_8242C4B8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,9644
	ctx.r11.s64 = ctx.r11.s64 + 9644;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82439B08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82439B10;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82439c7c
	if (ctx.cr6.eq) goto loc_82439C7C;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// lwz r10,528(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 528);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// divwu r28,r5,r11
	r28.u64 = uint32_t(ctx.r11.u32 ? ctx.r5.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82439b4c
	if (!ctx.cr6.gt) goto loc_82439B4C;
	// lwz r4,252(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// bl 0x824387c0
	ctx.lr = 0x82439B44;
	sub_824387C0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt 0x82439c8c
	if (ctx.cr0.lt) goto loc_82439C8C;
loc_82439B4C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,516(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 516);
	// bl 0x8243b940
	ctx.lr = 0x82439B58;
	sub_8243B940(ctx, base);
	// lwz r11,492(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 492);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,1
	r29.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82439b94
	if (!ctx.cr6.gt) goto loc_82439B94;
loc_82439B6C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,516(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 516);
	// bl 0x8243b940
	ctx.lr = 0x82439B78;
	sub_8243B940(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82439b84
	if (ctx.cr6.lt) goto loc_82439B84;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82439B84:
	// lwz r11,492(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 492);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82439b6c
	if (ctx.cr6.lt) goto loc_82439B6C;
loc_82439B94:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// blt cr6,0x82439ba0
	if (ctx.cr6.lt) goto loc_82439BA0;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_82439BA0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82439c7c
	if (ctx.cr6.eq) goto loc_82439C7C;
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r28,0
	r28.s64 = 0;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bgt cr6,0x82439c14
	if (ctx.cr6.gt) goto loc_82439C14;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,516(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 516);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8243b9c0
	ctx.lr = 0x82439BD0;
	sub_8243B9C0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// beq cr6,0x82439c60
	if (ctx.cr6.eq) goto loc_82439C60;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82438410
	ctx.lr = 0x82439BF4;
	sub_82438410(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// subf r4,r29,r30
	ctx.r4.u64 = r30.u64 - r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82438410
	ctx.lr = 0x82439C0C;
	sub_82438410(ctx, base);
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// b 0x82439c60
	goto loc_82439C60;
loc_82439C14:
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82439c6c
	if (ctx.cr6.eq) goto loc_82439C6C;
loc_82439C20:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82438308
	ctx.lr = 0x82439C34;
	sub_82438308(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// beq cr6,0x82439c50
	if (ctx.cr6.eq) goto loc_82439C50;
	// subf r5,r3,r30
	ctx.r5.u64 = r30.u64 - ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82438308
	ctx.lr = 0x82439C50;
	sub_82438308(ctx, base);
loc_82439C50:
	// lwz r11,492(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 492);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82439c20
	if (ctx.cr6.lt) goto loc_82439C20;
loc_82439C60:
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82439c70
	if (!ctx.cr6.eq) goto loc_82439C70;
loc_82439C6C:
	// lwz r5,524(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 524);
loc_82439C70:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82438c68
	ctx.lr = 0x82439C7C;
	sub_82438C68(ctx, base);
loc_82439C7C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824399f8
	ctx.lr = 0x82439C84;
	sub_824399F8(ctx, base);
loc_82439C84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_82439C8C:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82439CA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82439c84
	goto loc_82439C84;
}

DEFINE_REX_FUNC(sub_8243FD60) {
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
	// bl 0x8243f5e8
	ctx.lr = 0x8243FD80;
	sub_8243F5E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8243fd90
	if (ctx.cr0.eq) goto loc_8243FD90;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x8243FD90;
	sub_82473600(ctx, base);
loc_8243FD90:
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

DEFINE_REX_FUNC(sub_82440FD0) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82440FF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82441014
	if (ctx.cr0.lt) goto loc_82441014;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82441014;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82441014:
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

DEFINE_REX_FUNC(sub_82441BF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82441C00;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r30,r4,31
	r30.u64 = ctx.r4.u32 & 0x1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8245d380
	ctx.lr = 0x82441C18;
	sub_8245D380(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r29,r31,28
	r29.s64 = r31.s64 + 28;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82441C30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,76(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 76);
	// bl 0x8245fec0
	ctx.lr = 0x82441C38;
	sub_8245FEC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82441c60
	if (ctx.cr0.lt) goto loc_82441C60;
	// cntlzw r11,r30
	ctx.r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82441598
	ctx.lr = 0x82441C58;
	sub_82441598(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82441cc8
	if (!ctx.cr0.lt) goto loc_82441CC8;
loc_82441C60:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r31,64
	ctx.r8.s64 = r31.s64 + 64;
loc_82441C68:
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
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82441c8c
	if (!ctx.cr6.eq) goto loc_82441C8C;
	// stwcx. r3,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r3.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82441c68
	if (!ctx.cr0.eq) goto loc_82441C68;
	// b 0x82441c94
	goto loc_82441C94;
loc_82441C8C:
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
loc_82441C94:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82441cc8
	if (ctx.cr6.lt) goto loc_82441CC8;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82441cc8
	if (ctx.cr6.eq) goto loc_82441CC8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82441CC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82441CC8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82441CDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_824472E8) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e60
	ctx.lr = 0x824472F0;
	// stfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -144, f29.u64);
	// stfd f30,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, f30.u64);
	// stfd f31,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r25,0
	r25.s64 = 0;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r25
	r26.u64 = r25.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82447a44
	if (ctx.cr6.eq) goto loc_82447A44;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r21,1
	r21.s64 = 1;
	// li r22,4
	r22.s64 = 4;
	// li r19,2
	r19.s64 = 2;
	// lfs f30,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f30.f64 = double(temp.f32);
	// li r24,6
	r24.s64 = 6;
	// lfs f29,2008(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2008);
	f29.f64 = double(temp.f32);
	// li r18,5
	r18.s64 = 5;
	// li r20,8
	r20.s64 = 8;
	// li r23,-1
	r23.s64 = -1;
loc_82447348:
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 36);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x82447a38
	if (ctx.cr6.gt) goto loc_82447A38;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82447400
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82447400;
	// bdzf 4*cr6+eq,0x82447428
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82447428;
	// bdzf 4*cr6+eq,0x82447a38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82447A38;
	// bdzf 4*cr6+eq,0x824474dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_824474DC;
	// bne cr6,0x824475a0
	if (!ctx.cr6.eq) goto loc_824475A0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82467730
	ctx.lr = 0x82447378;
	sub_82467730(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82447a44
	if (ctx.cr6.lt) goto loc_82447A44;
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bne cr6,0x824473d8
	if (!ctx.cr6.eq) goto loc_824473D8;
	// stw r21,36(r28)
	REX_STORE_U32(r28.u32 + 36, r21.u32);
	// sth r25,202(r11)
	REX_STORE_U16(ctx.r11.u32 + 202, r25.u16);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// sth r25,150(r28)
	REX_STORE_U16(r28.u32 + 150, r25.u16);
	// lwz r9,60(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bgt cr6,0x824473b8
	if (ctx.cr6.gt) goto loc_824473B8;
	// stw r25,56(r28)
	REX_STORE_U32(r28.u32 + 56, r25.u32);
	// b 0x82447a38
	goto loc_82447A38;
loc_824473B8:
	// lwz r11,512(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 512);
	// stw r22,56(r28)
	REX_STORE_U32(r28.u32 + 56, r22.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82447a38
	if (ctx.cr6.eq) goto loc_82447A38;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824473D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82447a38
	goto loc_82447A38;
loc_824473D8:
	// stw r19,36(r28)
	REX_STORE_U32(r28.u32 + 36, r19.u32);
	// sth r25,150(r28)
	REX_STORE_U16(r28.u32 + 150, r25.u16);
	// stb r25,145(r28)
	REX_STORE_U8(r28.u32 + 145, r25.u8);
	// stw r24,72(r28)
	REX_STORE_U32(r28.u32 + 72, r24.u32);
	// sth r25,148(r28)
	REX_STORE_U16(r28.u32 + 148, r25.u16);
	// sth r25,202(r11)
	REX_STORE_U16(ctx.r11.u32 + 202, r25.u16);
	// stw r25,76(r28)
	REX_STORE_U32(r28.u32 + 76, r25.u32);
	// stw r25,200(r28)
	REX_STORE_U32(r28.u32 + 200, r25.u32);
	// stw r25,208(r28)
	REX_STORE_U32(r28.u32 + 208, r25.u32);
	// b 0x82447a38
	goto loc_82447A38;
loc_82447400:
	// lwz r11,508(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 508);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,320(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 320);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82447414;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82447a44
	if (ctx.cr6.lt) goto loc_82447A44;
	// stw r18,36(r28)
	REX_STORE_U32(r28.u32 + 36, r18.u32);
	// b 0x82447a38
	goto loc_82447A38;
loc_82447428:
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// lhz r10,150(r28)
	ctx.r10.u64 = REX_LOAD_U16(r28.u32 + 150);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x824474d4
	if (!ctx.cr6.lt) goto loc_824474D4;
loc_82447440:
	// lhz r11,150(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 150);
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
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,40(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82447488
	if (ctx.cr6.eq) goto loc_82447488;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x82469360
	ctx.lr = 0x8244747C;
	sub_82469360(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82447a44
	if (ctx.cr6.lt) goto loc_82447A44;
loc_82447488:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stb r25,145(r28)
	REX_STORE_U8(r28.u32 + 145, r25.u8);
	// stw r24,72(r28)
	REX_STORE_U32(r28.u32 + 72, r24.u32);
	// sth r25,148(r28)
	REX_STORE_U16(r28.u32 + 148, r25.u16);
	// sth r25,202(r11)
	REX_STORE_U16(ctx.r11.u32 + 202, r25.u16);
	// stw r25,76(r28)
	REX_STORE_U32(r28.u32 + 76, r25.u32);
	// stw r25,200(r28)
	REX_STORE_U32(r28.u32 + 200, r25.u32);
	// stw r25,208(r28)
	REX_STORE_U32(r28.u32 + 208, r25.u32);
	// lhz r10,150(r28)
	ctx.r10.u64 = REX_LOAD_U16(r28.u32 + 150);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r8,150(r28)
	REX_STORE_U16(r28.u32 + 150, ctx.r8.u16);
	// lhz r7,580(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82447440
	if (ctx.cr6.lt) goto loc_82447440;
loc_824474D4:
	// stw r22,36(r28)
	REX_STORE_U32(r28.u32 + 36, r22.u32);
	// b 0x82447a38
	goto loc_82447A38;
loc_824474DC:
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82447a34
	if (!ctx.cr6.gt) goto loc_82447A34;
	// mr r29,r25
	r29.u64 = r25.u64;
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_824474F4:
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
	// beq cr6,0x82447560
	if (ctx.cr6.eq) goto loc_82447560;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82469888
	ctx.lr = 0x82447528;
	sub_82469888(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82447a44
	if (ctx.cr6.lt) goto loc_82447A44;
	// stw r25,48(r30)
	REX_STORE_U32(r30.u32 + 48, r25.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8244757c
	if (!ctx.cr6.eq) goto loc_8244757C;
	// lhz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 120);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,56(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 56);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x82315a58
	ctx.lr = 0x8244755C;
	sub_82315A58(ctx, base);
	// b 0x8244757c
	goto loc_8244757C;
loc_82447560:
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
	ctx.lr = 0x82447578;
	sub_822D5870(ctx, base);
	// stw r25,48(r30)
	REX_STORE_U32(r30.u32 + 48, r25.u32);
loc_8244757C:
	// lhz r10,580(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 580);
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x824474f4
	if (ctx.cr6.lt) goto loc_824474F4;
	// b 0x82447a34
	goto loc_82447A34;
loc_824475A0:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82447610
	if (!ctx.cr6.eq) goto loc_82447610;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82447610
	if (ctx.cr6.eq) goto loc_82447610;
	// mr r30,r25
	r30.u64 = r25.u64;
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_824475C0:
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
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,40(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x824475f4
	if (ctx.cr6.eq) goto loc_824475F4;
	// lwz r6,72(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r4,36(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 36);
	// lwz r3,0(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82315a58
	ctx.lr = 0x824475F4;
	sub_82315A58(ctx, base);
loc_824475F4:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x824475c0
	if (ctx.cr6.lt) goto loc_824475C0;
loc_82447610:
	// lwz r3,296(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 296);
	// bl 0x82466cd0
	ctx.lr = 0x82447618;
	sub_82466CD0(ctx, base);
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824476ec
	if (ctx.cr6.eq) goto loc_824476EC;
	// mr r30,r25
	r30.u64 = r25.u64;
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_82447630:
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
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,40(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82447678
	if (ctx.cr6.eq) goto loc_82447678;
	// lwz r11,476(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 476);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,52(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82447668;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82447a44
	if (ctx.cr6.lt) goto loc_82447A44;
	// b 0x824476d0
	goto loc_824476D0;
loc_82447678:
	// lwz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8244769c
	if (ctx.cr6.eq) goto loc_8244769C;
	// lwz r11,456(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 456);
	// lhz r10,118(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 118);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// sraw r11,r8,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r11.s64 = ctx.r8.s32 >> temp.u32;
	// b 0x824476c0
	goto loc_824476C0;
loc_8244769C:
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r11,118(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 118);
	// beq cr6,0x824476bc
	if (ctx.cr6.eq) goto loc_824476BC;
	// lwz r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 456);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// slw r11,r9,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// b 0x824476c0
	goto loc_824476C0;
loc_824476BC:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_824476C0:
	// lwz r3,56(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x824476D0;
	sub_822D5870(ctx, base);
loc_824476D0:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x82447630
	if (ctx.cr6.lt) goto loc_82447630;
loc_824476EC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82447218
	ctx.lr = 0x824476F4;
	sub_82447218(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82447a44
	if (ctx.cr6.lt) goto loc_82447A44;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231ae30
	ctx.lr = 0x8244770C;
	sub_8231AE30(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231ae30
	ctx.lr = 0x82447718;
	sub_8231AE30(ctx, base);
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// mr r27,r21
	r27.u64 = r21.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82447780
	if (!ctx.cr6.gt) goto loc_82447780;
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// lwz r8,320(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 320);
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_8244773C:
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
	// bne cr6,0x8244777c
	if (!ctx.cr6.eq) goto loc_8244777C;
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
	// blt cr6,0x8244773c
	if (ctx.cr6.lt) goto loc_8244773C;
	// b 0x82447780
	goto loc_82447780;
loc_8244777C:
	// mr r27,r25
	r27.u64 = r25.u64;
loc_82447780:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8244783c
	if (!ctx.cr6.gt) goto loc_8244783C;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x8244783c
	if (!ctx.cr6.eq) goto loc_8244783C;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244783c
	if (ctx.cr6.eq) goto loc_8244783C;
	// mr r29,r25
	r29.u64 = r25.u64;
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_824477A8:
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// lhz r8,108(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 108);
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lhzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mulli r10,r5,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1776));
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x824477f8
	if (!ctx.cr6.eq) goto loc_824477F8;
	// lhz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 120);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,312(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 312);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x824477F8;
	sub_822D5870(ctx, base);
loc_824477F8:
	// sth r23,202(r31)
	REX_STORE_U16(r31.u32 + 202, r23.u16);
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
	ctx.lr = 0x82447814;
	sub_82464690(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82447a44
	if (ctx.cr6.lt) goto loc_82447A44;
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x824477a8
	if (ctx.cr6.lt) goto loc_824477A8;
loc_8244783C:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824478b8
	if (!ctx.cr6.eq) goto loc_824478B8;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824478b8
	if (ctx.cr6.eq) goto loc_824478B8;
	// mr r30,r25
	r30.u64 = r25.u64;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_8244785C:
	// lwz r8,584(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 584);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,320(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lwz r7,472(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 472);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r6,r11,r8
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mulli r11,r5,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1776));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r3,120(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 120);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r8,r7,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r7.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x8244789C;
	sub_822D5870(ctx, base);
	// addi r7,r30,1
	ctx.r7.s64 = r30.s64 + 1;
	// lhz r5,34(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 34);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8244785c
	if (ctx.cr6.lt) goto loc_8244785C;
loc_824478B8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x824478cc
	if (ctx.cr6.eq) goto loc_824478CC;
	// lwz r11,784(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 784);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82447a34
	if (ctx.cr6.eq) goto loc_82447A34;
loc_824478CC:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82447a34
	if (ctx.cr6.eq) goto loc_82447A34;
	// mr r29,r25
	r29.u64 = r25.u64;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_824478E0:
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lwz r8,60(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// lhzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r11,r6,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne cr6,0x8244790c
	if (!ctx.cr6.eq) goto loc_8244790C;
	// lfs f31,300(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 300);
	f31.f64 = double(temp.f32);
	// b 0x82447928
	goto loc_82447928;
loc_8244790C:
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
	// fdivs f31,f29,f12
	f31.f64 = double(float(f29.f64 / ctx.f12.f64));
loc_82447928:
	// lwz r11,320(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 320);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8244797c
	if (ctx.cr6.eq) goto loc_8244797C;
	// lhz r11,118(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 118);
	// lwz r10,332(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 332);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lwz r7,328(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 328);
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
	// ble 0x8244797c
	if (!ctx.cr0.gt) goto loc_8244797C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8244796C:
	// stfs f30,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfsu f30,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8244796c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8244796C;
loc_8244797C:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82447994
	if (!ctx.cr6.eq) goto loc_82447994;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82447a18
	if (!ctx.cr6.gt) goto loc_82447A18;
loc_82447994:
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
	// ble cr6,0x824479d0
	if (!ctx.cr6.gt) goto loc_824479D0;
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
	ctx.lr = 0x824479D0;
	sub_822D5870(ctx, base);
loc_824479D0:
	// lwz r9,464(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 464);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,496(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 496);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
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
	ctx.lr = 0x82447A18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82447A18:
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x824478e0
	if (ctx.cr6.lt) goto loc_824478E0;
loc_82447A34:
	// stw r20,36(r28)
	REX_STORE_U32(r28.u32 + 36, r20.u32);
loc_82447A38:
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 36);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82447348
	if (!ctx.cr6.eq) goto loc_82447348;
loc_82447A44:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f30,-136(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_8246C128) {
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
	ctx.lr = 0x8246C130;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r26,0
	r26.s64 = 0;
	// lhz r11,150(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 150);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// lhz r9,580(r29)
	ctx.r9.u64 = REX_LOAD_U16(r29.u32 + 580);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8246c238
	if (!ctx.cr6.lt) goto loc_8246C238;
loc_8246C15C:
	// lhz r11,150(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 150);
	// mr r27,r26
	r27.u64 = r26.u64;
	// lwz r9,584(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 584);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r10,320(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 320);
	// lwz r28,0(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mulli r11,r5,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1776));
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,40(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8246c1d4
	if (ctx.cr6.eq) goto loc_8246C1D4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,36(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246baf8
	ctx.lr = 0x8246C1A8;
	sub_8246BAF8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246c234
	if (ctx.cr6.lt) goto loc_8246C234;
	// lhz r11,490(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 490);
	// lhz r10,730(r28)
	ctx.r10.u64 = REX_LOAD_U16(r28.u32 + 730);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8246c1d0
	if (!ctx.cr6.gt) goto loc_8246C1D0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8246C1D0:
	// sth r11,730(r28)
	REX_STORE_U16(r28.u32 + 730, ctx.r11.u16);
loc_8246C1D4:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// blt cr6,0x8246c234
	if (ctx.cr6.lt) goto loc_8246C234;
	// lwz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 60);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8246c1fc
	if (!ctx.cr6.eq) goto loc_8246C1FC;
	// lwz r10,264(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 264);
	// addi r11,r31,224
	ctx.r11.s64 = r31.s64 + 224;
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r8,264(r31)
	REX_STORE_U32(r31.u32 + 264, ctx.r8.u32);
loc_8246C1FC:
	// sth r26,202(r29)
	REX_STORE_U16(r29.u32 + 202, r26.u16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824472b0
	ctx.lr = 0x8246C208;
	sub_824472B0(ctx, base);
	// lhz r11,150(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 150);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,150(r31)
	REX_STORE_U16(r31.u32 + 150, ctx.r9.u16);
	// lhz r8,580(r29)
	ctx.r8.u64 = REX_LOAD_U16(r29.u32 + 580);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8246c15c
	if (ctx.cr6.lt) goto loc_8246C15C;
loc_8246C234:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_8246C238:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82470540) {
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
	ctx.lr = 0x82470548;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82470c54
	if (ctx.cr6.eq) goto loc_82470C54;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82470c54
	if (ctx.cr6.eq) goto loc_82470C54;
	// rlwinm r11,r4,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r5,-372(r1)
	REX_STORE_U32(ctx.r1.u32 + -372, ctx.r5.u32);
	// stw r11,-396(r1)
	REX_STORE_U32(ctx.r1.u32 + -396, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82470c48
	if (ctx.cr6.eq) goto loc_82470C48;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r11,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r11.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// addi r11,r11,-1840
	ctx.r11.s64 = ctx.r11.s64 + -1840;
	// addi r10,r10,-1868
	ctx.r10.s64 = ctx.r10.s64 + -1868;
	// addi r9,r9,-1896
	ctx.r9.s64 = ctx.r9.s64 + -1896;
	// stw r11,-392(r1)
	REX_STORE_U32(ctx.r1.u32 + -392, ctx.r11.u32);
	// stw r10,-380(r1)
	REX_STORE_U32(ctx.r1.u32 + -380, ctx.r10.u32);
	// stw r9,-388(r1)
	REX_STORE_U32(ctx.r1.u32 + -388, ctx.r9.u32);
loc_82470598:
	// lwz r11,-396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -396);
	// lwz r10,-368(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824705b0
	if (ctx.cr6.lt) goto loc_824705B0;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
loc_824705B0:
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r30,-400(r1)
	REX_STORE_U32(ctx.r1.u32 + -400, r30.u32);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// li r29,0
	r29.s64 = 0;
	// stw r11,-396(r1)
	REX_STORE_U32(ctx.r1.u32 + -396, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_824705D4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bge cr6,0x82470614
	if (!ctx.cr6.lt) goto loc_82470614;
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r4,r1,-320
	ctx.r4.s64 = ctx.r1.s64 + -320;
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// addi r28,r1,-352
	r28.s64 = ctx.r1.s64 + -352;
	// lbzu r6,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stwx r9,r10,r4
	REX_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r9.u32);
	// rotlwi r4,r8,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r8,r4,r6
	ctx.r8.u64 = ctx.r4.u64 + ctx.r6.u64;
	// stwx r8,r10,r28
	REX_STORE_U32(ctx.r10.u32 + r28.u32, ctx.r8.u32);
	// b 0x82470624
	goto loc_82470624;
loc_82470614:
	// addi r9,r1,-320
	ctx.r9.s64 = ctx.r1.s64 + -320;
	// addi r8,r1,-352
	ctx.r8.s64 = ctx.r1.s64 + -352;
	// stwx r29,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r29.u32);
	// stwx r29,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, r29.u32);
loc_82470624:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x824705d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824705D4;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lwz r16,-304(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// lwz r19,-308(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// lwz r22,-312(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// lwz r20,-316(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// lwz r17,-320(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// lwz r15,-336(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// lwz r18,-340(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// lwz r21,-344(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// lwz r28,-348(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// lwz r14,-352(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// stw r11,-384(r1)
	REX_STORE_U32(ctx.r1.u32 + -384, ctx.r11.u32);
loc_82470660:
	// lwz r11,-388(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -388);
	// addi r24,r1,-256
	r24.s64 = ctx.r1.s64 + -256;
	// lwz r10,-380(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -380);
	// addi r23,r1,-288
	r23.s64 = ctx.r1.s64 + -288;
	// lwzx r26,r29,r11
	r26.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwzx r25,r29,r10
	r25.u64 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	// mullw r11,r20,r26
	ctx.r11.s64 = int64_t(r20.s32) * int64_t(r26.s32);
	// mullw r10,r17,r25
	ctx.r10.s64 = int64_t(r17.s32) * int64_t(r25.s32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// srawi r11,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 8;
	// stwx r10,r29,r24
	REX_STORE_U32(r29.u32 + r24.u32, ctx.r10.u32);
	// stwx r10,r29,r23
	REX_STORE_U32(r29.u32 + r23.u32, ctx.r10.u32);
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r22.s32, ctx.xer);
	// subf r8,r22,r11
	ctx.r8.u64 = ctx.r11.u64 - r22.u64;
	// bgt cr6,0x824706a4
	if (ctx.cr6.gt) goto loc_824706A4;
	// subf r8,r11,r22
	ctx.r8.u64 = r22.u64 - ctx.r11.u64;
loc_824706A4:
	// mullw r11,r20,r25
	ctx.r11.s64 = int64_t(r20.s32) * int64_t(r25.s32);
	// mullw r10,r22,r26
	ctx.r10.s64 = int64_t(r22.s32) * int64_t(r26.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r19.s32, ctx.xer);
	// subf r9,r19,r11
	ctx.r9.u64 = ctx.r11.u64 - r19.u64;
	// bgt cr6,0x824706c4
	if (ctx.cr6.gt) goto loc_824706C4;
	// subf r9,r11,r19
	ctx.r9.u64 = r19.u64 - ctx.r11.u64;
loc_824706C4:
	// mullw r10,r19,r26
	ctx.r10.s64 = int64_t(r19.s32) * int64_t(r26.s32);
	// mullw r11,r22,r25
	ctx.r11.s64 = int64_t(r22.s32) * int64_t(r25.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r16.s32, ctx.xer);
	// ble cr6,0x824706e8
	if (!ctx.cr6.gt) goto loc_824706E8;
	// subf r11,r16,r11
	ctx.r11.u64 = ctx.r11.u64 - r16.u64;
	// b 0x824706ec
	goto loc_824706EC;
loc_824706E8:
	// subf r11,r11,r16
	ctx.r11.u64 = r16.u64 - ctx.r11.u64;
loc_824706EC:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r7,12
	ctx.r7.s64 = 12;
	// divw r3,r11,r7
	ctx.r3.u64 = uint32_t((ctx.r7.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r11.s32 / ctx.r7.s32 : 0);
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// bge cr6,0x82470704
	if (!ctx.cr6.lt) goto loc_82470704;
	// li r3,16
	ctx.r3.s64 = 16;
loc_82470704:
	// mullw r11,r14,r25
	ctx.r11.s64 = int64_t(r14.s32) * int64_t(r25.s32);
	// mullw r10,r28,r26
	ctx.r10.s64 = int64_t(r28.s32) * int64_t(r26.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r21.s32, ctx.xer);
	// subf r8,r21,r11
	ctx.r8.u64 = ctx.r11.u64 - r21.u64;
	// bgt cr6,0x82470724
	if (ctx.cr6.gt) goto loc_82470724;
	// subf r8,r11,r21
	ctx.r8.u64 = r21.u64 - ctx.r11.u64;
loc_82470724:
	// mullw r11,r28,r25
	ctx.r11.s64 = int64_t(r28.s32) * int64_t(r25.s32);
	// mullw r10,r21,r26
	ctx.r10.s64 = int64_t(r21.s32) * int64_t(r26.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r18.s32, ctx.xer);
	// subf r9,r18,r11
	ctx.r9.u64 = ctx.r11.u64 - r18.u64;
	// bgt cr6,0x82470744
	if (ctx.cr6.gt) goto loc_82470744;
	// subf r9,r11,r18
	ctx.r9.u64 = r18.u64 - ctx.r11.u64;
loc_82470744:
	// mullw r10,r18,r26
	ctx.r10.s64 = int64_t(r18.s32) * int64_t(r26.s32);
	// mullw r11,r21,r25
	ctx.r11.s64 = int64_t(r21.s32) * int64_t(r25.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpw cr6,r11,r15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r15.s32, ctx.xer);
	// ble cr6,0x82470768
	if (!ctx.cr6.gt) goto loc_82470768;
	// subf r11,r15,r11
	ctx.r11.u64 = ctx.r11.u64 - r15.u64;
	// b 0x8247076c
	goto loc_8247076C;
loc_82470768:
	// subf r11,r11,r15
	ctx.r11.u64 = r15.u64 - ctx.r11.u64;
loc_8247076C:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// divw r31,r11,r7
	r31.u64 = uint32_t((ctx.r7.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r11.s32 / ctx.r7.s32 : 0);
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(r31.s32, 16, ctx.xer);
	// bge cr6,0x82470780
	if (!ctx.cr6.lt) goto loc_82470780;
	// li r31,16
	r31.s64 = 16;
loc_82470780:
	// addi r11,r1,-224
	ctx.r11.s64 = ctx.r1.s64 + -224;
	// lwz r10,-400(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -400);
	// addi r9,r1,-192
	ctx.r9.s64 = ctx.r1.s64 + -192;
	// mr r30,r20
	r30.u64 = r20.u64;
	// mr r27,r28
	r27.u64 = r28.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// stwx r3,r29,r11
	REX_STORE_U32(r29.u32 + ctx.r11.u32, ctx.r3.u32);
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// stwx r31,r29,r9
	REX_STORE_U32(r29.u32 + ctx.r9.u32, r31.u32);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// ble cr6,0x82470950
	if (!ctx.cr6.gt) goto loc_82470950;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,-384(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -384);
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824707C0:
	// mullw r10,r4,r25
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(r25.s32);
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// mullw r9,r30,r26
	ctx.r9.s64 = int64_t(r30.s32) * int64_t(r26.s32);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rotlwi r10,r7,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// srawi r9,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 8;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// subf r10,r9,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r9.u64;
	// twllei r3,0
	if (ctx.r3.s32 == 0 || ctx.r3.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r3
	ctx.r10.u64 = uint32_t((ctx.r3.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r3.s32 == -1)) ? ctx.r10.s32 / ctx.r3.s32 : 0);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// andc r4,r3,r7
	ctx.r4.u64 = ctx.r3.u64 & ~ctx.r7.u64;
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x82470810
	if (!ctx.cr6.gt) goto loc_82470810;
	// li r10,7
	ctx.r10.s64 = 7;
	// b 0x8247081c
	goto loc_8247081C;
loc_82470810:
	// cmpwi cr6,r10,-8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -8, ctx.xer);
	// bge cr6,0x8247081c
	if (!ctx.cr6.lt) goto loc_8247081C;
	// li r10,-8
	ctx.r10.s64 = -8;
loc_8247081C:
	// mullw r7,r10,r3
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// cmpwi cr6,r9,32767
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32767, ctx.xer);
	// ble cr6,0x82470834
	if (!ctx.cr6.gt) goto loc_82470834;
	// li r9,32767
	ctx.r9.s64 = 32767;
	// b 0x82470840
	goto loc_82470840;
loc_82470834:
	// cmpwi cr6,r9,-32768
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -32768, ctx.xer);
	// bge cr6,0x82470840
	if (!ctx.cr6.lt) goto loc_82470840;
	// li r9,-32768
	ctx.r9.s64 = -32768;
loc_82470840:
	// lwz r7,-392(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -392);
	// rlwinm r4,r10,2,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// lwzx r10,r4,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// mullw r7,r10,r3
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// srawi r3,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 8;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// bge cr6,0x82470860
	if (!ctx.cr6.lt) goto loc_82470860;
	// li r3,16
	ctx.r3.s64 = 16;
loc_82470860:
	// subf r4,r8,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r8.u64;
	// lbz r14,1(r11)
	r14.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// mullw r8,r6,r25
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(r25.s32);
	// lbzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lwzx r7,r29,r24
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + r24.u32);
	// mullw r6,r27,r26
	ctx.r6.s64 = int64_t(r27.s32) * int64_t(r26.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r6,r4,r4
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r4.s32);
	// stw r6,-376(r1)
	REX_STORE_U32(ctx.r1.u32 + -376, ctx.r6.u32);
	// rotlwi r6,r10,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// lwz r14,-376(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -376);
	// srawi r10,r14,7
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x7F) != 0);
	ctx.r10.s64 = r14.s32 >> 7;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// subf r10,r8,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r8.u64;
	// stwx r7,r29,r24
	REX_STORE_U32(r29.u32 + r24.u32, ctx.r7.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r31
	ctx.r10.u64 = uint32_t((r31.s32 && !(ctx.r10.s32 == INT32_MIN && r31.s32 == -1)) ? ctx.r10.s32 / r31.s32 : 0);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// twllei r31,0
	if (r31.s32 == 0 || r31.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r7,r31,r7
	ctx.r7.u64 = r31.u64 & ~ctx.r7.u64;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// ble cr6,0x824708d8
	if (!ctx.cr6.gt) goto loc_824708D8;
	// li r10,7
	ctx.r10.s64 = 7;
	// b 0x824708e4
	goto loc_824708E4;
loc_824708D8:
	// cmpwi cr6,r10,-8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -8, ctx.xer);
	// bge cr6,0x824708e4
	if (!ctx.cr6.lt) goto loc_824708E4;
	// li r10,-8
	ctx.r10.s64 = -8;
loc_824708E4:
	// mullw r9,r10,r31
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpwi cr6,r9,32767
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32767, ctx.xer);
	// ble cr6,0x824708fc
	if (!ctx.cr6.gt) goto loc_824708FC;
	// li r9,32767
	ctx.r9.s64 = 32767;
	// b 0x82470908
	goto loc_82470908;
loc_824708FC:
	// cmpwi cr6,r9,-32768
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -32768, ctx.xer);
	// bge cr6,0x82470908
	if (!ctx.cr6.lt) goto loc_82470908;
	// li r9,-32768
	ctx.r9.s64 = -32768;
loc_82470908:
	// rlwinm r8,r10,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// lwz r10,-392(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -392);
	// lwzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// mullw r10,r7,r31
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(r31.s32);
	// srawi r31,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	r31.s64 = ctx.r10.s32 >> 8;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(r31.s32, 16, ctx.xer);
	// bge cr6,0x82470928
	if (!ctx.cr6.lt) goto loc_82470928;
	// li r31,16
	r31.s64 = 16;
loc_82470928:
	// subf r10,r6,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r6.u64;
	// lwzx r8,r29,r23
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + r23.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mullw r7,r10,r10
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// srawi r10,r7,7
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 7;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stwx r10,r29,r23
	REX_STORE_U32(r29.u32 + r23.u32, ctx.r10.u32);
	// bdnz 0x824707c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824707C0;
	// lwz r14,-352(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
loc_82470950:
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r29,28
	ctx.cr6.compare<uint32_t>(r29.u32, 28, ctx.xer);
	// blt cr6,0x82470660
	if (ctx.cr6.lt) goto loc_82470660;
	// lwz r9,-256(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,-252(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,-288(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82470980
	if (!ctx.cr6.lt) goto loc_82470980;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82470980:
	// lwz r8,-284(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82470994
	if (!ctx.cr6.lt) goto loc_82470994;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_82470994:
	// lwz r8,-248(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x824709a8
	if (!ctx.cr6.lt) goto loc_824709A8;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_824709A8:
	// lwz r8,-280(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x824709bc
	if (!ctx.cr6.lt) goto loc_824709BC;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_824709BC:
	// lwz r8,-244(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x824709d0
	if (!ctx.cr6.lt) goto loc_824709D0;
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_824709D0:
	// lwz r8,-276(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -276);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x824709e4
	if (!ctx.cr6.lt) goto loc_824709E4;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_824709E4:
	// lwz r8,-240(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x824709f8
	if (!ctx.cr6.lt) goto loc_824709F8;
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_824709F8:
	// lwz r8,-272(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82470a0c
	if (!ctx.cr6.lt) goto loc_82470A0C;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_82470A0C:
	// lwz r8,-236(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82470a20
	if (!ctx.cr6.lt) goto loc_82470A20;
	// li r10,5
	ctx.r10.s64 = 5;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82470A20:
	// lwz r8,-268(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82470a34
	if (!ctx.cr6.lt) goto loc_82470A34;
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_82470A34:
	// lwz r8,-232(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82470a44
	if (!ctx.cr6.lt) goto loc_82470A44;
	// li r10,6
	ctx.r10.s64 = 6;
loc_82470A44:
	// lwz r9,-264(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82470a54
	if (!ctx.cr6.lt) goto loc_82470A54;
	// li r11,6
	ctx.r11.s64 = 6;
loc_82470A54:
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,-400(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -400);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// lwz r11,-388(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -388);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,-384(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -384);
	// addi r4,r1,-224
	ctx.r4.s64 = ctx.r1.s64 + -224;
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// mr r29,r20
	r29.u64 = r20.u64;
	// lwzx r27,r8,r11
	r27.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// mr r23,r28
	r23.u64 = r28.u64;
	// lwzx r25,r6,r11
	r25.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwz r11,-380(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -380);
	// lwzx r9,r6,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// lwzx r4,r8,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// mr r31,r20
	r31.u64 = r20.u64;
	// lwzx r24,r6,r11
	r24.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// lwzx r26,r8,r11
	r26.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// addic. r11,r7,-2
	ctx.xer.ca = ctx.r7.u32 > 1;
	ctx.r11.s64 = ctx.r7.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r10,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// stbu r30,1(r5)
	ea = 1 + ctx.r5.u32;
	REX_STORE_U8(ea, r30.u8);
	ctx.r5.u32 = ea;
	// mr r30,r14
	r30.u64 = r14.u64;
	// sthu r9,1(r5)
	ea = 1 + ctx.r5.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r5.u32 = ea;
	// sthu r4,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, ctx.r4.u16);
	ctx.r5.u32 = ea;
	// sthu r20,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, r20.u16);
	ctx.r5.u32 = ea;
	// sthu r28,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, r28.u16);
	ctx.r5.u32 = ea;
	// sthu r17,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, r17.u16);
	ctx.r5.u32 = ea;
	// sthu r14,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, r14.u16);
	ctx.r5.u32 = ea;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// beq 0x82470c3c
	if (ctx.cr0.eq) goto loc_82470C3C;
	// lwz r23,-392(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -392);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82470AD8:
	// lbz r11,1(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// mullw r8,r24,r6
	ctx.r8.s64 = int64_t(r24.s32) * int64_t(ctx.r6.s32);
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mullw r7,r25,r31
	ctx.r7.s64 = int64_t(r25.s32) * int64_t(r31.s32);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// addi r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 2;
	// subf r7,r8,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r8.u64;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r11,r7,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// divw r29,r7,r9
	r29.u64 = uint32_t((ctx.r9.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r7.s32 / ctx.r9.s32 : 0);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r29,7
	ctx.cr6.compare<int32_t>(r29.s32, 7, ctx.xer);
	// andc r3,r9,r6
	ctx.r3.u64 = ctx.r9.u64 & ~ctx.r6.u64;
	// twlgei r3,-1
	if (ctx.r3.s32 == -1 || ctx.r3.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x82470b28
	if (!ctx.cr6.gt) goto loc_82470B28;
	// li r29,7
	r29.s64 = 7;
	// b 0x82470b34
	goto loc_82470B34;
loc_82470B28:
	// cmpwi cr6,r29,-8
	ctx.cr6.compare<int32_t>(r29.s32, -8, ctx.xer);
	// bge cr6,0x82470b34
	if (!ctx.cr6.lt) goto loc_82470B34;
	// li r29,-8
	r29.s64 = -8;
loc_82470B34:
	// mullw r11,r29,r9
	ctx.r11.s64 = int64_t(r29.s32) * int64_t(ctx.r9.s32);
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpwi cr6,r3,32767
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32767, ctx.xer);
	// ble cr6,0x82470b4c
	if (!ctx.cr6.gt) goto loc_82470B4C;
	// li r3,32767
	ctx.r3.s64 = 32767;
	// b 0x82470b58
	goto loc_82470B58;
loc_82470B4C:
	// cmpwi cr6,r3,-32768
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -32768, ctx.xer);
	// bge cr6,0x82470b58
	if (!ctx.cr6.lt) goto loc_82470B58;
	// li r3,-32768
	ctx.r3.s64 = -32768;
loc_82470B58:
	// rlwinm r11,r29,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0x3C;
	// lwzx r8,r11,r23
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// srawi r9,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 8;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// bge cr6,0x82470b74
	if (!ctx.cr6.lt) goto loc_82470B74;
	// li r9,16
	ctx.r9.s64 = 16;
loc_82470B74:
	// lbz r11,1(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// mullw r6,r27,r28
	ctx.r6.s64 = int64_t(r27.s32) * int64_t(r28.s32);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// mullw r7,r26,r30
	ctx.r7.s64 = int64_t(r26.s32) * int64_t(r30.s32);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// srawi r8,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 8;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rotlwi r7,r11,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r11,r11,r4
	ctx.r11.u64 = uint32_t((ctx.r4.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r11.s32 / ctx.r4.s32 : 0);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// twllei r4,0
	if (ctx.r4.s32 == 0 || ctx.r4.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 & ~ctx.r7.u64;
	// addi r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 2;
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x82470bcc
	if (!ctx.cr6.gt) goto loc_82470BCC;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82470bd8
	goto loc_82470BD8;
loc_82470BCC:
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// bge cr6,0x82470bd8
	if (!ctx.cr6.lt) goto loc_82470BD8;
	// li r11,-8
	ctx.r11.s64 = -8;
loc_82470BD8:
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x82470bf0
	if (!ctx.cr6.gt) goto loc_82470BF0;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x82470bfc
	goto loc_82470BFC;
loc_82470BF0:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x82470bfc
	if (!ctx.cr6.lt) goto loc_82470BFC;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_82470BFC:
	// rlwinm r8,r11,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// lwzx r7,r8,r23
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + r23.u32);
	// mullw r4,r7,r4
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// cmpwi cr6,r4,16
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16, ctx.xer);
	// bge cr6,0x82470c1c
	if (!ctx.cr6.lt) goto loc_82470C1C;
	// li r4,16
	ctx.r4.s64 = 16;
loc_82470C1C:
	// rlwinm r8,r29,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r30,r28
	r30.u64 = r28.u64;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// stb r11,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bdnz 0x82470ad8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82470AD8;
loc_82470C3C:
	// lwz r11,-396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82470598
	if (!ctx.cr6.eq) goto loc_82470598;
loc_82470C48:
	// lwz r11,-372(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -372);
	// subf r3,r11,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r11.u64;
	// b 0x822d4ea0
	return;
loc_82470C54:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_824A7608) {
	REX_FUNC_PROLOGUE();
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
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCVRegister v64{};
	PPCVRegister v65{};
	PPCRegister temp{};
	uint32_t ea{};
	// vspltisb v31,0
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_set1_epi8(char(0x0)));
	// vor128 v30,v64,v64
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_load_si128((simde__m128i*)v64.u8));
	// vor128 v29,v65,v65
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_load_si128((simde__m128i*)v65.u8));
	// li r8,16
	ctx.r8.s64 = 16;
	// rlwinm r12,r4,2,0,29
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x824a76c8
	if (!ctx.cr6.eq) goto loc_824A76C8;
	// rlwinm r6,r4,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,8
	ctx.r7.s64 = 8;
loc_824A762C:
	// add r10,r3,r6
	ctx.r10.u64 = ctx.r3.u64 + ctx.r6.u64;
	// add r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvlx v1,0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v2,r3,r8
	temp.u32 = ctx.r3.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx v9,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v10,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx v18,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v19,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v19.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx v23,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v24,r11,r8
	temp.u32 = ctx.r11.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v24.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor v3,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vor v11,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vor v20,v18,v19
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)v19.u8)));
	// vor v25,v23,v24
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)v24.u8)));
	// add r3,r3,r12
	ctx.r3.u64 = ctx.r3.u64 + ctx.r12.u64;
	// vperm v4,v3,v31,v30
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)v30.u8)));
	// vperm v5,v3,v31,v29
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// vperm v12,v11,v31,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)v30.u8)));
	// vperm v13,v11,v31,v29
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// vperm v21,v20,v31,v30
	simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)v30.u8)));
	// vperm v22,v20,v31,v29
	simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// vperm v26,v25,v31,v30
	simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)v30.u8)));
	// vperm v27,v25,v31,v29
	simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// addi r9,r5,48
	ctx.r9.s64 = ctx.r5.s64 + 48;
	// addi r10,r5,96
	ctx.r10.s64 = ctx.r5.s64 + 96;
	// addi r11,r5,144
	ctx.r11.s64 = ctx.r5.s64 + 144;
	// stvx v4,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v5,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r5,192
	ctx.r5.s64 = ctx.r5.s64 + 192;
	// stvx v12,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v21,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v22,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v26,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v27,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r7,r7,-4
	ctx.xer.ca = ctx.r7.u32 > 3;
	ctx.r7.s64 = ctx.r7.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x824a762c
	if (!ctx.cr0.eq) goto loc_824A762C;
	// b 0x824a7768
	goto loc_824A7768;
loc_824A76C8:
	// rlwinm r6,r4,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,16
	ctx.r7.s64 = 16;
loc_824A76D0:
	// add r10,r3,r6
	ctx.r10.u64 = ctx.r3.u64 + ctx.r6.u64;
	// add r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvlx v1,0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v2,r3,r8
	temp.u32 = ctx.r3.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx v9,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v10,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx v18,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v19,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v19.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx v23,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v24,r11,r8
	temp.u32 = ctx.r11.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v24.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor v3,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vor v11,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vor v20,v18,v19
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)v19.u8)));
	// vor v25,v23,v24
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)v24.u8)));
	// add r3,r3,r12
	ctx.r3.u64 = ctx.r3.u64 + ctx.r12.u64;
	// vperm v4,v3,v31,v30
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)v30.u8)));
	// vperm v5,v3,v31,v29
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// vperm v12,v11,v31,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)v30.u8)));
	// vperm v13,v11,v31,v29
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// vperm v21,v20,v31,v30
	simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)v30.u8)));
	// vperm v22,v20,v31,v29
	simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// vperm v26,v25,v31,v30
	simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)v30.u8)));
	// vperm v27,v25,v31,v29
	simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// addi r9,r5,48
	ctx.r9.s64 = ctx.r5.s64 + 48;
	// addi r10,r5,96
	ctx.r10.s64 = ctx.r5.s64 + 96;
	// addi r11,r5,144
	ctx.r11.s64 = ctx.r5.s64 + 144;
	// stvx v4,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v5,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r5,192
	ctx.r5.s64 = ctx.r5.s64 + 192;
	// stvx v12,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v21,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v22,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v26,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v27,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r7,r7,-4
	ctx.xer.ca = ctx.r7.u32 > 3;
	ctx.r7.s64 = ctx.r7.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x824a76d0
	if (!ctx.cr0.eq) goto loc_824A76D0;
loc_824A7768:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824ACDC0) {
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
	// vspltish v0,-5
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0xFFFB)));
	// li r10,1120
	ctx.r10.s64 = 1120;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// vspltish v1,6
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x6)));
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// vsrh v0,v0,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_srlv_epi16(a, shift));
	}
	// slw r7,r4,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r7.u8 & 0x3F));
	// lvx128 v13,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,0
	ctx.r9.s64 = 0;
	// vaddshs v2,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// subf r3,r11,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r11.u64;
	// bl 0x824ac6b8
	ctx.lr = 0x824ACE08;
	sub_824AC6B8(ctx, base);
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

DEFINE_REX_FUNC(sub_824AD150) {
	REX_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x824AD158;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltish v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x2)));
	// li r11,1120
	ctx.r11.s64 = 1120;
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// vspltish v12,6
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x6)));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r31,1164(r6)
	r31.u64 = REX_LOAD_U32(ctx.r6.u32 + 1164);
	// addi r27,r1,96
	r27.s64 = ctx.r1.s64 + 96;
	// vslh v11,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v10,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v9,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stvx128 v12,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stvx128 v9,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x824a6648
	ctx.lr = 0x824AD1BC;
	sub_824A6648(ctx, base);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// vspltish v8,-1
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// vspltisb v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_set1_epi8(char(0x0)));
	// clrlwi r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	// vspltish v6,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x1)));
	// li r5,1
	ctx.r5.s64 = 1;
	// vspltish v11,4
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x4)));
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// vspltish v5,5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x5)));
	// lvx128 v4,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// vslh v2,v8,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltish v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x0)));
	// slw r9,r5,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r4.u8 & 0x3F));
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x824ad2b8
	if (!ctx.cr6.eq) goto loc_824AD2B8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824ad3b0
	if (!ctx.cr6.gt) goto loc_824AD3B0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,4
	ctx.r8.s64 = 4;
loc_824AD21C:
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v9,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// vsldoi128 v12,v0,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v10,v0,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// vsldoi128 v4,v0,v63,6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 10));
	// vsubshs v3,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// lvx128 v1,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v31,v12,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v30,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v29,v12,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v10,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v25,v29,v31
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vadduhm v24,v28,v12
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v23,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v26,v27
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v21,v24,v25
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vsubshs v20,v7,v23
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vadduhm v19,v21,v22
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v18,v3,v20
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v17,v19,v1
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v16,v17,v18
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vsrah v15,v16,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v62,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vor v8,v8,v15
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// stvewx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// bdnz 0x824ad21c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AD21C;
	// vand v0,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// li r3,0
	ctx.r3.s64 = 0;
	// vcmpgtuh. v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ed4
	return;
loc_824AD2B8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824ad3b0
	if (!ctx.cr6.gt) goto loc_824AD3B0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_824AD2D0:
	// lvx128 v0,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v12,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v3,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v10,v12,v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 12));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// vsldoi128 v9,v0,v61,4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 12));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsubshs v31,v0,v3
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsldoi v4,v12,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 14));
	// vsldoi128 v3,v0,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// vsubshs v30,v12,v1
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v10,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v28,v12,v0,6
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 10));
	// vslh v27,v9,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v26,v0,v61,6
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 10));
	// vslh v25,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v0,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v24,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v19,v25,v29
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v18,v24,v10
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v21,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v4,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v23,v27
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v14,v22,v9
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v17,v3,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v3,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v9,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vadduhm v4,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vslh v12,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v10,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v3,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v1,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vsubshs v29,v7,v12
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsubshs v28,v7,v10
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vadduhm v27,v4,v9
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v26,v1,v3
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v25,v30,v29
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v24,v31,v28
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v23,v27,v0
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vadduhm v22,v26,v0
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// lvx128 v0,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v21,v23,v25
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v20,v22,v24
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vsrah v19,v21,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v20,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v60,v8,v19
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v19.u8)));
	// vpkshus128 v59,v19,v18
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vor128 v8,v60,v18
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)v18.u8)));
	// stvx128 v59,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// bdnz 0x824ad2d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AD2D0;
loc_824AD3B0:
	// vand v0,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// li r3,0
	ctx.r3.s64 = 0;
	// vcmpgtuh. v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_824B7668) {
	REX_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e7c
	ctx.lr = 0x824B7670;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1156(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 1156);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r25,r1,128
	r25.s64 = ctx.r1.s64 + 128;
	// lwz r8,1148(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 1148);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// vspltish v0,7
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x7)));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwz r31,1164(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 1164);
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// lwz r28,308(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,144
	r26.s64 = ctx.r1.s64 + 144;
	// stw r8,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// vspltish v1,3
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x3)));
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v12,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// vsplth v2,v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_set1_epi16(short(0xD0C))));
	// vsplth v11,v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xD0C))));
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// stvx128 v0,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// stvx128 v11,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x824a6eb0
	ctx.lr = 0x824B76E8;
	sub_824A6EB0(ctx, base);
	// cntlzw r5,r28
	ctx.r5.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// vspltish v10,8
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x8)));
	// vspltish v9,-1
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// vspltisb v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// vspltish v6,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x1)));
	// and r9,r3,r27
	ctx.r9.u64 = ctx.r3.u64 & r27.u64;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// vslh v2,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// vspltish v11,4
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x4)));
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// vspltish v5,5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x5)));
	// slw r9,r4,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r9.u8 & 0x3F));
	// vspltish v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x0)));
	// bne cr6,0x824b77d4
	if (!ctx.cr6.eq) goto loc_824B77D4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824b78cc
	if (!ctx.cr6.gt) goto loc_824B78CC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,4
	ctx.r8.s64 = 4;
loc_824B7748:
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lvx128 v63,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v9,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// vsldoi128 v12,v0,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v10,v0,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// vsldoi128 v4,v0,v63,6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 10));
	// vsubshs v3,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// lvx128 v1,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v31,v12,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v30,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v29,v12,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v10,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v25,v29,v31
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vadduhm v24,v28,v12
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v23,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v26,v27
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v21,v24,v25
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vsubshs v20,v7,v23
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vadduhm v19,v21,v22
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v18,v3,v20
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v17,v19,v1
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v16,v17,v18
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vsrah v15,v16,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v62,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vor v8,v8,v15
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// stvewx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// bdnz 0x824b7748
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B7748;
	// b 0x824b78cc
	goto loc_824B78CC;
loc_824B77D4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824b78cc
	if (!ctx.cr6.gt) goto loc_824B78CC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_824B77EC:
	// lvx128 v0,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lvx128 v12,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v3,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v10,v12,v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 12));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// vsldoi128 v9,v0,v61,4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 12));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsubshs v31,v0,v3
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsldoi v4,v12,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 14));
	// vsldoi128 v3,v0,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// vsubshs v30,v12,v1
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v10,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v28,v12,v0,6
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 10));
	// vslh v27,v9,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v26,v0,v61,6
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 10));
	// vslh v25,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v0,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v24,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v19,v25,v29
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v18,v24,v10
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v21,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v4,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v23,v27
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v14,v22,v9
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v17,v3,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v3,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v9,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vadduhm v4,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vslh v12,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v10,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v3,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v1,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vsubshs v29,v7,v12
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsubshs v28,v7,v10
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vadduhm v27,v4,v9
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v26,v1,v3
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v25,v30,v29
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v24,v31,v28
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v23,v27,v0
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vadduhm v22,v26,v0
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// lvx128 v0,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v21,v23,v25
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v20,v22,v24
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vsrah v19,v21,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v20,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v60,v8,v19
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v19.u8)));
	// vpkshus128 v59,v19,v18
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vor128 v8,v60,v18
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)v18.u8)));
	// stvx128 v59,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// bdnz 0x824b77ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B77EC;
loc_824B78CC:
	// vand v0,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vcmpgtuh. v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// mfocrf r11,2
	ctx.r11.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ecc
	return;
}

