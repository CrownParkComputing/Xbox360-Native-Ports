#include "soulcalibur2_funcs.11.h"

DEFINE_REX_FUNC(sub_820E02D8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f12,56(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f31,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x820e0250
	ctx.lr = 0x820E0318;
	sub_820E0250(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1ec0
	ctx.lr = 0x820E0328;
	sub_820E1EC0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f31,60(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// stfs f12,56(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

DEFINE_REX_FUNC(sub_820E9858) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,2364(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2364);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x820e00c0
	ctx.lr = 0x820E9890;
	sub_820E00C0(ctx, base);
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fdivs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,15632(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15632);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// bctrl 
	ctx.lr = 0x820E98CC;
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

DEFINE_REX_FUNC(sub_820EDF60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x820EDF68;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r11,-28232
	ctx.r3.s64 = ctx.r11.s64 + -28232;
	// bl 0x82202540
	ctx.lr = 0x820EDF80;
	sub_82202540(ctx, base);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,13128
	r30.s64 = ctx.r11.s64 + 13128;
	// lwz r11,-28252(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -28252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820ee034
	if (!ctx.cr6.eq) goto loc_820EE034;
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 376);
	// lwz r10,1856(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1856);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820ee034
	if (ctx.cr6.eq) goto loc_820EE034;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// addi r3,r11,84
	ctx.r3.s64 = ctx.r11.s64 + 84;
	// bl 0x821d6398
	ctx.lr = 0x820EDFBC;
	sub_821D6398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820edfd4
	if (!ctx.cr0.eq) goto loc_820EDFD4;
	// lfs f0,1840(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
loc_820EDFD4:
	// lwz r11,380(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 380);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820ee028
	if (ctx.cr6.lt) goto loc_820EE028;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820ee00c
	if (ctx.cr6.eq) goto loc_820EE00C;
	// lfs f0,404(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 404);
	ctx.f0.f64 = double(temp.f32);
	// b 0x820ee024
	goto loc_820EE024;
loc_820EE00C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_820EE024:
	// stfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
loc_820EE028:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e9af8
	ctx.lr = 0x820EE034;
	sub_820E9AF8(ctx, base);
loc_820EE034:
	// lwz r11,1856(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1856);
	// stw r11,376(r31)
	REX_STORE_U32(r31.u32 + 376, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_820F3920) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bl 0x820f3848
	ctx.lr = 0x820F3934;
	sub_820F3848(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fctiwz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// bl 0x820f3760
	ctx.lr = 0x820F3968;
	sub_820F3760(ctx, base);
	// subf r10,r7,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r7.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r8,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r11,r11,r9
	temp.u8 = (~ctx.r11.u32 + ctx.r9.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820f39a4
	if (!ctx.cr6.eq) goto loc_820F39A4;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,2744
	ctx.r4.s64 = ctx.r11.s64 + 2744;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x822d4fa0
	ctx.lr = 0x820F39A0;
	sub_822D4FA0(ctx, base);
	// b 0x820f3b1c
	goto loc_820F3B1C;
loc_820F39A4:
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// mulli r10,r11,72
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// addi r11,r9,2744
	ctx.r11.s64 = ctx.r9.s64 + 2744;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f13,-72(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -72);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -68);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f13,-64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -64);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f13,8(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f13,-60(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -60);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f13,12(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f13,-56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f13,16(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f13,-52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f13,20(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lfs f13,-48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f13,24(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lfs f13,-44(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -44);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f13,28(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// lfs f13,-40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f13,32(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// lfs f13,-36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f13,36(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// lfs f13,-32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f13,40(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// lfs f13,-28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,44(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f13,44(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// lfs f13,-24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f13,48(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// lfs f13,-20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f13,52(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// lfs f13,-16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f13,56(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// lfs f13,-12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,60(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f13,60(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// lfs f13,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f13,64(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 64, temp.u32);
	// lfs f13,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f0,68(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 68, temp.u32);
loc_820F3B1C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821029B8) {
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
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,26900
	ctx.r6.s64 = ctx.r10.s64 + 26900;
	// addi r8,r11,10392
	ctx.r8.s64 = ctx.r11.s64 + 10392;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x821029F4;
	sub_821F7D50(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82102a0c
	if (ctx.cr0.eq) goto loc_82102A0C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,31764
	ctx.r10.s64 = ctx.r10.s64 + 31764;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82102a10
	goto loc_82102A10;
loc_82102A0C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82102A10:
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r31,r9,22576
	r31.s64 = ctx.r9.s64 + 22576;
	// li r5,136
	ctx.r5.s64 = 136;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// stw r11,22576(r9)
	REX_STORE_U32(ctx.r9.u32 + 22576, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r10,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r10.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x82102A38;
	sub_822D4FA0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,144(r31)
	REX_STORE_U32(r31.u32 + 144, r30.u32);
	// stw r9,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
	// stw r10,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r10.u32);
	// stw r11,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r11.u32);
	// stw r10,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r10.u32);
	// stw r9,344(r31)
	REX_STORE_U32(r31.u32 + 344, ctx.r9.u32);
	// sth r11,348(r31)
	REX_STORE_U16(r31.u32 + 348, ctx.r11.u16);
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

DEFINE_REX_FUNC(sub_821074E0) {
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
	// bl 0x82106650
	ctx.lr = 0x821074F4;
	sub_82106650(ctx, base);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r11,13
	ctx.r11.s64 = 13;
	// addi r31,r10,22960
	r31.s64 = ctx.r10.s64 + 22960;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// bl 0x82106c48
	ctx.lr = 0x82107510;
	sub_82106C48(ctx, base);
	// li r11,120
	ctx.r11.s64 = 120;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x82100c80
	ctx.lr = 0x82107524;
	sub_82100C80(ctx, base);
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

DEFINE_REX_FUNC(sub_82108C38) {
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
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,22960
	r31.s64 = ctx.r10.s64 + 22960;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,612(r31)
	REX_STORE_U32(r31.u32 + 612, ctx.r11.u32);
	// stw r10,616(r31)
	REX_STORE_U32(r31.u32 + 616, ctx.r10.u32);
	// stw r9,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// bl 0x82106c48
	ctx.lr = 0x82108C74;
	sub_82106C48(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,640(r31)
	REX_STORE_U32(r31.u32 + 640, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r9,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// stw r9,668(r31)
	REX_STORE_U32(r31.u32 + 668, ctx.r9.u32);
	// stw r11,672(r31)
	REX_STORE_U32(r31.u32 + 672, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8210E120) {
	REX_FUNC_PROLOGUE();
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -24, f30.u64);
	// stfd f31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// lbz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8210e1dc
	if (ctx.cr0.eq) goto loc_8210E1DC;
	// lbz r11,221(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 221);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8210e1dc
	if (ctx.cr0.eq) goto loc_8210E1DC;
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f0,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// li r3,64
	ctx.r3.s64 = 64;
	// lfs f13,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f31,2008(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2008);
	f31.f64 = double(temp.f32);
	// lfs f0,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f30,f0,f13
	f30.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,16228(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16228);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f9,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 - f30.f64));
	// fsubs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fadds f3,f10,f13
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f2,f11,f0
	ctx.f2.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fadds f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// bl 0x82204d68
	ctx.lr = 0x8210E1BC;
	sub_82204D68(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// li r8,192
	ctx.r8.s64 = 192;
	// lfs f3,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f5,f30,f31
	ctx.f5.f64 = double(float(f30.f64 * f31.f64));
	// lfs f1,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821e8688
	ctx.lr = 0x8210E1DC;
	sub_821E8688(ctx, base);
loc_8210E1DC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82110EF8) {
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
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,2348(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2348);
	ctx.f2.f64 = double(temp.f32);
	// sth r8,124(r11)
	REX_STORE_U16(ctx.r11.u32 + 124, ctx.r8.u16);
	// lfs f1,2340(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2340);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,7840(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 7840);
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stfs f0,112(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// addi r10,r11,108
	ctx.r10.s64 = ctx.r11.s64 + 108;
	// stfs f0,116(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// stfs f0,120(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// bl 0x821ff668
	ctx.lr = 0x82110F4C;
	sub_821FF668(ctx, base);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,23952(r10)
	REX_STORE_U8(ctx.r10.u32 + 23952, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82113058) {
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
	ctx.lr = 0x82113060;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// addi r11,r11,-8304
	ctx.r11.s64 = ctx.r11.s64 + -8304;
	// addi r28,r10,31432
	r28.s64 = ctx.r10.s64 + 31432;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// stw r11,156(r3)
	REX_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// lwz r3,152(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 152);
	// lwz r6,156(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 156);
	// bl 0x821f7770
	ctx.lr = 0x82113094;
	sub_821F7770(ctx, base);
	// addi r10,r3,2047
	ctx.r10.s64 = ctx.r3.s64 + 2047;
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// rlwinm r10,r10,0,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF800;
	// li r5,201
	ctx.r5.s64 = 201;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r11.u32);
	// lwz r3,152(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 152);
	// lwz r6,156(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 156);
	// bl 0x821f7770
	ctx.lr = 0x821130BC;
	sub_821F7770(ctx, base);
	// addi r11,r3,2047
	ctx.r11.s64 = ctx.r3.s64 + 2047;
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// rlwinm r11,r11,0,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF800;
	// li r5,202
	ctx.r5.s64 = 202;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r11.u32);
	// lwz r3,152(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 152);
	// lwz r6,156(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 156);
	// bl 0x821f7770
	ctx.lr = 0x821130E4;
	sub_821F7770(ctx, base);
	// addi r10,r3,2047
	ctx.r10.s64 = ctx.r3.s64 + 2047;
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// rlwinm r10,r10,0,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF800;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r27,r9,432
	r27.s64 = ctx.r9.s64 + 432;
	// stw r11,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r11.u32);
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// lwz r3,168(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 168);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r6,172(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 172);
	// addi r26,r10,672
	r26.s64 = ctx.r10.s64 + 672;
	// lwz r11,344(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 344);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r26
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// bl 0x821f7770
	ctx.lr = 0x82113124;
	sub_821F7770(ctx, base);
	// addi r11,r3,2047
	ctx.r11.s64 = ctx.r3.s64 + 2047;
	// lwz r10,168(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 168);
	// li r5,400
	ctx.r5.s64 = 400;
	// rlwinm r11,r11,0,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF800;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,2048
	ctx.r3.s64 = ctx.r11.s64 + 2048;
	// stw r11,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r11.u32);
	// stw r3,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r3.u32);
	// bl 0x822d5870
	ctx.lr = 0x8211314C;
	sub_822D5870(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// lwz r6,156(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 156);
	// addi r29,r31,184
	r29.s64 = r31.s64 + 184;
	// stw r30,184(r31)
	REX_STORE_U32(r31.u32 + 184, r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,188(r31)
	REX_STORE_U32(r31.u32 + 188, r30.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,192(r31)
	REX_STORE_U32(r31.u32 + 192, r30.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r3,152(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 152);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// li r5,200
	ctx.r5.s64 = 200;
	// lwz r11,156(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 156);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x821f7970
	ctx.lr = 0x82113194;
	sub_821F7970(ctx, base);
	// lwz r11,172(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 172);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r5,344(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 344);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r3,168(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 168);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,168(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 168);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// lwzx r5,r11,r26
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// bl 0x821f7970
	ctx.lr = 0x821131D0;
	sub_821F7970(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,200(r31)
	REX_STORE_U32(r31.u32 + 200, r30.u32);
	// stw r30,204(r31)
	REX_STORE_U32(r31.u32 + 204, r30.u32);
	// sth r11,182(r31)
	REX_STORE_U16(r31.u32 + 182, ctx.r11.u16);
	// stw r30,208(r31)
	REX_STORE_U32(r31.u32 + 208, r30.u32);
	// stw r30,212(r31)
	REX_STORE_U32(r31.u32 + 212, r30.u32);
	// stw r30,216(r31)
	REX_STORE_U32(r31.u32 + 216, r30.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82118320) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// bl 0x821fedc8
	ctx.lr = 0x82118344;
	sub_821FEDC8(ctx, base);
	// stfs f1,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
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

DEFINE_REX_FUNC(sub_82118DE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lfs f0,204(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,1936
	ctx.r11.s64 = ctx.r11.s64 + 1936;
	// lfs f13,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f0,204(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// lfs f0,204(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// lfs f0,204(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,236(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 236, temp.u32);
	// lfs f0,124(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82118e2c
	if (ctx.cr6.lt) goto loc_82118E2C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,28548(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28548);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82118e40
	if (!ctx.cr6.gt) goto loc_82118E40;
loc_82118E2C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,204(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 204);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,204(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 204, temp.u32);
loc_82118E40:
	// lfs f0,204(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,200(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f0,204(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r11,12
	ctx.r11.s64 = 12;
	// stb r11,36(r3)
	REX_STORE_U8(ctx.r3.u32 + 36, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8211B640) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e74
	ctx.lr = 0x8211B648;
	// stfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -104, f29.u64);
	// stfd f30,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, f30.u64);
	// stfd f31,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,-32044(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -32044);
	// bl 0x82208828
	ctx.lr = 0x8211B66C;
	sub_82208828(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lis r5,255
	ctx.r5.s64 = 16711680;
	// li r6,2
	ctx.r6.s64 = 2;
	// ori r5,r5,255
	ctx.r5.u64 = ctx.r5.u64 | 255;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x821f0998
	ctx.lr = 0x8211B688;
	sub_821F0998(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r23,1
	r23.s64 = 1;
	// lhz r11,432(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 432);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8211b6a8
	if (ctx.cr0.eq) goto loc_8211B6A8;
	// lha r11,16(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 16));
	// rlwimi r11,r23,10,20,21
	ctx.r11.u64 = (__builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 10) & 0xC00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF3FF);
	// sth r11,16(r30)
	REX_STORE_U16(r30.u32 + 16, ctx.r11.u16);
loc_8211B6A8:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r9,r11,-7072
	ctx.r9.s64 = ctx.r11.s64 + -7072;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r10,r10,320
	ctx.r10.s64 = ctx.r10.s64 + 320;
	// ori r8,r11,3708
	ctx.r8.u64 = ctx.r11.u64 | 3708;
	// li r24,0
	r24.s64 = 0;
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lis r31,-32173
	r31.s64 = -2108489728;
	// mr r28,r24
	r28.u64 = r24.u64;
	// lwz r25,44(r10)
	r25.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwzx r26,r9,r8
	r26.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8211b730
	if (ctx.cr0.eq) goto loc_8211B730;
	// lbz r11,103(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 103);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8211b730
	if (ctx.cr0.eq) goto loc_8211B730;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// lwz r28,508(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 508);
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// bl 0x821fa860
	ctx.lr = 0x8211B700;
	sub_821FA860(ctx, base);
	// addi r11,r3,112
	ctx.r11.s64 = ctx.r3.s64 + 112;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// lwz r27,508(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 508);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x821fa860
	ctx.lr = 0x8211B71C;
	sub_821FA860(ctx, base);
	// addi r11,r3,336
	ctx.r11.s64 = ctx.r3.s64 + 336;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f31.f64 = double(temp.f32);
	// b 0x8211b734
	goto loc_8211B734;
loc_8211B730:
	// lfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f31.f64 = double(temp.f32);
loc_8211B734:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8211b788
	if (ctx.cr6.eq) goto loc_8211B788;
	// lbz r11,103(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 103);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8211b788
	if (ctx.cr0.eq) goto loc_8211B788;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// lwz r29,508(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 508);
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// bl 0x821fa860
	ctx.lr = 0x8211B758;
	sub_821FA860(ctx, base);
	// addi r11,r3,112
	ctx.r11.s64 = ctx.r3.s64 + 112;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// lwz r27,508(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 508);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x821fa860
	ctx.lr = 0x8211B774;
	sub_821FA860(ctx, base);
	// addi r11,r3,336
	ctx.r11.s64 = ctx.r3.s64 + 336;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8211b78c
	goto loc_8211B78C;
loc_8211B788:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
loc_8211B78C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// lfs f29,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f29.f64 = double(temp.f32);
	// lfs f30,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f30.f64 = double(temp.f32);
	// beq cr6,0x8211b7f0
	if (ctx.cr6.eq) goto loc_8211B7F0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8211b7cc
	if (ctx.cr6.eq) goto loc_8211B7CC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 + f31.f64));
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lfs f1,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e2028
	ctx.lr = 0x8211B7C8;
	sub_820E2028(ctx, base);
	// b 0x8211b8bc
	goto loc_8211B8BC;
loc_8211B7CC:
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r11,r30,96
	ctx.r11.s64 = r30.s64 + 96;
	// stw r10,96(r30)
	REX_STORE_U32(r30.u32 + 96, ctx.r10.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stw r11,100(r30)
	REX_STORE_U32(r30.u32 + 100, ctx.r11.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// b 0x8211b81c
	goto loc_8211B81C;
loc_8211B7F0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8211b824
	if (ctx.cr6.eq) goto loc_8211B824;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r11,r30,96
	ctx.r11.s64 = r30.s64 + 96;
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f0.f64;
	// stw r10,96(r30)
	REX_STORE_U32(r30.u32 + 96, ctx.r10.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r11,100(r30)
	REX_STORE_U32(r30.u32 + 100, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
loc_8211B81C:
	// stw r11,108(r30)
	REX_STORE_U32(r30.u32 + 108, ctx.r11.u32);
	// b 0x8211b8bc
	goto loc_8211B8BC;
loc_8211B824:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8211b89c
	if (ctx.cr6.eq) goto loc_8211B89C;
	// lbz r11,103(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 103);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8211b89c
	if (ctx.cr0.eq) goto loc_8211B89C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// lwz r29,508(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 508);
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// bl 0x821fa860
	ctx.lr = 0x8211B848;
	sub_821FA860(ctx, base);
	// addi r11,r3,112
	ctx.r11.s64 = ctx.r3.s64 + 112;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r30,96
	ctx.r11.s64 = r30.s64 + 96;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,96(r30)
	REX_STORE_U32(r30.u32 + 96, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,100(r30)
	REX_STORE_U32(r30.u32 + 100, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,108(r30)
	REX_STORE_U32(r30.u32 + 108, ctx.r11.u32);
	// lwz r31,508(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 508);
	// bl 0x821fa860
	ctx.lr = 0x8211B888;
	sub_821FA860(ctx, base);
	// addi r11,r3,336
	ctx.r11.s64 = ctx.r3.s64 + 336;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f31.f64 = double(temp.f32);
	// b 0x8211b8bc
	goto loc_8211B8BC;
loc_8211B89C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f30,96(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 96, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f30,104(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 104, temp.u32);
	// stfs f29,108(r30)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r30.u32 + 108, temp.u32);
	// lfs f0,2024(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2024);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f31.f64 = double(temp.f32);
	// stfs f0,100(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 100, temp.u32);
loc_8211B8BC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// lfs f0,2356(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2356);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 * ctx.f0.f64));
	// bl 0x82204ae0
	ctx.lr = 0x8211B8D4;
	sub_82204AE0(ctx, base);
	// stfs f1,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 112, temp.u32);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r4,r30,80
	ctx.r4.s64 = r30.s64 + 80;
	// lwz r11,7792(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7792);
	// addi r3,r11,1700
	ctx.r3.s64 = ctx.r11.s64 + 1700;
	// bl 0x82202070
	ctx.lr = 0x8211B8EC;
	sub_82202070(ctx, base);
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// stw r11,136(r30)
	REX_STORE_U32(r30.u32 + 136, ctx.r11.u32);
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8211b964
	if (ctx.cr6.gt) goto loc_8211B964;
	// lwz r11,144(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 144);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211B918;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,-30968
	ctx.r6.s64 = ctx.r10.s64 + -30968;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,777
	ctx.r4.s64 = 777;
	// bl 0x821f7d50
	ctx.lr = 0x8211B940;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8211b95c
	if (ctx.cr0.eq) goto loc_8211B95C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r7,132(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 132);
	// lwz r6,128(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 128);
	// lwz r5,116(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 116);
	// bl 0x8211ac88
	ctx.lr = 0x8211B95C;
	sub_8211AC88(ctx, base);
loc_8211B95C:
	// stw r23,132(r30)
	REX_STORE_U32(r30.u32 + 132, r23.u32);
	// b 0x8211b994
	goto loc_8211B994;
loc_8211B964:
	// lwz r11,140(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 140);
	// lha r9,64(r30)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r30.u32 + 64));
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x8211b994
	if (!ctx.cr6.lt) goto loc_8211B994;
	// bl 0x821fedc8
	ctx.lr = 0x8211B980;
	sub_821FEDC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,19788(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 19788);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8211b994
	if (!ctx.cr6.lt) goto loc_8211B994;
	// stw r24,132(r30)
	REX_STORE_U32(r30.u32 + 132, r24.u32);
loc_8211B994:
	// stw r24,140(r30)
	REX_STORE_U32(r30.u32 + 140, r24.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_82128D58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r8,r4,48
	ctx.r8.s64 = ctx.r4.s64 + 48;
	// lbz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r7,r11,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF00;
	// rlwinm r11,r9,8,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// rlwimi r7,r9,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r9,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// rlwinm r7,r7,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// rlwimi r7,r9,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r9,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// rlwinm r7,r7,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// rlwimi r7,r9,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r9,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// rlwinm r7,r7,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 16);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// rlwimi r7,r9,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r9,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// rlwinm r7,r7,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// rlwimi r7,r9,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r9,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// rlwinm r7,r7,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 24);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// rlwimi r7,r9,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r9,24,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// rlwinm r7,r7,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// sth r10,28(r11)
	REX_STORE_U16(ctx.r11.u32 + 28, ctx.r10.u16);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lhz r10,30(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// rlwinm r7,r7,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// sth r10,30(r11)
	REX_STORE_U16(ctx.r11.u32 + 30, ctx.r10.u16);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 32);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// rlwinm r7,r7,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// sth r10,32(r11)
	REX_STORE_U16(ctx.r11.u32 + 32, ctx.r10.u16);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r10,34(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 34);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// rlwinm r7,r7,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// sth r10,34(r11)
	REX_STORE_U16(ctx.r11.u32 + 34, ctx.r10.u16);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 36);
	// lwz r7,36(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// rlwinm r5,r7,24,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF00;
	// rlwimi r6,r7,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// or r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// lhz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// sth r7,-16(r1)
	REX_STORE_U16(ctx.r1.u32 + -16, ctx.r7.u16);
	// lbz r7,-15(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + -15);
	// lbz r10,-16(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + -16);
	// stb r10,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
	// stb r7,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lha r7,28(r11)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 28));
	// lha r6,32(r11)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 32));
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// rlwinm r8,r6,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r10,r4
	ctx.r7.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r8,r7,48
	ctx.r8.s64 = ctx.r7.s64 + 48;
	// addi r10,r10,63
	ctx.r10.s64 = ctx.r10.s64 + 63;
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lha r11,28(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 28));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821290b8
	if (!ctx.cr0.gt) goto loc_821290B8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82128FB8:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lhzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// sthx r8,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u16);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r7,2(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// lhz r8,2(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// sth r8,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lbz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lhz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// sth r8,4(r10)
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r8.u16);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r6,6(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// lhz r8,6(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// rotlwi r7,r8,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r8,r10,6
	ctx.r8.s64 = ctx.r10.s64 + 6;
	// or r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 | ctx.r6.u64;
	// sth r8,6(r10)
	REX_STORE_U16(ctx.r10.u32 + 6, ctx.r8.u16);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// lhz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// sth r8,8(r10)
	REX_STORE_U16(ctx.r10.u32 + 8, ctx.r8.u16);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r10,10
	ctx.r8.s64 = ctx.r10.s64 + 10;
	// lbz r7,10(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 10);
	// lhz r8,10(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 10);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// sth r8,10(r10)
	REX_STORE_U16(ctx.r10.u32 + 10, ctx.r8.u16);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r7,12(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 12);
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// lwz r8,12(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rlwinm r5,r8,24,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00;
	// rlwimi r6,r8,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// or r8,r5,r7
	ctx.r8.u64 = ctx.r5.u64 | ctx.r7.u64;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r8,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lha r10,28(r10)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 28));
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82128fb8
	if (ctx.cr6.lt) goto loc_82128FB8;
loc_821290B8:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lha r11,32(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 32));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8212917c
	if (!ctx.cr0.gt) goto loc_8212917C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
loc_821290D4:
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,28
	ctx.r8.s64 = 28;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lbzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// rlwinm r31,r5,24,16,23
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF00;
	// rlwimi r4,r5,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r5,r4,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFF0000;
	// or r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 | r31.u64;
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// stwx r8,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// rlwimi r4,r5,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r5,r5,24,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF00;
	// rlwinm r4,r4,8,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFF0000;
	// or r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 | ctx.r5.u64;
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82129134:
	// add r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r8,r10
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// lbzx r4,r8,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// rotlwi r5,r5,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// or r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 | ctx.r4.u64;
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// sthx r5,r8,r10
	REX_STORE_U16(ctx.r8.u32 + ctx.r10.u32, ctx.r5.u16);
	// bdnz 0x82129134
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82129134;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// lha r10,32(r10)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 32));
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821290d4
	if (ctx.cr6.lt) goto loc_821290D4;
loc_8212917C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lha r11,30(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 30));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821291ec
	if (!ctx.cr0.gt) goto loc_821291EC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82129194:
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,16
	ctx.r10.s64 = 16;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821291A8:
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lbz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwinm r5,r10,24,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r6,r10,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// rlwinm r7,r6,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 | ctx.r5.u64;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x821291a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821291A8;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// lha r10,30(r10)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 30));
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82129194
	if (ctx.cr6.lt) goto loc_82129194;
loc_821291EC:
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8213E980) {
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
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821336c0
	ctx.lr = 0x8213E99C;
	sub_821336C0(ctx, base);
	// rlwinm. r11,r3,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213e9bc
	if (ctx.cr0.eq) goto loc_8213E9BC;
	// addi r11,r4,13
	ctx.r11.s64 = ctx.r4.s64 + 13;
	// mulli r11,r11,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(6));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stbx r10,r11,r31
	REX_STORE_U8(ctx.r11.u32 + r31.u32, ctx.r10.u8);
loc_8213E9BC:
	// rlwinm. r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213e9dc
	if (ctx.cr0.eq) goto loc_8213E9DC;
	// addi r11,r4,15
	ctx.r11.s64 = ctx.r4.s64 + 15;
	// mulli r11,r11,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(6));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stbx r10,r11,r31
	REX_STORE_U8(ctx.r11.u32 + r31.u32, ctx.r10.u8);
loc_8213E9DC:
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213ea00
	if (ctx.cr0.eq) goto loc_8213EA00;
	// mulli r11,r4,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(6));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r10,r11,85
	ctx.r10.s64 = ctx.r11.s64 + 85;
	// lbz r10,85(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 85);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stb r10,85(r11)
	REX_STORE_U8(ctx.r11.u32 + 85, ctx.r10.u8);
loc_8213EA00:
	// rlwinm. r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213ea24
	if (ctx.cr0.eq) goto loc_8213EA24;
	// mulli r11,r4,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(6));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r10,r11,83
	ctx.r10.s64 = ctx.r11.s64 + 83;
	// lbz r10,83(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 83);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stb r10,83(r11)
	REX_STORE_U8(ctx.r11.u32 + 83, ctx.r10.u8);
loc_8213EA24:
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

DEFINE_REX_FUNC(sub_821454C8) {
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
	// bl 0x822d4e78
	ctx.lr = 0x821454D0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r31,r11,23912
	r31.s64 = ctx.r11.s64 + 23912;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r25,12(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r10,271
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 271, ctx.xer);
	// bne cr6,0x82145500
	if (!ctx.cr6.eq) goto loc_82145500;
	// li r11,265
	ctx.r11.s64 = 265;
	// li r10,256
	ctx.r10.s64 = 256;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// b 0x82145514
	goto loc_82145514;
loc_82145500:
	// li r11,256
	ctx.r11.s64 = 256;
	// li r10,259
	ctx.r10.s64 = 259;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// bl 0x82141538
	ctx.lr = 0x82145514;
	sub_82141538(ctx, base);
loc_82145514:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r30,0
	r30.s64 = 0;
	// addi r10,r10,20640
	ctx.r10.s64 = ctx.r10.s64 + 20640;
	// lwz r11,7840(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7840);
	// li r8,64
	ctx.r8.s64 = 64;
	// stw r30,168(r31)
	REX_STORE_U32(r31.u32 + 168, r30.u32);
	// addi r7,r10,368
	ctx.r7.s64 = ctx.r10.s64 + 368;
	// stw r30,172(r31)
	REX_STORE_U32(r31.u32 + 172, r30.u32);
	// lfs f13,1996(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r11,108
	ctx.r9.s64 = ctx.r11.s64 + 108;
	// stw r30,176(r31)
	REX_STORE_U32(r31.u32 + 176, r30.u32);
	// addi r9,r31,168
	ctx.r9.s64 = r31.s64 + 168;
	// stw r30,180(r31)
	REX_STORE_U32(r31.u32 + 180, r30.u32);
	// stfs f13,108(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stfs f13,112(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stfs f13,116(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// stfs f13,120(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
loc_8214556C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8214556c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8214556C;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r30,352(r10)
	REX_STORE_U32(ctx.r10.u32 + 352, r30.u32);
	// stw r30,356(r10)
	REX_STORE_U32(ctx.r10.u32 + 356, r30.u32);
	// addi r9,r10,320
	ctx.r9.s64 = ctx.r10.s64 + 320;
	// stw r30,360(r10)
	REX_STORE_U32(ctx.r10.u32 + 360, r30.u32);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// stw r30,364(r10)
	REX_STORE_U32(ctx.r10.u32 + 364, r30.u32);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82145598:
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82145598
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82145598;
	// li r11,64
	ctx.r11.s64 = 64;
	// addi r9,r10,256
	ctx.r9.s64 = ctx.r10.s64 + 256;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821455B4:
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x821455b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821455B4;
	// li r11,64
	ctx.r11.s64 = 64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821455CC:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821455cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821455CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82130e40
	ctx.lr = 0x821455DC;
	sub_82130E40(ctx, base);
	// li r10,48
	ctx.r10.s64 = 48;
	// lis r11,85
	ctx.r11.s64 = 5570560;
	// ori r11,r11,9016
	ctx.r11.u64 = ctx.r11.u64 | 9016;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// addi r29,r10,-8304
	r29.s64 = ctx.r10.s64 + -8304;
loc_821455F4:
	// lwz r10,48(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 48);
	// stwx r30,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821455f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821455F4;
	// li r10,64
	ctx.r10.s64 = 64;
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 48);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// stw r30,132(r31)
	REX_STORE_U32(r31.u32 + 132, r30.u32);
	// addis r8,r11,85
	ctx.r8.s64 = ctx.r11.s64 + 5570560;
	// stw r30,136(r31)
	REX_STORE_U32(r31.u32 + 136, r30.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r30,140(r31)
	REX_STORE_U32(r31.u32 + 140, r30.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r30,144(r31)
	REX_STORE_U32(r31.u32 + 144, r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addis r10,r11,85
	ctx.r10.s64 = ctx.r11.s64 + 5570560;
	// stw r30,148(r31)
	REX_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r30,152(r31)
	REX_STORE_U32(r31.u32 + 152, r30.u32);
	// addi r8,r8,8696
	ctx.r8.s64 = ctx.r8.s64 + 8696;
	// stw r30,156(r31)
	REX_STORE_U32(r31.u32 + 156, r30.u32);
	// addi r10,r10,8756
	ctx.r10.s64 = ctx.r10.s64 + 8756;
	// stw r30,160(r31)
	REX_STORE_U32(r31.u32 + 160, r30.u32);
	// stw r30,164(r31)
	REX_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r30,180(r31)
	REX_STORE_U32(r31.u32 + 180, r30.u32);
	// stw r30,176(r31)
	REX_STORE_U32(r31.u32 + 176, r30.u32);
	// stw r30,172(r31)
	REX_STORE_U32(r31.u32 + 172, r30.u32);
	// stw r30,168(r31)
	REX_STORE_U32(r31.u32 + 168, r30.u32);
	// stw r30,184(r31)
	REX_STORE_U32(r31.u32 + 184, r30.u32);
	// stw r30,200(r31)
	REX_STORE_U32(r31.u32 + 200, r30.u32);
	// stw r30,196(r31)
	REX_STORE_U32(r31.u32 + 196, r30.u32);
	// stw r30,192(r31)
	REX_STORE_U32(r31.u32 + 192, r30.u32);
	// stw r30,188(r31)
	REX_STORE_U32(r31.u32 + 188, r30.u32);
loc_82145678:
	// stw r30,-316(r10)
	REX_STORE_U32(ctx.r10.u32 + -316, r30.u32);
	// stbx r30,r8,r9
	REX_STORE_U8(ctx.r8.u32 + ctx.r9.u32, r30.u8);
	// stfsu f13,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82145678
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82145678;
	// lis r10,85
	ctx.r10.s64 = 5570560;
	// lis r9,85
	ctx.r9.s64 = 5570560;
	// ori r10,r10,29696
	ctx.r10.u64 = ctx.r10.u64 | 29696;
	// ori r9,r9,29712
	ctx.r9.u64 = ctx.r9.u64 | 29712;
	// lis r8,85
	ctx.r8.s64 = 5570560;
	// lis r7,85
	ctx.r7.s64 = 5570560;
	// lis r6,85
	ctx.r6.s64 = 5570560;
	// ori r5,r8,29700
	ctx.r5.u64 = ctx.r8.u64 | 29700;
	// stwx r30,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r30.u32);
	// ori r7,r7,29708
	ctx.r7.u64 = ctx.r7.u64 | 29708;
	// stwx r30,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r30.u32);
	// ori r6,r6,29704
	ctx.r6.u64 = ctx.r6.u64 | 29704;
	// li r8,5
	ctx.r8.s64 = 5;
	// addis r9,r11,85
	ctx.r9.s64 = ctx.r11.s64 + 5570560;
	// addis r10,r11,85
	ctx.r10.s64 = ctx.r11.s64 + 5570560;
	// stwx r30,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, r30.u32);
	// stfsx f13,r11,r7
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, temp.u32);
	// addi r9,r9,8308
	ctx.r9.s64 = ctx.r9.s64 + 8308;
	// stfsx f13,r11,r6
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// addi r10,r10,8184
	ctx.r10.s64 = ctx.r10.s64 + 8184;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r26,1
	r26.s64 = 1;
loc_821456E4:
	// li r8,-1
	ctx.r8.s64 = -1;
	// stwu r26,16(r10)
	ea = 16 + ctx.r10.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x821456e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821456E4;
	// li r9,4
	ctx.r9.s64 = 4;
	// addis r10,r11,85
	ctx.r10.s64 = ctx.r11.s64 + 5570560;
	// addi r10,r10,8324
	ctx.r10.s64 = ctx.r10.s64 + 8324;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82145704:
	// stwu r26,16(r10)
	ea = 16 + ctx.r10.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82145704
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82145704;
	// lis r10,85
	ctx.r10.s64 = 5570560;
	// lis r9,85
	ctx.r9.s64 = 5570560;
	// ori r10,r10,8436
	ctx.r10.u64 = ctx.r10.u64 | 8436;
	// ori r9,r9,8432
	ctx.r9.u64 = ctx.r9.u64 | 8432;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r30,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r30.u32);
	// stwx r30,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r30.u32);
	// bl 0x8212bf38
	ctx.lr = 0x82145734;
	sub_8212BF38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8212bf38
	ctx.lr = 0x82145744;
	sub_8212BF38(ctx, base);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// addi r8,r10,21824
	ctx.r8.s64 = ctx.r10.s64 + 21824;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r27,r9,432
	r27.s64 = ctx.r9.s64 + 432;
	// stw r30,20(r8)
	REX_STORE_U32(ctx.r8.u32 + 20, r30.u32);
	// stw r30,108(r8)
	REX_STORE_U32(ctx.r8.u32 + 108, r30.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821457bc
	if (!ctx.cr6.eq) goto loc_821457BC;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x821457bc
	if (!ctx.cr6.eq) goto loc_821457BC;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821457bc
	if (!ctx.cr6.eq) goto loc_821457BC;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// addi r11,r11,22984
	ctx.r11.s64 = ctx.r11.s64 + 22984;
	// addi r10,r10,23232
	ctx.r10.s64 = ctx.r10.s64 + 23232;
	// lbz r11,9(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82145858
	if (ctx.cr6.eq) goto loc_82145858;
loc_821457BC:
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 48);
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r4,344(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 344);
	// addis r24,r11,85
	r24.s64 = ctx.r11.s64 + 5570560;
	// addi r24,r24,29716
	r24.s64 = r24.s64 + 29716;
	// lwz r11,-32480(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
	// addi r28,r11,96
	r28.s64 = ctx.r11.s64 + 96;
	// bl 0x820e6878
	ctx.lr = 0x821457E0;
	sub_820E6878(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82130818
	ctx.lr = 0x821457F0;
	sub_82130818(ctx, base);
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 48);
	// li r6,0
	ctx.r6.s64 = 0;
	// addis r5,r11,85
	ctx.r5.s64 = ctx.r11.s64 + 5570560;
	// addis r4,r11,74
	ctx.r4.s64 = ctx.r11.s64 + 4849664;
	// li r3,205
	ctx.r3.s64 = 205;
	// addi r5,r5,8332
	ctx.r5.s64 = ctx.r5.s64 + 8332;
	// addi r4,r4,8192
	ctx.r4.s64 = ctx.r4.s64 + 8192;
	// bl 0x82130818
	ctx.lr = 0x82145810;
	sub_82130818(ctx, base);
	// cmpwi cr6,r25,264
	ctx.cr6.compare<int32_t>(r25.s32, 264, ctx.xer);
	// bne cr6,0x82145824
	if (!ctx.cr6.eq) goto loc_82145824;
	// li r11,259
	ctx.r11.s64 = 259;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// b 0x82145858
	goto loc_82145858;
loc_82145824:
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 48);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,207
	ctx.r3.s64 = 207;
	// addis r5,r11,85
	ctx.r5.s64 = ctx.r11.s64 + 5570560;
	// addis r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 3670016;
	// addi r5,r5,8348
	ctx.r5.s64 = ctx.r5.s64 + 8348;
	// bl 0x82130818
	ctx.lr = 0x82145840;
	sub_82130818(ctx, base);
	// lwz r4,48(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 48);
	// li r6,0
	ctx.r6.s64 = 0;
	// addis r5,r4,85
	ctx.r5.s64 = ctx.r4.s64 + 5570560;
	// li r3,203
	ctx.r3.s64 = 203;
	// addi r5,r5,8364
	ctx.r5.s64 = ctx.r5.s64 + 8364;
	// bl 0x82130818
	ctx.lr = 0x82145858;
	sub_82130818(ctx, base);
loc_82145858:
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r27,84
	ctx.r3.s64 = r27.s64 + 84;
	// bl 0x821d6210
	ctx.lr = 0x82145864;
	sub_821D6210(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// stw r10,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// bl 0x8212c6a0
	ctx.lr = 0x82145878;
	sub_8212C6A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r9,-32175
	ctx.r9.s64 = -2108620800;
	// addi r7,r10,24688
	ctx.r7.s64 = ctx.r10.s64 + 24688;
	// lhz r11,524(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 524);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r8,r11,24912
	ctx.r8.s64 = ctx.r11.s64 + 24912;
	// bne cr6,0x821458b4
	if (!ctx.cr6.eq) goto loc_821458B4;
	// addi r9,r9,24464
	ctx.r9.s64 = ctx.r9.s64 + 24464;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r30,76(r9)
	REX_STORE_U32(ctx.r9.u32 + 76, r30.u32);
	// b 0x821458c8
	goto loc_821458C8;
loc_821458B4:
	// addi r6,r9,24464
	ctx.r6.s64 = ctx.r9.s64 + 24464;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// stw r26,76(r6)
	REX_STORE_U32(ctx.r6.u32 + 76, r26.u32);
loc_821458C8:
	// stw r10,76(r7)
	REX_STORE_U32(ctx.r7.u32 + 76, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,76(r8)
	REX_STORE_U32(ctx.r8.u32 + 76, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2340);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,16200(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16200);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x821ff668
	ctx.lr = 0x821458E4;
	sub_821FF668(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8215BC08) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,520(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 520);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,512(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 512);
	// b 0x8215bc38
	goto loc_8215BC38;
loc_8215BC1C:
	// lbz r10,23(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 23);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x8215bc34
	if (!ctx.cr6.eq) goto loc_8215BC34;
	// addic r10,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// subfe r10,r10,r5
	temp.u8 = (~ctx.r10.u32 + ctx.r5.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// sth r10,20(r11)
	REX_STORE_U16(ctx.r11.u32 + 20, ctx.r10.u16);
loc_8215BC34:
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
loc_8215BC38:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8215bc1c
	if (!ctx.cr6.eq) goto loc_8215BC1C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8215C0C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,22(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 22);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8215c11c
	if (ctx.cr6.eq) goto loc_8215C11C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8215c11c
	if (ctx.cr6.eq) goto loc_8215C11C;
	// lfs f0,80(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r4,48
	ctx.r4.s64 = ctx.r4.s64 + 48;
	// lfs f13,80(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// fadds f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x820e2148
	ctx.lr = 0x8215C100;
	sub_820E2148(ctx, base);
	// fmuls f0,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64 * f31.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8215c114
	if (ctx.cr6.lt) goto loc_8215C114;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8215C114:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8215c120
	goto loc_8215C120;
loc_8215C11C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8215C120:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8215CD78) {
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
	ctx.lr = 0x8215CD80;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r29,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, r29.u32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// stw r3,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bge cr6,0x8215ce70
	if (!ctx.cr6.lt) goto loc_8215CE70;
loc_8215CDB4:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8215cdcc
	if (ctx.cr6.eq) goto loc_8215CDCC;
	// subf r11,r31,r3
	ctx.r11.u64 = ctx.r3.u64 - r31.u64;
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
loc_8215CDCC:
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8215ce28
	if (ctx.cr6.lt) goto loc_8215CE28;
	// beq cr6,0x8215ce08
	if (ctx.cr6.eq) goto loc_8215CE08;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8215ce44
	if (!ctx.cr6.lt) goto loc_8215CE44;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215cdf8
	if (ctx.cr6.eq) goto loc_8215CDF8;
	// bl 0x8215c370
	ctx.lr = 0x8215CDF4;
	sub_8215C370(ctx, base);
	// b 0x8215cdfc
	goto loc_8215CDFC;
loc_8215CDF8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8215CDFC:
	// addi r3,r3,136
	ctx.r3.s64 = ctx.r3.s64 + 136;
	// addi r4,r4,48
	ctx.r4.s64 = ctx.r4.s64 + 48;
	// b 0x8215ce44
	goto loc_8215CE44;
loc_8215CE08:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215ce18
	if (ctx.cr6.eq) goto loc_8215CE18;
	// bl 0x8215c1d0
	ctx.lr = 0x8215CE14;
	sub_8215C1D0(ctx, base);
	// b 0x8215ce1c
	goto loc_8215CE1C;
loc_8215CE18:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8215CE1C:
	// addi r3,r3,136
	ctx.r3.s64 = ctx.r3.s64 + 136;
	// addi r4,r4,40
	ctx.r4.s64 = ctx.r4.s64 + 40;
	// b 0x8215ce44
	goto loc_8215CE44;
loc_8215CE28:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215ce38
	if (ctx.cr6.eq) goto loc_8215CE38;
	// bl 0x8215bfe8
	ctx.lr = 0x8215CE34;
	sub_8215BFE8(ctx, base);
	// b 0x8215ce3c
	goto loc_8215CE3C;
loc_8215CE38:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8215CE3C:
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
loc_8215CE44:
	// lhz r11,2(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8215ce5c
	if (!ctx.cr6.lt) goto loc_8215CE5C;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_8215CE5C:
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x8215cdb4
	if (ctx.cr6.lt) goto loc_8215CDB4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bgt cr6,0x8215ce74
	if (ctx.cr6.gt) goto loc_8215CE74;
loc_8215CE70:
	// stw r29,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r29.u32);
loc_8215CE74:
	// addi r11,r3,15
	ctx.r11.s64 = ctx.r3.s64 + 15;
	// rlwinm r3,r11,0,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// subf r11,r27,r3
	ctx.r11.u64 = ctx.r3.u64 - r27.u64;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82161540) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-11816
	ctx.r11.s64 = ctx.r11.s64 + -11816;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8216156c
	if (ctx.cr0.eq) goto loc_8216156C;
	// bl 0x822c80a8
	ctx.lr = 0x8216156C;
	sub_822C80A8(ctx, base);
loc_8216156C:
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

DEFINE_REX_FUNC(sub_82162F78) {
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
	// bl 0x822d4e68
	ctx.lr = 0x82162F80;
	// addi r31,r1,-1232
	r31.s64 = ctx.r1.s64 + -1232;
	// stwu r1,-1232(r1)
	ea = -1232 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// srawi r9,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 3;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addze. r10,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r10.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
	// blt 0x82162fe0
	if (ctx.cr0.lt) goto loc_82162FE0;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// addi r10,r8,-2
	ctx.r10.s64 = ctx.r8.s64 + -2;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82162FD4:
	// lhau r7,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ea));
	ctx.r10.u32 = ea;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// bdnz 0x82162fd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82162FD4;
loc_82162FE0:
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// srawi r7,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 3;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r10,31,1,31
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addze r9,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r7,r30,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// neg r11,r7
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// subf r26,r9,r4
	r26.u64 = ctx.r4.u64 - ctx.r9.u64;
	// bl 0x822d6634
	ctx.lr = 0x82163010;
	sub_822D6634(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r25,r1,80
	r25.s64 = ctx.r1.s64 + 80;
	// ble cr6,0x82163044
	if (!ctx.cr6.gt) goto loc_82163044;
	// subf r9,r10,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r10.u64;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// addi r11,r25,-2
	ctx.r11.s64 = r25.s64 + -2;
loc_82163030:
	// lhz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// sthx r8,r9,r10
	REX_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// sthu r3,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x82163030
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82163030;
loc_82163044:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x82163054
	if (!ctx.cr6.eq) goto loc_82163054;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82163184
	if (ctx.cr6.eq) goto loc_82163184;
loc_82163054:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// stb r3,100(r31)
	REX_STORE_U8(r31.u32 + 100, ctx.r3.u8);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r11,r11,-11816
	ctx.r11.s64 = ctx.r11.s64 + -11816;
	// stb r3,101(r31)
	REX_STORE_U8(r31.u32 + 101, ctx.r3.u8);
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82161588
	ctx.lr = 0x82163084;
	sub_82161588(ctx, base);
	// mr r23,r26
	r23.u64 = r26.u64;
	// b 0x821630f0
	goto loc_821630F0;
loc_8216308C:
	// addi r26,r26,-1
	r26.s64 = r26.s64 + -1;
	// mr r29,r22
	r29.u64 = r22.u64;
	// mr r27,r30
	r27.u64 = r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x821630f0
	if (!ctx.cr6.gt) goto loc_821630F0;
	// subf r28,r22,r25
	r28.u64 = r25.u64 - r22.u64;
loc_821630A4:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821616f0
	ctx.lr = 0x821630B0;
	sub_821616F0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x821613c8
	ctx.lr = 0x821630C0;
	sub_821613C8(ctx, base);
	// lhzx r11,r28,r29
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + r29.u32);
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// sthx r11,r28,r29
	REX_STORE_U16(r28.u32 + r29.u32, ctx.r11.u16);
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,0(r29)
	REX_STORE_U16(r29.u32 + 0, ctx.r11.u16);
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// bgt 0x821630a4
	if (ctx.cr0.gt) goto loc_821630A4;
loc_821630F0:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bgt cr6,0x8216308c
	if (ctx.cr6.gt) goto loc_8216308C;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82163184
	if (ctx.cr6.eq) goto loc_82163184;
	// addi r11,r23,1
	ctx.r11.s64 = r23.s64 + 1;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82163124
	if (!ctx.cr6.eq) goto loc_82163124;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r4,r20,1
	ctx.r4.s64 = r20.s64 + 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82162f78
	ctx.lr = 0x82163120;
	sub_82162F78(ctx, base);
	// b 0x82163184
	goto loc_82163184;
loc_82163124:
	// mr r29,r25
	r29.u64 = r25.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x82163184
	if (!ctx.cr6.gt) goto loc_82163184;
	// subf r28,r25,r21
	r28.u64 = r21.u64 - r25.u64;
	// subf r27,r25,r22
	r27.u64 = r22.u64 - r25.u64;
loc_82163138:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821616f0
	ctx.lr = 0x82163144;
	sub_821616F0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x821613c8
	ctx.lr = 0x82163154;
	sub_821613C8(ctx, base);
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 0);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// sth r11,0(r29)
	REX_STORE_U16(r29.u32 + 0, ctx.r11.u16);
	// lhzx r11,r27,r29
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + r29.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sthx r11,r28,r29
	REX_STORE_U16(r28.u32 + r29.u32, ctx.r11.u16);
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// bgt 0x82163138
	if (ctx.cr0.gt) goto loc_82163138;
loc_82163184:
	// addi r1,r31,1232
	ctx.r1.s64 = r31.s64 + 1232;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_8216D828) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8216D830;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8216ca30
	ctx.lr = 0x8216D83C;
	sub_8216CA30(ctx, base);
	// lbz r11,89(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 89);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8216d9b0
	if (ctx.cr0.eq) goto loc_8216D9B0;
	// bl 0x821d1ed0
	ctx.lr = 0x8216D84C;
	sub_821D1ED0(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8216d98c
	if (ctx.cr6.lt) goto loc_8216D98C;
	// beq cr6,0x8216d890
	if (ctx.cr6.eq) goto loc_8216D890;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8216d888
	if (ctx.cr6.lt) goto loc_8216D888;
	// bne cr6,0x8216d9b0
	if (!ctx.cr6.eq) goto loc_8216D9B0;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lbz r11,3392(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3392);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x8216d9ac
	goto loc_8216D9AC;
loc_8216D888:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x8216d9ac
	goto loc_8216D9AC;
loc_8216D890:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r29,r11,432
	r29.s64 = ctx.r11.s64 + 432;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,2984
	ctx.r10.s64 = r29.s64 + 2984;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8216d934
	if (!ctx.cr6.eq) goto loc_8216D934;
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 112);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r11,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r11.u32);
	// lis r3,-32165
	ctx.r3.s64 = -2107965440;
	// addi r6,r8,-8456
	ctx.r6.s64 = ctx.r8.s64 + -8456;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,164(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 164);
	// addi r30,r31,164
	r30.s64 = r31.s64 + 164;
	// stw r11,192(r10)
	REX_STORE_U32(ctx.r10.u32 + 192, ctx.r11.u32);
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r10,168(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 168);
	// stw r11,192(r10)
	REX_STORE_U32(ctx.r10.u32 + 192, ctx.r11.u32);
	// lwz r3,-32480(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + -32480);
	// bl 0x821f7d50
	ctx.lr = 0x8216D8FC;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8216d91c
	if (ctx.cr0.eq) goto loc_8216D91C;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,2980(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 2980);
	// lwz r6,44(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// bl 0x82194580
	ctx.lr = 0x8216D91C;
	sub_82194580(ctx, base);
loc_8216D91C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r10,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,220(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 220, temp.u32);
	// b 0x8216d9b0
	goto loc_8216D9B0;
loc_8216D934:
	// li r11,11
	ctx.r11.s64 = 11;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r11,-12792
	ctx.r6.s64 = ctx.r11.s64 + -12792;
	// lwz r3,-32480(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
	// bl 0x821f7d50
	ctx.lr = 0x8216D954;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8216d980
	if (ctx.cr0.eq) goto loc_8216D980;
	// lwz r11,2980(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 2980);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r10,r10,13128
	ctx.r10.s64 = ctx.r10.s64 + 13128;
	// mulli r11,r11,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// li r5,9
	ctx.r5.s64 = 9;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82192960
	ctx.lr = 0x8216D97C;
	sub_82192960(ctx, base);
	// b 0x8216d984
	goto loc_8216D984;
loc_8216D980:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8216D984:
	// stw r3,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// b 0x8216d9b0
	goto loc_8216D9B0;
loc_8216D98C:
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
	ctx.lr = 0x8216D9A8;
	sub_821AFA50(ctx, base);
	// li r11,17
	ctx.r11.s64 = 17;
loc_8216D9AC:
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
loc_8216D9B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82172160) {
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
	// bl 0x822d4e84
	ctx.lr = 0x82172168;
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f29.u64);
	// stfd f30,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,1
	r30.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r30.u32);
	// bl 0x821aff90
	ctx.lr = 0x82172188;
	sub_821AFF90(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f7,16228(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16228);
	ctx.f7.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,-7604(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -7604);
	f31.f64 = double(temp.f32);
	// li r29,0
	r29.s64 = 0;
	// lfs f6,16264(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16264);
	ctx.f6.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f5,19796(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 19796);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-7444(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -7444);
	ctx.f4.f64 = double(temp.f32);
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// lfs f2,26840(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 26840);
	ctx.f2.f64 = double(temp.f32);
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// lfs f1,-7440(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -7440);
	ctx.f1.f64 = double(temp.f32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// bl 0x82104548
	ctx.lr = 0x821721E0;
	sub_82104548(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// lfs f0,26832(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26832);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 104, temp.u32);
	// stfs f31,112(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r8,-7088
	ctx.r6.s64 = ctx.r8.s64 + -7088;
	// lfs f0,-18812(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -18812);
	ctx.f0.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f31,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 108, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f31,116(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 116, temp.u32);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r28,104(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r27,108(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,112(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r11,r31,104
	ctx.r11.s64 = r31.s64 + 104;
	// stw r30,128(r31)
	REX_STORE_U32(r31.u32 + 128, r30.u32);
	// addi r30,r31,120
	r30.s64 = r31.s64 + 120;
	// stw r27,124(r31)
	REX_STORE_U32(r31.u32 + 124, r27.u32);
	// stw r28,120(r31)
	REX_STORE_U32(r31.u32 + 120, r28.u32);
	// stw r10,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r10.u32);
	// bl 0x821f7d50
	ctx.lr = 0x82172258;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82172274
	if (ctx.cr0.eq) goto loc_82172274;
	// li r6,14
	ctx.r6.s64 = 14;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82171b70
	ctx.lr = 0x82172270;
	sub_82171B70(ctx, base);
	// b 0x82172278
	goto loc_82172278;
loc_82172274:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82172278:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r3,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// lfs f0,29476(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 29476);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,-7092(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -7092);
	f30.f64 = double(temp.f32);
	// addi r6,r8,-7100
	ctx.r6.s64 = ctx.r8.s64 + -7100;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f29,15632(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15632);
	f29.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f29,112(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// stfs f30,120(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7d50
	ctx.lr = 0x821722D0;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821722ec
	if (ctx.cr0.eq) goto loc_821722EC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x8216ed68
	ctx.lr = 0x821722E8;
	sub_8216ED68(ctx, base);
	// b 0x821722f0
	goto loc_821722F0;
loc_821722EC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_821722F0:
	// stw r3,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r3.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f29,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,120(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r6,r10,-7112
	ctx.r6.s64 = ctx.r10.s64 + -7112;
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,-7104(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -7104);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7d50
	ctx.lr = 0x82172330;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217234c
	if (ctx.cr0.eq) goto loc_8217234C;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x8216ed68
	ctx.lr = 0x82172348;
	sub_8216ED68(ctx, base);
	// b 0x82172350
	goto loc_82172350;
loc_8217234C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82172350:
	// stw r3,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r3.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f30,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r8,-7124
	ctx.r6.s64 = ctx.r8.s64 + -7124;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,-7116(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -7116);
	ctx.f0.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f29,-18440(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -18440);
	f29.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// stfs f29,116(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7d50
	ctx.lr = 0x82172398;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821723b4
	if (ctx.cr0.eq) goto loc_821723B4;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x8216ed68
	ctx.lr = 0x821723B0;
	sub_8216ED68(ctx, base);
	// b 0x821723b8
	goto loc_821723B8;
loc_821723B4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_821723B8:
	// stw r3,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r3.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f29,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,120(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r6,r10,-7136
	ctx.r6.s64 = ctx.r10.s64 + -7136;
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,-7128(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -7128);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7d50
	ctx.lr = 0x821723F8;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82172414
	if (ctx.cr0.eq) goto loc_82172414;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x8216ed68
	ctx.lr = 0x82172410;
	sub_8216ED68(ctx, base);
	// b 0x82172418
	goto loc_82172418;
loc_82172414:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82172418:
	// stw r3,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,14
	ctx.r3.s64 = 14;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212bc38
	ctx.lr = 0x8217242C;
	sub_8212BC38(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r29,168(r31)
	REX_STORE_U32(r31.u32 + 168, r29.u32);
	// stw r11,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8217B3B0) {
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
	ctx.lr = 0x8217B3B8;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r11,r11,-5000
	ctx.r11.s64 = ctx.r11.s64 + -5000;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821e7888
	ctx.lr = 0x8217B3E4;
	sub_821E7888(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217b3fc
	if (!ctx.cr6.eq) goto loc_8217B3FC;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// b 0x8217b400
	goto loc_8217B400;
loc_8217B3FC:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_8217B400:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,2008(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f31.f64 = double(temp.f32);
	// stfs f13,200(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 200, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8217b430
	if (!ctx.cr6.eq) goto loc_8217B430;
	// stfs f31,200(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 200, temp.u32);
loc_8217B430:
	// li r29,1
	r29.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// addic. r11,r31,112
	ctx.xer.ca = r31.u32 > 4294967183;
	ctx.r11.s64 = r31.s64 + 112;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r29,88(r31)
	REX_STORE_U16(r31.u32 + 88, r29.u16);
	// stb r29,90(r31)
	REX_STORE_U8(r31.u32 + 90, r29.u8);
	// std r10,80(r31)
	REX_STORE_U64(r31.u32 + 80, ctx.r10.u64);
	// beq 0x8217b454
	if (ctx.cr0.eq) goto loc_8217B454;
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// b 0x8217b458
	goto loc_8217B458;
loc_8217B454:
	// stw r30,92(r31)
	REX_STORE_U32(r31.u32 + 92, r30.u32);
loc_8217B458:
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// stb r30,105(r31)
	REX_STORE_U8(r31.u32 + 105, r30.u8);
	// stb r30,106(r31)
	REX_STORE_U8(r31.u32 + 106, r30.u8);
	// addi r11,r11,-28432
	ctx.r11.s64 = ctx.r11.s64 + -28432;
	// stb r30,107(r31)
	REX_STORE_U8(r31.u32 + 107, r30.u8);
	// stb r30,109(r31)
	REX_STORE_U8(r31.u32 + 109, r30.u8);
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// bl 0x821fecf0
	ctx.lr = 0x8217B478;
	sub_821FECF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f1,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 200);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r9,r11,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// stw r11,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r11.u32);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// fmr f5,f31
	ctx.f5.f64 = f31.f64;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// addi r8,r11,-4224
	ctx.r8.s64 = ctx.r11.s64 + -4224;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// subfe r11,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lfs f0,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,112
	ctx.r8.s64 = ctx.r8.s64 + 112;
	// stw r11,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r11.u32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// frsp f3,f0
	ctx.f3.f64 = double(float(ctx.f0.f64));
	// bl 0x8210ded0
	ctx.lr = 0x8217B4EC;
	sub_8210DED0(ctx, base);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lfs f0,52(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// stw r30,192(r31)
	REX_STORE_U32(r31.u32 + 192, r30.u32);
	// lbz r11,1827(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1827);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// stb r29,61(r31)
	REX_STORE_U8(r31.u32 + 61, r29.u8);
	// stw r11,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82180B90) {
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
	// bl 0x822d4e70
	ctx.lr = 0x82180B98;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x822d4f08
	ctx.lr = 0x82180BA0;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// li r22,0
	r22.s64 = 0;
	// lwz r10,244(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r9,240(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 240);
	// mulli r11,r11,80
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(80));
	// lwz r8,228(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// mr r23,r22
	r23.u64 = r22.u64;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r31,r9,r11
	r31.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82180ef8
	if (!ctx.cr6.gt) goto loc_82180EF8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f19,16688(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16688);
	f19.f64 = double(temp.f32);
	// lfs f20,16172(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16172);
	f20.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f21,-4624(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4624);
	f21.f64 = double(temp.f32);
	// lfs f22,16360(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16360);
	f22.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f17,2360(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2360);
	f17.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f23,2376(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2376);
	f23.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f26,2384(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2384);
	f26.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f31,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f31.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f24,16260(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16260);
	f24.f64 = double(temp.f32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lfs f25,16308(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16308);
	f25.f64 = double(temp.f32);
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lfs f27,-30444(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -30444);
	f27.f64 = double(temp.f32);
	// lfs f28,2000(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2000);
	f28.f64 = double(temp.f32);
	// addi r26,r31,16
	r26.s64 = r31.s64 + 16;
	// lfs f16,28444(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 28444);
	f16.f64 = double(temp.f32);
	// addi r27,r31,32
	r27.s64 = r31.s64 + 32;
	// lfs f18,1996(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 1996);
	f18.f64 = double(temp.f32);
	// lis r24,-32170
	r24.s64 = -2108293120;
	// addi r25,r11,13128
	r25.s64 = ctx.r11.s64 + 13128;
	// addi r28,r10,7808
	r28.s64 = ctx.r10.s64 + 7808;
loc_82180C60:
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f18
	ctx.cr6.compare(ctx.f0.f64, f18.f64);
	// bge cr6,0x82180c8c
	if (!ctx.cr6.lt) goto loc_82180C8C;
	// lbz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82180c8c
	if (!ctx.cr0.eq) goto loc_82180C8C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8217fd08
	ctx.lr = 0x82180C88;
	sub_8217FD08(ctx, base);
	// b 0x82180ed8
	goto loc_82180ED8;
loc_82180C8C:
	// lwz r11,252(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 252);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,80
	ctx.r5.s64 = ctx.r11.s64 + 80;
	// bl 0x820e1bf0
	ctx.lr = 0x82180CA0;
	sub_820E1BF0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x820e2290
	ctx.lr = 0x82180CAC;
	sub_820E2290(ctx, base);
	// lwz r11,252(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 252);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// bl 0x820e1c28
	ctx.lr = 0x82180CBC;
	sub_820E1C28(ctx, base);
	// fcmpu cr6,f1,f16
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f16.f64);
	// bge cr6,0x82180ccc
	if (!ctx.cr6.lt) goto loc_82180CCC;
	// stb r22,76(r30)
	REX_STORE_U8(r30.u32 + 76, r22.u8);
	// b 0x82180cd4
	goto loc_82180CD4;
loc_82180CCC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,76(r30)
	REX_STORE_U8(r30.u32 + 76, ctx.r11.u8);
loc_82180CD4:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82180db0
	if (ctx.cr6.gt) goto loc_82180DB0;
	// bl 0x821fedc8
	ctx.lr = 0x82180CE4;
	sub_821FEDC8(ctx, base);
	// fsubs f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f28.f64));
	// fmuls f30,f0,f27
	f30.f64 = double(float(ctx.f0.f64 * f27.f64));
	// bl 0x821fedc8
	ctx.lr = 0x82180CF0;
	sub_821FEDC8(ctx, base);
	// fsubs f0,f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f25.f64));
	// fmuls f29,f0,f24
	f29.f64 = double(float(ctx.f0.f64 * f24.f64));
	// bl 0x821fedc8
	ctx.lr = 0x82180CFC;
	sub_821FEDC8(ctx, base);
	// fsubs f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f28.f64));
	// stfs f29,4(r28)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r28.u32 + 4, temp.u32);
	// stfs f30,8(r28)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r28.u32 + 8, temp.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stfs f31,12(r28)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 12, temp.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * f27.f64));
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// bl 0x820e1b28
	ctx.lr = 0x82180D24;
	sub_820E1B28(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x820e2290
	ctx.lr = 0x82180D30;
	sub_820E2290(ctx, base);
	// bl 0x821fedc8
	ctx.lr = 0x82180D34;
	sub_821FEDC8(ctx, base);
	// fnmsubs f0,f1,f26,f23
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(-std::fma(ctx.f1.f64, f26.f64, -f23.f64)));
	// lfs f13,192(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x820e1cc0
	ctx.lr = 0x82180D4C;
	sub_820E1CC0(ctx, base);
	// bl 0x821fec88
	ctx.lr = 0x82180D50;
	sub_821FEC88(ctx, base);
	// addi r11,r3,5
	ctx.r11.s64 = ctx.r3.s64 + 5;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// lbz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 76);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82180db0
	if (!ctx.cr6.eq) goto loc_82180DB0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,252(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 252);
	// bl 0x821805a0
	ctx.lr = 0x82180D74;
	sub_821805A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82180db0
	if (ctx.cr0.eq) goto loc_82180DB0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,29428(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 29428);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8211ea90
	ctx.lr = 0x82180D8C;
	sub_8211EA90(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f1,216(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 216);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e1cf8
	ctx.lr = 0x82180D9C;
	sub_820E1CF8(ctx, base);
	// lfs f0,208(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,192(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
loc_82180DB0:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lfs f1,212(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 212);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x820e1cf8
	ctx.lr = 0x82180DC0;
	sub_820E1CF8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x820e1b70
	ctx.lr = 0x82180DD0;
	sub_820E1B70(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f1,f17
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f17.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e20b0
	ctx.lr = 0x82180DE4;
	sub_820E20B0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e1b70
	ctx.lr = 0x82180DF4;
	sub_820E1B70(ctx, base);
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82180e0c
	if (ctx.cr6.gt) goto loc_82180E0C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82180E0C:
	// stfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x82180e1c
	if (!ctx.cr6.gt) goto loc_82180E1C;
	// stfs f31,68(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
loc_82180E1C:
	// lfs f0,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f21
	ctx.f0.f64 = double(float(ctx.f0.f64 * f21.f64));
	// lfs f13,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f22,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f22.f64, ctx.f0.f64)));
	// stfs f0,44(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 44, temp.u32);
	// lfs f0,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f20,f0
	ctx.f0.f64 = double(float(f20.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82180e44
	if (!ctx.cr6.lt) goto loc_82180E44;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_82180E44:
	// stfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// fmuls f13,f0,f26
	ctx.f13.f64 = double(float(ctx.f0.f64 * f26.f64));
	// lfs f12,60(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f12,f19,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, f19.f64, ctx.f13.f64)));
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// lfs f0,60(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,60(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 60, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x82180e78
	if (!ctx.cr6.gt) goto loc_82180E78;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// b 0x82180e84
	goto loc_82180E84;
loc_82180E78:
	// fcmpu cr6,f0,f18
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f18.f64);
	// bge cr6,0x82180e88
	if (!ctx.cr6.lt) goto loc_82180E88;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
loc_82180E84:
	// stfs f0,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 60, temp.u32);
loc_82180E88:
	// lfs f0,200(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,72(r30)
	REX_STORE_U16(r30.u32 + 72, ctx.r11.u16);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x82180ebc
	if (ctx.cr6.lt) goto loc_82180EBC;
	// sth r22,72(r30)
	REX_STORE_U16(r30.u32 + 72, r22.u16);
	// stfs f18,72(r31)
	temp.f32 = float(f18.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
loc_82180EBC:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lfs f0,1836(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 1836);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
loc_82180ED8:
	// lwz r11,228(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 228);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r26,r26,80
	r26.s64 = r26.s64 + 80;
	// addi r31,r31,80
	r31.s64 = r31.s64 + 80;
	// addi r27,r27,80
	r27.s64 = r27.s64 + 80;
	// addi r30,r30,80
	r30.s64 = r30.s64 + 80;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82180c60
	if (ctx.cr6.lt) goto loc_82180C60;
loc_82180EF8:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x822d4f54
	ctx.lr = 0x82180F04;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_8218E0A0) {
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// lwz r10,30576(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 30576);
	// lwz r11,-32480(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -32480);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8218e0f8
	if (ctx.cr6.eq) goto loc_8218E0F8;
	// lhz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// addi r9,r9,-16048
	ctx.r9.s64 = ctx.r9.s64 + -16048;
	// ori r10,r10,13
	ctx.r10.u64 = ctx.r10.u64 | 13;
	// stw r9,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// addi r9,r8,-8304
	ctx.r9.s64 = ctx.r8.s64 + -8304;
	// sth r10,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r10.u16);
	// lwz r3,492(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 492);
	// bl 0x820e4bb0
	ctx.lr = 0x8218E0EC;
	sub_820E4BB0(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r11,r11,30520
	ctx.r11.s64 = ctx.r11.s64 + 30520;
	// stw r3,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r3.u32);
loc_8218E0F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218F650) {
	REX_FUNC_PROLOGUE();
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218F898) {
	REX_FUNC_PROLOGUE();
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8218f9cc
	if (ctx.cr6.eq) goto loc_8218F9CC;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r5,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218f8c8
	if (ctx.cr6.eq) goto loc_8218F8C8;
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r3,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
loc_8218F8C8:
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8218f8fc
	if (!ctx.cr6.eq) goto loc_8218F8FC;
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218f8f4
	if (ctx.cr6.eq) goto loc_8218F8F4;
	// lwz r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r11,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_8218F8F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8218f9c4
	goto loc_8218F9C4;
loc_8218F8FC:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8218F900:
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8218f918
	if (!ctx.cr6.lt) goto loc_8218F918;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8218f900
	if (!ctx.cr6.eq) goto loc_8218F900;
loc_8218F918:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218f97c
	if (ctx.cr6.eq) goto loc_8218F97C;
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x8218f994
	if (!ctx.cr6.eq) goto loc_8218F994;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8218f994
	if (ctx.cr6.eq) goto loc_8218F994;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x8218f95c
	if (!ctx.cr6.eq) goto loc_8218F95C;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8218f9c4
	if (ctx.cr6.eq) goto loc_8218F9C4;
	// b 0x8218f9c0
	goto loc_8218F9C0;
loc_8218F95C:
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x8218f974
	if (!ctx.cr6.eq) goto loc_8218F974;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8218f95c
	if (!ctx.cr6.eq) goto loc_8218F95C;
loc_8218F974:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8218f994
	if (!ctx.cr6.eq) goto loc_8218F994;
loc_8218F97C:
	// lwz r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r11,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x8218f9c4
	goto loc_8218F9C4;
loc_8218F994:
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8218f9a0
	if (!ctx.cr6.eq) goto loc_8218F9A0;
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
loc_8218F9A0:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// beq cr6,0x8218f9bc
	if (ctx.cr6.eq) goto loc_8218F9BC;
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// b 0x8218f9c0
	goto loc_8218F9C0;
loc_8218F9BC:
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_8218F9C0:
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8218F9C4:
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8218F9CC:
	// stw r3,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821967E8) {
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
	// add. r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8219681c
	if (ctx.cr0.lt) goto loc_8219681C;
	// li r10,300
	ctx.r10.s64 = 300;
	// divw r10,r11,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// mulli r10,r10,300
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(300));
	// subf r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
	// b 0x82196838
	goto loc_82196838;
loc_8219681C:
	// addic. r4,r11,300
	ctx.xer.ca = ctx.r11.u32 > 4294966995;
	ctx.r4.s64 = ctx.r11.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x82196834
	if (!ctx.cr0.lt) goto loc_82196834;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82196748
	ctx.lr = 0x82196830;
	sub_82196748(ctx, base);
	// b 0x82196838
	goto loc_82196838;
loc_82196834:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_82196838:
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_82199590) {
	REX_FUNC_PROLOGUE();
	// stb r4,176(r3)
	REX_STORE_U8(ctx.r3.u32 + 176, ctx.r4.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821996C0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r3,80
	ctx.r10.s64 = ctx.r3.s64 + 80;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r10,80(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,84(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,92(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x8219971c
	if (!ctx.cr6.eq) goto loc_8219971C;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// b 0x82199808
	goto loc_82199808;
loc_8219971C:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82199808
	if (ctx.cr6.eq) goto loc_82199808;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82199808
	if (ctx.cr6.eq) goto loc_82199808;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r10,60
	ctx.r10.s64 = 60;
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r3,104(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 104);
	// divwu r11,r11,r10
	ctx.r11.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// divw r10,r11,r9
	ctx.r10.u64 = uint32_t((ctx.r9.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r11.s32 / ctx.r9.s32 : 0);
	// mulli r10,r10,3
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(3));
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82199788
	if (ctx.cr6.eq) goto loc_82199788;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r4,344(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// beq cr6,0x82199778
	if (ctx.cr6.eq) goto loc_82199778;
	// bl 0x820e68b8
	ctx.lr = 0x8219976C;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,4592
	ctx.r4.s64 = ctx.r11.s64 + 4592;
	// b 0x821997a0
	goto loc_821997A0;
loc_82199778:
	// bl 0x820e68b8
	ctx.lr = 0x8219977C;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,4584
	ctx.r4.s64 = ctx.r11.s64 + 4584;
	// b 0x821997a0
	goto loc_821997A0;
loc_82199788:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r4,344(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x82199798;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,4576
	ctx.r4.s64 = ctx.r11.s64 + 4576;
loc_821997A0:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d55f8
	ctx.lr = 0x821997AC;
	sub_822D55F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821eb2c0
	ctx.lr = 0x821997B4;
	sub_821EB2C0(ctx, base);
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x82191bb0
	ctx.lr = 0x821997BC;
	sub_82191BB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfd f1,48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f1.u64);
	// fmr f3,f1
	ctx.f3.f64 = ctx.f1.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r9,4560
	ctx.r5.s64 = ctx.r9.s64 + 4560;
	// lfs f1,15632(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15632);
	ctx.f1.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f2,15628(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15628);
	ctx.f2.f64 = double(temp.f32);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// bl 0x821eaf80
	ctx.lr = 0x821997FC;
	sub_821EAF80(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
loc_82199808:
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

DEFINE_REX_FUNC(sub_8219D2D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8219D2D8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r6,r8,6324
	ctx.r6.s64 = ctx.r8.s64 + 6324;
	// addi r9,r11,-216
	ctx.r9.s64 = ctx.r11.s64 + -216;
	// addi r8,r10,-11640
	ctx.r8.s64 = ctx.r10.s64 + -11640;
	// addi r7,r7,-12328
	ctx.r7.s64 = ctx.r7.s64 + -12328;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,137
	ctx.r4.s64 = 137;
	// bl 0x821f7d50
	ctx.lr = 0x8219D30C;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8219d328
	if (ctx.cr0.eq) goto loc_8219D328;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,31764
	ctx.r11.s64 = ctx.r11.s64 + 31764;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8219d32c
	goto loc_8219D32C;
loc_8219D328:
	// li r30,0
	r30.s64 = 0;
loc_8219D32C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8219d33c
	if (!ctx.cr6.eq) goto loc_8219D33C;
loc_8219D334:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8219d390
	goto loc_8219D390;
loc_8219D33C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r31,r30,80
	r31.s64 = r30.s64 + 80;
	// addi r11,r11,-8304
	ctx.r11.s64 = ctx.r11.s64 + -8304;
	// rlwinm r4,r29,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 8) & 0xFFFFFF00;
	// addi r5,r31,12
	ctx.r5.s64 = r31.s64 + 12;
	// lwz r3,496(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 496);
	// bl 0x82190558
	ctx.lr = 0x8219D358;
	sub_82190558(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8219d36c
	if (!ctx.cr0.eq) goto loc_8219D36C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218cb20
	ctx.lr = 0x8219D368;
	sub_8218CB20(ctx, base);
	// b 0x8219d334
	goto loc_8219D334;
loc_8219D36C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r29,48(r31)
	REX_STORE_U32(r31.u32 + 48, r29.u32);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// bl 0x820e01b0
	ctx.lr = 0x8219D384;
	sub_820E01B0(ctx, base);
	// addi r11,r31,60
	ctx.r11.s64 = r31.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
loc_8219D390:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821A0A60) {
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
	// lwz r31,-32480(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8218cb30
	ctx.lr = 0x821A0A80;
	sub_8218CB30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821a0a90
	if (!ctx.cr0.eq) goto loc_821A0A90;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821a0810
	ctx.lr = 0x821A0A90;
	sub_821A0810(ctx, base);
loc_821A0A90:
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

DEFINE_REX_FUNC(sub_821A1660) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,-32480
	ctx.r11.s64 = ctx.r11.s64 + -32480;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A20A0) {
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
	// lwz r11,224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// addi r31,r3,28
	r31.s64 = ctx.r3.s64 + 28;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// lwz r4,108(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// bl 0x821a2fa8
	ctx.lr = 0x821A20D0;
	sub_821A2FA8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm r30,r3,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f31,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// lwzx r3,r30,r31
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821a3a38
	ctx.lr = 0x821A20EC;
	sub_821A3A38(ctx, base);
	// lwzx r3,r30,r31
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821a3a48
	ctx.lr = 0x821A2100;
	sub_821A3A48(ctx, base);
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

DEFINE_REX_FUNC(sub_821A39B8) {
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
	ctx.lr = 0x821A39C0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r27,r11,-27080
	r27.s64 = ctx.r11.s64 + -27080;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x821a3610
	ctx.lr = 0x821A39E4;
	sub_821A3610(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821a3848
	ctx.lr = 0x821A39FC;
	sub_821A3848(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821A3F98) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821a3fc8
	if (!ctx.cr6.eq) goto loc_821A3FC8;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82202ea0
	ctx.lr = 0x821A3FC4;
	sub_82202EA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_821A3FC8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821a3ff4
	if (ctx.cr6.eq) goto loc_821A3FF4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821a3ff4
	if (ctx.cr6.eq) goto loc_821A3FF4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r4.u32);
	// addi r10,r30,-1
	ctx.r10.s64 = r30.s64 + -1;
	// sth r11,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r11.u16);
	// sth r11,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r11.u16);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// b 0x821a3ff8
	goto loc_821A3FF8;
loc_821A3FF4:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_821A3FF8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
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

DEFINE_REX_FUNC(sub_821A6B40) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x820e22e8
	ctx.lr = 0x821A6B60;
	sub_820E22E8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,7336(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 7336);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x821a6bac
	if (!ctx.cr6.lt) goto loc_821A6BAC;
	// bl 0x821feec8
	ctx.lr = 0x821A6B74;
	sub_821FEEC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,2008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	f31.f64 = double(temp.f32);
	// lfs f30,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f30.f64 = double(temp.f32);
	// fmsubs f0,f1,f31,f30
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f31.f64, -f30.f64)));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// bl 0x821feec8
	ctx.lr = 0x821A6B90;
	sub_821FEEC8(ctx, base);
	// fmsubs f0,f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f31.f64, -f30.f64)));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// bl 0x821feec8
	ctx.lr = 0x821A6B9C;
	sub_821FEEC8(ctx, base);
	// fmsubs f0,f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f31.f64, -f30.f64)));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x821a6bbc
	goto loc_821A6BBC;
loc_821A6BAC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e2290
	ctx.lr = 0x821A6BB8;
	sub_820E2290(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A6BBC:
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

DEFINE_REX_FUNC(sub_821A8950) {
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
	// lwz r5,148(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,144(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// lwz r3,100(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// bl 0x821aa3b0
	ctx.lr = 0x821A8974;
	sub_821AA3B0(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 100);
	// bl 0x821aa0f8
	ctx.lr = 0x821A897C;
	sub_821AA0F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r3.u32);
	// beq 0x821a89ac
	if (ctx.cr0.eq) goto loc_821A89AC;
	// cmpwi cr6,r3,18
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 18, ctx.xer);
	// beq cr6,0x821a89ac
	if (ctx.cr6.eq) goto loc_821A89AC;
loc_821A8990:
	// lbz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 168);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,88(r31)
	REX_STORE_U8(r31.u32 + 88, ctx.r11.u8);
	// beq 0x821a89d8
	if (ctx.cr0.eq) goto loc_821A89D8;
	// li r10,12
	ctx.r10.s64 = 12;
	// b 0x821a89dc
	goto loc_821A89DC;
loc_821A89AC:
	// lwz r3,100(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 100);
	// bl 0x821a9da8
	ctx.lr = 0x821A89B4;
	sub_821A9DA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// bne 0x821a8990
	if (!ctx.cr0.eq) goto loc_821A8990;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r11,88(r31)
	REX_STORE_U8(r31.u32 + 88, ctx.r11.u8);
	// b 0x821a89dc
	goto loc_821A89DC;
loc_821A89D8:
	// li r10,9
	ctx.r10.s64 = 9;
loc_821A89DC:
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_821AA438) {
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
	// lwz r3,312(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821aa46c
	if (ctx.cr6.eq) goto loc_821AA46C;
	// bl 0x822c80a8
	ctx.lr = 0x821AA464;
	sub_822C80A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r11.u32);
loc_821AA46C:
	// addi r11,r30,2047
	ctx.r11.s64 = r30.s64 + 2047;
	// stw r30,316(r31)
	REX_STORE_U32(r31.u32 + 316, r30.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r11,0,0,20
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF800;
	// stw r3,320(r31)
	REX_STORE_U32(r31.u32 + 320, ctx.r3.u32);
	// bl 0x822c80c8
	ctx.lr = 0x821AA484;
	sub_822C80C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,320(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 320);
	// stw r3,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r3.u32);
	// bl 0x822d5870
	ctx.lr = 0x821AA494;
	sub_822D5870(ctx, base);
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

DEFINE_REX_FUNC(sub_821ABE40) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e8c
	ctx.lr = 0x821ABE48;
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f29.u64);
	// stfd f30,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r11,-11596(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11596);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x821abfbc
	if (ctx.cr6.gt) goto loc_821ABFBC;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// frsp f9,f13
	ctx.f9.f64 = double(float(ctx.f13.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,8256(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8256);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f12,-24052(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24052);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f31,16896(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16896);
	f31.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f11,8292(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8292);
	ctx.f11.f64 = double(temp.f32);
	// li r3,64
	ctx.r3.s64 = 64;
	// lfs f10,8288(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8288);
	ctx.f10.f64 = double(temp.f32);
	// frsp f8,f0
	ctx.f8.f64 = double(float(ctx.f0.f64));
	// lfs f0,-24904(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24904);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f9,f13
	f30.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f3,16676(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16676);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f29,f8,f12
	f29.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fadds f13,f30,f11
	ctx.f13.f64 = double(float(f30.f64 + ctx.f11.f64));
	// fadds f12,f29,f10
	ctx.f12.f64 = double(float(f29.f64 + ctx.f10.f64));
	// fsubs f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// bl 0x82204d68
	ctx.lr = 0x821ABEFC;
	sub_82204D68(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// li r6,128
	ctx.r6.s64 = 128;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821e8898
	ctx.lr = 0x821ABF14;
	sub_821E8898(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,-11488
	ctx.r10.s64 = ctx.r11.s64 + -11488;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r8,r11,-11696
	ctx.r8.s64 = ctx.r11.s64 + -11696;
	// li r29,1
	r29.s64 = 1;
	// addi r11,r9,432
	ctx.r11.s64 = ctx.r9.s64 + 432;
	// addi r11,r11,608
	ctx.r11.s64 = ctx.r11.s64 + 608;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// stb r29,188(r10)
	REX_STORE_U8(ctx.r10.u32 + 188, r29.u8);
	// lwzx r10,r31,r8
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r8.u32);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,999
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 999, ctx.xer);
	// ble cr6,0x821abf58
	if (!ctx.cr6.gt) goto loc_821ABF58;
	// li r11,999
	ctx.r11.s64 = 999;
loc_821ABF58:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// addi r5,r8,8272
	ctx.r5.s64 = ctx.r8.s64 + 8272;
	// lfs f0,8284(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8284);
	ctx.f0.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f13,8268(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8268);
	ctx.f13.f64 = double(temp.f32);
	// fadds f2,f30,f0
	ctx.f2.f64 = double(float(f30.f64 + ctx.f0.f64));
	// fadds f1,f29,f13
	ctx.f1.f64 = double(float(f29.f64 + ctx.f13.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// stfs f1,20(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// bl 0x821eaf80
	ctx.lr = 0x821ABF94;
	sub_821EAF80(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r30,r11,-11592
	r30.s64 = ctx.r11.s64 + -11592;
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821abfbc
	if (!ctx.cr6.eq) goto loc_821ABFBC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,25
	ctx.r3.s64 = 25;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212bc38
	ctx.lr = 0x821ABFB8;
	sub_8212BC38(ctx, base);
	// stwx r29,r31,r30
	REX_STORE_U32(r31.u32 + r30.u32, r29.u32);
loc_821ABFBC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821B8A28) {
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
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x821afc40
	ctx.lr = 0x821B8A40;
	sub_821AFC40(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,30
	ctx.r5.s64 = 30;
	// lfs f2,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2024(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2024);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212f220
	ctx.lr = 0x821B8A5C;
	sub_8212F220(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8212be90
	ctx.lr = 0x821B8A64;
	sub_8212BE90(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218e510
	ctx.lr = 0x821B8A6C;
	sub_8218E510(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821b78b0
	ctx.lr = 0x821B8A74;
	sub_821B78B0(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// lhz r11,30(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 30);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x821b8aec
	if (ctx.cr6.eq) goto loc_821B8AEC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821dc8a0
	ctx.lr = 0x821B8A90;
	sub_821DC8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821b8abc
	if (ctx.cr6.eq) goto loc_821B8ABC;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lha r5,80(r1)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 80));
	// lwz r3,216(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 216);
	// bl 0x821cb730
	ctx.lr = 0x821B8AAC;
	sub_821CB730(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x821dad10
	ctx.lr = 0x821B8AB4;
	sub_821DAD10(ctx, base);
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// sth r3,140(r11)
	REX_STORE_U16(ctx.r11.u32 + 140, ctx.r3.u16);
loc_821B8ABC:
	// lhz r11,30(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 30);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x821b8aec
	if (!ctx.cr6.eq) goto loc_821B8AEC;
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// lha r11,5452(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 5452));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821b8aec
	if (!ctx.cr0.gt) goto loc_821B8AEC;
	// lwz r3,220(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lha r6,16476(r3)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 16476));
	// lha r5,16474(r3)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 16474));
	// lha r4,16472(r3)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 16472));
	// bl 0x821cb730
	ctx.lr = 0x821B8AEC;
	sub_821CB730(ctx, base);
loc_821B8AEC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x821db218
	ctx.lr = 0x821B8AF4;
	sub_821DB218(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// bne cr6,0x821b8b0c
	if (!ctx.cr6.eq) goto loc_821B8B0C;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_821B8B0C:
	// bl 0x821dfd28
	ctx.lr = 0x821B8B10;
	sub_821DFD28(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821b7a98
	ctx.lr = 0x821B8B18;
	sub_821B7A98(ctx, base);
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

DEFINE_REX_FUNC(sub_821BEF78) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,176
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(176));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// addi r11,r11,14152
	ctx.r11.s64 = ctx.r11.s64 + 14152;
	// beq cr6,0x821bef9c
	if (ctx.cr6.eq) goto loc_821BEF9C;
	// clrlwi r10,r5,20
	ctx.r10.u64 = ctx.r5.u32 & 0xFFF;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x821befa0
	goto loc_821BEFA0;
loc_821BEF9C:
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_821BEFA0:
	// srawi r10,r5,12
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 12;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// addi r10,r10,2513
	ctx.r10.s64 = ctx.r10.s64 + 2513;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821befd4
	if (ctx.cr6.lt) goto loc_821BEFD4;
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_821BEFD4:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 148, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C0050) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e7c
	ctx.lr = 0x821C0058;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d4f30
	ctx.lr = 0x821C0060;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fmr f28,f2
	f28.f64 = ctx.f2.f64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// fmr f30,f4
	f30.f64 = ctx.f4.f64;
	// fmr f26,f5
	f26.f64 = ctx.f5.f64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// sth r5,2(r4)
	REX_STORE_U16(ctx.r4.u32 + 2, ctx.r5.u16);
	// beq cr6,0x821c0210
	if (ctx.cr6.eq) goto loc_821C0210;
	// lha r30,0(r4)
	r30.s64 = int16_t(REX_LOAD_U16(ctx.r4.u32 + 0));
	// li r7,1
	ctx.r7.s64 = 1;
	// mulli r11,r30,176
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(176));
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r28,r11,14152
	r28.s64 = ctx.r11.s64 + 14152;
	// bl 0x821bef78
	ctx.lr = 0x821C00B4;
	sub_821BEF78(ctx, base);
	// clrlwi r4,r5,20
	ctx.r4.u64 = ctx.r5.u32 & 0xFFF;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821617a8
	ctx.lr = 0x821C00C0;
	sub_821617A8(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f31,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(f30.f64, f31.f64);
	// ble cr6,0x821c00f8
	if (!ctx.cr6.gt) goto loc_821C00F8;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x821c00f8
	if (!ctx.cr6.gt) goto loc_821C00F8;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
loc_821C00F8:
	// stfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// fcmpu cr6,f29,f31
	ctx.cr6.compare(f29.f64, f31.f64);
	// beq cr6,0x821c010c
	if (ctx.cr6.eq) goto loc_821C010C;
	// stfs f29,40(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// b 0x821c0110
	goto loc_821C0110;
loc_821C010C:
	// stfs f31,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
loc_821C0110:
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x821c0120
	if (ctx.cr6.gt) goto loc_821C0120;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_821C0120:
	// mulli r11,r30,164
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(164));
	// lfs f13,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// addic. r11,r11,9120
	ctx.xer.ca = ctx.r11.u32 > 4294958175;
	ctx.r11.s64 = ctx.r11.s64 + 9120;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c0158
	if (ctx.cr0.eq) goto loc_821C0158;
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x821c0158
	if (ctx.cr6.eq) goto loc_821C0158;
	// stfs f28,64(r11)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f28,68(r11)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f31,80(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stfs f31,76(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 76, temp.u32);
loc_821C0158:
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// extsh r11,r26
	ctx.r11.s64 = r26.s16;
	// li r27,0
	r27.s64 = 0;
	// fmadds f0,f28,f26,f0
	ctx.f0.f64 = double(float(std::fma(f28.f64, f26.f64, ctx.f0.f64)));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// sth r11,14(r31)
	REX_STORE_U16(r31.u32 + 14, ctx.r11.u16);
	// stfs f27,16(r31)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// sth r27,24(r31)
	REX_STORE_U16(r31.u32 + 24, r27.u16);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821beff0
	ctx.lr = 0x821C018C;
	sub_821BEFF0(ctx, base);
	// clrlwi r10,r25,28
	ctx.r10.u64 = r25.u32 & 0xF;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// sth r10,12(r31)
	REX_STORE_U16(r31.u32 + 12, ctx.r10.u16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821c01dc
	if (ctx.cr6.eq) goto loc_821C01DC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821c01c4
	if (ctx.cr6.eq) goto loc_821C01C4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 168, temp.u32);
	// stfs f0,160(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 160, temp.u32);
	// beq cr6,0x821c01e4
	if (ctx.cr6.eq) goto loc_821C01E4;
	// b 0x821c01d4
	goto loc_821C01D4;
loc_821C01C4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,168(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 168, temp.u32);
	// stfs f31,160(r28)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 160, temp.u32);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
loc_821C01D4:
	// stfs f0,164(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 164, temp.u32);
	// b 0x821c01e8
	goto loc_821C01E8;
loc_821C01DC:
	// stfs f31,168(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 168, temp.u32);
	// stfs f31,160(r28)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 160, temp.u32);
loc_821C01E4:
	// stfs f31,164(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 164, temp.u32);
loc_821C01E8:
	// rlwinm. r11,r25,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c01fc
	if (ctx.cr0.eq) goto loc_821C01FC;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,20(r31)
	REX_STORE_U16(r31.u32 + 20, ctx.r11.u16);
	// b 0x821c0200
	goto loc_821C0200;
loc_821C01FC:
	// sth r27,20(r31)
	REX_STORE_U16(r31.u32 + 20, r27.u16);
loc_821C0200:
	// sth r27,138(r31)
	REX_STORE_U16(r31.u32 + 138, r27.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r27,10(r31)
	REX_STORE_U16(r31.u32 + 10, r27.u16);
	// b 0x821c0214
	goto loc_821C0214;
loc_821C0210:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821C0214:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d4f7c
	ctx.lr = 0x821C0220;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_821C5C30) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x821c5c90
	if (ctx.cr6.eq) goto loc_821C5C90;
	// lwz r4,10008(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 10008);
	// bl 0x821bee40
	ctx.lr = 0x821C5C5C;
	sub_821BEE40(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f13,10160(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10160);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 - ctx.f13.f64));
	// stw r11,10156(r31)
	REX_STORE_U32(r31.u32 + 10156, ctx.r11.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// b 0x821c5ca4
	goto loc_821C5CA4;
loc_821C5C90:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,10160(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 10160, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,10156(r31)
	REX_STORE_U32(r31.u32 + 10156, ctx.r10.u32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
loc_821C5CA4:
	// stfs f0,10168(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10168, temp.u32);
	// stfs f31,10164(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 10164, temp.u32);
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

DEFINE_REX_FUNC(sub_821C8020) {
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
	ctx.lr = 0x821C8028;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r26,-1
	r26.s64 = -1;
	// bl 0x821b3110
	ctx.lr = 0x821C803C;
	sub_821B3110(ctx, base);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r27,r11,-25704
	r27.s64 = ctx.r11.s64 + -25704;
loc_821C804C:
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// li r10,25
	ctx.r10.s64 = 25;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// subfc r8,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// li r9,25
	ctx.r9.s64 = 25;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// xoris r6,r30,32768
	ctx.r6.u64 = r30.u64 ^ 2147483648;
	// subf r9,r30,r9
	ctx.r9.u64 = ctx.r9.u64 - r30.u64;
	// subfe r10,r7,r10
	temp.u8 = (~ctx.r7.u32 + ctx.r10.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r7.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addc r9,r9,r6
	ctx.xer.ca = ctx.r9.u32 + ctx.r6.u32 < ctx.r9.u32;
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// and r29,r10,r11
	r29.u64 = ctx.r10.u64 & ctx.r11.u64;
	// subfe r11,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// and r28,r11,r28
	r28.u64 = ctx.r11.u64 & r28.u64;
	// bl 0x821b30e0
	ctx.lr = 0x821C808C;
	sub_821B30E0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x821c80bc
	if (ctx.cr6.lt) goto loc_821C80BC;
	// cmpwi cr6,r3,33
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 33, ctx.xer);
	// bge cr6,0x821c80bc
	if (!ctx.cr6.lt) goto loc_821C80BC;
	// mulli r11,r3,248
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(248));
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// b 0x821c80c0
	goto loc_821C80C0;
loc_821C80BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821C80C0:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// beq cr6,0x821c80e0
	if (ctx.cr6.eq) goto loc_821C80E0;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(r28.s32, 2, ctx.xer);
	// bne cr6,0x821c80ec
	if (!ctx.cr6.eq) goto loc_821C80EC;
	// lhz r11,126(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 126);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821c8120
	if (!ctx.cr6.eq) goto loc_821C8120;
	// b 0x821c80ec
	goto loc_821C80EC;
loc_821C80E0:
	// lhz r11,126(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 126);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c8120
	if (!ctx.cr0.eq) goto loc_821C8120;
loc_821C80EC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c7f28
	ctx.lr = 0x821C80FC;
	sub_821C7F28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821c8120
	if (ctx.cr0.eq) goto loc_821C8120;
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(r25.s32, 3, ctx.xer);
	// bne cr6,0x821c811c
	if (!ctx.cr6.eq) goto loc_821C811C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dd198
	ctx.lr = 0x821C8114;
	sub_821DD198(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x821c8120
	if (ctx.cr6.lt) goto loc_821C8120;
loc_821C811C:
	// mr r26,r31
	r26.u64 = r31.u64;
loc_821C8120:
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(r26.s32, -1, ctx.xer);
	// beq cr6,0x821c804c
	if (ctx.cr6.eq) goto loc_821C804C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_821CCF00) {
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
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821cb730
	ctx.lr = 0x821CCF1C;
	sub_821CB730(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c5868
	ctx.lr = 0x821CCF24;
	sub_821C5868(ctx, base);
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

DEFINE_REX_FUNC(sub_821CD9A0) {
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
	ctx.lr = 0x821CD9A8;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r3,14152
	r30.s64 = ctx.r3.s64 + 14152;
	// li r29,5
	r29.s64 = 5;
	// li r28,0
	r28.s64 = 0;
	// lfs f31,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
loc_821CD9C8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82161f68
	ctx.lr = 0x821CD9D4;
	sub_82161F68(ctx, base);
	// stw r28,8(r30)
	REX_STORE_U32(r30.u32 + 8, r28.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,176
	r30.s64 = r30.s64 + 176;
	// bne 0x821cd9c8
	if (!ctx.cr0.eq) goto loc_821CD9C8;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r10,12520
	ctx.r5.s64 = ctx.r10.s64 + 12520;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-9580(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -9580);
	// bl 0x821af9d8
	ctx.lr = 0x821CDA00;
	sub_821AF9D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821be7c8
	ctx.lr = 0x821CDA0C;
	sub_821BE7C8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c1760
	ctx.lr = 0x821CDA30;
	sub_821C1760(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c1760
	ctx.lr = 0x821CDA54;
	sub_821C1760(ctx, base);
	// stw r28,10244(r31)
	REX_STORE_U32(r31.u32 + 10244, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821cb7d0
	ctx.lr = 0x821CDA60;
	sub_821CB7D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821D17C0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D17C8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// stw r3,-8948(r11)
	REX_STORE_U32(ctx.r11.u32 + -8948, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D1A70) {
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
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// lwz r11,720(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 720);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,720(r31)
	REX_STORE_U32(r31.u32 + 720, ctx.r3.u32);
	// cmpwi cr6,r3,25
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 25, ctx.xer);
	// blt cr6,0x821d1abc
	if (ctx.cr6.lt) goto loc_821D1ABC;
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 724);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,720(r31)
	REX_STORE_U32(r31.u32 + 720, ctx.r3.u32);
	// stw r11,724(r31)
	REX_STORE_U32(r31.u32 + 724, ctx.r11.u32);
	// b 0x821d1abc
	goto loc_821D1ABC;
loc_821D1AB4:
	// bl 0x821d1a70
	ctx.lr = 0x821D1AB8;
	sub_821D1A70(ctx, base);
	// lwz r3,720(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 720);
loc_821D1ABC:
	// bl 0x821b30e0
	ctx.lr = 0x821D1AC0;
	sub_821B30E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x821c7f28
	ctx.lr = 0x821D1ACC;
	sub_821C7F28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821d1ab4
	if (ctx.cr0.eq) goto loc_821D1AB4;
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

DEFINE_REX_FUNC(sub_821D3620) {
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
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,432
	ctx.r9.s64 = ctx.r10.s64 + 432;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,728(r9)
	REX_STORE_U32(ctx.r9.u32 + 728, ctx.r11.u32);
	// stw r10,732(r9)
	REX_STORE_U32(ctx.r9.u32 + 732, ctx.r10.u32);
	// bl 0x822d6060
	ctx.lr = 0x821D364C;
	sub_822D6060(ctx, base);
	// li r11,100
	ctx.r11.s64 = 100;
	// divw r11,r3,r11
	ctx.r11.u64 = uint32_t((ctx.r11.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r3.s32 / ctx.r11.s32 : 0);
	// mulli r11,r11,100
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(100));
	// subf. r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821d3670
	if (!ctx.cr0.gt) goto loc_821D3670;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_821D3664:
	// bl 0x821d1c60
	ctx.lr = 0x821D3668;
	sub_821D1C60(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x821d3664
	if (!ctx.cr0.eq) goto loc_821D3664;
loc_821D3670:
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

DEFINE_REX_FUNC(sub_821D5678) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,13420
	ctx.r11.s64 = ctx.r11.s64 + 13420;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x821D56A4;
	sub_821E2FD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d56b4
	if (ctx.cr0.eq) goto loc_821D56B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x821D56B4;
	sub_822C80A8(ctx, base);
loc_821D56B4:
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

DEFINE_REX_FUNC(sub_821D6FA0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lha r10,30(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 30));
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x821d6fe0
	if (ctx.cr6.eq) goto loc_821D6FE0;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,-7072
	ctx.r9.s64 = ctx.r11.s64 + -7072;
	// ori r8,r10,3776
	ctx.r8.u64 = ctx.r10.u64 | 3776;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,80(r9)
	REX_STORE_U32(ctx.r9.u32 + 80, ctx.r10.u32);
	// stwx r11,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// blr 
	return;
loc_821D6FE0:
	// lwz r4,220(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// addi r3,r11,22960
	ctx.r3.s64 = ctx.r11.s64 + 22960;
	// b 0x821095d0
	sub_821095D0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821D80E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821D80E8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r31,-32168
	r31.s64 = -2108162048;
	// addi r30,r11,12840
	r30.s64 = ctx.r11.s64 + 12840;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,-9456(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -9456);
	// bl 0x821af9d8
	ctx.lr = 0x821D810C;
	sub_821AF9D8(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r29,r11,-7072
	r29.s64 = ctx.r11.s64 + -7072;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821c58e8
	ctx.lr = 0x821D8124;
	sub_821C58E8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-9456(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -9456);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821af9d8
	ctx.lr = 0x821D8138;
	sub_821AF9D8(ctx, base);
	// addis r11,r29,1
	ctx.r11.s64 = r29.s64 + 65536;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821c58e8
	ctx.lr = 0x821D814C;
	sub_821C58E8(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r11,3884(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3884);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x821d8190
	if (ctx.cr6.lt) goto loc_821D8190;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x821d8190
	if (ctx.cr6.gt) goto loc_821D8190;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d8190
	if (ctx.cr6.eq) goto loc_821D8190;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,10984
	ctx.r9.s64 = ctx.r11.s64 + 10984;
	// stw r10,11000(r11)
	REX_STORE_U32(ctx.r11.u32 + 11000, ctx.r10.u32);
	// stw r10,11004(r11)
	REX_STORE_U32(ctx.r11.u32 + 11004, ctx.r10.u32);
	// sth r10,10988(r11)
	REX_STORE_U16(ctx.r11.u32 + 10988, ctx.r10.u16);
	// sth r10,10990(r11)
	REX_STORE_U16(ctx.r11.u32 + 10990, ctx.r10.u16);
loc_821D8190:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821D9620) {
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
	// bl 0x822d4e64
	ctx.lr = 0x821D9628;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// clrlwi. r21,r3,24
	r21.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// li r23,1
	r23.s64 = 1;
	// ori r19,r9,3696
	r19.u64 = ctx.r9.u64 | 3696;
	// li r20,0
	r20.s64 = 0;
	// addi r28,r11,432
	r28.s64 = ctx.r11.s64 + 432;
	// addi r22,r10,-7072
	r22.s64 = ctx.r10.s64 + -7072;
	// bne 0x821d9720
	if (!ctx.cr0.eq) goto loc_821D9720;
	// lha r10,30(r28)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r28.u32 + 30));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x821d96c4
	if (!ctx.cr0.gt) goto loc_821D96C4;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// ble cr6,0x821d9694
	if (!ctx.cr6.gt) goto loc_821D9694;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// beq cr6,0x821d9694
	if (ctx.cr6.eq) goto loc_821D9694;
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// beq cr6,0x821d968c
	if (ctx.cr6.eq) goto loc_821D968C;
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// bne cr6,0x821d96c4
	if (!ctx.cr6.eq) goto loc_821D96C4;
	// li r23,3
	r23.s64 = 3;
	// b 0x821d96c8
	goto loc_821D96C8;
loc_821D968C:
	// li r23,5
	r23.s64 = 5;
	// b 0x821d96c8
	goto loc_821D96C8;
loc_821D9694:
	// lwz r11,352(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 352);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821d96c8
	if (ctx.cr6.eq) goto loc_821D96C8;
	// lhz r11,28(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821d96c8
	if (!ctx.cr0.eq) goto loc_821D96C8;
	// lwz r11,80(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 80);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// addi r23,r11,2
	r23.s64 = ctx.r11.s64 + 2;
	// b 0x821d96c8
	goto loc_821D96C8;
loc_821D96C4:
	// li r23,1
	r23.s64 = 1;
loc_821D96C8:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x821d96e8
	if (ctx.cr6.eq) goto loc_821D96E8;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x821d96e8
	if (ctx.cr6.eq) goto loc_821D96E8;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x821d96e8
	if (ctx.cr6.eq) goto loc_821D96E8;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// bne cr6,0x821d9720
	if (!ctx.cr6.eq) goto loc_821D9720;
loc_821D96E8:
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r10,r22,3
	ctx.r10.s64 = r22.s64 + 3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,2980(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 2980);
loc_821D96F8:
	// lbz r9,-1(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821d9718
	if (ctx.cr6.eq) goto loc_821D9718;
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x821d9718
	if (!ctx.cr6.eq) goto loc_821D9718;
	// li r20,1
	r20.s64 = 1;
loc_821D9718:
	// add r10,r10,r19
	ctx.r10.u64 = ctx.r10.u64 + r19.u64;
	// bdnz 0x821d96f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D96F8;
loc_821D9720:
	// bl 0x82187b58
	ctx.lr = 0x821D9724;
	sub_82187B58(ctx, base);
	// bl 0x82188300
	ctx.lr = 0x821D9728;
	sub_82188300(ctx, base);
	// lwz r9,2980(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 2980);
	// lwz r11,220(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 220);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// clrlwi r25,r9,24
	r25.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d9744
	if (ctx.cr6.eq) goto loc_821D9744;
	// lbz r25,2(r11)
	r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
loc_821D9744:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r30,0
	r30.s64 = 0;
	// clrlwi r26,r31,24
	r26.u64 = r31.u32 & 0xFF;
	// li r29,0
	r29.s64 = 0;
	// addi r27,r11,4660
	r27.s64 = ctx.r11.s64 + 4660;
loc_821D9758:
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x821d9768
	if (ctx.cr6.eq) goto loc_821D9768;
	// li r31,1
	r31.s64 = 1;
loc_821D9768:
	// addi r11,r28,2984
	ctx.r11.s64 = r28.s64 + 2984;
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x821d9888
	if (!ctx.cr6.eq) goto loc_821D9888;
	// lha r10,30(r28)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r28.u32 + 30));
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// bne cr6,0x821d9794
	if (!ctx.cr6.eq) goto loc_821D9794;
	// cmplw cr6,r24,r9
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821d9794
	if (ctx.cr6.eq) goto loc_821D9794;
	// cmplw cr6,r24,r30
	ctx.cr6.compare<uint32_t>(r24.u32, r30.u32, ctx.xer);
	// b 0x821d97ac
	goto loc_821D97AC;
loc_821D9794:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x821d97b4
	if (!ctx.cr6.eq) goto loc_821D97B4;
	// extsb r11,r25
	ctx.r11.s64 = r25.s8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821d97b4
	if (ctx.cr6.eq) goto loc_821D97B4;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
loc_821D97AC:
	// bne cr6,0x821d9860
	if (!ctx.cr6.eq) goto loc_821D9860;
	// b 0x821d9828
	goto loc_821D9828;
loc_821D97B4:
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821d9828
	if (ctx.cr6.eq) goto loc_821D9828;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// bne cr6,0x821d9860
	if (!ctx.cr6.eq) goto loc_821D9860;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x821d9820
	if (ctx.cr6.eq) goto loc_821D9820;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x821d9820
	if (ctx.cr6.eq) goto loc_821D9820;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x821d97e4
	if (ctx.cr6.eq) goto loc_821D97E4;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// bne cr6,0x821d9860
	if (!ctx.cr6.eq) goto loc_821D9860;
loc_821D97E4:
	// clrlwi. r11,r20,24
	ctx.r11.u64 = r20.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d9860
	if (ctx.cr0.eq) goto loc_821D9860;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r10,r22,2
	ctx.r10.s64 = r22.s64 + 2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821D97F8:
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821d9814
	if (ctx.cr6.eq) goto loc_821D9814;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// bne cr6,0x821d9814
	if (!ctx.cr6.eq) goto loc_821D9814;
	// mr r31,r23
	r31.u64 = r23.u64;
loc_821D9814:
	// add r10,r10,r19
	ctx.r10.u64 = ctx.r10.u64 + r19.u64;
	// bdnz 0x821d97f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D97F8;
	// b 0x821d9860
	goto loc_821D9860;
loc_821D9820:
	// clrlwi. r11,r20,24
	ctx.r11.u64 = r20.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821d9830
	if (!ctx.cr0.eq) goto loc_821D9830;
loc_821D9828:
	// mr r31,r23
	r31.u64 = r23.u64;
	// b 0x821d9860
	goto loc_821D9860;
loc_821D9830:
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r10,r22,2
	ctx.r10.s64 = r22.s64 + 2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821D983C:
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821d9858
	if (ctx.cr6.eq) goto loc_821D9858;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// bne cr6,0x821d9858
	if (!ctx.cr6.eq) goto loc_821D9858;
	// mr r31,r23
	r31.u64 = r23.u64;
loc_821D9858:
	// add r10,r10,r19
	ctx.r10.u64 = ctx.r10.u64 + r19.u64;
	// bdnz 0x821d983c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D983C;
loc_821D9860:
	// lwzx r11,r29,r27
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + r27.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// beq cr6,0x821d9888
	if (ctx.cr6.eq) goto loc_821D9888;
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// ori r4,r4,32769
	ctx.r4.u64 = ctx.r4.u64 | 32769;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82208998
	ctx.lr = 0x821D9880;
	sub_82208998(ctx, base);
	// lwz r9,2980(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 2980);
	// stwx r31,r29,r27
	REX_STORE_U32(r29.u32 + r27.u32, r31.u32);
loc_821D9888:
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(r29.s32, 16, ctx.xer);
	// blt cr6,0x821d9758
	if (ctx.cr6.lt) goto loc_821D9758;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_821E3680) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,256(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// stfs f1,236(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// li r9,65
	ctx.r9.s64 = 65;
	// addi r10,r3,80
	ctx.r10.s64 = ctx.r3.s64 + 80;
	// stfs f1,156(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 156, temp.u32);
loc_821E3694:
	// lwz r8,168(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 168);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,80(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 80);
	// lwz r8,84(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 84);
	// stfs f1,156(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r7.u32 + 156, temp.u32);
	// stfs f1,156(r8)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r8.u32 + 156, temp.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x821e36d8
	if (!ctx.cr6.gt) goto loc_821E36D8;
loc_821E36B8:
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r3
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// stfs f1,156(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r8.u32 + 156, temp.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x821e36b8
	if (ctx.cr6.lt) goto loc_821E36B8;
loc_821E36D8:
	// lwz r11,244(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 244);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e36e8
	if (ctx.cr6.eq) goto loc_821E36E8;
	// stfs f1,156(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 156, temp.u32);
loc_821E36E8:
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r9,81
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 81, ctx.xer);
	// blt cr6,0x821e3694
	if (ctx.cr6.lt) goto loc_821E3694;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E6758) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e88
	ctx.lr = 0x821E6760;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f14
	ctx.lr = 0x821E6768;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,256(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f1,228(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stfs f2,232(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 232, temp.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fmr f29,f2
	f29.f64 = ctx.f2.f64;
	// lfd f13,16360(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 16360);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,16700(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16700);
	ctx.f0.f64 = double(temp.f32);
	// fmul f11,f3,f13
	ctx.f11.f64 = ctx.f3.f64 * ctx.f13.f64;
	// fmuls f8,f3,f0
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f0,-8492(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -8492);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f2,f0
	ctx.f10.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// lfs f0,16352(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16352);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,16060(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16060);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f5,f3,f0
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f9,-23968(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -23968);
	ctx.f9.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fsubs f4,f1,f9
	ctx.f4.f64 = double(float(ctx.f1.f64 - ctx.f9.f64));
	// stfs f1,112(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 112, temp.u32);
	// stfs f2,116(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 116, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,16228(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16228);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fadds f31,f8,f12
	f31.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f31,176(r10)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r10.u32 + 176, temp.u32);
	// stfs f31,180(r10)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r10.u32 + 180, temp.u32);
	// fmuls f7,f3,f0
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f13,16272(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16272);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,248(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// lfs f0,2352(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2352);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f3,f13
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fsubs f1,f4,f5
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// fmuls f19,f3,f0
	f19.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fsubs f4,f10,f11
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// bl 0x821e4ae8
	ctx.lr = 0x821E681C;
	sub_821E4AE8(ctx, base);
	// fadds f0,f5,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f5.f64 + f30.f64));
	// lwz r3,252(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 252);
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fadds f1,f0,f9
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// bl 0x821e4ae8
	ctx.lr = 0x821E6830;
	sub_821E4AE8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,324(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 324);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f13,32280(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16008(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16008);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x821e686c
	if (ctx.cr6.eq) goto loc_821E686C;
	// fsubs f12,f30,f7
	ctx.f12.f64 = double(float(f30.f64 - ctx.f7.f64));
	// stfs f31,176(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// fadds f11,f6,f29
	ctx.f11.f64 = double(float(ctx.f6.f64 + f29.f64));
	// stfs f31,180(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 180, temp.u32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f12,112(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// fadds f12,f11,f13
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f12,116(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 116, temp.u32);
loc_821E686C:
	// lwz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 328);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e6898
	if (ctx.cr6.eq) goto loc_821E6898;
	// fadds f12,f7,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f7.f64 + f30.f64));
	// stfs f31,176(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// fadds f11,f6,f29
	ctx.f11.f64 = double(float(ctx.f6.f64 + f29.f64));
	// stfs f31,180(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 180, temp.u32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,112(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// fadds f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f0,116(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 116, temp.u32);
loc_821E6898:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f0,2024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f24,16788(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16788);
	f24.f64 = double(temp.f32);
	// lfs f21,16116(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16116);
	f21.f64 = double(temp.f32);
	// li r28,0
	r28.s64 = 0;
	// lfs f22,16120(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16120);
	f22.f64 = double(temp.f32);
	// li r30,65
	r30.s64 = 65;
	// lfs f23,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	f23.f64 = double(temp.f32);
	// addi r29,r31,80
	r29.s64 = r31.s64 + 80;
	// lfs f26,-5892(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -5892);
	f26.f64 = double(temp.f32);
	// fsubs f27,f0,f8
	f27.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// lfs f25,2344(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2344);
	f25.f64 = double(temp.f32);
	// fadds f20,f8,f13
	f20.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
loc_821E68EC:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821e6994
	if (!ctx.cr6.eq) goto loc_821E6994;
	// fmadds f28,f27,f25,f30
	ctx.fpscr.disableFlushMode();
	f28.f64 = double(float(std::fma(f27.f64, f25.f64, f30.f64)));
	// bl 0x82204da8
	ctx.lr = 0x821E6900;
	sub_82204DA8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e6910
	if (ctx.cr0.eq) goto loc_821E6910;
	// fsubs f0,f28,f22
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f28.f64 - f22.f64));
	// fmuls f28,f0,f21
	f28.f64 = double(float(ctx.f0.f64 * f21.f64));
loc_821E6910:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821e69a0
	if (!ctx.cr6.gt) goto loc_821E69A0;
	// fadds f0,f19,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f19.f64 + f29.f64));
	// fadds f13,f0,f24
	ctx.f13.f64 = double(float(ctx.f0.f64 + f24.f64));
loc_821E6928:
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + ctx.r11.u64;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lwzx r9,r10,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// lwz r10,216(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 216);
	// stfs f13,116(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 116, temp.u32);
	// stfs f31,176(r9)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r9.u32 + 176, temp.u32);
	// stfs f31,180(r9)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r9.u32 + 180, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * f27.f64));
	// fmadds f0,f0,f26,f28
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f26.f64, f28.f64)));
	// stfs f0,112(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 112, temp.u32);
	// beq cr6,0x821e6980
	if (ctx.cr6.eq) goto loc_821E6980;
	// fadds f12,f13,f23
	ctx.f12.f64 = double(float(ctx.f13.f64 + f23.f64));
	// stfs f0,112(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 112, temp.u32);
	// stfs f12,116(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 116, temp.u32);
	// stfs f31,176(r10)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r10.u32 + 176, temp.u32);
	// stfs f31,180(r10)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r10.u32 + 180, temp.u32);
loc_821E6980:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821e6928
	if (ctx.cr6.lt) goto loc_821E6928;
	// b 0x821e69a0
	goto loc_821E69A0;
loc_821E6994:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e5b00
	ctx.lr = 0x821E69A0;
	sub_821E5B00(ctx, base);
loc_821E69A0:
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// fmr f27,f20
	ctx.fpscr.disableFlushMode();
	f27.f64 = f20.f64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpwi cr6,r30,81
	ctx.cr6.compare<int32_t>(r30.s32, 81, ctx.xer);
	// blt cr6,0x821e68ec
	if (ctx.cr6.lt) goto loc_821E68EC;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f60
	ctx.lr = 0x821E69C4;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821F20B0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// clrlwi r7,r5,16
	ctx.r7.u64 = ctx.r5.u32 & 0xFFFF;
	// clrlwi r6,r4,16
	ctx.r6.u64 = ctx.r4.u32 & 0xFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8229e940
	sub_8229E940(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F2908) {
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
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821f2958
	if (ctx.cr6.eq) goto loc_821F2958;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821f2948
	if (ctx.cr6.eq) goto loc_821F2948;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f3f40
	ctx.lr = 0x821F2934;
	sub_821F3F40(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a99f0
	ctx.lr = 0x821F2944;
	sub_822A99F0(ctx, base);
	// b 0x821f2958
	goto loc_821F2958;
loc_821F2948:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822aa0d8
	ctx.lr = 0x821F2958;
	sub_822AA0D8(ctx, base);
loc_821F2958:
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

DEFINE_REX_FUNC(sub_821F4670) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e6c
	ctx.lr = 0x821F4678;
	// stfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, f29.u64);
	// stfd f30,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, f30.u64);
	// stfd f31,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// li r22,0
	r22.s64 = 0;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821f4964
	if (!ctx.cr6.gt) goto loc_821F4964;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r25,0
	r25.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// lfs f30,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f30.f64 = double(temp.f32);
	// lfs f29,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f29.f64 = double(temp.f32);
loc_821F46C0:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// li r4,1
	ctx.r4.s64 = 1;
	// stfs f29,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwzx r3,r24,r11
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + ctx.r11.u32);
	// bl 0x822b15d0
	ctx.lr = 0x821F46D4;
	sub_822B15D0(ctx, base);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r31,r24,r11
	r31.u64 = REX_LOAD_U32(r24.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b15d0
	ctx.lr = 0x821F46E8;
	sub_822B15D0(ctx, base);
	// addi r4,r31,320
	ctx.r4.s64 = r31.s64 + 320;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x822d4fa0
	ctx.lr = 0x821F46F8;
	sub_822D4FA0(ctx, base);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// add r11,r24,r11
	ctx.r11.u64 = r24.u64 + ctx.r11.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,64(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x821f3178
	ctx.lr = 0x821F4718;
	sub_821F3178(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821f3f40
	ctx.lr = 0x821F4724;
	sub_821F3F40(ctx, base);
	// lfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(f31.f64, f30.f64);
	// bne cr6,0x821f4768
	if (!ctx.cr6.eq) goto loc_821F4768;
	// li r31,0
	r31.s64 = 0;
loc_821F4734:
	// add r10,r25,r31
	ctx.r10.u64 = r25.u64 + r31.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821f4944
	if (ctx.cr6.eq) goto loc_821F4944;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// bl 0x822b1128
	ctx.lr = 0x821F4758;
	sub_822B1128(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(r31.s32, 8, ctx.xer);
	// blt cr6,0x821f4734
	if (ctx.cr6.lt) goto loc_821F4734;
	// b 0x821f4944
	goto loc_821F4944;
loc_821F4768:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f30.f64);
	// li r27,0
	r27.s64 = 0;
	// mr r28,r23
	r28.u64 = r23.u64;
	// bge cr6,0x821f4868
	if (!ctx.cr6.lt) goto loc_821F4868;
loc_821F4778:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// lwzx r10,r28,r11
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821f4944
	if (ctx.cr6.eq) goto loc_821F4944;
	// add r10,r25,r27
	ctx.r10.u64 = r25.u64 + r27.u64;
	// li r26,0
	r26.s64 = 0;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821f4834
	if (ctx.cr6.eq) goto loc_821F4834;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// li r31,0
	r31.s64 = 0;
	// lwz r9,124(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 124);
	// lwz r10,120(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 120);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// srawi. r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821f4834
	if (ctx.cr0.eq) goto loc_821F4834;
	// addi r29,r28,32
	r29.s64 = r28.s64 + 32;
loc_821F47C4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// bl 0x822b41b0
	ctx.lr = 0x821F47D0;
	sub_822B41B0(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f4810
	if (ctx.cr6.eq) goto loc_821F4810;
	// lwz r10,288(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 288);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821f47f0
	if (!ctx.cr6.eq) goto loc_821F47F0;
	// li r26,1
	r26.s64 = 1;
loc_821F47F0:
	// lfs f0,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// lfs f13,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,72(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// stfs f29,76(r11)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f13,68(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f12,72(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 72, temp.u32);
loc_821F4810:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwz r9,124(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 124);
	// lwz r10,120(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 120);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821f47c4
	if (ctx.cr6.lt) goto loc_821F47C4;
loc_821F4834:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwzx r3,r28,r11
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// bl 0x822b1128
	ctx.lr = 0x821F4840;
	sub_822B1128(ctx, base);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwzx r3,r28,r11
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// bl 0x822b0d78
	ctx.lr = 0x821F4854;
	sub_822B0D78(ctx, base);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpwi cr6,r27,8
	ctx.cr6.compare<int32_t>(r27.s32, 8, ctx.xer);
	// blt cr6,0x821f4778
	if (ctx.cr6.lt) goto loc_821F4778;
	// b 0x821f4944
	goto loc_821F4944;
loc_821F4868:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// lwzx r10,r28,r11
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821f4944
	if (ctx.cr6.eq) goto loc_821F4944;
	// li r4,1
	ctx.r4.s64 = 1;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822b1128
	ctx.lr = 0x821F4884;
	sub_822B1128(ctx, base);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwzx r3,r28,r11
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// bl 0x822b0d78
	ctx.lr = 0x821F4898;
	sub_822B0D78(ctx, base);
	// add r11,r25,r27
	ctx.r11.u64 = r25.u64 + r27.u64;
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 40);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821f4934
	if (ctx.cr6.eq) goto loc_821F4934;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// li r31,0
	r31.s64 = 0;
	// lwz r9,124(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f4934
	if (ctx.cr0.eq) goto loc_821F4934;
	// addi r29,r28,32
	r29.s64 = r28.s64 + 32;
loc_821F48D4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r29,r10
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	// bl 0x822b41b0
	ctx.lr = 0x821F48E0;
	sub_822B41B0(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f48f0
	if (!ctx.cr6.eq) goto loc_821F48F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_821F48F0:
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 40);
	// addi r9,r11,64
	ctx.r9.s64 = ctx.r11.s64 + 64;
	// lfs f0,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lfs f13,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,72(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// stfs f31,76(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// lwzx r9,r29,r10
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f13,68(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f12,72(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lwz r11,124(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 124);
	// lwz r9,120(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 120);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821f48d4
	if (ctx.cr6.lt) goto loc_821F48D4;
loc_821F4934:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpwi cr6,r27,8
	ctx.cr6.compare<int32_t>(r27.s32, 8, ctx.xer);
	// blt cr6,0x821f4868
	if (ctx.cr6.lt) goto loc_821F4868;
loc_821F4944:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r24,r24,68
	r24.s64 = r24.s64 + 68;
	// addi r25,r25,17
	r25.s64 = r25.s64 + 17;
	// addi r23,r23,68
	r23.s64 = r23.s64 + 68;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821f46c0
	if (ctx.cr6.lt) goto loc_821F46C0;
loc_821F4964:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_82203418) {
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
	ctx.lr = 0x82203420;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,96
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(96));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,188
	ctx.r11.s64 = ctx.r11.s64 + 188;
	// li r28,0
	r28.s64 = 0;
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// li r30,-1
	r30.s64 = -1;
	// addi r10,r10,-29256
	ctx.r10.s64 = ctx.r10.s64 + -29256;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r29,8
	r29.s64 = 8;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f31,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
loc_82203460:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82203474
	if (!ctx.cr6.eq) goto loc_82203474;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// b 0x82203488
	goto loc_82203488;
loc_82203474:
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// bl 0x822ccd80
	ctx.lr = 0x8220347C;
	sub_822CCD80(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82203488:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822034a8
	if (ctx.cr0.eq) goto loc_822034A8;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822034a8
	if (ctx.cr6.eq) goto loc_822034A8;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822ccbb8
	ctx.lr = 0x822034A8;
	sub_822CCBB8(ctx, base);
loc_822034A8:
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822034c0
	if (ctx.cr6.eq) goto loc_822034C0;
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
loc_822034C0:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// bne 0x82203460
	if (!ctx.cr0.eq) goto loc_82203460;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82206420) {
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
	ctx.lr = 0x82206428;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,768(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 768);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// addi r31,r3,768
	r31.s64 = ctx.r3.s64 + 768;
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x8220644c
	if (ctx.cr6.lt) goto loc_8220644C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8220644C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82206474
	if (ctx.cr6.lt) goto loc_82206474;
	// mulli r10,r11,24
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r30,r10,r3
	r30.u64 = ctx.r10.u64 + ctx.r3.u64;
	// li r8,-256
	ctx.r8.s64 = -256;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwx r11,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// stw r9,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// stw r9,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// b 0x82206478
	goto loc_82206478;
loc_82206474:
	// lwz r30,96(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_82206478:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82205bb8
	ctx.lr = 0x82206484;
	sub_82205BB8(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r28,16(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,21740
	ctx.r6.s64 = ctx.r10.s64 + 21740;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// bl 0x821f7d50
	ctx.lr = 0x822064B4;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822064e0
	if (ctx.cr0.eq) goto loc_822064E0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822063a0
	ctx.lr = 0x822064E0;
	sub_822063A0(ctx, base);
loc_822064E0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_822094D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822094E0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82209504
	if (ctx.cr6.eq) goto loc_82209504;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82209504:
	// cmplwi cr6,r3,65001
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65001, ctx.xer);
	// bne cr6,0x82209520
	if (!ctx.cr6.eq) goto loc_82209520;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8220bb70
	ctx.lr = 0x8220951C;
	sub_8220BB70(ctx, base);
	// b 0x82209590
	goto loc_82209590;
loc_82209520:
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x82209538
	if (!ctx.cr6.eq) goto loc_82209538;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d6a10
	ctx.lr = 0x82209530;
	sub_822D6A10(ctx, base);
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// b 0x8220953c
	goto loc_8220953C;
loc_82209538:
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_8220953C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x8220954c
	if (!ctx.cr6.eq) goto loc_8220954C;
loc_82209544:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82209590
	goto loc_82209590;
loc_8220954C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x82209584
	if (ctx.cr6.lt) goto loc_82209584;
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(r30.s32, r31.s32, ctx.xer);
	// blt cr6,0x82209584
	if (ctx.cr6.lt) goto loc_82209584;
	// rlwinm r7,r31,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824d413c
	ctx.lr = 0x82209574;
	__imp__RtlUnicodeToMultiByteN(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82209544
	if (!ctx.cr0.lt) goto loc_82209544;
	// bl 0x824d40fc
	ctx.lr = 0x82209580;
	__imp__RtlNtStatusToDosError(ctx, base);
	// b 0x82209588
	goto loc_82209588;
loc_82209584:
	// li r3,122
	ctx.r3.s64 = 122;
loc_82209588:
	// bl 0x8220a618
	ctx.lr = 0x8220958C;
	sub_8220A618(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82209590:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8220C628) {
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
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r10,76
	ctx.r11.s64 = ctx.r10.s64 + 76;
	// lwz r9,76(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8220c7dc
	if (!ctx.cr6.eq) goto loc_8220C7DC;
	// lwz r11,72(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8220c6d0
	if (ctx.cr6.eq) goto loc_8220C6D0;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8220c6d0
	if (ctx.cr6.eq) goto loc_8220C6D0;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r7,1424(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 1424);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x824d43bc
	ctx.lr = 0x8220C6A8;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8220c700
	if (ctx.cr0.lt) goto loc_8220C700;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x8220c794
	goto loc_8220C794;
loc_8220C6D0:
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,1424(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 1424);
	// bl 0x824d43bc
	ctx.lr = 0x8220C6F8;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8220c708
	if (!ctx.cr0.lt) goto loc_8220C708;
loc_8220C700:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8220c7e8
	goto loc_8220C7E8;
loc_8220C708:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,1424(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 1424);
	// bl 0x824d43bc
	ctx.lr = 0x8220C730;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8220c758
	if (!ctx.cr0.lt) goto loc_8220C758;
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r6,1424(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 1424);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824d43ec
	ctx.lr = 0x8220C754;
	__imp__NtFreeVirtualMemory(ctx, base);
	// b 0x8220c700
	goto loc_8220C700;
loc_8220C758:
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_8220C794:
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r8,76
	ctx.r9.s64 = ctx.r8.s64 + 76;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8220c7d0
	if (!ctx.cr6.lt) goto loc_8220C7D0;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8220C7C0:
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x8220c7c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8220C7C0;
loc_8220C7D0:
	// stw r30,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r30.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
loc_8220C7DC:
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8220C7E8:
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

DEFINE_REX_FUNC(sub_82212778) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82212780;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,12812(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 12812);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822127fc
	if (ctx.cr6.eq) goto loc_822127FC;
	// lwz r11,11036(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 11036);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822127ac
	if (ctx.cr6.eq) goto loc_822127AC;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// b 0x822127fc
	goto loc_822127FC;
loc_822127AC:
	// lwz r11,11040(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11040);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822127fc
	if (ctx.cr0.eq) goto loc_822127FC;
	// lwz r11,13932(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13932);
	// lwz r3,13928(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 13928);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822127d4
	if (ctx.cr6.lt) goto loc_822127D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822158d0
	ctx.lr = 0x822127D4;
	sub_822158D0(ctx, base);
loc_822127D4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// rlwimi r11,r30,30,2,31
	ctx.r11.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 30) & 0x3FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFC0000000);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// stw r9,13928(r31)
	REX_STORE_U32(r31.u32 + 13928, ctx.r9.u32);
loc_822127FC:
	// stw r29,12812(r31)
	REX_STORE_U32(r31.u32 + 12812, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82215A30) {
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
	ctx.lr = 0x82215A38;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x824d419c
	ctx.lr = 0x82215A50;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82215a64
	if (!ctx.cr6.eq) goto loc_82215A64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1496(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1496);
	// b 0x82215a6c
	goto loc_82215A6C;
loc_82215A64:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1500(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1500);
loc_82215A6C:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r31,r11,15376
	r31.s64 = ctx.r11.s64 + 15376;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d438c
	ctx.lr = 0x82215A7C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,172(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 172);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r3,164(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 164);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215A98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d437c
	ctx.lr = 0x82215AA4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82217690) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82217470
	ctx.lr = 0x822176B4;
	sub_82217470(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r8,r30,512
	ctx.r8.s64 = r30.s64 + 512;
	// subf r31,r30,r31
	r31.u64 = r31.u64 - r30.u64;
	// li r6,128
	ctx.r6.s64 = 128;
loc_822176C8:
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// addi r3,r8,-512
	ctx.r3.s64 = ctx.r8.s64 + -512;
	// bl 0x822172c0
	ctx.lr = 0x822176D4;
	sub_822172C0(ctx, base);
	// add r4,r31,r8
	ctx.r4.u64 = r31.u64 + ctx.r8.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x822172c0
	ctx.lr = 0x822176E0;
	sub_822172C0(ctx, base);
	// addi r4,r7,1024
	ctx.r4.s64 = ctx.r7.s64 + 1024;
	// addi r3,r8,512
	ctx.r3.s64 = ctx.r8.s64 + 512;
	// bl 0x822172c0
	ctx.lr = 0x822176EC;
	sub_822172C0(ctx, base);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x822176c8
	if (!ctx.cr0.eq) goto loc_822176C8;
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

DEFINE_REX_FUNC(sub_8221A5A8) {
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
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,24400(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24400);
	// bl 0x823cd250
	ctx.lr = 0x8221A5C8;
	sub_823CD250(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,24408(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24408);
	// bl 0x823cd250
	ctx.lr = 0x8221A5D4;
	sub_823CD250(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24400(r31)
	REX_STORE_U32(r31.u32 + 24400, ctx.r11.u32);
	// stw r11,24408(r31)
	REX_STORE_U32(r31.u32 + 24408, ctx.r11.u32);
	// std r11,24416(r31)
	REX_STORE_U64(r31.u32 + 24416, ctx.r11.u64);
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

DEFINE_REX_FUNC(sub_8221B0D8) {
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
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8221b10c
	if (!ctx.cr6.gt) goto loc_8221B10C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x8221B10C;
	sub_82215008(ctx, base);
loc_8221B10C:
	// lis r11,-16382
	ctx.r11.s64 = -1073610752;
	// li r10,6209
	ctx.r10.s64 = 6209;
	// ori r11,r11,8448
	ctx.r11.u64 = ctx.r11.u64 | 8448;
	// lis r9,10280
	ctx.r9.s64 = 673710080;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r8,-1793
	ctx.r8.s64 = -1793;
	// ori r11,r9,310
	ctx.r11.u64 = ctx.r9.u64 | 310;
	// li r7,6448
	ctx.r7.s64 = 6448;
	// subf r9,r30,r11
	ctx.r9.u64 = ctx.r11.u64 - r30.u64;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r9,3,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x100;
	// li r9,3
	ctx.r9.s64 = 3;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_8221EAD0) {
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
	ctx.lr = 0x8221EAD8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,48(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r31,r6,-4
	r31.s64 = ctx.r6.s64 + -4;
	// li r22,4
	r22.s64 = 4;
	// li r23,20
	r23.s64 = 20;
	// li r24,36
	r24.s64 = 36;
	// li r25,52
	r25.s64 = 52;
loc_8221EAFC:
	// cntlzd r10,r30
	ctx.r10.u64 = r30.u64 == 0 ? 64 : __builtin_clzll(r30.u64);
	// lwz r9,52(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 52);
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r11,r10,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sld r30,r30,r8
	r30.u64 = ctx.r8.u8 & 0x40 ? 0 : (r30.u64 << (ctx.r8.u8 & 0x7F));
	// not r8,r30
	ctx.r8.u64 = ~r30.u64;
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// cntlzd r28,r8
	r28.u64 = ctx.r8.u64 == 0 ? 64 : __builtin_clzll(ctx.r8.u64);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r29,r28,4,0,27
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r27,r10,r5
	r27.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r11,r29,3
	ctx.r11.s64 = r29.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8221eb70
	if (ctx.cr6.lt) goto loc_8221EB70;
	// li r8,16
	ctx.r8.s64 = 16;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8221e0f8
	ctx.lr = 0x8221EB54;
	sub_8221E0F8(ctx, base);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// clrldi r10,r28,32
	ctx.r10.u64 = r28.u64 & 0xFFFFFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// add r5,r29,r27
	ctx.r5.u64 = r29.u64 + r27.u64;
	// sld r30,r30,r10
	r30.u64 = ctx.r10.u8 & 0x40 ? 0 : (r30.u64 << (ctx.r10.u8 & 0x7F));
	// b 0x8221ec0c
	goto loc_8221EC0C;
loc_8221EB70:
	// clrlwi r11,r4,28
	ctx.r11.u64 = ctx.r4.u32 & 0xF;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8221eb88
	if (!ctx.cr6.eq) goto loc_8221EB88;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stwu r11,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r4.u32 = ea;
	// b 0x8221ebc4
	goto loc_8221EBC4;
loc_8221EB88:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221eba4
	if (!ctx.cr6.eq) goto loc_8221EBA4;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stwu r11,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r4.u32 = ea;
	// stwu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r4.u32 = ea;
	// b 0x8221ebc4
	goto loc_8221EBC4;
loc_8221EBA4:
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x8221ebc4
	if (!ctx.cr6.eq) goto loc_8221EBC4;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stwu r11,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r4.u32 = ea;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// stwu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r4.u32 = ea;
	// stwu r9,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r4.u32 = ea;
loc_8221EBC4:
	// addi r11,r29,-1
	ctx.r11.s64 = r29.s64 + -1;
	// add r5,r29,r27
	ctx.r5.u64 = r29.u64 + r27.u64;
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | r27.u64;
	// stwu r11,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r4.u32 = ea;
loc_8221EBD8:
	// lvx128 v63,r31,r22
	ea = (r31.u32 + r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// lvx128 v62,r31,r23
	ea = (r31.u32 + r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rldicr r30,r30,1,62
	r30.u64 = __builtin_rotateleft64(r30.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// lvx128 v61,r31,r24
	ea = (r31.u32 + r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r31,r25
	ea = (r31.u32 + r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// stvx128 v63,r4,r22
	ea = (ctx.r4.u32 + r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r4,r23
	ea = (ctx.r4.u32 + r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r4,r24
	ea = (ctx.r4.u32 + r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r4,r25
	ea = (ctx.r4.u32 + r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,64
	ctx.r4.s64 = ctx.r4.s64 + 64;
	// bne 0x8221ebd8
	if (!ctx.cr0.eq) goto loc_8221EBD8;
loc_8221EC0C:
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(r30.u64, 0, ctx.xer);
	// bne cr6,0x8221eafc
	if (!ctx.cr6.eq) goto loc_8221EAFC;
	// stw r4,48(r26)
	REX_STORE_U32(r26.u32 + 48, ctx.r4.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_822255C0) {
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
	ctx.lr = 0x822255C8;
	// stwu r1,-1760(r1)
	ea = -1760 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,64(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 64);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r28,0(r4)
	r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r27,4(r4)
	r27.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// lwz r25,16(r4)
	r25.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r22,40(r4)
	r22.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// lwz r26,8(r4)
	r26.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// bne cr6,0x822255fc
	if (!ctx.cr6.eq) goto loc_822255FC;
	// clrlwi r11,r26,26
	ctx.r11.u64 = r26.u32 & 0x3F;
	// b 0x8222560c
	goto loc_8222560C;
loc_822255FC:
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// ori r11,r11,390
	ctx.r11.u64 = ctx.r11.u64 | 390;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82225614
	if (!ctx.cr6.eq) goto loc_82225614;
loc_8222560C:
	// lis r30,10280
	r30.s64 = 673710080;
	// b 0x82225628
	goto loc_82225628;
loc_82225614:
	// lis r11,6184
	ctx.r11.s64 = 405274624;
	// ori r11,r11,390
	ctx.r11.u64 = ctx.r11.u64 | 390;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82225630
	if (!ctx.cr6.eq) goto loc_82225630;
	// lis r30,6184
	r30.s64 = 405274624;
loc_82225628:
	// ori r30,r30,262
	r30.u64 = r30.u64 | 262;
	// b 0x82225660
	goto loc_82225660;
loc_82225630:
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// ori r11,r11,438
	ctx.r11.u64 = ctx.r11.u64 | 438;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82225648
	if (!ctx.cr6.eq) goto loc_82225648;
	// lis r30,10280
	r30.s64 = 673710080;
	// b 0x8222565c
	goto loc_8222565C;
loc_82225648:
	// lis r11,6184
	ctx.r11.s64 = 405274624;
	// ori r11,r11,438
	ctx.r11.u64 = ctx.r11.u64 | 438;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82225660
	if (!ctx.cr6.eq) goto loc_82225660;
	// lis r30,6184
	r30.s64 = 405274624;
loc_8222565C:
	// ori r30,r30,310
	r30.u64 = r30.u64 | 310;
loc_82225660:
	// clrlwi r23,r30,26
	r23.u64 = r30.u32 & 0x3F;
	// mr r24,r23
	r24.u64 = r23.u64;
	// cmplwi cr6,r23,50
	ctx.cr6.compare<uint32_t>(r23.u32, 50, ctx.xer);
	// bne cr6,0x82225678
	if (!ctx.cr6.eq) goto loc_82225678;
	// li r24,6
	r24.s64 = 6;
	// b 0x82225684
	goto loc_82225684;
loc_82225678:
	// cmplwi cr6,r24,7
	ctx.cr6.compare<uint32_t>(r24.u32, 7, ctx.xer);
	// bne cr6,0x82225684
	if (!ctx.cr6.eq) goto loc_82225684;
	// li r24,54
	r24.s64 = 54;
loc_82225684:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824d461c
	ctx.lr = 0x8222568C;
	__imp__VdQueryVideoMode(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,21964
	ctx.r9.s64 = 21964;
	// lfs f0,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stw r11,21952(r29)
	REX_STORE_U32(r29.u32 + 21952, ctx.r11.u32);
	// stw r11,21960(r29)
	REX_STORE_U32(r29.u32 + 21960, ctx.r11.u32);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r29,r9
	REX_STORE_U32(r29.u32 + ctx.r9.u32, ctx.f0.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,21956(r29)
	REX_STORE_U32(r29.u32 + 21956, ctx.r11.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82225700
	if (!ctx.cr6.eq) goto loc_82225700;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82223018
	ctx.lr = 0x822256EC;
	sub_82223018(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822256fc
	if (!ctx.cr0.eq) goto loc_822256FC;
loc_822256F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82225834
	goto loc_82225834;
loc_822256FC:
	// stw r3,15232(r29)
	REX_STORE_U32(r29.u32 + 15232, ctx.r3.u32);
loc_82225700:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8222573c
	if (!ctx.cr6.eq) goto loc_8222573C;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82223138
	ctx.lr = 0x82225724;
	sub_82223138(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x822256f4
	if (ctx.cr0.eq) goto loc_822256F4;
	// stw r5,15236(r29)
	REX_STORE_U32(r29.u32 + 15236, ctx.r5.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82212f10
	ctx.lr = 0x8222573C;
	sub_82212F10(ctx, base);
loc_8222573C:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82225774
	if (ctx.cr6.eq) goto loc_82225774;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82223138
	ctx.lr = 0x82225760;
	sub_82223138(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x822256f4
	if (ctx.cr0.eq) goto loc_822256F4;
	// stw r4,15228(r29)
	REX_STORE_U32(r29.u32 + 15228, ctx.r4.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822132a0
	ctx.lr = 0x82225774;
	sub_822132A0(ctx, base);
loc_82225774:
	// addi r3,r29,13948
	ctx.r3.s64 = r29.s64 + 13948;
	// li r5,124
	ctx.r5.s64 = 124;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82225784;
	sub_822D4FA0(ctx, base);
	// rlwinm r11,r30,0,2,13
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x3FFC0000;
	// lis r10,9360
	ctx.r10.s64 = 613416960;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822257a0
	if (ctx.cr6.eq) goto loc_822257A0;
	// oris r11,r23,10280
	ctx.r11.u64 = r23.u64 | 673710080;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,14012(r29)
	REX_STORE_U32(r29.u32 + 14012, ctx.r11.u32);
loc_822257A0:
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8222d988
	ctx.lr = 0x822257AC;
	sub_8222D988(ctx, base);
	// cmplwi cr6,r24,7
	ctx.cr6.compare<uint32_t>(r24.u32, 7, ctx.xer);
	// beq cr6,0x822257dc
	if (ctx.cr6.eq) goto loc_822257DC;
	// cmplwi cr6,r24,54
	ctx.cr6.compare<uint32_t>(r24.u32, 54, ctx.xer);
	// beq cr6,0x822257dc
	if (ctx.cr6.eq) goto loc_822257DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82217938
	ctx.lr = 0x822257C8;
	sub_82217938(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82212890
	ctx.lr = 0x822257D8;
	sub_82212890(ctx, base);
	// b 0x822257f8
	goto loc_822257F8;
loc_822257DC:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82217980
	ctx.lr = 0x822257E8;
	sub_82217980(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82212960
	ctx.lr = 0x822257F8;
	sub_82212960(ctx, base);
loc_822257F8:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,17116(r29)
	REX_STORE_U32(r29.u32 + 17116, ctx.r11.u32);
	// bl 0x824d419c
	ctx.lr = 0x82225804;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82225830
	if (ctx.cr6.eq) goto loc_82225830;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm. r11,r11,0,26,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222582c
	if (ctx.cr0.eq) goto loc_8222582C;
	// bl 0x82224f60
	ctx.lr = 0x82225820;
	sub_82224F60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82225830
	if (!ctx.cr0.eq) goto loc_82225830;
	// b 0x822256f4
	goto loc_822256F4;
loc_8222582C:
	// bl 0x82224fd8
	ctx.lr = 0x82225830;
	sub_82224FD8(ctx, base);
loc_82225830:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82225834:
	// addi r1,r1,1760
	ctx.r1.s64 = ctx.r1.s64 + 1760;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_8222FCA8) {
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
	// bl 0x8222f888
	ctx.lr = 0x8222FCB8;
	sub_8222F888(ctx, base);
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-5889(r10)
	REX_STORE_U8(ctx.r10.u32 + -5889, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82231428) {
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
	// bl 0x822d4e50
	ctx.lr = 0x82231430;
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r7,436(r1)
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r7.u32);
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// stw r10,460(r1)
	REX_STORE_U32(ctx.r1.u32 + 460, ctx.r10.u32);
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r16,r6
	r16.u64 = ctx.r6.u64;
	// mr r15,r8
	r15.u64 = ctx.r8.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// rlwinm. r11,r4,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r25,0
	r25.s64 = 0;
	// li r22,1
	r22.s64 = 1;
	// beq 0x82231484
	if (ctx.cr0.eq) goto loc_82231484;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// stw r22,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r22.u32);
	// lwz r11,-5884(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -5884);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82231488
	if (ctx.cr6.eq) goto loc_82231488;
loc_82231484:
	// stw r25,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r25.u32);
loc_82231488:
	// rlwinm. r11,r21,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822314a4
	if (ctx.cr0.eq) goto loc_822314A4;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// stw r22,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r22.u32);
	// lwz r11,-5880(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -5880);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822314a8
	if (ctx.cr6.eq) goto loc_822314A8;
loc_822314A4:
	// stw r25,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r25.u32);
loc_822314A8:
	// clrlwi r11,r21,29
	ctx.r11.u64 = r21.u32 & 0x7;
	// rlwinm. r10,r21,0,25,27
	ctx.r10.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x70;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// bne 0x82231500
	if (!ctx.cr0.eq) goto loc_82231500;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x822314c8
	if (!ctx.cr6.eq) goto loc_822314C8;
	// lwz r11,12832(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12832);
	// b 0x822314d4
	goto loc_822314D4;
loc_822314C8:
	// addi r11,r11,3204
	ctx.r11.s64 = ctx.r11.s64 + 3204;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
loc_822314D4:
	// lhz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 24);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822314ec
	if (!ctx.cr6.eq) goto loc_822314EC;
	// ori r21,r21,16
	r21.u64 = r21.u64 | 16;
	// b 0x82231500
	goto loc_82231500;
loc_822314EC:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822314fc
	if (!ctx.cr6.eq) goto loc_822314FC;
	// ori r21,r21,80
	r21.u64 = r21.u64 | 80;
	// b 0x82231500
	goto loc_82231500;
loc_822314FC:
	// ori r21,r21,112
	r21.u64 = r21.u64 | 112;
loc_82231500:
	// lwz r17,476(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// bne cr6,0x82231524
	if (!ctx.cr6.eq) goto loc_82231524;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// addi r11,r11,-17312
	ctx.r11.s64 = ctx.r11.s64 + -17312;
	// addi r17,r1,208
	r17.s64 = ctx.r1.s64 + 208;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82231524:
	// lwz r11,40(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 40);
	// lwz r10,48(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 48);
	// rlwinm r11,r11,2,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x2;
	// lwz r9,36(r15)
	ctx.r9.u64 = REX_LOAD_U32(r15.u32 + 36);
	// rlwinm r10,r10,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x600;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,1024
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1024, ctx.xer);
	// beq cr6,0x82231550
	if (ctx.cr6.eq) goto loc_82231550;
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
	// rlwinm r9,r9,19,19,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1FFF;
	// b 0x8223155c
	goto loc_8223155C;
loc_82231550:
	// clrlwi r10,r9,21
	ctx.r10.u64 = ctx.r9.u32 & 0x7FF;
	// li r22,8
	r22.s64 = 8;
	// rlwinm r9,r9,21,21,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0x7FF;
loc_8223155C:
	// lwz r30,32(r15)
	r30.u64 = REX_LOAD_U32(r15.u32 + 32);
	// add r24,r9,r11
	r24.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// stw r24,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r24.u32);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// stw r10,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// clrlwi r3,r30,26
	ctx.r3.u64 = r30.u32 & 0x3F;
	// bl 0x82221460
	ctx.lr = 0x82231580;
	sub_82221460(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r9,r30,1,25,30
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0x7E;
	// lwz r8,28(r15)
	ctx.r8.u64 = REX_LOAD_U32(r15.u32 + 28);
	// addi r11,r11,27512
	ctx.r11.s64 = ctx.r11.s64 + 27512;
	// lwz r20,468(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// rlwinm r10,r30,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFF000;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r8,15,18,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 15) & 0x3FE0;
	// stw r10,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// addi r27,r15,28
	r27.s64 = r15.s64 + 28;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// lbzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r30,156(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mullw r9,r9,r30
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// rlwinm r28,r9,29,3,31
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// divwu r19,r8,r11
	r19.u64 = uint32_t(ctx.r11.u32 ? ctx.r8.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r28,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r28.u32);
	// bne cr6,0x822315dc
	if (!ctx.cr6.eq) goto loc_822315DC;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x82231630
	if (ctx.cr6.eq) goto loc_82231630;
loc_822315DC:
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r11,r22,-1
	ctx.r11.s64 = r22.s64 + -1;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// addi r9,r1,168
	ctx.r9.s64 = ctx.r1.s64 + 168;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r6,r1,156
	ctx.r6.s64 = ctx.r1.s64 + 156;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// andc r4,r20,r11
	ctx.r4.u64 = r20.u64 & ~ctx.r11.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82222148
	ctx.lr = 0x8223161C;
	sub_82222148(ctx, base);
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r10,140(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// twllei r28,0
	if (r28.s32 == 0 || r28.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r19,r11,r28
	r19.u64 = uint32_t(r28.u32 ? ctx.r11.u32 / r28.u32 : 0);
	// lwz r24,128(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
loc_82231630:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// bne cr6,0x82231650
	if (!ctx.cr6.eq) goto loc_82231650;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r23,r1,192
	r23.s64 = ctx.r1.s64 + 192;
	// stw r24,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, r24.u32);
	// stw r25,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, r25.u32);
	// stw r25,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, r25.u32);
	// stw r11,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
loc_82231650:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x82231660
	if (!ctx.cr6.eq) goto loc_82231660;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,-17320
	r29.s64 = ctx.r11.s64 + -17320;
loc_82231660:
	// rlwinm r11,r10,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 0);
	// twllei r30,0
	if (r30.s32 == 0 || r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r7,r11,512
	ctx.r7.s64 = ctx.r11.s64 + 512;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// lwz r6,0(r23)
	ctx.r6.u64 = REX_LOAD_U32(r23.u32 + 0);
	// subf r5,r9,r24
	ctx.r5.u64 = r24.u64 - ctx.r9.u64;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// lwz r4,40(r15)
	ctx.r4.u64 = REX_LOAD_U32(r15.u32 + 40);
	// subf r6,r6,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r6.u64;
	// lwz r29,32(r15)
	r29.u64 = REX_LOAD_U32(r15.u32 + 32);
	// mullw r8,r9,r19
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r19.s32);
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r9,r6,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r7,r7,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// clrlwi r9,r10,3
	ctx.r9.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// mullw r10,r8,r28
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(r28.s32);
	// rlwinm r6,r4,0,28,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xE;
	// divwu r8,r5,r30
	ctx.r8.u64 = uint32_t(r30.u32 ? ctx.r5.u32 / r30.u32 : 0);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// clrlwi r30,r29,26
	r30.u64 = r29.u32 & 0x3F;
	// addic r7,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// add r26,r8,r11
	r26.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r18,r10,r9
	r18.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r27,r21,6,26,31
	r27.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 6) & 0x3F;
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// rlwinm r14,r3,30,30,31
	r14.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3;
	// subfe r25,r7,r6
	temp.u8 = (~ctx.r7.u32 + ctx.r6.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	r25.u64 = ~ctx.r7.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r30,54
	ctx.cr6.compare<uint32_t>(r30.u32, 54, ctx.xer);
	// bne cr6,0x822316e8
	if (!ctx.cr6.eq) goto loc_822316E8;
	// li r30,7
	r30.s64 = 7;
	// b 0x82231754
	goto loc_82231754;
loc_822316E8:
	// cmplwi cr6,r30,55
	ctx.cr6.compare<uint32_t>(r30.u32, 55, ctx.xer);
	// bne cr6,0x822316f8
	if (!ctx.cr6.eq) goto loc_822316F8;
	// li r30,16
	r30.s64 = 16;
	// b 0x82231754
	goto loc_82231754;
loc_822316F8:
	// cmplwi cr6,r30,56
	ctx.cr6.compare<uint32_t>(r30.u32, 56, ctx.xer);
	// bne cr6,0x82231708
	if (!ctx.cr6.eq) goto loc_82231708;
	// li r30,17
	r30.s64 = 17;
	// b 0x82231754
	goto loc_82231754;
loc_82231708:
	// cmplwi cr6,r30,27
	ctx.cr6.compare<uint32_t>(r30.u32, 27, ctx.xer);
	// bne cr6,0x82231718
	if (!ctx.cr6.eq) goto loc_82231718;
	// li r30,30
	r30.s64 = 30;
	// b 0x82231754
	goto loc_82231754;
loc_82231718:
	// cmplwi cr6,r30,28
	ctx.cr6.compare<uint32_t>(r30.u32, 28, ctx.xer);
	// bne cr6,0x82231728
	if (!ctx.cr6.eq) goto loc_82231728;
	// li r30,31
	r30.s64 = 31;
	// b 0x82231754
	goto loc_82231754;
loc_82231728:
	// cmplwi cr6,r30,29
	ctx.cr6.compare<uint32_t>(r30.u32, 29, ctx.xer);
	// bne cr6,0x82231738
	if (!ctx.cr6.eq) goto loc_82231738;
	// li r30,32
	r30.s64 = 32;
	// b 0x82231754
	goto loc_82231754;
loc_82231738:
	// cmplwi cr6,r30,22
	ctx.cr6.compare<uint32_t>(r30.u32, 22, ctx.xer);
	// beq cr6,0x82231750
	if (ctx.cr6.eq) goto loc_82231750;
	// cmplwi cr6,r30,23
	ctx.cr6.compare<uint32_t>(r30.u32, 23, ctx.xer);
	// beq cr6,0x82231750
	if (ctx.cr6.eq) goto loc_82231750;
	// cmplwi cr6,r30,50
	ctx.cr6.compare<uint32_t>(r30.u32, 50, ctx.xer);
	// bne cr6,0x82231754
	if (!ctx.cr6.eq) goto loc_82231754;
loc_82231750:
	// li r30,6
	r30.s64 = 6;
loc_82231754:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// addi r11,r14,-1
	ctx.r11.s64 = r14.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// bne cr6,0x82231770
	if (!ctx.cr6.eq) goto loc_82231770;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r28,r11,2
	r28.s64 = ctx.r11.s64 + 2;
	// b 0x82231774
	goto loc_82231774;
loc_82231770:
	// rlwinm r28,r11,27,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82231774:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822309f8
	ctx.lr = 0x8223177C;
	sub_822309F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82231788
	if (ctx.cr0.eq) goto loc_82231788;
	// li r28,7
	r28.s64 = 7;
loc_82231788:
	// rlwimi r27,r25,8,23,23
	r27.u64 = (__builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 8) & 0x100) | (r27.u64 & 0xFFFFFFFFFFFFFEFF);
	// lwz r11,48(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 48);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// andi. r9,r27,319
	ctx.r9.u64 = r27.u64 & 319;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwimi r28,r9,3,0,28
	r28.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8) | (r28.u64 & 0xFFFFFFFF00000007);
	// rlwinm r6,r11,0,21,22
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x600;
	// rlwimi r10,r28,6,0,25
	ctx.r10.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 6) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
	// rlwinm r8,r26,16,2,15
	ctx.r8.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 16) & 0x3FFF0000;
	// clrlwi r9,r19,18
	ctx.r9.u64 = r19.u32 & 0x3FFF;
	// rlwinm r7,r29,26,30,31
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 26) & 0x3;
	// rlwinm r10,r10,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// or r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 | ctx.r7.u64;
	// cmplwi cr6,r6,1024
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1024, ctx.xer);
	// bne cr6,0x822317ec
	if (!ctx.cr6.eq) goto loc_822317EC;
	// addi r10,r22,-1
	ctx.r10.s64 = r22.s64 + -1;
	// mullw r9,r19,r24
	ctx.r9.s64 = int64_t(r19.s32) * int64_t(r24.s32);
	// stw r9,10820(r31)
	REX_STORE_U32(r31.u32 + 10820, ctx.r9.u32);
	// ld r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 32);
	// and r10,r10,r20
	ctx.r10.u64 = ctx.r10.u64 & r20.u64;
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
	// rlwinm r10,r10,4,25,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x70;
	// std r9,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r9.u64);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_822317EC:
	// rlwinm. r10,r21,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// beq 0x82231800
	if (ctx.cr0.eq) goto loc_82231800;
	// li r9,3
	ctx.r9.s64 = 3;
	// b 0x82231820
	goto loc_82231820;
loc_82231800:
	// lwz r10,148(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x82231814
	if (!ctx.cr6.eq) goto loc_82231814;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82231820
	goto loc_82231820;
loc_82231814:
	// cmplwi cr6,r30,61
	ctx.cr6.compare<uint32_t>(r30.u32, 61, ctx.xer);
	// bne cr6,0x82231820
	if (!ctx.cr6.eq) goto loc_82231820;
	// li r9,2
	ctx.r9.s64 = 2;
loc_82231820:
	// stw r11,10788(r31)
	REX_STORE_U32(r31.u32 + 10788, ctx.r11.u32);
	// andi. r10,r21,887
	ctx.r10.u64 = r21.u64 & 887;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r9,20,10,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x300000;
	// stw r18,10780(r31)
	REX_STORE_U32(r31.u32 + 10780, r18.u32);
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// stw r8,10784(r31)
	REX_STORE_U32(r31.u32 + 10784, ctx.r8.u32);
	// lwz r29,500(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// li r20,-1
	r20.s64 = -1;
	// or r28,r9,r10
	r28.u64 = ctx.r9.u64 | ctx.r10.u64;
	// cmplwi cr6,r30,61
	ctx.cr6.compare<uint32_t>(r30.u32, 61, ctx.xer);
	// stw r28,10776(r31)
	REX_STORE_U32(r31.u32 + 10776, r28.u32);
	// ld r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 32);
	// ori r11,r11,15360
	ctx.r11.u64 = ctx.r11.u64 | 15360;
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
	// bne cr6,0x82231920
	if (!ctx.cr6.eq) goto loc_82231920;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822318e8
	if (ctx.cr6.eq) goto loc_822318E8;
	// lwz r9,24(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 24);
	// lwz r8,20(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lbz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 28);
	// lbz r10,32(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 32);
	// rlwimi r8,r9,4,25,27
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x70) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFF8F);
	// lbz r7,31(r29)
	ctx.r7.u64 = REX_LOAD_U8(r29.u32 + 31);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r6,35(r29)
	ctx.r6.u64 = REX_LOAD_U8(r29.u32 + 35);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lwz r9,16(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 16);
	// rlwinm r8,r8,4,21,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x7F0;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// lbz r7,30(r29)
	ctx.r7.u64 = REX_LOAD_U8(r29.u32 + 30);
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// lbz r6,34(r29)
	ctx.r6.u64 = REX_LOAD_U8(r29.u32 + 34);
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// rlwinm r8,r8,0,25,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// lbz r4,29(r29)
	ctx.r4.u64 = REX_LOAD_U8(r29.u32 + 29);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r3,33(r29)
	ctx.r3.u64 = REX_LOAD_U8(r29.u32 + 33);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r8,r5,29
	ctx.r8.u64 = ctx.r5.u32 & 0x7;
	// rlwinm r7,r11,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r6,r10,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r10,r7,r4
	ctx.r10.u64 = ctx.r7.u64 | ctx.r4.u64;
	// or r9,r6,r3
	ctx.r9.u64 = ctx.r6.u64 | ctx.r3.u64;
	// b 0x822318f8
	goto loc_822318F8;
loc_822318E8:
	// lis r10,-32640
	ctx.r10.s64 = -2139095040;
	// li r11,4369
	ctx.r11.s64 = 4369;
	// ori r10,r10,32896
	ctx.r10.u64 = ctx.r10.u64 | 32896;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
loc_822318F8:
	// stw r11,10808(r31)
	REX_STORE_U32(r31.u32 + 10808, ctx.r11.u32);
	// stw r10,10812(r31)
	REX_STORE_U32(r31.u32 + 10812, ctx.r10.u32);
	// stw r9,10816(r31)
	REX_STORE_U32(r31.u32 + 10816, ctx.r9.u32);
	// ld r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 32);
	// ori r11,r11,60
	ctx.r11.u64 = ctx.r11.u64 | 60;
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
	// ori r11,r11,30
	ctx.r11.u64 = ctx.r11.u64 | 30;
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
	// ori r11,r11,15
	ctx.r11.u64 = ctx.r11.u64 | 15;
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
loc_82231920:
	// rlwinm. r26,r21,0,22,22
	r26.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq 0x8223193c
	if (ctx.cr0.eq) goto loc_8223193C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,492(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82230b58
	ctx.lr = 0x8223193C;
	sub_82230B58(ctx, base);
loc_8223193C:
	// rlwinm. r11,r21,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82231958
	if (ctx.cr0.eq) goto loc_82231958;
	// clrlwi r5,r28,29
	ctx.r5.u64 = r28.u32 & 0x7;
	// lvx128 v1,r0,r17
	ea = (r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822310f0
	ctx.lr = 0x82231958;
	sub_822310F0(ctx, base);
loc_82231958:
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// li r22,0
	r22.s64 = 0;
	// lwz r10,12(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 12);
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// lwz r11,10436(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10436);
	// lwz r27,0(r23)
	r27.u64 = REX_LOAD_U32(r23.u32 + 0);
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// rlwinm r8,r11,17,0,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// lwz r25,4(r23)
	r25.u64 = REX_LOAD_U32(r23.u32 + 4);
	// rlwinm r24,r9,0,0,28
	r24.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// srawi r9,r8,17
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 17;
	// rlwinm r23,r10,0,0,28
	r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpw cr6,r27,r9
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822319c4
	if (ctx.cr6.lt) goto loc_822319C4;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r11,r11,17
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 17;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822319c4
	if (ctx.cr6.lt) goto loc_822319C4;
	// lwz r11,10440(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10440);
	// rlwinm r10,r11,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// srawi r10,r10,17
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 17;
	// cmpw cr6,r24,r10
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x822319c4
	if (ctx.cr6.gt) goto loc_822319C4;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r11,r11,17
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 17;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x822319e0
	if (!ctx.cr6.gt) goto loc_822319E0;
loc_822319C4:
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8220fed8
	ctx.lr = 0x822319DC;
	sub_8220FED8(ctx, base);
	// li r22,1
	r22.s64 = 1;
loc_822319E0:
	// lwz r11,436(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82231b98
	if (!ctx.cr6.eq) goto loc_82231B98;
	// ld r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 16);
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// beq cr6,0x82231b0c
	if (ctx.cr6.eq) goto loc_82231B0C;
	// ld r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 40);
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82231a18
	if (ctx.cr6.eq) goto loc_82231A18;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 10560);
	// bl 0x8221e3a8
	ctx.lr = 0x82231A14;
	sub_8221E3A8(ctx, base);
	// std r3,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r3.u64);
loc_82231A18:
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// clrldi r10,r11,52
	ctx.r10.u64 = ctx.r11.u64 & 0xFFF;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82231a48
	if (ctx.cr6.eq) goto loc_82231A48;
	// addi r6,r31,10548
	ctx.r6.s64 = r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r11,52,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e738
	ctx.lr = 0x82231A3C;
	sub_8221E738(ctx, base);
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// rldicr r11,r11,0,51
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFF000;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
loc_82231A48:
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// rlwinm r10,r11,0,15,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82231a80
	if (ctx.cr6.eq) goto loc_82231A80;
	// addi r6,r31,10528
	ctx.r6.s64 = r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r11,47,4
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e738
	ctx.lr = 0x82231A6C;
	sub_8221E738(ctx, base);
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
loc_82231A80:
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
	// beq cr6,0x82231ac8
	if (ctx.cr6.eq) goto loc_82231AC8;
	// addi r6,r31,10368
	ctx.r6.s64 = r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r11,6,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e738
	ctx.lr = 0x82231AB0;
	sub_8221E738(ctx, base);
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
loc_82231AC8:
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
	// beq cr6,0x82231b0c
	if (ctx.cr6.eq) goto loc_82231B0C;
	// addi r6,r31,10444
	ctx.r6.s64 = r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r11,22,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e738
	ctx.lr = 0x82231AF4;
	sub_8221E738(ctx, base);
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
loc_82231B0C:
	// ld r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 24);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82231b5c
	if (ctx.cr6.eq) goto loc_82231B5C;
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
	// beq cr6,0x82231b5c
	if (ctx.cr6.eq) goto loc_82231B5C;
	// addi r6,r31,10596
	ctx.r6.s64 = r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r11,9,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e738
	ctx.lr = 0x82231B44;
	sub_8221E738(ctx, base);
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
loc_82231B5C:
	// ld r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 32);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82231bd4
	if (ctx.cr6.eq) goto loc_82231BD4;
	// clrldi r10,r11,26
	ctx.r10.u64 = ctx.r11.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82231bd4
	if (ctx.cr6.eq) goto loc_82231BD4;
	// addi r6,r31,10680
	ctx.r6.s64 = r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r11,26,37
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e738
	ctx.lr = 0x82231B88;
	sub_8221E738(ctx, base);
	// ld r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 32);
	// rldicr r11,r11,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFC000000000;
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
	// b 0x82231bd4
	goto loc_82231BD4;
loc_82231B98:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822311c8
	ctx.lr = 0x82231BA4;
	sub_822311C8(ctx, base);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x82231bd4
	if (ctx.cr6.eq) goto loc_82231BD4;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82231bc4
	if (!ctx.cr6.gt) goto loc_82231BC4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x82231BC4;
	sub_82215008(ctx, base);
loc_82231BC4:
	// li r11,8450
	ctx.r11.s64 = 8450;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r16,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r16.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_82231BD4:
	// lbz r11,11068(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11068);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82231be8
	if (ctx.cr0.eq) goto loc_82231BE8;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82231c78
	goto loc_82231C78;
loc_82231BE8:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82231c70
	if (ctx.cr0.eq) goto loc_82231C70;
	// lwz r11,12816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12816);
	// lwz r10,13104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13104);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82231c08
	if (ctx.cr6.eq) goto loc_82231C08;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82231c70
	if (!ctx.cr6.eq) goto loc_82231C70;
loc_82231C08:
	// lwz r11,12820(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12820);
	// lwz r10,13108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13108);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82231c20
	if (ctx.cr6.eq) goto loc_82231C20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82231c70
	if (!ctx.cr6.eq) goto loc_82231C70;
loc_82231C20:
	// lwz r11,12824(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12824);
	// lwz r10,13112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13112);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82231c38
	if (ctx.cr6.eq) goto loc_82231C38;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82231c70
	if (!ctx.cr6.eq) goto loc_82231C70;
loc_82231C38:
	// lwz r11,12828(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12828);
	// lwz r10,13116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13116);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82231c50
	if (ctx.cr6.eq) goto loc_82231C50;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82231c70
	if (!ctx.cr6.eq) goto loc_82231C70;
loc_82231C50:
	// lwz r11,12832(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12832);
	// lwz r10,13120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13120);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82231c68
	if (ctx.cr6.eq) goto loc_82231C68;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82231c70
	if (!ctx.cr6.eq) goto loc_82231C70;
loc_82231C68:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82231c74
	goto loc_82231C74;
loc_82231C70:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82231C74:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82231C78:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82231d84
	if (ctx.cr0.eq) goto loc_82231D84;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82231c98
	if (!ctx.cr6.gt) goto loc_82231C98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x82231C98;
	sub_82215008(ctx, base);
loc_82231C98:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,24832
	ctx.r11.u64 = ctx.r11.u64 | 24832;
	// li r28,0
	r28.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r10,13124(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13124);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82231d58
	if (!ctx.cr6.gt) goto loc_82231D58;
	// li r29,0
	r29.s64 = 0;
	// addi r30,r31,13368
	r30.s64 = r31.s64 + 13368;
loc_82231CC8:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r7,3
	ctx.r7.s64 = 3;
	// ori r10,r10,24576
	ctx.r10.u64 = ctx.r10.u64 | 24576;
	// lwz r6,152(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// slw r7,r7,r29
	ctx.r7.u64 = r29.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r29.u8 & 0x3F));
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lis r10,-16383
	ctx.r10.s64 = -1073676288;
	// li r5,8985
	ctx.r5.s64 = 8985;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// ori r3,r10,21761
	ctx.r3.u64 = ctx.r10.u64 | 21761;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// mullw r10,r8,r19
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(r19.s32);
	// stwu r7,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r4.u32 = ea;
	// stwu r3,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r4.u32 = ea;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwu r5,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r4.u32 = ea;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + r18.u64;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// ble cr6,0x82231d40
	if (!ctx.cr6.gt) goto loc_82231D40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x82231D3C;
	sub_82215008(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82231D40:
	// lwz r10,13124(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13124);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82231cc8
	if (ctx.cr6.lt) goto loc_82231CC8;
loc_82231D58:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// ori r10,r10,24576
	ctx.r10.u64 = ctx.r10.u64 | 24576;
	// ori r9,r9,24832
	ctx.r9.u64 = ctx.r9.u64 | 24832;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lwz r10,13084(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13084);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lwz r10,13088(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13088);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
loc_82231D84:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82231da0
	if (!ctx.cr6.gt) goto loc_82231DA0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x82231D9C;
	sub_82215008(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82231DA0:
	// lbz r10,11070(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 11070);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ori r28,r9,17920
	r28.u64 = ctx.r9.u64 | 17920;
	// beq 0x82231dec
	if (ctx.cr0.eq) goto loc_82231DEC;
	// stwu r28,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r11.u32 = ea;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r8,6
	ctx.r8.s64 = 6;
	// li r6,6
	ctx.r6.s64 = 6;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r28,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r28,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// lbz r10,11070(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 11070);
	// andi. r10,r10,247
	ctx.r10.u64 = ctx.r10.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r10,11070(r31)
	REX_STORE_U8(r31.u32 + 11070, ctx.r10.u8);
loc_82231DEC:
	// lwz r21,436(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r29,136(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// bne cr6,0x82231e70
	if (!ctx.cr6.eq) goto loc_82231E70;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x82231e70
	if (!ctx.cr6.eq) goto loc_82231E70;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,256
	ctx.r9.s64 = 256;
	// ori r10,r10,15104
	ctx.r10.u64 = ctx.r10.u64 | 15104;
	// lis r8,-16368
	ctx.r8.s64 = -1072693248;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r8,r8,11008
	ctx.r8.u64 = ctx.r8.u64 | 11008;
	// li r7,15
	ctx.r7.s64 = 15;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// li r5,60
	ctx.r5.s64 = 60;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// addi r4,r6,-17520
	ctx.r4.s64 = ctx.r6.s64 + -17520;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// stwu r7,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x822d4fa0
	ctx.lr = 0x82231E4C;
	sub_822D4FA0(ctx, base);
	// addi r11,r30,60
	ctx.r11.s64 = r30.s64 + 60;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
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
loc_82231E70:
	// li r10,8712
	ctx.r10.s64 = 8712;
	// li r9,6
	ctx.r9.s64 = 6;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,8704
	ctx.r10.s64 = 8704;
	// li r19,0
	r19.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// mr r8,r19
	ctx.r8.u64 = r19.u64;
	// mr r30,r19
	r30.u64 = r19.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r19,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r19.u32);
	ctx.r11.u32 = ea;
	// beq cr6,0x82231ed8
	if (ctx.cr6.eq) goto loc_82231ED8;
	// lbz r9,11069(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 11069);
	// lbz r10,11070(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 11070);
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
	// lwz r7,10560(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 10560);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stb r9,11069(r31)
	REX_STORE_U8(r31.u32 + 11069, ctx.r9.u8);
	// rlwimi r8,r10,30,28,28
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x8) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF7);
	// rlwinm r10,r7,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r8,r8,29,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x7;
	// rlwinm r8,r8,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// or r30,r8,r10
	r30.u64 = ctx.r8.u64 | ctx.r10.u64;
	// ld r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 16);
	// oris r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 131072;
	// std r9,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r9.u64);
loc_82231ED8:
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x82231ef0
	if (ctx.cr6.eq) goto loc_82231EF0;
	// lbz r11,11072(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11072);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82231ef8
	if (ctx.cr0.eq) goto loc_82231EF8;
loc_82231EF0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221a770
	ctx.lr = 0x82231EF8;
	sub_8221A770(ctx, base);
loc_82231EF8:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e3a8
	ctx.lr = 0x82231F08;
	sub_8221E3A8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x82231fac
	if (!ctx.cr6.eq) goto loc_82231FAC;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82231f28
	if (!ctx.cr6.gt) goto loc_82231F28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x82231F28;
	sub_82215008(ctx, base);
loc_82231F28:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,8448
	ctx.r11.u64 = ctx.r11.u64 | 8448;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r8,8851
	ctx.r8.s64 = 8851;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,768
	ctx.r4.s64 = 768;
	// li r30,8978
	r30.s64 = 8978;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// ori r10,r6,8708
	ctx.r10.u64 = ctx.r6.u64 | 8708;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lis r29,0
	r29.s64 = 0;
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// ori r11,r29,65535
	ctx.r11.u64 = r29.u64 | 65535;
	// stwu r19,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r19.u32);
	ctx.r3.u32 = ea;
	// li r26,8205
	r26.s64 = 8205;
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// mr r29,r19
	r29.u64 = r19.u64;
	// stwu r19,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r19.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r19,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r19.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r19,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r19.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_82231FAC:
	// lwz r26,144(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x8223203c
	if (!ctx.cr6.eq) goto loc_8223203C;
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// rldicr r12,r12,41,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 41) & 0xFFFFFFFFFFFFFFFF;
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
loc_8223203C:
	// cmplwi cr6,r14,3
	ctx.cr6.compare<uint32_t>(r14.u32, 3, ctx.xer);
	// bne cr6,0x822320d8
	if (!ctx.cr6.eq) goto loc_822320D8;
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x822320d8
	if (ctx.cr6.eq) goto loc_822320D8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r19
	r30.u64 = r19.u64;
	// beq cr6,0x82232060
	if (ctx.cr6.eq) goto loc_82232060;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
loc_82232060:
	// addi r11,r30,2593
	ctx.r11.s64 = r30.s64 + 2593;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r31
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// rlwinm r11,r29,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822320d8
	if (!ctx.cr6.eq) goto loc_822320D8;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82232094
	if (!ctx.cr6.gt) goto loc_82232094;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x82232094;
	sub_82215008(ctx, base);
loc_82232094:
	// addis r10,r30,2
	ctx.r10.s64 = r30.s64 + 131072;
	// addi r11,r30,8193
	ctx.r11.s64 = r30.s64 + 8193;
	// addi r10,r10,263
	ctx.r10.s64 = ctx.r10.s64 + 263;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// clrlwi r8,r29,6
	ctx.r8.u64 = r29.u32 & 0x3FFFFFF;
	// srawi r11,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 16;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r8,0,20,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFF00FFF;
	// clrldi r10,r10,56
	ctx.r10.u64 = ctx.r10.u64 & 0xFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// ldx r8,r11,r31
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + r31.u32);
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stdx r10,r11,r31
	REX_STORE_U64(ctx.r11.u32 + r31.u32, ctx.r10.u64);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_822320D8:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// bne cr6,0x82232240
	if (!ctx.cr6.eq) goto loc_82232240;
	// lwz r30,48(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822320fc
	if (!ctx.cr6.gt) goto loc_822320FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x822320F8;
	sub_82215008(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_822320FC:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82213e40
	ctx.lr = 0x8223210C;
	sub_82213E40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8223211c
	if (!ctx.cr0.eq) goto loc_8223211C;
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// b 0x82232570
	goto loc_82232570;
loc_8223211C:
	// rlwinm r11,r3,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xFFF;
	// lwz r9,10688(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 10688);
	// clrlwi r10,r3,3
	ctx.r10.u64 = ctx.r3.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne 0x82232148
	if (!ctx.cr0.eq) goto loc_82232148;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2000(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82232150
	goto loc_82232150;
loc_82232148:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
loc_82232150:
	// extsw r10,r27
	ctx.r10.s64 = r27.s32;
	// std r10,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r10.u64);
	// extsw r10,r25
	ctx.r10.s64 = r25.s32;
	// std r10,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r10.u64);
	// subf r10,r25,r23
	ctx.r10.u64 = r23.u64 - r25.u64;
	// subf r9,r27,r24
	ctx.r9.u64 = r24.u64 - r27.u64;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r10,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r10.u64);
	// lfd f10,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// std r9,168(r1)
	REX_STORE_U64(ctx.r1.u32 + 168, ctx.r9.u64);
	// lfd f11,168(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lis r9,5
	ctx.r9.s64 = 327680;
	// lfd f13,192(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,176(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// ori r10,r9,18432
	ctx.r10.u64 = ctx.r9.u64 | 18432;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r9,r9,26
	ctx.r9.u64 = ctx.r9.u64 | 26;
	// ori r4,r4,20480
	ctx.r4.u64 = ctx.r4.u64 | 20480;
	// mr r8,r19
	ctx.r8.u64 = r19.u64;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// mr r27,r19
	r27.u64 = r19.u64;
	// mr r25,r19
	r25.u64 = r19.u64;
	// mr r24,r19
	r24.u64 = r19.u64;
	// li r29,3
	r29.s64 = 3;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stwu r10,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	r30.u32 = ea;
	// stwu r11,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r30.u32 = ea;
	// stwu r9,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	r30.u32 = ea;
	// stwu r19,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r19.u32);
	r30.u32 = ea;
	// stwu r19,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r19.u32);
	r30.u32 = ea;
	// stwu r19,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r19.u32);
	r30.u32 = ea;
	// stwu r19,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r19.u32);
	r30.u32 = ea;
	// stwu r4,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	r30.u32 = ea;
	// stwu r19,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r19.u32);
	r30.u32 = ea;
	// stwu r19,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r19.u32);
	r30.u32 = ea;
	// stwu r19,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r19.u32);
	r30.u32 = ea;
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// b 0x82232244
	goto loc_82232244;
loc_82232240:
	// mr r29,r21
	r29.u64 = r21.u64;
loc_82232244:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8223225c
	if (!ctx.cr6.gt) goto loc_8223225C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x8223225C;
	sub_82215008(ctx, base);
loc_8223225C:
	// lwz r11,13092(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13092);
	// li r10,136
	ctx.r10.s64 = 136;
	// li r9,8199
	ctx.r9.s64 = 8199;
	// oris r11,r11,49152
	ctx.r11.u64 = ctx.r11.u64 | 3221225472;
	// rlwimi r10,r29,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// ori r11,r11,13824
	ctx.r11.u64 = ctx.r11.u64 | 13824;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r11,6
	ctx.r11.s64 = 6;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// lwz r11,10396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10396);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// beq cr6,0x822322d0
	if (ctx.cr6.eq) goto loc_822322D0;
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
	// bl 0x8220fed8
	ctx.lr = 0x822322D0;
	sub_8220FED8(ctx, base);
loc_822322D0:
	// lwz r11,11036(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11036);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// stw r11,8(r15)
	REX_STORE_U32(r15.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82232308
	if (!ctx.cr6.eq) goto loc_82232308;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// ld r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 24);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// std r11,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r11.u64);
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
loc_82232308:
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// addi r3,r15,28
	ctx.r3.s64 = r15.s64 + 28;
	// addi r6,r1,156
	ctx.r6.s64 = ctx.r1.s64 + 156;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// bl 0x82221320
	ctx.lr = 0x82232338;
	sub_82221320(ctx, base);
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r9,152(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// lwz r7,44(r15)
	ctx.r7.u64 = REX_LOAD_U32(r15.u32 + 44);
	// lwz r5,156(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r4,148(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r3,144(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r8,28(r15)
	ctx.r8.u64 = REX_LOAD_U32(r15.u32 + 28);
	// lwz r10,40(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 40);
	// rlwinm r11,r8,10,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 10) & 0x1FF;
	// lwz r30,48(r15)
	r30.u64 = REX_LOAD_U32(r15.u32 + 48);
	// rlwinm r6,r10,13,0,18
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFFFE000;
	// lwz r29,32(r15)
	r29.u64 = REX_LOAD_U32(r15.u32 + 32);
	// mullw r9,r11,r9
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// rlwinm r11,r7,26,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0xF;
	// srawi r7,r6,26
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FFFFFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 26;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// rlwinm r9,r8,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// rlwinm r10,r30,21,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 21) & 0x1;
	// rlwinm r8,r30,23,30,31
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 23) & 0x3;
	// clrlwi r7,r29,26
	ctx.r7.u64 = r29.u32 & 0x3F;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x822216a0
	ctx.lr = 0x822323B4;
	sub_822216A0(ctx, base);
	// lwz r11,460(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822323e8
	if (ctx.cr6.eq) goto loc_822323E8;
	// lwz r11,48(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 48);
	// rlwinm. r10,r11,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822323e8
	if (ctx.cr0.eq) goto loc_822323E8;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// lwz r30,136(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r11,r11,0,3,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFFF000;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82232408
	goto loc_82232408;
loc_822323E8:
	// lwz r11,32(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 32);
	// lwz r30,160(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// rlwinm r10,r11,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r11,r10,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r29,r11,r10
	r29.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82232408:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82232420
	if (!ctx.cr6.gt) goto loc_82232420;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x82232420;
	sub_82215008(ctx, base);
loc_82232420:
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,-5888(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -5888);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822324b8
	if (ctx.cr6.eq) goto loc_822324B8;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x822324e0
	if (!ctx.cr6.eq) goto loc_822324E0;
	// li r11,2609
	ctx.r11.s64 = 2609;
	// lis r10,768
	ctx.r10.s64 = 50331648;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r9,r30,8191
	ctx.r9.s64 = r30.s64 + 8191;
	// ori r11,r11,2607
	ctx.r11.u64 = ctx.r11.u64 | 2607;
	// rlwinm r9,r9,0,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r8,r29,0,0,19
	ctx.r8.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFF000;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lis r7,-16380
	ctx.r7.s64 = -1073479680;
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r7,r7,15360
	ctx.r7.u64 = ctx.r7.u64 | 15360;
	// li r6,2609
	ctx.r6.s64 = 2609;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r30,8
	r30.s64 = 8;
	// li r11,1480
	ctx.r11.s64 = 1480;
	// lis r29,2
	r29.s64 = 131072;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
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
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r19,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r19.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// b 0x822324e0
	goto loc_822324E0;
loc_822324B8:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x822324e0
	if (!ctx.cr6.eq) goto loc_822324E0;
	// lbz r10,11072(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 11072);
	// li r12,3
	ctx.r12.s64 = 3;
	// ori r10,r10,192
	ctx.r10.u64 = ctx.r10.u64 | 192;
	// rldicr r12,r12,62,1
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 62) & 0xC000000000000000;
	// stb r10,11072(r31)
	REX_STORE_U8(r31.u32 + 11072, ctx.r10.u8);
	// ld r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 32);
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r10,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r10.u64);
loc_822324E0:
	// li r10,8984
	ctx.r10.s64 = 8984;
	// stw r19,10776(r31)
	REX_STORE_U32(r31.u32 + 10776, r19.u32);
	// stw r19,10788(r31)
	REX_STORE_U32(r31.u32 + 10788, r19.u32);
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,8987
	ctx.r10.s64 = 8987;
	// stwu r19,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r19.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stwu r19,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, r19.u32);
	ctx.r10.u32 = ea;
	// lwz r11,11036(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11036);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// beq cr6,0x82232524
	if (ctx.cr6.eq) goto loc_82232524;
	// stw r11,8(r15)
	REX_STORE_U32(r15.u32 + 8, ctx.r11.u32);
	// stw r11,12(r15)
	REX_STORE_U32(r15.u32 + 12, ctx.r11.u32);
	// b 0x82232570
	goto loc_82232570;
loc_82232524:
	// lwz r11,11040(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11040);
	// lwz r10,0(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82232570
	if (ctx.cr0.eq) goto loc_82232570;
	// lwz r11,13932(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13932);
	// lwz r3,13928(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 13928);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223254c
	if (ctx.cr6.lt) goto loc_8223254C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822158d0
	ctx.lr = 0x8223254C;
	sub_822158D0(ctx, base);
loc_8223254C:
	// stw r20,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, r20.u32);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lwz r10,192(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// rlwimi r10,r15,30,2,31
	ctx.r10.u64 = (__builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 30) & 0x3FFFFFFF) | (ctx.r10.u64 & 0xFFFFFFFFC0000000);
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// stw r10,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// ld r10,192(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// std r10,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// stw r11,13928(r31)
	REX_STORE_U32(r31.u32 + 13928, ctx.r11.u32);
loc_82232570:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8227F328) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8227F330;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822094d8
	ctx.lr = 0x8227F360;
	sub_822094D8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8227f370
	if (!ctx.cr0.eq) goto loc_8227F370;
loc_8227F368:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8227f3c8
	goto loc_8227F3C8;
loc_8227F370:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82255b48
	ctx.lr = 0x8227F378;
	sub_82255B48(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x8227f3c8
	if (ctx.cr0.eq) goto loc_8227F3C8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822094d8
	ctx.lr = 0x8227F3A4;
	sub_822094D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8227f3b8
	if (!ctx.cr0.eq) goto loc_8227F3B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x8227F3B4;
	sub_82255B70(ctx, base);
	// b 0x8227f368
	goto loc_8227F368;
loc_8227F3B8:
	// add r11,r31,r3
	ctx.r11.u64 = r31.u64 + ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,-1(r11)
	REX_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
loc_8227F3C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82281070) {
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
	ctx.lr = 0x82281078;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,30497
	r30.s64 = ctx.r11.s64 + 30497;
	// lwz r11,3(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822810a4
	if (ctx.cr6.eq) goto loc_822810A4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_8228109C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_822810A4:
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r28,r11,30464
	r28.s64 = ctx.r11.s64 + 30464;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824d438c
	ctx.lr = 0x822810BC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x822810ec
	if (!ctx.cr6.eq) goto loc_822810EC;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lwz r11,7(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 7);
	// addi r31,r10,30524
	r31.s64 = ctx.r10.s64 + 30524;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x822810ec
	if (!ctx.cr6.eq) goto loc_822810EC;
loc_822810D8:
	// li r31,0
	r31.s64 = 0;
loc_822810DC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824d437c
	ctx.lr = 0x822810E4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8228109c
	goto loc_8228109C;
loc_822810EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f1,26832(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26832);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82281108;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82281118
	if (!ctx.cr0.lt) goto loc_82281118;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x822810dc
	goto loc_822810DC;
loc_82281118:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82281130;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x82281154
	if (!ctx.cr0.lt) goto loc_82281154;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228114C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r29
	r31.u64 = r29.u64;
	// b 0x822810dc
	goto loc_822810DC;
loc_82281154:
	// lwz r3,7(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 7);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82281170
	if (ctx.cr6.eq) goto loc_82281170;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82281170;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82281170:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,7(r30)
	REX_STORE_U32(r30.u32 + 7, r31.u32);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// stb r11,0(r30)
	REX_STORE_U8(r30.u32 + 0, ctx.r11.u8);
	// stb r10,-1(r30)
	REX_STORE_U8(r30.u32 + -1, ctx.r10.u8);
	// b 0x822810d8
	goto loc_822810D8;
}

DEFINE_REX_FUNC(sub_822864B8) {
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
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x822864f0
	if (ctx.cr6.eq) goto loc_822864F0;
	// lwz r11,156(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// stw r4,172(r3)
	REX_STORE_U32(ctx.r3.u32 + 172, ctx.r4.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822864f0
	if (!ctx.cr6.gt) goto loc_822864F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,164(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822864F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822864F0:
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

DEFINE_REX_FUNC(sub_82287370) {
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
	// bl 0x82286008
	ctx.lr = 0x82287388;
	sub_82286008(ctx, base);
	// lwz r3,332(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 332);
	// addi r5,r31,264
	ctx.r5.s64 = r31.s64 + 264;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822873A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822873BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822873D0;
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

DEFINE_REX_FUNC(sub_82288A38) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,31380(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82288a54
	if (!ctx.cr6.eq) goto loc_82288A54;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82288A54:
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lwz r10,31384(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 31384);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82288a70
	if (!ctx.cr6.eq) goto loc_82288A70;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,48
	ctx.r3.u64 = ctx.r3.u64 | 48;
	// blr 
	return;
loc_82288A70:
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82288FA8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82288fbc
	if (!ctx.cr6.eq) goto loc_82288FBC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82288FBC:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82289698) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822896A0;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,4
	ctx.r8.s64 = 4;
	// vupkd3d128 v60,v63,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v60 = vTemp;
	// addi r9,r9,7948
	ctx.r9.s64 = ctx.r9.s64 + 7948;
	// lvsr v0,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// vpermwi128 v63,v60,234
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x15));
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// vpermwi128 v62,v60,186
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x45));
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// vpermwi128 v61,v60,174
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x51));
	// stw r10,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// stw r10,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// vperm128 v62,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stw r7,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// li r10,20
	ctx.r10.s64 = 20;
	// vpermwi128 v60,v60,171
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x54));
	// vperm128 v61,v61,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r9,24
	ctx.r9.s64 = 24;
	// li r7,28
	ctx.r7.s64 = 28;
	// li r31,32
	r31.s64 = 32;
	// li r30,36
	r30.s64 = 36;
	// vperm128 v60,v60,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvewx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r29,40
	r29.s64 = 40;
	// stvewx128 v63,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r8,44
	ctx.r8.s64 = 44;
	// stvewx128 v63,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r6,48
	ctx.r6.s64 = 48;
	// stvewx128 v63,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r5,52
	ctx.r5.s64 = 52;
	// stvewx128 v62,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// li r4,56
	ctx.r4.s64 = 56;
	// stvewx128 v62,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// li r10,60
	ctx.r10.s64 = 60;
	// stvewx128 v62,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r11,r30
	ea = (ctx.r11.u32 + r30.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r11,r29
	ea = (ctx.r11.u32 + r29.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822908E0) {
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
	// bl 0x8228fba0
	ctx.lr = 0x82290900;
	sub_8228FBA0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82290910
	if (ctx.cr0.eq) goto loc_82290910;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x82290910;
	sub_82255B70(ctx, base);
loc_82290910:
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

DEFINE_REX_FUNC(sub_82291750) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8228e7f0
	ctx.lr = 0x8229176C;
	sub_8228E7F0(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,48
	ctx.r11.s64 = 48;
	// li r8,64
	ctx.r8.s64 = 64;
	// lvx128 v62,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stvlx128 v63,r0,r31
	ea = r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r31,r9
	ea = r31.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// stvlx128 v62,r31,r9
	ea = r31.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvrx128 v62,r31,r10
	ea = r31.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// stvlx128 v61,r31,r10
	ea = r31.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvrx128 v61,r31,r11
	ea = r31.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v61.u8[i]);
	// stvlx128 v60,r31,r11
	ea = r31.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvrx128 v60,r31,r8
	ea = r31.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v60.u8[i]);
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

DEFINE_REX_FUNC(sub_822933B0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x822270c0
	ctx.lr = 0x822933CC;
	sub_822270C0(ctx, base);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
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

DEFINE_REX_FUNC(sub_82294AF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82294b04
	if (!ctx.cr6.eq) goto loc_82294B04;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// blr 
	return;
loc_82294B04:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lha r10,660(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 660));
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lha r11,666(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 666));
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822958A0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// stw r3,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82295F20) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r10,312(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// lhz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82295f70
	if (!ctx.cr0.eq) goto loc_82295F70;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82295f68
	if (ctx.cr6.lt) goto loc_82295F68;
	// cmpwi cr6,r4,255
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 255, ctx.xer);
	// bgt cr6,0x82295f68
	if (ctx.cr6.gt) goto loc_82295F68;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lbz r11,6(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82295f5c
	if (ctx.cr0.lt) goto loc_82295F5C;
	// lha r10,358(r3)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 358));
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82295f60
	if (ctx.cr6.lt) goto loc_82295F60;
loc_82295F5C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82295F60:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82295F68:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82295F70:
	// addi r11,r10,14
	ctx.r11.s64 = ctx.r10.s64 + 14;
	// lbz r9,14(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 14);
	// lbz r8,15(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 15);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// b 0x82295f8c
	goto loc_82295F8C;
loc_82295F84:
	// lbzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
loc_82295F8C:
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x82295f84
	if (ctx.cr6.gt) goto loc_82295F84;
	// lbz r9,7(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// subf r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	// lbz r10,6(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rotlwi r10,r10,7
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 7);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// or r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbz r6,1(r6)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + 1);
	// rotlwi r5,r5,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// beq cr6,0x8229605c
	if (ctx.cr6.eq) goto loc_8229605C;
	// cmpw cr6,r4,r6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8229605c
	if (ctx.cr6.lt) goto loc_8229605C;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbz r10,1(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r7,1(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or. r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 | ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// or r8,r5,r10
	ctx.r8.u64 = ctx.r5.u64 | ctx.r10.u64;
	// bne 0x82296030
	if (!ctx.cr0.eq) goto loc_82296030;
	// add r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 + ctx.r4.u64;
	// b 0x82296060
	goto loc_82296060;
loc_82296030:
	// subf r10,r6,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r6.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82296060
	if (ctx.cr0.eq) goto loc_82296060;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// b 0x82296060
	goto loc_82296060;
loc_8229605C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82296060:
	// srawi r10,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 16;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// subf r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8229E940) {
	REX_FUNC_PROLOGUE();
	// lbz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 120);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8229e954
	if (!ctx.cr0.eq) goto loc_8229E954;
loc_8229E94C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8229E954:
	// lwz r3,72(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229e94c
	if (ctx.cr6.eq) goto loc_8229E94C;
	// b 0x8229dc28
	sub_8229DC28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8229EEA0) {
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
	// std r4,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// std r5,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// lwz r3,31456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 31456);
	// lbz r11,12072(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 12072);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8229eed8
	if (ctx.cr0.eq) goto loc_8229EED8;
loc_8229EED0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8229ef18
	goto loc_8229EF18;
loc_8229EED8:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x8229ed98
	ctx.lr = 0x8229EEE0;
	sub_8229ED98(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// beq 0x8229eed0
	if (ctx.cr0.eq) goto loc_8229EED0;
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8229ef00
	if (!ctx.cr6.gt) goto loc_8229EF00;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
loc_8229EF00:
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stb r9,120(r31)
	REX_STORE_U8(r31.u32 + 120, ctx.r9.u8);
loc_8229EF18:
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

DEFINE_REX_FUNC(sub_822A0628) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822A0630;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r3.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// ble cr6,0x822a068c
	if (!ctx.cr6.gt) goto loc_822A068C;
	// addi r29,r3,-4
	r29.s64 = ctx.r3.s64 + -4;
loc_822A0650:
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// srawi r5,r31,2
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x3) != 0);
	ctx.r5.s64 = r31.s32 >> 2;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stwx r9,r29,r11
	REX_STORE_U32(r29.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x8229fb08
	ctx.lr = 0x822A067C;
	sub_8229FB08(ctx, base);
	// rlwinm r10,r31,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bgt cr6,0x822a0650
	if (ctx.cr6.gt) goto loc_822A0650;
loc_822A068C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822A25F8) {
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
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// beq cr6,0x822a2628
	if (ctx.cr6.eq) goto loc_822A2628;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bne cr6,0x822a262c
	if (!ctx.cr6.eq) goto loc_822A262C;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x822a262c
	goto loc_822A262C;
loc_822A2628:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822A262C:
	// lwz r10,220(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 220);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x822a2654
	if (ctx.cr6.eq) goto loc_822A2654;
	// lbz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 228);
	// stw r11,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r11.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822a2654
	if (ctx.cr0.eq) goto loc_822A2654;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82211a30
	ctx.lr = 0x822A2654;
	sub_82211A30(ctx, base);
loc_822A2654:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x8221bcc0
	ctx.lr = 0x822A265C;
	sub_8221BCC0(ctx, base);
	// lbz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 188);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// bl 0x8229d670
	ctx.lr = 0x822A2670;
	sub_8229D670(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8221bcc8
	ctx.lr = 0x822A2680;
	sub_8221BCC8(ctx, base);
	// lbz r10,188(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 188);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// stb r10,188(r31)
	REX_STORE_U8(r31.u32 + 188, ctx.r10.u8);
	// lwz r31,31464(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 31464);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8229f998
	ctx.lr = 0x822A269C;
	sub_8229F998(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a0858
	ctx.lr = 0x822A26A4;
	sub_822A0858(ctx, base);
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

DEFINE_REX_FUNC(sub_822A5980) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,28(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f13,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A7138) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r9,4(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// beq cr6,0x822a71c8
	if (ctx.cr6.eq) goto loc_822A71C8;
	// addi r10,r4,384
	ctx.r10.s64 = ctx.r4.s64 + 384;
loc_822A7174:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f10,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f11,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f11,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// lfs f9,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fadds f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fadds f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// bne cr6,0x822a7174
	if (!ctx.cr6.eq) goto loc_822A7174;
loc_822A71C8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f6bf0
	ctx.lr = 0x822A71D4;
	sub_821F6BF0(ctx, base);
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

DEFINE_REX_FUNC(sub_822A9F00) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lfs f0,2912(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 2912);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,2916(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 2916);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,2928(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 2928, temp.u32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f13,2932(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 2932, temp.u32);
	// stfs f12,2936(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 2936, temp.u32);
	// lwz r11,31464(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31464);
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2940(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 2940, temp.u32);
	// stb r9,1541(r11)
	REX_STORE_U8(ctx.r11.u32 + 1541, ctx.r9.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822AAD40) {
	REX_FUNC_PROLOGUE();
	// lbz r10,255(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 255);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822aad6c
	if (ctx.cr0.eq) goto loc_822AAD6C;
	// lwz r3,240(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 240);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r3,232(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 232);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822aad6c
	if (ctx.cr6.eq) goto loc_822AAD6C;
	// b 0x822b25c0
	sub_822B25C0(ctx, base);
	return;
loc_822AAD6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822AB520) {
	REX_FUNC_PROLOGUE();
	// lbz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 140);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,132(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ab548
	if (!ctx.cr6.eq) goto loc_822AB548;
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822AB548:
	// stb r4,140(r3)
	REX_STORE_U8(ctx.r3.u32 + 140, ctx.r4.u8);
	// b 0x822ab3d8
	sub_822AB3D8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822AC440) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister temp{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// bge cr6,0x822ac4c0
	if (!ctx.cr6.lt) goto loc_822AC4C0;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lwz r8,31516(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 31516);
loc_822AC460:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm r31,r10,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r7,r31,r7
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + ctx.r7.u32);
	// lfs f0,188(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f13,188(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x822ac498
	if (ctx.cr6.gt) goto loc_822AC498;
	// li r9,0
	ctx.r9.s64 = 0;
loc_822AC498:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822ac4c0
	if (ctx.cr0.eq) goto loc_822AC4C0;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// stwx r10,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// blt cr6,0x822ac460
	if (ctx.cr6.lt) goto loc_822AC460;
loc_822AC4C0:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822AE578) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822AE580;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,96(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r28,r3,96
	r28.s64 = ctx.r3.s64 + 96;
	// b 0x822ae5b4
	goto loc_822AE5B4;
loc_822AE594:
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822ae5b0
	if (ctx.cr6.eq) goto loc_822AE5B0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8229a710
	ctx.lr = 0x822AE5A8;
	sub_8229A710(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c80a8
	ctx.lr = 0x822AE5B0;
	sub_822C80A8(ctx, base);
loc_822AE5B0:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_822AE5B4:
	// lwz r11,100(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 100);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822ae594
	if (!ctx.cr6.eq) goto loc_822AE594;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r6,4(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x822ba200
	ctx.lr = 0x822AE5D4;
	sub_822BA200(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822B1268) {
	REX_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// stw r4,540(r3)
	REX_STORE_U32(ctx.r3.u32 + 540, ctx.r4.u32);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B1D70) {
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
	// bl 0x822b0f18
	ctx.lr = 0x822B1D80;
	sub_822B0F18(ctx, base);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822b1da0
	if (!ctx.cr6.eq) goto loc_822B1DA0;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b1dd8
	if (ctx.cr6.eq) goto loc_822B1DD8;
	// lwz r4,176(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822b1dd8
	if (ctx.cr6.eq) goto loc_822B1DD8;
loc_822B1DA0:
	// stw r4,528(r3)
	REX_STORE_U32(ctx.r3.u32 + 528, ctx.r4.u32);
	// lwz r11,536(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 536);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b1db8
	if (!ctx.cr6.eq) goto loc_822B1DB8;
	// stw r3,536(r4)
	REX_STORE_U32(ctx.r4.u32 + 536, ctx.r3.u32);
	// b 0x822b1dcc
	goto loc_822B1DCC;
loc_822B1DB8:
	// addi r10,r11,532
	ctx.r10.s64 = ctx.r11.s64 + 532;
	// lwz r11,532(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 532);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b1db8
	if (!ctx.cr6.eq) goto loc_822B1DB8;
	// stw r3,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
loc_822B1DCC:
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
loc_822B1DD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B4158) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,23260
	ctx.r11.s64 = ctx.r11.s64 + 23260;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822c5a48
	ctx.lr = 0x822B4184;
	sub_822C5A48(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b4194
	if (ctx.cr0.eq) goto loc_822B4194;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x822B4194;
	sub_822C80A8(ctx, base);
loc_822B4194:
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

DEFINE_REX_FUNC(sub_822B6CB8) {
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
	ctx.lr = 0x822B6CC0;
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
	// ble cr6,0x822b6d40
	if (!ctx.cr6.gt) goto loc_822B6D40;
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
	// bl 0x822b6808
	ctx.lr = 0x822B6D04;
	sub_822B6808(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// add r5,r29,r31
	ctx.r5.u64 = r29.u64 + r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// subf r3,r29,r31
	ctx.r3.u64 = r31.u64 - r29.u64;
	// bl 0x822b6808
	ctx.lr = 0x822B6D18;
	sub_822B6808(ctx, base);
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
	// bl 0x822b6808
	ctx.lr = 0x822B6D30;
	sub_822B6808(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x822b6d44
	goto loc_822B6D44;
loc_822B6D40:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_822B6D44:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822b6808
	ctx.lr = 0x822B6D4C;
	sub_822B6808(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_822B94F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,23504
	ctx.r11.s64 = ctx.r11.s64 + 23504;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r11,120
	ctx.r8.s64 = ctx.r11.s64 + 120;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r11,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,31492(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 31492);
	// li r9,1
	ctx.r9.s64 = 1;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r9,r9,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfsx f0,r8,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1924(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 1924, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1928(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 1928, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1932(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 1932, temp.u32);
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822BA498) {
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
	ctx.lr = 0x822BA4A0;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bl 0x822d6450
	ctx.lr = 0x822BA4C0;
	sub_822D6450(ctx, base);
	// lwz r3,68(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 68);
	// bl 0x822b41c0
	ctx.lr = 0x822BA4C8;
	sub_822B41C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822ac180
	ctx.lr = 0x822BA4D4;
	sub_822AC180(ctx, base);
	// stw r3,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822b3b80
	ctx.lr = 0x822BA4E0;
	sub_822B3B80(ctx, base);
	// addi r30,r30,72
	r30.s64 = r30.s64 + 72;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi. r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822ba558
	if (ctx.cr0.eq) goto loc_822BA558;
	// li r28,0
	r28.s64 = 0;
loc_822BA500:
	// lwzx r27,r28,r11
	r27.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// lfs f31,36(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 36);
	f31.f64 = double(temp.f32);
	// lwz r3,32(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 32);
	// bl 0x822b41c0
	ctx.lr = 0x822BA510;
	sub_822B41C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822ac180
	ctx.lr = 0x822BA51C;
	sub_822AC180(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822ba2d8
	ctx.lr = 0x822BA52C;
	sub_822BA2D8(ctx, base);
	// li r5,31
	ctx.r5.s64 = 31;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x822d6450
	ctx.lr = 0x822BA538;
	sub_822D6450(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822ba500
	if (ctx.cr6.lt) goto loc_822BA500;
loc_822BA558:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822C0BB8) {
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
	// bl 0x822d4f38
	ctx.lr = 0x822C0BCC;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c0bf8
	if (!ctx.cr6.eq) goto loc_822C0BF8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x822c0ca4
	goto loc_822C0CA4;
loc_822C0BF8:
	// lfs f30,436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 436);
	f30.f64 = double(temp.f32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f11,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r11,384
	ctx.r10.s64 = ctx.r11.s64 + 384;
	// fsubs f0,f11,f30
	ctx.f0.f64 = double(float(ctx.f11.f64 - f30.f64));
	// lfs f29,440(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 440);
	f29.f64 = double(temp.f32);
	// lfs f10,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f13,f10,f29
	ctx.f13.f64 = double(float(ctx.f10.f64 - f29.f64));
	// lfs f28,432(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 432);
	f28.f64 = double(temp.f32);
	// lfs f9,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f9,f28
	ctx.f12.f64 = double(float(ctx.f9.f64 - f28.f64));
	// lfs f31,128(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 128);
	f31.f64 = double(temp.f32);
	// lfs f8,24124(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 24124);
	ctx.f8.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bge cr6,0x822c0c6c
	if (!ctx.cr6.lt) goto loc_822C0C6C;
	// lfs f0,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f9,0(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f11,4(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f10,8(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// b 0x822c0ca8
	goto loc_822C0CA8;
loc_822C0C6C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f4c50
	ctx.lr = 0x822C0C78;
	sub_821F4C50(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * f31.f64));
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + f28.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fadds f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f13.f64 + f30.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fadds f0,f12,f29
	ctx.f0.f64 = double(float(ctx.f12.f64 + f29.f64));
loc_822C0CA4:
	// stfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
loc_822C0CA8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x822d4f84
	ctx.lr = 0x822C0CB8;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C6258) {
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
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f13,1160(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1160);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,1164(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1164);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,396(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822c62a4
	if (!ctx.cr6.eq) goto loc_822C62A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_822C62A4:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C62B8;
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

DEFINE_REX_FUNC(sub_822C6FA8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,24520
	ctx.r11.s64 = ctx.r11.s64 + 24520;
	// addi r10,r10,16460
	ctx.r10.s64 = ctx.r10.s64 + 16460;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// clrlwi. r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// beq 0x822c6fe0
	if (ctx.cr0.eq) goto loc_822C6FE0;
	// bl 0x822c80a8
	ctx.lr = 0x822C6FE0;
	sub_822C80A8(ctx, base);
loc_822C6FE0:
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

DEFINE_REX_FUNC(sub_822C8958) {
	REX_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// b 0x824d437c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822C8BE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822C8BF0;
	// stwu r1,-1168(r1)
	ea = -1168 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x822c8c94
	if (ctx.cr6.eq) goto loc_822C8C94;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// bge cr6,0x822c8c94
	if (!ctx.cr6.lt) goto loc_822C8C94;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822c8c94
	if (ctx.cr6.eq) goto loc_822C8C94;
	// bl 0x822c8a00
	ctx.lr = 0x822C8C1C;
	sub_822C8A00(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,92
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 92, ctx.xer);
	// beq cr6,0x822c8c34
	if (ctx.cr6.eq) goto loc_822C8C34;
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// bne cr6,0x822c8c38
	if (!ctx.cr6.eq) goto loc_822C8C38;
loc_822C8C34:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_822C8C38:
	// lwz r6,60(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 60);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 64);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822c8ca0
	if (ctx.cr6.eq) goto loc_822C8CA0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822c8c6c
	if (ctx.cr6.lt) goto loc_822C8C6C;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bge cr6,0x822c8c6c
	if (!ctx.cr6.lt) goto loc_822C8C6C;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-3268
	ctx.r10.s64 = ctx.r10.s64 + -3268;
	// lwzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x822c8c70
	goto loc_822C8C70;
loc_822C8C6C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_822C8C70:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r4,r11,25820
	ctx.r4.s64 = ctx.r11.s64 + 25820;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d55f8
	ctx.lr = 0x822C8C84;
	sub_822D55F8(ctx, base);
loc_822C8C84:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822c8c94
	if (ctx.cr0.lt) goto loc_822C8C94;
	// cmpwi cr6,r3,1024
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1024, ctx.xer);
	// blt cr6,0x822c8ce0
	if (ctx.cr6.lt) goto loc_822C8CE0;
loc_822C8C94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822C8C98:
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x822d4edc
	return;
loc_822C8CA0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822c8cc4
	if (ctx.cr6.lt) goto loc_822C8CC4;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bge cr6,0x822c8cc4
	if (!ctx.cr6.lt) goto loc_822C8CC4;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-3268
	ctx.r10.s64 = ctx.r10.s64 + -3268;
	// lwzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x822c8cc8
	goto loc_822C8CC8;
loc_822C8CC4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_822C8CC8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r4,r11,25812
	ctx.r4.s64 = ctx.r11.s64 + 25812;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d55f8
	ctx.lr = 0x822C8CDC;
	sub_822D55F8(ctx, base);
	// b 0x822c8c84
	goto loc_822C8C84;
loc_822C8CE0:
	// lbz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 112);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// b 0x822c8d04
	goto loc_822C8D04;
loc_822C8CEC:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// bne cr6,0x822c8d00
	if (!ctx.cr6.eq) goto loc_822C8D00;
	// li r10,92
	ctx.r10.s64 = 92;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_822C8D00:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
loc_822C8D04:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x822c8cec
	if (!ctx.cr0.eq) goto loc_822C8CEC;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r29,-2
	ctx.r11.s64 = r29.s64 + -2;
	// addi r10,r10,25796
	ctx.r10.s64 = ctx.r10.s64 + 25796;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lis r8,24576
	ctx.r8.s64 = 1610612736;
	// lwzx r4,r5,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822099f8
	ctx.lr = 0x822C8D44;
	sub_822099F8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822c8c94
	if (ctx.cr6.eq) goto loc_822C8C94;
	// stw r3,56(r30)
	REX_STORE_U32(r30.u32 + 56, ctx.r3.u32);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// stw r29,44(r30)
	REX_STORE_U32(r30.u32 + 44, r29.u32);
	// bne cr6,0x822c8d94
	if (!ctx.cr6.eq) goto loc_822C8D94;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c8a70
	ctx.lr = 0x822C8D6C;
	sub_822C8A70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c8d80
	if (!ctx.cr0.eq) goto loc_822C8D80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c8a00
	ctx.lr = 0x822C8D7C;
	sub_822C8A00(ctx, base);
	// b 0x822c8c94
	goto loc_822C8C94;
loc_822C8D80:
	// ld r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r11,2047
	ctx.r11.s64 = ctx.r11.s64 + 2047;
	// rlwinm r11,r11,0,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF800;
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
loc_822C8D94:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822c8c98
	goto loc_822C8C98;
}

DEFINE_REX_FUNC(sub_822CE478) {
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
	// bl 0x822ce328
	ctx.lr = 0x822CE490;
	sub_822CE328(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ce4a0
	if (ctx.cr0.eq) goto loc_822CE4A0;
loc_822CE498:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822ce4bc
	goto loc_822CE4BC;
loc_822CE4A0:
	// bl 0x823caeb0
	ctx.lr = 0x822CE4A4;
	sub_823CAEB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822ce498
	if (!ctx.cr0.eq) goto loc_822CE498;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ce2d8
	ctx.lr = 0x822CE4B8;
	sub_822CE2D8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_822CE4BC:
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

DEFINE_REX_FUNC(sub_822D0080) {
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
	// bl 0x822d4e68
	ctx.lr = 0x822D0088;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lhz r5,220(r3)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r3.u32 + 220);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f12,26320(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26320);
	ctx.f12.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f11,26316(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26316);
	ctx.f11.f64 = double(temp.f32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lfs f0,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f10,17064(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 17064);
	ctx.f10.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f13,1996(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r30,-32256
	r30.s64 = -2113929216;
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r29,-32255
	r29.s64 = -2113863680;
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r11,26300(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 26300);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f9,2012(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2012);
	ctx.f9.f64 = double(temp.f32);
	// addi r7,r31,140
	ctx.r7.s64 = r31.s64 + 140;
	// lfs f8,26312(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 26312);
	ctx.f8.f64 = double(temp.f32);
	// addi r6,r31,148
	ctx.r6.s64 = r31.s64 + 148;
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// std r11,132(r31)
	REX_STORE_U64(r31.u32 + 132, ctx.r11.u64);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// std r11,140(r31)
	REX_STORE_U64(r31.u32 + 140, ctx.r11.u64);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// std r11,148(r31)
	REX_STORE_U64(r31.u32 + 148, ctx.r11.u64);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r8,r31,68
	ctx.r8.s64 = r31.s64 + 68;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f12,16228(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16228);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,2008(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 2008);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f10,16472(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 16472);
	ctx.f10.f64 = double(temp.f32);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f12,196(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 200, temp.u32);
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stfs f11,204(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 204, temp.u32);
	// lwz r30,96(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f10,208(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 208, temp.u32);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 212, temp.u32);
	// stfs f13,164(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 164, temp.u32);
	// stw r5,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r5.u32);
	// lwz r29,100(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f13,172(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 172, temp.u32);
	// lwz r28,108(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stfs f13,176(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 176, temp.u32);
	// lwz r27,112(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 180, temp.u32);
	// lwz r26,116(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stfs f13,184(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 184, temp.u32);
	// lwz r25,120(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r24,124(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r23,128(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r22,132(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r21,136(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r20,140(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// stw r3,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r3.u32);
	// stw r4,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r29,88(r31)
	REX_STORE_U32(r31.u32 + 88, r29.u32);
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// stw r28,96(r31)
	REX_STORE_U32(r31.u32 + 96, r28.u32);
	// stw r27,100(r31)
	REX_STORE_U32(r31.u32 + 100, r27.u32);
	// stw r26,104(r31)
	REX_STORE_U32(r31.u32 + 104, r26.u32);
	// stw r25,108(r31)
	REX_STORE_U32(r31.u32 + 108, r25.u32);
	// stw r24,112(r31)
	REX_STORE_U32(r31.u32 + 112, r24.u32);
	// stw r23,116(r31)
	REX_STORE_U32(r31.u32 + 116, r23.u32);
	// stw r22,120(r31)
	REX_STORE_U32(r31.u32 + 120, r22.u32);
	// stw r21,124(r31)
	REX_STORE_U32(r31.u32 + 124, r21.u32);
	// stw r20,128(r31)
	REX_STORE_U32(r31.u32 + 128, r20.u32);
	// beq 0x822d0224
	if (ctx.cr0.eq) goto loc_822D0224;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822D0204:
	// lwz r5,156(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 156);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 + 52;
	// stw r8,48(r5)
	REX_STORE_U32(ctx.r5.u32 + 48, ctx.r8.u32);
	// lhz r5,220(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 220);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x822d0204
	if (ctx.cr6.lt) goto loc_822D0204;
loc_822D0224:
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// li r30,1
	r30.s64 = 1;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822d0364
	if (!ctx.cr6.gt) goto loc_822D0364;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822D023C:
	// lwz r8,160(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 160);
	// stfs f13,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r5,140(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r5,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r5.u32);
	// lwz r8,160(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 160);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r5,140(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r5,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r5.u32);
	// lwz r8,160(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 160);
	// lwz r5,136(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r5,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r5.u32);
	// lwz r8,160(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 160);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r30,60(r8)
	REX_STORE_U32(ctx.r8.u32 + 60, r30.u32);
	// lfs f12,212(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 212);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,160(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 160);
	// stfs f12,140(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r5,140(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// stw r5,64(r8)
	REX_STORE_U32(ctx.r8.u32 + 64, ctx.r5.u32);
	// lfs f12,196(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,160(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 160);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stfs f12,140(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r5,140(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// stw r5,92(r8)
	REX_STORE_U32(ctx.r8.u32 + 92, ctx.r5.u32);
	// lwz r8,160(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 160);
	// stwx r10,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// lfs f12,204(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 204);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,160(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 160);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stfs f12,140(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r5,140(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// stw r5,52(r8)
	REX_STORE_U32(ctx.r8.u32 + 52, ctx.r5.u32);
	// lfs f12,208(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 208);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,160(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 160);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stfs f12,140(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r5,140(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// stw r5,56(r8)
	REX_STORE_U32(ctx.r8.u32 + 56, ctx.r5.u32);
	// lwz r8,160(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 160);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r10,72(r8)
	REX_STORE_U32(ctx.r8.u32 + 72, ctx.r10.u32);
	// lwz r8,160(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 160);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r7,76(r8)
	REX_STORE_U32(ctx.r8.u32 + 76, ctx.r7.u32);
	// lwz r8,160(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 160);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r10,80(r8)
	REX_STORE_U32(ctx.r8.u32 + 80, ctx.r10.u32);
	// lwz r8,160(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 160);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r10,84(r8)
	REX_STORE_U32(ctx.r8.u32 + 84, ctx.r10.u32);
	// lwz r8,160(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 160);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r6,88(r8)
	REX_STORE_U32(ctx.r8.u32 + 88, ctx.r6.u32);
	// lfs f12,200(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,160(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 160);
	// stfs f12,140(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r5,140(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// stw r5,96(r8)
	REX_STORE_U32(ctx.r8.u32 + 96, ctx.r5.u32);
	// lwz r5,188(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 188);
	// lwz r8,160(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 160);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r5,68(r8)
	REX_STORE_U32(ctx.r8.u32 + 68, ctx.r5.u32);
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwz r8,224(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 224);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x822d023c
	if (ctx.cr6.lt) goto loc_822D023C;
loc_822D0364:
	// bl 0x822cd7a8
	ctx.lr = 0x822D0368;
	sub_822CD7A8(ctx, base);
	// lhz r11,1030(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 1030);
	// lwz r10,192(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 192);
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(__savevmx_103) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_822E62B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822E62B8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822e62dc
	if (!ctx.cr6.eq) goto loc_822E62DC;
	// bl 0x822db6c0
	ctx.lr = 0x822E62CC;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822E62D8;
	sub_822D6910(ctx, base);
	// b 0x822e6458
	goto loc_822E6458;
loc_822E62DC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// andi. r10,r11,131
	ctx.r10.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822e6458
	if (ctx.cr0.eq) goto loc_822E6458;
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822e6458
	if (!ctx.cr0.eq) goto loc_822E6458;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822e6304
	if (ctx.cr0.eq) goto loc_822E6304;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// b 0x822e6454
	goto loc_822E6454;
loc_822E6304:
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// andi. r10,r11,268
	ctx.r10.u64 = ctx.r11.u64 & 268;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822e6324
	if (!ctx.cr0.eq) goto loc_822E6324;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e1520
	ctx.lr = 0x822E6320;
	sub_822E1520(ctx, base);
	// b 0x822e632c
	goto loc_822E632C;
loc_822E6324:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_822E632C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,8(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r29,24(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x822e15a8
	ctx.lr = 0x822E633C;
	sub_822E15A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x822e7418
	ctx.lr = 0x822E6348;
	sub_822E7418(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// beq 0x822e6434
	if (ctx.cr0.eq) goto loc_822E6434;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x822e6434
	if (ctx.cr6.eq) goto loc_822E6434;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822e6434
	if (ctx.cr6.eq) goto loc_822E6434;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// andi. r11,r11,130
	ctx.r11.u64 = ctx.r11.u64 & 130;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e63ec
	if (!ctx.cr0.eq) goto loc_822E63EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e15a8
	ctx.lr = 0x822E637C;
	sub_822E15A8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822e63c8
	if (ctx.cr6.eq) goto loc_822E63C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e15a8
	ctx.lr = 0x822E638C;
	sub_822E15A8(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x822e63c8
	if (ctx.cr6.eq) goto loc_822E63C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e15a8
	ctx.lr = 0x822E639C;
	sub_822E15A8(ctx, base);
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r10,-11584
	r30.s64 = ctx.r10.s64 + -11584;
	// bl 0x822e15a8
	ctx.lr = 0x822E63B4;
	sub_822E15A8(ctx, base);
	// clrlwi r10,r3,27
	ctx.r10.u64 = ctx.r3.u32 & 0x1F;
	// lwzx r11,r29,r30
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + r30.u32);
	// mulli r10,r10,72
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(72));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822e63d0
	goto loc_822E63D0;
loc_822E63C8:
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
loc_822E63D0:
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// andi. r11,r11,130
	ctx.r11.u64 = ctx.r11.u64 & 130;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,130
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 130, ctx.xer);
	// bne cr6,0x822e63ec
	if (!ctx.cr6.eq) goto loc_822E63EC;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_822E63EC:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// bne cr6,0x822e6414
	if (!ctx.cr6.eq) goto loc_822E6414;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822e6414
	if (ctx.cr0.eq) goto loc_822E6414;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e6414
	if (!ctx.cr0.eq) goto loc_822E6414;
	// li r11,4096
	ctx.r11.s64 = 4096;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
loc_822E6414:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lhz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// b 0x822e6460
	goto loc_822E6460;
loc_822E6434:
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_822E6454:
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_822E6458:
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_822E6460:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822EDBD0) {
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
	ctx.lr = 0x822EDBD8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrldi r11,r5,32
	ctx.r11.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// ld r10,64(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 64);
	// clrldi r9,r6,32
	ctx.r9.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// li r28,0
	r28.s64 = 0;
	// mulld r8,r9,r11
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * ctx.r11.u64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmpld cr6,r8,r10
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x822edc18
	if (!ctx.cr6.gt) goto loc_822EDC18;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// tdllei r11,0
	if (ctx.r11.s64 == 0ll || ctx.r11.u64 < 0ull) ppc_trap(ctx, base, 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divdu r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 ? ctx.r10.u64 / ctx.r11.u64 : 0;
	// rotlwi r27,r9,0
	r27.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_822EDC18:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r28,48(r31)
	REX_STORE_U32(r31.u32 + 48, r28.u32);
	// stw r5,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r5.u32);
	// bne cr6,0x822edc2c
	if (!ctx.cr6.eq) goto loc_822EDC2C;
	// li r7,1
	ctx.r7.s64 = 1;
loc_822EDC2C:
	// stw r7,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r7.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822edc40
	if (ctx.cr6.eq) goto loc_822EDC40;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x822edc6c
	goto loc_822EDC6C;
loc_822EDC40:
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// mullw r3,r5,r27
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(r27.s32);
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// bl 0x823cd118
	ctx.lr = 0x822EDC50;
	sub_823CD118(ctx, base);
	// stw r3,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822edc64
	if (!ctx.cr6.eq) goto loc_822EDC64;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
loc_822EDC64:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x822edd14
	if (ctx.cr6.lt) goto loc_822EDD14;
loc_822EDC6C:
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x822edcf4
	if (ctx.cr6.eq) goto loc_822EDCF4;
loc_822EDC78:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x822f8c20
	ctx.lr = 0x822EDC80;
	sub_822F8C20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822edd34
	if (ctx.cr6.eq) goto loc_822EDD34;
	// bl 0x822f8cc8
	ctx.lr = 0x822EDC8C;
	sub_822F8CC8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822edd34
	if (ctx.cr6.eq) goto loc_822EDD34;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,132
	ctx.r4.s64 = r31.s64 + 132;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EDCAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,104(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 104);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r9.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r7,36(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822EDCD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822edd14
	if (ctx.cr6.lt) goto loc_822EDD14;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(r28.u32, r27.u32, ctx.xer);
	// blt cr6,0x822edc78
	if (ctx.cr6.lt) goto loc_822EDC78;
loc_822EDCF4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,120(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EDD08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822edd28
	if (!ctx.cr6.lt) goto loc_822EDD28;
loc_822EDD14:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EDD28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822EDD28:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_822EDD34:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x822edd14
	goto loc_822EDD14;
}

DEFINE_REX_FUNC(sub_822F55E0) {
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
	ctx.lr = 0x822F55E8;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// lfs f0,280(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// stw r29,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// bne cr6,0x822f5638
	if (!ctx.cr6.eq) goto loc_822F5638;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
loc_822F5638:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F564C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,68(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 68);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822F566C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822F568C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822F56AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f56d4
	if (ctx.cr6.eq) goto loc_822F56D4;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F56D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_822F56D4:
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f56f8
	if (ctx.cr6.eq) goto loc_822F56F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F56F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_822F56F8:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f5724
	if (ctx.cr6.eq) goto loc_822F5724;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822F5718;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_822F5724:
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822f5754
	if (ctx.cr6.eq) goto loc_822F5754;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F5744;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_822F5754:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x822f58dc
	if (ctx.cr6.lt) goto loc_822F58DC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f30,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(f31.f64, f30.f64);
	// bgt cr6,0x822f5774
	if (ctx.cr6.gt) goto loc_822F5774;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_822F5774:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,144(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 144);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822F5788;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,108(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 108);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822F57A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f58cc
	if (ctx.cr6.lt) goto loc_822F58CC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// stfs f31,280(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 280, temp.u32);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bne cr6,0x822f57cc
	if (!ctx.cr6.eq) goto loc_822F57CC;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_822F57CC:
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bne cr6,0x822f58cc
	if (!ctx.cr6.eq) goto loc_822F58CC;
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, f30.f64);
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// bge cr6,0x822f5864
	if (!ctx.cr6.lt) goto loc_822F5864;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// ld r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 288);
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,124(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 124);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822F5808;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f58a4
	if (ctx.cr6.lt) goto loc_822F58A4;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F5830;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f58a4
	if (ctx.cr6.lt) goto loc_822F58A4;
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F5854;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x822f48a8
	ctx.lr = 0x822F5860;
	sub_822F48A8(ctx, base);
	// b 0x822f588c
	goto loc_822F588C;
loc_822F5864:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// ld r9,128(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 128);
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,124(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 124);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822F5888;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_822F588C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x822f58a4
	if (ctx.cr6.lt) goto loc_822F58A4;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// bl 0x822ecb88
	ctx.lr = 0x822F58A0;
	sub_822ECB88(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_822F58A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,200(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F58B8;
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
	ctx.lr = 0x822F58CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822F58CC:
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_822F58DC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f5904
	if (ctx.cr6.eq) goto loc_822F5904;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F58F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_822F5904:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f5924
	if (ctx.cr6.eq) goto loc_822F5924;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F591C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_822F5924:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f5944
	if (ctx.cr6.eq) goto loc_822F5944;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822F5940;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_822F5944:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822f5960
	if (ctx.cr6.eq) goto loc_822F5960;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F5960;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822F5960:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F5974;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f5994
	if (ctx.cr6.eq) goto loc_822F5994;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F5990;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
loc_822F5994:
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f59b4
	if (ctx.cr6.eq) goto loc_822F59B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F59B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
loc_822F59B4:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f59d4
	if (ctx.cr6.eq) goto loc_822F59D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F59D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
loc_822F59D4:
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f59f4
	if (ctx.cr6.eq) goto loc_822F59F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F59F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
loc_822F59F4:
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f5a14
	if (ctx.cr6.eq) goto loc_822F5A14;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F5A10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
loc_822F5A14:
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f5a30
	if (ctx.cr6.eq) goto loc_822F5A30;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F5A30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822F5A30:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

DEFINE_REX_FUNC(sub_8230CA48) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e58
	ctx.lr = 0x8230CA50;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r19,0
	r19.s64 = 0;
	// lwz r22,28(r3)
	r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r16,r4,-24
	r16.s64 = ctx.r4.s64 + -24;
	// stw r19,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r19.u32);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// stw r19,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r19.u32);
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r19.u32);
	// stw r19,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r19.u32);
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r16,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r16.u32);
	// sth r19,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r19.u16);
	// bctrl 
	ctx.lr = 0x8230CA98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230ce4c
	if (ctx.cr6.lt) goto loc_8230CE4C;
	// cmplwi cr6,r16,2
	ctx.cr6.compare<uint32_t>(r16.u32, 2, ctx.xer);
	// bge cr6,0x8230cac0
	if (!ctx.cr6.lt) goto loc_8230CAC0;
loc_8230CAAC:
	// lis r31,-32688
	r31.s64 = -2142240768;
	// ori r31,r31,12
	r31.u64 = r31.u64 | 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4ea8
	return;
loc_8230CAC0:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82307770
	ctx.lr = 0x8230CAD8;
	sub_82307770(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230ce4c
	if (ctx.cr6.lt) goto loc_8230CE4C;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r3,224(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 224);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,11
	ctx.r4.s64 = 11;
	// li r26,2
	r26.s64 = 2;
	// bl 0x822f9490
	ctx.lr = 0x8230CAFC;
	sub_822F9490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230ce4c
	if (ctx.cr6.lt) goto loc_8230CE4C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// mr r18,r10
	r18.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r19,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r19.u32);
	// stw r19,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r19.u32);
	// lwz r8,4(r22)
	ctx.r8.u64 = REX_LOAD_U32(r22.u32 + 4);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lhz r7,72(r8)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + 72);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r6,r11,33
	ctx.r6.s64 = ctx.r11.s64 + 33;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r5,r8
	REX_STORE_U32(ctx.r5.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
	// lhz r9,72(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 72);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// sth r3,72(r11)
	REX_STORE_U16(ctx.r11.u32 + 72, ctx.r3.u16);
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// sth r10,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r10.u16);
	// beq cr6,0x8230ce08
	if (ctx.cr6.eq) goto loc_8230CE08;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r30,r10,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 224);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x822f9490
	ctx.lr = 0x8230CB74;
	sub_822F9490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230ce4c
	if (ctx.cr6.lt) goto loc_8230CE4C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822d5870
	ctx.lr = 0x8230CB94;
	sub_822D5870(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// lwz r17,4(r10)
	r17.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// beq cr6,0x8230ce08
	if (ctx.cr6.eq) goto loc_8230CE08;
	// lis r10,-32688
	ctx.r10.s64 = -2142240768;
	// li r24,1
	r24.s64 = 1;
	// ori r21,r10,22
	r21.u64 = ctx.r10.u64 | 22;
loc_8230CBB4:
	// addi r29,r26,4
	r29.s64 = r26.s64 + 4;
	// cmplw cr6,r29,r16
	ctx.cr6.compare<uint32_t>(r29.u32, r16.u32, ctx.xer);
	// bgt cr6,0x8230caac
	if (ctx.cr6.gt) goto loc_8230CAAC;
	// rlwinm r10,r11,3,13,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7FFF8;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// add r30,r10,r17
	r30.u64 = ctx.r10.u64 + r17.u64;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// clrlwi r20,r11,16
	r20.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82307770
	ctx.lr = 0x8230CBE4;
	sub_82307770(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230ce4c
	if (ctx.cr6.lt) goto loc_8230CE4C;
	// addi r27,r30,2
	r27.s64 = r30.s64 + 2;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82307770
	ctx.lr = 0x8230CC0C;
	sub_82307770(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230ce4c
	if (ctx.cr6.lt) goto loc_8230CE4C;
	// lhz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 0);
	// mr r26,r29
	r26.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230cdf8
	if (ctx.cr6.eq) goto loc_8230CDF8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,224(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 224);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f9490
	ctx.lr = 0x8230CC48;
	sub_822F9490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230ce4c
	if (ctx.cr6.lt) goto loc_8230CE4C;
	// lhz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x8230CC70;
	sub_822D5870(ctx, base);
	// lhz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,148(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 148);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// lwz r25,0(r29)
	r25.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x822f9900
	ctx.lr = 0x8230CC88;
	sub_822F9900(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r21
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r21.u32, ctx.xer);
	// bne cr6,0x8230ccc0
	if (!ctx.cr6.eq) goto loc_8230CCC0;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,148(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 148);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x822f9818
	ctx.lr = 0x8230CCA8;
	sub_822F9818(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230ce4c
	if (ctx.cr6.lt) goto loc_8230CE4C;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
loc_8230CCC0:
	// lhz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + 0);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230cdf8
	if (ctx.cr6.eq) goto loc_8230CDF8;
	// addi r28,r26,18
	r28.s64 = r26.s64 + 18;
loc_8230CCD4:
	// cmplw cr6,r28,r16
	ctx.cr6.compare<uint32_t>(r28.u32, r16.u32, ctx.xer);
	// bgt cr6,0x8230caac
	if (ctx.cr6.gt) goto loc_8230CAAC;
	// clrlwi r29,r11,16
	r29.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r11,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFC;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// add r30,r11,r25
	r30.u64 = ctx.r11.u64 + r25.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82307770
	ctx.lr = 0x8230CD08;
	sub_82307770(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230ce4c
	if (ctx.cr6.lt) goto loc_8230CE4C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8230cd7c
	if (!ctx.cr6.eq) goto loc_8230CD7C;
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lhz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 0);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x822f9900
	ctx.lr = 0x8230CD3C;
	sub_822F9900(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230cd7c
	if (ctx.cr6.lt) goto loc_8230CD7C;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
	// lwz r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,24(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// stw r6,64(r7)
	REX_STORE_U32(ctx.r7.u32 + 64, ctx.r6.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// ld r3,16(r5)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r5.u32 + 16);
	// std r3,56(r4)
	REX_STORE_U64(ctx.r4.u32 + 56, ctx.r3.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r24,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, r24.u32);
loc_8230CD7C:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82307c58
	ctx.lr = 0x8230CD94;
	sub_82307C58(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230ce4c
	if (ctx.cr6.lt) goto loc_8230CE4C;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r29,1
	ctx.r9.s64 = r29.s64 + 1;
	// addi r26,r26,18
	r26.s64 = r26.s64 + 18;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r28,r28,18
	r28.s64 = r28.s64 + 18;
	// stw r24,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, r24.u32);
	// lhz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U16(r30.u32 + 0);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r8,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// addi r6,r10,21
	ctx.r6.s64 = ctx.r10.s64 + 21;
	// addze r5,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r5.s64 = temp.s64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r5,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r3,r4,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r4.u64;
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// slw r7,r24,r3
	ctx.r7.u64 = ctx.r3.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r3.u8 & 0x3F));
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stwx r6,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r6.u32);
	// lhz r5,0(r27)
	ctx.r5.u64 = REX_LOAD_U16(r27.u32 + 0);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8230ccd4
	if (ctx.cr6.lt) goto loc_8230CCD4;
loc_8230CDF8:
	// addi r11,r20,1
	ctx.r11.s64 = r20.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r18.u32, ctx.xer);
	// blt cr6,0x8230cbb4
	if (ctx.cr6.lt) goto loc_8230CBB4;
loc_8230CE08:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// subf r10,r11,r16
	ctx.r10.u64 = r16.u64 - ctx.r11.u64;
	// subf. r30,r26,r10
	r30.u64 = ctx.r10.u64 - r26.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8230ce4c
	if (ctx.cr0.eq) goto loc_8230CE4C;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230CE30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230ce4c
	if (ctx.cr6.lt) goto loc_8230CE4C;
	// ld r10,8(r22)
	ctx.r10.u64 = REX_LOAD_U64(r22.u32 + 8);
	// clrldi r11,r30,32
	ctx.r11.u64 = r30.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,8(r22)
	REX_STORE_U64(r22.u32 + 8, ctx.r11.u64);
loc_8230CE4C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4ea8
	return;
}

DEFINE_REX_FUNC(sub_8231D940) {
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
	ctx.lr = 0x8231D948;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,0(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r24,0
	r24.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,60(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 60);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x8231d978
	if (!ctx.cr6.lt) goto loc_8231D978;
loc_8231D968:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
loc_8231D978:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// li r23,1
	r23.s64 = 1;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x8231ead8
	if (ctx.cr6.eq) goto loc_8231EAD8;
	// li r22,2
	r22.s64 = 2;
	// li r21,3
	r21.s64 = 3;
	// li r16,22
	r16.s64 = 22;
	// li r17,33
	r17.s64 = 33;
	// li r14,35
	r14.s64 = 35;
	// li r19,50
	r19.s64 = 50;
	// li r18,49
	r18.s64 = 49;
	// li r15,47
	r15.s64 = 47;
	// li r20,10
	r20.s64 = 10;
loc_8231D9AC:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplwi cr6,r11,51
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 51, ctx.xer);
	// bgt cr6,0x8231eacc
	if (ctx.cr6.gt) goto loc_8231EACC;
	// lis r12,-32206
	ctx.r12.s64 = -2110652416;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-9776
	ctx.r12.s64 = ctx.r12.s64 + -9776;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8231DAA0;
	case 1:
		goto loc_8231E6E4;
	case 2:
		goto loc_8231DC68;
	case 3:
		goto loc_8231DD14;
	case 4:
		goto loc_8231EACC;
	case 5:
		goto loc_8231EACC;
	case 6:
		goto loc_8231EACC;
	case 7:
		goto loc_8231EACC;
	case 8:
		goto loc_8231EACC;
	case 9:
		goto loc_8231EACC;
	case 10:
		goto loc_8231EACC;
	case 11:
		goto loc_8231EACC;
	case 12:
		goto loc_8231EACC;
	case 13:
		goto loc_8231EACC;
	case 14:
		goto loc_8231EACC;
	case 15:
		goto loc_8231EACC;
	case 16:
		goto loc_8231EACC;
	case 17:
		goto loc_8231DCF0;
	case 18:
		goto loc_8231DCBC;
	case 19:
		goto loc_8231DD3C;
	case 20:
		goto loc_8231DD68;
	case 21:
		goto loc_8231DDB4;
	case 22:
		goto loc_8231DE00;
	case 23:
		goto loc_8231DE9C;
	case 24:
		goto loc_8231DEE8;
	case 25:
		goto loc_8231DF38;
	case 26:
		goto loc_8231DF70;
	case 27:
		goto loc_8231E00C;
	case 28:
		goto loc_8231E0D8;
	case 29:
		goto loc_8231E1E4;
	case 30:
		goto loc_8231EACC;
	case 31:
		goto loc_8231EACC;
	case 32:
		goto loc_8231E778;
	case 33:
		goto loc_8231E210;
	case 34:
		goto loc_8231E670;
	case 35:
		goto loc_8231E694;
	case 36:
		goto loc_8231EACC;
	case 37:
		goto loc_8231E858;
	case 38:
		goto loc_8231E824;
	case 39:
		goto loc_8231EACC;
	case 40:
		goto loc_8231EACC;
	case 41:
		goto loc_8231EACC;
	case 42:
		goto loc_8231EACC;
	case 43:
		goto loc_8231EACC;
	case 44:
		goto loc_8231E89C;
	case 45:
		goto loc_8231EACC;
	case 46:
		goto loc_8231E8EC;
	case 47:
		goto loc_8231E944;
	case 48:
		goto loc_8231EACC;
	case 49:
		goto loc_8231E80C;
	case 50:
		goto loc_8231EA64;
	case 51:
		goto loc_8231EA9C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8231DAA0:
	// lwz r10,256(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 256);
	// lhz r5,34(r25)
	ctx.r5.u64 = REX_LOAD_U16(r25.u32 + 34);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// lwz r3,320(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 320);
	// mullw r6,r10,r5
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8231db1c
	if (!ctx.cr6.gt) goto loc_8231DB1C;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// addi r11,r3,424
	ctx.r11.s64 = ctx.r3.s64 + 424;
loc_8231DAD0:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsh r29,r8
	r29.s64 = ctx.r8.s16;
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lhz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r28,r9
	r28.s64 = ctx.r9.s16;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// ble cr6,0x8231db04
	if (!ctx.cr6.gt) goto loc_8231DB04;
	// lhz r31,-310(r11)
	r31.u64 = REX_LOAD_U16(ctx.r11.u32 + -310);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// extsh r9,r31
	ctx.r9.s64 = r31.s16;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r31,r9,r10
	r31.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
loc_8231DB04:
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,1776
	ctx.r11.s64 = ctx.r11.s64 + 1776;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8231dad0
	if (ctx.cr6.lt) goto loc_8231DAD0;
loc_8231DB1C:
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// sth r24,580(r25)
	REX_STORE_U16(r25.u32 + 580, r24.u16);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8231dc10
	if (!ctx.cr6.gt) goto loc_8231DC10;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// addi r11,r3,114
	ctx.r11.s64 = ctx.r3.s64 + 114;
loc_8231DB38:
	// lwz r10,310(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 310);
	// lwz r5,12(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lhz r4,0(r5)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// subf r6,r3,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r3.u64;
	// cmpw cr6,r7,r3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8231dbf4
	if (!ctx.cr6.eq) goto loc_8231DBF4;
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r31
	ctx.r4.s64 = r31.s16;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r5,r10
	ctx.r3.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r10.u32);
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x8231dbf4
	if (!ctx.cr6.eq) goto loc_8231DBF4;
	// lhz r5,580(r25)
	ctx.r5.u64 = REX_LOAD_U16(r25.u32 + 580);
	// lwz r4,584(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 584);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r5,r4
	REX_STORE_U16(ctx.r5.u32 + ctx.r4.u32, ctx.r9.u16);
	// lhz r9,580(r25)
	ctx.r9.u64 = REX_LOAD_U16(r25.u32 + 580);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// sth r3,580(r25)
	REX_STORE_U16(r25.u32 + 580, ctx.r3.u16);
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r3,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// sth r9,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r9.u16);
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r3,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// sth r9,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r9.u16);
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r9,-2(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + -2);
	// sth r9,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r9.u16);
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// subf r6,r9,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r9.u64;
loc_8231DBF4:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// lhz r5,34(r25)
	ctx.r5.u64 = REX_LOAD_U16(r25.u32 + 34);
	// addi r11,r11,1776
	ctx.r11.s64 = ctx.r11.s64 + 1776;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8231db38
	if (ctx.cr6.lt) goto loc_8231DB38;
loc_8231DC10:
	// lhz r11,580(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 580);
	// lhz r10,34(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 34);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8231d968
	if (ctx.cr6.gt) goto loc_8231D968;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8231d968
	if (!ctx.cr6.gt) goto loc_8231D968;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8231d968
	if (ctx.cr6.lt) goto loc_8231D968;
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r10,216(r30)
	REX_STORE_U32(r30.u32 + 216, ctx.r10.u32);
	// bl 0x823156a8
	ctx.lr = 0x8231DC48;
	sub_823156A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231eae8
	if (ctx.cr6.lt) goto loc_8231EAE8;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82303b78
	ctx.lr = 0x8231DC58;
	sub_82303B78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231eae8
	if (ctx.cr6.lt) goto loc_8231EAE8;
	// stw r22,40(r30)
	REX_STORE_U32(r30.u32 + 40, r22.u32);
	// b 0x8231eacc
	goto loc_8231EACC;
loc_8231DC68:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231DC78;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231eae8
	if (ctx.cr6.lt) goto loc_8231EAE8;
	// lhz r11,580(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 580);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r9,34(r25)
	ctx.r9.u64 = REX_LOAD_U16(r25.u32 + 34);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// stw r10,192(r25)
	REX_STORE_U32(r25.u32 + 192, ctx.r10.u32);
	// bne cr6,0x8231d968
	if (!ctx.cr6.eq) goto loc_8231D968;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231dcb4
	if (!ctx.cr6.eq) goto loc_8231DCB4;
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
	// b 0x8231eacc
	goto loc_8231EACC;
loc_8231DCB4:
	// stw r23,40(r30)
	REX_STORE_U32(r30.u32 + 40, r23.u32);
	// b 0x8231eacc
	goto loc_8231EACC;
loc_8231DCBC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231DCCC;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231eae8
	if (ctx.cr6.lt) goto loc_8231EAE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,188(r25)
	REX_STORE_U32(r25.u32 + 188, ctx.r11.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8231d968
	if (ctx.cr6.eq) goto loc_8231D968;
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
loc_8231DCF0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231DD00;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231eae8
	if (ctx.cr6.lt) goto loc_8231EAE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,180(r25)
	REX_STORE_U32(r25.u32 + 180, ctx.r11.u32);
	// stw r21,40(r30)
	REX_STORE_U32(r30.u32 + 40, r21.u32);
loc_8231DD14:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231DD24;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231eae8
	if (ctx.cr6.lt) goto loc_8231EAE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,19
	ctx.r10.s64 = 19;
	// stw r11,184(r25)
	REX_STORE_U32(r25.u32 + 184, ctx.r11.u32);
	// stw r10,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r10.u32);
loc_8231DD3C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231DD4C;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231eae8
	if (ctx.cr6.lt) goto loc_8231EAE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r11,656(r25)
	REX_STORE_U32(r25.u32 + 656, ctx.r11.u32);
	// stw r10,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r10.u32);
	// b 0x8231eacc
	goto loc_8231EACC;
loc_8231DD68:
	// lwz r11,180(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 180);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231ddac
	if (!ctx.cr6.eq) goto loc_8231DDAC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231DD84;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231eae8
	if (ctx.cr6.lt) goto loc_8231EAE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8231d968
	if (ctx.cr6.gt) goto loc_8231D968;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8231d968
	if (ctx.cr6.lt) goto loc_8231D968;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// stw r10,648(r25)
	REX_STORE_U32(r25.u32 + 648, ctx.r10.u32);
loc_8231DDAC:
	// li r11,21
	ctx.r11.s64 = 21;
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
loc_8231DDB4:
	// lwz r11,180(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 180);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231ddf8
	if (!ctx.cr6.eq) goto loc_8231DDF8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231DDD0;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231eae8
	if (ctx.cr6.lt) goto loc_8231EAE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// bgt cr6,0x8231d968
	if (ctx.cr6.gt) goto loc_8231D968;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8231d968
	if (ctx.cr6.lt) goto loc_8231D968;
	// sth r11,582(r25)
	REX_STORE_U16(r25.u32 + 582, ctx.r11.u16);
loc_8231DDF8:
	// stw r24,652(r25)
	REX_STORE_U32(r25.u32 + 652, r24.u32);
	// stw r16,40(r30)
	REX_STORE_U32(r30.u32 + 40, r16.u32);
loc_8231DE00:
	// lwz r11,180(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 180);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231de94
	if (!ctx.cr6.eq) goto loc_8231DE94;
	// lwz r11,652(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 652);
	// lwz r10,648(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 648);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8231de94
	if (!ctx.cr6.lt) goto loc_8231DE94;
loc_8231DE1C:
	// lwz r11,192(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231de78
	if (!ctx.cr6.eq) goto loc_8231DE78;
	// lhz r11,582(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 582);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x82319780
	ctx.lr = 0x8231DE3C;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231eae8
	if (ctx.cr6.lt) goto loc_8231EAE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8231d968
	if (!ctx.cr0.gt) goto loc_8231D968;
	// lhz r10,582(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 582);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// slw r8,r23,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r9.u8 & 0x3F));
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x8231d968
	if (ctx.cr6.gt) goto loc_8231D968;
	// lwz r10,652(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 652);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// addi r10,r10,158
	ctx.r10.s64 = ctx.r10.s64 + 158;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r25
	REX_STORE_U32(ctx.r8.u32 + r25.u32, ctx.r9.u32);
loc_8231DE78:
	// lwz r11,652(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 652);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,652(r25)
	REX_STORE_U32(r25.u32 + 652, ctx.r11.u32);
	// lwz r9,648(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 648);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8231de1c
	if (ctx.cr6.lt) goto loc_8231DE1C;
loc_8231DE94:
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
loc_8231DE9C:
	// lwz r11,656(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 656);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231dee0
	if (!ctx.cr6.eq) goto loc_8231DEE0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231DEB8;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231eae8
	if (ctx.cr6.lt) goto loc_8231EAE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x8231d968
	if (ctx.cr6.gt) goto loc_8231D968;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x8231d968
	if (ctx.cr6.lt) goto loc_8231D968;
	// stw r11,664(r25)
	REX_STORE_U32(r25.u32 + 664, ctx.r11.u32);
loc_8231DEE0:
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
loc_8231DEE8:
	// lwz r11,656(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 656);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231df30
	if (!ctx.cr6.eq) goto loc_8231DF30;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231DF04;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231eae8
	if (ctx.cr6.lt) goto loc_8231EAE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bgt cr6,0x8231d968
	if (ctx.cr6.gt) goto loc_8231D968;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8231d968
	if (ctx.cr6.lt) goto loc_8231D968;
	// stw r11,672(r25)
	REX_STORE_U32(r25.u32 + 672, ctx.r11.u32);
	// addi r4,r25,664
	ctx.r4.s64 = r25.s64 + 664;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82326da8
	ctx.lr = 0x8231DF30;
	sub_82326DA8(ctx, base);
loc_8231DF30:
	// li r11,25
	ctx.r11.s64 = 25;
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
loc_8231DF38:
	// lwz r11,656(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 656);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231df64
	if (!ctx.cr6.eq) goto loc_8231DF64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231DF54;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231eae8
	if (ctx.cr6.lt) goto loc_8231EAE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,660(r25)
	REX_STORE_U32(r25.u32 + 660, ctx.r11.u32);
loc_8231DF64:
	// li r11,26
	ctx.r11.s64 = 26;
	// sth r24,146(r30)
	REX_STORE_U16(r30.u32 + 146, r24.u16);
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
loc_8231DF70:
	// lwz r11,656(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 656);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231e000
	if (!ctx.cr6.eq) goto loc_8231E000;
	// lwz r11,660(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 660);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231e000
	if (!ctx.cr6.eq) goto loc_8231E000;
	// lwz r10,672(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 672);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x8231dfb4
	if (!ctx.cr6.gt) goto loc_8231DFB4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8231DFA4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x8231dfa4
	if (ctx.cr6.gt) goto loc_8231DFA4;
loc_8231DFB4:
	// slw r10,r23,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r11.u8 & 0x3F));
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8231dfc8
	if (!ctx.cr6.lt) goto loc_8231DFC8;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_8231DFC8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231DFD4;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231eae8
	if (ctx.cr6.lt) goto loc_8231EAE8;
	// lwz r10,672(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 672);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8231d968
	if (ctx.cr6.gt) goto loc_8231D968;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r10,680(r25)
	REX_STORE_U32(r25.u32 + 680, ctx.r10.u32);
loc_8231E000:
	// li r11,27
	ctx.r11.s64 = 27;
	// sth r24,146(r30)
	REX_STORE_U16(r30.u32 + 146, r24.u16);
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
loc_8231E00C:
	// lwz r11,656(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 656);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231e0c8
	if (!ctx.cr6.eq) goto loc_8231E0C8;
	// lwz r11,660(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 660);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231e0c8
	if (!ctx.cr6.eq) goto loc_8231E0C8;
	// lhz r11,34(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 34);
	// lwz r10,664(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 664);
	// lhz r9,146(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 146);
	// mullw r8,r11,r11
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// lwz r7,680(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 680);
	// lwz r6,672(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 672);
	// mullw r5,r8,r10
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// subfic r31,r7,32
	ctx.xer.ca = ctx.r7.u32 <= 32;
	r31.u64 = static_cast<uint64_t>(32) - ctx.r7.u64;
	// subfic r29,r6,30
	ctx.xer.ca = ctx.r6.u32 <= 30;
	r29.u64 = static_cast<uint64_t>(30) - ctx.r6.u64;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8231e0c8
	if (!ctx.cr6.lt) goto loc_8231E0C8;
	// addi r28,r30,224
	r28.s64 = r30.s64 + 224;
loc_8231E058:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,680(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 680);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82319780
	ctx.lr = 0x8231E068;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231eae8
	if (ctx.cr6.lt) goto loc_8231EAE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r10,146(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 146);
	// slw r9,r11,r31
	ctx.r9.u64 = r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r31.u8 & 0x3F));
	// sraw r11,r9,r29
	temp.u32 = r29.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r11.s64 = ctx.r9.s32 >> temp.u32;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lwz r5,696(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 696);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r11,r7,r5
	REX_STORE_U16(ctx.r7.u32 + ctx.r5.u32, ctx.r11.u16);
	// lhz r4,146(r30)
	ctx.r4.u64 = REX_LOAD_U16(r30.u32 + 146);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// sth r11,146(r30)
	REX_STORE_U16(r30.u32 + 146, ctx.r11.u16);
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r10,664(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 664);
	// lhz r9,34(r25)
	ctx.r9.u64 = REX_LOAD_U16(r25.u32 + 34);
	// mullw r8,r9,r9
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// mullw r6,r8,r10
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8231e058
	if (ctx.cr6.lt) goto loc_8231E058;
loc_8231E0C8:
	// li r11,28
	ctx.r11.s64 = 28;
	// sth r24,150(r30)
	REX_STORE_U16(r30.u32 + 150, r24.u16);
	// sth r24,146(r30)
	REX_STORE_U16(r30.u32 + 146, r24.u16);
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
loc_8231E0D8:
	// lwz r11,656(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 656);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231e1dc
	if (!ctx.cr6.eq) goto loc_8231E1DC;
	// lwz r11,660(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 660);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231e1dc
	if (!ctx.cr6.eq) goto loc_8231E1DC;
	// lhz r11,150(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 150);
	// lwz r10,680(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 680);
	// lwz r9,672(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 672);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lhz r7,34(r25)
	ctx.r7.u64 = REX_LOAD_U16(r25.u32 + 34);
	// subfic r31,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	r31.u64 = static_cast<uint64_t>(32) - ctx.r10.u64;
	// subfic r29,r9,30
	ctx.xer.ca = ctx.r9.u32 <= 30;
	r29.u64 = static_cast<uint64_t>(30) - ctx.r9.u64;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8231e1dc
	if (!ctx.cr6.lt) goto loc_8231E1DC;
loc_8231E114:
	// lhz r11,150(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 150);
	// lhz r10,146(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 146);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8231e1b0
	if (!ctx.cr6.lt) goto loc_8231E1B0;
	// addi r28,r30,224
	r28.s64 = r30.s64 + 224;
loc_8231E130:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,680(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 680);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82319780
	ctx.lr = 0x8231E140;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231eae8
	if (ctx.cr6.lt) goto loc_8231EAE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r10,150(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 150);
	// slw r9,r11,r31
	ctx.r9.u64 = r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r31.u8 & 0x3F));
	// lhz r8,146(r30)
	ctx.r8.u64 = REX_LOAD_U16(r30.u32 + 146);
	// sraw r11,r9,r29
	temp.u32 = r29.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r11.s64 = ctx.r9.s32 >> temp.u32;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,704(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 704);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// lhz r4,34(r25)
	ctx.r4.u64 = REX_LOAD_U16(r25.u32 + 34);
	// mullw r11,r4,r7
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r6,r11,r5
	REX_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r6.u16);
	// lhz r10,146(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 146);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sth r8,146(r30)
	REX_STORE_U16(r30.u32 + 146, ctx.r8.u16);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// lhz r5,150(r30)
	ctx.r5.u64 = REX_LOAD_U16(r30.u32 + 150);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8231e130
	if (ctx.cr6.lt) goto loc_8231E130;
loc_8231E1B0:
	// sth r24,146(r30)
	REX_STORE_U16(r30.u32 + 146, r24.u16);
	// lhz r11,150(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 150);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,150(r30)
	REX_STORE_U16(r30.u32 + 150, ctx.r9.u16);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// lhz r8,34(r25)
	ctx.r8.u64 = REX_LOAD_U16(r25.u32 + 34);
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8231e114
	if (ctx.cr6.lt) goto loc_8231E114;
loc_8231E1DC:
	// li r11,29
	ctx.r11.s64 = 29;
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
loc_8231E1E4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231E1F4;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231eae8
	if (ctx.cr6.lt) goto loc_8231EAE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,716(r25)
	REX_STORE_U32(r25.u32 + 716, ctx.r11.u32);
	// sth r24,150(r30)
	REX_STORE_U16(r30.u32 + 150, r24.u16);
	// stw r17,40(r30)
	REX_STORE_U32(r30.u32 + 40, r17.u32);
	// stw r24,44(r30)
	REX_STORE_U32(r30.u32 + 44, r24.u32);
loc_8231E210:
	// lhz r11,580(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 580);
	// lhz r10,150(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 150);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8231e668
	if (!ctx.cr6.lt) goto loc_8231E668;
loc_8231E228:
	// lhz r11,150(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 150);
	// lwz r9,584(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 584);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r10,320(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 320);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// lhzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mulli r9,r5,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1776));
	// add r31,r9,r10
	r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bgt cr6,0x8231e63c
	if (ctx.cr6.gt) goto loc_8231E63C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8231e2a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8231E2A8;
	// bdzf 4*cr6+eq,0x8231e340
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8231E340;
	// bne cr6,0x8231e3d4
	if (!ctx.cr6.eq) goto loc_8231E3D4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231E27C;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231eae8
	if (ctx.cr6.lt) goto loc_8231EAE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8231d968
	if (ctx.cr6.gt) goto loc_8231D968;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8231d968
	if (ctx.cr6.lt) goto loc_8231D968;
	// sth r24,184(r31)
	REX_STORE_U16(r31.u32 + 184, r24.u16);
	// sth r11,182(r31)
	REX_STORE_U16(r31.u32 + 182, ctx.r11.u16);
	// stw r23,44(r30)
	REX_STORE_U32(r30.u32 + 44, r23.u32);
loc_8231E2A8:
	// lhz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 184);
	// lhz r10,182(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 182);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8231e338
	if (!ctx.cr6.lt) goto loc_8231E338;
	// addi r29,r30,224
	r29.s64 = r30.s64 + 224;
loc_8231E2C4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82319780
	ctx.lr = 0x8231E2D4;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231eae8
	if (ctx.cr6.lt) goto loc_8231EAE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bgt cr6,0x8231d968
	if (ctx.cr6.gt) goto loc_8231D968;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8231d968
	if (ctx.cr6.lt) goto loc_8231D968;
	// lhz r10,184(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 184);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mulli r10,r9,56
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(56));
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + r31.u64;
	// stw r11,200(r8)
	REX_STORE_U32(ctx.r8.u32 + 200, ctx.r11.u32);
	// lhz r7,184(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 184);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sth r5,184(r31)
	REX_STORE_U16(r31.u32 + 184, ctx.r5.u16);
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// lhz r3,182(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 182);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8231e2c4
	if (ctx.cr6.lt) goto loc_8231E2C4;
loc_8231E338:
	// sth r24,184(r31)
	REX_STORE_U16(r31.u32 + 184, r24.u16);
	// stw r22,44(r30)
	REX_STORE_U32(r30.u32 + 44, r22.u32);
loc_8231E340:
	// lhz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 184);
	// lhz r10,182(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 182);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8231e3c8
	if (!ctx.cr6.lt) goto loc_8231E3C8;
	// addi r29,r30,224
	r29.s64 = r30.s64 + 224;
loc_8231E35C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82319780
	ctx.lr = 0x8231E36C;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231eae8
	if (ctx.cr6.lt) goto loc_8231EAE8;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// bgt cr6,0x8231d968
	if (ctx.cr6.gt) goto loc_8231D968;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8231d968
	if (ctx.cr6.lt) goto loc_8231D968;
	// lhz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 184);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mulli r11,r9,56
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(56));
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + r31.u64;
	// stw r10,220(r8)
	REX_STORE_U32(ctx.r8.u32 + 220, ctx.r10.u32);
	// lhz r7,184(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 184);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sth r5,184(r31)
	REX_STORE_U16(r31.u32 + 184, ctx.r5.u16);
	// clrlwi r3,r5,16
	ctx.r3.u64 = ctx.r5.u32 & 0xFFFF;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lhz r4,182(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 182);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8231e35c
	if (ctx.cr6.lt) goto loc_8231E35C;
loc_8231E3C8:
	// sth r24,184(r31)
	REX_STORE_U16(r31.u32 + 184, r24.u16);
	// stw r21,44(r30)
	REX_STORE_U32(r30.u32 + 44, r21.u32);
	// stw r24,48(r30)
	REX_STORE_U32(r30.u32 + 48, r24.u32);
loc_8231E3D4:
	// lwz r11,716(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 716);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231e634
	if (!ctx.cr6.eq) goto loc_8231E634;
	// lhz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 184);
	// lhz r10,182(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 182);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8231e634
	if (!ctx.cr6.lt) goto loc_8231E634;
loc_8231E3F8:
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8231e414
	if (ctx.cr6.lt) goto loc_8231E414;
	// beq cr6,0x8231e4a4
	if (ctx.cr6.eq) goto loc_8231E4A4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8231e540
	if (ctx.cr6.lt) goto loc_8231E540;
	// b 0x8231e604
	goto loc_8231E604;
loc_8231E414:
	// lhz r10,184(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 184);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mulli r10,r9,56
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(56));
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + r31.u64;
	// lwz r9,200(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 200);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x8231e458
	if (!ctx.cr6.gt) goto loc_8231E458;
	// lhz r10,184(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 184);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mulli r10,r8,56
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(56));
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + r31.u64;
	// lwz r10,200(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 200);
loc_8231E448:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x8231e448
	if (ctx.cr6.gt) goto loc_8231E448;
loc_8231E458:
	// slw r10,r23,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r11.u8 & 0x3F));
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8231e46c
	if (!ctx.cr6.lt) goto loc_8231E46C;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_8231E46C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231E478;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231eae8
	if (ctx.cr6.lt) goto loc_8231EAE8;
	// lhz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 184);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// mulli r10,r9,56
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(56));
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + r31.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,212(r7)
	REX_STORE_U32(ctx.r7.u32 + 212, ctx.r6.u32);
	// stw r23,48(r30)
	REX_STORE_U32(r30.u32 + 48, r23.u32);
loc_8231E4A4:
	// lhz r10,184(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 184);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mulli r10,r9,56
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(56));
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + r31.u64;
	// lwz r10,220(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 220);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x8231e4f0
	if (!ctx.cr6.gt) goto loc_8231E4F0;
	// lhz r10,184(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 184);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mulli r10,r8,56
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(56));
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + r31.u64;
	// lwz r10,220(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 220);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8231E4E0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x8231e4e0
	if (ctx.cr6.gt) goto loc_8231E4E0;
loc_8231E4F0:
	// slw r10,r23,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r11.u8 & 0x3F));
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8231e504
	if (!ctx.cr6.lt) goto loc_8231E504;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_8231E504:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231E510;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231eae8
	if (ctx.cr6.lt) goto loc_8231EAE8;
	// lhz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 184);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// mulli r10,r9,56
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(56));
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + r31.u64;
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// stw r6,216(r7)
	REX_STORE_U32(ctx.r7.u32 + 216, ctx.r6.u32);
	// sth r24,146(r30)
	REX_STORE_U16(r30.u32 + 146, r24.u16);
	// stw r22,48(r30)
	REX_STORE_U32(r30.u32 + 48, r22.u32);
loc_8231E540:
	// lhz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 184);
	// lhz r10,146(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 146);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mulli r11,r9,56
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(56));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r27,216(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// lwz r7,220(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r6,212(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// subfic r29,r27,32
	ctx.xer.ca = r27.u32 <= 32;
	r29.u64 = static_cast<uint64_t>(32) - r27.u64;
	// subfic r28,r7,30
	ctx.xer.ca = ctx.r7.u32 <= 30;
	r28.u64 = static_cast<uint64_t>(30) - ctx.r7.u64;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8231e600
	if (!ctx.cr6.lt) goto loc_8231E600;
	// addi r26,r30,224
	r26.s64 = r30.s64 + 224;
loc_8231E578:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82319780
	ctx.lr = 0x8231E588;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231eae8
	if (ctx.cr6.lt) goto loc_8231EAE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r10,146(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 146);
	// slw r9,r11,r29
	ctx.r9.u64 = r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r29.u8 & 0x3F));
	// sraw r11,r9,r28
	temp.u32 = r28.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r11.s64 = ctx.r9.s32 >> temp.u32;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r5,184(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 184);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mulli r11,r4,56
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(56));
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,252(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// sthx r8,r11,r6
	REX_STORE_U16(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u16);
	// lhz r10,146(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 146);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sth r8,146(r30)
	REX_STORE_U16(r30.u32 + 146, ctx.r8.u16);
	// clrlwi r5,r8,16
	ctx.r5.u64 = ctx.r8.u32 & 0xFFFF;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// lhz r7,184(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 184);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r11,r6,56
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(56));
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,212(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 212);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8231e578
	if (ctx.cr6.lt) goto loc_8231E578;
loc_8231E600:
	// stw r24,48(r30)
	REX_STORE_U32(r30.u32 + 48, r24.u32);
loc_8231E604:
	// stw r24,48(r30)
	REX_STORE_U32(r30.u32 + 48, r24.u32);
	// lhz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 184);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,184(r31)
	REX_STORE_U16(r31.u32 + 184, ctx.r9.u16);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// lhz r7,182(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 182);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8231e3f8
	if (ctx.cr6.lt) goto loc_8231E3F8;
loc_8231E634:
	// sth r24,184(r31)
	REX_STORE_U16(r31.u32 + 184, r24.u16);
	// stw r24,44(r30)
	REX_STORE_U32(r30.u32 + 44, r24.u32);
loc_8231E63C:
	// lhz r11,150(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 150);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,150(r30)
	REX_STORE_U16(r30.u32 + 150, ctx.r9.u16);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// lhz r7,580(r25)
	ctx.r7.u64 = REX_LOAD_U16(r25.u32 + 580);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8231e228
	if (ctx.cr6.lt) goto loc_8231E228;
loc_8231E668:
	// li r11,34
	ctx.r11.s64 = 34;
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
loc_8231E670:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231E680;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231eae8
	if (ctx.cr6.lt) goto loc_8231EAE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// sth r11,728(r25)
	REX_STORE_U16(r25.u32 + 728, ctx.r11.u16);
	// stw r14,40(r30)
	REX_STORE_U32(r30.u32 + 40, r14.u32);
loc_8231E694:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231E6A4;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231eae8
	if (ctx.cr6.lt) goto loc_8231EAE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8231d968
	if (ctx.cr6.lt) goto loc_8231D968;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bgt cr6,0x8231d968
	if (ctx.cr6.gt) goto loc_8231D968;
	// lwz r10,192(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 192);
	// sth r11,208(r25)
	REX_STORE_U16(r25.u32 + 208, ctx.r11.u16);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8231e6e0
	if (!ctx.cr6.eq) goto loc_8231E6E0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,320(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 320);
	// bl 0x8232a5f0
	ctx.lr = 0x8231E6E0;
	sub_8232A5F0(ctx, base);
loc_8231E6E0:
	// stw r23,40(r30)
	REX_STORE_U32(r30.u32 + 40, r23.u32);
loc_8231E6E4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231E6F4;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231eae8
	if (ctx.cr6.lt) goto loc_8231EAE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r10,580(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 580);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stw r11,204(r25)
	REX_STORE_U32(r25.u32 + 204, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8231e758
	if (!ctx.cr6.gt) goto loc_8231E758;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// rlwinm r10,r24,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
loc_8231E71C:
	// lwz r9,584(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 584);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwz r8,320(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 320);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lhzx r5,r10,r9
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mulli r9,r4,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1776));
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r23,40(r9)
	REX_STORE_U32(ctx.r9.u32 + 40, r23.u32);
	// lhz r8,580(r25)
	ctx.r8.u64 = REX_LOAD_U16(r25.u32 + 580);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8231e71c
	if (ctx.cr6.lt) goto loc_8231E71C;
loc_8231E758:
	// lwz r11,204(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 204);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231e76c
	if (!ctx.cr6.eq) goto loc_8231E76C;
	// stw r19,40(r30)
	REX_STORE_U32(r30.u32 + 40, r19.u32);
	// b 0x8231eacc
	goto loc_8231EACC;
loc_8231E76C:
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
	// b 0x8231eacc
	goto loc_8231EACC;
loc_8231E778:
	// lhz r11,580(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 580);
	// addi r28,r30,224
	r28.s64 = r30.s64 + 224;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x8246e538
	ctx.lr = 0x8231E78C;
	sub_8246E538(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231eae8
	if (ctx.cr6.lt) goto loc_8231EAE8;
	// lhz r11,580(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8231e804
	if (!ctx.cr6.gt) goto loc_8231E804;
	// mr r31,r24
	r31.u64 = r24.u64;
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
loc_8231E7AC:
	// lwz r9,584(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 584);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,320(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 320);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lhzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r11,r7,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r29,r11,r10
	r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82319780
	ctx.lr = 0x8231E7D4;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231eae8
	if (ctx.cr6.lt) goto loc_8231EAE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r31,1
	ctx.r10.s64 = r31.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// stw r11,40(r29)
	REX_STORE_U32(r29.u32 + 40, ctx.r11.u32);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r8,580(r25)
	ctx.r8.u64 = REX_LOAD_U16(r25.u32 + 580);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8231e7ac
	if (ctx.cr6.lt) goto loc_8231E7AC;
loc_8231E804:
	// sth r24,760(r25)
	REX_STORE_U16(r25.u32 + 760, r24.u16);
	// stw r18,40(r30)
	REX_STORE_U32(r30.u32 + 40, r18.u32);
loc_8231E80C:
	// lwz r11,120(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231ea5c
	if (!ctx.cr6.eq) goto loc_8231EA5C;
	// li r11,38
	ctx.r11.s64 = 38;
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
	// b 0x8231eacc
	goto loc_8231EACC;
loc_8231E824:
	// lwz r11,120(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231e850
	if (!ctx.cr6.eq) goto loc_8231E850;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231E840;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231eae8
	if (ctx.cr6.lt) goto loc_8231EAE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,164(r25)
	REX_STORE_U32(r25.u32 + 164, ctx.r11.u32);
loc_8231E850:
	// li r11,37
	ctx.r11.s64 = 37;
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
loc_8231E858:
	// lwz r11,120(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231e894
	if (!ctx.cr6.eq) goto loc_8231E894;
	// lwz r11,164(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231e894
	if (!ctx.cr6.eq) goto loc_8231E894;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231E880;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231eae8
	if (ctx.cr6.lt) goto loc_8231EAE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,168(r25)
	REX_STORE_U16(r25.u32 + 168, ctx.r10.u16);
loc_8231E894:
	// li r11,44
	ctx.r11.s64 = 44;
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
loc_8231E89C:
	// lwz r11,120(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231e8e4
	if (!ctx.cr6.eq) goto loc_8231E8E4;
	// lwz r11,164(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231e8e4
	if (!ctx.cr6.eq) goto loc_8231E8E4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231E8C4;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231eae8
	if (ctx.cr6.lt) goto loc_8231EAE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bgt cr6,0x8231d968
	if (ctx.cr6.gt) goto loc_8231D968;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8231d968
	if (ctx.cr6.lt) goto loc_8231D968;
	// sth r11,170(r25)
	REX_STORE_U16(r25.u32 + 170, ctx.r11.u16);
loc_8231E8E4:
	// li r11,46
	ctx.r11.s64 = 46;
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
loc_8231E8EC:
	// lwz r11,120(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231e938
	if (!ctx.cr6.eq) goto loc_8231E938;
	// lwz r11,164(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231e938
	if (!ctx.cr6.eq) goto loc_8231E938;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231E914;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231eae8
	if (ctx.cr6.lt) goto loc_8231EAE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8231d968
	if (ctx.cr6.lt) goto loc_8231D968;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x8231d968
	if (ctx.cr6.gt) goto loc_8231D968;
	// sth r11,172(r25)
	REX_STORE_U16(r25.u32 + 172, ctx.r11.u16);
loc_8231E938:
	// sth r24,150(r30)
	REX_STORE_U16(r30.u32 + 150, r24.u16);
	// sth r24,148(r30)
	REX_STORE_U16(r30.u32 + 148, r24.u16);
	// stw r15,40(r30)
	REX_STORE_U32(r30.u32 + 40, r15.u32);
loc_8231E944:
	// lwz r11,120(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231ea5c
	if (!ctx.cr6.eq) goto loc_8231EA5C;
	// lwz r11,164(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231ea5c
	if (!ctx.cr6.eq) goto loc_8231EA5C;
	// lhz r11,580(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 580);
	// lhz r10,150(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 150);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8231ea5c
	if (!ctx.cr6.lt) goto loc_8231EA5C;
loc_8231E974:
	// lhz r11,150(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 150);
	// lwz r9,584(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 584);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lhz r7,168(r25)
	ctx.r7.u64 = REX_LOAD_U16(r25.u32 + 168);
	// lhz r5,148(r30)
	ctx.r5.u64 = REX_LOAD_U16(r30.u32 + 148);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,320(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 320);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// lhzx r9,r6,r9
	ctx.r9.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r9.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mulli r11,r8,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(1776));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r29,r11,1456
	r29.s64 = ctx.r11.s64 + 1456;
	// bge cr6,0x8231ea2c
	if (!ctx.cr6.lt) goto loc_8231EA2C;
	// addi r28,r30,224
	r28.s64 = r30.s64 + 224;
loc_8231E9B8:
	// lhz r11,172(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 172);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r10,170(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 170);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r31,r9
	r31.s64 = ctx.r9.s16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82319780
	ctx.lr = 0x8231E9D8;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231eae8
	if (ctx.cr6.lt) goto loc_8231EAE8;
	// lhz r10,148(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 148);
	// subfic r11,r31,32
	ctx.xer.ca = r31.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - r31.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// slw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// sraw r5,r7,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r5.s64 = ctx.r7.s32 >> temp.u32;
	// stwx r5,r6,r29
	REX_STORE_U32(ctx.r6.u32 + r29.u32, ctx.r5.u32);
	// lhz r4,148(r30)
	ctx.r4.u64 = REX_LOAD_U16(r30.u32 + 148);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,148(r30)
	REX_STORE_U16(r30.u32 + 148, ctx.r10.u16);
	// lhz r9,168(r25)
	ctx.r9.u64 = REX_LOAD_U16(r25.u32 + 168);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8231e9b8
	if (ctx.cr6.lt) goto loc_8231E9B8;
loc_8231EA2C:
	// sth r24,148(r30)
	REX_STORE_U16(r30.u32 + 148, r24.u16);
	// lhz r11,150(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 150);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,150(r30)
	REX_STORE_U16(r30.u32 + 150, ctx.r9.u16);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// lhz r8,580(r25)
	ctx.r8.u64 = REX_LOAD_U16(r25.u32 + 580);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8231e974
	if (ctx.cr6.lt) goto loc_8231E974;
loc_8231EA5C:
	// stw r19,40(r30)
	REX_STORE_U32(r30.u32 + 40, r19.u32);
	// b 0x8231eacc
	goto loc_8231EACC;
loc_8231EA64:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231EA74;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231eae8
	if (ctx.cr6.lt) goto loc_8231EAE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231ea90
	if (!ctx.cr6.eq) goto loc_8231EA90;
	// stb r24,200(r25)
	REX_STORE_U8(r25.u32 + 200, r24.u8);
	// b 0x8231eac8
	goto loc_8231EAC8;
loc_8231EA90:
	// li r11,51
	ctx.r11.s64 = 51;
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
	// b 0x8231eacc
	goto loc_8231EACC;
loc_8231EA9C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r30,224
	ctx.r3.s64 = r30.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231EAAC;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231eae8
	if (ctx.cr6.lt) goto loc_8231EAE8;
	// lhz r10,110(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 110);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8231d968
	if (!ctx.cr6.lt) goto loc_8231D968;
	// stb r11,200(r25)
	REX_STORE_U8(r25.u32 + 200, ctx.r11.u8);
loc_8231EAC8:
	// stw r20,40(r30)
	REX_STORE_U32(r30.u32 + 40, r20.u32);
loc_8231EACC:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x8231d9ac
	if (!ctx.cr6.eq) goto loc_8231D9AC;
loc_8231EAD8:
	// lwz r11,192(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231eae8
	if (!ctx.cr6.eq) goto loc_8231EAE8;
	// stw r23,20(r30)
	REX_STORE_U32(r30.u32 + 20, r23.u32);
loc_8231EAE8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_82375938) {
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
	// bl 0x822d4e74
	ctx.lr = 0x82375940;
	// vspltisb v8,-1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_set1_epi8(char(0xFF)));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// vspltish v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x1)));
	// vspltisb v7,15
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_set1_epi8(char(0xF)));
	// vspltish v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x4)));
	// vslb v11,v8,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi8(0x7));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_sllv_epi8(a, shift));
	}
	// vspltish v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x2)));
	// vspltish v9,3
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x3)));
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// vslb v29,v7,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi8(0x7));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi8(a, shift));
	}
	// vspltish v6,5
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x5)));
	// vavgsh v28,v8,v11
	simde_mm_store_si128((simde__m128i*)v28.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vspltish v8,6
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x6)));
	// vor v11,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vsubuhm v27,v28,v12
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// bne cr6,0x82375cf4
	if (!ctx.cr6.eq) goto loc_82375CF4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823759c8
	if (!ctx.cr6.eq) goto loc_823759C8;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8237599C:
	// lvrx128 v63,r9,r3
	temp.u32 = ctx.r9.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// lvlx128 v62,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor128 v61,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// stvlx128 v61,r5,r10
	ea = ctx.r5.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stvrx128 v61,r5,r8
	ea = ctx.r5.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v61.u8[i]);
	// bdnz 0x8237599c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8237599C;
	// b 0x822d4ec4
	return;
loc_823759C8:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x82375be0
	if (ctx.cr6.eq) goto loc_82375BE0;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x82375afc
	if (ctx.cr6.eq) goto loc_82375AFC;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x82376738
	if (!ctx.cr6.eq) goto loc_82376738;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823759f4
	if (ctx.cr6.eq) goto loc_823759F4;
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// vslh v5,v13,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// b 0x823759fc
	goto loc_823759FC;
loc_823759F4:
	// vspltish v13,-5
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0xFFFB)));
	// vsrh v5,v13,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srlv_epi16(a, shift));
	}
loc_823759FC:
	// subf r8,r4,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r4.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// add r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r3,r1,-432
	ctx.r3.s64 = ctx.r1.s64 + -432;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvlx128 v60,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r31,r1,-416
	r31.s64 = ctx.r1.s64 + -416;
	// lvrx128 v59,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r7,8
	ctx.r7.s64 = 8;
	// lvrx128 v58,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v13,v60,v59
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// lvlx128 v57,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r30,r1,-400
	r30.s64 = ctx.r1.s64 + -400;
	// lvrx128 v56,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v57,v58
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvlx128 v55,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// vor128 v7,v55,v56
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// vmrghb v4,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// add r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vmrghb v3,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r11,r1,-384
	ctx.r11.s64 = ctx.r1.s64 + -384;
	// li r7,-32
	ctx.r7.s64 = -32;
	// vmrghb v2,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r9,4
	ctx.r9.s64 = 4;
	// stvx128 v4,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,-48
	ctx.r3.s64 = -48;
	// stvx128 v3,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,-16
	r31.s64 = -16;
	// stvx128 v2,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82375A78:
	// lvx128 v13,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvrx128 v54,r8,r10
	temp.u32 = ctx.r8.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vslh v4,v13,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvlx128 v53,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vslh v3,v13,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor128 v2,v53,v54
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// lvx128 v9,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v7,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v31,v13,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vadduhm v30,v4,v13
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vmrghb v29,v0,v2
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v28,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v27,v1,v7
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vadduhm v26,v31,v5
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v25,v3,v30
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vor v22,v29,v29
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_load_si128((simde__m128i*)v29.u8));
	// vadduhm v24,v28,v27
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v23,v26,v25
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// stvx128 v29,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v21,v7,v22
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vadduhm v19,v23,v24
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vslh v20,v21,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v18,v19,v20
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vsrah v17,v18,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v52,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// stvewx128 v52,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v52,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x82375a78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82375A78;
	// b 0x822d4ec4
	return;
loc_82375AFC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// vspltish v12,8
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x8)));
	// bne cr6,0x82375b0c
	if (!ctx.cr6.eq) goto loc_82375B0C;
	// vspltish v12,7
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x7)));
loc_82375B0C:
	// subf r8,r4,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r4.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// add r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r3,r1,-416
	ctx.r3.s64 = ctx.r1.s64 + -416;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvlx128 v48,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r1,-432
	ctx.r7.s64 = ctx.r1.s64 + -432;
	// lvlx128 v51,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r31,r1,-400
	r31.s64 = ctx.r1.s64 + -400;
	// lvrx128 v49,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r11,r1,-384
	ctx.r11.s64 = ctx.r1.s64 + -384;
	// lvrx128 v50,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v10,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// lvlx128 v47,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v13,v51,v50
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// lvrx128 v46,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r8,8
	ctx.r8.s64 = 8;
	// vor128 v7,v47,v46
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// vmrghb v6,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v8,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// li r9,4
	ctx.r9.s64 = 4;
	// stvx128 v6,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,-48
	ctx.r3.s64 = -48;
	// stvx128 v8,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v5,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82375B7C:
	// lvrx128 v45,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r7,r11,-32
	ctx.r7.s64 = ctx.r11.s64 + -32;
	// lvlx128 v44,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// vor128 v13,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// lvx128 v10,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v7,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v6,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v13,v8,v6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vor v4,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vslh v5,v13,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v7,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vadduhm v3,v10,v4
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v1,v5,v13
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vsubuhm v2,v12,v3
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v31,v1,v2
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsrah v30,v31,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v43,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// stvewx128 v43,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x82375b7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82375B7C;
	// b 0x822d4ec4
	return;
loc_82375BE0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82375bf4
	if (ctx.cr6.eq) goto loc_82375BF4;
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// vslh v7,v13,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// b 0x82375bfc
	goto loc_82375BFC;
loc_82375BF4:
	// vspltish v13,-5
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0xFFFB)));
	// vsrh v7,v13,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_srlv_epi16(a, shift));
	}
loc_82375BFC:
	// subf r8,r4,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r4.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// add r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r31,r1,-400
	r31.s64 = ctx.r1.s64 + -400;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvlx128 v42,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r1,-432
	ctx.r7.s64 = ctx.r1.s64 + -432;
	// lvrx128 v41,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r3,r1,-416
	ctx.r3.s64 = ctx.r1.s64 + -416;
	// lvlx128 v39,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v13,v42,v41
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8)));
	// lvrx128 v40,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r8,8
	ctx.r8.s64 = 8;
	// lvlx128 v38,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v9,v39,v40
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8)));
	// lvrx128 v37,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r11,r1,-384
	ctx.r11.s64 = ctx.r1.s64 + -384;
	// vor128 v4,v38,v37
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// vmrghb v5,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v3,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vmrghb v2,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r9,4
	ctx.r9.s64 = 4;
	// stvx128 v5,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v3,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v2,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,-16
	r31.s64 = -16;
loc_82375C6C:
	// addi r7,r11,-48
	ctx.r7.s64 = ctx.r11.s64 + -48;
	// lvrx128 v36,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v35,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// vor128 v5,v35,v36
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v36.u8)));
	// lvx128 v9,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v4,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v13,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v2,v13,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v1,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v31,v13,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v30,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v29,v13,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v28,v2,v13
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vor v13,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vadduhm v27,v29,v7
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// stvx128 v1,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vadduhm v25,v31,v28
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v26,v4,v13
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v24,v30,v13
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v22,v27,v25
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v23,v3,v26
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vslh v21,v24,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v22,v23
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vsubuhm v19,v20,v21
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vsrah v18,v19,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v34,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// stvewx128 v34,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v34.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v34,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v34.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x82375c6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82375C6C;
	// b 0x822d4ec4
	return;
loc_82375CF4:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82375f00
	if (!ctx.cr6.eq) goto loc_82375F00;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x82375e4c
	if (ctx.cr6.eq) goto loc_82375E4C;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x82375dc8
	if (ctx.cr6.eq) goto loc_82375DC8;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x82376738
	if (!ctx.cr6.eq) goto loc_82376738;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82375d28
	if (ctx.cr6.eq) goto loc_82375D28;
	// vspltish v13,-5
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0xFFFB)));
	// vsrh v4,v13,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srlv_epi16(a, shift));
	}
	// b 0x82375d30
	goto loc_82375D30;
loc_82375D28:
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// vslh v4,v13,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
loc_82375D30:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r10,16
	ctx.r10.s64 = 16;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_82375D44:
	// lvrx128 v33,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v32,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor128 v13,v32,v33
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// vsldoi v7,v13,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 14));
	// vmrghb v9,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v5,v13,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vsldoi v3,v13,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 13));
	// vmrghb v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v7,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v2,v13,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v13,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v13,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v29,v2,v13
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vslh v28,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v27,v31,v9
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v26,v30,v4
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v25,v1,v29
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v24,v9,v5
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v23,v28,v27
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v22,v26,v25
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vslh v21,v24,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v22,v23
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vsubuhm v19,v20,v21
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vsrah v18,v19,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v63,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// stvewx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x82375d44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82375D44;
	// b 0x822d4ec4
	return;
loc_82375DC8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// vspltish v7,7
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_set1_epi16(short(0x7)));
	// bne cr6,0x82375dd8
	if (!ctx.cr6.eq) goto loc_82375DD8;
	// vspltish v7,8
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_set1_epi16(short(0x8)));
loc_82375DD8:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r10,16
	ctx.r10.s64 = 16;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_82375DEC:
	// lvrx128 v62,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v61,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor128 v13,v61,v62
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vsldoi v10,v13,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 14));
	// vsldoi v8,v13,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vsldoi v6,v13,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 13));
	// vmrghb v12,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v13,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v8,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v13,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v5,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v4,v13,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v3,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v2,v4,v13
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v1,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vsrah v31,v1,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v60,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// stvewx128 v60,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x82375dec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82375DEC;
	// b 0x822d4ec4
	return;
loc_82375E4C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82375e60
	if (ctx.cr6.eq) goto loc_82375E60;
	// vspltish v13,-5
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0xFFFB)));
	// vsrh v4,v13,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srlv_epi16(a, shift));
	}
	// b 0x82375e68
	goto loc_82375E68;
loc_82375E60:
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// vslh v4,v13,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
loc_82375E68:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r10,16
	ctx.r10.s64 = 16;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_82375E7C:
	// lvrx128 v59,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v58,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor128 v13,v58,v59
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// vsldoi v9,v13,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vsldoi v7,v13,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 14));
	// vsldoi v3,v13,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 13));
	// vmrghb v5,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v13,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v7,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v2,v13,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v13,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v13,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v29,v2,v13
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v28,v1,v7
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vslh v27,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v26,v30,v4
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v25,v31,v29
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v24,v5,v7
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vadduhm v23,v27,v28
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v22,v26,v25
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vslh v21,v24,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v22,v23
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vsubuhm v19,v20,v21
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vsrah v18,v19,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v57,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// stvewx128 v57,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v57,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x82375e7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82375E7C;
	// b 0x822d4ec4
	return;
loc_82375F00:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// beq cr6,0x82375f48
	if (ctx.cr6.eq) goto loc_82375F48;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82375f34
	if (ctx.cr6.eq) goto loc_82375F34;
	// clrlwi r10,r8,31
	ctx.r10.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82375f2c
	if (ctx.cr6.eq) goto loc_82375F2C;
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// vadduhm v13,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// b 0x82375f80
	goto loc_82375F80;
loc_82375F2C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82375f80
	if (!ctx.cr6.eq) goto loc_82375F80;
loc_82375F34:
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82375f80
	if (!ctx.cr6.eq) goto loc_82375F80;
	// vor v13,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// b 0x82375f80
	goto loc_82375F80;
loc_82375F48:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82375f6c
	if (ctx.cr6.eq) goto loc_82375F6C;
	// clrlwi r10,r8,31
	ctx.r10.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82375f64
	if (ctx.cr6.eq) goto loc_82375F64;
	// vspltish v13,15
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0xF)));
	// b 0x82375f80
	goto loc_82375F80;
loc_82375F64:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82375f7c
	if (!ctx.cr6.eq) goto loc_82375F7C;
loc_82375F6C:
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// vspltish v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x0)));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82375f80
	if (ctx.cr6.eq) goto loc_82375F80;
loc_82375F7C:
	// vor v13,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
loc_82375F80:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x823763ec
	if (ctx.cr6.eq) goto loc_823763EC;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x82376120
	if (ctx.cr6.eq) goto loc_82376120;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x82376570
	if (!ctx.cr6.eq) goto loc_82376570;
	// subf r11,r4,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r4.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r29,r1,-432
	r29.s64 = ctx.r1.s64 + -432;
	// addi r28,r1,-256
	r28.s64 = ctx.r1.s64 + -256;
	// addi r27,r1,-416
	r27.s64 = ctx.r1.s64 + -416;
	// addi r26,r1,-240
	r26.s64 = ctx.r1.s64 + -240;
	// lvrx128 v56,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r25,r1,-400
	r25.s64 = ctx.r1.s64 + -400;
	// lvlx128 v55,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor128 v8,v55,v56
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// addi r24,r1,-224
	r24.s64 = ctx.r1.s64 + -224;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// lvrx128 v54,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v7,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v53,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v5,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v8,v53,v54
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// lvrx128 v52,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v51,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r30,r1,-384
	r30.s64 = ctx.r1.s64 + -384;
	// add r10,r8,r4
	ctx.r10.u64 = ctx.r8.u64 + ctx.r4.u64;
	// vmrghb v4,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v3,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v8,v51,v52
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// stvx128 v7,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v5,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v2,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v1,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v4,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v3,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v2,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v1,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82376030:
	// addi r3,r1,-400
	ctx.r3.s64 = ctx.r1.s64 + -400;
	// lvrx128 v50,r31,r10
	temp.u32 = r31.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r29,r1,-224
	r29.s64 = ctx.r1.s64 + -224;
	// lvlx128 v49,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r28,r1,-416
	r28.s64 = ctx.r1.s64 + -416;
	// vor128 v5,v49,v50
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// addi r27,r1,-240
	r27.s64 = ctx.r1.s64 + -240;
	// addi r8,r1,-432
	ctx.r8.s64 = ctx.r1.s64 + -432;
	// lvx128 v8,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,-256
	ctx.r3.s64 = ctx.r1.s64 + -256;
	// lvx128 v7,r11,r29
	ea = (ctx.r11.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v2,v8,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v7,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lvx128 v4,r11,r28
	ea = (ctx.r11.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r11,r27
	ea = (ctx.r11.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v30,v8,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v26,v2,v8
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vmrghb v2,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v25,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v24,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v8,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v23,v3,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v1,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v22,v31,v7
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// addi r29,r1,-208
	r29.s64 = ctx.r1.s64 + -208;
	// vslh v20,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vslh v21,v7,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v2,r11,r30
	ea = (ctx.r11.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v17,v30,v26
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v19,v24,v8
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// stvx128 v5,r11,r29
	ea = (ctx.r11.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v7,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vadduhm v16,v25,v13
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v15,v23,v1
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vslh v14,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v4,v20,v13
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v3,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v2,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v31,v16,v17
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v30,v1,v5
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v26,v14,v15
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vadduhm v25,v4,v7
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vslh v24,v3,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v23,v31,v2
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vslh v22,v30,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v21,v25,v26
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vsubuhm v20,v23,v24
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vsubuhm v19,v21,v22
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vsrah v18,v20,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v19,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v18,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bdnz 0x82376030
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82376030;
	// b 0x82376570
	goto loc_82376570;
loc_82376120:
	// subf r11,r4,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r4.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r30,r1,-432
	r30.s64 = ctx.r1.s64 + -432;
	// addi r29,r1,-256
	r29.s64 = ctx.r1.s64 + -256;
	// addi r28,r1,-416
	r28.s64 = ctx.r1.s64 + -416;
	// addi r27,r1,-240
	r27.s64 = ctx.r1.s64 + -240;
	// lvrx128 v48,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r26,r1,-400
	r26.s64 = ctx.r1.s64 + -400;
	// lvlx128 v47,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor128 v8,v47,v48
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// addi r25,r1,-224
	r25.s64 = ctx.r1.s64 + -224;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// add r31,r8,r4
	r31.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvrx128 v46,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v7,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v45,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v5,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v8,v45,v46
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// lvlx128 v44,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v43,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// vmrghb v4,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v3,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v8,v44,v43
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8)));
	// stvx128 v7,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v5,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v2,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v1,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v4,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v3,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v2,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v1,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_823761B0:
	// lvrx128 v42,r10,r31
	temp.u32 = ctx.r10.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r8,r1,-384
	ctx.r8.s64 = ctx.r1.s64 + -384;
	// lvlx128 v41,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,-208
	ctx.r3.s64 = ctx.r1.s64 + -208;
	// vor128 v8,v41,v42
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8)));
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r30,r1,-416
	r30.s64 = ctx.r1.s64 + -416;
	// add r31,r31,r4
	r31.u64 = r31.u64 + ctx.r4.u64;
	// vmrghb v5,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r28,r11,r30
	r28.u64 = ctx.r11.u64 + r30.u64;
	// vmrglb v4,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r30,r1,-432
	r30.s64 = ctx.r1.s64 + -432;
	// addi r29,r1,-240
	r29.s64 = ctx.r1.s64 + -240;
	// add r24,r11,r30
	r24.u64 = ctx.r11.u64 + r30.u64;
	// lvrx128 v40,r10,r31
	temp.u32 = ctx.r10.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r26,r1,-400
	r26.s64 = ctx.r1.s64 + -400;
	// lvlx128 v39,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r27,r11,r29
	r27.u64 = ctx.r11.u64 + r29.u64;
	// vor128 v1,v39,v40
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8)));
	// addi r25,r1,-224
	r25.s64 = ctx.r1.s64 + -224;
	// stvx128 v5,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r26,r11,r26
	r26.u64 = ctx.r11.u64 + r26.u64;
	// stvx128 v4,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,-256
	r29.s64 = ctx.r1.s64 + -256;
	// lvx128 v8,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,-368
	r30.s64 = ctx.r1.s64 + -368;
	// vadduhm v26,v8,v5
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vmrghb v5,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r25,r11,r25
	r25.u64 = ctx.r11.u64 + r25.u64;
	// lvx128 v3,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// lvx128 v8,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v25,r11,r29
	ea = (ctx.r11.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v31,v3,v8
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v24,v3,v5
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// lvx128 v2,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v23,v25,v4
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vmrglb v4,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v7,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r23,r11,r29
	r23.u64 = ctx.r11.u64 + r29.u64;
	// stvx128 v5,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v30,v2,v7
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// addi r29,r1,-192
	r29.s64 = ctx.r1.s64 + -192;
	// vslh v22,v31,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v2,v4
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// add r31,r31,r4
	r31.u64 = r31.u64 + ctx.r4.u64;
	// vsubuhm v18,v13,v26
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// vslh v19,v30,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v22,v31
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vsubuhm v16,v13,v20
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vsubuhm v21,v13,v24
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// lvlx128 v38,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v4,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v15,v19,v30
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vsubuhm v4,v13,v23
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// lvx128 v14,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v1,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// lvx128 v3,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v5,v8,v14
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vadduhm v3,v7,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// lvx128 v31,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v30,v15,v4
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vsrah v24,v1,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v26,v5,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v3,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v23,v30,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor v2,v14,v14
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)v14.u8));
	// stvx128 v24,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v22,v26,v5
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v20,v25,v3
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// stvx128 v23,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v19,v22,v21
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vadduhm v18,v20,v16
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vsrah v17,v19,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v18,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v17,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,-176
	r28.s64 = ctx.r1.s64 + -176;
	// stvx128 v16,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,-352
	r27.s64 = ctx.r1.s64 + -352;
	// lvrx128 v37,r10,r31
	temp.u32 = ctx.r10.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// vor128 v5,v38,v37
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// lvx128 v15,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v4,v2,v15
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// lvx128 v14,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r31,r31,r4
	r31.u64 = r31.u64 + ctx.r4.u64;
	// vadduhm v3,v31,v14
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// lvx128 v22,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v2,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v2,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v5,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v26,v4,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r30,r1,-336
	r30.s64 = ctx.r1.s64 + -336;
	// vslh v25,v3,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvlx128 v36,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vadduhm v21,v8,v2
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// lvrx128 v35,r10,r31
	temp.u32 = ctx.r10.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vadduhm v23,v7,v5
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// addi r29,r1,-160
	r29.s64 = ctx.r1.s64 + -160;
	// vadduhm v19,v26,v4
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// add r31,r31,r4
	r31.u64 = r31.u64 + ctx.r4.u64;
	// vadduhm v18,v25,v3
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vsubuhm v16,v13,v21
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vsubuhm v17,v13,v23
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vor128 v1,v36,v35
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8)));
	// vor v24,v14,v14
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_load_si128((simde__m128i*)v14.u8));
	// vadduhm v5,v19,v16
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vadduhm v4,v18,v17
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vor v30,v15,v15
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_load_si128((simde__m128i*)v15.u8));
	// vmrghb v8,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v20,v31,v31
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_load_si128((simde__m128i*)v31.u8));
	// vmrglb v7,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsrah v1,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v15,v22,v8
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v14,v20,v7
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// lvx128 v26,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v25,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v5,v30,v26
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v4,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// stvx128 v8,r11,r30
	ea = (ctx.r11.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubuhm v3,v13,v15
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// stvx128 v7,r11,r29
	ea = (ctx.r11.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubuhm v2,v13,v14
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// vslh v24,v5,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v1,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v23,v4,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v31,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v22,v24,v5
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v21,v23,v4
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v20,v22,v3
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v19,v21,v2
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsrah v18,v20,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v19,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v18,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bdnz 0x823761b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823761B0;
	// b 0x82376570
	goto loc_82376570;
loc_823763EC:
	// subf r11,r4,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r4.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r30,r1,-432
	r30.s64 = ctx.r1.s64 + -432;
	// addi r29,r1,-256
	r29.s64 = ctx.r1.s64 + -256;
	// addi r28,r1,-416
	r28.s64 = ctx.r1.s64 + -416;
	// addi r27,r1,-240
	r27.s64 = ctx.r1.s64 + -240;
	// lvrx128 v34,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r26,r1,-400
	r26.s64 = ctx.r1.s64 + -400;
	// lvlx128 v33,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor128 v8,v33,v34
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v34.u8)));
	// addi r25,r1,-224
	r25.s64 = ctx.r1.s64 + -224;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// lvrx128 v32,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v7,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v5,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v8,v63,v32
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8)));
	// lvrx128 v62,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v61,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r10,r8,r4
	ctx.r10.u64 = ctx.r8.u64 + ctx.r4.u64;
	// vmrghb v4,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v3,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v8,v61,v62
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// stvx128 v7,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v5,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v2,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v1,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v4,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v3,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v2,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v1,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82376480:
	// addi r3,r1,-416
	ctx.r3.s64 = ctx.r1.s64 + -416;
	// lvrx128 v60,r31,r10
	temp.u32 = r31.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r30,r1,-240
	r30.s64 = ctx.r1.s64 + -240;
	// lvlx128 v59,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r29,r1,-400
	r29.s64 = ctx.r1.s64 + -400;
	// vor128 v4,v59,v60
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// addi r28,r1,-224
	r28.s64 = ctx.r1.s64 + -224;
	// addi r8,r1,-432
	ctx.r8.s64 = ctx.r1.s64 + -432;
	// lvx128 v8,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,-256
	ctx.r3.s64 = ctx.r1.s64 + -256;
	// lvx128 v7,r11,r30
	ea = (ctx.r11.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v8,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v7,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v3,r11,r29
	ea = (ctx.r11.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r11,r28
	ea = (ctx.r11.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v5,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v3,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v26,v1,v8
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vadduhm v22,v31,v7
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// vslh v25,v8,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r30,r1,-384
	r30.s64 = ctx.r1.s64 + -384;
	// vslh v24,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r29,r1,-208
	r29.s64 = ctx.r1.s64 + -208;
	// vslh v23,v2,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vslh v21,v7,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v20,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v19,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v18,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v16,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v5,r11,r30
	ea = (ctx.r11.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v7,v2,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v4,r11,r29
	ea = (ctx.r11.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v17,v30,v5
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vadduhm v15,v25,v26
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v3,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v14,v24,v13
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v8,v23,v4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v2,v19,v13
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v31,v16,v17
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v1,v20,v5
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v26,v18,v4
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v30,v14,v15
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vadduhm v25,v7,v8
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v24,v2,v3
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vslh v23,v1,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v30,v31
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vslh v21,v26,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v24,v25
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vsubuhm v19,v22,v23
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vsubuhm v18,v20,v21
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vsrah v17,v19,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v18,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v17,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v16,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bdnz 0x82376480
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82376480;
loc_82376570:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// vor v8,v27,v27
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)v27.u8));
	// bne cr6,0x82376580
	if (!ctx.cr6.eq) goto loc_82376580;
	// vor v8,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)v28.u8));
loc_82376580:
	// vspltish v7,7
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_set1_epi16(short(0x7)));
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x823766a0
	if (ctx.cr6.eq) goto loc_823766A0;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x82376638
	if (ctx.cr6.eq) goto loc_82376638;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x82376738
	if (!ctx.cr6.eq) goto loc_82376738;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,-432
	ctx.r10.s64 = ctx.r1.s64 + -432;
	// addi r8,r1,-256
	ctx.r8.s64 = ctx.r1.s64 + -256;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_823765B4:
	// lvx128 v0,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v13,v0,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vsldoi128 v9,v0,v58,4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), 12));
	// vsldoi128 v5,v0,v58,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), 14));
	// vsldoi128 v4,v0,v58,6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), 10));
	// vsrah v0,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v9,v5,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v5,v4,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v4,v0,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v0,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v0,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v31,v4,v0
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vadduhm v30,v3,v13
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vslh v28,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v27,v1,v8
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v26,v2,v31
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vadduhm v25,v13,v5
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v24,v28,v30
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vadduhm v23,v27,v26
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vslh v22,v25,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v21,v23,v24
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vsubuhm v20,v21,v22
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vsrah v19,v20,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshss v18,v19,v19
	simde_mm_store_si128((simde__m128i*)v18.s8, simde_mm_packs_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vaddubm v17,v18,v29
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// stvewx v17,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, v17.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v17,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, v17.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x823765b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823765B4;
	// b 0x822d4ec4
	return;
loc_82376638:
	// li r9,8
	ctx.r9.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,-432
	ctx.r10.s64 = ctx.r1.s64 + -432;
	// addi r8,r1,-256
	ctx.r8.s64 = ctx.r1.s64 + -256;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_82376650:
	// lvx128 v0,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v57,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vsldoi128 v13,v0,v57,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), 12));
	// vsldoi128 v12,v0,v57,2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), 14));
	// vsldoi128 v11,v0,v57,6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), 10));
	// vadduhm v13,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v10,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v6,v13,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v5,v8,v10
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v4,v6,v13
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v3,v4,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vsrah v2,v3,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshss v1,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v1.s8, simde_mm_packs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddubm v31,v1,v29
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// stvewx v31,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, v31.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, v31.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x82376650
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82376650;
	// b 0x822d4ec4
	return;
loc_823766A0:
	// li r9,8
	ctx.r9.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,-432
	ctx.r10.s64 = ctx.r1.s64 + -432;
	// addi r8,r1,-256
	ctx.r8.s64 = ctx.r1.s64 + -256;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_823766B8:
	// lvx128 v0,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v5,v0,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vsldoi128 v4,v0,v56,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), 14));
	// vsldoi128 v3,v0,v56,4
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), 12));
	// vsldoi128 v2,v0,v56,6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), 10));
	// vsrah v0,v4,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v13,v3,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v9,v2,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v1,v0,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v13,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v0,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v0,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v27,v1,v0
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vadduhm v26,v31,v9
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v25,v13,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v24,v28,v8
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v23,v30,v27
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v22,v5,v9
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v21,v25,v26
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v20,v24,v23
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vslh v19,v22,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v18,v20,v21
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vsubuhm v17,v18,v19
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vsrah v16,v17,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshss v15,v16,v16
	simde_mm_store_si128((simde__m128i*)v15.s8, simde_mm_packs_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vaddubm v14,v15,v29
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_add_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// stvewx v14,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, v14.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v14,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, v14.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x823766b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823766B8;
loc_82376738:
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_823F3B00) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x823F3B08;
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823f3c30
	if (ctx.cr6.eq) goto loc_823F3C30;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823F3B28:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x823f3b28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F3B28;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// subf r4,r4,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r4.u64;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r31,-32256
	r31.s64 = -2113929216;
	// lis r30,-32249
	r30.s64 = -2113470464;
	// lis r29,-32256
	r29.s64 = -2113929216;
	// lfs f10,-7224(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -7224);
	ctx.f10.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f9,16288(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16288);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// lfs f11,17176(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 17176);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r1,164
	ctx.r9.s64 = ctx.r1.s64 + 164;
	// lfs f12,22428(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 22428);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,2000(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
loc_823F3B78:
	// lfs f8,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// lfs f0,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// lfs f8,-12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,-4(r9)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// lfs f7,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// stfs f7,0(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f6,4(r9)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fadds f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f8,f8
	ctx.f8.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f8.u64);
	// lwa r5,92(r1)
	ctx.r5.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 92));
	// std r5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// stfsx f8,r4,r11
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, temp.u32);
	// fsubs f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// beq cr6,0x823f3bdc
	if (ctx.cr6.eq) goto loc_823F3BDC;
	// lfs f8,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f0,f12,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f8.f64)));
	// stfs f8,0(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_823F3BDC:
	// cmplwi cr6,r8,12
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 12, ctx.xer);
	// bge cr6,0x823f3c18
	if (!ctx.cr6.lt) goto loc_823F3C18;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823f3bf8
	if (ctx.cr6.eq) goto loc_823F3BF8;
	// lfs f8,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f0,f11,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f8.f64)));
	// stfs f8,8(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_823F3BF8:
	// lfs f8,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// fmadds f8,f0,f10,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f8.f64)));
	// stfs f8,12(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// beq cr6,0x823f3c18
	if (ctx.cr6.eq) goto loc_823F3C18;
	// lfs f8,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f0,f0,f9,f8
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f8.f64)));
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
loc_823F3C18:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823f3b78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F3B78;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_823F3C30:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x823f2b10
	ctx.lr = 0x823F3C38;
	sub_823F2B10(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_823F6D80) {
	REX_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r5,r5,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x822d4fa0
	sub_822D4FA0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823F7758) {
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
	// bl 0x822d4e78
	ctx.lr = 0x823F7760;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// li r25,2
	r25.s64 = 2;
	// ori r30,r9,65535
	r30.u64 = ctx.r9.u64 | 65535;
	// addi r26,r11,6256
	r26.s64 = ctx.r11.s64 + 6256;
	// addi r27,r10,6768
	r27.s64 = ctx.r10.s64 + 6768;
loc_823F7790:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r11,262
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 262, ctx.xer);
	// bge cr6,0x823f77c0
	if (!ctx.cr6.lt) goto loc_823F77C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f6f60
	ctx.lr = 0x823F77A4;
	sub_823F6F60(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r11,262
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 262, ctx.xer);
	// bge cr6,0x823f77b8
	if (!ctx.cr6.lt) goto loc_823F77B8;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x823f7b70
	if (ctx.cr6.eq) goto loc_823F7B70;
loc_823F77B8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f7ba0
	if (ctx.cr6.eq) goto loc_823F7BA0;
loc_823F77C0:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x823f7828
	if (ctx.cr6.lt) goto loc_823F7828;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,80(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r7,76(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 76);
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// lwz r8,44(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lbz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// lwz r8,60(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 60);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// lhzx r28,r7,r8
	r28.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// sthx r28,r11,r9
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, r28.u16);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 64);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r11,r9,r10
	REX_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u16);
loc_823F7828:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// stw r25,88(r31)
	REX_STORE_U32(r31.u32 + 88, r25.u32);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// beq cr6,0x823f78c0
	if (ctx.cr6.eq) goto loc_823F78C0;
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823f78c0
	if (!ctx.cr6.lt) goto loc_823F78C0;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// addi r11,r11,-262
	ctx.r11.s64 = ctx.r11.s64 + -262;
	// subf r10,r28,r10
	ctx.r10.u64 = ctx.r10.u64 - r28.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823f78c0
	if (ctx.cr6.gt) goto loc_823F78C0;
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823f7888
	if (ctx.cr6.eq) goto loc_823F7888;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f6da8
	ctx.lr = 0x823F7884;
	sub_823F6DA8(ctx, base);
	// stw r3,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r3.u32);
loc_823F7888:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x823f78c0
	if (ctx.cr6.gt) goto loc_823F78C0;
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 128);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x823f78bc
	if (ctx.cr6.eq) goto loc_823F78BC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x823f78c0
	if (!ctx.cr6.eq) goto loc_823F78C0;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// ble cr6,0x823f78c0
	if (!ctx.cr6.gt) goto loc_823F78C0;
loc_823F78BC:
	// stw r25,88(r31)
	REX_STORE_U32(r31.u32 + 88, r25.u32);
loc_823F78C0:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x823f7a98
	if (ctx.cr6.lt) goto loc_823F7A98;
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823f7a98
	if (ctx.cr6.gt) goto loc_823F7A98;
	// addi r10,r11,253
	ctx.r10.s64 = ctx.r11.s64 + 253;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r9,92(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 92);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// subf r9,r9,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r9.u64;
	// lwz r8,5784(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,5788(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 5788);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r8,r11,-3
	ctx.r8.s64 = ctx.r11.s64 + -3;
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + r30.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sthx r10,r5,r6
	REX_STORE_U16(ctx.r5.u32 + ctx.r6.u32, ctx.r10.u16);
	// lwz r10,5784(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// lwz r11,5776(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5776);
	// stbx r7,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r10,5784(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,5784(r31)
	REX_STORE_U32(r31.u32 + 5784, ctx.r11.u32);
	// lbzx r11,r7,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + r27.u32);
	// addi r11,r11,292
	ctx.r11.s64 = ctx.r11.s64 + 292;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + r31.u32, ctx.r10.u16);
	// bge cr6,0x823f795c
	if (!ctx.cr6.lt) goto loc_823F795C;
	// lbzx r11,r9,r26
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + r26.u32);
	// b 0x823f7968
	goto loc_823F7968;
loc_823F795C:
	// rlwinm r11,r9,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r26,256
	ctx.r10.s64 = r26.s64 + 256;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
loc_823F7968:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,608
	ctx.r11.s64 = ctx.r11.s64 + 608;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + r31.u32, ctx.r10.u16);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r7,5784(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// lwz r10,5780(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5780);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r9,r7,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r7.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r10,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
loc_823F79B4:
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x823f7a24
	if (ctx.cr6.gt) goto loc_823F7A24;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r7,64(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,80(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r5,76(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 76);
	// slw r7,r7,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lbz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
	// lwz r6,60(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 60);
	// xor r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// lwz r7,56(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 56);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 & ctx.r5.u64;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// lhzx r28,r5,r6
	r28.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r6.u32);
	// sthx r28,r11,r7
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, r28.u16);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r7,64(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 64);
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r11,r7,r10
	REX_STORE_U16(ctx.r7.u32 + ctx.r10.u32, ctx.r11.u16);
loc_823F7A24:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// bne 0x823f79b4
	if (!ctx.cr0.eq) goto loc_823F79B4;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r29,96(r31)
	REX_STORE_U32(r31.u32 + 96, r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r25,88(r31)
	REX_STORE_U32(r31.u32 + 88, r25.u32);
	// stw r10,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// beq cr6,0x823f7790
	if (ctx.cr6.eq) goto loc_823F7790;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f7a68
	if (ctx.cr6.lt) goto loc_823F7A68;
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 48);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// b 0x823f7a6c
	goto loc_823F7A6C;
loc_823F7A68:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_823F7A6C:
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82400fc0
	ctx.lr = 0x823F7A7C;
	sub_82400FC0(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// bl 0x82299240
	ctx.lr = 0x823F7A8C;
	sub_82299240(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x823f7b68
	goto loc_823F7B68;
loc_823F7A98:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823f7b7c
	if (ctx.cr6.eq) goto loc_823F7B7C;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r9,5784(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,5788(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5788);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,-1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// sthx r29,r9,r10
	REX_STORE_U16(ctx.r9.u32 + ctx.r10.u32, r29.u16);
	// lwz r9,5776(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 5776);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 35;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,5784(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// stbx r8,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u8);
	// lwz r10,5784(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,5784(r31)
	REX_STORE_U32(r31.u32 + 5784, ctx.r10.u32);
	// lhzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + r31.u32, ctx.r10.u16);
	// lwz r10,5784(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// lwz r11,5780(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5780);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823f7b48
	if (!ctx.cr6.eq) goto loc_823F7B48;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f7b20
	if (ctx.cr6.lt) goto loc_823F7B20;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x823f7b24
	goto loc_823F7B24;
loc_823F7B20:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_823F7B24:
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
	// bl 0x82400fc0
	ctx.lr = 0x823F7B38;
	sub_82400FC0(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// bl 0x82299240
	ctx.lr = 0x823F7B48;
	sub_82299240(ctx, base);
loc_823F7B48:
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
loc_823F7B68:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823f7790
	if (!ctx.cr6.eq) goto loc_823F7790;
loc_823F7B70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F7B74:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_823F7B7C:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// stw r10,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r9.u32);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// b 0x823f7790
	goto loc_823F7790;
loc_823F7BA0:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823f7c00
	if (ctx.cr6.eq) goto loc_823F7C00;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r9,5784(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,5788(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5788);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,-1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// sthx r29,r9,r10
	REX_STORE_U16(ctx.r9.u32 + ctx.r10.u32, r29.u16);
	// lwz r9,5784(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 35;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,5776(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5776);
	// stbx r8,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u8);
	// lwz r10,5784(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5784);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,5784(r31)
	REX_STORE_U32(r31.u32 + 5784, ctx.r10.u32);
	// lhzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + r31.u32, ctx.r10.u16);
	// stw r29,96(r31)
	REX_STORE_U32(r31.u32 + 96, r29.u32);
loc_823F7C00:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f7c18
	if (ctx.cr6.lt) goto loc_823F7C18;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823f7c1c
	goto loc_823F7C1C;
loc_823F7C18:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_823F7C1C:
	// addi r10,r24,-4
	ctx.r10.s64 = r24.s64 + -4;
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
	// bl 0x82400fc0
	ctx.lr = 0x823F7C38;
	sub_82400FC0(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// bl 0x82299240
	ctx.lr = 0x823F7C48;
	sub_82299240(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823f7c6c
	if (!ctx.cr6.eq) goto loc_823F7C6C;
	// addi r11,r24,-4
	ctx.r11.s64 = r24.s64 + -4;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 & r25.u64;
	// b 0x823f7b74
	goto loc_823F7B74;
loc_823F7C6C:
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(r24.s32, 4, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// beq cr6,0x823f7b74
	if (ctx.cr6.eq) goto loc_823F7B74;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823f7b74
	goto loc_823F7B74;
}

DEFINE_REX_FUNC(sub_8240E6B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8240E6C0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,16880
	r30.s64 = ctx.r11.s64 + 16880;
	// addi r29,r10,28368
	r29.s64 = ctx.r10.s64 + 28368;
	// bne cr6,0x8240e700
	if (!ctx.cr6.eq) goto loc_8240E700;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,28560
	ctx.r5.s64 = ctx.r11.s64 + 28560;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,3105
	ctx.r7.s64 = 3105;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x8240E700;
	sub_8240E308(ctx, base);
loc_8240E700:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8240e724
	if (!ctx.cr6.eq) goto loc_8240E724;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,28544
	ctx.r5.s64 = ctx.r11.s64 + 28544;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,3106
	ctx.r7.s64 = 3106;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x8240E724;
	sub_8240E308(ctx, base);
loc_8240E724:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8240e74c
	if (!ctx.cr6.eq) goto loc_8240E74C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,28572
	ctx.r5.s64 = ctx.r11.s64 + 28572;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,3107
	ctx.r7.s64 = 3107;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x8240E74C;
	sub_8240E308(ctx, base);
loc_8240E74C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x8240e5d0
	ctx.lr = 0x8240E758;
	sub_8240E5D0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8240e76c
	if (!ctx.cr6.eq) goto loc_8240E76C;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r28.u32);
loc_8240E76C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82410CC0) {
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
	// bl 0x822d4e64
	ctx.lr = 0x82410CC8;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x822d4f34
	ctx.lr = 0x82410CD0;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r21,0
	r21.s64 = 0;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// li r22,0
	r22.s64 = 0;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82411040
	if (!ctx.cr6.eq) goto loc_82411040;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,112(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 112);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82411040
	if (!ctx.cr6.eq) goto loc_82411040;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,112(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x82411040
	if (!ctx.cr6.eq) goto loc_82411040;
	// not r8,r11
	ctx.r8.u64 = ~ctx.r11.u64;
	// lwz r4,104(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 104);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// lwz r3,104(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// rlwinm r5,r8,16,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x1;
	// rlwinm r31,r11,15,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	// bl 0x82410b98
	ctx.lr = 0x82410D2C;
	sub_82410B98(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// lwz r4,108(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r3,108(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// bl 0x82410b98
	ctx.lr = 0x82410D48;
	sub_82410B98(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x82411010
	if (ctx.cr6.eq) goto loc_82411010;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82411010
	if (ctx.cr6.eq) goto loc_82411010;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// li r23,-1
	r23.s64 = -1;
	// ori r31,r10,65535
	r31.u64 = ctx.r10.u64 | 65535;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x82410d80
	if (!ctx.cr6.gt) goto loc_82410D80;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_82410D80:
	// bl 0x822c80d0
	ctx.lr = 0x82410D84;
	sub_822C80D0(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82411010
	if (ctx.cr6.eq) goto loc_82411010;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x82410dac
	if (!ctx.cr6.gt) goto loc_82410DAC;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_82410DAC:
	// bl 0x822c80d0
	ctx.lr = 0x82410DB0;
	sub_822C80D0(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82411010
	if (ctx.cr6.eq) goto loc_82411010;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r24,0
	r24.s64 = 0;
	// mr r25,r23
	r25.u64 = r23.u64;
	// mr r26,r23
	r26.u64 = r23.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r10,108(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r30,r11,r3
	r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ble cr6,0x82411008
	if (!ctx.cr6.gt) goto loc_82411008;
	// addi r28,r19,8
	r28.s64 = r19.s64 + 8;
loc_82410DF0:
	// lwz r4,-8(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + -8);
	// li r27,0
	r27.s64 = 0;
	// cmplw cr6,r4,r25
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r25.u32, ctx.xer);
	// beq cr6,0x82410e40
	if (ctx.cr6.eq) goto loc_82410E40;
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r26.u32, ctx.xer);
	// beq cr6,0x82410e2c
	if (ctx.cr6.eq) goto loc_82410E2C;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82410E28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82410e40
	goto loc_82410E40;
loc_82410E2C:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// mr r25,r26
	r25.u64 = r26.u64;
	// mr r31,r30
	r31.u64 = r30.u64;
	// mr r26,r23
	r26.u64 = r23.u64;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_82410E40:
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r26.u32, ctx.xer);
	// beq cr6,0x82410e6c
	if (ctx.cr6.eq) goto loc_82410E6C;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82410E6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82410E6C:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82410fd0
	if (!ctx.cr6.gt) goto loc_82410FD0;
	// addi r10,r20,-16
	ctx.r10.s64 = r20.s64 + -16;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_82410E84:
	// lfs f0,28(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lfs f13,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lwzu r8,16(r10)
	ea = 16 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f12,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f11,-4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// add r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 + r30.u64;
	// add r6,r8,r30
	ctx.r6.u64 = ctx.r8.u64 + r30.u64;
	// add r5,r9,r31
	ctx.r5.u64 = ctx.r9.u64 + r31.u64;
	// lfsx f10,r9,r30
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + r30.u32);
	ctx.f10.f64 = double(temp.f32);
	// add r4,r8,r31
	ctx.r4.u64 = ctx.r8.u64 + r31.u64;
	// lfsx f9,r8,r30
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r30.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f5,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfsx f2,r9,r31
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f7,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f2,f0,f2
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// lfs f6,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f4,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f1,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f31,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	f31.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f3,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	f31.f64 = double(float(f31.f64 * ctx.f0.f64));
	// lfs f30,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	f30.f64 = double(temp.f32);
	// fmuls f3,f3,f13
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// lfsx f29,r8,r31
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	f29.f64 = double(temp.f32);
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 * ctx.f0.f64));
	// lfs f30,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	f30.f64 = double(temp.f32);
	// fmuls f29,f13,f29
	f29.f64 = double(float(ctx.f13.f64 * f29.f64));
	// lfs f28,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	f28.f64 = double(temp.f32);
	// fmuls f30,f30,f13
	f30.f64 = double(float(f30.f64 * ctx.f13.f64));
	// lfs f27,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	f27.f64 = double(temp.f32);
	// fmuls f28,f28,f13
	f28.f64 = double(float(f28.f64 * ctx.f13.f64));
	// fmuls f13,f27,f13
	ctx.f13.f64 = double(float(f27.f64 * ctx.f13.f64));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// fadds f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// fadds f9,f5,f8
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// fadds f8,f4,f7
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// fadds f7,f3,f6
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// fadds f6,f29,f2
	ctx.f6.f64 = double(float(f29.f64 + ctx.f2.f64));
	// fadds f5,f30,f1
	ctx.f5.f64 = double(float(f30.f64 + ctx.f1.f64));
	// fadds f4,f28,f31
	ctx.f4.f64 = double(float(f28.f64 + f31.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fmuls f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f10,f9,f12
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f9,f8,f12
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f8,f6,f11
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fmuls f7,f5,f11
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmuls f6,f4,f11
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fadds f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f13,f7,f10
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f13,f6,f9
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r7,12(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r9,104(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 104);
	// cmplw cr6,r27,r9
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82410e84
	if (ctx.cr6.lt) goto loc_82410E84;
loc_82410FD0:
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82410FF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82410df0
	if (ctx.cr6.lt) goto loc_82410DF0;
loc_82411008:
	// li r31,0
	r31.s64 = 0;
	// b 0x82411018
	goto loc_82411018;
loc_82411010:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
loc_82411018:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x822c80a8
	ctx.lr = 0x82411020;
	sub_822C80A8(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x822c80a8
	ctx.lr = 0x82411028;
	sub_822C80A8(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x822c80a8
	ctx.lr = 0x82411030;
	sub_822C80A8(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x822c80a8
	ctx.lr = 0x82411038;
	sub_822C80A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82411048
	goto loc_82411048;
loc_82411040:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82411048:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x822d4f80
	ctx.lr = 0x82411054;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_8241BF10) {
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
	// lwz r10,96(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r8,100(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r7,104(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e6fc0
	ctx.lr = 0x8241BF64;
	sub_823E6FC0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241bf7c
	if (ctx.cr6.eq) goto loc_8241BF7C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413d40
	ctx.lr = 0x8241BF7C;
	sub_82413D40(ctx, base);
loc_8241BF7C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241bf94
	if (ctx.cr6.eq) goto loc_8241BF94;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82414110
	ctx.lr = 0x8241BF94;
	sub_82414110(ctx, base);
loc_8241BF94:
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

DEFINE_REX_FUNC(sub_8241D878) {
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
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// ori r10,r10,43866
	ctx.r10.u64 = ctx.r10.u64 | 43866;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8241dde0
	if (ctx.cr6.gt) goto loc_8241DDE0;
	// beq cr6,0x8241ddb0
	if (ctx.cr6.eq) goto loc_8241DDB0;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,84
	ctx.r10.u64 = ctx.r10.u64 | 84;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8241db34
	if (ctx.cr6.gt) goto loc_8241DB34;
	// beq cr6,0x8241dc34
	if (ctx.cr6.eq) goto loc_8241DC34;
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// ori r10,r10,323
	ctx.r10.u64 = ctx.r10.u64 | 323;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8241da00
	if (ctx.cr6.gt) goto loc_8241DA00;
	// beq cr6,0x8241d91c
	if (ctx.cr6.eq) goto loc_8241D91C;
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// ori r10,r10,75
	ctx.r10.u64 = ctx.r10.u64 | 75;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8241d9ac
	if (ctx.cr6.gt) goto loc_8241D9AC;
	// beq cr6,0x8241dac0
	if (ctx.cr6.eq) goto loc_8241DAC0;
	// addis r11,r11,-1168
	ctx.r11.s64 = ctx.r11.s64 + -76546048;
	// addic. r11,r11,-2
	ctx.xer.ca = ctx.r11.u32 > 1;
	ctx.r11.s64 = ctx.r11.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8241d97c
	if (ctx.cr0.eq) goto loc_8241D97C;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x8241d97c
	if (ctx.cr6.eq) goto loc_8241D97C;
	// addis r11,r11,-880
	ctx.r11.s64 = ctx.r11.s64 + -57671680;
	// addic. r11,r11,-72
	ctx.xer.ca = ctx.r11.u32 > 71;
	ctx.r11.s64 = ctx.r11.s64 + -72;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8241d94c
	if (ctx.cr0.eq) goto loc_8241D94C;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x8241d94c
	if (ctx.cr6.eq) goto loc_8241D94C;
	// lis r10,4135
	ctx.r10.s64 = 270991360;
	// ori r10,r10,65529
	ctx.r10.u64 = ctx.r10.u64 | 65529;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8241e348
	if (!ctx.cr6.eq) goto loc_8241E348;
loc_8241D91C:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822c80d0
	ctx.lr = 0x8241D924;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413788
	ctx.lr = 0x8241D940;
	sub_82413788(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23848
	ctx.r11.s64 = ctx.r11.s64 + -23848;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241D94C:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822c80d0
	ctx.lr = 0x8241D954;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413788
	ctx.lr = 0x8241D970;
	sub_82413788(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23672
	ctx.r11.s64 = ctx.r11.s64 + -23672;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241D97C:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822c80d0
	ctx.lr = 0x8241D984;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413788
	ctx.lr = 0x8241D9A0;
	sub_82413788(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23816
	ctx.r11.s64 = ctx.r11.s64 + -23816;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241D9AC:
	// addis r11,r11,-6184
	ctx.r11.s64 = ctx.r11.s64 + -405274624;
	// addic. r11,r11,-76
	ctx.xer.ca = ctx.r11.u32 > 75;
	ctx.r11.s64 = ctx.r11.s64 + -76;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8241da98
	if (ctx.cr0.eq) goto loc_8241DA98;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8241da68
	if (ctx.cr6.eq) goto loc_8241DA68;
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// beq cr6,0x8241da38
	if (ctx.cr6.eq) goto loc_8241DA38;
	// cmplwi cr6,r11,106
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 106, ctx.xer);
	// bne cr6,0x8241e348
	if (!ctx.cr6.eq) goto loc_8241E348;
loc_8241D9D0:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822c80d0
	ctx.lr = 0x8241D9D8;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413788
	ctx.lr = 0x8241D9F4;
	sub_82413788(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23720
	ctx.r11.s64 = ctx.r11.s64 + -23720;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241DA00:
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// ori r10,r10,438
	ctx.r10.u64 = ctx.r10.u64 | 438;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8241dae8
	if (ctx.cr6.gt) goto loc_8241DAE8;
	// beq cr6,0x8241d9d0
	if (ctx.cr6.eq) goto loc_8241D9D0;
	// addis r11,r11,-6184
	ctx.r11.s64 = ctx.r11.s64 + -405274624;
	// addic. r11,r11,-331
	ctx.xer.ca = ctx.r11.u32 > 330;
	ctx.r11.s64 = ctx.r11.s64 + -331;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8241dac0
	if (ctx.cr0.eq) goto loc_8241DAC0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8241da98
	if (ctx.cr6.eq) goto loc_8241DA98;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x8241da68
	if (ctx.cr6.eq) goto loc_8241DA68;
	// cmplwi cr6,r11,59
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 59, ctx.xer);
	// bne cr6,0x8241e348
	if (!ctx.cr6.eq) goto loc_8241E348;
loc_8241DA38:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822c80d0
	ctx.lr = 0x8241DA40;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413788
	ctx.lr = 0x8241DA5C;
	sub_82413788(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23912
	ctx.r11.s64 = ctx.r11.s64 + -23912;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241DA68:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822c80d0
	ctx.lr = 0x8241DA70;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413788
	ctx.lr = 0x8241DA8C;
	sub_82413788(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23832
	ctx.r11.s64 = ctx.r11.s64 + -23832;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241DA98:
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x822c80d0
	ctx.lr = 0x8241DAA0;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241c1c8
	ctx.lr = 0x8241DAB4;
	sub_8241C1C8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23416
	ctx.r11.s64 = ctx.r11.s64 + -23416;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241DAC0:
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x822c80d0
	ctx.lr = 0x8241DAC8;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241c1c8
	ctx.lr = 0x8241DADC;
	sub_8241C1C8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23416
	ctx.r11.s64 = ctx.r11.s64 + -23416;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241DAE8:
	// addis r11,r11,-6688
	ctx.r11.s64 = ctx.r11.s64 + -438304768;
	// addic. r11,r11,-75
	ctx.xer.ca = ctx.r11.u32 > 74;
	ctx.r11.s64 = ctx.r11.s64 + -75;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_8241DAF0:
	// beq 0x8241dc0c
	if (ctx.cr0.eq) goto loc_8241DC0C;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8241dbe4
	if (ctx.cr6.eq) goto loc_8241DBE4;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x8241dbbc
	if (ctx.cr6.eq) goto loc_8241DBBC;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x8241e348
	if (!ctx.cr6.eq) goto loc_8241E348;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x822c80d0
	ctx.lr = 0x8241DB14;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241cbb0
	ctx.lr = 0x8241DB28;
	sub_8241CBB0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23432
	ctx.r11.s64 = ctx.r11.s64 + -23432;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241DB34:
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,340
	ctx.r10.u64 = ctx.r10.u64 | 340;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8241dc5c
	if (ctx.cr6.gt) goto loc_8241DC5C;
	// beq cr6,0x8241dc34
	if (ctx.cr6.eq) goto loc_8241DC34;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,182
	ctx.r10.u64 = ctx.r10.u64 | 182;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8241dbb0
	if (ctx.cr6.gt) goto loc_8241DBB0;
	// beq cr6,0x8241dcfc
	if (ctx.cr6.eq) goto loc_8241DCFC;
	// addis r11,r11,-6688
	ctx.r11.s64 = ctx.r11.s64 + -438304768;
	// addic. r11,r11,-90
	ctx.xer.ca = ctx.r11.u32 > 89;
	ctx.r11.s64 = ctx.r11.s64 + -90;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_8241DB64:
	// beq 0x8241dccc
	if (ctx.cr0.eq) goto loc_8241DCCC;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x8241dca4
	if (ctx.cr6.eq) goto loc_8241DCA4;
	// cmplwi cr6,r11,33
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 33, ctx.xer);
	// beq cr6,0x8241dc7c
	if (ctx.cr6.eq) goto loc_8241DC7C;
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// bne cr6,0x8241e348
	if (!ctx.cr6.eq) goto loc_8241E348;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822c80d0
	ctx.lr = 0x8241DB88;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413788
	ctx.lr = 0x8241DBA4;
	sub_82413788(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23768
	ctx.r11.s64 = ctx.r11.s64 + -23768;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241DBB0:
	// addis r11,r11,-6688
	ctx.r11.s64 = ctx.r11.s64 + -438304768;
	// addic. r11,r11,-331
	ctx.xer.ca = ctx.r11.u32 > 330;
	ctx.r11.s64 = ctx.r11.s64 + -331;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x8241daf0
	goto loc_8241DAF0;
loc_8241DBBC:
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x822c80d0
	ctx.lr = 0x8241DBC4;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241cbb0
	ctx.lr = 0x8241DBD8;
	sub_8241CBB0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23432
	ctx.r11.s64 = ctx.r11.s64 + -23432;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241DBE4:
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x822c80d0
	ctx.lr = 0x8241DBEC;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241c1c8
	ctx.lr = 0x8241DC00;
	sub_8241C1C8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23416
	ctx.r11.s64 = ctx.r11.s64 + -23416;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241DC0C:
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x822c80d0
	ctx.lr = 0x8241DC14;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241c1c8
	ctx.lr = 0x8241DC28;
	sub_8241C1C8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23416
	ctx.r11.s64 = ctx.r11.s64 + -23416;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241DC34:
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x822c80d0
	ctx.lr = 0x8241DC3C;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241cbb0
	ctx.lr = 0x8241DC50;
	sub_8241CBB0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23432
	ctx.r11.s64 = ctx.r11.s64 + -23432;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241DC5C:
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,438
	ctx.r10.u64 = ctx.r10.u64 | 438;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8241dd2c
	if (ctx.cr6.gt) goto loc_8241DD2C;
	// beq cr6,0x8241dcfc
	if (ctx.cr6.eq) goto loc_8241DCFC;
	// addis r11,r11,-6688
	ctx.r11.s64 = ctx.r11.s64 + -438304768;
	// addic. r11,r11,-346
	ctx.xer.ca = ctx.r11.u32 > 345;
	ctx.r11.s64 = ctx.r11.s64 + -346;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x8241db64
	goto loc_8241DB64;
loc_8241DC7C:
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x822c80d0
	ctx.lr = 0x8241DC84;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241cbb0
	ctx.lr = 0x8241DC98;
	sub_8241CBB0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23432
	ctx.r11.s64 = ctx.r11.s64 + -23432;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241DCA4:
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x822c80d0
	ctx.lr = 0x8241DCAC;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241cbb0
	ctx.lr = 0x8241DCC0;
	sub_8241CBB0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23432
	ctx.r11.s64 = ctx.r11.s64 + -23432;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241DCCC:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822c80d0
	ctx.lr = 0x8241DCD4;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413788
	ctx.lr = 0x8241DCF0;
	sub_82413788(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23704
	ctx.r11.s64 = ctx.r11.s64 + -23704;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241DCFC:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822c80d0
	ctx.lr = 0x8241DD04;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413788
	ctx.lr = 0x8241DD20;
	sub_82413788(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23784
	ctx.r11.s64 = ctx.r11.s64 + -23784;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241DD2C:
	// addis r11,r11,-6688
	ctx.r11.s64 = ctx.r11.s64 + -438304768;
	// addic. r11,r11,-10934
	ctx.xer.ca = ctx.r11.u32 > 10933;
	ctx.r11.s64 = ctx.r11.s64 + -10934;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8241dd80
	if (ctx.cr0.eq) goto loc_8241DD80;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x8241dd80
	if (ctx.cr6.eq) goto loc_8241DD80;
	// cmplwi cr6,r11,32676
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32676, ctx.xer);
	// beq cr6,0x8241ddb0
	if (ctx.cr6.eq) goto loc_8241DDB0;
	// cmplwi cr6,r11,32720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32720, ctx.xer);
	// bne cr6,0x8241e348
	if (!ctx.cr6.eq) goto loc_8241E348;
loc_8241DD50:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822c80d0
	ctx.lr = 0x8241DD58;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413788
	ctx.lr = 0x8241DD74;
	sub_82413788(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23592
	ctx.r11.s64 = ctx.r11.s64 + -23592;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241DD80:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822c80d0
	ctx.lr = 0x8241DD88;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413788
	ctx.lr = 0x8241DDA4;
	sub_82413788(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23560
	ctx.r11.s64 = ctx.r11.s64 + -23560;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241DDB0:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822c80d0
	ctx.lr = 0x8241DDB8;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413788
	ctx.lr = 0x8241DDD4;
	sub_82413788(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23544
	ctx.r11.s64 = ctx.r11.s64 + -23544;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241DDE0:
	// lis r10,10784
	ctx.r10.s64 = 706740224;
	// ori r10,r10,134
	ctx.r10.u64 = ctx.r10.u64 | 134;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8241e084
	if (ctx.cr6.gt) goto loc_8241E084;
	// beq cr6,0x8241e100
	if (ctx.cr6.eq) goto loc_8241E100;
	// lis r10,10240
	ctx.r10.s64 = 671088640;
	// ori r10,r10,258
	ctx.r10.u64 = ctx.r10.u64 | 258;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8241df60
	if (ctx.cr6.gt) goto loc_8241DF60;
	// beq cr6,0x8241df30
	if (ctx.cr6.eq) goto loc_8241DF30;
	// lis r10,6690
	ctx.r10.s64 = 438435840;
	// ori r10,r10,43686
	ctx.r10.u64 = ctx.r10.u64 | 43686;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8241dea8
	if (ctx.cr6.gt) goto loc_8241DEA8;
	// beq cr6,0x8241df00
	if (ctx.cr6.eq) goto loc_8241DF00;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,43910
	ctx.r10.u64 = ctx.r10.u64 | 43910;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8241dd50
	if (ctx.cr6.eq) goto loc_8241DD50;
	// addis r11,r11,-6690
	ctx.r11.s64 = ctx.r11.s64 + -438435840;
	// addic. r11,r11,-88
	ctx.xer.ca = ctx.r11.u32 > 87;
	ctx.r11.s64 = ctx.r11.s64 + -88;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8241de78
	if (ctx.cr0.eq) goto loc_8241DE78;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x8241de78
	if (ctx.cr6.eq) goto loc_8241DE78;
	// cmplwi cr6,r11,43528
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43528, ctx.xer);
	// bne cr6,0x8241e348
	if (!ctx.cr6.eq) goto loc_8241E348;
loc_8241DE48:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822c80d0
	ctx.lr = 0x8241DE50;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413788
	ctx.lr = 0x8241DE6C;
	sub_82413788(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23496
	ctx.r11.s64 = ctx.r11.s64 + -23496;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241DE78:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822c80d0
	ctx.lr = 0x8241DE80;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413788
	ctx.lr = 0x8241DE9C;
	sub_82413788(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23656
	ctx.r11.s64 = ctx.r11.s64 + -23656;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241DEA8:
	// addis r11,r11,-6691
	ctx.r11.s64 = ctx.r11.s64 + -438501376;
	// addic. r11,r11,21664
	ctx.xer.ca = ctx.r11.u32 > 4294945631;
	ctx.r11.s64 = ctx.r11.s64 + 21664;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8241de48
	if (ctx.cr0.eq) goto loc_8241DE48;
	// cmplwi cr6,r11,70
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 70, ctx.xer);
	// beq cr6,0x8241df00
	if (ctx.cr6.eq) goto loc_8241DF00;
	// addis r11,r11,-3549
	ctx.r11.s64 = ctx.r11.s64 + -232587264;
	// addic. r11,r11,-21666
	ctx.xer.ca = ctx.r11.u32 > 21665;
	ctx.r11.s64 = ctx.r11.s64 + -21666;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8241df30
	if (ctx.cr0.eq) goto loc_8241DF30;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// bne cr6,0x8241e348
	if (!ctx.cr6.eq) goto loc_8241E348;
loc_8241DED0:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822c80d0
	ctx.lr = 0x8241DED8;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413788
	ctx.lr = 0x8241DEF4;
	sub_82413788(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23656
	ctx.r11.s64 = ctx.r11.s64 + -23656;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241DF00:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822c80d0
	ctx.lr = 0x8241DF08;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413788
	ctx.lr = 0x8241DF24;
	sub_82413788(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23448
	ctx.r11.s64 = ctx.r11.s64 + -23448;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241DF30:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822c80d0
	ctx.lr = 0x8241DF38;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413788
	ctx.lr = 0x8241DF54;
	sub_82413788(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23688
	ctx.r11.s64 = ctx.r11.s64 + -23688;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241DF60:
	// lis r10,10280
	ctx.r10.s64 = 673710080;
	// ori r10,r10,134
	ctx.r10.u64 = ctx.r10.u64 | 134;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8241dfd0
	if (ctx.cr6.gt) goto loc_8241DFD0;
	// beq cr6,0x8241dff4
	if (ctx.cr6.eq) goto loc_8241DFF4;
	// lis r10,10240
	ctx.r10.s64 = 671088640;
	// ori r10,r10,344
	ctx.r10.u64 = ctx.r10.u64 | 344;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8241ded0
	if (ctx.cr6.eq) goto loc_8241DED0;
	// addis r11,r11,-10280
	ctx.r11.s64 = ctx.r11.s64 + -673710080;
	// addic. r11,r11,-67
	ctx.xer.ca = ctx.r11.u32 > 66;
	ctx.r11.s64 = ctx.r11.s64 + -67;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8241e054
	if (ctx.cr0.eq) goto loc_8241E054;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8241e024
	if (ctx.cr6.eq) goto loc_8241E024;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x8241e348
	if (!ctx.cr6.eq) goto loc_8241E348;
loc_8241DFA0:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822c80d0
	ctx.lr = 0x8241DFA8;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413788
	ctx.lr = 0x8241DFC4;
	sub_82413788(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23800
	ctx.r11.s64 = ctx.r11.s64 + -23800;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241DFD0:
	// addis r11,r11,-10280
	ctx.r11.s64 = ctx.r11.s64 + -673710080;
	// addic. r11,r11,-323
	ctx.xer.ca = ctx.r11.u32 > 322;
	ctx.r11.s64 = ctx.r11.s64 + -323;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8241e054
	if (ctx.cr0.eq) goto loc_8241E054;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8241e024
	if (ctx.cr6.eq) goto loc_8241E024;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x8241dfa0
	if (ctx.cr6.eq) goto loc_8241DFA0;
	// cmplwi cr6,r11,67
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 67, ctx.xer);
	// bne cr6,0x8241e348
	if (!ctx.cr6.eq) goto loc_8241E348;
loc_8241DFF4:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822c80d0
	ctx.lr = 0x8241DFFC;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413788
	ctx.lr = 0x8241E018;
	sub_82413788(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23896
	ctx.r11.s64 = ctx.r11.s64 + -23896;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241E024:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822c80d0
	ctx.lr = 0x8241E02C;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413788
	ctx.lr = 0x8241E048;
	sub_82413788(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23880
	ctx.r11.s64 = ctx.r11.s64 + -23880;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241E054:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822c80d0
	ctx.lr = 0x8241E05C;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413788
	ctx.lr = 0x8241E078;
	sub_82413788(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23864
	ctx.r11.s64 = ctx.r11.s64 + -23864;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241E084:
	// lis r10,11552
	ctx.r10.s64 = 757071872;
	// ori r10,r10,43850
	ctx.r10.u64 = ctx.r10.u64 | 43850;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8241e214
	if (ctx.cr6.gt) goto loc_8241E214;
	// beq cr6,0x8241e1e4
	if (ctx.cr6.eq) goto loc_8241E1E4;
	// lis r10,10784
	ctx.r10.s64 = 706740224;
	// ori r10,r10,2950
	ctx.r10.u64 = ctx.r10.u64 | 2950;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8241e160
	if (ctx.cr6.gt) goto loc_8241E160;
	// beq cr6,0x8241e130
	if (ctx.cr6.eq) goto loc_8241E130;
	// addis r11,r11,-10784
	ctx.r11.s64 = ctx.r11.s64 + -706740224;
	// addic. r11,r11,-390
	ctx.xer.ca = ctx.r11.u32 > 389;
	ctx.r11.s64 = ctx.r11.s64 + -390;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8241e100
	if (ctx.cr0.eq) goto loc_8241E100;
	// cmplwi cr6,r11,2239
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2239, ctx.xer);
	// beq cr6,0x8241e0d0
	if (ctx.cr6.eq) goto loc_8241E0D0;
	// cmplwi cr6,r11,2304
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2304, ctx.xer);
	// beq cr6,0x8241e130
	if (ctx.cr6.eq) goto loc_8241E130;
	// cmplwi cr6,r11,2495
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2495, ctx.xer);
	// bne cr6,0x8241e348
	if (!ctx.cr6.eq) goto loc_8241E348;
loc_8241E0D0:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822c80d0
	ctx.lr = 0x8241E0D8;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413788
	ctx.lr = 0x8241E0F4;
	sub_82413788(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23624
	ctx.r11.s64 = ctx.r11.s64 + -23624;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241E100:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822c80d0
	ctx.lr = 0x8241E108;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413788
	ctx.lr = 0x8241E124;
	sub_82413788(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23752
	ctx.r11.s64 = ctx.r11.s64 + -23752;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241E130:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822c80d0
	ctx.lr = 0x8241E138;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413788
	ctx.lr = 0x8241E154;
	sub_82413788(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23608
	ctx.r11.s64 = ctx.r11.s64 + -23608;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241E160:
	// addis r11,r11,-11552
	ctx.r11.s64 = ctx.r11.s64 + -757071872;
	// addic. r11,r11,-153
	ctx.xer.ca = ctx.r11.u32 > 152;
	ctx.r11.s64 = ctx.r11.s64 + -153;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8241e1b4
	if (ctx.cr0.eq) goto loc_8241E1B4;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x8241e1b4
	if (ctx.cr6.eq) goto loc_8241E1B4;
	// cmplwi cr6,r11,43441
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43441, ctx.xer);
	// beq cr6,0x8241e1e4
	if (ctx.cr6.eq) goto loc_8241E1E4;
	// cmplwi cr6,r11,43520
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43520, ctx.xer);
	// bne cr6,0x8241e348
	if (!ctx.cr6.eq) goto loc_8241E348;
loc_8241E184:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822c80d0
	ctx.lr = 0x8241E18C;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413788
	ctx.lr = 0x8241E1A8;
	sub_82413788(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23576
	ctx.r11.s64 = ctx.r11.s64 + -23576;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241E1B4:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822c80d0
	ctx.lr = 0x8241E1BC;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413788
	ctx.lr = 0x8241E1D8;
	sub_82413788(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23736
	ctx.r11.s64 = ctx.r11.s64 + -23736;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241E1E4:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822c80d0
	ctx.lr = 0x8241E1EC;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413788
	ctx.lr = 0x8241E208;
	sub_82413788(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23640
	ctx.r11.s64 = ctx.r11.s64 + -23640;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241E214:
	// lis r10,11554
	ctx.r10.s64 = 757202944;
	// ori r10,r10,43941
	ctx.r10.u64 = ctx.r10.u64 | 43941;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8241e2b4
	if (ctx.cr6.gt) goto loc_8241E2B4;
	// beq cr6,0x8241e284
	if (ctx.cr6.eq) goto loc_8241E284;
	// lis r10,11552
	ctx.r10.s64 = 757071872;
	// ori r10,r10,43929
	ctx.r10.u64 = ctx.r10.u64 | 43929;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8241e184
	if (ctx.cr6.eq) goto loc_8241E184;
	// addis r11,r11,-11555
	ctx.r11.s64 = ctx.r11.s64 + -757268480;
	// addic. r11,r11,21857
	ctx.xer.ca = ctx.r11.u32 > 4294945438;
	ctx.r11.s64 = ctx.r11.s64 + 21857;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8241e254
	if (ctx.cr0.eq) goto loc_8241E254;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x8241e284
	if (ctx.cr6.eq) goto loc_8241E284;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x8241e348
	if (!ctx.cr6.eq) goto loc_8241E348;
loc_8241E254:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822c80d0
	ctx.lr = 0x8241E25C;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413788
	ctx.lr = 0x8241E278;
	sub_82413788(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23512
	ctx.r11.s64 = ctx.r11.s64 + -23512;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241E284:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822c80d0
	ctx.lr = 0x8241E28C;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413788
	ctx.lr = 0x8241E2A8;
	sub_82413788(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23464
	ctx.r11.s64 = ctx.r11.s64 + -23464;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241E2B4:
	// addis r11,r11,-11683
	ctx.r11.s64 = ctx.r11.s64 + -765657088;
	// addic. r11,r11,21922
	ctx.xer.ca = ctx.r11.u32 > 4294945373;
	ctx.r11.s64 = ctx.r11.s64 + 21922;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8241e308
	if (ctx.cr0.eq) goto loc_8241E308;
	// cmplwi cr6,r11,70
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 70, ctx.xer);
	// beq cr6,0x8241e2d8
	if (ctx.cr6.eq) goto loc_8241E2D8;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x8241e308
	if (ctx.cr6.eq) goto loc_8241E308;
	// cmplwi cr6,r11,326
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 326, ctx.xer);
	// bne cr6,0x8241e348
	if (!ctx.cr6.eq) goto loc_8241E348;
loc_8241E2D8:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822c80d0
	ctx.lr = 0x8241E2E0;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413788
	ctx.lr = 0x8241E2FC;
	sub_82413788(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23480
	ctx.r11.s64 = ctx.r11.s64 + -23480;
	// b 0x8241e334
	goto loc_8241E334;
loc_8241E308:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822c80d0
	ctx.lr = 0x8241E310;
	sub_822C80D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8241e33c
	if (ctx.cr0.eq) goto loc_8241E33C;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413788
	ctx.lr = 0x8241E32C;
	sub_82413788(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23528
	ctx.r11.s64 = ctx.r11.s64 + -23528;
loc_8241E334:
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x8241e340
	goto loc_8241E340;
loc_8241E33C:
	// li r31,0
	r31.s64 = 0;
loc_8241E340:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8241e350
	if (!ctx.cr6.eq) goto loc_8241E350;
loc_8241E348:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8241e3b0
	goto loc_8241E3B0;
loc_8241E350:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241e38c
	if (ctx.cr6.eq) goto loc_8241E38C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413ae0
	ctx.lr = 0x8241E368;
	sub_82413AE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8241e38c
	if (!ctx.cr0.lt) goto loc_8241E38C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8241E388;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8241e348
	goto loc_8241E348;
loc_8241E38C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241e3ac
	if (ctx.cr6.eq) goto loc_8241E3AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8241E3AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8241E3AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8241E3B0:
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

DEFINE_REX_FUNC(sub_82444888) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r3,120
	ctx.r3.s64 = ctx.r3.s64 + 120;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8242d868
	ctx.lr = 0x824448B4;
	sub_8242D868(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x8242d868
	ctx.lr = 0x824448BC;
	sub_8242D868(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x8242c4b8
	ctx.lr = 0x824448C4;
	sub_8242C4B8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824448d4
	if (ctx.cr0.eq) goto loc_824448D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x824448D4;
	sub_82473600(ctx, base);
loc_824448D4:
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

DEFINE_REX_FUNC(sub_8244A6C8) {
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
	ctx.lr = 0x8244A6D0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8244a6fc
	if (ctx.cr6.eq) goto loc_8244A6FC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8244a708
	if (!ctx.cr6.eq) goto loc_8244A708;
loc_8244A6FC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x8244a848
	goto loc_8244A848;
loc_8244A708:
	// lwz r10,368(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 368);
	// lwz r9,360(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 360);
	// lhz r29,0(r27)
	r29.u64 = REX_LOAD_U16(r27.u32 + 0);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// sth r29,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r29.u16);
	// mullw r7,r8,r29
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(r29.s32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// cmpw cr6,r7,r28
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r28.s32, ctx.xer);
	// bgt cr6,0x8244a85c
	if (ctx.cr6.gt) goto loc_8244A85C;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// bgt cr6,0x8244a85c
	if (ctx.cr6.gt) goto loc_8244A85C;
	// lwz r10,352(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 352);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8244a7b4
	if (!ctx.cr6.eq) goto loc_8244A7B4;
	// lwz r10,420(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 420);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8244a75c
	if (ctx.cr6.eq) goto loc_8244A75C;
	// lwz r10,424(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 424);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8244a788
	if (!ctx.cr6.eq) goto loc_8244A788;
loc_8244A75C:
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bne cr6,0x8244a77c
	if (!ctx.cr6.eq) goto loc_8244A77C;
	// bl 0x823019f8
	ctx.lr = 0x8244A778;
	sub_823019F8(ctx, base);
	// b 0x8244a780
	goto loc_8244A780;
loc_8244A77C:
	// bl 0x823013a8
	ctx.lr = 0x8244A780;
	sub_823013A8(ctx, base);
loc_8244A780:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8244a848
	if (ctx.cr6.lt) goto loc_8244A848;
loc_8244A788:
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8244a7b4
	if (!ctx.cr6.eq) goto loc_8244A7B4;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82447000
	ctx.lr = 0x8244A7A8;
	sub_82447000(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8244a844
	if (ctx.cr6.lt) goto loc_8244A844;
	// lhz r29,80(r1)
	r29.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
loc_8244A7B4:
	// lwz r11,316(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8244a7ec
	if (ctx.cr6.eq) goto loc_8244A7EC;
	// clrlwi r11,r29,16
	ctx.r11.u64 = r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244a7ec
	if (ctx.cr6.eq) goto loc_8244A7EC;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82446ad0
	ctx.lr = 0x8244A7E0;
	sub_82446AD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8244a844
	if (ctx.cr6.lt) goto loc_8244A844;
	// lhz r29,80(r1)
	r29.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
loc_8244A7EC:
	// lwz r11,324(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8244a824
	if (ctx.cr6.eq) goto loc_8244A824;
	// clrlwi r11,r29,16
	ctx.r11.u64 = r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244a824
	if (ctx.cr6.eq) goto loc_8244A824;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82446c98
	ctx.lr = 0x8244A818;
	sub_82446C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8244a844
	if (ctx.cr6.lt) goto loc_8244A844;
	// lhz r29,80(r1)
	r29.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
loc_8244A824:
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 356);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8244a848
	if (!ctx.cr6.eq) goto loc_8244A848;
	// clrlwi r5,r29,16
	ctx.r5.u64 = r29.u32 & 0xFFFF;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82449d20
	ctx.lr = 0x8244A840;
	sub_82449D20(ctx, base);
	// b 0x8244a848
	goto loc_8244A848;
loc_8244A844:
	// lhz r29,80(r1)
	r29.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
loc_8244A848:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8244a864
	if (ctx.cr6.eq) goto loc_8244A864;
	// sth r29,0(r27)
	REX_STORE_U16(r27.u32 + 0, r29.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
loc_8244A85C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_8244A864:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_824535F0) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82453638
	if (!ctx.cr6.eq) goto loc_82453638;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bne cr6,0x8245361c
	if (!ctx.cr6.eq) goto loc_8245361C;
	// rlwinm. r11,r5,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r3,r11,10808
	ctx.r3.s64 = ctx.r11.s64 + 10808;
	// blr 
	return;
loc_8245361C:
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// bne cr6,0x8245365c
	if (!ctx.cr6.eq) goto loc_8245365C;
	// rlwinm. r11,r5,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r3,r11,11448
	ctx.r3.s64 = ctx.r11.s64 + 11448;
	// blr 
	return;
loc_82453638:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// rlwinm. r11,r5,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r3,r11,12648
	ctx.r3.s64 = ctx.r11.s64 + 12648;
	// blr 
	return;
loc_8245365C:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// rlwinm. r11,r5,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r3,r11,9760
	ctx.r3.s64 = ctx.r11.s64 + 9760;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824555A0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82454fc0
	ctx.lr = 0x824555C0;
	sub_82454FC0(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lwz r6,28(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 28);
	// addis r9,r31,6
	ctx.r9.s64 = r31.s64 + 393216;
	// addi r11,r10,27588
	ctx.r11.s64 = ctx.r10.s64 + 27588;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,3124
	ctx.r7.s64 = ctx.r11.s64 + 3124;
	// lfs f0,27588(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 27588);
	ctx.f0.f64 = double(temp.f32);
	// addis r8,r31,6
	ctx.r8.s64 = r31.s64 + 393216;
	// addi r9,r9,-19856
	ctx.r9.s64 = ctx.r9.s64 + -19856;
	// addi r8,r8,-17776
	ctx.r8.s64 = ctx.r8.s64 + -17776;
	// lfsx f13,r5,r7
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,2060(r9)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + 2060, temp.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f11,2064(r9)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + 2064, temp.u32);
	// stfs f12,2060(r8)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r8.u32 + 2060, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f11,2064(r8)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r8.u32 + 2064, temp.u32);
	// bne cr6,0x82455618
	if (!ctx.cr6.eq) goto loc_82455618;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82455644
	goto loc_82455644;
loc_82455618:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,26632(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26632);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctidz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82455644:
	// addis r11,r31,6
	ctx.r11.s64 = r31.s64 + 393216;
	// addi r11,r11,-15696
	ctx.r11.s64 = ctx.r11.s64 + -15696;
	// lwz r9,2068(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 2068);
	// lwz r8,2064(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 2064);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82455678
	if (!ctx.cr6.eq) goto loc_82455678;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,2064(r11)
	REX_STORE_U32(ctx.r11.u32 + 2064, ctx.r8.u32);
	// stw r8,2072(r11)
	REX_STORE_U32(ctx.r11.u32 + 2072, ctx.r8.u32);
	// lfs f0,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2080(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 2080, temp.u32);
	// b 0x82455680
	goto loc_82455680;
loc_82455678:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,2072(r11)
	REX_STORE_U32(ctx.r11.u32 + 2072, ctx.r10.u32);
loc_82455680:
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

DEFINE_REX_FUNC(sub_8245C510) {
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
	// li r11,13
	ctx.r11.s64 = 13;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// divw r11,r4,r11
	ctx.r11.u64 = uint32_t((ctx.r11.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r4.s32 / ctx.r11.s32 : 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mulli r11,r11,13
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(13));
	// subf r11,r11,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r11.u64;
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,32(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 32);
loc_8245C548:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245c564
	if (ctx.cr6.eq) goto loc_8245C564;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,0(r9)
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x8245c568
	goto loc_8245C568;
loc_8245C564:
	// li r30,0
	r30.s64 = 0;
loc_8245C568:
	// lwz r9,48(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 48);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8245c548
	if (!ctx.cr6.eq) goto loc_8245C548;
	// addi r3,r8,8
	ctx.r3.s64 = ctx.r8.s64 + 8;
	// bl 0x82443938
	ctx.lr = 0x8245C57C;
	sub_82443938(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82473330
	ctx.lr = 0x8245C584;
	sub_82473330(ctx, base);
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,528(r31)
	REX_STORE_U32(r31.u32 + 528, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8245D620) {
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
	ctx.lr = 0x8245D628;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r22,r3,24
	r22.s64 = ctx.r3.s64 + 24;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x824d438c
	ctx.lr = 0x8245D648;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// li r23,0
	r23.s64 = 0;
	// ori r30,r11,65535
	r30.u64 = ctx.r11.u64 | 65535;
	// li r28,-1
	r28.s64 = -1;
	// cmplw cr6,r25,r30
	ctx.cr6.compare<uint32_t>(r25.u32, r30.u32, ctx.xer);
	// rlwinm r4,r25,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r23.u32);
	// ble cr6,0x8245d670
	if (!ctx.cr6.gt) goto loc_8245D670;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_8245D670:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// addi r29,r11,7712
	r29.s64 = ctx.r11.s64 + 7712;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8242c3b0
	ctx.lr = 0x8245D68C;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// beq 0x8245d6c8
	if (ctx.cr0.eq) goto loc_8245D6C8;
	// cmplw cr6,r25,r30
	ctx.cr6.compare<uint32_t>(r25.u32, r30.u32, ctx.xer);
	// rlwinm r4,r25,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8245d6a8
	if (!ctx.cr6.gt) goto loc_8245D6A8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_8245D6A8:
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// bl 0x8242c3b0
	ctx.lr = 0x8245D6BC;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// bne 0x8245d6d4
	if (!ctx.cr0.eq) goto loc_8245D6D4;
loc_8245D6C8:
	// lis r26,-32761
	r26.s64 = -2147024896;
	// ori r26,r26,14
	r26.u64 = r26.u64 | 14;
	// b 0x8245d8a8
	goto loc_8245D8A8;
loc_8245D6D4:
	// rlwinm r30,r25,2,0,29
	r30.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x823cd980
	ctx.lr = 0x8245D6E8;
	sub_823CD980(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x823cd980
	ctx.lr = 0x8245D6F8;
	sub_823CD980(ctx, base);
	// li r5,124
	ctx.r5.s64 = 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,60(r31)
	REX_STORE_U32(r31.u32 + 60, r25.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r23,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// bl 0x822d5870
	ctx.lr = 0x8245D710;
	sub_822D5870(ctx, base);
	// rlwinm. r10,r27,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r30,4
	r30.s64 = 4;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// beq 0x8245d728
	if (ctx.cr0.eq) goto loc_8245D728;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_8245D728:
	// rlwinm. r10,r27,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8245d744
	if (ctx.cr0.eq) goto loc_8245D744;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
loc_8245D744:
	// rlwinm. r10,r27,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8245d760
	if (ctx.cr0.eq) goto loc_8245D760;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
loc_8245D760:
	// rlwinm. r10,r27,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8245d77c
	if (ctx.cr0.eq) goto loc_8245D77C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
loc_8245D77C:
	// rlwinm. r10,r27,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8245d794
	if (ctx.cr0.eq) goto loc_8245D794;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,1
	ctx.r9.s64 = 1;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_8245D794:
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r11,-13960
	ctx.r5.s64 = ctx.r11.s64 + -13960;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823cd368
	ctx.lr = 0x8245D7B4;
	sub_823CD368(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8245d8d4
	if (ctx.cr6.eq) goto loc_8245D8D4;
	// rotlwi r29,r10,0
	r29.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r26,r23
	r26.u64 = r23.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8220bed8
	ctx.lr = 0x8245D7E0;
	sub_8220BED8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x8220bd80
	ctx.lr = 0x8245D7EC;
	sub_8220BD80(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823cde90
	ctx.lr = 0x8245D7F4;
	sub_823CDE90(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8245D800:
	// li r27,1
	r27.s64 = 1;
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(r25.u32, 1, ctx.xer);
	// ble cr6,0x8245d8a0
	if (!ctx.cr6.gt) goto loc_8245D8A0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subf r28,r24,r11
	r28.u64 = ctx.r11.u64 - r24.u64;
loc_8245D814:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// blt cr6,0x8245d8a8
	if (ctx.cr6.lt) goto loc_8245D8A8;
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// add r29,r30,r24
	r29.u64 = r30.u64 + r24.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r11,-13864
	ctx.r5.s64 = ctx.r11.s64 + -13864;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823cd368
	ctx.lr = 0x8245D840;
	sub_823CD368(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// stwx r3,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r3.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245d8e0
	if (ctx.cr6.eq) goto loc_8245D8E0;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r26,r23
	r26.u64 = r23.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwzx r4,r28,r29
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + r29.u32);
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwzx r29,r11,r30
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8220bed8
	ctx.lr = 0x8245D87C;
	sub_8220BED8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x8220bd80
	ctx.lr = 0x8245D888;
	sub_8220BD80(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823cde90
	ctx.lr = 0x8245D890;
	sub_823CDE90(ctx, base);
loc_8245D890:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(r27.u32, r25.u32, ctx.xer);
	// blt cr6,0x8245d814
	if (ctx.cr6.lt) goto loc_8245D814;
loc_8245D8A0:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bge cr6,0x8245d8c0
	if (!ctx.cr6.lt) goto loc_8245D8C0;
loc_8245D8A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245d118
	ctx.lr = 0x8245D8B0;
	sub_8245D118(ctx, base);
	// rlwinm r5,r25,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823cd980
	ctx.lr = 0x8245D8C0;
	sub_823CD980(ctx, base);
loc_8245D8C0:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824d437c
	ctx.lr = 0x8245D8C8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822d4ec0
	return;
loc_8245D8D4:
	// lis r26,-32761
	r26.s64 = -2147024896;
	// ori r26,r26,14
	r26.u64 = r26.u64 | 14;
	// b 0x8245d800
	goto loc_8245D800;
loc_8245D8E0:
	// lis r26,-32761
	r26.s64 = -2147024896;
	// ori r26,r26,14
	r26.u64 = r26.u64 | 14;
	// b 0x8245d890
	goto loc_8245D890;
}

DEFINE_REX_FUNC(sub_82465670) {
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
	ctx.lr = 0x82465678;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// li r23,1
	r23.s64 = 1;
	// mr r25,r26
	r25.u64 = r26.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x824656b0
	if (ctx.cr6.eq) goto loc_824656B0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x824656b4
	if (ctx.cr6.eq) goto loc_824656B4;
loc_824656B0:
	// stw r23,76(r31)
	REX_STORE_U32(r31.u32 + 76, r23.u32);
loc_824656B4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x824658e4
	if (!ctx.cr6.gt) goto loc_824658E4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r29,28(r31)
	REX_STORE_U32(r31.u32 + 28, r29.u32);
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// bne cr6,0x824656d4
	if (!ctx.cr6.eq) goto loc_824656D4;
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// addi r10,r11,-22768
	ctx.r10.s64 = ctx.r11.s64 + -22768;
loc_824656D4:
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x824656e8
	if (!ctx.cr6.eq) goto loc_824656E8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82465750
	if (ctx.cr6.eq) goto loc_82465750;
loc_824656E8:
	// stw r29,20(r31)
	REX_STORE_U32(r31.u32 + 20, r29.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// beq cr6,0x82465750
	if (ctx.cr6.eq) goto loc_82465750;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x822ff460
	ctx.lr = 0x82465700;
	sub_822FF460(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf. r7,r8,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82465724
	if (ctx.cr0.eq) goto loc_82465724;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
loc_82465724:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82465750
	if (ctx.cr6.eq) goto loc_82465750;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82465748
	if (!ctx.cr6.gt) goto loc_82465748;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stw r26,68(r31)
	REX_STORE_U32(r31.u32 + 68, r26.u32);
	// b 0x82465750
	goto loc_82465750;
loc_82465748:
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
loc_82465750:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82465778
	if (!ctx.cr6.eq) goto loc_82465778;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x824658d8
	if (ctx.cr6.eq) goto loc_824658D8;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,22
	ctx.r10.u64 = ctx.r11.u32 & 0x3FF;
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// b 0x824658d8
	goto loc_824658D8;
loc_82465778:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x824658d8
	if (ctx.cr6.eq) goto loc_824658D8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x824658d8
	if (!ctx.cr6.eq) goto loc_824658D8;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r26,16(r31)
	REX_STORE_U32(r31.u32 + 16, r26.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// lbz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U8(r29.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824657A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r8,84(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 84);
	// rlwinm r30,r3,8,16,23
	r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF00;
	// lbz r3,1(r9)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824657BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 28);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// lwz r5,84(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 84);
	// or r4,r6,r30
	ctx.r4.u64 = ctx.r6.u64 | r30.u64;
	// rlwinm r30,r4,8,0,23
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r3,2(r7)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + 2);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x824657DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r9,84(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 84);
	// or r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 | r30.u64;
	// rlwinm r30,r8,8,0,23
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r3,3(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824657FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// lwz r29,8(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 8);
	// or r30,r7,r30
	r30.u64 = ctx.r7.u64 | r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// bl 0x822ff460
	ctx.lr = 0x82465814;
	sub_822FF460(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwinm r11,r3,29,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1F;
	// srawi r4,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 3;
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 32);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r5,60(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 60);
	// addze r9,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r9.s64 = temp.s64;
	// lwz r8,52(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 52);
	// subf r7,r11,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r11.u64;
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// rlwinm r6,r9,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r30,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xF;
	// stw r7,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r7.u32);
	// subf r25,r6,r10
	r25.u64 = ctx.r10.u64 - ctx.r6.u64;
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x824658d4
	if (!ctx.cr6.eq) goto loc_824658D4;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(r24.s32, 2, ctx.xer);
	// ble cr6,0x82465878
	if (!ctx.cr6.gt) goto loc_82465878;
	// rlwinm r7,r30,0,5,5
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82465878
	if (ctx.cr6.eq) goto loc_82465878;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
loc_82465878:
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82465890
	if (ctx.cr6.eq) goto loc_82465890;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824658a0
	if (!ctx.cr6.eq) goto loc_824658A0;
loc_82465890:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x824658a0
	if (!ctx.cr6.eq) goto loc_824658A0;
	// stw r26,12(r29)
	REX_STORE_U32(r29.u32 + 12, r26.u32);
	// b 0x824658d8
	goto loc_824658D8;
loc_824658A0:
	// subfic r9,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r9.u64 = static_cast<uint64_t>(32) - ctx.r10.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
	// stw r9,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r9.u32);
	// stw r8,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// stw r7,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r7.u32);
	// stw r23,12(r29)
	REX_STORE_U32(r29.u32 + 12, r23.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec4
	return;
loc_824658D4:
	// stw r26,60(r31)
	REX_STORE_U32(r31.u32 + 60, r26.u32);
loc_824658D8:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823190a0
	ctx.lr = 0x824658E4;
	sub_823190A0(ctx, base);
loc_824658E4:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_82472958) {
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
	ctx.lr = 0x82472960;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82472b68
	if (ctx.cr6.eq) goto loc_82472B68;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82472b68
	if (ctx.cr6.eq) goto loc_82472B68;
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,14
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 14, ctx.xer);
	// blt cr6,0x82472b60
	if (ctx.cr6.lt) goto loc_82472B60;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// clrlwi r18,r7,16
	r18.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r19,r11,-1840
	r19.s64 = ctx.r11.s64 + -1840;
	// addi r21,r10,-1868
	r21.s64 = ctx.r10.s64 + -1868;
	// addi r20,r9,-1896
	r20.s64 = ctx.r9.s64 + -1896;
loc_82472998:
	// cmplw cr6,r4,r18
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r18.u32, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x824729a8
	if (ctx.cr6.lt) goto loc_824729A8;
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_824729A8:
	// lbz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// addic. r7,r11,-14
	ctx.xer.ca = ctx.r11.u32 > 13;
	ctx.r7.s64 = ctx.r11.s64 + -14;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lbzu r10,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// subf r4,r11,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r11.u64;
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// rotlwi r16,r10,2
	r16.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lbzu r29,1(r3)
	ea = 1 + ctx.r3.u32;
	r29.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// lwzx r23,r8,r20
	r23.u64 = REX_LOAD_U32(ctx.r8.u32 + r20.u32);
	// lwzx r22,r8,r21
	r22.u64 = REX_LOAD_U32(ctx.r8.u32 + r21.u32);
	// lwzx r24,r16,r20
	r24.u64 = REX_LOAD_U32(r16.u32 + r20.u32);
	// lbz r6,1(r3)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// lbzu r30,2(r3)
	ea = 2 + ctx.r3.u32;
	r30.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// add r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 + r29.u64;
	// lbz r10,1(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// lbzu r27,2(r3)
	ea = 2 + ctx.r3.u32;
	r27.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// rotlwi r31,r10,8
	r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// lbz r9,1(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// lbzu r25,2(r3)
	ea = 2 + ctx.r3.u32;
	r25.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// rotlwi r26,r9,8
	r26.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r8,1(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// lbzu r11,2(r3)
	ea = 2 + ctx.r3.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r8,r8,r25
	ctx.r8.u64 = ctx.r8.u64 + r25.u64;
	// lbz r9,1(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// lbzu r10,2(r3)
	ea = 2 + ctx.r3.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r9,r26,r27
	ctx.r9.u64 = r26.u64 + r27.u64;
	// lbz r29,1(r3)
	r29.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// rotlwi r28,r29,8
	r28.u64 = __builtin_rotateleft32(r29.u32, 8);
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// add r10,r28,r10
	ctx.r10.u64 = r28.u64 + ctx.r10.u64;
	// lwzx r28,r16,r21
	r28.u64 = REX_LOAD_U32(r16.u32 + r21.u32);
	// sth r11,0(r5)
	REX_STORE_U16(ctx.r5.u32 + 0, ctx.r11.u16);
	// sthu r10,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r5.u32 = ea;
	// sthu r9,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r5.u32 = ea;
	// sthu r8,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r5.u32 = ea;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// beq 0x82472b58
	if (ctx.cr0.eq) goto loc_82472B58;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82472A5C:
	// lbz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mullw r11,r29,r22
	ctx.r11.s64 = int64_t(r29.s32) * int64_t(r22.s32);
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// mullw r30,r9,r23
	r30.s64 = int64_t(ctx.r9.s32) * int64_t(r23.s32);
	// srawi r29,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	r29.s64 = ctx.r7.s32 >> 4;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// srawi r30,r30,8
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xFF) != 0);
	r30.s64 = r30.s32 >> 8;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x82472aa0
	if (!ctx.cr6.gt) goto loc_82472AA0;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x82472aac
	goto loc_82472AAC;
loc_82472AA0:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x82472aac
	if (!ctx.cr6.lt) goto loc_82472AAC;
	// li r11,-32768
	ctx.r11.s64 = -32768;
loc_82472AAC:
	// rlwinm r30,r29,2,26,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0x3C;
	// lwzx r30,r30,r19
	r30.u64 = REX_LOAD_U32(r30.u32 + r19.u32);
	// mullw r6,r30,r6
	ctx.r6.s64 = int64_t(r30.s32) * int64_t(ctx.r6.s32);
	// srawi r6,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 8;
	// cmpwi cr6,r6,16
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 16, ctx.xer);
	// bge cr6,0x82472ac8
	if (!ctx.cr6.lt) goto loc_82472AC8;
	// li r6,16
	ctx.r6.s64 = 16;
loc_82472AC8:
	// rlwinm r30,r7,4,0,27
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// sth r11,0(r5)
	REX_STORE_U16(ctx.r5.u32 + 0, ctx.r11.u16);
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r28.s32);
	// extsb r30,r30
	r30.s64 = r30.s8;
	// mullw r7,r8,r24
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(r24.s32);
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// srawi r10,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 4;
	// srawi r9,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 8;
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmpwi cr6,r7,32767
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 32767, ctx.xer);
	// ble cr6,0x82472b18
	if (!ctx.cr6.gt) goto loc_82472B18;
	// li r7,32767
	ctx.r7.s64 = 32767;
	// b 0x82472b24
	goto loc_82472B24;
loc_82472B18:
	// cmpwi cr6,r7,-32768
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -32768, ctx.xer);
	// bge cr6,0x82472b24
	if (!ctx.cr6.lt) goto loc_82472B24;
	// li r7,-32768
	ctx.r7.s64 = -32768;
loc_82472B24:
	// rlwinm r11,r30,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0x3C;
	// lwzx r10,r11,r19
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r19.u32);
	// mullw r11,r10,r31
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	// srawi r31,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	r31.s64 = ctx.r11.s32 >> 8;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(r31.s32, 16, ctx.xer);
	// bge cr6,0x82472b40
	if (!ctx.cr6.lt) goto loc_82472B40;
	// li r31,16
	r31.s64 = 16;
loc_82472B40:
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// sth r11,0(r5)
	REX_STORE_U16(ctx.r5.u32 + 0, ctx.r11.u16);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// bdnz 0x82472a5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82472A5C;
loc_82472B58:
	// cmplwi cr6,r4,14
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 14, ctx.xer);
	// bge cr6,0x82472998
	if (!ctx.cr6.lt) goto loc_82472998;
loc_82472B60:
	// subf r3,r17,r5
	ctx.r3.u64 = ctx.r5.u64 - r17.u64;
	// b 0x822d4ea8
	return;
loc_82472B68:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d4ea8
	return;
}

DEFINE_REX_FUNC(sub_8247B1D8) {
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
	ctx.lr = 0x8247B1E0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8247b204
	if (!ctx.cr6.eq) goto loc_8247B204;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8247B204:
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// beq cr6,0x8247b234
	if (ctx.cr6.eq) goto loc_8247B234;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8247b234
	if (ctx.cr6.eq) goto loc_8247B234;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8247b240
	if (ctx.cr6.eq) goto loc_8247B240;
loc_8247B234:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec0
	return;
loc_8247B240:
	// li r22,0
	r22.s64 = 0;
	// lwz r30,292(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r22,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r22.u32);
	// addi r5,r30,96
	ctx.r5.s64 = r30.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r26,r31
	r26.u64 = r31.u64;
	// mr r27,r29
	r27.u64 = r29.u64;
	// bl 0x8247a968
	ctx.lr = 0x8247B268;
	sub_8247A968(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247b39c
	if (ctx.cr6.eq) goto loc_8247B39C;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8247B284:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8247b284
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8247B284;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r23,88(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r31,80
	ctx.r11.s64 = r31.s64 + 80;
	// addi r24,r31,60
	r24.s64 = r31.s64 + 60;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r23,68(r31)
	REX_STORE_U32(r31.u32 + 68, r23.u32);
	// lwz r6,12(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r5,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r5.u32);
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// stw r9,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r9.u32);
	// stw r8,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r8.u32);
	// stw r7,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r7.u32);
	// stw r6,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r6.u32);
	// beq cr6,0x8247b2dc
	if (ctx.cr6.eq) goto loc_8247B2DC;
	// addi r11,r31,96
	ctx.r11.s64 = r31.s64 + 96;
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
loc_8247B2DC:
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(r29.s32, 16, ctx.xer);
	// bge cr6,0x8247b2ec
	if (!ctx.cr6.lt) goto loc_8247B2EC;
	// li r27,16
	r27.s64 = 16;
	// b 0x8247b2fc
	goto loc_8247B2FC;
loc_8247B2EC:
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8247b2fc
	if (!ctx.cr6.gt) goto loc_8247B2FC;
	// lis r27,256
	r27.s64 = 16777216;
loc_8247B2FC:
	// lis r11,2047
	ctx.r11.s64 = 134152192;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8247b374
	if (ctx.cr6.lt) goto loc_8247B374;
	// lis r28,2047
	r28.s64 = 134152192;
	// ori r28,r28,65534
	r28.u64 = r28.u64 | 65534;
loc_8247B314:
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(r27.s32, r28.s32, ctx.xer);
	// ble cr6,0x8247b320
	if (!ctx.cr6.gt) goto loc_8247B320;
	// mr r27,r28
	r27.u64 = r28.u64;
loc_8247B320:
	// addi r29,r31,52
	r29.s64 = r31.s64 + 52;
	// stw r27,48(r31)
	REX_STORE_U32(r31.u32 + 48, r27.u32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// stw r28,52(r31)
	REX_STORE_U32(r31.u32 + 52, r28.u32);
	// beq cr6,0x8247b3a8
	if (ctx.cr6.eq) goto loc_8247B3A8;
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// bl 0x8247c528
	ctx.lr = 0x8247B33C;
	sub_8247C528(ctx, base);
	// stw r3,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8247b3a8
	if (!ctx.cr6.eq) goto loc_8247B3A8;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8247b388
	if (ctx.cr6.eq) goto loc_8247B388;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8247B368;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec0
	return;
loc_8247B374:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bgt cr6,0x8247b314
	if (ctx.cr6.gt) goto loc_8247B314;
	// li r28,-1
	r28.s64 = -1;
	// mr r26,r22
	r26.u64 = r22.u64;
	// b 0x8247b320
	goto loc_8247B320;
loc_8247B388:
	// bl 0x8220fda0
	ctx.lr = 0x8247B38C;
	sub_8220FDA0(ctx, base);
	// bl 0x8220fda0
	ctx.lr = 0x8247B390;
	sub_8220FDA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// bl 0x8220ecf0
	ctx.lr = 0x8247B39C;
	sub_8220ECF0(ctx, base);
loc_8247B39C:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec0
	return;
loc_8247B3A8:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x8247b400
	if (ctx.cr6.eq) goto loc_8247B400;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x8247c528
	ctx.lr = 0x8247B3B8;
	sub_8247C528(ctx, base);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8247b400
	if (!ctx.cr6.eq) goto loc_8247B400;
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247b3d4
	if (ctx.cr6.eq) goto loc_8247B3D4;
	// bl 0x82209660
	ctx.lr = 0x8247B3D4;
	sub_82209660(ctx, base);
loc_8247B3D4:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8247b388
	if (ctx.cr6.eq) goto loc_8247B388;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8247B3F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec0
	return;
loc_8247B400:
	// lwz r28,48(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 48);
loc_8247B404:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8247b460
	if (ctx.cr6.lt) goto loc_8247B460;
	// beq cr6,0x8247b588
	if (ctx.cr6.eq) goto loc_8247B588;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8247b420
	if (!ctx.cr6.gt) goto loc_8247B420;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_8247B420:
	// lwsync 
	// subf r10,r28,r11
	ctx.r10.u64 = ctx.r11.u64 - r28.u64;
loc_8247B428:
	// mfmsr r8
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r8.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r9,0,r29
	ea = r29.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8247b44c
	if (!ctx.cr6.eq) goto loc_8247B44C;
	// stwcx. r10,0,r29
	ea = r29.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8247b428
	if (!ctx.cr0.eq) goto loc_8247B428;
	// b 0x8247b454
	goto loc_8247B454;
loc_8247B44C:
	// stwcx. r9,0,r29
	ea = r29.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_8247B454:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8247b404
	if (!ctx.cr6.eq) goto loc_8247B404;
loc_8247B460:
	// rlwinm r30,r28,4,0,27
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// bl 0x8247aa28
	ctx.lr = 0x8247B478;
	sub_8247AA28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8247b488
	if (!ctx.cr6.eq) goto loc_8247B488;
	// stw r22,0(r29)
	REX_STORE_U32(r29.u32 + 0, r22.u32);
	// b 0x8247b588
	goto loc_8247B588;
loc_8247B488:
	// addi r11,r31,56
	ctx.r11.s64 = r31.s64 + 56;
loc_8247B48C:
	// mfmsr r8
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r8.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r28,r10
	ctx.r9.u64 = r28.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8247b48c
	if (!ctx.cr0.eq) goto loc_8247B48C;
	// addi r7,r28,-1
	ctx.r7.s64 = r28.s64 + -1;
	// add r9,r30,r3
	ctx.r9.u64 = r30.u64 + ctx.r3.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8247b524
	if (ctx.cr6.eq) goto loc_8247B524;
loc_8247B4BC:
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// rldicr r8,r9,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
loc_8247B4C4:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwsync 
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrldi r10,r5,33
	ctx.r10.u64 = ctx.r5.u64 & 0x7FFFFFFF;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_8247B4E4:
	// mfmsr r3
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r3.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r4,0,r31
	ea = r31.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r4.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r4,r11
	ctx.cr6.compare<int64_t>(ctx.r4.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x8247b508
	if (!ctx.cr6.eq) goto loc_8247B508;
	// stdcx. r10,0,r31
	ea = r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r10.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8247b4e4
	if (!ctx.cr0.eq) goto loc_8247B4E4;
	// b 0x8247b510
	goto loc_8247B510;
loc_8247B508:
	// stdcx. r4,0,r31
	ea = r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r4.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_8247B510:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpd cr6,r4,r11
	ctx.cr6.compare<int64_t>(ctx.r4.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x8247b4c4
	if (!ctx.cr6.eq) goto loc_8247B4C4;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x8247b4bc
	if (!ctx.cr0.eq) goto loc_8247B4BC;
loc_8247B524:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r30,r9,-16
	r30.s64 = ctx.r9.s64 + -16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8247b580
	if (ctx.cr6.eq) goto loc_8247B580;
	// addi r11,r31,24
	ctx.r11.s64 = r31.s64 + 24;
loc_8247B538:
	// mfmsr r8
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r8.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r28,r10
	ctx.r9.u64 = r28.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8247b538
	if (!ctx.cr0.eq) goto loc_8247B538;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bge cr6,0x8247b580
	if (!ctx.cr6.lt) goto loc_8247B580;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8247b580
	if (!ctx.cr6.gt) goto loc_8247B580;
	// not r4,r10
	ctx.r4.u64 = ~ctx.r10.u64;
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x8247b578
	if (!ctx.cr6.gt) goto loc_8247B578;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
loc_8247B578:
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x8247c540
	ctx.lr = 0x8247B580;
	sub_8247C540(ctx, base);
loc_8247B580:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8247b5d4
	if (!ctx.cr6.eq) goto loc_8247B5D4;
loc_8247B588:
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247b598
	if (ctx.cr6.eq) goto loc_8247B598;
	// bl 0x82209660
	ctx.lr = 0x8247B598;
	sub_82209660(ctx, base);
loc_8247B598:
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247b5a8
	if (ctx.cr6.eq) goto loc_8247B5A8;
	// bl 0x82209660
	ctx.lr = 0x8247B5A8;
	sub_82209660(ctx, base);
loc_8247B5A8:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8247b388
	if (ctx.cr6.eq) goto loc_8247B388;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8247B5C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec0
	return;
loc_8247B5D4:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8247b5ec
	if (ctx.cr6.eq) goto loc_8247B5EC;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
loc_8247B5EC:
	// stw r22,0(r30)
	REX_STORE_U32(r30.u32 + 0, r22.u32);
	// lis r11,19558
	ctx.r11.s64 = 1281753088;
	// stw r22,4(r30)
	REX_STORE_U32(r30.u32 + 4, r22.u32);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// ori r10,r11,20853
	ctx.r10.u64 = ctx.r11.u64 | 20853;
	// stw r22,20(r31)
	REX_STORE_U32(r31.u32 + 20, r22.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r22,12(r31)
	REX_STORE_U32(r31.u32 + 12, r22.u32);
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// lwsync 
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_824A7770) {
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
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// li r9,1120
	ctx.r9.s64 = 1120;
	// vspltish v1,6
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x6)));
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// vsrh v0,v0,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_srlv_epi16(a, shift));
	}
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r3,r4,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r4.u64;
	// lvx128 v13,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// vaddshs v2,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// bl 0x824a6790
	ctx.lr = 0x824A77B0;
	sub_824A6790(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824A7D00) {
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
	// bl 0x822d4e8c
	ctx.lr = 0x824A7D08;
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
	// vspltish v4,1
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_set1_epi16(short(0x1)));
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
	// vaddshs v3,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
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
	// bne cr6,0x824a7eb8
	if (!ctx.cr6.eq) goto loc_824A7EB8;
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
	// lvx128 v62,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v9,v62,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v59,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v7,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v5,v58,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v8,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v6,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x824a80a0
	if (!ctx.cr6.gt) goto loc_824A80A0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_824A7DCC:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vor v1,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vor v8,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// vor v10,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vor v31,v7,v7
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// vor v7,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// lvx128 v57,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v9,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v5,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v29,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// vperm128 v6,v56,v57,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vslh v27,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// vslh v25,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v29,v5
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vmrglb v24,v0,v6
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v8,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v18,v26,v27
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v21,v28,v10
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v17,v25,v9
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v20,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v7,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v5,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)v24.u8));
	// vadduhm v14,v23,v30
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vslh v16,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v30,v21,v22
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v29,v19,v20
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v28,v17,v18
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vslh v27,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v25,v1,v16
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vsubshs v23,v31,v15
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vadduhm v24,v30,v14
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vadduhm v22,v28,v29
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vsubshs v21,v0,v27
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vsubshs v20,v0,v26
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vadduhm v19,v24,v3
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v18,v22,v3
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v17,v25,v21
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vadduhm v16,v23,v20
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v15,v19,v17
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v14,v18,v16
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vsrah v1,v15,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v14,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v1,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v31,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r6,48
	ctx.r6.s64 = ctx.r6.s64 + 48;
	// blt cr6,0x824a7dcc
	if (ctx.cr6.lt) goto loc_824A7DCC;
	// b 0x824a80a0
	goto loc_824A80A0;
loc_824A7EB8:
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
	// lvrx128 v53,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v54,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v8,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvrx128 v51,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lvrx128 v49,r3,r9
	temp.u32 = ctx.r3.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v31,v50,v51
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// lvlx128 v48,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v9,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vor128 v5,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v7,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v8,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v30,v46,v47
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v1,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v31,v0,v30
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v30,v0,v30
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v1,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x824a80a0
	if (!ctx.cr6.gt) goto loc_824A80A0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r29,32
	ctx.r10.s64 = r29.s64 + 32;
	// li r30,-32
	r30.s64 = -32;
	// li r31,-16
	r31.s64 = -16;
loc_824A7F44:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vor v29,v7,v7
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vor v28,v6,v6
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// vor v7,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v10,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)v31.u8));
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// vor v6,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v9,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)v30.u8));
	// lvx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v42,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// lvsl v2,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v30,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v41,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v31,v43,v63,v2
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vslh v25,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v27,v5,v5
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// lvsl v5,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
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
	// vperm128 v21,v63,v41,v5
	simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vslh v22,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v20,v0,v31
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v17,v26,v30
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vmrghb v31,v0,v31
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v25,v10
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v19,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v7,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v26,v23,v24
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vadduhm v25,v22,v9
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vor v5,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vslh v15,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v6,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v8,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vmrghb v1,v0,v21
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v22,v18,v19
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vor v30,v20,v20
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_load_si128((simde__m128i*)v20.u8));
	// vslh v24,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v21,v16,v17
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v20,v14,v15
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vadduhm v19,v25,v26
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vslh v23,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v29,v29,v24
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vadduhm v26,v21,v22
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v24,v19,v20
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vsubshs v25,v28,v23
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vslh v15,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v21,v17,v18
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vadduhm v20,v16,v8
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v23,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v5,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v19,v0,v15
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vsubshs v18,v0,v14
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vadduhm v17,v26,v3
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v28,v22,v23
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vslh v15,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v26,v20,v21
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vadduhm v16,v24,v3
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v24,v29,v19
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v23,v25,v18
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vsubshs v22,v0,v15
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vsubshs v21,v27,v14
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vadduhm v20,v26,v28
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v19,v17,v24
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vadduhm v18,v16,v23
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v17,v21,v22
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v16,v20,v3
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vsrah v15,v19,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v14,v18,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v29,v16,v17
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// stvx128 v15,r10,r30
	ea = (ctx.r10.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v14,r10,r31
	ea = (ctx.r10.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v28,v29,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v28,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// vor128 v2,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// blt cr6,0x824a7f44
	if (ctx.cr6.lt) goto loc_824A7F44;
loc_824A80A0:
	// li r5,0
	ctx.r5.s64 = 0;
	// vspltish v1,7
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x7)));
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824a7160
	ctx.lr = 0x824A80B4;
	sub_824A7160(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_824B89E8) {
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
	// bl 0x822d4e74
	ctx.lr = 0x824B89F0;
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
	// blt cr6,0x824b8a68
	if (ctx.cr6.lt) goto loc_824B8A68;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x8235f5b0
	ctx.lr = 0x824B8A60;
	sub_8235F5B0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x824b8ac8
	goto loc_824B8AC8;
loc_824B8A68:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x824b8ac4
	if (!ctx.cr6.gt) goto loc_824B8AC4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_824B8A74:
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
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r5,r5,25,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// lbzx r3,r10,r4
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// lbzx r23,r26,r3
	r23.u64 = REX_LOAD_U8(r26.u32 + ctx.r3.u32);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// or r9,r23,r9
	ctx.r9.u64 = r23.u64 | ctx.r9.u64;
	// sthx r8,r3,r30
	REX_STORE_U16(ctx.r3.u32 + r30.u32, ctx.r8.u16);
	// bdnz 0x824b8a74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B8A74;
loc_824B8AC4:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_824B8AC8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x824b8b34
	if (!ctx.cr6.eq) goto loc_824B8B34;
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
	// b 0x824b8b50
	goto loc_824B8B50;
loc_824B8B34:
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
	// bl 0x824a64e0
	ctx.lr = 0x824B8B50;
	sub_824A64E0(ctx, base);
loc_824B8B50:
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
	// blt cr6,0x824b8bac
	if (ctx.cr6.lt) goto loc_824B8BAC;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8235f5b0
	ctx.lr = 0x824B8BA4;
	sub_8235F5B0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x824b8c0c
	goto loc_824B8C0C;
loc_824B8BAC:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x824b8c08
	if (!ctx.cr6.gt) goto loc_824B8C08;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_824B8BB8:
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
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r5,r5,25,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// lbzx r3,r10,r4
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// lbzx r23,r26,r3
	r23.u64 = REX_LOAD_U8(r26.u32 + ctx.r3.u32);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// or r9,r23,r9
	ctx.r9.u64 = r23.u64 | ctx.r9.u64;
	// sthx r8,r3,r30
	REX_STORE_U16(ctx.r3.u32 + r30.u32, ctx.r8.u16);
	// bdnz 0x824b8bb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B8BB8;
loc_824B8C08:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_824B8C0C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x824b8c78
	if (!ctx.cr6.eq) goto loc_824B8C78;
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
	// b 0x824b8c94
	goto loc_824B8C94;
loc_824B8C78:
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
	// bl 0x824a64e0
	ctx.lr = 0x824B8C94;
	sub_824A64E0(ctx, base);
loc_824B8C94:
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
	// blt cr6,0x824b8cf0
	if (ctx.cr6.lt) goto loc_824B8CF0;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8235f5b0
	ctx.lr = 0x824B8CE8;
	sub_8235F5B0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x824b8d50
	goto loc_824B8D50;
loc_824B8CF0:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x824b8d4c
	if (!ctx.cr6.gt) goto loc_824B8D4C;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_824B8CFC:
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
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r5,r5,25,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// lbzx r3,r10,r4
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// lbzx r29,r26,r3
	r29.u64 = REX_LOAD_U8(r26.u32 + ctx.r3.u32);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// or r9,r29,r9
	ctx.r9.u64 = r29.u64 | ctx.r9.u64;
	// sthx r8,r3,r30
	REX_STORE_U16(ctx.r3.u32 + r30.u32, ctx.r8.u16);
	// bdnz 0x824b8cfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B8CFC;
loc_824B8D4C:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_824B8D50:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r27,31
	ctx.r10.u64 = r27.u32 & 0x1;
	// bne cr6,0x824b8dc0
	if (!ctx.cr6.eq) goto loc_824B8DC0;
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
	// b 0x822d4ec4
	return;
loc_824B8DC0:
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
	// bl 0x824a64e0
	ctx.lr = 0x824B8DD8;
	sub_824A64E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec4
	return;
}

