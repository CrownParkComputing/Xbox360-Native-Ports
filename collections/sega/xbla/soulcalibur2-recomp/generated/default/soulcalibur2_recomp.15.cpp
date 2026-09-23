#include "soulcalibur2_funcs.15.h"

DEFINE_REX_FUNC(sub_820E0778) {
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
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f13,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// bl 0x820e00c0
	ctx.lr = 0x820E07DC;
	sub_820E00C0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
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

DEFINE_REX_FUNC(sub_820EA090) {
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
	// bl 0x822d4e88
	ctx.lr = 0x820EA098;
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f29.u64);
	// stfd f30,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,-28232
	r31.s64 = ctx.r11.s64 + -28232;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lfs f29,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f29.f64 = double(temp.f32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f31,f29
	f31.f64 = f29.f64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// fmr f30,f29
	f30.f64 = f29.f64;
	// bl 0x820f2850
	ctx.lr = 0x820EA0D8;
	sub_820F2850(ctx, base);
	// cmplwi cr6,r3,7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 7, ctx.xer);
	// bgt cr6,0x820ea1c0
	if (ctx.cr6.gt) goto loc_820EA1C0;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820ea114
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820EA114;
	// bdzf 4*cr6+eq,0x820ea130
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820EA130;
	// bdzf 4*cr6+eq,0x820ea13c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820EA13C;
	// bdzf 4*cr6+eq,0x820ea14c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820EA14C;
	// bdzf 4*cr6+eq,0x820ea15c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820EA15C;
	// bdzf 4*cr6+eq,0x820ea16c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820EA16C;
	// bne cr6,0x820ea17c
	if (!ctx.cr6.eq) goto loc_820EA17C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82202540
	ctx.lr = 0x820EA110;
	sub_82202540(ctx, base);
	// b 0x820ea188
	goto loc_820EA188;
loc_820EA114:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
loc_820EA11C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x820EA12C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820ea188
	goto loc_820EA188;
loc_820EA130:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x820ea11c
	goto loc_820EA11C;
loc_820EA13C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82202540
	ctx.lr = 0x820EA148;
	sub_82202540(ctx, base);
	// b 0x820ea188
	goto loc_820EA188;
loc_820EA14C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82202540
	ctx.lr = 0x820EA158;
	sub_82202540(ctx, base);
	// b 0x820ea188
	goto loc_820EA188;
loc_820EA15C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82202540
	ctx.lr = 0x820EA168;
	sub_82202540(ctx, base);
	// b 0x820ea188
	goto loc_820EA188;
loc_820EA16C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82202540
	ctx.lr = 0x820EA178;
	sub_82202540(ctx, base);
	// b 0x820ea188
	goto loc_820EA188;
loc_820EA17C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82202540
	ctx.lr = 0x820EA188;
	sub_82202540(ctx, base);
loc_820EA188:
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x820ea1c0
	if (ctx.cr0.eq) goto loc_820EA1C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820EA1A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820EA1BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
loc_820EA1C0:
	// lfs f13,10540(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 10540);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,10532(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 10532);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f30,f13
	ctx.f10.f64 = double(float(f30.f64 - ctx.f13.f64));
	// lfs f11,10540(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 10540);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f31,f0
	ctx.f12.f64 = double(float(f31.f64 - ctx.f0.f64));
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f11,10532(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 10532);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmsubs f0,f0,f10,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, -ctx.f13.f64)));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bgt cr6,0x820ea1f8
	if (ctx.cr6.gt) goto loc_820EA1F8;
	// li r3,1
	ctx.r3.s64 = 1;
loc_820EA1F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_820F3B30) {
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
	// bl 0x820f3890
	ctx.lr = 0x820F3B44;
	sub_820F3890(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fctiwz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
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
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// bl 0x820f37a8
	ctx.lr = 0x820F3B78;
	sub_820F37A8(ctx, base);
	// subf r10,r6,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r6.u64;
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
	// lwz r10,20(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lha r10,88(r10)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 88));
	// bne cr6,0x820f3bc4
	if (!ctx.cr6.eq) goto loc_820F3BC4;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// mulli r10,r10,448
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(448));
	// addi r11,r11,-8136
	ctx.r11.s64 = ctx.r11.s64 + -8136;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x820F3BC0;
	sub_822D4FA0(ctx, base);
	// b 0x820f3d24
	goto loc_820F3D24;
loc_820F3BC4:
	// lwz r8,16(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r9,r9,-8136
	ctx.r9.s64 = ctx.r9.s64 + -8136;
	// lwz r10,80(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 80);
	// mulli r11,r11,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(28));
	// lfs f13,2000(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r10,51
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 51, ctx.xer);
	// blt cr6,0x820f3c00
	if (ctx.cr6.lt) goto loc_820F3C00;
	// cmplwi cr6,r10,53
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 53, ctx.xer);
	// bgt cr6,0x820f3c00
	if (ctx.cr6.gt) goto loc_820F3C00;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_820F3C00:
	// lfs f12,-28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -28);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f10,f11,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, ctx.f12.f64)));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x820f3c28
	if (ctx.cr6.gt) goto loc_820F3C28;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_820F3C28:
	// stfs f12,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f12,-24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fmadds f12,f10,f11,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, ctx.f12.f64)));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x820f3c4c
	if (ctx.cr6.gt) goto loc_820F3C4C;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_820F3C4C:
	// stfs f12,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,-20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fmadds f12,f10,f11,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, ctx.f12.f64)));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x820f3c70
	if (ctx.cr6.gt) goto loc_820F3C70;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_820F3C70:
	// stfs f12,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f12,-16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fmadds f12,f10,f11,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, ctx.f12.f64)));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x820f3c94
	if (ctx.cr6.gt) goto loc_820F3C94;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_820F3C94:
	// stfs f12,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f12,-12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fmadds f12,f10,f11,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, ctx.f12.f64)));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x820f3cb8
	if (ctx.cr6.gt) goto loc_820F3CB8;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_820F3CB8:
	// stfs f12,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f12,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fmadds f12,f10,f11,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, ctx.f12.f64)));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x820f3cdc
	if (ctx.cr6.gt) goto loc_820F3CDC;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_820F3CDC:
	// stfs f12,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lfs f12,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fmadds f12,f10,f11,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, ctx.f12.f64)));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x820f3d00
	if (ctx.cr6.gt) goto loc_820F3D00;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_820F3D00:
	// stfs f13,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lwz r11,16(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,51
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 51, ctx.xer);
	// blt cr6,0x820f3d24
	if (ctx.cr6.lt) goto loc_820F3D24;
	// cmplwi cr6,r11,52
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 52, ctx.xer);
	// bgt cr6,0x820f3d24
	if (ctx.cr6.gt) goto loc_820F3D24;
	// stfs f0,20(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f0,24(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 24, temp.u32);
loc_820F3D24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821007C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// addi r9,r11,22576
	ctx.r9.s64 = ctx.r11.s64 + 22576;
	// lwz r10,22576(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 22576);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821007e0
	if (!ctx.cr6.eq) goto loc_821007E0;
loc_821007D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821007E0:
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8210081c
	if (!ctx.cr6.gt) goto loc_8210081C;
	// b 0x82100810
	goto loc_82100810;
loc_821007F4:
	// lwz r9,80(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r9,80
	ctx.r11.s64 = ctx.r9.s64 + 80;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// bgt cr6,0x821007d8
	if (ctx.cr6.gt) goto loc_821007D8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821007d8
	if (ctx.cr6.eq) goto loc_821007D8;
loc_82100810:
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x821007f4
	if (!ctx.cr6.eq) goto loc_821007F4;
loc_8210081C:
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,-1024
	ctx.r11.s64 = ctx.r11.s64 + -1024;
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

DEFINE_REX_FUNC(sub_82104C60) {
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
	ctx.lr = 0x82104C68;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r29,r11,22576
	r29.s64 = ctx.r11.s64 + 22576;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lwz r11,152(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 152);
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r28,32
	ctx.cr6.compare<int32_t>(r28.s32, 32, ctx.xer);
	// stw r11,152(r29)
	REX_STORE_U32(r29.u32 + 152, ctx.r11.u32);
	// blt cr6,0x82104ca4
	if (ctx.cr6.lt) goto loc_82104CA4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82104f2c
	goto loc_82104F2C;
loc_82104CA4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,27112
	ctx.r4.s64 = ctx.r11.s64 + 27112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d55f8
	ctx.lr = 0x82104CB8;
	sub_822D55F8(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r9,r11,2368
	ctx.r9.s64 = ctx.r11.s64 + 2368;
	// addi r8,r10,18984
	ctx.r8.s64 = ctx.r10.s64 + 18984;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// neg r5,r28
	ctx.r5.s64 = static_cast<int64_t>(-r28.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x82104CE0;
	sub_821F7D50(ctx, base);
	// mr. r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r27,0
	r27.s64 = 0;
	// beq 0x82104cfc
	if (ctx.cr0.eq) goto loc_82104CFC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,31764
	ctx.r11.s64 = ctx.r11.s64 + 31764;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x82104d00
	goto loc_82104D00;
loc_82104CFC:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_82104D00:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r28,112(r10)
	REX_STORE_U32(ctx.r10.u32 + 112, r28.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r8,r28,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r29,208
	ctx.r7.s64 = r29.s64 + 208;
	// addi r31,r10,80
	r31.s64 = ctx.r10.s64 + 80;
	// lfs f0,-8492(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8492);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2340(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2340);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,176(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 176, temp.u32);
	// stfs f13,180(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 180, temp.u32);
	// stwx r31,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, r31.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r11,160(r10)
	REX_STORE_U32(ctx.r10.u32 + 160, ctx.r11.u32);
	// stw r10,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,160(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 160);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82104d50
	if (ctx.cr6.eq) goto loc_82104D50;
	// stw r10,164(r11)
	REX_STORE_U32(ctx.r11.u32 + 164, ctx.r10.u32);
	// stw r27,188(r11)
	REX_STORE_U32(ctx.r11.u32 + 188, r27.u32);
loc_82104D50:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,124(r31)
	REX_STORE_U32(r31.u32 + 124, r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r27,8(r31)
	REX_STORE_U32(r31.u32 + 8, r27.u32);
	// stw r27,20(r31)
	REX_STORE_U32(r31.u32 + 20, r27.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r27,128(r31)
	REX_STORE_U32(r31.u32 + 128, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stw r27,108(r31)
	REX_STORE_U32(r31.u32 + 108, r27.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stw r27,12(r31)
	REX_STORE_U32(r31.u32 + 12, r27.u32);
	// bl 0x82102a80
	ctx.lr = 0x82104D8C;
	sub_82102A80(ctx, base);
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 136);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 120);
	// beq 0x82104db0
	if (ctx.cr0.eq) goto loc_82104DB0;
	// lwz r10,152(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 152);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82104db0
	if (ctx.cr6.eq) goto loc_82104DB0;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// b 0x82104db8
	goto loc_82104DB8;
loc_82104DB0:
	// stw r11,152(r30)
	REX_STORE_U32(r30.u32 + 152, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_82104DB8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82104dc8
	if (ctx.cr6.eq) goto loc_82104DC8;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// stw r26,160(r11)
	REX_STORE_U32(ctx.r11.u32 + 160, r26.u32);
loc_82104DC8:
	// lwz r11,156(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82104de8
	if (ctx.cr6.eq) goto loc_82104DE8;
	// lwz r10,136(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 136);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82104de8
	if (ctx.cr0.eq) goto loc_82104DE8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82104DE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82104DE8:
	// lwz r11,164(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82104e0c
	if (ctx.cr6.eq) goto loc_82104E0C;
	// lwz r10,136(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 136);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82104e0c
	if (ctx.cr0.eq) goto loc_82104E0C;
	// lwz r3,160(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82104E0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82104E0C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82100e10
	ctx.lr = 0x82104E18;
	sub_82100E10(ctx, base);
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 136);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82104e4c
	if (ctx.cr0.eq) goto loc_82104E4C;
	// lwz r11,152(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 152);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82104e4c
	if (!ctx.cr6.gt) goto loc_82104E4C;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82104e4c
	if (ctx.cr6.eq) goto loc_82104E4C;
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82104E4C:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// addi r10,r29,8
	ctx.r10.s64 = r29.s64 + 8;
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// stw r10,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// lwz r10,132(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// stw r10,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// stw r27,84(r31)
	REX_STORE_U32(r31.u32 + 84, r27.u32);
	// lhz r10,140(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 140);
	// stw r10,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// lhz r10,142(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 142);
	// stw r10,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r10.u32);
	// lhz r10,144(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 144);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f13,88(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// lhz r10,146(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 146);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// beq cr6,0x82104ee4
	if (ctx.cr6.eq) goto loc_82104EE4;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 4);
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 8);
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r10,12(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 12);
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
loc_82104EE4:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r10,136(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82104f08
	if (!ctx.cr0.eq) goto loc_82104F08;
	// lwz r10,120(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r10,136(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// stw r10,136(r11)
	REX_STORE_U32(ctx.r11.u32 + 136, ctx.r10.u32);
loc_82104F08:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x82104f18
	if (ctx.cr6.eq) goto loc_82104F18;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// stw r24,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r24.u32);
loc_82104F18:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm r11,r11,3,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// stw r11,192(r29)
	REX_STORE_U32(r29.u32 + 192, ctx.r11.u32);
loc_82104F2C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82113F10) {
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
	// bl 0x821afce8
	ctx.lr = 0x82113F2C;
	sub_821AFCE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82113fb8
	if (!ctx.cr0.eq) goto loc_82113FB8;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lbz r10,180(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 180);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// beq 0x82113f6c
	if (ctx.cr0.eq) goto loc_82113F6C;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// ble cr6,0x82113f6c
	if (!ctx.cr6.gt) goto loc_82113F6C;
	// lhz r10,182(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 182);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// stb r11,180(r31)
	REX_STORE_U8(r31.u32 + 180, ctx.r11.u8);
	// bne cr6,0x82113f6c
	if (!ctx.cr6.eq) goto loc_82113F6C;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
loc_82113F6C:
	// lhz r11,182(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 182);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82113fb0
	if (ctx.cr6.lt) goto loc_82113FB0;
	// beq cr6,0x82113fa4
	if (ctx.cr6.eq) goto loc_82113FA4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82113f98
	if (ctx.cr6.lt) goto loc_82113F98;
	// bne cr6,0x82113fb8
	if (!ctx.cr6.eq) goto loc_82113FB8;
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,23957(r10)
	REX_STORE_U8(ctx.r10.u32 + 23957, ctx.r11.u8);
	// b 0x82113fb8
	goto loc_82113FB8;
loc_82113F98:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821131f8
	ctx.lr = 0x82113FA0;
	sub_821131F8(ctx, base);
	// b 0x82113fb8
	goto loc_82113FB8;
loc_82113FA4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82113c68
	ctx.lr = 0x82113FAC;
	sub_82113C68(ctx, base);
	// b 0x82113fb8
	goto loc_82113FB8;
loc_82113FB0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82113058
	ctx.lr = 0x82113FB8;
	sub_82113058(ctx, base);
loc_82113FB8:
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

DEFINE_REX_FUNC(sub_82116E28) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r10,r10,13128
	ctx.r10.s64 = ctx.r10.s64 + 13128;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// lfs f0,1840(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,72(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,72(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82117350) {
	REX_FUNC_PROLOGUE();
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
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x822d4f30
	ctx.lr = 0x82117364;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lfs f13,144(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f31,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f31.f64 = double(temp.f32);
	// lfs f28,1840(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1840);
	f28.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// stfs f13,208(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// lfs f0,31844(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 31844);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f30.f64 = double(temp.f32);
	// fmadds f1,f28,f0,f13
	ctx.f1.f64 = double(float(std::fma(f28.f64, ctx.f0.f64, ctx.f13.f64)));
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x82204ae0
	ctx.lr = 0x821173A8;
	sub_82204AE0(ctx, base);
	// stfs f1,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// lfs f0,31840(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 31840);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f28,f0,f13
	ctx.f1.f64 = double(float(std::fma(f28.f64, ctx.f0.f64, ctx.f13.f64)));
	// bl 0x82204ae0
	ctx.lr = 0x821173C8;
	sub_82204AE0(ctx, base);
	// stfs f1,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// fadds f0,f1,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 + f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,2012(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	f30.f64 = double(temp.f32);
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * f30.f64));
	// bl 0x820e0028
	ctx.lr = 0x821173E0;
	sub_820E0028(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,144(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// lfs f26,15632(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15632);
	f26.f64 = double(temp.f32);
	// fmadds f13,f13,f0,f26
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, f26.f64)));
	// lfs f0,16036(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16036);
	ctx.f0.f64 = double(temp.f32);
	// lfs f29,31836(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 31836);
	f29.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 172, temp.u32);
	// fmuls f11,f12,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 * f29.f64));
	// stfs f11,180(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 180, temp.u32);
	// lfs f27,17064(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 17064);
	f27.f64 = double(temp.f32);
	// fmuls f0,f1,f13
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 176, temp.u32);
	// fmadds f1,f12,f30,f27
	ctx.f1.f64 = double(float(std::fma(ctx.f12.f64, f30.f64, f27.f64)));
	// bl 0x820e0028
	ctx.lr = 0x82117434;
	sub_820E0028(ctx, base);
	// fadds f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + f31.f64));
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// stfs f0,192(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 192, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 184, temp.u32);
	// beq cr6,0x82117464
	if (ctx.cr6.eq) goto loc_82117464;
	// lfs f0,204(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * f27.f64));
	// lfs f13,212(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f30,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f30.f64, ctx.f0.f64)));
	// stfs f0,204(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 204, temp.u32);
loc_82117464:
	// lwz r10,152(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 152);
	// lfs f0,176(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8211747c
	if (!ctx.cr6.eq) goto loc_8211747C;
	// fsubs f0,f26,f0
	ctx.f0.f64 = double(float(f26.f64 - ctx.f0.f64));
	// b 0x82117480
	goto loc_82117480;
loc_8211747C:
	// fadds f0,f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f26.f64));
loc_82117480:
	// stfs f0,212(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 212, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82117490
	if (!ctx.cr6.eq) goto loc_82117490;
	// stfs f0,204(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 204, temp.u32);
loc_82117490:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f13,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// lfs f0,28428(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28428);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f28,f0,f13
	ctx.f1.f64 = double(float(std::fma(f28.f64, ctx.f0.f64, ctx.f13.f64)));
	// bl 0x82204b00
	ctx.lr = 0x821174B0;
	sub_82204B00(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// stfs f1,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 188, temp.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x822d4f7c
	ctx.lr = 0x821174CC;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8211E570) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,136
	r30.s64 = ctx.r3.s64 + 136;
	// lis r4,255
	ctx.r4.s64 = 16711680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// bl 0x821e8450
	ctx.lr = 0x8211E59C;
	sub_821E8450(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e01b0
	ctx.lr = 0x8211E5A4;
	sub_820E01B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,304(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 304);
	ctx.f0.f64 = double(temp.f32);
	// lis r4,-1
	ctx.r4.s64 = -65536;
	// lfs f13,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f12,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f10,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f6,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f5,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f1,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f4.f64 = double(temp.f32);
	// ori r4,r4,32
	ctx.r4.u64 = ctx.r4.u64 | 32;
	// lfs f3,144(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f1,156(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f4,144(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f3,152(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f5,140(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 140);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,148(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f8,120(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f7,128(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f6,132(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x821e8878
	ctx.lr = 0x8211E64C;
	sub_821E8878(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r31,284
	ctx.r5.s64 = r31.s64 + 284;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,16228(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16228);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e1cc0
	ctx.lr = 0x8211E660;
	sub_820E1CC0(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e8820
	ctx.lr = 0x8211E678;
	sub_821E8820(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

DEFINE_REX_FUNC(sub_82122180) {
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
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e68
	ctx.lr = 0x82122188;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x822d4f34
	ctx.lr = 0x82122190;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 9, ctx.xer);
	// bne cr6,0x821221c4
	if (!ctx.cr6.eq) goto loc_821221C4;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,30520
	ctx.r11.s64 = ctx.r11.s64 + 30520;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82118778
	ctx.lr = 0x821221C0;
	sub_82118778(ctx, base);
	// b 0x82122494
	goto loc_82122494;
loc_821221C4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// cmpwi cr6,r31,11
	ctx.cr6.compare<int32_t>(r31.s32, 11, ctx.xer);
	// lfs f31,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// lfs f30,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	f30.f64 = double(temp.f32);
	// lfs f28,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f28.f64 = double(temp.f32);
	// bne cr6,0x82122234
	if (!ctx.cr6.eq) goto loc_82122234;
	// lfs f0,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// bge cr6,0x8212221c
	if (!ctx.cr6.lt) goto loc_8212221C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r8,8(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r7,12(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r29,r1,144
	r29.s64 = ctx.r1.s64 + 144;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// stfs f28,148(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
loc_8212221C:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r11,r11,30520
	ctx.r11.s64 = ctx.r11.s64 + 30520;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82118268
	ctx.lr = 0x82122230;
	sub_82118268(ctx, base);
	// b 0x82122270
	goto loc_82122270;
loc_82122234:
	// cmpwi cr6,r31,10
	ctx.cr6.compare<int32_t>(r31.s32, 10, ctx.xer);
	// bne cr6,0x82122270
	if (!ctx.cr6.eq) goto loc_82122270;
	// bl 0x821fedc8
	ctx.lr = 0x82122240;
	sub_821FEDC8(ctx, base);
	// fsubs f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f30.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f29,2012(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	f29.f64 = double(temp.f32);
	// fmadds f0,f0,f29,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, ctx.f13.f64)));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// bl 0x821fedc8
	ctx.lr = 0x8212225C;
	sub_821FEDC8(ctx, base);
	// fsubs f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f30.f64));
	// lfs f13,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmr f27,f31
	f27.f64 = f31.f64;
	// fmadds f0,f0,f29,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, ctx.f13.f64)));
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
loc_82122270:
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// addi r25,r11,29880
	r25.s64 = ctx.r11.s64 + 29880;
	// lwz r11,-60(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + -60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82122290
	if (!ctx.cr6.eq) goto loc_82122290;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82122090
	ctx.lr = 0x8212228C;
	sub_82122090(ctx, base);
	// b 0x82122494
	goto loc_82122494;
loc_82122290:
	// lbz r10,203(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 203);
	// addi r30,r11,80
	r30.s64 = ctx.r11.s64 + 80;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82122494
	if (ctx.cr0.eq) goto loc_82122494;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// rlwinm r28,r28,2,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,16232(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16232);
	ctx.f0.f64 = double(temp.f32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r22,1
	r22.s64 = 1;
	// lfs f13,-30248(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -30248);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2376(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2376);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,16336(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16336);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r28,r10
	temp.u32 = REX_LOAD_U32(r28.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f29,f11,f27
	f29.f64 = double(float(ctx.f11.f64 * f27.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x821fedc8
	ctx.lr = 0x8212230C;
	sub_821FEDC8(ctx, base);
	// fsubs f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f30.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x821fedc8
	ctx.lr = 0x82122318;
	sub_821FEDC8(ctx, base);
	// fsubs f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f30.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x821fedc8
	ctx.lr = 0x82122324;
	sub_821FEDC8(ctx, base);
	// fsubs f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f30.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r5,r30,48
	ctx.r5.s64 = r30.s64 + 48;
	// stfs f28,140(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820e1b70
	ctx.lr = 0x82122340;
	sub_820E1B70(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820e2290
	ctx.lr = 0x8212234C;
	sub_820E2290(ctx, base);
	// rlwinm r26,r31,2,22,29
	r26.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0x3FC;
	// bl 0x821fedc8
	ctx.lr = 0x82122354;
	sub_821FEDC8(ctx, base);
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// fadds f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + f31.f64));
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r24,r11,9748
	r24.s64 = ctx.r11.s64 + 9748;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r24,216
	ctx.r11.s64 = r24.s64 + 216;
	// lfsx f13,r26,r11
	temp.u32 = REX_LOAD_U32(r26.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * f29.f64));
	// bl 0x820e1cf8
	ctx.lr = 0x8212237C;
	sub_820E1CF8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r27,0
	r27.s64 = 0;
	// lwzx r23,r28,r11
	r23.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// lha r11,100(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 100));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// ble cr6,0x82122494
	if (!ctx.cr6.gt) goto loc_82122494;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// addi r21,r11,29640
	r21.s64 = ctx.r11.s64 + 29640;
loc_821223B0:
	// lwz r11,-8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + -8);
	// lfs f0,144(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mr r20,r11
	r20.u64 = ctx.r11.u64;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// mulli r11,r11,80
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(80));
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r20,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stfsx f0,r7,r25
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + r25.u32, temp.u32);
	// stw r11,-8(r25)
	REX_STORE_U32(r25.u32 + -8, ctx.r11.u32);
	// stb r22,76(r31)
	REX_STORE_U8(r31.u32 + 76, r22.u8);
	// bl 0x821fec88
	ctx.lr = 0x821223F0;
	sub_821FEC88(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// clrlwi r10,r3,30
	ctx.r10.u64 = ctx.r3.u32 & 0x3;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stb r10,77(r31)
	REX_STORE_U8(r31.u32 + 77, ctx.r10.u8);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// rlwinm r10,r20,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 4) & 0xFFFFFFF0;
	// lfsx f0,r28,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// lfsx f0,r26,r24
	temp.u32 = REX_LOAD_U32(r26.u32 + r24.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// lfsx f13,r28,r9
	temp.u32 = REX_LOAD_U32(r28.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// cmpw cr6,r27,r23
	ctx.cr6.compare<int32_t>(r27.s32, r23.s32, ctx.xer);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// lfs f0,88(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// lwzx r11,r26,r21
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + r21.u32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stfs f31,12(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// lwz r11,160(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 160);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stwx r7,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// stw r11,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// blt cr6,0x821223b0
	if (ctx.cr6.lt) goto loc_821223B0;
loc_82122494:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x822d4f80
	ctx.lr = 0x821224A0;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_8212EC38) {
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
	ctx.lr = 0x8212EC40;
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,432
	r30.s64 = ctx.r11.s64 + 432;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212ec6c
	if (ctx.cr6.eq) goto loc_8212EC6C;
loc_8212EC64:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8212ee6c
	goto loc_8212EE6C;
loc_8212EC6C:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lha r29,30(r30)
	r29.s64 = int16_t(REX_LOAD_U16(r30.u32 + 30));
	// lwz r10,-23028(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -23028);
	// lwz r27,220(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 220);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8212ee68
	if (!ctx.cr6.eq) goto loc_8212EE68;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x8212ee68
	if (ctx.cr6.lt) goto loc_8212EE68;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(r31.s32, 8, ctx.xer);
	// bge cr6,0x8212ee68
	if (!ctx.cr6.lt) goto loc_8212EE68;
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,-23028(r11)
	REX_STORE_U32(ctx.r11.u32 + -23028, ctx.r10.u32);
	// stw r31,-23024(r9)
	REX_STORE_U32(ctx.r9.u32 + -23024, r31.u32);
	// bl 0x8212aea0
	ctx.lr = 0x8212ECAC;
	sub_8212AEA0(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r26,0
	r26.s64 = 0;
	// addi r10,r11,31432
	ctx.r10.s64 = ctx.r11.s64 + 31432;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r26,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, r26.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(r31.u32, 2, ctx.xer);
	// stw r9,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// lwz r11,96(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r10,100(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 100);
	// stw r11,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// stw r10,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// blt cr6,0x8212ed4c
	if (ctx.cr6.lt) goto loc_8212ED4C;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(r31.u32, 4, ctx.xer);
	// blt cr6,0x8212ecf8
	if (ctx.cr6.lt) goto loc_8212ECF8;
	// cmplwi cr6,r31,7
	ctx.cr6.compare<uint32_t>(r31.u32, 7, ctx.xer);
	// blt cr6,0x8212ed08
	if (ctx.cr6.lt) goto loc_8212ED08;
	// bne cr6,0x8212edb8
	if (!ctx.cr6.eq) goto loc_8212EDB8;
loc_8212ECF8:
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r11,r11,10856
	ctx.r11.s64 = ctx.r11.s64 + 10856;
	// lbzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// b 0x8212ed98
	goto loc_8212ED98;
loc_8212ED08:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r26,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, r26.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r11,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// blt cr6,0x8212ed24
	if (ctx.cr6.lt) goto loc_8212ED24;
	// cmpwi cr6,r28,32
	ctx.cr6.compare<int32_t>(r28.s32, 32, ctx.xer);
	// ble cr6,0x8212ed28
	if (!ctx.cr6.gt) goto loc_8212ED28;
loc_8212ED24:
	// mr r28,r26
	r28.u64 = r26.u64;
loc_8212ED28:
	// lwz r11,348(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 348);
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r10,10820
	ctx.r9.s64 = ctx.r10.s64 + 10820;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// lbzx r11,r9,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + r28.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8212ed98
	goto loc_8212ED98;
loc_8212ED4C:
	// lbz r11,18(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 18);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8212ed5c
	if (ctx.cr0.eq) goto loc_8212ED5C;
	// li r29,3
	r29.s64 = 3;
loc_8212ED5C:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// bne cr6,0x8212ed78
	if (!ctx.cr6.eq) goto loc_8212ED78;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// lha r10,98(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 98));
	// cmpwi cr6,r10,30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 30, ctx.xer);
	// blt cr6,0x8212eda0
	if (ctx.cr6.lt) goto loc_8212EDA0;
	// li r29,3
	r29.s64 = 3;
loc_8212ED78:
	// bl 0x821fec88
	ctx.lr = 0x8212ED7C;
	sub_821FEC88(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// divwu r11,r3,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r3.u32 / ctx.r11.u32 : 0);
	// addi r10,r10,10812
	ctx.r10.s64 = ctx.r10.s64 + 10812;
	// mulli r11,r11,7
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(7));
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
loc_8212ED98:
	// stw r11,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// b 0x8212edb8
	goto loc_8212EDB8;
loc_8212EDA0:
	// li r10,5
	ctx.r10.s64 = 5;
	// li r4,33
	ctx.r4.s64 = 33;
	// stw r10,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// lha r3,98(r11)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 98));
	// bl 0x821c2d80
	ctx.lr = 0x8212EDB4;
	sub_821C2D80(ctx, base);
	// stw r3,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r3.u32);
loc_8212EDB8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8212ee68
	if (ctx.cr6.eq) goto loc_8212EE68;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// stw r26,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, r26.u32);
	// addi r9,r10,-29104
	ctx.r9.s64 = ctx.r10.s64 + -29104;
	// stw r26,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, r26.u32);
	// addi r11,r11,-23008
	ctx.r11.s64 = ctx.r11.s64 + -23008;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lwz r7,-29104(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + -29104);
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r8,r8,-11696
	ctx.r8.s64 = ctx.r8.s64 + -11696;
	// lwz r5,4(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lbz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stb r4,314(r1)
	REX_STORE_U8(ctx.r1.u32 + 314, ctx.r4.u8);
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r10.s32, ctx.xer);
	// stw r8,328(r1)
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r8.u32);
	// stw r7,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, ctx.r7.u32);
	// stw r25,-23032(r6)
	REX_STORE_U32(ctx.r6.u32 + -23032, r25.u32);
	// stw r5,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r5.u32);
	// stb r9,360(r1)
	REX_STORE_U8(ctx.r1.u32 + 360, ctx.r9.u8);
	// bne cr6,0x8212ee24
	if (!ctx.cr6.eq) goto loc_8212EE24;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r26.u32);
loc_8212EE24:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8212ee38
	if (!ctx.cr6.eq) goto loc_8212EE38;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r26.u32);
loc_8212EE38:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r11,r11,20172
	ctx.r11.s64 = ctx.r11.s64 + 20172;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8212ee5c
	if (!ctx.cr6.eq) goto loc_8212EE5C;
	// li r9,-2
	ctx.r9.s64 = -2;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r26.u32);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_8212EE5C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212cc18
	ctx.lr = 0x8212EE64;
	sub_8212CC18(ctx, base);
	// b 0x8212ec64
	goto loc_8212EC64;
loc_8212EE68:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8212EE6C:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82135978) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bge cr6,0x82135988
	if (!ctx.cr6.lt) goto loc_82135988;
	// clrlwi r5,r4,31
	ctx.r5.u64 = ctx.r4.u32 & 0x1;
loc_82135988:
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r10,20556
	ctx.r3.s64 = ctx.r10.s64 + 20556;
	// b 0x82134288
	sub_82134288(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82135F60) {
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
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// beq cr6,0x82135f98
	if (ctx.cr6.eq) goto loc_82135F98;
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// lwz r5,32(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r4,28(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mulli r11,r10,324
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(324));
	// addi r9,r9,22000
	ctx.r9.s64 = ctx.r9.s64 + 22000;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x82133e90
	sub_82133E90(ctx, base);
	return;
loc_82135F98:
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// lwz r5,24(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mulli r11,r10,88
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(88));
	// addi r9,r9,21824
	ctx.r9.s64 = ctx.r9.s64 + 21824;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x821332c8
	sub_821332C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82138A78) {
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
	ctx.lr = 0x82138A80;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82138aa8
	if (ctx.cr6.eq) goto loc_82138AA8;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// b 0x82138ab0
	goto loc_82138AB0;
loc_82138AA8:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
loc_82138AB0:
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-22768
	ctx.r8.s64 = ctx.r11.s64 + -22768;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x821f7d50
	ctx.lr = 0x82138ACC;
	sub_821F7D50(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82138aec
	if (ctx.cr0.eq) goto loc_82138AEC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r10,31764
	ctx.r10.s64 = ctx.r10.s64 + 31764;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82138af0
	goto loc_82138AF0;
loc_82138AEC:
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_82138AF0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82138b24
	if (ctx.cr6.eq) goto loc_82138B24;
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f31,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// stw r29,100(r31)
	REX_STORE_U32(r31.u32 + 100, r29.u32);
	// stb r10,90(r31)
	REX_STORE_U8(r31.u32 + 90, ctx.r10.u8);
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// stb r10,105(r31)
	REX_STORE_U8(r31.u32 + 105, ctx.r10.u8);
	// stb r11,104(r31)
	REX_STORE_U8(r31.u32 + 104, ctx.r11.u8);
	// stb r10,106(r31)
	REX_STORE_U8(r31.u32 + 106, ctx.r10.u8);
	// stb r11,108(r31)
	REX_STORE_U8(r31.u32 + 108, ctx.r11.u8);
	// stb r11,109(r31)
	REX_STORE_U8(r31.u32 + 109, ctx.r11.u8);
	// stb r10,91(r31)
	REX_STORE_U8(r31.u32 + 91, ctx.r10.u8);
loc_82138B24:
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r9,128
	ctx.r9.s64 = 128;
	// addi r10,r10,20356
	ctx.r10.s64 = ctx.r10.s64 + 20356;
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// lis r9,-8531
	ctx.r9.s64 = -559087616;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// ori r10,r9,43690
	ctx.r10.u64 = ctx.r9.u64 | 43690;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r11,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// stw r11,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r5,r11,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x822d5870
	ctx.lr = 0x82138B6C;
	sub_822D5870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82140B98) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e80
	ctx.lr = 0x82140BA0;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f38
	ctx.lr = 0x82140BA8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r6,r8,-23512
	ctx.r6.s64 = ctx.r8.s64 + -23512;
	// addi r9,r11,22160
	ctx.r9.s64 = ctx.r11.s64 + 22160;
	// addi r8,r10,1344
	ctx.r8.s64 = ctx.r10.s64 + 1344;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x821366d8
	ctx.lr = 0x82140BDC;
	sub_821366D8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82140cd4
	if (ctx.cr0.eq) goto loc_82140CD4;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r29,r11,23912
	r29.s64 = ctx.r11.s64 + 23912;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f31,2332(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2332);
	f31.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r30,0
	r30.s64 = 0;
	// lfs f30,-23928(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -23928);
	f30.f64 = double(temp.f32);
	// li r26,1
	r26.s64 = 1;
	// lfs f29,29340(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 29340);
	f29.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f5,15620(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15620);
	ctx.f5.f64 = double(temp.f32);
	// lfs f28,-30168(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -30168);
	f28.f64 = double(temp.f32);
	// fmr f7,f31
	ctx.f7.f64 = f31.f64;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// lfs f2,28224(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 28224);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// fmr f6,f31
	ctx.f6.f64 = f31.f64;
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// fmr f4,f30
	ctx.f4.f64 = f30.f64;
	// lwz r11,76(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 76);
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// stw r26,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r26.u32);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// bl 0x82104548
	ctx.lr = 0x82140C68;
	sub_82104548(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f7,f31
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = f31.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f6,f31
	ctx.f6.f64 = f31.f64;
	// stw r26,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r26.u32);
	// fmr f4,f30
	ctx.f4.f64 = f30.f64;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// stw r3,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f5,28556(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28556);
	ctx.f5.f64 = double(temp.f32);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// lfs f2,-24308(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24308);
	ctx.f2.f64 = double(temp.f32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x82104548
	ctx.lr = 0x82140CA8;
	sub_82104548(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r3,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r3.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// stw r27,144(r31)
	REX_STORE_U32(r31.u32 + 144, r27.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// stw r10,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// beq cr6,0x82140ccc
	if (ctx.cr6.eq) goto loc_82140CCC;
	// stw r30,0(r27)
	REX_STORE_U32(r27.u32 + 0, r30.u32);
loc_82140CCC:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,96(r29)
	REX_STORE_U32(r29.u32 + 96, ctx.r11.u32);
loc_82140CD4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f84
	ctx.lr = 0x82140CE4;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8214A2A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8214A2B0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lha r11,20(r3)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 20));
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e0af8
	ctx.lr = 0x8214A2D4;
	sub_820E0AF8(ctx, base);
	// lfs f13,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f13,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,56(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// lha r3,22(r30)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r30.u32 + 22));
	// bl 0x8214b028
	ctx.lr = 0x8214A300;
	sub_8214B028(ctx, base);
	// lfs f10,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f13,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fmuls f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f12,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// fmuls f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f11,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// stfs f11,4(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f10,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f9,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f11,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,24(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// lfs f0,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f13,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// lha r11,22(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 22));
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x820e0368
	ctx.lr = 0x8214A3C0;
	sub_820E0368(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8214F6C0) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4f38
	ctx.lr = 0x8214F6D0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214f76c
	if (ctx.cr6.eq) goto loc_8214F76C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8214f76c
	if (!ctx.cr6.eq) goto loc_8214F76C;
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214f76c
	if (ctx.cr6.eq) goto loc_8214F76C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,116(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f29,15632(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15632);
	f29.f64 = double(temp.f32);
	// bne cr6,0x8214f714
	if (!ctx.cr6.eq) goto loc_8214F714;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f30.f64 = double(temp.f32);
	// b 0x8214f718
	goto loc_8214F718;
loc_8214F714:
	// fmr f30,f29
	ctx.fpscr.disableFlushMode();
	f30.f64 = f29.f64;
loc_8214F718:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,136(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2012(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x820e0028
	ctx.lr = 0x8214F72C;
	sub_820E0028(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f31,16032(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16032);
	f31.f64 = double(temp.f32);
	// fmuls f28,f1,f31
	f28.f64 = double(float(ctx.f1.f64 * f31.f64));
	// bl 0x821e78c8
	ctx.lr = 0x8214F740;
	sub_821E78C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f5,f28
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = f28.f64;
	// li r9,2
	ctx.r9.s64 = 2;
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// li r8,255
	ctx.r8.s64 = 255;
	// fsubs f2,f31,f28
	ctx.f2.f64 = double(float(f31.f64 - f28.f64));
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lfs f3,16616(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16616);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x821e8688
	ctx.lr = 0x8214F764;
	sub_821E8688(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821e78c8
	ctx.lr = 0x8214F76C;
	sub_821E78C8(ctx, base);
loc_8214F76C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x822d4f84
	ctx.lr = 0x8214F778;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82153790) {
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
	// bl 0x822d4e50
	ctx.lr = 0x82153798;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f34
	ctx.lr = 0x821537A0;
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8215480c
	if (ctx.cr6.eq) goto loc_8215480C;
	// lhz r10,5618(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 5618);
	// li r24,1
	r24.s64 = 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821537dc
	if (!ctx.cr0.eq) goto loc_821537DC;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// lwz r3,40(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x821b0660
	ctx.lr = 0x821537D4;
	sub_821B0660(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// sth r24,5618(r11)
	REX_STORE_U16(ctx.r11.u32 + 5618, r24.u16);
loc_821537DC:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r10,-17564
	ctx.r5.s64 = ctx.r10.s64 + -17564;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,52(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x821af9d8
	ctx.lr = 0x821537F8;
	sub_821AF9D8(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// stw r3,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r3.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r3,48(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x820e4bb0
	ctx.lr = 0x8215380C;
	sub_820E4BB0(ctx, base);
	// stw r3,408(r31)
	REX_STORE_U32(r31.u32 + 408, ctx.r3.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,26
	ctx.r4.s64 = 26;
	// bl 0x821522a8
	ctx.lr = 0x82153824;
	sub_821522A8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-17580
	ctx.r5.s64 = ctx.r11.s64 + -17580;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r3,52(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x821af9d8
	ctx.lr = 0x82153840;
	sub_821AF9D8(ctx, base);
	// bl 0x8212d358
	ctx.lr = 0x82153844;
	sub_8212D358(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r11,40(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r10,52(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// addi r9,r11,2047
	ctx.r9.s64 = ctx.r11.s64 + 2047;
	// rlwinm r30,r9,0,0,20
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF800;
	// subf r10,r30,r10
	ctx.r10.u64 = ctx.r10.u64 - r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821c55b0
	ctx.lr = 0x8215386C;
	sub_821C55B0(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r3,40(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r4,52(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x821af9a0
	ctx.lr = 0x8215387C;
	sub_821AF9A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r15,-32165
	r15.s64 = -2107965440;
	// addi r6,r11,-17588
	ctx.r6.s64 = ctx.r11.s64 + -17588;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// stw r30,5620(r11)
	REX_STORE_U32(ctx.r11.u32 + 5620, r30.u32);
	// lwz r3,-32480(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + -32480);
	// bl 0x821f7d50
	ctx.lr = 0x821538AC;
	sub_821F7D50(ctx, base);
	// li r25,0
	r25.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821538d0
	if (ctx.cr0.eq) goto loc_821538D0;
	// lwz r11,408(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 408);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r25,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, r25.u32);
	// addi r10,r10,-19212
	ctx.r10.s64 = ctx.r10.s64 + -19212;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
loc_821538D0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,-17596
	ctx.r5.s64 = ctx.r11.s64 + -17596;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x821f7778
	ctx.lr = 0x821538F0;
	sub_821F7778(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// lfs f30,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f30.f64 = double(temp.f32);
	// addi r22,r11,7856
	r22.s64 = ctx.r11.s64 + 7856;
	// lfs f31,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f31.f64 = double(temp.f32);
	// beq 0x8215396c
	if (ctx.cr0.eq) goto loc_8215396C;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lfs f0,-17600(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -17600);
	ctx.f0.f64 = double(temp.f32);
	// stb r25,104(r30)
	REX_STORE_U8(r30.u32 + 104, r25.u8);
	// stb r24,105(r30)
	REX_STORE_U8(r30.u32 + 105, r24.u8);
	// stb r24,106(r30)
	REX_STORE_U8(r30.u32 + 106, r24.u8);
	// stb r25,108(r30)
	REX_STORE_U8(r30.u32 + 108, r25.u8);
	// stw r11,100(r30)
	REX_STORE_U32(r30.u32 + 100, ctx.r11.u32);
	// sth r9,18(r30)
	REX_STORE_U16(r30.u32 + 18, ctx.r9.u16);
	// stfs f31,144(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r4,11748(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 11748);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f30,156(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x820e1df8
	ctx.lr = 0x8215395C;
	sub_820E1DF8(ctx, base);
	// lfs f0,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 92, temp.u32);
	// stb r24,90(r30)
	REX_STORE_U8(r30.u32 + 90, r24.u8);
	// stb r24,91(r30)
	REX_STORE_U8(r30.u32 + 91, r24.u8);
loc_8215396C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,-17612
	ctx.r5.s64 = ctx.r11.s64 + -17612;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,21
	ctx.r4.s64 = 21;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x821f7778
	ctx.lr = 0x8215398C;
	sub_821F7778(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// li r28,2
	r28.s64 = 2;
	// li r17,8
	r17.s64 = 8;
	// beq 0x821539f8
	if (ctx.cr0.eq) goto loc_821539F8;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lfs f0,-17616(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -17616);
	ctx.f0.f64 = double(temp.f32);
	// stb r24,104(r30)
	REX_STORE_U8(r30.u32 + 104, r24.u8);
	// stb r24,105(r30)
	REX_STORE_U8(r30.u32 + 105, r24.u8);
	// stb r28,106(r30)
	REX_STORE_U8(r30.u32 + 106, r28.u8);
	// stb r24,107(r30)
	REX_STORE_U8(r30.u32 + 107, r24.u8);
	// stw r11,100(r30)
	REX_STORE_U32(r30.u32 + 100, ctx.r11.u32);
	// stb r25,108(r30)
	REX_STORE_U8(r30.u32 + 108, r25.u8);
	// sth r17,18(r30)
	REX_STORE_U16(r30.u32 + 18, r17.u16);
	// stfs f31,160(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lwz r4,11748(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 11748);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f30,172(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x820e1df8
	ctx.lr = 0x821539E8;
	sub_820E1DF8(ctx, base);
	// lfs f0,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 92, temp.u32);
	// stb r24,90(r30)
	REX_STORE_U8(r30.u32 + 90, r24.u8);
	// stb r24,91(r30)
	REX_STORE_U8(r30.u32 + 91, r24.u8);
loc_821539F8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,-17628
	ctx.r5.s64 = ctx.r11.s64 + -17628;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,19
	ctx.r4.s64 = 19;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x821f7778
	ctx.lr = 0x82153A18;
	sub_821F7778(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82153a98
	if (ctx.cr0.eq) goto loc_82153A98;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-8304
	ctx.r11.s64 = ctx.r11.s64 + -8304;
	// addi r5,r10,-24116
	ctx.r5.s64 = ctx.r10.s64 + -24116;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r30,r29,80
	r30.s64 = r29.s64 + 80;
	// lwz r3,324(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 324);
	// bl 0x821af9d8
	ctx.lr = 0x82153A44;
	sub_821AF9D8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,100(r29)
	REX_STORE_U32(r29.u32 + 100, ctx.r3.u32);
	// stb r25,104(r29)
	REX_STORE_U8(r29.u32 + 104, r25.u8);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stb r24,105(r29)
	REX_STORE_U8(r29.u32 + 105, r24.u8);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r28,106(r29)
	REX_STORE_U8(r29.u32 + 106, r28.u8);
	// stb r25,107(r29)
	REX_STORE_U8(r29.u32 + 107, r25.u8);
	// stb r25,108(r29)
	REX_STORE_U8(r29.u32 + 108, r25.u8);
	// lfs f0,-17632(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -17632);
	ctx.f0.f64 = double(temp.f32);
	// sth r17,18(r29)
	REX_STORE_U16(r29.u32 + 18, r17.u16);
	// stfs f31,176(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f30,188(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r4,11748(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 11748);
	// bl 0x820e1df8
	ctx.lr = 0x82153A88;
	sub_820E1DF8(ctx, base);
	// lfs f0,188(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 92, temp.u32);
	// stb r24,90(r29)
	REX_STORE_U8(r29.u32 + 90, r24.u8);
	// stb r24,91(r29)
	REX_STORE_U8(r29.u32 + 91, r24.u8);
loc_82153A98:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f31,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f30,124(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stfs f30,140(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lwz r3,408(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 408);
	// lfs f0,-17636(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -17636);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,-17640(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -17640);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r7,-17648
	ctx.r7.s64 = ctx.r7.s64 + -17648;
	// lfs f12,31168(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 31168);
	ctx.f12.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f11,16032(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16032);
	ctx.f11.f64 = double(temp.f32);
	// li r8,5
	ctx.r8.s64 = 5;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x821675c0
	ctx.lr = 0x82153B00;
	sub_821675C0(ctx, base);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r23,r11,-21016
	r23.s64 = ctx.r11.s64 + -21016;
	// stw r3,380(r10)
	REX_STORE_U32(ctx.r10.u32 + 380, ctx.r3.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r11,380(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82153b34
	if (ctx.cr6.eq) goto loc_82153B34;
	// sth r17,18(r11)
	REX_STORE_U16(ctx.r11.u32 + 18, r17.u16);
	// addi r11,r23,-192
	ctx.r11.s64 = r23.s64 + -192;
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r10,380(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 380);
	// stw r11,96(r10)
	REX_STORE_U32(ctx.r10.u32 + 96, ctx.r11.u32);
loc_82153B34:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stfs f30,124(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stfs f30,140(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f29,-17652(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -17652);
	f29.f64 = double(temp.f32);
	// addi r7,r7,-17664
	ctx.r7.s64 = ctx.r7.s64 + -17664;
	// lfs f28,19796(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 19796);
	f28.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f27,-17656(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -17656);
	f27.f64 = double(temp.f32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stfs f29,120(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stfs f28,128(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f27,132(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,408(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 408);
	// bl 0x821675c0
	ctx.lr = 0x82153B94;
	sub_821675C0(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,384(r11)
	REX_STORE_U32(ctx.r11.u32 + 384, ctx.r3.u32);
	// beq 0x82153bc0
	if (ctx.cr0.eq) goto loc_82153BC0;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r10,r23,-128
	ctx.r10.s64 = r23.s64 + -128;
	// lwz r11,384(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 384);
	// sth r17,18(r11)
	REX_STORE_U16(ctx.r11.u32 + 18, r17.u16);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r11,384(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 384);
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
loc_82153BC0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f31,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f29,120(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f30,124(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f28,128(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r7,r9,-17676
	ctx.r7.s64 = ctx.r9.s64 + -17676;
	// stfs f27,132(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,-17668(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -17668);
	ctx.f0.f64 = double(temp.f32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f30,140(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,408(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 408);
	// bl 0x821675c0
	ctx.lr = 0x82153C10;
	sub_821675C0(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,388(r11)
	REX_STORE_U32(ctx.r11.u32 + 388, ctx.r3.u32);
	// beq 0x82153c48
	if (ctx.cr0.eq) goto loc_82153C48;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r10,r23,-128
	ctx.r10.s64 = r23.s64 + -128;
	// lwz r11,388(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 388);
	// sth r17,18(r11)
	REX_STORE_U16(ctx.r11.u32 + 18, r17.u16);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r11,388(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 388);
	// stb r24,189(r11)
	REX_STORE_U8(ctx.r11.u32 + 189, r24.u8);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r11,384(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 384);
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
loc_82153C48:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stfs f30,124(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stfs f30,140(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f29,-24916(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24916);
	f29.f64 = double(temp.f32);
	// addi r7,r7,-17688
	ctx.r7.s64 = ctx.r7.s64 + -17688;
	// lfs f0,-17680(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -17680);
	ctx.f0.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f13,-24328(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -24328);
	ctx.f13.f64 = double(temp.f32);
	// li r8,10
	ctx.r8.s64 = 10;
	// stfs f29,120(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,408(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 408);
	// bl 0x821675c0
	ctx.lr = 0x82153CA8;
	sub_821675C0(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,392(r11)
	REX_STORE_U32(ctx.r11.u32 + 392, ctx.r3.u32);
	// beq 0x82153cd4
	if (ctx.cr0.eq) goto loc_82153CD4;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r10,r23,-64
	ctx.r10.s64 = r23.s64 + -64;
	// lwz r11,392(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 392);
	// sth r24,18(r11)
	REX_STORE_U16(ctx.r11.u32 + 18, r24.u16);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r11,392(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 392);
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
loc_82153CD4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f31,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f29,120(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f30,124(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r9,-17700
	ctx.r7.s64 = ctx.r9.s64 + -17700;
	// lwz r3,408(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 408);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,-17692(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -17692);
	ctx.f0.f64 = double(temp.f32);
	// li r8,10
	ctx.r8.s64 = 10;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821675c0
	ctx.lr = 0x82153D14;
	sub_821675C0(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// stw r3,396(r11)
	REX_STORE_U32(ctx.r11.u32 + 396, ctx.r3.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r10,396(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82153d50
	if (ctx.cr6.eq) goto loc_82153D50;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r10,r23,-64
	ctx.r10.s64 = r23.s64 + -64;
	// stb r24,189(r11)
	REX_STORE_U8(ctx.r11.u32 + 189, r24.u8);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r11,396(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// sth r24,18(r11)
	REX_STORE_U16(ctx.r11.u32 + 18, r24.u16);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r11,396(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
loc_82153D50:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f30,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f30,140(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwz r3,408(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 408);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f0,-18128(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -18128);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f29,2024(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2024);
	f29.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,32172(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 32172);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r11,-17712
	ctx.r7.s64 = ctx.r11.s64 + -17712;
	// lfs f12,-18124(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -18124);
	ctx.f12.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f11,-17704(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -17704);
	ctx.f11.f64 = double(temp.f32);
	// li r8,11
	ctx.r8.s64 = 11;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stfs f29,116(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// li r4,17
	ctx.r4.s64 = 17;
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x821675c0
	ctx.lr = 0x82153DC0;
	sub_821675C0(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// stw r3,400(r11)
	REX_STORE_U32(ctx.r11.u32 + 400, ctx.r3.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r11,400(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 400);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82153e04
	if (ctx.cr6.eq) goto loc_82153E04;
	// sth r17,18(r11)
	REX_STORE_U16(ctx.r11.u32 + 18, r17.u16);
	// addi r11,r23,128
	ctx.r11.s64 = r23.s64 + 128;
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r10,400(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 400);
	// stb r28,106(r10)
	REX_STORE_U8(ctx.r10.u32 + 106, r28.u8);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r10,400(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 400);
	// stb r24,107(r10)
	REX_STORE_U8(ctx.r10.u32 + 107, r24.u8);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r10,400(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 400);
	// stw r11,96(r10)
	REX_STORE_U32(ctx.r10.u32 + 96, ctx.r11.u32);
loc_82153E04:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,-17720
	ctx.r5.s64 = ctx.r11.s64 + -17720;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x821f7778
	ctx.lr = 0x82153E24;
	sub_821F7778(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r14,r11,432
	r14.s64 = ctx.r11.s64 + 432;
	// beq 0x82153e8c
	if (ctx.cr0.eq) goto loc_82153E8C;
	// lwz r11,444(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 444);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r25,104(r30)
	REX_STORE_U8(r30.u32 + 104, r25.u8);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// stb r24,105(r30)
	REX_STORE_U8(r30.u32 + 105, r24.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stb r24,106(r30)
	REX_STORE_U8(r30.u32 + 106, r24.u8);
	// stb r25,108(r30)
	REX_STORE_U8(r30.u32 + 108, r25.u8);
	// stw r11,100(r30)
	REX_STORE_U32(r30.u32 + 100, ctx.r11.u32);
	// lfs f0,28732(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28732);
	ctx.f0.f64 = double(temp.f32);
	// sth r17,18(r30)
	REX_STORE_U16(r30.u32 + 18, r17.u16);
	// addi r11,r30,80
	ctx.r11.s64 = r30.s64 + 80;
	// stb r24,90(r30)
	REX_STORE_U8(r30.u32 + 90, r24.u8);
	// stfs f31,192(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f31,196(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f30,204(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// lwz r4,1668(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 1668);
	// bl 0x820e1df8
	ctx.lr = 0x82153E80;
	sub_820E1DF8(ctx, base);
	// lfs f0,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 92, temp.u32);
	// stb r24,91(r30)
	REX_STORE_U8(r30.u32 + 91, r24.u8);
loc_82153E8C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r23,-1688
	r29.s64 = r23.s64 + -1688;
	// mr r30,r25
	r30.u64 = r25.u64;
	// li r28,248
	r28.s64 = 248;
	// li r16,-1
	r16.s64 = -1;
	// addi r27,r11,-19164
	r27.s64 = ctx.r11.s64 + -19164;
	// addi r26,r10,-17728
	r26.s64 = ctx.r10.s64 + -17728;
loc_82153EAC:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r3,-32480(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + -32480);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,18
	ctx.r5.s64 = 18;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x82153ECC;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82153f20
	if (ctx.cr0.eq) goto loc_82153F20;
	// stfs f31,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// stfs f31,96(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stw r30,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, r30.u32);
	// stfs f31,72(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stw r29,144(r3)
	REX_STORE_U32(ctx.r3.u32 + 144, r29.u32);
	// stfs f31,104(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stb r25,110(r3)
	REX_STORE_U8(ctx.r3.u32 + 110, r25.u8);
	// stb r25,109(r3)
	REX_STORE_U8(ctx.r3.u32 + 109, r25.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,108(r3)
	REX_STORE_U8(ctx.r3.u32 + 108, r25.u8);
	// stb r25,111(r3)
	REX_STORE_U8(ctx.r3.u32 + 111, r25.u8);
	// stb r16,115(r3)
	REX_STORE_U8(ctx.r3.u32 + 115, r16.u8);
	// stb r16,114(r3)
	REX_STORE_U8(ctx.r3.u32 + 114, r16.u8);
	// stb r25,117(r3)
	REX_STORE_U8(ctx.r3.u32 + 117, r25.u8);
	// stb r25,116(r3)
	REX_STORE_U8(ctx.r3.u32 + 116, r25.u8);
	// stb r25,113(r3)
	REX_STORE_U8(ctx.r3.u32 + 113, r25.u8);
	// stb r25,112(r3)
	REX_STORE_U8(ctx.r3.u32 + 112, r25.u8);
	// b 0x82153f24
	goto loc_82153F24;
loc_82153F20:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_82153F24:
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,36
	r29.s64 = r29.s64 + 36;
	// stwx r11,r28,r10
	REX_STORE_U32(r28.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplwi cr6,r28,368
	ctx.cr6.compare<uint32_t>(r28.u32, 368, ctx.xer);
	// blt cr6,0x82153eac
	if (ctx.cr6.lt) goto loc_82153EAC;
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// lwz r11,344(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 344);
	// addi r10,r10,248
	ctx.r10.s64 = ctx.r10.s64 + 248;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stw r10,24304(r9)
	REX_STORE_U32(ctx.r9.u32 + 24304, ctx.r10.u32);
	// beq cr6,0x82153f90
	if (ctx.cr6.eq) goto loc_82153F90;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82153f84
	if (ctx.cr6.eq) goto loc_82153F84;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82153f78
	if (ctx.cr6.eq) goto loc_82153F78;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r29,6
	r29.s64 = 6;
	// b 0x82153f98
	goto loc_82153F98;
loc_82153F78:
	// li r5,18
	ctx.r5.s64 = 18;
	// li r29,15
	r29.s64 = 15;
	// b 0x82153f98
	goto loc_82153F98;
loc_82153F84:
	// li r5,7
	ctx.r5.s64 = 7;
	// li r29,21
	r29.s64 = 21;
	// b 0x82153f98
	goto loc_82153F98;
loc_82153F90:
	// li r5,19
	ctx.r5.s64 = 19;
	// li r29,20
	r29.s64 = 20;
loc_82153F98:
	// lha r11,30(r14)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r14.u32 + 30));
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lwz r4,408(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 408);
	// addi r30,r10,-7072
	r30.s64 = ctx.r10.s64 + -7072;
	// lwz r3,120(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82153fcc
	if (ctx.cr6.eq) goto loc_82153FCC;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82153fdc
	if (!ctx.cr6.eq) goto loc_82153FDC;
	// li r5,10
	ctx.r5.s64 = 10;
loc_82153FC0:
	// bl 0x8214ec30
	ctx.lr = 0x82153FC4;
	sub_8214EC30(ctx, base);
	// li r5,25
	ctx.r5.s64 = 25;
	// b 0x82153fe4
	goto loc_82153FE4;
loc_82153FCC:
	// lbz r11,6(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 6);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82153fc0
	if (ctx.cr0.eq) goto loc_82153FC0;
	// li r5,10
	ctx.r5.s64 = 10;
loc_82153FDC:
	// bl 0x8214ec30
	ctx.lr = 0x82153FE0;
	sub_8214EC30(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_82153FE4:
	// lwz r4,408(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 408);
	// lwz r3,124(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 124);
	// bl 0x8214ec30
	ctx.lr = 0x82153FF0;
	sub_8214EC30(ctx, base);
	// stw r24,84(r31)
	REX_STORE_U32(r31.u32 + 84, r24.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821c9e88
	ctx.lr = 0x82154008;
	sub_821C9E88(ctx, base);
	// addis r11,r30,1
	ctx.r11.s64 = r30.s64 + 65536;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821c9e88
	ctx.lr = 0x82154020;
	sub_821C9E88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821ca5a0
	ctx.lr = 0x82154038;
	sub_821CA5A0(ctx, base);
	// addis r11,r30,1
	ctx.r11.s64 = r30.s64 + 65536;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821ca5a0
	ctx.lr = 0x82154054;
	sub_821CA5A0(ctx, base);
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// stb r24,61(r31)
	REX_STORE_U8(r31.u32 + 61, r24.u8);
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r11,r11,-22768
	ctx.r11.s64 = ctx.r11.s64 + -22768;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f30.f64;
	// li r3,2
	ctx.r3.s64 = 2;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x821afa50
	ctx.lr = 0x8215407C;
	sub_821AFA50(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,-32480(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + -32480);
	// addi r6,r11,-17736
	ctx.r6.s64 = ctx.r11.s64 + -17736;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x821540A0;
	sub_821F7D50(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-19388
	r30.s64 = ctx.r11.s64 + -19388;
	// beq 0x821540c0
	if (ctx.cr0.eq) goto loc_821540C0;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r25,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, r25.u32);
	// b 0x821540c4
	goto loc_821540C4;
loc_821540C0:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_821540C4:
	// stw r11,236(r31)
	REX_STORE_U32(r31.u32 + 236, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,-32480(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + -32480);
	// addi r6,r11,-17744
	ctx.r6.s64 = ctx.r11.s64 + -17744;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x821540EC;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82154104
	if (ctx.cr0.eq) goto loc_82154104;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r24,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, r24.u32);
	// b 0x82154108
	goto loc_82154108;
loc_82154104:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_82154108:
	// lhz r10,312(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 312);
	// stw r11,240(r31)
	REX_STORE_U32(r31.u32 + 240, ctx.r11.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82154210
	if (!ctx.cr0.eq) goto loc_82154210;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,-32480(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + -32480);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-17756
	ctx.r6.s64 = ctx.r11.s64 + -17756;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x8215413C;
	sub_821F7D50(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r29,-32169
	r29.s64 = -2108227584;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-19348
	r30.s64 = ctx.r11.s64 + -19348;
	// beq 0x82154190
	if (ctx.cr0.eq) goto loc_82154190;
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r11,24308(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24308);
	// lwz r7,408(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 408);
	// lha r9,8(r10)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 8));
	// lhz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 16);
	// mulli r9,r9,36
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(36));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 16);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// stw r25,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, r25.u32);
	// stw r7,140(r3)
	REX_STORE_U32(ctx.r3.u32 + 140, ctx.r7.u32);
	// stw r24,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, r24.u32);
	// stw r11,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// b 0x82154194
	goto loc_82154194;
loc_82154190:
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
loc_82154194:
	// stw r8,300(r31)
	REX_STORE_U32(r31.u32 + 300, ctx.r8.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-17768
	ctx.r6.s64 = ctx.r11.s64 + -17768;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-32480(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + -32480);
	// bl 0x821f7d50
	ctx.lr = 0x821541BC;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82154204
	if (ctx.cr0.eq) goto loc_82154204;
	// lwz r10,124(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 124);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r11,24308(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24308);
	// lwz r7,408(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 408);
	// lha r9,8(r10)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 8));
	// lhz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 16);
	// mulli r9,r9,36
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(36));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 16);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// stw r24,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, r24.u32);
	// stw r7,140(r3)
	REX_STORE_U32(ctx.r3.u32 + 140, ctx.r7.u32);
	// stw r24,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, r24.u32);
	// stw r11,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// b 0x82154208
	goto loc_82154208;
loc_82154204:
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
loc_82154208:
	// stw r8,304(r31)
	REX_STORE_U32(r31.u32 + 304, ctx.r8.u32);
	// b 0x82154218
	goto loc_82154218;
loc_82154210:
	// stw r25,300(r31)
	REX_STORE_U32(r31.u32 + 300, r25.u32);
	// stw r25,304(r31)
	REX_STORE_U32(r31.u32 + 304, r25.u32);
loc_82154218:
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f30,124(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r29,r23,-568
	r29.s64 = r23.s64 + -568;
	// stfs f30,140(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// li r28,2460
	r28.s64 = 2460;
	// lfs f12,-17772(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -17772);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,-17776(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -17776);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-23588(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -23588);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r26,r11,-19232
	r26.s64 = ctx.r11.s64 + -19232;
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r27,r10,-17788
	r27.s64 = ctx.r10.s64 + -17788;
	// lfs f29,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	f29.f64 = double(temp.f32);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
loc_82154270:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r3,-32480(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + -32480);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x821f7d50
	ctx.lr = 0x82154290;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821542a4
	if (ctx.cr0.eq) goto loc_821542A4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// b 0x821542a8
	goto loc_821542A8;
loc_821542A4:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_821542A8:
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stwx r11,r28,r10
	REX_STORE_U32(r28.u32 + ctx.r10.u32, ctx.r11.u32);
	// beq cr6,0x82154390
	if (ctx.cr6.eq) goto loc_82154390;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lbz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 4);
	// lwz r10,408(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 408);
	// lwzx r30,r28,r11
	r30.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// addic. r11,r30,112
	ctx.xer.ca = r30.u32 > 4294967183;
	ctx.r11.s64 = r30.s64 + 112;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r24,80(r30)
	REX_STORE_U64(r30.u32 + 80, r24.u64);
	// sth r24,88(r30)
	REX_STORE_U16(r30.u32 + 88, r24.u16);
	// stb r24,90(r30)
	REX_STORE_U8(r30.u32 + 90, r24.u8);
	// beq 0x821542e4
	if (ctx.cr0.eq) goto loc_821542E4;
	// stw r11,92(r30)
	REX_STORE_U32(r30.u32 + 92, ctx.r11.u32);
	// b 0x821542e8
	goto loc_821542E8;
loc_821542E4:
	// stw r25,92(r30)
	REX_STORE_U32(r30.u32 + 92, r25.u32);
loc_821542E8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r23,96(r30)
	REX_STORE_U32(r30.u32 + 96, r23.u32);
	// beq cr6,0x821542fc
	if (ctx.cr6.eq) goto loc_821542FC;
	// stw r10,100(r30)
	REX_STORE_U32(r30.u32 + 100, ctx.r10.u32);
	// stb r9,104(r30)
	REX_STORE_U8(r30.u32 + 104, ctx.r9.u8);
loc_821542FC:
	// stb r25,107(r30)
	REX_STORE_U8(r30.u32 + 107, r25.u8);
	// stfs f30,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stb r24,109(r30)
	REX_STORE_U8(r30.u32 + 109, r24.u8);
	// stfs f30,232(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stb r25,106(r30)
	REX_STORE_U8(r30.u32 + 106, r25.u8);
	// stfs f30,228(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stb r24,105(r30)
	REX_STORE_U8(r30.u32 + 105, r24.u8);
	// stfs f31,236(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stw r25,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r25.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f5,f30
	ctx.f5.f64 = f30.f64;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// fmr f4,f30
	ctx.f4.f64 = f30.f64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f29
	ctx.f1.f64 = double(float(ctx.f13.f64 * f29.f64));
	// fmuls f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f0.f64 * f29.f64));
	// bl 0x8210ded0
	ctx.lr = 0x82154358;
	sub_8210DED0(ctx, base);
	// lwz r11,92(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 92);
	// lbz r10,74(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 74);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stb r10,74(r11)
	REX_STORE_U8(ctx.r11.u32 + 74, ctx.r10.u8);
	// stfs f31,128(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 128, temp.u32);
	// stfs f31,132(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 132, temp.u32);
	// sth r17,18(r30)
	REX_STORE_U16(r30.u32 + 18, r17.u16);
	// lha r3,0(r29)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r29.u32 + 0));
	// bl 0x821dd2d8
	ctx.lr = 0x8215437C;
	sub_821DD2D8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8215438c
	if (!ctx.cr6.eq) goto loc_8215438C;
	// stw r24,192(r30)
	REX_STORE_U32(r30.u32 + 192, r24.u32);
	// b 0x82154390
	goto loc_82154390;
loc_8215438C:
	// stw r25,192(r30)
	REX_STORE_U32(r30.u32 + 192, r25.u32);
loc_82154390:
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// cmplwi cr6,r28,2524
	ctx.cr6.compare<uint32_t>(r28.u32, 2524, ctx.xer);
	// blt cr6,0x82154270
	if (ctx.cr6.lt) goto loc_82154270;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,-17800
	ctx.r5.s64 = ctx.r11.s64 + -17800;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x821f7778
	ctx.lr = 0x821543C0;
	sub_821F7778(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82154428
	if (ctx.cr0.eq) goto loc_82154428;
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r11,r30,80
	ctx.r11.s64 = r30.s64 + 80;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r9,103
	ctx.r9.s64 = 103;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r11,48(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// stb r9,104(r30)
	REX_STORE_U8(r30.u32 + 104, ctx.r9.u8);
	// lfs f0,-17804(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -17804);
	ctx.f0.f64 = double(temp.f32);
	// stb r24,105(r30)
	REX_STORE_U8(r30.u32 + 105, r24.u8);
	// stb r24,106(r30)
	REX_STORE_U8(r30.u32 + 106, r24.u8);
	// stb r25,108(r30)
	REX_STORE_U8(r30.u32 + 108, r25.u8);
	// stw r11,100(r30)
	REX_STORE_U32(r30.u32 + 100, ctx.r11.u32);
	// sth r17,18(r30)
	REX_STORE_U16(r30.u32 + 18, r17.u16);
	// stfs f31,208(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f31,212(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f30,220(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// lwz r4,16788(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 16788);
	// bl 0x820e1df8
	ctx.lr = 0x82154418;
	sub_820E1DF8(ctx, base);
	// lfs f0,220(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 92, temp.u32);
	// stb r24,90(r30)
	REX_STORE_U8(r30.u32 + 90, r24.u8);
	// stb r24,91(r30)
	REX_STORE_U8(r30.u32 + 91, r24.u8);
loc_82154428:
	// lhz r11,312(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 312);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82154610
	if (ctx.cr0.eq) goto loc_82154610;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r26,r25
	r26.u64 = r25.u64;
	// li r22,34
	r22.s64 = 34;
	// addi r21,r31,200
	r21.s64 = r31.s64 + 200;
	// addi r27,r31,104
	r27.s64 = r31.s64 + 104;
	// addi r23,r31,136
	r23.s64 = r31.s64 + 136;
	// addi r20,r11,-19300
	r20.s64 = ctx.r11.s64 + -19300;
	// addi r19,r10,-17812
	r19.s64 = ctx.r10.s64 + -17812;
	// addi r18,r9,-17824
	r18.s64 = ctx.r9.s64 + -17824;
loc_82154460:
	// lhz r11,30(r14)
	ctx.r11.u64 = REX_LOAD_U16(r14.u32 + 30);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// li r11,3
	ctx.r11.s64 = 3;
	// beq cr6,0x82154474
	if (ctx.cr6.eq) goto loc_82154474;
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
loc_82154474:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,314(r31)
	REX_STORE_U16(r31.u32 + 314, ctx.r11.u16);
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// lhz r11,-12(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + -12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821544b0
	if (!ctx.cr0.eq) goto loc_821544B0;
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// mtctr r17
	ctx.ctr.u64 = r17.u64;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_82154498:
	// add r10,r22,r11
	ctx.r10.u64 = r22.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r25,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, r25.u32);
	// bdnz 0x82154498
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82154498;
	// b 0x821545f0
	goto loc_821545F0;
loc_821544B0:
	// mr r29,r23
	r29.u64 = r23.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x82154514
	if (!ctx.cr6.gt) goto loc_82154514;
loc_821544C0:
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// lwz r3,-32480(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + -32480);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x821f7d50
	ctx.lr = 0x821544E0;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821544fc
	if (ctx.cr0.eq) goto loc_821544FC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,408(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 408);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x821504b8
	ctx.lr = 0x821544F8;
	sub_821504B8(ctx, base);
	// b 0x82154500
	goto loc_82154500;
loc_821544FC:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_82154500:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(r30.s32, r28.s32, ctx.xer);
	// blt cr6,0x821544c0
	if (ctx.cr6.lt) goto loc_821544C0;
loc_82154514:
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(r28.s32, 8, ctx.xer);
	// bge cr6,0x8215453c
	if (!ctx.cr6.lt) goto loc_8215453C;
	// subfic r11,r28,8
	ctx.xer.ca = r28.u32 <= 8;
	ctx.r11.u64 = static_cast<uint64_t>(8) - r28.u64;
	// addi r10,r29,-4
	ctx.r10.s64 = r29.s64 + -4;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215453c
	if (ctx.cr6.eq) goto loc_8215453C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82154534:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82154534
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82154534;
loc_8215453C:
	// lha r11,0(r27)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r27.u32 + 0));
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82154590
	if (!ctx.cr0.gt) goto loc_82154590;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82154550:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82154588
	if (ctx.cr6.eq) goto loc_82154588;
	// lwz r10,208(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82154580
	if (ctx.cr6.eq) goto loc_82154580;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82154580
	if (ctx.cr6.eq) goto loc_82154580;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x82154580
	if (ctx.cr6.eq) goto loc_82154580;
	// stw r24,208(r11)
	REX_STORE_U32(ctx.r11.u32 + 208, r24.u32);
	// b 0x82154588
	goto loc_82154588;
loc_82154580:
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,208(r11)
	REX_STORE_U32(ctx.r11.u32 + 208, ctx.r10.u32);
loc_82154588:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82154550
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82154550;
loc_82154590:
	// lhz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821545f0
	if (!ctx.cr0.eq) goto loc_821545F0;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// lwz r3,-32480(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + -32480);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x821f7d50
	ctx.lr = 0x821545BC;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821545e8
	if (ctx.cr0.eq) goto loc_821545E8;
	// lha r10,0(r27)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r27.u32 + 0));
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,408(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 408);
	// stw r26,192(r3)
	REX_STORE_U32(ctx.r3.u32 + 192, r26.u32);
	// stw r28,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, r28.u32);
	// stw r10,200(r3)
	REX_STORE_U32(ctx.r3.u32 + 200, ctx.r10.u32);
	// stw r20,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r20.u32);
	// stw r9,196(r3)
	REX_STORE_U32(ctx.r3.u32 + 196, ctx.r9.u32);
	// b 0x821545ec
	goto loc_821545EC;
loc_821545E8:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_821545EC:
	// stw r11,0(r21)
	REX_STORE_U32(r21.u32 + 0, ctx.r11.u32);
loc_821545F0:
	// addi r22,r22,8
	r22.s64 = r22.s64 + 8;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,2
	r27.s64 = r27.s64 + 2;
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// addi r23,r23,32
	r23.s64 = r23.s64 + 32;
	// cmpwi cr6,r22,50
	ctx.cr6.compare<int32_t>(r22.s32, 50, ctx.xer);
	// blt cr6,0x82154460
	if (ctx.cr6.lt) goto loc_82154460;
	// b 0x82154648
	goto loc_82154648;
loc_82154610:
	// li r10,34
	ctx.r10.s64 = 34;
	// addi r8,r31,196
	ctx.r8.s64 = r31.s64 + 196;
loc_82154618:
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// mtctr r17
	ctx.ctr.u64 = r17.u64;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_82154624:
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r25,r9,r31
	REX_STORE_U32(ctx.r9.u32 + r31.u32, r25.u32);
	// bdnz 0x82154624
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82154624;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stwu r25,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r8.u32 = ea;
	// cmpwi cr6,r10,50
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 50, ctx.xer);
	// blt cr6,0x82154618
	if (ctx.cr6.lt) goto loc_82154618;
loc_82154648:
	// lwz r11,80(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82154728
	if (ctx.cr6.eq) goto loc_82154728;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,-32480(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + -32480);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r30,r11,-17836
	r30.s64 = ctx.r11.s64 + -17836;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,23
	ctx.r5.s64 = 23;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x821f7d50
	ctx.lr = 0x8215467C;
	sub_821F7D50(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-19320
	r29.s64 = ctx.r11.s64 + -19320;
	// beq 0x821546bc
	if (ctx.cr0.eq) goto loc_821546BC;
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,48(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// sth r25,308(r3)
	REX_STORE_U16(ctx.r3.u32 + 308, r25.u16);
	// stw r25,244(r3)
	REX_STORE_U32(ctx.r3.u32 + 244, r25.u32);
	// stw r25,240(r3)
	REX_STORE_U32(ctx.r3.u32 + 240, r25.u32);
	// stw r10,312(r3)
	REX_STORE_U32(ctx.r3.u32 + 312, ctx.r10.u32);
	// sth r16,332(r3)
	REX_STORE_U16(ctx.r3.u32 + 332, r16.u16);
	// stw r25,316(r3)
	REX_STORE_U32(ctx.r3.u32 + 316, r25.u32);
	// stb r25,285(r3)
	REX_STORE_U8(ctx.r3.u32 + 285, r25.u8);
	// b 0x821546c0
	goto loc_821546C0;
loc_821546BC:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_821546C0:
	// stw r11,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r11.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,-32480(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + -32480);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,23
	ctx.r5.s64 = 23;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x821f7d50
	ctx.lr = 0x821546E4;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8215471c
	if (ctx.cr0.eq) goto loc_8215471C;
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,48(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// sth r24,308(r3)
	REX_STORE_U16(ctx.r3.u32 + 308, r24.u16);
	// stw r25,244(r3)
	REX_STORE_U32(ctx.r3.u32 + 244, r25.u32);
	// stw r25,240(r3)
	REX_STORE_U32(ctx.r3.u32 + 240, r25.u32);
	// stw r10,312(r3)
	REX_STORE_U32(ctx.r3.u32 + 312, ctx.r10.u32);
	// sth r16,332(r3)
	REX_STORE_U16(ctx.r3.u32 + 332, r16.u16);
	// stw r25,316(r3)
	REX_STORE_U32(ctx.r3.u32 + 316, r25.u32);
	// stb r25,285(r3)
	REX_STORE_U8(ctx.r3.u32 + 285, r25.u8);
	// b 0x82154720
	goto loc_82154720;
loc_8215471C:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_82154720:
	// stw r11,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r11.u32);
	// b 0x82154730
	goto loc_82154730;
loc_82154728:
	// stw r25,212(r31)
	REX_STORE_U32(r31.u32 + 212, r25.u32);
	// stw r25,208(r31)
	REX_STORE_U32(r31.u32 + 208, r25.u32);
loc_82154730:
	// lhz r11,30(r14)
	ctx.r11.u64 = REX_LOAD_U16(r14.u32 + 30);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x821547e0
	if (!ctx.cr6.eq) goto loc_821547E0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,-32480(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + -32480);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r30,r11,-17848
	r30.s64 = ctx.r11.s64 + -17848;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x821f7d50
	ctx.lr = 0x82154764;
	sub_821F7D50(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-19280
	r29.s64 = ctx.r11.s64 + -19280;
	// beq 0x8215478c
	if (ctx.cr0.eq) goto loc_8215478C;
	// lwz r10,408(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 408);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stw r25,200(r3)
	REX_STORE_U32(ctx.r3.u32 + 200, r25.u32);
	// stw r10,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, ctx.r10.u32);
	// b 0x82154790
	goto loc_82154790;
loc_8215478C:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_82154790:
	// stw r11,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r11.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,-32480(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + -32480);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x821f7d50
	ctx.lr = 0x821547B4;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821547d4
	if (ctx.cr0.eq) goto loc_821547D4;
	// lwz r10,408(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 408);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stw r24,200(r3)
	REX_STORE_U32(ctx.r3.u32 + 200, r24.u32);
	// stw r10,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, ctx.r10.u32);
	// b 0x821547d8
	goto loc_821547D8;
loc_821547D4:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_821547D8:
	// stw r11,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r11.u32);
	// b 0x821547e8
	goto loc_821547E8;
loc_821547E0:
	// stw r25,220(r31)
	REX_STORE_U32(r31.u32 + 220, r25.u32);
	// stw r25,216(r31)
	REX_STORE_U32(r31.u32 + 216, r25.u32);
loc_821547E8:
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r14,84
	ctx.r3.s64 = r14.s64 + 84;
	// bl 0x821d6210
	ctx.lr = 0x821547F4;
	sub_821D6210(ctx, base);
	// bl 0x8212b430
	ctx.lr = 0x821547F8;
	sub_8212B430(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8212eb40
	ctx.lr = 0x8215480C;
	sub_8212EB40(ctx, base);
loc_8215480C:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f80
	ctx.lr = 0x82154818;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_821943B0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-19520
	ctx.r11.s64 = ctx.r11.s64 + -19520;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// addi r10,r10,3724
	ctx.r10.s64 = ctx.r10.s64 + 3724;
	// addi r9,r9,3408
	ctx.r9.s64 = ctx.r9.s64 + 3408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// stw r11,148(r3)
	REX_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// stw r11,152(r3)
	REX_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// stw r11,156(r3)
	REX_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// stw r4,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r4.u32);
	// stw r5,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r5.u32);
	// stw r6,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r6.u32);
	// stb r11,92(r3)
	REX_STORE_U8(ctx.r3.u32 + 92, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821960F8) {
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
	// lwz r30,132(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82196134
	if (ctx.cr6.eq) goto loc_82196134;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e48c0
	ctx.lr = 0x82196124;
	sub_820E48C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c80a8
	ctx.lr = 0x8219612C;
	sub_822C80A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
loc_82196134:
	// lwz r3,168(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 168);
	// bl 0x820e73c0
	ctx.lr = 0x8219613C;
	sub_820E73C0(ctx, base);
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// bl 0x820e73c0
	ctx.lr = 0x82196144;
	sub_820E73C0(ctx, base);
	// lwz r3,176(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 176);
	// bl 0x820e73c0
	ctx.lr = 0x8219614C;
	sub_820E73C0(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 180);
	// bl 0x820e73c0
	ctx.lr = 0x82196154;
	sub_820E73C0(ctx, base);
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

DEFINE_REX_FUNC(sub_82198CB0) {
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
	ctx.lr = 0x82198CB8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r3,144
	r29.s64 = ctx.r3.s64 + 144;
	// addi r11,r11,4444
	ctx.r11.s64 = ctx.r11.s64 + 4444;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// bl 0x822d5870
	ctx.lr = 0x82198CF8;
	sub_822D5870(ctx, base);
	// lwz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 88);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,250
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 250, ctx.xer);
	// ble cr6,0x82198d10
	if (!ctx.cr6.gt) goto loc_82198D10;
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// b 0x82198d54
	goto loc_82198D54;
loc_82198D10:
	// cmplwi cr6,r11,200
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 200, ctx.xer);
	// ble cr6,0x82198d20
	if (!ctx.cr6.gt) goto loc_82198D20;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82198d50
	goto loc_82198D50;
loc_82198D20:
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x82198d30
	if (!ctx.cr6.gt) goto loc_82198D30;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82198d50
	goto loc_82198D50;
loc_82198D30:
	// cmplwi cr6,r11,70
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 70, ctx.xer);
	// ble cr6,0x82198d40
	if (!ctx.cr6.gt) goto loc_82198D40;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82198d50
	goto loc_82198D50;
loc_82198D40:
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
loc_82198D50:
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_82198D54:
	// extsw r11,r26
	ctx.r11.s64 = r26.s32;
	// lwz r9,96(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 96);
	// extsw r8,r27
	ctx.r8.s64 = r27.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r9.u32);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r11,100(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 100);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stw r11,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r11.u32);
	// lwz r11,104(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 104);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stw r11,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r11.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 108);
	// stw r11,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r11.u32);
	// lwz r11,92(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 92);
	// stw r11,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r11.u32);
	// stb r10,172(r31)
	REX_STORE_U8(r31.u32 + 172, ctx.r10.u8);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stfs f13,80(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// stw r28,104(r31)
	REX_STORE_U32(r31.u32 + 104, r28.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// stw r25,96(r31)
	REX_STORE_U32(r31.u32 + 96, r25.u32);
	// stw r24,100(r31)
	REX_STORE_U32(r31.u32 + 100, r24.u32);
	// stw r11,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8219C1B0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,-32480
	ctx.r11.s64 = ctx.r11.s64 + -32480;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lwz r4,232(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 232);
	// addi r11,r10,-8304
	ctx.r11.s64 = ctx.r10.s64 + -8304;
	// lwz r3,496(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 496);
	// b 0x82190670
	sub_82190670(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8219CF50) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister temp{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r10,76(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// lwz r7,52(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r9,30520
	ctx.r6.s64 = ctx.r9.s64 + 30520;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,32(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// rlwinm r10,r10,8,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1;
	// sth r11,8(r3)
	REX_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// stb r9,11(r3)
	REX_STORE_U8(ctx.r3.u32 + 11, ctx.r9.u8);
	// addi r31,r3,84
	r31.s64 = ctx.r3.s64 + 84;
	// stb r10,10(r3)
	REX_STORE_U8(ctx.r3.u32 + 10, ctx.r10.u8);
	// lwz r10,52(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 52);
	// lfs f0,1996(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lfs f13,1992(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// lhz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stb r10,24(r3)
	REX_STORE_U8(ctx.r3.u32 + 24, ctx.r10.u8);
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stb r11,25(r3)
	REX_STORE_U8(ctx.r3.u32 + 25, ctx.r11.u8);
	// stb r11,26(r3)
	REX_STORE_U8(ctx.r3.u32 + 26, ctx.r11.u8);
	// stw r31,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// stb r8,29(r3)
	REX_STORE_U8(ctx.r3.u32 + 29, ctx.r8.u8);
	// stb r9,30(r3)
	REX_STORE_U8(ctx.r3.u32 + 30, ctx.r9.u8);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219F010) {
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
	// bl 0x8219ee50
	ctx.lr = 0x8219F034;
	sub_8219EE50(ctx, base);
	// bl 0x8219eed0
	ctx.lr = 0x8219F038;
	sub_8219EED0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A0650) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821A0658;
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
	// addi r6,r8,6516
	ctx.r6.s64 = ctx.r8.s64 + 6516;
	// addi r9,r11,-216
	ctx.r9.s64 = ctx.r11.s64 + -216;
	// addi r8,r10,1544
	ctx.r8.s64 = ctx.r10.s64 + 1544;
	// addi r7,r7,760
	ctx.r7.s64 = ctx.r7.s64 + 760;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,649
	ctx.r4.s64 = 649;
	// bl 0x821f7d50
	ctx.lr = 0x821A068C;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a06a8
	if (ctx.cr0.eq) goto loc_821A06A8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,31764
	ctx.r11.s64 = ctx.r11.s64 + 31764;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x821a06ac
	goto loc_821A06AC;
loc_821A06A8:
	// li r30,0
	r30.s64 = 0;
loc_821A06AC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x821a06bc
	if (!ctx.cr6.eq) goto loc_821A06BC;
loc_821A06B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821a0710
	goto loc_821A0710;
loc_821A06BC:
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
	ctx.lr = 0x821A06D8;
	sub_82190558(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821a06ec
	if (!ctx.cr0.eq) goto loc_821A06EC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218cb20
	ctx.lr = 0x821A06E8;
	sub_8218CB20(ctx, base);
	// b 0x821a06b4
	goto loc_821A06B4;
loc_821A06EC:
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
	ctx.lr = 0x821A0704;
	sub_820E01B0(ctx, base);
	// addi r11,r31,60
	ctx.r11.s64 = r31.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
loc_821A0710:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821A2D60) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,-32480
	ctx.r11.s64 = ctx.r11.s64 + -32480;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,64(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
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

DEFINE_REX_FUNC(sub_821A2FE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821A2FF0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r3,52(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821a3024
	if (!ctx.cr6.eq) goto loc_821A3024;
	// bl 0x8218ab28
	ctx.lr = 0x821A3018;
	sub_8218AB28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// b 0x821a3058
	goto loc_821A3058;
loc_821A3024:
	// li r30,0
	r30.s64 = 0;
	// bl 0x8218ab28
	ctx.lr = 0x821A302C;
	sub_8218AB28(ctx, base);
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// b 0x821a303c
	goto loc_821A303C;
loc_821A3034:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lbzx r11,r30,r29
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + r29.u32);
loc_821A303C:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821a3034
	if (!ctx.cr0.eq) goto loc_821A3034;
	// addi r5,r30,1
	ctx.r5.s64 = r30.s64 + 1;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822d6450
	ctx.lr = 0x821A3054;
	sub_822D6450(ctx, base);
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
loc_821A3058:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821A4C80) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821a4c90
	if (!ctx.cr6.eq) goto loc_821A4C90;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821A4C90:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-26560
	ctx.r11.s64 = ctx.r11.s64 + -26560;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,3128(r11)
	REX_STORE_U32(ctx.r11.u32 + 3128, ctx.r10.u32);
	// sth r9,3132(r11)
	REX_STORE_U16(ctx.r11.u32 + 3132, ctx.r9.u16);
	// stw r8,3136(r11)
	REX_STORE_U32(ctx.r11.u32 + 3136, ctx.r8.u32);
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,1024(r11)
	REX_STORE_U32(ctx.r11.u32 + 1024, ctx.r10.u32);
	// b 0x821a40d8
	sub_821A40D8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821A5E68) {
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
	// beq cr6,0x821a5eac
	if (ctx.cr6.eq) goto loc_821A5EAC;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r4,17664
	ctx.r4.s64 = 17664;
	// addi r11,r11,-8304
	ctx.r11.s64 = ctx.r11.s64 + -8304;
	// lwz r3,496(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 496);
	// bl 0x82190670
	ctx.lr = 0x821A5EAC;
	sub_82190670(ctx, base);
loc_821A5EAC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x821a5760
	ctx.lr = 0x821A5EB8;
	sub_821A5760(ctx, base);
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

DEFINE_REX_FUNC(sub_821A7558) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// lfs f11,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f11.f64 = double(temp.f32);
loc_821A7578:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x821a75c8
	if (ctx.cr6.lt) goto loc_821A75C8;
loc_821A7584:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// stfs f11,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stw r9,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r9.u32);
	// stfs f11,92(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f13,100(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f12,104(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// ble cr6,0x821a7584
	if (!ctx.cr6.gt) goto loc_821A7584;
loc_821A75C8:
	// bdnz 0x821a7578
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A7578;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A9290) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821A9298;
	// stwu r1,-2192(r1)
	ea = -2192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,39
	ctx.r3.u64 = ctx.r3.u64 | 39;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x821A92B8;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r8,256
	ctx.r8.s64 = 256;
	// bl 0x82208750
	ctx.lr = 0x821A92D4;
	sub_82208750(ctx, base);
	// lwz r11,140(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 140);
	// cmpwi cr6,r11,1110
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1110, ctx.xer);
	// bgt cr6,0x821a9320
	if (ctx.cr6.gt) goto loc_821A9320;
	// beq cr6,0x821a9340
	if (ctx.cr6.eq) goto loc_821A9340;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821a9314
	if (ctx.cr6.eq) goto loc_821A9314;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821a9308
	if (ctx.cr6.eq) goto loc_821A9308;
	// cmpwi cr6,r11,123
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 123, ctx.xer);
	// beq cr6,0x821a9400
	if (ctx.cr6.eq) goto loc_821A9400;
loc_821A92FC:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,31
	ctx.r3.u64 = ctx.r3.u64 | 31;
	// b 0x821a9348
	goto loc_821A9348;
loc_821A9308:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,145
	ctx.r3.u64 = ctx.r3.u64 | 145;
	// b 0x821a9348
	goto loc_821A9348;
loc_821A9314:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// b 0x821a9348
	goto loc_821A9348;
loc_821A9320:
	// cmpwi cr6,r11,1167
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1167, ctx.xer);
	// beq cr6,0x821a9340
	if (ctx.cr6.eq) goto loc_821A9340;
	// cmpwi cr6,r11,1391
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1391, ctx.xer);
	// ble cr6,0x821a92fc
	if (!ctx.cr6.gt) goto loc_821A92FC;
	// cmpwi cr6,r11,1393
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1393, ctx.xer);
	// ble cr6,0x821a9400
	if (!ctx.cr6.gt) goto loc_821A9400;
	// cmpwi cr6,r11,1617
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1617, ctx.xer);
	// bne cr6,0x821a92fc
	if (!ctx.cr6.eq) goto loc_821A92FC;
loc_821A9340:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,189
	ctx.r3.u64 = ctx.r3.u64 | 189;
loc_821A9348:
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x821A9350;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r8,256
	ctx.r8.s64 = 256;
	// addi r7,r1,624
	ctx.r7.s64 = ctx.r1.s64 + 624;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82208750
	ctx.lr = 0x821A936C;
	sub_82208750(ctx, base);
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,46
	ctx.r3.u64 = ctx.r3.u64 | 46;
	// bl 0x820e68b8
	ctx.lr = 0x821A937C;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r7,r1,1136
	ctx.r7.s64 = ctx.r1.s64 + 1136;
	// li r8,256
	ctx.r8.s64 = 256;
	// bl 0x82208750
	ctx.lr = 0x821A9398;
	sub_82208750(ctx, base);
	// addi r30,r29,104
	r30.s64 = r29.s64 + 104;
	// addi r11,r1,1136
	ctx.r11.s64 = ctx.r1.s64 + 1136;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d5870
	ctx.lr = 0x821A93B4;
	sub_822D5870(ctx, base);
	// addi r10,r29,132
	ctx.r10.s64 = r29.s64 + 132;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,624
	ctx.r5.s64 = ctx.r1.s64 + 624;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82208d50
	ctx.lr = 0x821A93DC;
	sub_82208D50(ctx, base);
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// beq cr6,0x821a93f8
	if (ctx.cr6.eq) goto loc_821A93F8;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r11,3394(r31)
	REX_STORE_U8(r31.u32 + 3394, ctx.r11.u8);
	// stb r11,88(r29)
	REX_STORE_U8(r29.u32 + 88, ctx.r11.u8);
	// stw r10,84(r29)
	REX_STORE_U32(r29.u32 + 84, ctx.r10.u32);
loc_821A93F8:
	// addi r1,r1,2192
	ctx.r1.s64 = ctx.r1.s64 + 2192;
	// b 0x822d4edc
	return;
loc_821A9400:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,192
	ctx.r3.u64 = ctx.r3.u64 | 192;
	// b 0x821a9348
	goto loc_821A9348;
}

DEFINE_REX_FUNC(sub_821AFDF0) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lwz r11,-9952(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9952);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-9952(r10)
	REX_STORE_U32(ctx.r10.u32 + -9952, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B0660) {
	REX_FUNC_PROLOGUE();
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821b06ac
	if (!ctx.cr6.gt) goto loc_821B06AC;
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r7,52(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// lwz r8,40(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r9,48(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r10,r10,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// subf r7,r10,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r10.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// stw r7,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r7.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// xori r3,r6,1
	ctx.r3.u64 = ctx.r6.u64 ^ 1;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// blr 
	return;
loc_821B06AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B16A0) {
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
	// beq 0x821b16f4
	if (ctx.cr0.eq) goto loc_821B16F4;
	// lhz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 88);
	// cmplwi cr6,r10,19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 19, ctx.xer);
	// bne cr6,0x821b16f4
	if (!ctx.cr6.eq) goto loc_821B16F4;
	// lha r11,260(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 260));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfs f0,5468(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 5468);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfs f13,5476(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 5476);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,28724(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28724);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// blr 
	return;
loc_821B16F4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,5468(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 5468);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9892(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 9892);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B34F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x821B34F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// lhz r11,432(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 432);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821b3518
	if (ctx.cr0.eq) goto loc_821B3518;
loc_821B3510:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821b3658
	goto loc_821B3658;
loc_821B3518:
	// lhz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 72);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821b3510
	if (!ctx.cr6.eq) goto loc_821B3510;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lwz r11,340(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 340);
	// lwz r10,316(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 316);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addi r29,r9,-7072
	r29.s64 = ctx.r9.s64 + -7072;
	// mulli r9,r11,4896
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(4896));
	// lhz r11,7226(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 7226);
	// add r30,r9,r10
	r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r8,10922
	ctx.r9.u64 = ctx.r8.u64 | 10922;
	// ori r10,r10,11818
	ctx.r10.u64 = ctx.r10.u64 | 11818;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// sth r11,8(r30)
	REX_STORE_U16(r30.u32 + 8, ctx.r11.u16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lhz r11,8122(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 8122);
	// sth r11,10(r30)
	REX_STORE_U16(r30.u32 + 10, ctx.r11.u16);
	// lhzx r11,r29,r9
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + ctx.r9.u32);
	// sth r11,12(r30)
	REX_STORE_U16(r30.u32 + 12, ctx.r11.u16);
	// lhzx r11,r29,r10
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + ctx.r10.u32);
	// sth r11,14(r30)
	REX_STORE_U16(r30.u32 + 14, ctx.r11.u16);
	// bl 0x821b3248
	ctx.lr = 0x821B3578;
	sub_821B3248(ctx, base);
	// addis r11,r29,1
	ctx.r11.s64 = r29.s64 + 65536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,3696
	ctx.r4.s64 = ctx.r11.s64 + 3696;
	// bl 0x821b3248
	ctx.lr = 0x821B3588;
	sub_821B3248(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r28,r11,-27096
	r28.s64 = ctx.r11.s64 + -27096;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821a1148
	ctx.lr = 0x821B3598;
	sub_821A1148(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// stw r3,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// stw r3,576(r31)
	REX_STORE_U32(r31.u32 + 576, ctx.r3.u32);
	// lwz r9,580(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 580);
	// stw r3,-9944(r11)
	REX_STORE_U32(ctx.r11.u32 + -9944, ctx.r3.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x821b35d0
	if (!ctx.cr6.gt) goto loc_821B35D0;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 328);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821b35d8
	goto loc_821B35D8;
loc_821B35D0:
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_821B35D8:
	// stw r11,580(r31)
	REX_STORE_U32(r31.u32 + 580, ctx.r11.u32);
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// lwz r4,10152(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 10152);
	// bl 0x82165180
	ctx.lr = 0x821B35E8;
	sub_82165180(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r3,r30,2460
	ctx.r3.s64 = r30.s64 + 2460;
	// ori r11,r11,13848
	ctx.r11.u64 = ctx.r11.u64 | 13848;
	// lwzx r4,r29,r11
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// bl 0x82165180
	ctx.lr = 0x821B35FC;
	sub_82165180(ctx, base);
	// lwz r11,340(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 340);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,332(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 332);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,336(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 336);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r7,r11,r10
	ctx.r7.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// mullw r7,r7,r10
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r11,340(r31)
	REX_STORE_U32(r31.u32 + 340, ctx.r11.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r9,336(r31)
	REX_STORE_U32(r31.u32 + 336, ctx.r9.u32);
	// mulli r29,r11,4896
	r29.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(4896));
	// lwz r30,316(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 316);
	// andc r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bl 0x821a1148
	ctx.lr = 0x821B3648;
	sub_821A1148(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r11,r29,r30
	REX_STORE_U32(r29.u32 + r30.u32, ctx.r11.u32);
	// stw r11,572(r31)
	REX_STORE_U32(r31.u32 + 572, ctx.r11.u32);
loc_821B3658:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821BF148) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,896
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(896));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,7224
	ctx.r10.s64 = ctx.r11.s64 + 7224;
	// addi r11,r10,144
	ctx.r11.s64 = ctx.r10.s64 + 144;
	// lwz r9,148(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 148);
	// lhz r6,2(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// addi r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 + 6;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r6,r9,r11
	REX_STORE_U16(ctx.r9.u32 + ctx.r11.u32, ctx.r6.u16);
	// lwz r9,148(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 148);
	// addi r9,r9,134
	ctx.r9.s64 = ctx.r9.s64 + 134;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r5,r9,r11
	REX_STORE_U16(ctx.r9.u32 + ctx.r11.u32, ctx.r5.u16);
	// lhz r9,2(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x821bf1b0
	if (ctx.cr6.eq) goto loc_821BF1B0;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// addi r10,r9,70
	ctx.r10.s64 = ctx.r9.s64 + 70;
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r10,r11
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u16);
	// b 0x821bf1c0
	goto loc_821BF1C0;
loc_821BF1B0:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,70
	ctx.r10.s64 = ctx.r10.s64 + 70;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r8,r10,r11
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u16);
loc_821BF1C0:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C0CA8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821c0bd0
	ctx.lr = 0x821C0CC0;
	sub_821C0BD0(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822091c8
	ctx.lr = 0x821C0CD0;
	sub_822091C8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c9160
	ctx.lr = 0x821C0CD8;
	sub_822C9160(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// bl 0x822091c8
	ctx.lr = 0x821C0CF0;
	sub_822091C8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822c9160
	ctx.lr = 0x821C0CF8;
	sub_822C9160(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// bl 0x822091c8
	ctx.lr = 0x821C0D10;
	sub_822091C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c9148
	ctx.lr = 0x821C0D18;
	sub_822C9148(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// addi r4,r31,90
	ctx.r4.s64 = r31.s64 + 90;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// sth r11,88(r31)
	REX_STORE_U16(r31.u32 + 88, ctx.r11.u16);
	// bl 0x822091c8
	ctx.lr = 0x821C0D30;
	sub_822091C8(ctx, base);
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x822c9148
	ctx.lr = 0x821C0D38;
	sub_822C9148(ctx, base);
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// sth r11,90(r31)
	REX_STORE_U16(r31.u32 + 90, ctx.r11.u16);
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

DEFINE_REX_FUNC(sub_821C2CD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lhz r11,10(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c2d30
	if (ctx.cr0.eq) goto loc_821C2D30;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// addi r10,r9,23240
	ctx.r10.s64 = ctx.r9.s64 + 23240;
	// mulli r7,r8,284
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(284));
	// lwz r11,23240(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 23240);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// lwzx r10,r7,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c2d30
	if (ctx.cr0.eq) goto loc_821C2D30;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,16816(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16816);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12184(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12184);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821c2d40
	goto loc_821C2D40;
loc_821C2D30:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16904);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2388(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2388);
	ctx.f13.f64 = double(temp.f32);
loc_821C2D40:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lbz r10,1829(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1829);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821c2d60
	if (ctx.cr0.eq) goto loc_821C2D60;
	// lfs f12,1840(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1840);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
loc_821C2D60:
	// lfs f12,10240(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10240);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x821c2d74
	if (ctx.cr6.gt) goto loc_821C2D74;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_821C2D74:
	// stfs f0,10240(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 10240, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C5098) {
	REX_FUNC_PROLOGUE();
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bgt cr6,0x821c50f4
	if (ctx.cr6.gt) goto loc_821C50F4;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,11992
	ctx.r12.s64 = ctx.r12.s64 + 11992;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32228
	ctx.r12.s64 = -2112094208;
	// nop 
	// addi r12,r12,20684
	ctx.r12.s64 = ctx.r12.s64 + 20684;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_821C50D4;
	case 1:
		goto loc_821C50F4;
	case 2:
		goto loc_821C50F4;
	case 3:
		goto loc_821C50CC;
	case 4:
		goto loc_821C50CC;
	case 5:
		goto loc_821C50F4;
	case 6:
		goto loc_821C50F4;
	case 7:
		goto loc_821C50F4;
	case 8:
		goto loc_821C50F4;
	case 9:
		goto loc_821C50F4;
	case 10:
		goto loc_821C50EC;
	case 11:
		goto loc_821C50F4;
	case 12:
		goto loc_821C50D4;
	case 13:
		goto loc_821C50F4;
	case 14:
		goto loc_821C50F4;
	case 15:
		goto loc_821C50F4;
	case 16:
		goto loc_821C50DC;
	case 17:
		goto loc_821C50E4;
	case 18:
		goto loc_821C50F4;
	case 19:
		goto loc_821C50D4;
	case 20:
		goto loc_821C50D4;
	case 21:
		goto loc_821C50CC;
	case 22:
		goto loc_821C50D4;
	case 23:
		goto loc_821C50F4;
	case 24:
		goto loc_821C50CC;
	case 25:
		goto loc_821C50F4;
	case 26:
		goto loc_821C50F4;
	case 27:
		goto loc_821C50CC;
	case 28:
		goto loc_821C50F4;
	case 29:
		goto loc_821C50F4;
	case 30:
		goto loc_821C50F4;
	case 31:
		goto loc_821C50E4;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_821C50CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821C50D4:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_821C50DC:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_821C50E4:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_821C50EC:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_821C50F4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C5E58) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10588(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 10588, temp.u32);
	// stfs f0,10584(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 10584, temp.u32);
	// stfs f0,10580(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 10580, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C6528) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,10568(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 10568, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C66F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-7176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -7176);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x821c67dc
	if (ctx.cr6.eq) goto loc_821C67DC;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x821c67dc
	if (ctx.cr6.lt) goto loc_821C67DC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x821c672c
	if (!ctx.cr6.gt) goto loc_821C672C;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x821c67dc
	if (!ctx.cr6.eq) goto loc_821C67DC;
loc_821C672C:
	// lbz r11,166(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 166);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c6794
	if (ctx.cr0.eq) goto loc_821C6794;
	// lbz r11,165(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 165);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c6794
	if (!ctx.cr0.eq) goto loc_821C6794;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,5732(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 5732);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,1992
	ctx.r11.s64 = ctx.r11.s64 + 1992;
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x821c6760
	if (ctx.cr6.gt) goto loc_821C6760;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_821C6760:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,16928(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16928);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x821c6774
	if (ctx.cr6.lt) goto loc_821C6774;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_821C6774:
	// fsubs f11,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,2352(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2352);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12300(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12300);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fnmsubs f13,f13,f12,f0
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f12.f64, -ctx.f0.f64)));
	// b 0x821c67a4
	goto loc_821C67A4;
loc_821C6794:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,1992
	ctx.r11.s64 = ctx.r11.s64 + 1992;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_821C67A4:
	// lbz r11,174(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 174);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c67e4
	if (!ctx.cr0.eq) goto loc_821C67E4;
	// lfs f11,10184(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10184);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,27124(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 27124);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f10,f13,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f11.f64)));
	// stfs f13,10184(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 10184, temp.u32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// b 0x821c67e4
	goto loc_821C67E4;
loc_821C67DC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
loc_821C67E4:
	// stfs f0,10184(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 10184, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CA270) {
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
	// bl 0x822d4e74
	ctx.lr = 0x821CA278;
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f30.u64);
	// stfd f31,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r31,-32168
	r31.s64 = -2108162048;
	// addi r29,r11,-9624
	r29.s64 = ctx.r11.s64 + -9624;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r9,r11,-9448
	ctx.r9.s64 = ctx.r11.s64 + -9448;
	// lwz r10,-7176(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + -7176);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,-4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -4);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// mulli r10,r11,120
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(120));
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// li r23,1
	r23.s64 = 1;
	// add r30,r10,r9
	r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bne cr6,0x821ca344
	if (!ctx.cr6.eq) goto loc_821CA344;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r5,r11,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r7,r5,r7
	temp.u8 = (~ctx.r5.u32 + ctx.r7.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r5.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// stw r11,-4(r29)
	REX_STORE_U32(r29.u32 + -4, ctx.r11.u32);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821ca33c
	if (ctx.cr6.eq) goto loc_821CA33C;
loc_821CA2F0:
	// mulli r7,r11,120
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(120));
	// add r30,r7,r9
	r30.u64 = ctx.r7.u64 + ctx.r9.u64;
	// ld r7,8(r30)
	ctx.r7.u64 = REX_LOAD_U64(r30.u32 + 8);
	// cmpldi cr6,r7,0
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, 0, ctx.xer);
	// bne cr6,0x821ca310
	if (!ctx.cr6.eq) goto loc_821CA310;
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821ca334
	if (ctx.cr6.eq) goto loc_821CA334;
loc_821CA310:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r5,r11,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r7,r5,r7
	temp.u8 = (~ctx.r5.u32 + ctx.r7.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r5.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// stw r11,-4(r29)
	REX_STORE_U32(r29.u32 + -4, ctx.r11.u32);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821ca2f0
	if (!ctx.cr6.eq) goto loc_821CA2F0;
loc_821CA334:
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821ca364
	if (!ctx.cr6.eq) goto loc_821CA364;
loc_821CA33C:
	// mulli r11,r11,120
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(120));
	// add r30,r11,r9
	r30.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_821CA344:
	// ld r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U64(r30.u32 + 8);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x821ca354
	if (ctx.cr6.eq) goto loc_821CA354;
	// bl 0x821f7908
	ctx.lr = 0x821CA354;
	sub_821F7908(ctx, base);
loc_821CA354:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ca364
	if (ctx.cr6.eq) goto loc_821CA364;
	// sth r23,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, r23.u16);
loc_821CA364:
	// lwz r11,-7176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -7176);
	// li r28,0
	r28.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// beq cr6,0x821ca388
	if (ctx.cr6.eq) goto loc_821CA388;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x821ca398
	if (ctx.cr6.eq) goto loc_821CA398;
	// li r4,64
	ctx.r4.s64 = 64;
loc_821CA388:
	// lwz r11,-7176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -7176);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x821ca39c
	if (!ctx.cr6.eq) goto loc_821CA39C;
loc_821CA398:
	// li r5,700
	ctx.r5.s64 = 700;
loc_821CA39C:
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r7,-32228
	ctx.r7.s64 = -2112094208;
	// addi r6,r8,12376
	ctx.r6.s64 = ctx.r8.s64 + 12376;
	// addi r9,r11,22384
	ctx.r9.s64 = ctx.r11.s64 + 22384;
	// addi r8,r10,-24616
	ctx.r8.s64 = ctx.r10.s64 + -24616;
	// addi r7,r7,22056
	ctx.r7.s64 = ctx.r7.s64 + 22056;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821366d8
	ctx.lr = 0x821CA3C4;
	sub_821366D8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,-4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + -4);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r11,r31,80
	ctx.r11.s64 = r31.s64 + 80;
	// stw r28,68(r31)
	REX_STORE_U32(r31.u32 + 68, r28.u32);
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// sth r10,80(r31)
	REX_STORE_U16(r31.u32 + 80, ctx.r10.u16);
	// stw r28,100(r31)
	REX_STORE_U32(r31.u32 + 100, r28.u32);
	// stw r23,88(r31)
	REX_STORE_U32(r31.u32 + 88, r23.u32);
	// bl 0x821c9268
	ctx.lr = 0x821CA3F4;
	sub_821C9268(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// sth r3,82(r31)
	REX_STORE_U16(r31.u32 + 82, ctx.r3.u16);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// sth r27,86(r31)
	REX_STORE_U16(r31.u32 + 86, r27.u16);
	// li r28,3
	r28.s64 = 3;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,112(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// stfs f31,116(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 116, temp.u32);
	// stfs f31,120(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// lfs f30,2344(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2344);
	f30.f64 = double(temp.f32);
loc_821CA420:
	// lwz r27,0(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r26,32
	r26.s64 = 32;
loc_821CA428:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x820e01b0
	ctx.lr = 0x821CA430;
	sub_820E01B0(ctx, base);
	// stfs f31,48(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r27.u32 + 48, temp.u32);
	// stfs f30,52(r27)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r27.u32 + 52, temp.u32);
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// stfs f31,56(r27)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r27.u32 + 56, temp.u32);
	// addi r27,r27,64
	r27.s64 = r27.s64 + 64;
	// bne 0x821ca428
	if (!ctx.cr0.eq) goto loc_821CA428;
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x821ca420
	if (!ctx.cr0.eq) goto loc_821CA420;
	// lwz r11,-4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r10,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r10,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,-4(r29)
	REX_STORE_U32(r29.u32 + -4, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-96(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_821D5CD0) {
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
	ctx.lr = 0x821D5CD8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r27,r10,432
	r27.s64 = ctx.r10.s64 + 432;
	// addi r31,r11,-9496
	r31.s64 = ctx.r11.s64 + -9496;
	// lhz r11,432(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 432);
	// lwz r10,220(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 220);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lha r25,32(r31)
	r25.s64 = int16_t(REX_LOAD_U16(r31.u32 + 32));
	// lwz r29,8(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// beq 0x821d5d18
	if (ctx.cr0.eq) goto loc_821D5D18;
	// cmplwi cr6,r25,5
	ctx.cr6.compare<uint32_t>(r25.u32, 5, ctx.xer);
	// bge cr6,0x821d61e8
	if (!ctx.cr6.lt) goto loc_821D61E8;
	// bl 0x821d58d8
	ctx.lr = 0x821D5D14;
	sub_821D58D8(ctx, base);
	// b 0x821d61e8
	goto loc_821D61E8;
loc_821D5D18:
	// li r26,0
	r26.s64 = 0;
	// li r24,4
	r24.s64 = 4;
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(r25.u32, 1, ctx.xer);
	// blt cr6,0x821d6150
	if (ctx.cr6.lt) goto loc_821D6150;
	// beq cr6,0x821d5e08
	if (ctx.cr6.eq) goto loc_821D5E08;
	// cmplwi cr6,r25,3
	ctx.cr6.compare<uint32_t>(r25.u32, 3, ctx.xer);
	// blt cr6,0x821d5d60
	if (ctx.cr6.lt) goto loc_821D5D60;
	// beq cr6,0x821d5d4c
	if (ctx.cr6.eq) goto loc_821D5D4C;
	// cmplwi cr6,r25,5
	ctx.cr6.compare<uint32_t>(r25.u32, 5, ctx.xer);
	// bge cr6,0x821d61ac
	if (!ctx.cr6.lt) goto loc_821D61AC;
	// stb r26,5(r29)
	REX_STORE_U8(r29.u32 + 5, r26.u8);
	// stb r26,5(r30)
	REX_STORE_U8(r30.u32 + 5, r26.u8);
	// b 0x821d5e00
	goto loc_821D5E00;
loc_821D5D4C:
	// stb r26,5(r29)
	REX_STORE_U8(r29.u32 + 5, r26.u8);
	// stb r26,5(r30)
	REX_STORE_U8(r30.u32 + 5, r26.u8);
	// lwz r11,216(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 216);
	// stw r24,5464(r11)
	REX_STORE_U32(ctx.r11.u32 + 5464, r24.u32);
	// b 0x821d5e00
	goto loc_821D5E00;
loc_821D5D60:
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r27,84
	ctx.r3.s64 = r27.s64 + 84;
	// bl 0x821d6210
	ctx.lr = 0x821D5D6C;
	sub_821D6210(ctx, base);
	// li r28,1
	r28.s64 = 1;
	// stb r28,5(r29)
	REX_STORE_U8(r29.u32 + 5, r28.u8);
	// stb r28,5(r30)
	REX_STORE_U8(r30.u32 + 5, r28.u8);
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821d5d90
	if (!ctx.cr0.eq) goto loc_821D5D90;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x8212bd08
	ctx.lr = 0x821D5D90;
	sub_8212BD08(ctx, base);
loc_821D5D90:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d5810
	ctx.lr = 0x821D5D98;
	sub_821D5810(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821d5dac
	if (!ctx.cr0.eq) goto loc_821D5DAC;
	// lha r11,34(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 34));
	// cmpwi cr6,r11,600
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 600, ctx.xer);
	// blt cr6,0x821d5e00
	if (ctx.cr6.lt) goto loc_821D5E00;
loc_821D5DAC:
	// lhz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,36(r31)
	REX_STORE_U16(r31.u32 + 36, ctx.r11.u16);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// blt cr6,0x821d5df8
	if (ctx.cr6.lt) goto loc_821D5DF8;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,32(r31)
	REX_STORE_U16(r31.u32 + 32, ctx.r11.u16);
	// bl 0x821e2658
	ctx.lr = 0x821D5DD4;
	sub_821E2658(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e34e0
	ctx.lr = 0x821D5DE0;
	sub_821E34E0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,13420
	ctx.r11.s64 = ctx.r11.s64 + 13420;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x821D5DF4;
	sub_821E2FD0(ctx, base);
	// b 0x821d5e00
	goto loc_821D5E00;
loc_821D5DF8:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// sth r26,32(r31)
	REX_STORE_U16(r31.u32 + 32, r26.u16);
loc_821D5E00:
	// bl 0x821d58d8
	ctx.lr = 0x821D5E04;
	sub_821D58D8(ctx, base);
	// b 0x821d61ac
	goto loc_821D61AC;
loc_821D5E08:
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r27,84
	ctx.r3.s64 = r27.s64 + 84;
	// bl 0x821d6210
	ctx.lr = 0x821D5E14;
	sub_821D6210(ctx, base);
	// stb r26,5(r29)
	REX_STORE_U8(r29.u32 + 5, r26.u8);
	// stb r26,5(r30)
	REX_STORE_U8(r30.u32 + 5, r26.u8);
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821d5e34
	if (!ctx.cr0.eq) goto loc_821D5E34;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x8212bd08
	ctx.lr = 0x821D5E34;
	sub_8212BD08(ctx, base);
loc_821D5E34:
	// bl 0x821d58d8
	ctx.lr = 0x821D5E38;
	sub_821D58D8(ctx, base);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// addi r28,r11,-27144
	r28.s64 = ctx.r11.s64 + -27144;
	// lha r11,36(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 36));
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x821d6108
	if (ctx.cr6.gt) goto loc_821D6108;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821d5edc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821D5EDC;
	// bdzf 4*cr6+eq,0x821d5f48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821D5F48;
	// bdzf 4*cr6+eq,0x821d5f94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821D5F94;
	// bdzf 4*cr6+eq,0x821d5fe4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821D5FE4;
	// bdzf 4*cr6+eq,0x821d6024
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821D6024;
	// bdzf 4*cr6+eq,0x821d604c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821D604C;
	// bdzf 4*cr6+eq,0x821d608c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821D608C;
	// bne cr6,0x821d60b4
	if (!ctx.cr6.eq) goto loc_821D60B4;
	// lbz r11,194(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 194);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d5eb8
	if (ctx.cr0.eq) goto loc_821D5EB8;
	// lwz r11,5792(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 5792);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821d5e98
	if (ctx.cr6.eq) goto loc_821D5E98;
	// lha r11,5818(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 5818));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821d5eb8
	if (!ctx.cr0.gt) goto loc_821D5EB8;
loc_821D5E98:
	// lhz r11,38(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 38);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,38(r31)
	REX_STORE_U16(r31.u32 + 38, ctx.r11.u16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x821d5eb8
	if (!ctx.cr6.gt) goto loc_821D5EB8;
	// li r11,2
	ctx.r11.s64 = 2;
	// sth r11,32(r31)
	REX_STORE_U16(r31.u32 + 32, ctx.r11.u16);
loc_821D5EB8:
	// li r11,25
	ctx.r11.s64 = 25;
loc_821D5EBC:
	// lbz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 0);
	// stw r11,80(r29)
	REX_STORE_U32(r29.u32 + 80, ctx.r11.u32);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
loc_821D5EC8:
	// mulli r11,r11,9504
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9504));
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x820f34a8
	ctx.lr = 0x821D5ED8;
	sub_820F34A8(ctx, base);
	// b 0x821d6108
	goto loc_821D6108;
loc_821D5EDC:
	// lbz r11,194(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 194);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d5f20
	if (ctx.cr0.eq) goto loc_821D5F20;
	// lwz r11,5792(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 5792);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821d5f00
	if (ctx.cr6.eq) goto loc_821D5F00;
	// lha r11,5820(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 5820));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821d5f20
	if (!ctx.cr0.gt) goto loc_821D5F20;
loc_821D5F00:
	// lhz r11,38(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 38);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,38(r31)
	REX_STORE_U16(r31.u32 + 38, ctx.r11.u16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x821d5f20
	if (!ctx.cr6.gt) goto loc_821D5F20;
	// li r11,2
	ctx.r11.s64 = 2;
	// sth r11,32(r31)
	REX_STORE_U16(r31.u32 + 32, ctx.r11.u16);
loc_821D5F20:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,80(r29)
	REX_STORE_U32(r29.u32 + 80, ctx.r11.u32);
	// lhz r11,90(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 90);
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// bne cr6,0x821d5f3c
	if (!ctx.cr6.eq) goto loc_821D5F3C;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,80(r29)
	REX_STORE_U32(r29.u32 + 80, ctx.r11.u32);
loc_821D5F3C:
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x821d5ec8
	goto loc_821D5EC8;
loc_821D5F48:
	// lbz r11,194(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 194);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d5f8c
	if (ctx.cr0.eq) goto loc_821D5F8C;
	// lwz r11,5792(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 5792);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821d5f8c
	if (!ctx.cr6.eq) goto loc_821D5F8C;
	// lwz r11,5796(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 5796);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821d5f8c
	if (!ctx.cr6.eq) goto loc_821D5F8C;
	// lhz r11,38(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 38);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,38(r31)
	REX_STORE_U16(r31.u32 + 38, ctx.r11.u16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x821d5f8c
	if (!ctx.cr6.gt) goto loc_821D5F8C;
	// li r11,2
	ctx.r11.s64 = 2;
	// sth r11,32(r31)
	REX_STORE_U16(r31.u32 + 32, ctx.r11.u16);
loc_821D5F8C:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x821d5ebc
	goto loc_821D5EBC;
loc_821D5F94:
	// lbz r11,175(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 175);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d5fc0
	if (ctx.cr0.eq) goto loc_821D5FC0;
	// lhz r11,38(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 38);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,38(r31)
	REX_STORE_U16(r31.u32 + 38, ctx.r11.u16);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x821d5fc0
	if (!ctx.cr6.gt) goto loc_821D5FC0;
	// li r11,2
	ctx.r11.s64 = 2;
	// sth r11,32(r31)
	REX_STORE_U16(r31.u32 + 32, ctx.r11.u16);
loc_821D5FC0:
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// li r4,5
	ctx.r4.s64 = 5;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,9504
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9504));
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x820f34a8
	ctx.lr = 0x821D5FD8;
	sub_820F34A8(ctx, base);
	// li r11,50
	ctx.r11.s64 = 50;
	// stw r11,80(r29)
	REX_STORE_U32(r29.u32 + 80, ctx.r11.u32);
	// b 0x821d6108
	goto loc_821D6108;
loc_821D5FE4:
	// li r11,9
	ctx.r11.s64 = 9;
	// lbz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r29)
	REX_STORE_U32(r29.u32 + 80, ctx.r11.u32);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// mulli r11,r11,9504
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9504));
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x820f34a8
	ctx.lr = 0x821D6004;
	sub_820F34A8(ctx, base);
	// lhz r11,606(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 606);
loc_821D6008:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d6108
	if (ctx.cr0.eq) goto loc_821D6108;
	// lhz r11,38(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 38);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// b 0x821d60f8
	goto loc_821D60F8;
loc_821D6024:
	// li r11,7
	ctx.r11.s64 = 7;
	// lbz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r29)
	REX_STORE_U32(r29.u32 + 80, ctx.r11.u32);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// mulli r11,r11,9504
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9504));
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x820f34a8
	ctx.lr = 0x821D6044;
	sub_820F34A8(ctx, base);
	// lbz r11,188(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 188);
	// b 0x821d6008
	goto loc_821D6008;
loc_821D604C:
	// li r11,37
	ctx.r11.s64 = 37;
	// lbz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r29)
	REX_STORE_U32(r29.u32 + 80, ctx.r11.u32);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// mulli r11,r11,9504
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9504));
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x820f34a8
	ctx.lr = 0x821D606C;
	sub_820F34A8(ctx, base);
	// lbz r11,205(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 205);
loc_821D6070:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d6108
	if (ctx.cr0.eq) goto loc_821D6108;
	// lhz r11,38(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 38);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// b 0x821d60f8
	goto loc_821D60F8;
loc_821D608C:
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// li r4,6
	ctx.r4.s64 = 6;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,9504
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9504));
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x820f34a8
	ctx.lr = 0x821D60A4;
	sub_820F34A8(ctx, base);
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,80(r29)
	REX_STORE_U32(r29.u32 + 80, ctx.r11.u32);
	// lbz r11,205(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 205);
	// b 0x821d6070
	goto loc_821D6070;
loc_821D60B4:
	// li r11,9
	ctx.r11.s64 = 9;
	// lbz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r29)
	REX_STORE_U32(r29.u32 + 80, ctx.r11.u32);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// mulli r11,r11,9504
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9504));
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x820f34a8
	ctx.lr = 0x821D60D4;
	sub_820F34A8(ctx, base);
	// lhz r11,624(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 624);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821d60e8
	if (ctx.cr6.eq) goto loc_821D60E8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821d6108
	if (!ctx.cr6.eq) goto loc_821D6108;
loc_821D60E8:
	// lhz r11,38(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 38);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
loc_821D60F8:
	// sth r11,38(r31)
	REX_STORE_U16(r31.u32 + 38, ctx.r11.u16);
	// ble cr6,0x821d6108
	if (!ctx.cr6.gt) goto loc_821D6108;
	// li r11,2
	ctx.r11.s64 = 2;
	// sth r11,32(r31)
	REX_STORE_U16(r31.u32 + 32, ctx.r11.u16);
loc_821D6108:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821d61ac
	if (!ctx.cr0.eq) goto loc_821D61AC;
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x820fe770
	ctx.lr = 0x821D6120;
	sub_820FE770(ctx, base);
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// lwz r4,80(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 80);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,9504
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9504));
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x820f3610
	ctx.lr = 0x821D6138;
	sub_820F3610(ctx, base);
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,9504
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9504));
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x820f62d0
	ctx.lr = 0x821D614C;
	sub_820F62D0(ctx, base);
	// b 0x821d61ac
	goto loc_821D61AC;
loc_821D6150:
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r27,84
	ctx.r3.s64 = r27.s64 + 84;
	// bl 0x821d6210
	ctx.lr = 0x821D615C;
	sub_821D6210(ctx, base);
	// li r28,1
	r28.s64 = 1;
	// stb r28,5(r29)
	REX_STORE_U8(r29.u32 + 5, r28.u8);
	// stb r28,5(r30)
	REX_STORE_U8(r30.u32 + 5, r28.u8);
	// bl 0x821d58d8
	ctx.lr = 0x821D616C;
	sub_821D58D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d5810
	ctx.lr = 0x821D6174;
	sub_821D5810(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821d6188
	if (!ctx.cr0.eq) goto loc_821D6188;
	// lha r11,34(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 34));
	// cmpwi cr6,r11,600
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 600, ctx.xer);
	// blt cr6,0x821d618c
	if (ctx.cr6.lt) goto loc_821D618C;
loc_821D6188:
	// sth r28,32(r31)
	REX_STORE_U16(r31.u32 + 32, r28.u16);
loc_821D618C:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,80(r29)
	REX_STORE_U32(r29.u32 + 80, ctx.r11.u32);
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821d61ac
	if (!ctx.cr0.eq) goto loc_821D61AC;
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x820fe770
	ctx.lr = 0x821D61AC;
	sub_820FE770(ctx, base);
loc_821D61AC:
	// lwz r11,220(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 220);
	// lwz r11,5464(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 5464);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821d61c0
	if (ctx.cr6.eq) goto loc_821D61C0;
	// sth r24,32(r31)
	REX_STORE_U16(r31.u32 + 32, r24.u16);
loc_821D61C0:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// lha r10,32(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 32));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r25.s32, ctx.xer);
	// sth r11,34(r31)
	REX_STORE_U16(r31.u32 + 34, ctx.r11.u16);
	// beq cr6,0x821d61e8
	if (ctx.cr6.eq) goto loc_821D61E8;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// sth r26,34(r31)
	REX_STORE_U16(r31.u32 + 34, r26.u16);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// sth r26,38(r31)
	REX_STORE_U16(r31.u32 + 38, r26.u16);
loc_821D61E8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_821E8908) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -24, f30.u64);
	// stfd f31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x821e8944
	if (ctx.cr6.eq) goto loc_821E8944;
	// li r10,256
	ctx.r10.s64 = 256;
	// addi r11,r4,-16
	ctx.r11.s64 = ctx.r4.s64 + -16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
loc_821E8930:
	// stfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfsu f0,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821e8930
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E8930;
loc_821E8944:
	// lhz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 12);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 20);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lhz r7,14(r3)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 14);
	// lbz r6,16(r3)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 16);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// std r11,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, ctx.r11.u64);
	// lfd f0,-304(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// lfs f13,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// std r9,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, ctx.r9.u64);
	// lfd f12,-304(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// std r11,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, ctx.r11.u64);
	// lfd f10,-304(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// lbz r11,17(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 17);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lbz r10,19(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 19);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// std r6,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, ctx.r6.u64);
	// lfd f7,-304(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// std r11,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, ctx.r11.u64);
	// lfd f6,-304(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// std r10,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, ctx.r10.u64);
	// lfd f9,-304(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// fcfid f5,f10
	ctx.f5.f64 = double(ctx.f10.s64);
	// lfs f11,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f11.f64 = double(temp.f32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fcfid f4,f7
	ctx.f4.f64 = double(ctx.f7.s64);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// frsp f7,f12
	ctx.f7.f64 = double(float(ctx.f12.f64));
	// fcfid f3,f6
	ctx.f3.f64 = double(ctx.f6.s64);
	// lfs f9,17176(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17176);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,16632(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16632);
	ctx.f10.f64 = double(temp.f32);
	// frsp f12,f5
	ctx.f12.f64 = double(float(ctx.f5.f64));
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// frsp f6,f4
	ctx.f6.f64 = double(float(ctx.f4.f64));
	// frsp f5,f3
	ctx.f5.f64 = double(float(ctx.f3.f64));
	// fadds f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// fadds f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fadds f4,f12,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// fadds f13,f0,f6
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fadds f11,f4,f11
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// fmr f30,f13
	f30.f64 = ctx.f13.f64;
	// beq cr6,0x821e8a60
	if (ctx.cr6.eq) goto loc_821E8A60;
	// li r11,256
	ctx.r11.s64 = 256;
	// fmuls f4,f0,f10
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// addi r10,r1,-289
	ctx.r10.s64 = ctx.r1.s64 + -289;
	// fmuls f3,f12,f9
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// addi r8,r4,-4
	ctx.r8.s64 = ctx.r4.s64 + -4;
	// fmuls f2,f13,f10
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f1,f11,f9
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821E8A3C:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x821e8a3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E8A3C;
	// li r11,256
	ctx.r11.s64 = 256;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821E8A4C:
	// stfs f4,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f3,8(r8)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stfs f2,12(r8)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// stfsu f1,16(r8)
	ea = 16 + ctx.r8.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x821e8a4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E8A4C;
loc_821E8A60:
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// fadds f6,f8,f6
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// lbz r7,21(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 21);
	// fadds f7,f7,f5
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// lbz r6,18(r3)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 18);
	// lbz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821e8b20
	if (ctx.cr0.eq) goto loc_821E8B20;
	// li r8,1
	ctx.r8.s64 = 1;
loc_821E8A84:
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// fmuls f8,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// addi r31,r1,-288
	r31.s64 = ctx.r1.s64 + -288;
	// fmuls f5,f12,f9
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// fmuls f4,f13,f10
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f3,f11,f9
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stbx r8,r10,r31
	REX_STORE_U8(ctx.r10.u32 + r31.u32, ctx.r8.u8);
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f5,4(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f4,8(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f3,12(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// bne cr6,0x821e8aec
	if (!ctx.cr6.eq) goto loc_821E8AEC;
	// cmplwi cr6,r10,65
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// blt cr6,0x821e8aec
	if (ctx.cr6.lt) goto loc_821E8AEC;
	// cmplwi cr6,r10,90
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 90, ctx.xer);
	// bgt cr6,0x821e8aec
	if (ctx.cr6.gt) goto loc_821E8AEC;
	// stfs f8,512(r4)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r4.u32 + 512, temp.u32);
	// stb r8,-256(r1)
	REX_STORE_U8(ctx.r1.u32 + -256, ctx.r8.u8);
	// lfs f8,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,516(r4)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r4.u32 + 516, temp.u32);
	// lfs f8,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,520(r4)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r4.u32 + 520, temp.u32);
	// lfs f8,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,524(r4)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r4.u32 + 524, temp.u32);
loc_821E8AEC:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x821e8b0c
	if (!ctx.cr0.eq) goto loc_821E8B0C;
	// lbz r6,18(r3)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 18);
	// fadds f12,f12,f7
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// fadds f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
	// b 0x821e8b14
	goto loc_821E8B14;
loc_821E8B0C:
	// fadds f0,f0,f6
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// fadds f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
loc_821E8B14:
	// lbzu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// mr. r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821e8a84
	if (!ctx.cr0.eq) goto loc_821E8A84;
loc_821E8B20:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x821e8b84
	if (ctx.cr6.eq) goto loc_821E8B84;
	// lbz r11,22(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 22);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821e8b84
	if (ctx.cr0.eq) goto loc_821E8B84;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r11,256
	ctx.r11.s64 = 256;
loc_821E8B44:
	// addi r8,r1,-288
	ctx.r8.s64 = ctx.r1.s64 + -288;
	// lbzx r8,r10,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne 0x821e8b74
	if (!ctx.cr0.eq) goto loc_821E8B74;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r8,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// stw r8,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
loc_821E8B74:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// bne 0x821e8b44
	if (!ctx.cr0.eq) goto loc_821E8B44;
loc_821E8B84:
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F5910) {
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
	// bl 0x822d4e5c
	ctx.lr = 0x821F5918;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r19,0
	r19.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r17,r19
	r17.u64 = r19.u64;
	// bl 0x821f5538
	ctx.lr = 0x821F5934;
	sub_821F5538(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c80d8
	ctx.lr = 0x821F593C;
	sub_822C80D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f62ac
	if (ctx.cr0.eq) goto loc_821F62AC;
	// std r28,0(r31)
	REX_STORE_U64(r31.u32 + 0, r28.u64);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c8418
	ctx.lr = 0x821F5954;
	sub_822C8418(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r20,r19
	r20.u64 = r19.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x821f5aa0
	if (ctx.cr6.lt) goto loc_821F5AA0;
	// lis r30,-32163
	r30.s64 = -2107834368;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,592
	ctx.r3.s64 = 592;
	// lwz r11,31456(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 31456);
	// stb r10,12072(r11)
	REX_STORE_U8(ctx.r11.u32 + 12072, ctx.r10.u8);
	// bl 0x822c80d0
	ctx.lr = 0x821F597C;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f598c
	if (ctx.cr0.eq) goto loc_821F598C;
	// bl 0x822ad3a0
	ctx.lr = 0x821F5988;
	sub_822AD3A0(ctx, base);
	// b 0x821f5990
	goto loc_821F5990;
loc_821F598C:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_821F5990:
	// clrldi r11,r28,63
	ctx.r11.u64 = r28.u64 & 0x1;
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x821f59f4
	if (ctx.cr6.eq) goto loc_821F59F4;
	// bl 0x822c83b8
	ctx.lr = 0x821F59AC;
	sub_822C83B8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c83b8
	ctx.lr = 0x821F59BC;
	sub_822C83B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x822af760
	ctx.lr = 0x821F59DC;
	sub_822AF760(ctx, base);
	// clrlwi r17,r3,24
	r17.u64 = ctx.r3.u32 & 0xFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c83b8
	ctx.lr = 0x821F59EC;
	sub_822C83B8(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// b 0x821f5a2c
	goto loc_821F5A2C;
loc_821F59F4:
	// bl 0x822c83b8
	ctx.lr = 0x821F59F8;
	sub_822C83B8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c83b8
	ctx.lr = 0x821F5A08;
	sub_822C83B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x822af760
	ctx.lr = 0x821F5A28;
	sub_822AF760(ctx, base);
	// clrlwi r17,r3,24
	r17.u64 = ctx.r3.u32 & 0xFF;
loc_821F5A2C:
	// lwz r11,31456(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 31456);
	// mr r30,r19
	r30.u64 = r19.u64;
	// stb r19,12072(r11)
	REX_STORE_U8(ctx.r11.u32 + 12072, r19.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f5aa0
	if (ctx.cr0.eq) goto loc_821F5AA0;
loc_821F5A50:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x822ac180
	ctx.lr = 0x821F5A5C;
	sub_822AC180(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x822b3b48
	ctx.lr = 0x821F5A64;
	sub_822B3B48(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f5a80
	if (ctx.cr0.eq) goto loc_821F5A80;
	// lwz r11,40(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 40);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,40(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x822b1228
	ctx.lr = 0x821F5A80;
	sub_822B1228(ctx, base);
loc_821F5A80:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821f5a50
	if (ctx.cr6.lt) goto loc_821F5A50;
loc_821F5AA0:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x821f62ac
	if (ctx.cr6.lt) goto loc_821F62AC;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c83b8
	ctx.lr = 0x821F5AB8;
	sub_822C83B8(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// bne cr6,0x821f62b8
	if (!ctx.cr6.eq) goto loc_821F62B8;
	// lbz r11,1(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r11,77
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 77, ctx.xer);
	// bne cr6,0x821f62b8
	if (!ctx.cr6.eq) goto loc_821F62B8;
	// lbz r11,2(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi cr6,r11,80
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 80, ctx.xer);
	// bne cr6,0x821f62b8
	if (!ctx.cr6.eq) goto loc_821F62B8;
	// clrldi r11,r28,63
	ctx.r11.u64 = r28.u64 & 0x1;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// li r18,-1
	r18.s64 = -1;
	// ori r26,r10,65535
	r26.u64 = ctx.r10.u64 | 65535;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x821f5b04
	if (!ctx.cr6.eq) goto loc_821F5B04;
	// rlwinm r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x821f5ba8
	if (ctx.cr6.eq) goto loc_821F5BA8;
loc_821F5B04:
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821f5ba8
	if (ctx.cr6.eq) goto loc_821F5BA8;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, ctx.xer);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// add r29,r11,r3
	r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r27,r10,r3
	r27.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x821f5b30
	if (!ctx.cr6.gt) goto loc_821F5B30;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
loc_821F5B30:
	// bl 0x822c80d0
	ctx.lr = 0x821F5B34;
	sub_822C80D0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// mr r28,r19
	r28.u64 = r19.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821f5ba8
	if (!ctx.cr6.gt) goto loc_821F5BA8;
	// mr r30,r19
	r30.u64 = r19.u64;
	// addi r29,r29,44
	r29.s64 = r29.s64 + 44;
loc_821F5B54:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x822ac0e0
	ctx.lr = 0x821F5B68;
	sub_822AC0E0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stwx r3,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821f5b8c
	if (ctx.cr6.eq) goto loc_821F5B8C;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x822b1228
	ctx.lr = 0x821F5B8C;
	sub_822B1228(ctx, base);
loc_821F5B8C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,64
	r29.s64 = r29.s64 + 64;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821f5b54
	if (ctx.cr6.lt) goto loc_821F5B54;
loc_821F5BA8:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821f5d64
	if (ctx.cr6.lt) goto loc_821F5D64;
	// lwz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// add r30,r9,r10
	r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f5d64
	if (ctx.cr6.eq) goto loc_821F5D64;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x821f5be0
	if (!ctx.cr6.gt) goto loc_821F5BE0;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
loc_821F5BE0:
	// bl 0x822c80d0
	ctx.lr = 0x821F5BE4;
	sub_822C80D0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// mr r24,r19
	r24.u64 = r19.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821f5d64
	if (!ctx.cr6.gt) goto loc_821F5D64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r25,r19
	r25.u64 = r19.u64;
	// mr r23,r30
	r23.u64 = r30.u64;
	// li r21,2
	r21.s64 = 2;
	// addi r22,r11,18448
	r22.s64 = ctx.r11.s64 + 18448;
loc_821F5C0C:
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x822c80d0
	ctx.lr = 0x821F5C14;
	sub_822C80D0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821f5c38
	if (ctx.cr0.eq) goto loc_821F5C38;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x822ab1c0
	ctx.lr = 0x821F5C28;
	sub_822AB1C0(ctx, base);
	// stw r23,288(r30)
	REX_STORE_U32(r30.u32 + 288, r23.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r22,0(r30)
	REX_STORE_U32(r30.u32 + 0, r22.u32);
	// b 0x821f5c3c
	goto loc_821F5C3C;
loc_821F5C38:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_821F5C3C:
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stwx r11,r25,r10
	REX_STORE_U32(r25.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x822ac200
	ctx.lr = 0x821F5C50;
	sub_822AC200(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwzx r3,r25,r11
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F5C74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r27,r19
	r27.u64 = r19.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f5d24
	if (ctx.cr0.eq) goto loc_821F5D24;
loc_821F5C90:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x822ac180
	ctx.lr = 0x821F5C9C;
	sub_822AC180(ctx, base);
	// lwz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lwz r10,124(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r19
	r30.u64 = r19.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r28,r3,120
	r28.s64 = ctx.r3.s64 + 120;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f5d04
	if (ctx.cr0.eq) goto loc_821F5D04;
loc_821F5CBC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b41b0
	ctx.lr = 0x821F5CC8;
	sub_822B41B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x821f5ce8
	if (!ctx.cr6.eq) goto loc_821F5CE8;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r5,r25,r11
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + ctx.r11.u32);
	// bl 0x822b68b8
	ctx.lr = 0x821F5CE8;
	sub_822B68B8(ctx, base);
loc_821F5CE8:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821f5cbc
	if (ctx.cr6.lt) goto loc_821F5CBC;
loc_821F5D04:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821f5c90
	if (ctx.cr6.lt) goto loc_821F5C90;
loc_821F5D24:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f5d4c
	if (!ctx.cr6.eq) goto loc_821F5D4C;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f5d4c
	if (ctx.cr0.eq) goto loc_821F5D4C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822aac90
	ctx.lr = 0x821F5D44;
	sub_822AAC90(ctx, base);
	// stw r21,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, r21.u32);
	// stw r21,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, r21.u32);
loc_821F5D4C:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r23,r23,8
	r23.s64 = r23.s64 + 8;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821f5c0c
	if (ctx.cr6.lt) goto loc_821F5C0C;
loc_821F5D64:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x821f5f84
	if (ctx.cr6.lt) goto loc_821F5F84;
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// add r29,r9,r11
	r29.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821f5f84
	if (ctx.cr6.eq) goto loc_821F5F84;
	// lis r11,2730
	ctx.r11.s64 = 178913280;
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// mulli r3,r10,24
	ctx.r3.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// ori r11,r11,43690
	ctx.r11.u64 = ctx.r11.u64 | 43690;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x821f5da4
	if (!ctx.cr6.gt) goto loc_821F5DA4;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
loc_821F5DA4:
	// bl 0x822c80d0
	ctx.lr = 0x821F5DA8;
	sub_822C80D0(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r28,r19
	r28.u64 = r19.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// blt cr6,0x821f5eb4
	if (ctx.cr6.lt) goto loc_821F5EB4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821f5e9c
	if (!ctx.cr6.gt) goto loc_821F5E9C;
	// mr r30,r19
	r30.u64 = r19.u64;
	// addi r29,r29,40
	r29.s64 = r29.s64 + 40;
loc_821F5DD4:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r10,r29,-40
	ctx.r10.s64 = r29.s64 + -40;
	// addi r4,r29,-36
	ctx.r4.s64 = r29.s64 + -36;
	// stwx r10,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x822ac190
	ctx.lr = 0x821F5DEC;
	sub_822AC190(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r30,r9
	ctx.r10.u64 = r30.u64 + ctx.r9.u64;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r9,r30,r9
	ctx.r9.u64 = r30.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r19,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r19.u32);
	// lhz r11,-38(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + -38);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f5e78
	if (ctx.cr0.eq) goto loc_821F5E78;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x822c80d0
	ctx.lr = 0x821F5E48;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f5e64
	if (ctx.cr0.eq) goto loc_821F5E64;
	// stw r19,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r19.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r19,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r19.u32);
	// stw r19,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r19.u32);
	// b 0x821f5e68
	goto loc_821F5E68;
loc_821F5E64:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_821F5E68:
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// stw r11,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// b 0x821f5e84
	goto loc_821F5E84;
loc_821F5E78:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r19,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r19.u32);
loc_821F5E84:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,52
	r29.s64 = r29.s64 + 52;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821f5dd4
	if (ctx.cr6.lt) goto loc_821F5DD4;
loc_821F5E9C:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x821f5f84
	if (ctx.cr6.eq) goto loc_821F5F84;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f5040
	ctx.lr = 0x821F5EB0;
	sub_821F5040(ctx, base);
	// b 0x821f5f84
	goto loc_821F5F84;
loc_821F5EB4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821f5f84
	if (!ctx.cr6.gt) goto loc_821F5F84;
	// mr r30,r19
	r30.u64 = r19.u64;
	// addi r29,r29,40
	r29.s64 = r29.s64 + 40;
loc_821F5EC4:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r10,r29,-40
	ctx.r10.s64 = r29.s64 + -40;
	// addi r4,r29,-36
	ctx.r4.s64 = r29.s64 + -36;
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x822ac190
	ctx.lr = 0x821F5EDC;
	sub_822AC190(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
	// lhz r11,-38(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + -38);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f5f54
	if (ctx.cr0.eq) goto loc_821F5F54;
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821f5f40
	if (!ctx.cr6.gt) goto loc_821F5F40;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
loc_821F5F40:
	// bl 0x822c80d0
	ctx.lr = 0x821F5F44;
	sub_822C80D0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// b 0x821f5f60
	goto loc_821F5F60;
loc_821F5F54:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r19,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r19.u32);
loc_821F5F60:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,52
	r29.s64 = r29.s64 + 52;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// stw r19,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r19.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821f5ec4
	if (ctx.cr6.lt) goto loc_821F5EC4;
loc_821F5F84:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x821f6040
	if (ctx.cr6.lt) goto loc_821F6040;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r29,36(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x821f6040
	if (ctx.cr6.eq) goto loc_821F6040;
	// lis r11,5461
	ctx.r11.s64 = 357892096;
	// ori r11,r11,21845
	ctx.r11.u64 = ctx.r11.u64 | 21845;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// mulli r11,r29,12
	ctx.r11.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(12));
	// ble cr6,0x821f5fc0
	if (!ctx.cr6.gt) goto loc_821F5FC0;
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_821F5FC0:
	// li r10,-5
	ctx.r10.s64 = -5;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821f5fd4
	if (!ctx.cr6.gt) goto loc_821F5FD4;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
loc_821F5FD4:
	// bl 0x822c80d0
	ctx.lr = 0x821F5FD8;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f5fec
	if (ctx.cr0.eq) goto loc_821F5FEC;
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// b 0x821f5ff0
	goto loc_821F5FF0;
loc_821F5FEC:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_821F5FF0:
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// mr r28,r19
	r28.u64 = r19.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,36(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821f6040
	if (!ctx.cr6.gt) goto loc_821F6040;
	// mr r29,r19
	r29.u64 = r19.u64;
loc_821F600C:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x82207f00
	ctx.lr = 0x821F6024;
	sub_82207F00(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,96
	r30.s64 = r30.s64 + 96;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821f600c
	if (ctx.cr6.lt) goto loc_821F600C;
loc_821F6040:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x821f6280
	if (ctx.cr6.lt) goto loc_821F6280;
	// lwz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// add r30,r9,r11
	r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821f625c
	if (ctx.cr6.eq) goto loc_821F625C;
	// lis r11,963
	ctx.r11.s64 = 63111168;
	// mulli r3,r10,68
	ctx.r3.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(68));
	// ori r11,r11,50115
	ctx.r11.u64 = ctx.r11.u64 | 50115;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x821f607c
	if (!ctx.cr6.gt) goto loc_821F607C;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
loc_821F607C:
	// bl 0x822c80d0
	ctx.lr = 0x821F6080;
	sub_822C80D0(ctx, base);
	// stw r3,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mulli r5,r11,68
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(68));
	// bl 0x822d5870
	ctx.lr = 0x821F6098;
	sub_822D5870(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r23,r19
	r23.u64 = r19.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821f625c
	if (!ctx.cr6.gt) goto loc_821F625C;
	// mr r24,r19
	r24.u64 = r19.u64;
	// mr r26,r19
	r26.u64 = r19.u64;
	// mr r25,r30
	r25.u64 = r30.u64;
loc_821F60B8:
	// mr r28,r19
	r28.u64 = r19.u64;
	// mr r27,r25
	r27.u64 = r25.u64;
loc_821F60C0:
	// lbz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821f6190
	if (ctx.cr0.eq) goto loc_821F6190;
	// add r11,r28,r26
	ctx.r11.u64 = r28.u64 + r26.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822ac050
	ctx.lr = 0x821F60E0;
	sub_822AC050(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stwx r3,r11,r29
	REX_STORE_U32(ctx.r11.u32 + r29.u32, ctx.r3.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwzx r10,r11,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821f6180
	if (ctx.cr6.eq) goto loc_821F6180;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821f6180
	if (!ctx.cr6.eq) goto loc_821F6180;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r30,r19
	r30.u64 = r19.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f6180
	if (ctx.cr0.eq) goto loc_821F6180;
loc_821F6124:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x822ac180
	ctx.lr = 0x821F6130;
	sub_822AC180(ctx, base);
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r9,r11,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821f6170
	if (ctx.cr6.eq) goto loc_821F6170;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821f6124
	if (ctx.cr6.lt) goto loc_821F6124;
	// b 0x821f6180
	goto loc_821F6180;
loc_821F6170:
	// add r10,r28,r26
	ctx.r10.u64 = r28.u64 + r26.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_821F6180:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,32
	r27.s64 = r27.s64 + 32;
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(r28.s32, 8, ctx.xer);
	// blt cr6,0x821f60c0
	if (ctx.cr6.lt) goto loc_821F60C0;
loc_821F6190:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// lwz r8,52(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ble cr6,0x821f623c
	if (!ctx.cr6.gt) goto loc_821F623C;
	// lwz r8,256(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 256);
loc_821F61B0:
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821f6230
	if (ctx.cr6.eq) goto loc_821F6230;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// bgt cr6,0x821f6218
	if (ctx.cr6.gt) goto loc_821F6218;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,18432
	ctx.r12.s64 = ctx.r12.s64 + 18432;
	// lbzx r0,r12,r10
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r10.u32);
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// nop 
	// addi r12,r12,25068
	ctx.r12.s64 = ctx.r12.s64 + 25068;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_821F6214;
	case 1:
		goto loc_821F6214;
	case 2:
		goto loc_821F61EC;
	case 3:
		goto loc_821F620C;
	case 4:
		goto loc_821F6214;
	case 5:
		goto loc_821F6214;
	case 6:
		goto loc_821F6214;
	case 7:
		goto loc_821F61F4;
	case 8:
		goto loc_821F61FC;
	case 9:
		goto loc_821F61F4;
	case 10:
		goto loc_821F6204;
	case 11:
		goto loc_821F6204;
	case 12:
		goto loc_821F620C;
	case 13:
		goto loc_821F6214;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_821F61EC:
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// b 0x821f6218
	goto loc_821F6218;
loc_821F61F4:
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// b 0x821f6218
	goto loc_821F6218;
loc_821F61FC:
	// addi r11,r11,1040
	ctx.r11.s64 = ctx.r11.s64 + 1040;
	// b 0x821f6218
	goto loc_821F6218;
loc_821F6204:
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// b 0x821f6218
	goto loc_821F6218;
loc_821F620C:
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// b 0x821f6218
	goto loc_821F6218;
loc_821F6214:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_821F6218:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r10,52(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821f61b0
	if (ctx.cr6.lt) goto loc_821F61B0;
	// b 0x821f623c
	goto loc_821F623C;
loc_821F6230:
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + r24.u64;
	// stw r11,64(r10)
	REX_STORE_U32(ctx.r10.u32 + 64, ctx.r11.u32);
loc_821F623C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r25,r25,260
	r25.s64 = r25.s64 + 260;
	// addi r26,r26,17
	r26.s64 = r26.s64 + 17;
	// addi r24,r24,68
	r24.s64 = r24.s64 + 68;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821f60b8
	if (ctx.cr6.lt) goto loc_821F60B8;
loc_821F625C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lhz r11,62(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 62);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821f6280
	if (ctx.cr0.eq) goto loc_821F6280;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822c80d0
	ctx.lr = 0x821F6274;
	sub_822C80D0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// stw r3,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r3.u32);
loc_821F6280:
	// stw r19,44(r31)
	REX_STORE_U32(r31.u32 + 44, r19.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// blt cr6,0x821f62ac
	if (ctx.cr6.lt) goto loc_821F62AC;
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x821f62ac
	if (!ctx.cr6.gt) goto loc_821F62AC;
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
loc_821F62AC:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
loc_821F62B0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4eac
	return;
loc_821F62B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r19,12(r31)
	REX_STORE_U32(r31.u32 + 12, r19.u32);
	// b 0x821f62b0
	goto loc_821F62B0;
}

DEFINE_REX_FUNC(sub_82220248) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82220250;
	// lbz r11,11071(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 11071);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stb r11,11071(r3)
	REX_STORE_U8(ctx.r3.u32 + 11071, ctx.r11.u8);
	// beq cr6,0x8222026c
	if (ctx.cr6.eq) goto loc_8222026C;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,11071(r3)
	REX_STORE_U8(ctx.r3.u32 + 11071, ctx.r11.u8);
loc_8222026C:
	// lhz r11,10368(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 10368);
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82220280
	if (!ctx.cr0.eq) goto loc_82220280;
	// li r30,16
	r30.s64 = 16;
	// b 0x8222028c
	goto loc_8222028C;
loc_82220280:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// li r30,8
	r30.s64 = 8;
	// bne cr6,0x82220298
	if (!ctx.cr6.eq) goto loc_82220298;
loc_8222028C:
	// li r11,32
	ctx.r11.s64 = 32;
	// li r29,80
	r29.s64 = 80;
	// b 0x822202a0
	goto loc_822202A0;
loc_82220298:
	// li r11,16
	ctx.r11.s64 = 16;
	// li r29,40
	r29.s64 = 40;
loc_822202A0:
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// andc r31,r10,r9
	r31.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r4,r31,r11
	ctx.r4.u64 = uint32_t(ctx.r11.u32 ? r31.u32 / ctx.r11.u32 : 0);
	// beq cr6,0x822202f4
	if (ctx.cr6.eq) goto loc_822202F4;
	// addi r9,r3,13484
	ctx.r9.s64 = ctx.r3.s64 + 13484;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r10,r3,13364
	ctx.r10.s64 = ctx.r3.s64 + 13364;
loc_822202CC:
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwzu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// twllei r30,0
	if (r30.s32 == 0 || r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r7,r7,r11
	ctx.r7.u64 = uint32_t(ctx.r11.u32 ? ctx.r7.u32 / ctx.r11.u32 : 0);
	// divwu r8,r8,r30
	ctx.r8.u64 = uint32_t(r30.u32 ? ctx.r8.u32 / r30.u32 : 0);
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x822202cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822202CC;
loc_822202F4:
	// lwz r10,10368(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 10368);
	// add r11,r29,r6
	ctx.r11.u64 = r29.u64 + ctx.r6.u64;
	// stw r31,13548(r3)
	REX_STORE_U32(ctx.r3.u32 + 13548, r31.u32);
	// twllei r29,0
	if (r29.s32 == 0 || r29.u32 < 0u) ppc_trap(ctx, base, 0);
	// rlwimi r10,r31,18,0,13
	ctx.r10.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 18) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,10368(r3)
	REX_STORE_U32(ctx.r3.u32 + 10368, ctx.r10.u32);
	// ld r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// divwu r11,r11,r29
	ctx.r11.u64 = uint32_t(r29.u32 ? ctx.r11.u32 / r29.u32 : 0);
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// std r10,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// lbz r10,11071(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 11071);
	// stw r11,13552(r3)
	REX_STORE_U32(ctx.r3.u32 + 13552, ctx.r11.u32);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82220358
	if (!ctx.cr0.eq) goto loc_82220358;
	// lwz r11,12284(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12284);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// rlwinm r11,r11,0,12,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82220358
	if (!ctx.cr6.eq) goto loc_82220358;
	// ld r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 40);
	// li r12,-257
	ctx.r12.s64 = -257;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// b 0x82220360
	goto loc_82220360;
loc_82220358:
	// ld r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 40);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
loc_82220360:
	// std r11,40(r3)
	REX_STORE_U64(ctx.r3.u32 + 40, ctx.r11.u64);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82223B20) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r4.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824d45cc
	ctx.lr = 0x82223B70;
	__imp___vsnprintf(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x82223b8c
	if (ctx.cr6.eq) goto loc_82223B8C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223B88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82223b90
	goto loc_82223B90;
loc_82223B8C:
	// bl 0x824d422c
	ctx.lr = 0x82223B90;
	__imp__DbgPrint(ctx, base);
loc_82223B90:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82226590) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
loc_82226594:
	// rlwinm r11,r4,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// clrlwi r8,r4,27
	ctx.r8.u64 = ctx.r4.u32 & 0x1F;
	// addi r11,r11,2532
	ctx.r11.s64 = ctx.r11.s64 + 2532;
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
	// bne 0x82226594
	if (!ctx.cr0.eq) goto loc_82226594;
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

DEFINE_REX_FUNC(sub_82228948) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8222896c
	if (!ctx.cr6.eq) goto loc_8222896C;
	// lis r3,-32038
	ctx.r3.s64 = -2099642368;
	// ori r3,r3,23
	ctx.r3.u64 = ctx.r3.u64 | 23;
	// b 0x822289d8
	goto loc_822289D8;
loc_8222896C:
	// lbz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,107
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 107, ctx.xer);
	// bgt cr6,0x822289b8
	if (ctx.cr6.gt) goto loc_822289B8;
	// beq cr6,0x822289a4
	if (ctx.cr6.eq) goto loc_822289A4;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// beq cr6,0x822289a4
	if (ctx.cr6.eq) goto loc_822289A4;
	// cmplwi cr6,r11,98
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 98, ctx.xer);
	// ble cr6,0x822289d4
	if (!ctx.cr6.gt) goto loc_822289D4;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x822289a4
	if (!ctx.cr6.gt) goto loc_822289A4;
	// cmplwi cr6,r11,101
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 101, ctx.xer);
	// ble cr6,0x822289d4
	if (!ctx.cr6.gt) goto loc_822289D4;
	// cmplwi cr6,r11,103
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 103, ctx.xer);
	// bgt cr6,0x822289d4
	if (ctx.cr6.gt) goto loc_822289D4;
loc_822289A4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-25784
	ctx.r4.s64 = ctx.r11.s64 + -25784;
	// bl 0x824d44ec
	ctx.lr = 0x822289B4;
	__imp__sprintf(ctx, base);
	// b 0x822289d4
	goto loc_822289D4;
loc_822289B8:
	// cmplwi cr6,r11,109
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 109, ctx.xer);
	// beq cr6,0x822289cc
	if (ctx.cr6.eq) goto loc_822289CC;
	// cmplwi cr6,r11,116
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 116, ctx.xer);
	// bne cr6,0x822289d4
	if (!ctx.cr6.eq) goto loc_822289D4;
	// b 0x822289a4
	goto loc_822289A4;
loc_822289CC:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8222ec78
	ctx.lr = 0x822289D4;
	sub_8222EC78(ctx, base);
loc_822289D4:
	// lis r3,730
	ctx.r3.s64 = 47841280;
loc_822289D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222B698) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823cd538
	ctx.lr = 0x8222B6B4;
	sub_823CD538(ctx, base);
	// rlwinm. r11,r3,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222b6c4
	if (ctx.cr0.eq) goto loc_8222B6C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82229100
	ctx.lr = 0x8222B6C4;
	sub_82229100(ctx, base);
loc_8222B6C4:
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822d5870
	ctx.lr = 0x8222B6D4;
	sub_822D5870(ctx, base);
	// lbz r11,11072(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11072);
	// lis r30,-32256
	r30.s64 = -2113929216;
	// lwz r9,16968(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16968);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// stb r11,11072(r31)
	REX_STORE_U8(r31.u32 + 11072, ctx.r11.u8);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r8,r8,-26064
	ctx.r8.s64 = ctx.r8.s64 + -26064;
	// lwz r10,1572(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1572);
	// addi r11,r11,-29264
	ctx.r11.s64 = ctx.r11.s64 + -29264;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r9,21250
	ctx.r9.s64 = 21250;
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// stw r8,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r6,-32221
	ctx.r6.s64 = -2111635456;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lis r5,-32221
	ctx.r5.s64 = -2111635456;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r11,r5,-21760
	ctx.r11.s64 = ctx.r5.s64 + -21760;
	// addi r8,r7,-31152
	ctx.r8.s64 = ctx.r7.s64 + -31152;
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// addi r9,r6,-31016
	ctx.r9.s64 = ctx.r6.s64 + -31016;
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r8,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// stw r9,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222b770
	if (ctx.cr6.eq) goto loc_8222B770;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,82
	ctx.r3.s64 = 82;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B768;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,1572(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1572);
	// b 0x8222b774
	goto loc_8222B774;
loc_8222B770:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222B774:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8222b7cc
	if (!ctx.cr6.eq) goto loc_8222B7CC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1444(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1444);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8222b7ac
	if (ctx.cr6.eq) goto loc_8222B7AC;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222b7cc
	if (ctx.cr6.eq) goto loc_8222B7CC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222b7cc
	if (ctx.cr6.eq) goto loc_8222B7CC;
	// b 0x8222b7bc
	goto loc_8222B7BC;
loc_8222B7AC:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222b7cc
	if (ctx.cr6.eq) goto loc_8222B7CC;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
loc_8222B7BC:
	// li r3,46
	ctx.r3.s64 = 46;
	// lwz r4,16968(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16968);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B7CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222B7CC:
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lbz r10,11072(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 11072);
	// lwz r9,21944(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 21944);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r8,124(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// andi. r10,r10,223
	ctx.r10.u64 = ctx.r10.u64 & 223;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwimi r9,r11,30,1,1
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x40000000) | (ctx.r9.u64 & 0xFFFFFFFFBFFFFFFF);
	// stb r10,11072(r31)
	REX_STORE_U8(r31.u32 + 11072, ctx.r10.u8);
	// stw r8,21948(r31)
	REX_STORE_U32(r31.u32 + 21948, ctx.r8.u32);
	// stw r9,21944(r31)
	REX_STORE_U32(r31.u32 + 21944, ctx.r9.u32);
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

DEFINE_REX_FUNC(sub_82233710) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82233820
	if (!ctx.cr6.eq) goto loc_82233820;
	// lwz r7,12816(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 12816);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne 0x8223373c
	if (!ctx.cr0.eq) goto loc_8223373C;
	// lwz r11,12832(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12832);
loc_8223373C:
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// li r5,0
	ctx.r5.s64 = 0;
	// lbz r11,11068(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 11068);
	// rlwinm r10,r9,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3FFF;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// rlwinm r9,r9,29,17,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x7FFF;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm. r31,r11,0,27,27
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq 0x82233778
	if (ctx.cr0.eq) goto loc_82233778;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82233804
	goto loc_82233804;
loc_82233778:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822337fc
	if (ctx.cr0.eq) goto loc_822337FC;
	// lwz r11,13104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 13104);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82233794
	if (ctx.cr6.eq) goto loc_82233794;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822337fc
	if (!ctx.cr6.eq) goto loc_822337FC;
loc_82233794:
	// lwz r11,12820(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12820);
	// lwz r10,13108(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 13108);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822337ac
	if (ctx.cr6.eq) goto loc_822337AC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822337fc
	if (!ctx.cr6.eq) goto loc_822337FC;
loc_822337AC:
	// lwz r11,12824(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12824);
	// lwz r10,13112(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 13112);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822337c4
	if (ctx.cr6.eq) goto loc_822337C4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822337fc
	if (!ctx.cr6.eq) goto loc_822337FC;
loc_822337C4:
	// lwz r11,12828(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12828);
	// lwz r10,13116(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 13116);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822337dc
	if (ctx.cr6.eq) goto loc_822337DC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822337fc
	if (!ctx.cr6.eq) goto loc_822337FC;
loc_822337DC:
	// lwz r11,12832(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12832);
	// lwz r10,13120(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 13120);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822337f4
	if (ctx.cr6.eq) goto loc_822337F4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822337fc
	if (!ctx.cr6.eq) goto loc_822337FC;
loc_822337F4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82233800
	goto loc_82233800;
loc_822337FC:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82233800:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82233804:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223381c
	if (ctx.cr0.eq) goto loc_8223381C;
	// lwz r11,13556(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 13556);
	// lwz r10,13560(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 13560);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_8223381C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_82233820:
	// rlwinm. r11,r4,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82233830
	if (!ctx.cr0.eq) goto loc_82233830;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
loc_82233830:
	// bl 0x82233090
	ctx.lr = 0x82233834;
	sub_82233090(ctx, base);
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

DEFINE_REX_FUNC(sub_822368C8) {
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
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// std r5,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// li r10,1
	ctx.r10.s64 = 1;
	// add r31,r11,r3
	r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// slw r6,r10,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x822361d0
	ctx.lr = 0x82236914;
	sub_822361D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82236980
	if (ctx.cr6.lt) goto loc_82236980;
	// beq cr6,0x82236964
	if (ctx.cr6.eq) goto loc_82236964;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82236948
	if (ctx.cr6.lt) goto loc_82236948;
	// bne cr6,0x8223699c
	if (!ctx.cr6.eq) goto loc_8223699C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822364c0
	ctx.lr = 0x82236944;
	sub_822364C0(ctx, base);
	// b 0x82236998
	goto loc_82236998;
loc_82236948:
	// ld r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82236438
	ctx.lr = 0x82236960;
	sub_82236438(ctx, base);
	// b 0x82236998
	goto loc_82236998;
loc_82236964:
	// ld r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// bl 0x822363b8
	ctx.lr = 0x8223697C;
	sub_822363B8(ctx, base);
	// b 0x82236998
	goto loc_82236998;
loc_82236980:
	// ld r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82236340
	ctx.lr = 0x82236998;
	sub_82236340(ctx, base);
loc_82236998:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8223699C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

DEFINE_REX_FUNC(sub_82239080) {
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
	ctx.lr = 0x82239088;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,244
	r26.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// bl 0x824d438c
	ctx.lr = 0x822390B0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82238300
	ctx.lr = 0x822390BC;
	sub_82238300(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822390d0
	if (!ctx.cr0.eq) goto loc_822390D0;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,87
	r31.u64 = r31.u64 | 87;
	// b 0x822390e8
	goto loc_822390E8;
loc_822390D0:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8223d3d0
	ctx.lr = 0x822390E4;
	sub_8223D3D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_822390E8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824d437c
	ctx.lr = 0x822390F0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8223A918) {
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
	ctx.lr = 0x8223A920;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// li r3,480
	ctx.r3.s64 = 480;
	// ori r4,r4,32779
	ctx.r4.u64 = ctx.r4.u64 | 32779;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// mr r19,r7
	r19.u64 = ctx.r7.u64;
	// bl 0x823cd118
	ctx.lr = 0x8223A948;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// li r21,0
	r21.s64 = 0;
	// bne 0x8223a960
	if (!ctx.cr0.eq) goto loc_8223A960;
loc_8223A954:
	// lis r24,-32761
	r24.s64 = -2147024896;
	// ori r24,r24,14
	r24.u64 = r24.u64 | 14;
	// b 0x8223ac8c
	goto loc_8223AC8C;
loc_8223A960:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// stw r22,156(r31)
	REX_STORE_U32(r31.u32 + 156, r22.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r21,80(r31)
	REX_STORE_U32(r31.u32 + 80, r21.u32);
	// ori r11,r11,25604
	ctx.r11.u64 = ctx.r11.u64 | 25604;
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// addi r30,r31,192
	r30.s64 = r31.s64 + 192;
	// stw r11,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r11.u32);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lbz r9,214(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 214);
	// lis r3,-2
	ctx.r3.s64 = -131072;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r8,r11,-23852
	ctx.r8.s64 = ctx.r11.s64 + -23852;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// ori r3,r3,2001
	ctx.r3.u64 = ctx.r3.u64 | 2001;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,2392(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2392);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// bl 0x824d48ac
	ctx.lr = 0x8223A9CC;
	__imp__XamUserReadProfileSettings(ctx, base);
	// cmplwi cr6,r3,122
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 122, ctx.xer);
	// beq cr6,0x8223a9e0
	if (ctx.cr6.eq) goto loc_8223A9E0;
	// lis r24,-32768
	r24.s64 = -2147483648;
	// ori r24,r24,16389
	r24.u64 = r24.u64 | 16389;
	// b 0x8223ac8c
	goto loc_8223AC8C;
loc_8223A9E0:
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x823cd118
	ctx.lr = 0x8223A9F0;
	sub_823CD118(ctx, base);
	// stw r3,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8223a954
	if (ctx.cr0.eq) goto loc_8223A954;
	// addi r30,r31,60
	r30.s64 = r31.s64 + 60;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x8223b8c8
	ctx.lr = 0x8223AA18;
	sub_8223B8C8(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// blt 0x8223ac8c
	if (ctx.cr0.lt) goto loc_8223AC8C;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r9,r31,64
	ctx.r9.s64 = r31.s64 + 64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8223AA30:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 + 24;
	// stw r10,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r10.u32);
	// stw r21,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, r21.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223aa64
	if (ctx.cr6.eq) goto loc_8223AA64;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x8223aa68
	goto loc_8223AA68;
loc_8223AA64:
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_8223AA68:
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x8223aa30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223AA30;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823cd980
	ctx.lr = 0x8223AA84;
	sub_823CD980(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823cd980
	ctx.lr = 0x8223AA94;
	sub_823CD980(ctx, base);
	// mr r29,r21
	r29.u64 = r21.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8223ab28
	if (ctx.cr6.eq) goto loc_8223AB28;
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
loc_8223AAA4:
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(r29.u32, 2, ctx.xer);
	// bge cr6,0x8223ab28
	if (!ctx.cr6.lt) goto loc_8223AB28;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223AAC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// blt 0x8223ab28
	if (ctx.cr0.lt) goto loc_8223AB28;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223AAE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwx r11,r7,r9
	REX_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r11.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(r29.u32, r27.u32, ctx.xer);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// stwx r10,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// blt cr6,0x8223aaa4
	if (ctx.cr6.lt) goto loc_8223AAA4;
loc_8223AB28:
	// addi r11,r31,44
	ctx.r11.s64 = r31.s64 + 44;
	// stw r29,44(r31)
	REX_STORE_U32(r31.u32 + 44, r29.u32);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// blt cr6,0x8223ac8c
	if (ctx.cr6.lt) goto loc_8223AC8C;
	// mr r26,r21
	r26.u64 = r21.u64;
	// mr r25,r21
	r25.u64 = r21.u64;
	// addi r23,r1,112
	r23.s64 = ctx.r1.s64 + 112;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_8223AB48:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r29,r21
	r29.u64 = r21.u64;
	// bl 0x823cd980
	ctx.lr = 0x8223AB5C;
	sub_823CD980(ctx, base);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// mr r30,r21
	r30.u64 = r21.u64;
	// addi r28,r11,-4
	r28.s64 = ctx.r11.s64 + -4;
loc_8223AB68:
	// add r11,r25,r30
	ctx.r11.u64 = r25.u64 + r30.u64;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223aba0
	if (ctx.cr6.eq) goto loc_8223ABA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223AB94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwu r11,4(r28)
	ea = 4 + r28.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r28.u32 = ea;
loc_8223ABA0:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// blt cr6,0x8223ab68
	if (ctx.cr6.lt) goto loc_8223AB68;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8223ac30
	if (ctx.cr6.eq) goto loc_8223AC30;
	// addi r7,r27,4
	ctx.r7.s64 = r27.s64 + 4;
	// lwz r4,0(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 0);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8223b4f8
	ctx.lr = 0x8223ABCC;
	sub_8223B4F8(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// blt 0x8223ac40
	if (ctx.cr0.lt) goto loc_8223AC40;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// mr r30,r21
	r30.u64 = r21.u64;
	// mr r29,r21
	r29.u64 = r21.u64;
loc_8223ABE4:
	// add r11,r25,r29
	ctx.r11.u64 = r25.u64 + r29.u64;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223ac24
	if (ctx.cr6.eq) goto loc_8223AC24;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r5,0(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223AC18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// blt 0x8223ac40
	if (ctx.cr0.lt) goto loc_8223AC40;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_8223AC24:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(r29.u32, 2, ctx.xer);
	// blt cr6,0x8223abe4
	if (ctx.cr6.lt) goto loc_8223ABE4;
loc_8223AC30:
	// addi r25,r25,2
	r25.s64 = r25.s64 + 2;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// cmplwi cr6,r25,6
	ctx.cr6.compare<uint32_t>(r25.u32, 6, ctx.xer);
	// blt cr6,0x8223ab48
	if (ctx.cr6.lt) goto loc_8223AB48;
loc_8223AC40:
	// stw r26,56(r31)
	REX_STORE_U32(r31.u32 + 56, r26.u32);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// blt cr6,0x8223ac8c
	if (ctx.cr6.lt) goto loc_8223AC8C;
	// addi r8,r31,8
	ctx.r8.s64 = r31.s64 + 8;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// addi r6,r31,48
	ctx.r6.s64 = r31.s64 + 48;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82240410
	ctx.lr = 0x8223AC68;
	sub_82240410(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// stw r20,0(r31)
	REX_STORE_U32(r31.u32 + 0, r20.u32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82239920
	ctx.lr = 0x8223AC80;
	sub_82239920(ctx, base);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// stw r30,152(r31)
	REX_STORE_U32(r31.u32 + 152, r30.u32);
	// bge cr6,0x8223ac98
	if (!ctx.cr6.lt) goto loc_8223AC98;
loc_8223AC8C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223a768
	ctx.lr = 0x8223AC94;
	sub_8223A768(ctx, base);
	// mr r31,r21
	r31.u64 = r21.u64;
loc_8223AC98:
	// stw r31,0(r19)
	REX_STORE_U32(r19.u32 + 0, r31.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_822487E0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82246220
	ctx.lr = 0x822487F8;
	sub_82246220(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82248824
	if (ctx.cr0.lt) goto loc_82248824;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82248818
	if (ctx.cr6.eq) goto loc_82248818;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82248824
	goto loc_82248824;
loc_82248818:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,4(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// bl 0x8226eed8
	ctx.lr = 0x82248824;
	sub_8226EED8(ctx, base);
loc_82248824:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82249838) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82249840;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32163
	ctx.r8.s64 = -2107834368;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,25008
	r31.s64 = ctx.r11.s64 + 25008;
	// lwz r11,25104(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 25104);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82249920
	if (!ctx.cr0.eq) goto loc_82249920;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r10,-4528
	ctx.r9.s64 = ctx.r10.s64 + -4528;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r11,25104(r8)
	REX_STORE_U32(ctx.r8.u32 + 25104, ctx.r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r11,168
	ctx.r11.s64 = 168;
	// stw r9,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x82259e80
	ctx.lr = 0x8224989C;
	sub_82259E80(ctx, base);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// addi r9,r9,-27120
	ctx.r9.s64 = ctx.r9.s64 + -27120;
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// stw r9,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r11,-4552
	ctx.r9.s64 = ctx.r11.s64 + -4552;
	// std r30,40(r31)
	REX_STORE_U64(r31.u32 + 40, r30.u64);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// li r9,172
	ctx.r9.s64 = 172;
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// addi r11,r31,40
	ctx.r11.s64 = r31.s64 + 40;
	// stw r9,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// stw r10,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// bl 0x82259e18
	ctx.lr = 0x822498F8;
	sub_82259E18(ctx, base);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r30,76(r31)
	REX_STORE_U32(r31.u32 + 76, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// addi r9,r9,-26216
	ctx.r9.s64 = ctx.r9.s64 + -26216;
	// stw r3,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r9,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// addi r11,r31,88
	ctx.r11.s64 = r31.s64 + 88;
	// std r30,88(r31)
	REX_STORE_U64(r31.u32 + 88, r30.u64);
loc_82249920:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8224CF80) {
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
	// addi r31,r11,26444
	r31.s64 = ctx.r11.s64 + 26444;
	// lwz r11,26464(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 26464);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8224cfc4
	if (!ctx.cr0.eq) goto loc_8224CFC4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,26464(r10)
	REX_STORE_U32(ctx.r10.u32 + 26464, ctx.r11.u32);
	// bl 0x8227acf8
	ctx.lr = 0x8224CFB8;
	sub_8227ACF8(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,15480
	ctx.r3.s64 = ctx.r11.s64 + 15480;
	// bl 0x822d5848
	ctx.lr = 0x8224CFC4;
	sub_822D5848(ctx, base);
loc_8224CFC4:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,5
	ctx.r10.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_8224E748) {
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
	// li r3,184
	ctx.r3.s64 = 184;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82255b48
	ctx.lr = 0x8224E76C;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224e780
	if (ctx.cr0.eq) goto loc_8224E780;
	// bl 0x822497d8
	ctx.lr = 0x8224E778;
	sub_822497D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8224e784
	goto loc_8224E784;
loc_8224E780:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8224E784:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8224e798
	if (!ctx.cr6.eq) goto loc_8224E798;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8224e7a4
	goto loc_8224E7A4;
loc_8224E798:
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_8224E7A4:
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

DEFINE_REX_FUNC(sub_82251AE8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-5860
	ctx.r3.s64 = ctx.r11.s64 + -5860;
	// b 0x82251550
	sub_82251550(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82251C88) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-5728
	ctx.r3.s64 = ctx.r11.s64 + -5728;
	// b 0x82251550
	sub_82251550(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82251EC0) {
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r10,r10,-5608
	ctx.r10.s64 = ctx.r10.s64 + -5608;
	// std r31,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r31.u64);
	// addi r9,r9,-5840
	ctx.r9.s64 = ctx.r9.s64 + -5840;
	// std r31,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r31.u64);
	// std r31,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, r31.u64);
	// std r31,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, r31.u64);
	// std r31,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82246ca8
	ctx.lr = 0x82251F08;
	sub_82246CA8(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,-8208
	ctx.r11.s64 = ctx.r11.s64 + -8208;
	// addi r10,r10,27712
	ctx.r10.s64 = ctx.r10.s64 + 27712;
	// addi r9,r9,27584
	ctx.r9.s64 = ctx.r9.s64 + 27584;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x82245da8
	ctx.lr = 0x82251F38;
	sub_82245DA8(ctx, base);
	// stw r3,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23584
	ctx.r4.s64 = ctx.r11.s64 + 23584;
	// bl 0x822512d8
	ctx.lr = 0x82251F50;
	sub_822512D8(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
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

DEFINE_REX_FUNC(sub_82253AD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82253AD8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32163
	ctx.r8.s64 = -2107834368;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,-7600
	r31.s64 = ctx.r11.s64 + -7600;
	// lwz r11,29452(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 29452);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82253f4c
	if (!ctx.cr0.eq) goto loc_82253F4C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r10,-1892
	ctx.r9.s64 = ctx.r10.s64 + -1892;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r11,29452(r8)
	REX_STORE_U32(ctx.r8.u32 + 29452, ctx.r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r9,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x8224dc30
	ctx.lr = 0x82253B34;
	sub_8224DC30(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// addi r9,r11,-1908
	ctx.r9.s64 = ctx.r11.s64 + -1908;
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r9,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// addi r11,r31,28
	ctx.r11.s64 = r31.s64 + 28;
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// stw r9,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// stw r10,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// bl 0x8224dc30
	ctx.lr = 0x82253B84;
	sub_8224DC30(ctx, base);
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,76(r31)
	REX_STORE_U32(r31.u32 + 76, r30.u32);
	// addi r9,r9,7016
	ctx.r9.s64 = ctx.r9.s64 + 7016;
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r3,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// stw r9,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r11,-1924
	ctx.r9.s64 = ctx.r11.s64 + -1924;
	// std r30,88(r31)
	REX_STORE_U64(r31.u32 + 88, r30.u64);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r10,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// stw r9,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r9.u32);
	// addi r11,r31,88
	ctx.r11.s64 = r31.s64 + 88;
	// stw r10,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// bl 0x8224dd10
	ctx.lr = 0x82253BE4;
	sub_8224DD10(ctx, base);
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r30,124(r31)
	REX_STORE_U32(r31.u32 + 124, r30.u32);
	// addi r9,r9,7256
	ctx.r9.s64 = ctx.r9.s64 + 7256;
	// stw r30,128(r31)
	REX_STORE_U32(r31.u32 + 128, r30.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r3,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// stw r9,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r9.u32);
	// addi r9,r8,-1956
	ctx.r9.s64 = ctx.r8.s64 + -1956;
	// li r10,3
	ctx.r10.s64 = 3;
	// std r30,136(r31)
	REX_STORE_U64(r31.u32 + 136, r30.u64);
	// addi r11,r31,136
	ctx.r11.s64 = r31.s64 + 136;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r9,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r9.u32);
	// stw r10,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r10.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r30,144(r31)
	REX_STORE_U32(r31.u32 + 144, r30.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r11.u32);
	// stw r9,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r9.u32);
	// stw r10,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r10.u32);
	// bl 0x8224dca0
	ctx.lr = 0x82253C40;
	sub_8224DCA0(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r30,172(r31)
	REX_STORE_U32(r31.u32 + 172, r30.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r30,176(r31)
	REX_STORE_U32(r31.u32 + 176, r30.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r30,180(r31)
	REX_STORE_U32(r31.u32 + 180, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r3,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r3.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// std r30,184(r31)
	REX_STORE_U64(r31.u32 + 184, r30.u64);
	// stw r10,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r10.u32);
	// addi r9,r8,-1972
	ctx.r9.s64 = ctx.r8.s64 + -1972;
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r30,192(r31)
	REX_STORE_U32(r31.u32 + 192, r30.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r9,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r9.u32);
	// stw r11,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r11.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r30,204(r31)
	REX_STORE_U32(r31.u32 + 204, r30.u32);
	// addi r11,r31,184
	ctx.r11.s64 = r31.s64 + 184;
	// stw r10,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r10.u32);
	// bl 0x8224dc30
	ctx.lr = 0x82253C98;
	sub_8224DC30(ctx, base);
	// stw r3,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r3.u32);
	// stw r30,220(r31)
	REX_STORE_U32(r31.u32 + 220, r30.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,224(r31)
	REX_STORE_U32(r31.u32 + 224, r30.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r30,228(r31)
	REX_STORE_U32(r31.u32 + 228, r30.u32);
	// addi r9,r11,-1992
	ctx.r9.s64 = ctx.r11.s64 + -1992;
	// stw r30,232(r31)
	REX_STORE_U32(r31.u32 + 232, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,236(r31)
	REX_STORE_U32(r31.u32 + 236, r30.u32);
	// stw r9,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r9.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r30,240(r31)
	REX_STORE_U32(r31.u32 + 240, r30.u32);
	// addi r11,r31,220
	ctx.r11.s64 = r31.s64 + 220;
	// stw r10,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r10.u32);
	// stw r30,252(r31)
	REX_STORE_U32(r31.u32 + 252, r30.u32);
	// stw r9,248(r31)
	REX_STORE_U32(r31.u32 + 248, ctx.r9.u32);
	// stw r10,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r10.u32);
	// bl 0x8224dc30
	ctx.lr = 0x82253CE4;
	sub_8224DC30(ctx, base);
	// stw r3,264(r31)
	REX_STORE_U32(r31.u32 + 264, ctx.r3.u32);
	// addi r11,r31,268
	ctx.r11.s64 = r31.s64 + 268;
	// stw r30,268(r31)
	REX_STORE_U32(r31.u32 + 268, r30.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,272(r31)
	REX_STORE_U32(r31.u32 + 272, r30.u32);
	// stw r30,276(r31)
	REX_STORE_U32(r31.u32 + 276, r30.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r30,280(r31)
	REX_STORE_U32(r31.u32 + 280, r30.u32);
	// addi r9,r11,-2004
	ctx.r9.s64 = ctx.r11.s64 + -2004;
	// stw r30,284(r31)
	REX_STORE_U32(r31.u32 + 284, r30.u32);
	// stw r9,304(r31)
	REX_STORE_U32(r31.u32 + 304, ctx.r9.u32);
	// li r9,28
	ctx.r9.s64 = 28;
	// stw r10,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r10.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r30,288(r31)
	REX_STORE_U32(r31.u32 + 288, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r9,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r9.u32);
	// stw r30,300(r31)
	REX_STORE_U32(r31.u32 + 300, r30.u32);
	// stw r10,308(r31)
	REX_STORE_U32(r31.u32 + 308, ctx.r10.u32);
	// bl 0x8224dc30
	ctx.lr = 0x82253D34;
	sub_8224DC30(ctx, base);
	// stw r3,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r3.u32);
	// stw r30,316(r31)
	REX_STORE_U32(r31.u32 + 316, r30.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,320(r31)
	REX_STORE_U32(r31.u32 + 320, r30.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r30,324(r31)
	REX_STORE_U32(r31.u32 + 324, r30.u32);
	// addi r9,r11,-2020
	ctx.r9.s64 = ctx.r11.s64 + -2020;
	// stw r30,328(r31)
	REX_STORE_U32(r31.u32 + 328, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,332(r31)
	REX_STORE_U32(r31.u32 + 332, r30.u32);
	// stw r30,336(r31)
	REX_STORE_U32(r31.u32 + 336, r30.u32);
	// stw r9,352(r31)
	REX_STORE_U32(r31.u32 + 352, ctx.r9.u32);
	// stw r10,340(r31)
	REX_STORE_U32(r31.u32 + 340, ctx.r10.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r30,348(r31)
	REX_STORE_U32(r31.u32 + 348, r30.u32);
	// stw r9,344(r31)
	REX_STORE_U32(r31.u32 + 344, ctx.r9.u32);
	// addi r11,r31,316
	ctx.r11.s64 = r31.s64 + 316;
	// stw r10,356(r31)
	REX_STORE_U32(r31.u32 + 356, ctx.r10.u32);
	// bl 0x8224dc30
	ctx.lr = 0x82253D84;
	sub_8224DC30(ctx, base);
	// stw r3,360(r31)
	REX_STORE_U32(r31.u32 + 360, ctx.r3.u32);
	// stw r30,364(r31)
	REX_STORE_U32(r31.u32 + 364, r30.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,368(r31)
	REX_STORE_U32(r31.u32 + 368, r30.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r30,372(r31)
	REX_STORE_U32(r31.u32 + 372, r30.u32);
	// addi r9,r11,-2048
	ctx.r9.s64 = ctx.r11.s64 + -2048;
	// stw r30,376(r31)
	REX_STORE_U32(r31.u32 + 376, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,380(r31)
	REX_STORE_U32(r31.u32 + 380, r30.u32);
	// stw r9,400(r31)
	REX_STORE_U32(r31.u32 + 400, ctx.r9.u32);
	// li r9,36
	ctx.r9.s64 = 36;
	// stw r10,388(r31)
	REX_STORE_U32(r31.u32 + 388, ctx.r10.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r30,384(r31)
	REX_STORE_U32(r31.u32 + 384, r30.u32);
	// addi r11,r31,364
	ctx.r11.s64 = r31.s64 + 364;
	// stw r30,396(r31)
	REX_STORE_U32(r31.u32 + 396, r30.u32);
	// stw r9,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r9.u32);
	// stw r10,404(r31)
	REX_STORE_U32(r31.u32 + 404, ctx.r10.u32);
	// bl 0x8224dc30
	ctx.lr = 0x82253DD4;
	sub_8224DC30(ctx, base);
	// stw r3,408(r31)
	REX_STORE_U32(r31.u32 + 408, ctx.r3.u32);
	// stw r30,412(r31)
	REX_STORE_U32(r31.u32 + 412, r30.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,416(r31)
	REX_STORE_U32(r31.u32 + 416, r30.u32);
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r30,420(r31)
	REX_STORE_U32(r31.u32 + 420, r30.u32);
	// addi r9,r11,-2080
	ctx.r9.s64 = ctx.r11.s64 + -2080;
	// stw r30,424(r31)
	REX_STORE_U32(r31.u32 + 424, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,428(r31)
	REX_STORE_U32(r31.u32 + 428, r30.u32);
	// stw r9,448(r31)
	REX_STORE_U32(r31.u32 + 448, ctx.r9.u32);
	// li r9,40
	ctx.r9.s64 = 40;
	// stw r10,436(r31)
	REX_STORE_U32(r31.u32 + 436, ctx.r10.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r30,432(r31)
	REX_STORE_U32(r31.u32 + 432, r30.u32);
	// addi r11,r31,412
	ctx.r11.s64 = r31.s64 + 412;
	// stw r30,444(r31)
	REX_STORE_U32(r31.u32 + 444, r30.u32);
	// stw r9,440(r31)
	REX_STORE_U32(r31.u32 + 440, ctx.r9.u32);
	// stw r10,452(r31)
	REX_STORE_U32(r31.u32 + 452, ctx.r10.u32);
	// bl 0x8224dc30
	ctx.lr = 0x82253E24;
	sub_8224DC30(ctx, base);
	// stw r3,456(r31)
	REX_STORE_U32(r31.u32 + 456, ctx.r3.u32);
	// stw r30,460(r31)
	REX_STORE_U32(r31.u32 + 460, r30.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,464(r31)
	REX_STORE_U32(r31.u32 + 464, r30.u32);
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r30,468(r31)
	REX_STORE_U32(r31.u32 + 468, r30.u32);
	// addi r9,r11,-3668
	ctx.r9.s64 = ctx.r11.s64 + -3668;
	// stw r30,472(r31)
	REX_STORE_U32(r31.u32 + 472, r30.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,476(r31)
	REX_STORE_U32(r31.u32 + 476, r30.u32);
	// stw r9,496(r31)
	REX_STORE_U32(r31.u32 + 496, ctx.r9.u32);
	// li r9,44
	ctx.r9.s64 = 44;
	// stw r10,484(r31)
	REX_STORE_U32(r31.u32 + 484, ctx.r10.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,480(r31)
	REX_STORE_U32(r31.u32 + 480, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,492(r31)
	REX_STORE_U32(r31.u32 + 492, r30.u32);
	// addi r11,r31,460
	ctx.r11.s64 = r31.s64 + 460;
	// stw r9,488(r31)
	REX_STORE_U32(r31.u32 + 488, ctx.r9.u32);
	// stw r10,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r10.u32);
	// bl 0x8224dc30
	ctx.lr = 0x82253E78;
	sub_8224DC30(ctx, base);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r30,508(r31)
	REX_STORE_U32(r31.u32 + 508, r30.u32);
	// addi r10,r10,-3608
	ctx.r10.s64 = ctx.r10.s64 + -3608;
	// addi r9,r9,-3648
	ctx.r9.s64 = ctx.r9.s64 + -3648;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r10,512(r31)
	REX_STORE_U32(r31.u32 + 512, ctx.r10.u32);
	// stw r9,516(r31)
	REX_STORE_U32(r31.u32 + 516, ctx.r9.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r3,504(r31)
	REX_STORE_U32(r31.u32 + 504, ctx.r3.u32);
	// li r10,11
	ctx.r10.s64 = 11;
	// std r30,520(r31)
	REX_STORE_U64(r31.u32 + 520, r30.u64);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r11,528(r31)
	REX_STORE_U32(r31.u32 + 528, ctx.r11.u32);
	// stw r10,532(r31)
	REX_STORE_U32(r31.u32 + 532, ctx.r10.u32);
	// addi r11,r31,520
	ctx.r11.s64 = r31.s64 + 520;
	// li r9,48
	ctx.r9.s64 = 48;
	// stw r30,540(r31)
	REX_STORE_U32(r31.u32 + 540, r30.u32);
	// addi r10,r7,-3740
	ctx.r10.s64 = ctx.r7.s64 + -3740;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r9,536(r31)
	REX_STORE_U32(r31.u32 + 536, ctx.r9.u32);
	// stw r10,544(r31)
	REX_STORE_U32(r31.u32 + 544, ctx.r10.u32);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// stw r11,548(r31)
	REX_STORE_U32(r31.u32 + 548, ctx.r11.u32);
	// bl 0x8224c388
	ctx.lr = 0x82253EDC;
	sub_8224C388(ctx, base);
	// stw r3,552(r31)
	REX_STORE_U32(r31.u32 + 552, ctx.r3.u32);
	// stw r30,556(r31)
	REX_STORE_U32(r31.u32 + 556, r30.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,560(r31)
	REX_STORE_U32(r31.u32 + 560, r30.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r30,564(r31)
	REX_STORE_U32(r31.u32 + 564, r30.u32);
	// addi r9,r11,-2680
	ctx.r9.s64 = ctx.r11.s64 + -2680;
	// stw r30,568(r31)
	REX_STORE_U32(r31.u32 + 568, r30.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r30,572(r31)
	REX_STORE_U32(r31.u32 + 572, r30.u32);
	// stw r9,592(r31)
	REX_STORE_U32(r31.u32 + 592, ctx.r9.u32);
	// li r9,52
	ctx.r9.s64 = 52;
	// stw r10,580(r31)
	REX_STORE_U32(r31.u32 + 580, ctx.r10.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,576(r31)
	REX_STORE_U32(r31.u32 + 576, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,588(r31)
	REX_STORE_U32(r31.u32 + 588, r30.u32);
	// addi r11,r31,556
	ctx.r11.s64 = r31.s64 + 556;
	// stw r9,584(r31)
	REX_STORE_U32(r31.u32 + 584, ctx.r9.u32);
	// stw r10,596(r31)
	REX_STORE_U32(r31.u32 + 596, ctx.r10.u32);
	// bl 0x8224dc30
	ctx.lr = 0x82253F30;
	sub_8224DC30(ctx, base);
	// stw r3,600(r31)
	REX_STORE_U32(r31.u32 + 600, ctx.r3.u32);
	// stw r30,604(r31)
	REX_STORE_U32(r31.u32 + 604, r30.u32);
	// addi r11,r31,604
	ctx.r11.s64 = r31.s64 + 604;
	// stw r30,608(r31)
	REX_STORE_U32(r31.u32 + 608, r30.u32);
	// stw r30,612(r31)
	REX_STORE_U32(r31.u32 + 612, r30.u32);
	// stw r30,616(r31)
	REX_STORE_U32(r31.u32 + 616, r30.u32);
	// stw r30,620(r31)
	REX_STORE_U32(r31.u32 + 620, r30.u32);
loc_82253F4C:
	// li r11,13
	ctx.r11.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82266370) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x822663a0
	if (!ctx.cr6.eq) goto loc_822663A0;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822663a8
	if (ctx.cr6.lt) goto loc_822663A8;
loc_8226638C:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822663a8
	if (!ctx.cr0.eq) goto loc_822663A8;
loc_82266398:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822663A0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226638c
	if (ctx.cr6.eq) goto loc_8226638C;
loc_822663A8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm. r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82266398
	if (ctx.cr0.eq) goto loc_82266398;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822663d0
	if (ctx.cr0.eq) goto loc_822663D0;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82266398
	if (ctx.cr0.eq) goto loc_82266398;
loc_822663D0:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x822663dc
	if (!ctx.cr6.eq) goto loc_822663DC;
	// b 0x82265fb0
	sub_82265FB0(ctx, base);
	return;
loc_822663DC:
	// b 0x822660c8
	sub_822660C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82268F40) {
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
	// lwz r11,236(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 236);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82268f8c
	if (ctx.cr6.lt) goto loc_82268F8C;
	// lwz r10,240(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 240);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82268f8c
	if (!ctx.cr6.lt) goto loc_82268F8C;
	// lwz r11,220(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82268f8c
	if (ctx.cr6.lt) goto loc_82268F8C;
	// bl 0x82268e00
	ctx.lr = 0x82268F7C;
	sub_82268E00(ctx, base);
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// blt cr6,0x82268f90
	if (ctx.cr6.lt) goto loc_82268F90;
loc_82268F8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82268F90:
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

DEFINE_REX_FUNC(sub_8226C2A0) {
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
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8225e988
	ctx.lr = 0x8226C2C4;
	sub_8225E988(ctx, base);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x82288ea0
	ctx.lr = 0x8226C2D4;
	sub_82288EA0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r11,r31,36
	ctx.r11.s64 = r31.s64 + 36;
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r31,68
	ctx.r11.s64 = r31.s64 + 68;
	// lfs f11,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r31,100
	ctx.r11.s64 = r31.s64 + 100;
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r8,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f7,96(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f6,104(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// addi r11,r31,132
	ctx.r11.s64 = r31.s64 + 132;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f5,104(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// addi r11,r31,164
	ctx.r11.s64 = r31.s64 + 164;
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// stfs f7,40(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// fdivs f4,f9,f8
	ctx.f4.f64 = double(float(ctx.f9.f64 / ctx.f8.f64));
	// fsubs f9,f12,f9
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fsubs f3,f11,f7
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// fdivs f10,f10,f5
	ctx.f10.f64 = double(float(ctx.f10.f64 / ctx.f5.f64));
	// fdivs f5,f7,f5
	ctx.f5.f64 = double(float(ctx.f7.f64 / ctx.f5.f64));
	// stfs f5,48(r31)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// fdivs f8,f6,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 / ctx.f8.f64));
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// fsubs f4,f13,f4
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// stfs f6,68(r31)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// stfs f7,72(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// stfs f8,76(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
	// stfs f5,80(r31)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// stfs f6,84(r31)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// fsubs f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// stfs f8,92(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f9,100(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// stfs f7,104(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 104, temp.u32);
	// stfs f4,108(r31)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r31.u32 + 108, temp.u32);
	// stfs f5,112(r31)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// stfs f9,116(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 116, temp.u32);
	// addi r11,r31,180
	ctx.r11.s64 = r31.s64 + 180;
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// addi r11,r31,196
	ctx.r11.s64 = r31.s64 + 196;
	// stfs f4,124(r31)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
	// addi r11,r31,212
	ctx.r11.s64 = r31.s64 + 212;
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// addi r11,r31,228
	ctx.r11.s64 = r31.s64 + 228;
	// stfs f12,132(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// addi r10,r31,276
	ctx.r10.s64 = r31.s64 + 276;
	// stfs f7,136(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// addi r11,r31,244
	ctx.r11.s64 = r31.s64 + 244;
	// stfs f5,144(r31)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// addi r11,r31,260
	ctx.r11.s64 = r31.s64 + 260;
	// stfs f13,140(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
	// addi r11,r31,292
	ctx.r11.s64 = r31.s64 + 292;
	// stfs f12,148(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// addi r11,r31,308
	ctx.r11.s64 = r31.s64 + 308;
	// stfs f13,156(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// addi r10,r31,340
	ctx.r10.s64 = r31.s64 + 340;
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// addi r9,r31,372
	ctx.r9.s64 = r31.s64 + 372;
	// addi r8,r31,404
	ctx.r8.s64 = r31.s64 + 404;
	// lfs f7,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,164(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 164, temp.u32);
	// lfs f7,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,168(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
	// lfs f7,140(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 140);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,172(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 172, temp.u32);
	// lfs f7,144(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,176(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 176, temp.u32);
	// stfs f12,180(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 180, temp.u32);
	// stfs f3,184(r31)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r31.u32 + 184, temp.u32);
	// stfs f13,188(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 188, temp.u32);
	// stfs f10,192(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 192, temp.u32);
	// lfs f7,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,196(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// lfs f7,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,200(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 200, temp.u32);
	// lfs f7,108(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 108);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,204(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 204, temp.u32);
	// lfs f7,112(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,208(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 208, temp.u32);
	// stfs f9,212(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 212, temp.u32);
	// stfs f3,216(r31)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r31.u32 + 216, temp.u32);
	// stfs f4,220(r31)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r31.u32 + 220, temp.u32);
	// stfs f10,224(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 224, temp.u32);
	// lfs f7,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,228(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 228, temp.u32);
	// lfs f7,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,232(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 232, temp.u32);
	// lfs f7,76(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 76);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,236(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 236, temp.u32);
	// lfs f7,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,240(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 240, temp.u32);
	// stfs f6,244(r31)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r31.u32 + 244, temp.u32);
	// stfs f3,248(r31)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r31.u32 + 248, temp.u32);
	// stfs f8,252(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 252, temp.u32);
	// stfs f10,256(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 256, temp.u32);
	// lfs f7,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,260(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 260, temp.u32);
	// lfs f7,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,264(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 264, temp.u32);
	// lfs f7,44(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,268(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 268, temp.u32);
	// lfs f7,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,272(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 272, temp.u32);
	// stfs f0,276(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 276, temp.u32);
	// stfs f3,280(r31)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r31.u32 + 280, temp.u32);
	// stfs f0,284(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 284, temp.u32);
	// stfs f10,288(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 288, temp.u32);
	// lfs f10,276(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 276);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,292(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 292, temp.u32);
	// lfs f10,280(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 280);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,296(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 296, temp.u32);
	// lfs f10,284(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 284);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,300(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 300, temp.u32);
	// lfs f10,288(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 288);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,304(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 304, temp.u32);
	// lfs f10,276(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 276);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,308(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 308, temp.u32);
	// lfs f10,280(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 280);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,312(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 312, temp.u32);
	// lfs f10,284(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 284);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,316(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 316, temp.u32);
	// lfs f10,288(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 288);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,320(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 320, temp.u32);
	// stfs f0,324(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 324, temp.u32);
	// stfs f11,328(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 328, temp.u32);
	// stfs f0,332(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 332, temp.u32);
	// stfs f13,336(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 336, temp.u32);
	// lfs f0,244(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,340(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 340, temp.u32);
	// lfs f0,248(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,344(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 344, temp.u32);
	// lfs f0,252(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,348(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 348, temp.u32);
	// lfs f0,256(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,352(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 352, temp.u32);
	// stfs f6,356(r31)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r31.u32 + 356, temp.u32);
	// stfs f11,360(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 360, temp.u32);
	// stfs f8,364(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 364, temp.u32);
	// stfs f13,368(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 368, temp.u32);
	// lfs f0,212(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,372(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 372, temp.u32);
	// lfs f0,216(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,376(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 376, temp.u32);
	// lfs f0,220(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,380(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 380, temp.u32);
	// lfs f0,224(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,384(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 384, temp.u32);
	// stfs f9,388(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 388, temp.u32);
	// stfs f11,392(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 392, temp.u32);
	// stfs f13,400(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 400, temp.u32);
	// stfs f4,396(r31)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r31.u32 + 396, temp.u32);
	// lfs f0,180(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,404(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 404, temp.u32);
	// lfs f0,184(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,408(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 408, temp.u32);
	// lfs f0,188(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,412(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 412, temp.u32);
	// lfs f0,192(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,416(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 416, temp.u32);
	// stfs f12,420(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 420, temp.u32);
	// stfs f11,424(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 424, temp.u32);
	// stfs f13,428(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 428, temp.u32);
	// stfs f13,432(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 432, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8227E450) {
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
	// lhz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8227e48c
	if (ctx.cr0.eq) goto loc_8227E48C;
loc_8227E47C:
	// lhzu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr. r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8227e47c
	if (!ctx.cr0.eq) goto loc_8227E47C;
loc_8227E48C:
	// rlwinm r11,r11,2,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// lwzx r31,r11,r3
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x8227e4b0
	goto loc_8227E4B0;
loc_8227E498:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822d7938
	ctx.lr = 0x8227E4A4;
	sub_822D7938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8227e4d4
	if (ctx.cr0.eq) goto loc_8227E4D4;
	// lwz r31,12(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 12);
loc_8227E4B0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8227e498
	if (!ctx.cr6.eq) goto loc_8227E498;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227E4BC:
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
loc_8227E4D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8227e4bc
	goto loc_8227E4BC;
}

DEFINE_REX_FUNC(sub_8227F7D8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8227FB10) {
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82255b48
	ctx.lr = 0x8227FB2C;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8227fb50
	if (ctx.cr0.eq) goto loc_8227FB50;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,1600
	ctx.r11.s64 = ctx.r11.s64 + 1600;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8227fb54
	goto loc_8227FB54;
loc_8227FB50:
	// li r31,0
	r31.s64 = 0;
loc_8227FB54:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8227fb68
	if (!ctx.cr6.eq) goto loc_8227FB68;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8227fb94
	goto loc_8227FB94;
loc_8227FB68:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822774e0
	ctx.lr = 0x8227FB74;
	sub_822774E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227FB8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// srawi r11,r30,31
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = r30.s32 >> 31;
	// and r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 & r30.u64;
loc_8227FB94:
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

DEFINE_REX_FUNC(sub_822820A0) {
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
	ctx.lr = 0x822820A8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82282400
	if (!ctx.cr6.eq) goto loc_82282400;
	// lwz r11,32(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82282400
	if (!ctx.cr6.eq) goto loc_82282400;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r28,r11,30504
	r28.s64 = ctx.r11.s64 + 30504;
	// lbz r11,-8(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + -8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82282400
	if (ctx.cr0.eq) goto loc_82282400;
	// lfs f1,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d60f0
	ctx.lr = 0x822820E8;
	sub_822D60F0(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16352(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16352);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lhz r29,118(r1)
	r29.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// srawi r10,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	ctx.r10.s64 = r29.s32 >> 4;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf. r10,r10,r29
	ctx.r10.u64 = r29.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82282128
	if (ctx.cr0.eq) goto loc_82282128;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// clrlwi r29,r11,16
	r29.u64 = ctx.r11.u32 & 0xFFFF;
loc_82282128:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82281b58
	ctx.lr = 0x82282134;
	sub_82281B58(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// bne 0x822821ac
	if (!ctx.cr0.eq) goto loc_822821AC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82281988
	ctx.lr = 0x8228214C;
	sub_82281988(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// bne 0x822821ac
	if (!ctx.cr0.eq) goto loc_822821AC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82281ad8
	ctx.lr = 0x82282160;
	sub_82281AD8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82281b58
	ctx.lr = 0x8228216C;
	sub_82281B58(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// bne 0x822821ac
	if (!ctx.cr0.eq) goto loc_822821AC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82281e70
	ctx.lr = 0x82282180;
	sub_82281E70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82282424
	if (ctx.cr0.lt) goto loc_82282424;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82281b58
	ctx.lr = 0x82282194;
	sub_82281B58(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// bne 0x822821ac
	if (!ctx.cr0.eq) goto loc_822821AC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82282424
	goto loc_82282424;
loc_822821AC:
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// addis r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -65536;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lhz r11,32(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// sth r11,46(r31)
	REX_STORE_U16(r31.u32 + 46, ctx.r11.u16);
	// lhz r11,34(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 34);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r11,48(r31)
	REX_STORE_U16(r31.u32 + 48, ctx.r11.u16);
	// bl 0x822d60f0
	ctx.lr = 0x822821EC;
	sub_822D60F0(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lhz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r9,65534
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65534, ctx.xer);
	// lfs f0,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lhz r10,118(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// sth r10,50(r31)
	REX_STORE_U16(r31.u32 + 50, ctx.r10.u16);
	// lhz r10,38(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 38);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// sth r10,52(r31)
	REX_STORE_U16(r31.u32 + 52, ctx.r10.u16);
	// lwz r3,60(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 60);
	// bne cr6,0x82282378
	if (!ctx.cr6.eq) goto loc_82282378;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82280980
	ctx.lr = 0x82282238;
	sub_82280980(ctx, base);
loc_82282238:
	// lhz r11,46(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 46);
	// li r7,1
	ctx.r7.s64 = 1;
	// lhz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 48);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lhz r6,70(r30)
	ctx.r6.u64 = REX_LOAD_U16(r30.u32 + 70);
	// extsw r5,r10
	ctx.r5.s64 = ctx.r10.s32;
	// lhz r8,50(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 50);
	// std r9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// std r5,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r5.u64);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfd f13,112(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// std r6,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lhz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 52);
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f11,112(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// lhz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 72);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcfid f12,f11
	ctx.f12.f64 = double(ctx.f11.s64);
	// fcfid f11,f10
	ctx.f11.f64 = double(ctx.f10.s64);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// lhz r11,70(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 70);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// frsp f12,f11
	ctx.f12.f64 = double(float(ctx.f11.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// lhz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 72);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stb r7,85(r31)
	REX_STORE_U8(r31.u32 + 85, ctx.r7.u8);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// bl 0x82288590
	ctx.lr = 0x8228232C;
	sub_82288590(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8228233c
	if (!ctx.cr0.eq) goto loc_8228233C;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r3,30508(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 30508);
loc_8228233C:
	// stw r3,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// lwz r11,204(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82282350
	if (!ctx.cr6.eq) goto loc_82282350;
	// stw r31,204(r30)
	REX_STORE_U32(r30.u32 + 204, r31.u32);
loc_82282350:
	// lwz r11,208(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82282368
	if (ctx.cr6.eq) goto loc_82282368;
	// stw r31,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, r31.u32);
	// lwz r11,208(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 208);
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
loc_82282368:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// stw r31,208(r30)
	REX_STORE_U32(r30.u32 + 208, r31.u32);
	// b 0x82282420
	goto loc_82282420;
loc_82282378:
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r27,38(r11)
	r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 38);
	// lhz r26,36(r11)
	r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 36);
	// lhz r25,34(r11)
	r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 34);
	// lwz r29,0(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lhz r24,32(r11)
	r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 32);
	// lwz r23,0(r9)
	r23.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8229a710
	ctx.lr = 0x8228239C;
	sub_8229A710(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 28);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r29,3
	r29.s64 = 3;
	// lhz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 0);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// lwz r4,36(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 36);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822823DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x82282238
	if (!ctx.cr0.lt) goto loc_82282238;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82281710
	ctx.lr = 0x822823F0;
	sub_82281710(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// b 0x82282424
	goto loc_82282424;
loc_82282400:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,85(r31)
	REX_STORE_U8(r31.u32 + 85, ctx.r11.u8);
	// bl 0x82288590
	ctx.lr = 0x8228240C;
	sub_82288590(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8228241c
	if (!ctx.cr0.eq) goto loc_8228241C;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r3,30508(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 30508);
loc_8228241C:
	// stw r3,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r3.u32);
loc_82282420:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82282424:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_82291610) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r9,16
	ctx.r9.s64 = 16;
	// lvlx128 v63,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,48
	ctx.r11.s64 = 48;
	// li r8,64
	ctx.r8.s64 = 64;
	// lvrx128 v62,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// lvrx128 v61,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v62,v61
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lvrx128 v60,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v61,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v61,v61,v60
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// lvrx128 v59,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v60,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v60,v60,v59
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// vmrghw128 v59,v63,v61
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vmrglw128 v63,v63,v61
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vmrghw128 v61,v62,v60
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vmrglw128 v62,v62,v60
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vmrghw128 v60,v59,v61
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// vmrglw128 v61,v59,v61
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// vmrghw128 v59,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vmrglw128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// stvlx128 v60,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvrx128 v60,r3,r9
	ea = ctx.r3.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v60.u8[i]);
	// stvlx128 v61,r3,r9
	ea = ctx.r3.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvrx128 v61,r3,r10
	ea = ctx.r3.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v61.u8[i]);
	// stvlx128 v59,r3,r10
	ea = ctx.r3.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvrx128 v59,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v59.u8[i]);
	// stvlx128 v63,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r3,r8
	ea = ctx.r3.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82295BD8) {
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
	ctx.lr = 0x82295BE0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// li r26,-1
	r26.s64 = -1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82295ce4
	if (ctx.cr6.eq) goto loc_82295CE4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82295ce4
	if (ctx.cr6.eq) goto loc_82295CE4;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82295ce4
	if (ctx.cr6.eq) goto loc_82295CE4;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82295ce4
	if (!ctx.cr6.lt) goto loc_82295CE4;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82295ce4
	if (ctx.cr6.lt) goto loc_82295CE4;
	// li r27,0
	r27.s64 = 0;
	// stw r27,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r27.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82295c68
	if (ctx.cr6.eq) goto loc_82295C68;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82276748
	ctx.lr = 0x82295C4C;
	sub_82276748(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82295cec
	if (ctx.cr0.lt) goto loc_82295CEC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r26,r27
	r26.u64 = r27.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x82295cec
	goto loc_82295CEC;
loc_82295C68:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82255b48
	ctx.lr = 0x82295C70;
	sub_82255B48(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82295cdc
	if (ctx.cr0.eq) goto loc_82295CDC;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x82276838
	ctx.lr = 0x82295C90;
	sub_82276838(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82295cc8
	if (ctx.cr0.lt) goto loc_82295CC8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x822767a0
	ctx.lr = 0x82295CAC;
	sub_822767A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82295cc8
	if (ctx.cr0.lt) goto loc_82295CC8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x82295cec
	if (!ctx.cr6.eq) goto loc_82295CEC;
	// mr r26,r27
	r26.u64 = r27.u64;
	// b 0x82295cec
	goto loc_82295CEC;
loc_82295CC8:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82255b70
	ctx.lr = 0x82295CD0;
	sub_82255B70(ctx, base);
	// li r26,-1
	r26.s64 = -1;
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
	// b 0x82295cec
	goto loc_82295CEC;
loc_82295CDC:
	// li r26,-8
	r26.s64 = -8;
	// b 0x82295cec
	goto loc_82295CEC;
loc_82295CE4:
	// lis r26,-32768
	r26.s64 = -2147483648;
	// ori r26,r26,6
	r26.u64 = r26.u64 | 6;
loc_82295CEC:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8229D910) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8229D918;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82222db0
	ctx.lr = 0x8229D92C;
	sub_82222DB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82215b80
	ctx.lr = 0x8229D934;
	sub_82215B80(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8229da84
	if (ctx.cr6.eq) goto loc_8229DA84;
	// cmpwi cr6,r3,17
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 17, ctx.xer);
	// beq cr6,0x8229da18
	if (ctx.cr6.eq) goto loc_8229DA18;
	// cmpwi cr6,r3,18
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 18, ctx.xer);
	// beq cr6,0x8229d9b4
	if (ctx.cr6.eq) goto loc_8229D9B4;
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// bne cr6,0x8229daf0
	if (!ctx.cr6.eq) goto loc_8229DAF0;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822c80d0
	ctx.lr = 0x8229D95C;
	sub_822C80D0(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82222dc0
	ctx.lr = 0x8229D970;
	sub_82222DC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82222db0
	ctx.lr = 0x8229D978;
	sub_82222DB0(ctx, base);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r6,160(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,184(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82404bf0
	ctx.lr = 0x8229D9AC;
	sub_82404BF0(ctx, base);
loc_8229D9AC:
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8229daf4
	goto loc_8229DAF4;
loc_8229D9B4:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822c80d0
	ctx.lr = 0x8229D9BC;
	sub_822C80D0(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82222dc0
	ctx.lr = 0x8229D9D0;
	sub_82222DC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82222db0
	ctx.lr = 0x8229D9D8;
	sub_82222DB0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r6,160(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,184(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82404c58
	ctx.lr = 0x8229DA14;
	sub_82404C58(ctx, base);
	// b 0x8229d9ac
	goto loc_8229D9AC;
loc_8229DA18:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822c80d0
	ctx.lr = 0x8229DA20;
	sub_822C80D0(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82222f58
	ctx.lr = 0x8229DA34;
	sub_82222F58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82222db0
	ctx.lr = 0x8229DA3C;
	sub_82222DB0(ctx, base);
	// addi r29,r1,112
	r29.s64 = ctx.r1.s64 + 112;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// li r28,-1
	r28.s64 = -1;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,128(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,152(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,148(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r3,144(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// bl 0x82404cd0
	ctx.lr = 0x8229DA80;
	sub_82404CD0(ctx, base);
	// b 0x8229d9ac
	goto loc_8229D9AC;
loc_8229DA84:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822c80d0
	ctx.lr = 0x8229DA8C;
	sub_822C80D0(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82222dc0
	ctx.lr = 0x8229DAA0;
	sub_82222DC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82222db0
	ctx.lr = 0x8229DAA8;
	sub_82222DB0(ctx, base);
	// lwz r29,16(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r7,160(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// lwz r4,188(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,184(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82404b08
	ctx.lr = 0x8229DAEC;
	sub_82404B08(ctx, base);
	// b 0x8229d9ac
	goto loc_8229D9AC;
loc_8229DAF0:
	// lwz r29,116(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
loc_8229DAF4:
	// lis r11,-17408
	ctx.r11.s64 = -1140850688;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// lis r5,-17408
	ctx.r5.s64 = -1140850688;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,31492(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 31492);
	// bl 0x822a98e0
	ctx.lr = 0x8229DB10;
	sub_822A98E0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r4.u32);
	// bne 0x8229db24
	if (!ctx.cr0.eq) goto loc_8229DB24;
loc_8229DB1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8229db68
	goto loc_8229DB68;
loc_8229DB24:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82404e00
	ctx.lr = 0x8229DB2C;
	sub_82404E00(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82215b80
	ctx.lr = 0x8229DB34;
	sub_82215B80(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8229db54
	if (ctx.cr6.eq) goto loc_8229DB54;
	// cmpwi cr6,r3,17
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 17, ctx.xer);
	// beq cr6,0x8229db54
	if (ctx.cr6.eq) goto loc_8229DB54;
	// cmpwi cr6,r3,18
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 18, ctx.xer);
	// beq cr6,0x8229db54
	if (ctx.cr6.eq) goto loc_8229DB54;
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// bne cr6,0x8229db1c
	if (!ctx.cr6.eq) goto loc_8229DB1C;
loc_8229DB54:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r4,r30,52
	ctx.r4.s64 = r30.s64 + 52;
	// bl 0x82209140
	ctx.lr = 0x8229DB64;
	sub_82209140(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8229DB68:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822A4640) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x822a466c
	if (ctx.cr6.gt) goto loc_822A466C;
loc_822A4664:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822a4970
	goto loc_822A4970;
loc_822A466C:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822a4664
	if (!ctx.cr6.gt) goto loc_822A4664;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r31,8(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822a4664
	if (ctx.cr6.eq) goto loc_822A4664;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a46b0
	if (ctx.cr0.eq) goto loc_822A46B0;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,31464(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31464);
	// lwz r11,772(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 772);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822a4664
	if (!ctx.cr6.gt) goto loc_822A4664;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822a46b4
	goto loc_822A46B4;
loc_822A46B0:
	// li r11,4
	ctx.r11.s64 = 4;
loc_822A46B4:
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// stw r11,31480(r10)
	REX_STORE_U32(ctx.r10.u32 + 31480, ctx.r11.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822a4774
	if (ctx.cr6.lt) goto loc_822A4774;
	// beq cr6,0x822a4744
	if (ctx.cr6.eq) goto loc_822A4744;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x822a4720
	if (ctx.cr6.lt) goto loc_822A4720;
	// beq cr6,0x822a4708
	if (ctx.cr6.eq) goto loc_822A4708;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x822a4784
	if (!ctx.cr6.lt) goto loc_822A4784;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a1098
	ctx.lr = 0x822A46F0;
	sub_822A1098(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,56(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 56);
	// bl 0x822aa070
	ctx.lr = 0x822A46FC;
	sub_822AA070(ctx, base);
	// lwz r5,64(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 64);
	// lwz r4,60(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 60);
	// b 0x822a4768
	goto loc_822A4768;
loc_822A4708:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a1098
	ctx.lr = 0x822A4718;
	sub_822A1098(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x822a4734
	goto loc_822A4734;
loc_822A4720:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a1098
	ctx.lr = 0x822A4730;
	sub_822A1098(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
loc_822A4734:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822aa070
	ctx.lr = 0x822A473C;
	sub_822AA070(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x822a4764
	goto loc_822A4764;
loc_822A4744:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a1098
	ctx.lr = 0x822A4754;
	sub_822A1098(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822aa070
	ctx.lr = 0x822A4760;
	sub_822AA070(ctx, base);
	// li r5,7
	ctx.r5.s64 = 7;
loc_822A4764:
	// li r4,6
	ctx.r4.s64 = 6;
loc_822A4768:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822aa060
	ctx.lr = 0x822A4770;
	sub_822AA060(ctx, base);
	// b 0x822a4784
	goto loc_822A4784;
loc_822A4774:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a1098
	ctx.lr = 0x822A4784;
	sub_822A1098(ctx, base);
loc_822A4784:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a1098
	ctx.lr = 0x822A4794;
	sub_822A1098(ctx, base);
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 84);
	// li r4,21
	ctx.r4.s64 = 21;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bne 0x822a47b0
	if (!ctx.cr0.eq) goto loc_822A47B0;
	// li r5,0
	ctx.r5.s64 = 0;
loc_822A47B0:
	// bl 0x822a1098
	ctx.lr = 0x822A47B4;
	sub_822A1098(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r5,101(r30)
	ctx.r5.u64 = REX_LOAD_U8(r30.u32 + 101);
	// bl 0x822a1098
	ctx.lr = 0x822A47C4;
	sub_822A1098(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,104(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 104);
	// bl 0x822a1528
	ctx.lr = 0x822A47D0;
	sub_822A1528(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r4,102(r30)
	ctx.r4.u64 = REX_LOAD_U8(r30.u32 + 102);
	// bl 0x822a1370
	ctx.lr = 0x822A47DC;
	sub_822A1370(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r7,111(r30)
	ctx.r7.u64 = REX_LOAD_U8(r30.u32 + 111);
	// lbz r6,110(r30)
	ctx.r6.u64 = REX_LOAD_U8(r30.u32 + 110);
	// lbz r5,109(r30)
	ctx.r5.u64 = REX_LOAD_U8(r30.u32 + 109);
	// lbz r4,108(r30)
	ctx.r4.u64 = REX_LOAD_U8(r30.u32 + 108);
	// bl 0x822a12d0
	ctx.lr = 0x822A47F4;
	sub_822A12D0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lbz r5,112(r30)
	ctx.r5.u64 = REX_LOAD_U8(r30.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a1098
	ctx.lr = 0x822A4804;
	sub_822A1098(ctx, base);
	// lbz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 112);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822a4824
	if (ctx.cr0.eq) goto loc_822A4824;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,2392(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2392);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822a14a8
	ctx.lr = 0x822A4824;
	sub_822A14A8(ctx, base);
loc_822A4824:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a11a8
	ctx.lr = 0x822A4834;
	sub_822A11A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a11a8
	ctx.lr = 0x822A4844;
	sub_822A11A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a11a8
	ctx.lr = 0x822A4854;
	sub_822A11A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a11a8
	ctx.lr = 0x822A4864;
	sub_822A11A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a11a8
	ctx.lr = 0x822A4874;
	sub_822A11A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a11a8
	ctx.lr = 0x822A4884;
	sub_822A11A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a11a8
	ctx.lr = 0x822A4894;
	sub_822A11A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a11a8
	ctx.lr = 0x822A48A4;
	sub_822A11A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a11a8
	ctx.lr = 0x822A48B4;
	sub_822A11A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a11a8
	ctx.lr = 0x822A48C4;
	sub_822A11A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a11a8
	ctx.lr = 0x822A48D4;
	sub_822A11A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a11a8
	ctx.lr = 0x822A48E4;
	sub_822A11A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a1098
	ctx.lr = 0x822A48F4;
	sub_822A1098(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a1098
	ctx.lr = 0x822A4904;
	sub_822A1098(ctx, base);
	// lwz r4,32(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 32);
	// lwz r31,16(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82226af8
	ctx.lr = 0x822A4914;
	sub_82226AF8(ctx, base);
	// lwz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 88);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822a493c
	if (!ctx.cr6.eq) goto loc_822A493C;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,92(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 92);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,28(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 28);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822125d0
	ctx.lr = 0x822A493C;
	sub_822125D0(ctx, base);
loc_822A493C:
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 84);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a496c
	if (ctx.cr0.eq) goto loc_822A496C;
	// lwz r3,260(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 260);
	// li r31,0
	r31.s64 = 0;
	// bl 0x822b25c0
	ctx.lr = 0x822A4954;
	sub_822B25C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822a4960
	if (ctx.cr0.eq) goto loc_822A4960;
	// li r31,1
	r31.s64 = 1;
loc_822A4960:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,128
	ctx.r3.s64 = r30.s64 + 128;
	// bl 0x822ab520
	ctx.lr = 0x822A496C;
	sub_822AB520(ctx, base);
loc_822A496C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822A4970:
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

DEFINE_REX_FUNC(sub_822AE858) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x822c80d0
	ctx.lr = 0x822AE874;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ae88c
	if (ctx.cr0.eq) goto loc_822AE88C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822c2140
	ctx.lr = 0x822AE884;
	sub_822C2140(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x822ae894
	goto loc_822AE894;
loc_822AE88C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_822AE894:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x822ad9c0
	ctx.lr = 0x822AE8A0;
	sub_822AD9C0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
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

DEFINE_REX_FUNC(sub_822B11E8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// stw r4,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,528(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b1218
	if (ctx.cr6.eq) goto loc_822B1218;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x822b121c
	goto loc_822B121C;
loc_822B1218:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822B121C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,468(r11)
	REX_STORE_U8(ctx.r11.u32 + 468, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B2660) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,76(r3)
	REX_STORE_U8(ctx.r3.u32 + 76, ctx.r10.u8);
	// lfs f0,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stb r10,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
loc_822B2680:
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r8,r11,15
	ctx.r8.s64 = ctx.r11.s64 + 15;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// stwx r10,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// stb r10,56(r6)
	REX_STORE_U8(ctx.r6.u32 + 56, ctx.r10.u8);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// stfsx f0,r8,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r3.u32, temp.u32);
	// blt cr6,0x822b2680
	if (ctx.cr6.lt) goto loc_822B2680;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B42A0) {
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
	ctx.lr = 0x822B42A8;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f24
	ctx.lr = 0x822B42B0;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,112(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b45f4
	if (ctx.cr0.eq) goto loc_822B45F4;
	// bl 0x822c4cf0
	ctx.lr = 0x822B42D8;
	sub_822C4CF0(ctx, base);
	// lfs f11,144(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,148(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,160(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,164(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f12,152(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,168(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 168);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822b4308
	if (!ctx.cr6.lt) goto loc_822B4308;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_822B4308:
	// fsubs f13,f9,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822b4318
	if (!ctx.cr6.lt) goto loc_822B4318;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_822B4318:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r11,112(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 112);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,192
	ctx.r3.s64 = ctx.r11.s64 + 192;
	// lfs f13,23276(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 23276);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f0,f13
	f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f24,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	f24.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
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
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f27,f11,f31
	f27.f64 = double(float(ctx.f11.f64 + f31.f64));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fadds f26,f10,f31
	f26.f64 = double(float(ctx.f10.f64 + f31.f64));
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f25,f12,f31
	f25.f64 = double(float(ctx.f12.f64 + f31.f64));
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f24,156(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f27,144(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f26,148(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f25,152(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x821f3f40
	ctx.lr = 0x822B4390;
	sub_821F3F40(ctx, base);
	// lwz r11,68(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 68);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822b45e8
	if (!ctx.cr6.gt) goto loc_822B45E8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f28,23272(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 23272);
	f28.f64 = double(temp.f32);
	// lfs f29,-6656(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -6656);
	f29.f64 = double(temp.f32);
	// lfs f30,-6484(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -6484);
	f30.f64 = double(temp.f32);
	// lfs f23,16224(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16224);
	f23.f64 = double(temp.f32);
loc_822B43C0:
	// lwz r10,64(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 64);
	// rlwinm. r11,r10,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822b43e4
	if (!ctx.cr0.eq) goto loc_822B43E4;
	// rlwinm. r11,r10,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822b43e4
	if (!ctx.cr0.eq) goto loc_822B43E4;
	// rlwinm. r11,r10,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822b43e4
	if (!ctx.cr0.eq) goto loc_822B43E4;
	// rlwinm. r11,r10,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b443c
	if (ctx.cr0.eq) goto loc_822B443C;
loc_822B43E4:
	// rlwinm. r9,r10,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// beq 0x822b43f8
	if (ctx.cr0.eq) goto loc_822B43F8;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x822b4414
	goto loc_822B4414;
loc_822B43F8:
	// rlwinm. r9,r10,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822b4408
	if (ctx.cr0.eq) goto loc_822B4408;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x822b4414
	goto loc_822B4414;
loc_822B4408:
	// rlwinm. r10,r10,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822b4414
	if (ctx.cr0.eq) goto loc_822B4414;
	// li r11,8
	ctx.r11.s64 = 8;
loc_822B4414:
	// clrlwi. r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x822b443c
	if (ctx.cr0.eq) goto loc_822B443C;
loc_822B4420:
	// lhz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// sth r9,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r9.u16);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// blt cr6,0x822b4420
	if (ctx.cr6.lt) goto loc_822B4420;
loc_822B443C:
	// lwz r11,64(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 64);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b4488
	if (ctx.cr0.eq) goto loc_822B4488;
	// li r11,2
	ctx.r11.s64 = 2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822B4450:
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// lfd f0,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 * f23.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lbz r11,87(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 87);
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bdnz 0x822b4450
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822B4450;
loc_822B4488:
	// lwz r11,64(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 64);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b44f0
	if (ctx.cr0.eq) goto loc_822B44F0;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// lbz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 0);
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r11,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r11.u16);
	// andi. r11,r11,65295
	ctx.r11.u64 = ctx.r11.u64 & 65295;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r10,1(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 1);
	// rlwinm r10,r10,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r11.u16);
	// andi. r11,r11,61695
	ctx.r11.u64 = ctx.r11.u64 & 61695;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r10,2(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 2);
	// rlwinm r10,r10,4,12,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// sth r11,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r11.u16);
	// lbz r11,3(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 3);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// rlwimi r10,r11,8,8,19
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFF000) | (ctx.r10.u64 & 0xFFFFFFFFFF000FFF);
	// sth r10,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r10.u16);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
loc_822B44F0:
	// lwz r11,64(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 64);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b451c
	if (ctx.cr0.eq) goto loc_822B451C;
	// li r11,3
	ctx.r11.s64 = 3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822B4504:
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// sth r11,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r11.u16);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// bdnz 0x822b4504
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822B4504;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
loc_822B451C:
	// lwz r11,64(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 64);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b45d8
	if (ctx.cr0.eq) goto loc_822B45D8;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f24,f31
	ctx.f13.f64 = double(float(f24.f64 / f31.f64));
	// lfs f12,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 - f27.f64));
	// lfs f11,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f26
	ctx.f12.f64 = double(float(ctx.f12.f64 - f26.f64));
	// fsubs f11,f11,f25
	ctx.f11.f64 = double(float(ctx.f11.f64 - f25.f64));
	// stfs f29,160(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f29,164(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// stfs f29,168(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// stfs f28,208(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stfs f28,212(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stfs f28,216(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmuls f0,f12,f30
	ctx.f0.f64 = double(float(ctx.f12.f64 * f30.f64));
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmuls f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f13.f64 * f30.f64));
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// bl 0x822b37b8
	ctx.lr = 0x822B4594;
	sub_822B37B8(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// lfs f0,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lhz r11,86(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// stfd f13,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lhz r10,94(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 94);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lhz r9,94(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 94);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// sth r11,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r11.u16);
	// sth r10,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r10.u16);
	// sth r9,4(r31)
	REX_STORE_U16(r31.u32 + 4, ctx.r9.u16);
	// addi r31,r31,6
	r31.s64 = r31.s64 + 6;
loc_822B45D8:
	// lwz r11,68(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 68);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822b43c0
	if (ctx.cr6.lt) goto loc_822B43C0;
loc_822B45E8:
	// lwz r3,112(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 112);
	// bl 0x822c4da0
	ctx.lr = 0x822B45F0;
	sub_822C4DA0(ctx, base);
	// b 0x822b4604
	goto loc_822B4604;
loc_822B45F4:
	// lwz r3,112(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 112);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r5,36(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// bl 0x822c4dc0
	ctx.lr = 0x822B4604;
	sub_822C4DC0(ctx, base);
loc_822B4604:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f70
	ctx.lr = 0x822B4610;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822C83E8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c840c
	if (ctx.cr6.eq) goto loc_822C840C;
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822c840c
	if (!ctx.cr6.lt) goto loc_822C840C;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
loc_822C840C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C8A70) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822C8A78;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822c8a98
	if (!ctx.cr6.eq) goto loc_822C8A98;
loc_822C8A90:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822c8af0
	goto loc_822C8AF0;
loc_822C8A98:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823cdd78
	ctx.lr = 0x822C8AA0;
	sub_823CDD78(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822c8a90
	if (ctx.cr6.eq) goto loc_822C8A90;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r3,56(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 56);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823cded0
	ctx.lr = 0x822C8AC0;
	sub_823CDED0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822c8a90
	if (ctx.cr0.eq) goto loc_822C8A90;
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// std r10,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r10.u64);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// std r8,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r8.u64);
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
	// std r9,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r9.u64);
loc_822C8AF0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822C9B78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822C9B80;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r30,r3,80
	r30.s64 = ctx.r3.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C9BA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r29,78(r31)
	REX_STORE_U8(r31.u32 + 78, r29.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C9BBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822CAE68) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822CAE70;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,292(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 292);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822cae8c
	if (ctx.cr0.eq) goto loc_822CAE8C;
loc_822CAE84:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822caf74
	goto loc_822CAF74;
loc_822CAE8C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,248
	ctx.r3.s64 = r31.s64 + 248;
	// std r11,248(r31)
	REX_STORE_U64(r31.u32 + 248, ctx.r11.u64);
	// li r29,1
	r29.s64 = 1;
	// std r11,256(r31)
	REX_STORE_U64(r31.u32 + 256, ctx.r11.u64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// std r11,264(r31)
	REX_STORE_U64(r31.u32 + 264, ctx.r11.u64);
	// std r11,272(r31)
	REX_STORE_U64(r31.u32 + 272, ctx.r11.u64);
	// std r11,280(r31)
	REX_STORE_U64(r31.u32 + 280, ctx.r11.u64);
	// stw r11,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r11.u32);
	// beq cr6,0x822caec4
	if (ctx.cr6.eq) goto loc_822CAEC4;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x822d4fa0
	ctx.lr = 0x822CAEC0;
	sub_822D4FA0(ctx, base);
	// b 0x822caed0
	goto loc_822CAED0;
loc_822CAEC4:
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stw r11,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r11.u32);
	// stw r11,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r11.u32);
loc_822CAED0:
	// bl 0x822cd6f0
	ctx.lr = 0x822CAED4;
	sub_822CD6F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822caef4
	if (ctx.cr0.eq) goto loc_822CAEF4;
	// bl 0x822cd6f0
	ctx.lr = 0x822CAEE0;
	sub_822CD6F0(ctx, base);
	// bl 0x822cd798
	ctx.lr = 0x822CAEE4;
	sub_822CD798(ctx, base);
	// stw r3,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r3.u32);
	// bl 0x822cd6f0
	ctx.lr = 0x822CAEEC;
	sub_822CD6F0(ctx, base);
	// bl 0x822cd7c8
	ctx.lr = 0x822CAEF0;
	sub_822CD7C8(ctx, base);
	// stw r3,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r3.u32);
loc_822CAEF4:
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// addi r30,r31,164
	r30.s64 = r31.s64 + 164;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822caf54
	if (!ctx.cr6.eq) goto loc_822CAF54;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8242f1c8
	ctx.lr = 0x822CAF14;
	sub_8242F1C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822cae84
	if (ctx.cr0.lt) goto loc_822CAE84;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,168
	ctx.r4.s64 = r31.s64 + 168;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CAF48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822cae84
	if (ctx.cr0.lt) goto loc_822CAE84;
	// stb r29,293(r31)
	REX_STORE_U8(r31.u32 + 293, r29.u8);
loc_822CAF54:
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r11.u32);
	// beq cr6,0x822cae84
	if (ctx.cr6.eq) goto loc_822CAE84;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r29,292(r31)
	REX_STORE_U8(r31.u32 + 292, r29.u8);
loc_822CAF74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822CE4D0) {
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
	ctx.lr = 0x822CE4E8;
	sub_822CE328(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822ce4f8
	if (!ctx.cr0.eq) goto loc_822CE4F8;
loc_822CE4F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822ce514
	goto loc_822CE514;
loc_822CE4F8:
	// bl 0x823caf88
	ctx.lr = 0x822CE4FC;
	sub_823CAF88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822ce4f0
	if (!ctx.cr0.eq) goto loc_822CE4F0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ce2d8
	ctx.lr = 0x822CE510;
	sub_822CE2D8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_822CE514:
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

DEFINE_REX_FUNC(sub_822D0500) {
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
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
	// bl 0x822c88c0
	ctx.lr = 0x822D0528;
	sub_822C88C0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r30,104(r31)
	REX_STORE_U8(r31.u32 + 104, r30.u8);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// stb r30,105(r31)
	REX_STORE_U8(r31.u32 + 105, r30.u8);
	// li r5,56
	ctx.r5.s64 = 56;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// bl 0x822d5870
	ctx.lr = 0x822D054C;
	sub_822D5870(ctx, base);
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

DEFINE_REX_FUNC(sub_822D1410) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822D1418;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4600(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4600);
	// addi r29,r3,4600
	r29.s64 = ctx.r3.s64 + 4600;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D1440;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// bgt cr6,0x822d1460
	if (ctx.cr6.gt) goto loc_822D1460;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d1460
	if (ctx.cr6.eq) goto loc_822D1460;
	// li r28,1
	r28.s64 = 1;
loc_822D1460:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D1474;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822D23C0) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// addi r30,r3,36
	r30.s64 = ctx.r3.s64 + 36;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D23F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f31,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D2410;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_822D3E50) {
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
	ctx.lr = 0x822D3E58;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// bl 0x822cd7a8
	ctx.lr = 0x822D3E6C;
	sub_822CD7A8(ctx, base);
	// lhz r24,1030(r3)
	r24.u64 = REX_LOAD_U16(ctx.r3.u32 + 1030);
	// bl 0x822cd7b8
	ctx.lr = 0x822D3E74;
	sub_822CD7B8(ctx, base);
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 36);
	// addi r25,r28,36
	r25.s64 = r28.s64 + 36;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D3E90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r28
	r30.u64 = r28.u64;
	// li r20,2
	r20.s64 = 2;
loc_822D3E98:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d3fa4
	if (ctx.cr6.eq) goto loc_822D3FA4;
	// li r31,0
	r31.s64 = 0;
loc_822D3EAC:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// bl 0x822d1dc0
	ctx.lr = 0x822D3EBC;
	sub_822D1DC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822d24a8
	ctx.lr = 0x822D3EC8;
	sub_822D24A8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// add r3,r29,r31
	ctx.r3.u64 = r29.u64 + r31.u64;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// lfs f1,72(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d3be0
	ctx.lr = 0x822D3EDC;
	sub_822D3BE0(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lfs f1,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// bl 0x822d2b58
	ctx.lr = 0x822D3EEC;
	sub_822D2B58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d3f90
	if (ctx.cr0.eq) goto loc_822D3F90;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// bl 0x822d1d08
	ctx.lr = 0x822D3F04;
	sub_822D1D08(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// add r3,r29,r31
	ctx.r3.u64 = r29.u64 + r31.u64;
	// bl 0x822d1c50
	ctx.lr = 0x822D3F10;
	sub_822D1C50(ctx, base);
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// bl 0x822cfe30
	ctx.lr = 0x822D3F24;
	sub_822CFE30(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822d3f90
	if (ctx.cr0.eq) goto loc_822D3F90;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r19,0(r29)
	r19.u64 = REX_LOAD_U32(r29.u32 + 0);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r18,r11,r31
	r18.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r27,0(r18)
	r27.u64 = REX_LOAD_U32(r18.u32 + 0);
	// bl 0x822d1d08
	ctx.lr = 0x822D3F44;
	sub_822D1D08(ctx, base);
	// lwz r11,64(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 64);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// clrlwi r6,r24,16
	ctx.r6.u64 = r24.u32 & 0xFFFF;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D3F68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r10,28(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 28);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D3F90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822D3F90:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r31,r31,108
	r31.s64 = r31.s64 + 108;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822d3eac
	if (ctx.cr6.lt) goto loc_822D3EAC;
loc_822D3FA4:
	// addic. r20,r20,-1
	ctx.xer.ca = r20.u32 > 0;
	r20.s64 = r20.s64 + -1;
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x822d3e98
	if (!ctx.cr0.eq) goto loc_822D3E98;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D3FC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(__savevmx_28) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_77) {
	REX_FUNC_PROLOGUE();
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
	// li r11,-816
	ctx.r11.s64 = -816;
	// stvx128 v77,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v77.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-800
	ctx.r11.s64 = -800;
	// stvx128 v78,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v78.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-784
	ctx.r11.s64 = -784;
	// stvx128 v79,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v79.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-768
	ctx.r11.s64 = -768;
	// stvx128 v80,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v80.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-752
	ctx.r11.s64 = -752;
	// stvx128 v81,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v81.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-736
	ctx.r11.s64 = -736;
	// stvx128 v82,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v82.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__restvmx_113) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_822D98F0) {
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
	// beq cr6,0x822d9938
	if (ctx.cr6.eq) goto loc_822D9938;
	// bl 0x8220fda0
	ctx.lr = 0x822D9910;
	sub_8220FDA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8220ecf0
	ctx.lr = 0x822D991C;
	sub_8220ECF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822d9938
	if (!ctx.cr0.eq) goto loc_822D9938;
	// bl 0x822db6c0
	ctx.lr = 0x822D9928;
	sub_822DB6C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822098c8
	ctx.lr = 0x822D9930;
	sub_822098C8(ctx, base);
	// bl 0x822db650
	ctx.lr = 0x822D9934;
	sub_822DB650(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_822D9938:
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

DEFINE_REX_FUNC(sub_822DB810) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,29552
	ctx.r9.s64 = ctx.r10.s64 + 29552;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_822DB820:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x822db844
	if (ctx.cr6.eq) goto loc_822DB844;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// blt cr6,0x822db820
	if (ctx.cr6.lt) goto loc_822DB820;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822DB844:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822DC310) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x822DC318;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// rlwinm. r11,r3,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r28,r3,27
	r28.u64 = ctx.r3.u32 & 0x1F;
	// beq 0x822dc350
	if (ctx.cr0.eq) goto loc_822DC350;
	// rlwinm. r11,r5,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822dc350
	if (ctx.cr0.eq) goto loc_822DC350;
	// lis r3,8192
	ctx.r3.s64 = 536870912;
	// bl 0x822dca34
	ctx.lr = 0x822DC348;
	sub_822DCA34(ctx, base);
	// rlwinm r28,r28,0,29,27
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// b 0x822dc534
	goto loc_822DC534;
loc_822DC350:
	// rlwinm. r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822dc370
	if (ctx.cr0.eq) goto loc_822DC370;
	// rlwinm. r11,r27,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822dc370
	if (ctx.cr0.eq) goto loc_822DC370;
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// bl 0x822dca34
	ctx.lr = 0x822DC368;
	sub_822DCA34(ctx, base);
	// rlwinm r28,r28,0,30,28
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// b 0x822dc534
	goto loc_822DC534;
loc_822DC370:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822dc43c
	if (ctx.cr0.eq) goto loc_822DC43C;
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822dc43c
	if (ctx.cr0.eq) goto loc_822DC43C;
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// bl 0x822dca34
	ctx.lr = 0x822DC388;
	sub_822DCA34(ctx, base);
	// clrlwi r11,r27,30
	ctx.r11.u64 = r27.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822dc404
	if (ctx.cr6.lt) goto loc_822DC404;
	// beq cr6,0x822dc3e4
	if (ctx.cr6.eq) goto loc_822DC3E4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x822dc3c4
	if (ctx.cr6.lt) goto loc_822DC3C4;
	// bne cr6,0x822dc434
	if (!ctx.cr6.eq) goto loc_822DC434;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(r30.u32 + 0);
	// lfd f0,31912(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 31912);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822dc424
	if (!ctx.cr6.gt) goto loc_822DC424;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lfd f0,-2056(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -2056);
	// b 0x822dc430
	goto loc_822DC430;
loc_822DC3C4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(r30.u32 + 0);
	// lfd f0,31912(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 31912);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x822dc418
	if (ctx.cr6.gt) goto loc_822DC418;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lfd f0,-2056(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -2056);
	// b 0x822dc42c
	goto loc_822DC42C;
loc_822DC3E4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(r30.u32 + 0);
	// lfd f0,31912(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 31912);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lfd f0,-2056(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -2056);
	// bgt cr6,0x822dc430
	if (ctx.cr6.gt) goto loc_822DC430;
	// b 0x822dc42c
	goto loc_822DC42C;
loc_822DC404:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(r30.u32 + 0);
	// lfd f0,31912(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 31912);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822dc424
	if (!ctx.cr6.gt) goto loc_822DC424;
loc_822DC418:
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lfd f0,-2072(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -2072);
	// b 0x822dc430
	goto loc_822DC430;
loc_822DC424:
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lfd f0,-2072(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -2072);
loc_822DC42C:
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_822DC430:
	// stfd f0,0(r30)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r30.u32 + 0, ctx.f0.u64);
loc_822DC434:
	// rlwinm r28,r28,0,0,30
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x822dc534
	goto loc_822DC534;
loc_822DC43C:
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822dc534
	if (ctx.cr0.eq) goto loc_822DC534;
	// rlwinm. r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822dc534
	if (ctx.cr0.eq) goto loc_822DC534;
	// rlwinm. r11,r29,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r31,0
	r31.s64 = 0;
	// beq 0x822dc45c
	if (ctx.cr0.eq) goto loc_822DC45C;
	// li r31,1
	r31.s64 = 1;
loc_822DC45C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r30.u32 + 0);
	// lfd f31,31912(r11)
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 31912);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// beq cr6,0x822dc51c
	if (ctx.cr6.eq) goto loc_822DC51C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822da808
	ctx.lr = 0x822DC478;
	sub_822DA808(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// addi r11,r11,-1536
	ctx.r11.s64 = ctx.r11.s64 + -1536;
	// cmpwi cr6,r11,-1074
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1074, ctx.xer);
	// bge cr6,0x822dc498
	if (!ctx.cr6.lt) goto loc_822DC498;
	// fmul f0,f1,f31
	ctx.f0.f64 = ctx.f1.f64 * f31.f64;
	// li r31,1
	r31.s64 = 1;
	// b 0x822dc514
	goto loc_822DC514;
loc_822DC498:
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// li r9,1
	ctx.r9.s64 = 1;
	// blt cr6,0x822dc4a8
	if (ctx.cr6.lt) goto loc_822DC4A8;
	// li r9,0
	ctx.r9.s64 = 0;
loc_822DC4A8:
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1021
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1021, ctx.xer);
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
	// sth r10,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// bge cr6,0x822dc504
	if (!ctx.cr6.lt) goto loc_822DC504;
	// subfic r11,r11,-1021
	ctx.xer.ca = ctx.r11.u32 <= 4294966275;
	ctx.r11.u64 = static_cast<uint64_t>(-1021) - ctx.r11.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_822DC4D0:
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x822dc4e4
	if (ctx.cr0.eq) goto loc_822DC4E4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x822dc4e4
	if (!ctx.cr6.eq) goto loc_822DC4E4;
	// li r31,1
	r31.s64 = 1;
loc_822DC4E4:
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// beq 0x822dc4f4
	if (ctx.cr0.eq) goto loc_822DC4F4;
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
loc_822DC4F4:
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// bdnz 0x822dc4d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DC4D0;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_822DC504:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822dc514
	if (ctx.cr6.eq) goto loc_822DC514;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_822DC514:
	// stfd f0,0(r30)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r30.u32 + 0, ctx.f0.u64);
	// b 0x822dc520
	goto loc_822DC520;
loc_822DC51C:
	// li r31,1
	r31.s64 = 1;
loc_822DC520:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x822dc530
	if (ctx.cr6.eq) goto loc_822DC530;
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// bl 0x822dca34
	ctx.lr = 0x822DC530;
	sub_822DCA34(ctx, base);
loc_822DC530:
	// rlwinm r28,r28,0,31,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_822DC534:
	// rlwinm. r11,r29,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822dc550
	if (ctx.cr0.eq) goto loc_822DC550;
	// rlwinm. r11,r27,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822dc550
	if (ctx.cr0.eq) goto loc_822DC550;
	// lis r3,512
	ctx.r3.s64 = 33554432;
	// bl 0x822dca34
	ctx.lr = 0x822DC54C;
	sub_822DCA34(ctx, base);
	// rlwinm r28,r28,0,28,26
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
loc_822DC550:
	// cntlzw r11,r28
	ctx.r11.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822ECF18) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822ECF20;
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r10,116(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822ECF40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r9,296(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 296);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpdi cr6,r9,0
	ctx.cr6.compare<int64_t>(ctx.r9.s64, 0, ctx.xer);
	// bne cr6,0x822ecf54
	if (!ctx.cr6.eq) goto loc_822ECF54;
	// std r3,296(r31)
	REX_STORE_U64(r31.u32 + 296, ctx.r3.u64);
loc_822ECF54:
	// ld r10,296(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 296);
	// lfd f0,288(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 288);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f12,340(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 340);
	ctx.f12.f64 = double(temp.f32);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// extsw r8,r30
	ctx.r8.s64 = r30.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// li r3,0
	ctx.r3.s64 = 0;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// frsp f8,f13
	ctx.f8.f64 = double(float(ctx.f13.f64));
	// fmadds f7,f9,f12,f8
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f8.f64)));
	// fctidz f6,f7
	ctx.f6.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,288(r31)
	REX_STORE_U64(r31.u32 + 288, ctx.f6.u64);
	// std r11,296(r31)
	REX_STORE_U64(r31.u32 + 296, ctx.r11.u64);
	// ld r7,288(r31)
	ctx.r7.u64 = REX_LOAD_U64(r31.u32 + 288);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// subf r5,r6,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r6.u64;
	// stw r5,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r5.u32);
	// stw r5,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822EEF28) {
	REX_FUNC_PROLOGUE();
	// stw r4,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EF130) {
	REX_FUNC_PROLOGUE();
	// stw r4,512(r3)
	REX_STORE_U32(ctx.r3.u32 + 512, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F0388) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f0410
	if (ctx.cr6.eq) goto loc_822F0410;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822f0410
	if (ctx.cr6.eq) goto loc_822F0410;
	// lwz r11,528(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f0410
	if (ctx.cr6.eq) goto loc_822F0410;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822F03B8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822f03b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F03B8;
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,16(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// stw r7,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r5,20(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// stw r5,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r5.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,68(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 68);
	// stb r7,16(r4)
	REX_STORE_U8(ctx.r4.u32 + 16, ctx.r7.u8);
	// lwz r5,4(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// blr 
	return;
loc_822F0410:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F2B78) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x822f2b98
	if (ctx.cr6.eq) goto loc_822F2B98;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r4,592(r11)
	REX_STORE_U32(ctx.r11.u32 + 592, ctx.r4.u32);
	// stw r10,552(r11)
	REX_STORE_U32(ctx.r11.u32 + 552, ctx.r10.u32);
	// blr 
	return;
loc_822F2B98:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,552(r11)
	REX_STORE_U32(ctx.r11.u32 + 552, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F43A8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,448(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F44D0) {
	REX_FUNC_PROLOGUE();
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F4618) {
	REX_FUNC_PROLOGUE();
	// lwz r10,64(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r10,r10,60
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(60));
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822F48C0) {
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
	// bl 0x822eeca0
	ctx.lr = 0x822F48D8;
	sub_822EECA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,-26048
	ctx.r9.s64 = ctx.r10.s64 + -26048;
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

DEFINE_REX_FUNC(sub_822F5FA8) {
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
	// lwz r10,148(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F5FC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_822F6168) {
	REX_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,180
	ctx.r3.s64 = ctx.r3.s64 + 180;
	// b 0x824d445c
	__imp__KeSetEvent(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822F6290) {
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
	ctx.lr = 0x822F62BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,224(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 224);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// or r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 | r30.u64;
	// stw r7,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r7.u32);
	// lwz r6,20(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822F62DC;
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

DEFINE_REX_FUNC(sub_822F9490) {
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
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// bl 0x823cd118
	ctx.lr = 0x822F94B4;
	sub_823CD118(ctx, base);
	// addi r10,r3,0
	ctx.r10.s64 = ctx.r3.s64 + 0;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// ori r9,r11,14
	ctx.r9.u64 = ctx.r11.u64 | 14;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r6,r9
	ctx.r3.u64 = ctx.r6.u64 & ctx.r9.u64;
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

DEFINE_REX_FUNC(sub_822FAC78) {
	REX_FUNC_PROLOGUE();
	// lwz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822facb0
	if (!ctx.cr6.eq) goto loc_822FACB0;
	// lis r10,12
	ctx.r10.s64 = 786432;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822faca4
	if (ctx.cr6.eq) goto loc_822FACA4;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,178
	ctx.r3.u64 = ctx.r3.u64 | 178;
	// blr 
	return;
loc_822FACA4:
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822faa70
	sub_822FAA70(ctx, base);
	return;
loc_822FACB0:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FB6C8) {
	REX_FUNC_PROLOGUE();
	// b 0x822eece8
	sub_822EECE8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822FB6F8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FB760) {
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
	// bl 0x822eeca0
	ctx.lr = 0x822FB778;
	sub_822EECA0(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x822FB788;
	sub_822D5870(ctx, base);
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

DEFINE_REX_FUNC(sub_822FF460) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bgt cr6,0x822ff494
	if (ctx.cr6.gt) goto loc_822FF494;
	// lwz r10,212(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822ff48c
	if (ctx.cr6.eq) goto loc_822FF48C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_822FF48C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822FF494:
	// lwz r10,604(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 604);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822ff4b0
	if (ctx.cr6.eq) goto loc_822FF4B0;
	// addi r11,r11,17
	ctx.r11.s64 = ctx.r11.s64 + 17;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_822FF4B0:
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82300DE8) {
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
	// bl 0x822d4e5c
	ctx.lr = 0x82300DF0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// lwz r28,360(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 360);
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// lhz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// mr r18,r5
	r18.u64 = ctx.r5.u64;
	// twllei r28,0
	if (r28.s32 == 0 || r28.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 88);
	// divwu r9,r6,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r6.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r8,r9,r28
	ctx.r8.u64 = uint32_t(r28.u32 ? ctx.r9.u32 / r28.u32 : 0);
	// rlwinm r7,r8,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82300e3c
	if (!ctx.cr6.lt) goto loc_82300E3C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eac
	return;
loc_82300E3C:
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x82300fa0
	if (!ctx.cr6.gt) goto loc_82300FA0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r22,0
	r22.s64 = 0;
	// mullw r23,r10,r28
	r23.s64 = int64_t(ctx.r10.s32) * int64_t(r28.s32);
	// mullw r24,r11,r28
	r24.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
loc_82300E60:
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,524(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 524);
	// mullw r11,r24,r4
	ctx.r11.s64 = int64_t(r24.s32) * int64_t(ctx.r4.s32);
	// lhz r5,110(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 110);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r27,r11,r21
	r27.u64 = ctx.r11.u64 + r21.u64;
	// mullw r11,r23,r4
	ctx.r11.s64 = int64_t(r23.s32) * int64_t(ctx.r4.s32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// add r29,r11,r21
	r29.u64 = ctx.r11.u64 + r21.u64;
	// bctrl 
	ctx.lr = 0x82300E8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,88(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 88);
	// add r8,r25,r28
	ctx.r8.u64 = r25.u64 + r28.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mullw r11,r8,r9
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r26,r11,r21
	r26.u64 = ctx.r11.u64 + r21.u64;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(r29.u32, r26.u32, ctx.xer);
	// ble cr6,0x82300f30
	if (!ctx.cr6.gt) goto loc_82300F30;
loc_82300EAC:
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 520);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82300EC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,524(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 524);
	// mr r17,r30
	r17.u64 = r30.u64;
	// mullw r9,r4,r28
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(r28.s32);
	// lhz r5,110(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 110);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// subf r27,r9,r27
	r27.u64 = r27.u64 - ctx.r9.u64;
	// subf r29,r9,r29
	r29.u64 = r29.u64 - ctx.r9.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bctrl 
	ctx.lr = 0x82300EF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,520(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 520);
	// srawi r10,r17,1
	ctx.xer.ca = (r17.s32 < 0) & ((r17.u32 & 0x1) != 0);
	ctx.r10.s64 = r17.s32 >> 1;
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82300F1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,88(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 88);
	// mullw r6,r28,r7
	ctx.r6.s64 = int64_t(r28.s32) * int64_t(ctx.r7.s32);
	// subf r29,r6,r29
	r29.u64 = r29.u64 - ctx.r6.u64;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(r29.u32, r26.u32, ctx.xer);
	// bgt cr6,0x82300eac
	if (ctx.cr6.gt) goto loc_82300EAC;
loc_82300F30:
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 520);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82300F4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,344(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 344);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,88(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 88);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r8,520(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 520);
	// mullw r7,r28,r9
	ctx.r7.s64 = int64_t(r28.s32) * int64_t(ctx.r9.s32);
	// lwzx r4,r22,r10
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + ctx.r10.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// srawi r10,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r10.s64 = r30.s32 >> 1;
	// subf r4,r7,r29
	ctx.r4.u64 = r29.u64 - ctx.r7.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82300F80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,344(r19)
	ctx.r3.u64 = REX_LOAD_U32(r19.u32 + 344);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// cmpw cr6,r25,r28
	ctx.cr6.compare<int32_t>(r25.s32, r28.s32, ctx.xer);
	// stwx r20,r22,r3
	REX_STORE_U32(r22.u32 + ctx.r3.u32, r20.u32);
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// blt cr6,0x82300e60
	if (ctx.cr6.lt) goto loc_82300E60;
loc_82300FA0:
	// lhz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U16(r18.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,1,16,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFE;
	// sth r10,0(r18)
	REX_STORE_U16(r18.u32 + 0, ctx.r10.u16);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eac
	return;
}

DEFINE_REX_FUNC(sub_8230A608) {
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
	ctx.lr = 0x8230A610;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lwz r29,28(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r27,r4,-24
	r27.s64 = ctx.r4.s64 + -24;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r27,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// bctrl 
	ctx.lr = 0x8230A650;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230a854
	if (ctx.cr6.lt) goto loc_8230A854;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lhz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 64);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x8230a84c
	if (ctx.cr6.gt) goto loc_8230A84C;
	// lwz r10,120(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// addi r6,r11,120
	ctx.r6.s64 = ctx.r11.s64 + 120;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8230a6b4
	if (!ctx.cr6.eq) goto loc_8230A6B4;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,224(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f9490
	ctx.lr = 0x8230A690;
	sub_822F9490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230a854
	if (ctx.cr6.lt) goto loc_8230A854;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r10,120(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// stw r30,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// stw r30,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r30.u32);
	// stw r30,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r30.u32);
	// stw r30,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, r30.u32);
loc_8230A6B4:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// addi r28,r11,12
	r28.s64 = ctx.r11.s64 + 12;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8230a84c
	if (!ctx.cr6.eq) goto loc_8230A84C;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r3,224(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 224);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f9490
	ctx.lr = 0x8230A6E0;
	sub_822F9490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230a854
	if (ctx.cr6.lt) goto loc_8230A854;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(r27.u32, 4, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bge cr6,0x8230a714
	if (!ctx.cr6.lt) goto loc_8230A714;
	// lis r31,-32688
	r31.s64 = -2142240768;
	// ori r31,r31,12
	r31.u64 = r31.u64 | 12;
	// b 0x8230a858
	goto loc_8230A858;
loc_8230A714:
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823078f0
	ctx.lr = 0x8230A72C;
	sub_823078F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230a854
	if (ctx.cr6.lt) goto loc_8230A854;
	// cmplwi cr6,r27,8
	ctx.cr6.compare<uint32_t>(r27.u32, 8, ctx.xer);
	// blt cr6,0x8230a84c
	if (ctx.cr6.lt) goto loc_8230A84C;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823078f0
	ctx.lr = 0x8230A758;
	sub_823078F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230a854
	if (ctx.cr6.lt) goto loc_8230A854;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8230a7f0
	if (ctx.cr6.eq) goto loc_8230A7F0;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// lwz r3,224(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f9490
	ctx.lr = 0x8230A788;
	sub_822F9490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230a854
	if (ctx.cr6.lt) goto loc_8230A854;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822d5870
	ctx.lr = 0x8230A7A8;
	sub_822D5870(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r30,r5,8
	r30.s64 = ctx.r5.s64 + 8;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// ble cr6,0x8230a7c8
	if (!ctx.cr6.gt) goto loc_8230A7C8;
	// lis r31,-32688
	r31.s64 = -2142240768;
	// ori r31,r31,12
	r31.u64 = r31.u64 | 12;
	// b 0x8230a858
	goto loc_8230A858;
loc_8230A7C8:
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82307e08
	ctx.lr = 0x8230A7E0;
	sub_82307E08(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230a854
	if (ctx.cr6.lt) goto loc_8230A854;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_8230A7F0:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lhz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 64);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sth r8,64(r11)
	REX_STORE_U16(ctx.r11.u32 + 64, ctx.r8.u16);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r5,r6,r27
	ctx.r5.u64 = r27.u64 - ctx.r6.u64;
	// subf. r30,r9,r5
	r30.u64 = ctx.r5.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8230a880
	if (ctx.cr0.eq) goto loc_8230A880;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230A828;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230a854
	if (ctx.cr6.lt) goto loc_8230A854;
	// ld r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U64(r29.u32 + 8);
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r29)
	REX_STORE_U64(r29.u32 + 8, ctx.r11.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed0
	return;
loc_8230A84C:
	// lis r31,-32688
	r31.s64 = -2142240768;
	// ori r31,r31,12
	r31.u64 = r31.u64 | 12;
loc_8230A854:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8230A858:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230a880
	if (ctx.cr6.eq) goto loc_8230A880;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lwz r3,224(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f94e8
	ctx.lr = 0x8230A870;
	sub_822F94E8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 224);
	// bl 0x822f94e8
	ctx.lr = 0x8230A880;
	sub_822F94E8(ctx, base);
loc_8230A880:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82311DA8) {
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
	// beq cr6,0x82311df4
	if (ctx.cr6.eq) goto loc_82311DF4;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82311df4
	if (ctx.cr6.eq) goto loc_82311DF4;
loc_82311DDC:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82311e0c
	if (ctx.cr6.eq) goto loc_82311E0C;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x82311ddc
	if (!ctx.cr6.eq) goto loc_82311DDC;
loc_82311DF4:
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
loc_82311E0C:
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82311e24
	if (!ctx.cr6.eq) goto loc_82311E24;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82311E24:
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82311e48
	if (!ctx.cr6.eq) goto loc_82311E48;
	// lwz r11,36(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82311e7c
	if (ctx.cr6.eq) goto loc_82311E7C;
	// stw r8,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// b 0x82311e7c
	goto loc_82311E7C;
loc_82311E48:
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82311e64
	if (ctx.cr6.eq) goto loc_82311E64;
	// lwz r7,36(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r7,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r7.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82311E64:
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82311e7c
	if (ctx.cr6.eq) goto loc_82311E7C;
	// lwz r7,40(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r7,40(r9)
	REX_STORE_U32(ctx.r9.u32 + 40, ctx.r7.u32);
loc_82311E7C:
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bne 0x82311e94
	if (!ctx.cr0.eq) goto loc_82311E94;
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
loc_82311E94:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x822f94e8
	ctx.lr = 0x82311EA4;
	sub_822F94E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823141A8) {
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
	ctx.lr = 0x823141B0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r4,1892(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1892);
	// bl 0x822f9568
	ctx.lr = 0x823141CC;
	sub_822F9568(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231429c
	if (ctx.cr6.lt) goto loc_8231429C;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82314294
	if (ctx.cr6.eq) goto loc_82314294;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r4,1900(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1900);
	// bl 0x822f9320
	ctx.lr = 0x823141EC;
	sub_822F9320(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82314294
	if (!ctx.cr6.eq) goto loc_82314294;
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// lis r9,-32207
	ctx.r9.s64 = -2110717952;
	// addi r11,r11,12608
	ctx.r11.s64 = ctx.r11.s64 + 12608;
	// addi r10,r10,15176
	ctx.r10.s64 = ctx.r10.s64 + 15176;
	// addi r9,r9,15440
	ctx.r9.s64 = ctx.r9.s64 + 15440;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lis r8,-32207
	ctx.r8.s64 = -2110717952;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lis r7,-32207
	ctx.r7.s64 = -2110717952;
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// lis r6,-32207
	ctx.r6.s64 = -2110717952;
	// lis r5,-32207
	ctx.r5.s64 = -2110717952;
	// lis r4,-32207
	ctx.r4.s64 = -2110717952;
	// lis r29,-32207
	r29.s64 = -2110717952;
	// lis r28,-32207
	r28.s64 = -2110717952;
	// lis r27,-32207
	r27.s64 = -2110717952;
	// addi r8,r8,16192
	ctx.r8.s64 = ctx.r8.s64 + 16192;
	// addi r7,r7,16200
	ctx.r7.s64 = ctx.r7.s64 + 16200;
	// addi r6,r6,16520
	ctx.r6.s64 = ctx.r6.s64 + 16520;
	// stw r8,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// addi r5,r5,15448
	ctx.r5.s64 = ctx.r5.s64 + 15448;
	// stw r7,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// addi r4,r4,15616
	ctx.r4.s64 = ctx.r4.s64 + 15616;
	// stw r6,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r6.u32);
	// addi r11,r29,12920
	ctx.r11.s64 = r29.s64 + 12920;
	// stw r5,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r5.u32);
	// addi r10,r28,15976
	ctx.r10.s64 = r28.s64 + 15976;
	// stw r4,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r4.u32);
	// addi r9,r27,15304
	ctx.r9.s64 = r27.s64 + 15304;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// stw r9,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r9.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x8231429c
	if (!ctx.cr6.eq) goto loc_8231429C;
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
loc_82314294:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
loc_8231429C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82319A70) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82319A78;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,40(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82319b88
	if (!ctx.cr6.lt) goto loc_82319B88;
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82319aec
	if (ctx.cr6.eq) goto loc_82319AEC;
	// subfic r11,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r9.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82319ab0
	if (ctx.cr6.lt) goto loc_82319AB0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82319AB0:
	// lwz r8,44(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 44);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 36);
	// srw r5,r8,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// slw r10,r7,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// slw r4,r6,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 | ctx.r4.u64;
	// and r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 & ctx.r8.u64;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// stw r8,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r8.u32);
	// stw r7,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r7.u32);
loc_82319AEC:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x82319b60
	if (ctx.cr6.gt) goto loc_82319B60;
loc_82319AF8:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82319b60
	if (!ctx.cr6.gt) goto loc_82319B60;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,84(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r9,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r7,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82319B2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// stw r4,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r4.u32);
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// ble cr6,0x82319af8
	if (!ctx.cr6.gt) goto loc_82319AF8;
loc_82319B60:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bge cr6,0x82319b88
	if (!ctx.cr6.lt) goto loc_82319B88;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823195f0
	ctx.lr = 0x82319B7C;
	sub_823195F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82319b94
	if (ctx.cr6.lt) goto loc_82319B94;
loc_82319B88:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// subf r10,r30,r11
	ctx.r10.u64 = ctx.r11.u64 - r30.u64;
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
loc_82319B94:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82323F70) {
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
	ctx.lr = 0x82323F78;
	// stfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, f29.u64);
	// stfd f30,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, f30.u64);
	// stfd f31,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,0(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// lwz r11,436(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 436);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// mr r28,r27
	r28.u64 = r27.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// lhz r26,34(r24)
	r26.u64 = REX_LOAD_U16(r24.u32 + 34);
	// beq cr6,0x823241d8
	if (ctx.cr6.eq) goto loc_823241D8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r21,1
	r21.s64 = 1;
	// li r25,4
	r25.s64 = 4;
	// lfs f29,16368(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16368);
	f29.f64 = double(temp.f32);
	// li r22,3
	r22.s64 = 3;
	// lfs f30,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	f30.f64 = double(temp.f32);
	// li r23,-16
	r23.s64 = -16;
	// lfs f31,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f31.f64 = double(temp.f32);
loc_82323FD4:
	// lwz r11,436(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 436);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x823241cc
	if (ctx.cr6.gt) goto loc_823241CC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8232406c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8232406C;
	// bdzf 4*cr6+eq,0x823240b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823240B4;
	// bne cr6,0x82324140
	if (!ctx.cr6.eq) goto loc_82324140;
	// lwz r11,440(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 440);
	// lwz r3,464(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 464);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,460(r31)
	REX_STORE_U32(r31.u32 + 460, ctx.r11.u32);
	// beq cr6,0x82324020
	if (ctx.cr6.eq) goto loc_82324020;
	// lwz r4,448(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 448);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82324020
	if (ctx.cr6.eq) goto loc_82324020;
	// mullw r11,r26,r26
	ctx.r11.s64 = int64_t(r26.s32) * int64_t(r26.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d4fa0
	ctx.lr = 0x82324020;
	sub_822D4FA0(ctx, base);
loc_82324020:
	// lwz r3,448(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 448);
	// stw r27,440(r31)
	REX_STORE_U32(r31.u32 + 440, r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r27,444(r31)
	REX_STORE_U32(r31.u32 + 444, r27.u32);
	// beq cr6,0x82324044
	if (ctx.cr6.eq) goto loc_82324044;
	// mullw r11,r26,r26
	ctx.r11.s64 = int64_t(r26.s32) * int64_t(r26.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82324044;
	sub_822D5870(ctx, base);
loc_82324044:
	// lwz r11,60(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x823241c8
	if (!ctx.cr6.gt) goto loc_823241C8;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(r26.s32, 2, ctx.xer);
	// blt cr6,0x823241c8
	if (ctx.cr6.lt) goto loc_823241C8;
	// lwz r11,176(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 176);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823241c8
	if (ctx.cr6.eq) goto loc_823241C8;
	// stw r21,436(r31)
	REX_STORE_U32(r31.u32 + 436, r21.u32);
	// b 0x823241cc
	goto loc_823241CC;
loc_8232406C:
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x82324080;
	sub_82319780(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823241d8
	if (ctx.cr6.lt) goto loc_823241D8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// stw r11,440(r31)
	REX_STORE_U32(r31.u32 + 440, ctx.r11.u32);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// stw r7,436(r31)
	REX_STORE_U32(r31.u32 + 436, ctx.r7.u32);
	// b 0x823241cc
	goto loc_823241CC;
loc_823240B4:
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x823240C8;
	sub_82319780(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823241d8
	if (ctx.cr6.lt) goto loc_823241D8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,444(r31)
	REX_STORE_U32(r31.u32 + 444, ctx.r11.u32);
	// beq 0x823240f4
	if (ctx.cr0.eq) goto loc_823240F4;
	// stw r27,452(r31)
	REX_STORE_U32(r31.u32 + 452, r27.u32);
	// stw r22,436(r31)
	REX_STORE_U32(r31.u32 + 436, r22.u32);
	// b 0x823241cc
	goto loc_823241CC;
loc_823240F4:
	// lhz r11,34(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 34);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x82324138
	if (!ctx.cr6.eq) goto loc_82324138;
	// lwz r11,104(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 104);
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// bne cr6,0x82324138
	if (!ctx.cr6.eq) goto loc_82324138;
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823241c8
	if (ctx.cr6.eq) goto loc_823241C8;
	// stfs f31,140(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 140, temp.u32);
	// stfs f31,112(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// stfs f31,84(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stfs f31,28(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f31,0(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f30,52(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f30,48(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// b 0x823241c8
	goto loc_823241C8;
loc_82324138:
	// stw r27,440(r31)
	REX_STORE_U32(r31.u32 + 440, r27.u32);
	// b 0x823241c8
	goto loc_823241C8;
loc_82324140:
	// lwz r11,452(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 452);
	// mullw r30,r26,r26
	r30.s64 = int64_t(r26.s32) * int64_t(r26.s32);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// bge cr6,0x823241c8
	if (!ctx.cr6.lt) goto loc_823241C8;
	// addi r29,r31,224
	r29.s64 = r31.s64 + 224;
loc_82324154:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82319780
	ctx.lr = 0x82324164;
	sub_82319780(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823241d8
	if (ctx.cr6.lt) goto loc_823241D8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82324188
	if (ctx.cr6.eq) goto loc_82324188;
	// or r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 | r23.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82324188:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r10,452(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 452);
	// lwz r9,448(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 448);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 * f29.f64));
	// stfsx f11,r8,r9
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, temp.u32);
	// lwz r11,452(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 452);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,452(r31)
	REX_STORE_U32(r31.u32 + 452, ctx.r7.u32);
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r30.s32, ctx.xer);
	// blt cr6,0x82324154
	if (ctx.cr6.lt) goto loc_82324154;
loc_823241C8:
	// stw r25,436(r31)
	REX_STORE_U32(r31.u32 + 436, r25.u32);
loc_823241CC:
	// lwz r11,436(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 436);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82323fd4
	if (!ctx.cr6.eq) goto loc_82323FD4;
loc_823241D8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

DEFINE_REX_FUNC(sub_8232ED78) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8232ed84
	if (!ctx.cr6.eq) goto loc_8232ED84;
	// blr 
	return;
loc_8232ED84:
	// lwz r11,15364(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15364);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8232eda0
	if (!ctx.cr6.eq) goto loc_8232EDA0;
	// lwz r11,15432(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15432);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8232EDA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82331190) {
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
	// lwz r11,21888(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21888);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823312a0
	if (!ctx.cr6.eq) goto loc_823312A0;
	// lwz r3,3776(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 3776);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823311d8
	if (ctx.cr6.eq) goto loc_823311D8;
	// lwz r4,3788(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3788);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823311d8
	if (ctx.cr6.eq) goto loc_823311D8;
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x822091c8
	ctx.lr = 0x823311D8;
	sub_822091C8(ctx, base);
loc_823311D8:
	// lwz r3,3780(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3780);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82331200
	if (ctx.cr6.eq) goto loc_82331200;
	// lwz r4,3792(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3792);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82331200
	if (ctx.cr6.eq) goto loc_82331200;
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x822091c8
	ctx.lr = 0x82331200;
	sub_822091C8(ctx, base);
loc_82331200:
	// lwz r3,3784(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3784);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82331228
	if (ctx.cr6.eq) goto loc_82331228;
	// lwz r4,3796(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3796);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82331228
	if (ctx.cr6.eq) goto loc_82331228;
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x822091c8
	ctx.lr = 0x82331228;
	sub_822091C8(ctx, base);
loc_82331228:
	// lwz r3,3832(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3832);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82331250
	if (ctx.cr6.eq) goto loc_82331250;
	// lwz r4,3788(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3788);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82331250
	if (ctx.cr6.eq) goto loc_82331250;
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x822091c8
	ctx.lr = 0x82331250;
	sub_822091C8(ctx, base);
loc_82331250:
	// lwz r3,3836(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3836);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82331278
	if (ctx.cr6.eq) goto loc_82331278;
	// lwz r4,3792(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3792);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82331278
	if (ctx.cr6.eq) goto loc_82331278;
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x822091c8
	ctx.lr = 0x82331278;
	sub_822091C8(ctx, base);
loc_82331278:
	// lwz r3,3840(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3840);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823312a0
	if (ctx.cr6.eq) goto loc_823312A0;
	// lwz r4,3796(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3796);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823312a0
	if (ctx.cr6.eq) goto loc_823312A0;
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x822091c8
	ctx.lr = 0x823312A0;
	sub_822091C8(ctx, base);
loc_823312A0:
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

DEFINE_REX_FUNC(sub_8233A148) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8233A150;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// li r29,1
	r29.s64 = 1;
	// li r11,-1
	ctx.r11.s64 = -1;
	// std r30,3632(r3)
	REX_STORE_U64(ctx.r3.u32 + 3632, r30.u64);
	// std r30,3640(r3)
	REX_STORE_U64(ctx.r3.u32 + 3640, r30.u64);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// std r30,3656(r3)
	REX_STORE_U64(ctx.r3.u32 + 3656, r30.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r30,3664(r3)
	REX_STORE_U64(ctx.r3.u32 + 3664, r30.u64);
	// li r4,114
	ctx.r4.s64 = 114;
	// stw r30,3688(r3)
	REX_STORE_U32(ctx.r3.u32 + 3688, r30.u32);
	// li r3,14
	ctx.r3.s64 = 14;
	// stw r30,456(r31)
	REX_STORE_U32(r31.u32 + 456, r30.u32);
	// stw r30,400(r31)
	REX_STORE_U32(r31.u32 + 400, r30.u32);
	// stw r30,396(r31)
	REX_STORE_U32(r31.u32 + 396, r30.u32);
	// stw r30,404(r31)
	REX_STORE_U32(r31.u32 + 404, r30.u32);
	// stw r30,3944(r31)
	REX_STORE_U32(r31.u32 + 3944, r30.u32);
	// stw r30,3948(r31)
	REX_STORE_U32(r31.u32 + 3948, r30.u32);
	// stw r30,3952(r31)
	REX_STORE_U32(r31.u32 + 3952, r30.u32);
	// stw r30,440(r31)
	REX_STORE_U32(r31.u32 + 440, r30.u32);
	// stw r30,436(r31)
	REX_STORE_U32(r31.u32 + 436, r30.u32);
	// stw r30,444(r31)
	REX_STORE_U32(r31.u32 + 444, r30.u32);
	// stw r30,3940(r31)
	REX_STORE_U32(r31.u32 + 3940, r30.u32);
	// stw r30,4004(r31)
	REX_STORE_U32(r31.u32 + 4004, r30.u32);
	// stw r30,448(r31)
	REX_STORE_U32(r31.u32 + 448, r30.u32);
	// stw r30,3956(r31)
	REX_STORE_U32(r31.u32 + 3956, r30.u32);
	// stw r30,15572(r31)
	REX_STORE_U32(r31.u32 + 15572, r30.u32);
	// stw r30,15576(r31)
	REX_STORE_U32(r31.u32 + 15576, r30.u32);
	// stw r30,3720(r31)
	REX_STORE_U32(r31.u32 + 3720, r30.u32);
	// stw r30,3724(r31)
	REX_STORE_U32(r31.u32 + 3724, r30.u32);
	// stw r30,3728(r31)
	REX_STORE_U32(r31.u32 + 3728, r30.u32);
	// stw r29,3732(r31)
	REX_STORE_U32(r31.u32 + 3732, r29.u32);
	// stw r30,3736(r31)
	REX_STORE_U32(r31.u32 + 3736, r30.u32);
	// stw r30,268(r31)
	REX_STORE_U32(r31.u32 + 268, r30.u32);
	// stw r30,15832(r31)
	REX_STORE_U32(r31.u32 + 15832, r30.u32);
	// stw r30,1896(r31)
	REX_STORE_U32(r31.u32 + 1896, r30.u32);
	// stw r30,1900(r31)
	REX_STORE_U32(r31.u32 + 1900, r30.u32);
	// stw r30,1904(r31)
	REX_STORE_U32(r31.u32 + 1904, r30.u32);
	// stw r30,1908(r31)
	REX_STORE_U32(r31.u32 + 1908, r30.u32);
	// stw r30,1912(r31)
	REX_STORE_U32(r31.u32 + 1912, r30.u32);
	// stw r30,1916(r31)
	REX_STORE_U32(r31.u32 + 1916, r30.u32);
	// stw r30,272(r31)
	REX_STORE_U32(r31.u32 + 272, r30.u32);
	// stw r30,276(r31)
	REX_STORE_U32(r31.u32 + 276, r30.u32);
	// stw r30,15612(r31)
	REX_STORE_U32(r31.u32 + 15612, r30.u32);
	// stw r30,15580(r31)
	REX_STORE_U32(r31.u32 + 15580, r30.u32);
	// stw r11,3700(r31)
	REX_STORE_U32(r31.u32 + 3700, ctx.r11.u32);
	// stw r30,2964(r31)
	REX_STORE_U32(r31.u32 + 2964, r30.u32);
	// stw r30,2968(r31)
	REX_STORE_U32(r31.u32 + 2968, r30.u32);
	// stw r30,2972(r31)
	REX_STORE_U32(r31.u32 + 2972, r30.u32);
	// std r30,2976(r31)
	REX_STORE_U64(r31.u32 + 2976, r30.u64);
	// stw r30,2984(r31)
	REX_STORE_U32(r31.u32 + 2984, r30.u32);
	// stw r30,1796(r31)
	REX_STORE_U32(r31.u32 + 1796, r30.u32);
	// stw r30,15584(r31)
	REX_STORE_U32(r31.u32 + 15584, r30.u32);
	// stw r30,15588(r31)
	REX_STORE_U32(r31.u32 + 15588, r30.u32);
	// stw r30,15592(r31)
	REX_STORE_U32(r31.u32 + 15592, r30.u32);
	// stw r10,15596(r31)
	REX_STORE_U32(r31.u32 + 15596, ctx.r10.u32);
	// stw r29,15600(r31)
	REX_STORE_U32(r31.u32 + 15600, r29.u32);
	// stw r30,3380(r31)
	REX_STORE_U32(r31.u32 + 3380, r30.u32);
	// stw r30,3384(r31)
	REX_STORE_U32(r31.u32 + 3384, r30.u32);
	// stw r30,22244(r31)
	REX_STORE_U32(r31.u32 + 22244, r30.u32);
	// bl 0x822034d8
	ctx.lr = 0x8233A24C;
	sub_822034D8(ctx, base);
	// stw r3,22244(r31)
	REX_STORE_U32(r31.u32 + 22244, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233a268
	if (ctx.cr6.eq) goto loc_8233A268;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8233a268
	if (ctx.cr6.eq) goto loc_8233A268;
	// stw r29,22244(r31)
	REX_STORE_U32(r31.u32 + 22244, r29.u32);
	// b 0x8233a26c
	goto loc_8233A26C;
loc_8233A268:
	// stw r30,22244(r31)
	REX_STORE_U32(r31.u32 + 22244, r30.u32);
loc_8233A26C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r30,15568(r31)
	REX_STORE_U32(r31.u32 + 15568, r30.u32);
	// stw r30,3388(r31)
	REX_STORE_U32(r31.u32 + 3388, r30.u32);
	// stw r11,22260(r31)
	REX_STORE_U32(r31.u32 + 22260, ctx.r11.u32);
	// stw r30,22032(r31)
	REX_STORE_U32(r31.u32 + 22032, r30.u32);
	// stw r30,22036(r31)
	REX_STORE_U32(r31.u32 + 22036, r30.u32);
	// stw r30,22040(r31)
	REX_STORE_U32(r31.u32 + 22040, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82340700) {
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
	ctx.lr = 0x82340708;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r30,5
	r30.s64 = 5;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x82340784
	if (!ctx.cr6.lt) goto loc_82340784;
loc_8234072C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82340784
	if (ctx.cr6.eq) goto loc_82340784;
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
	// bge 0x82340774
	if (!ctx.cr0.lt) goto loc_82340774;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82340774;
	sub_823380C8(ctx, base);
loc_82340774:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234072c
	if (ctx.cr6.gt) goto loc_8234072C;
loc_82340784:
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
	// bge 0x823407bc
	if (!ctx.cr0.lt) goto loc_823407BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823407BC;
	sub_823380C8(ctx, base);
loc_823407BC:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// stw r28,3712(r27)
	REX_STORE_U32(r27.u32 + 3712, r28.u32);
	// li r30,11
	r30.s64 = 11;
	// li r29,0
	r29.s64 = 0;
	// stw r28,-30184(r11)
	REX_STORE_U32(ctx.r11.u32 + -30184, r28.u32);
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bge cr6,0x8234083c
	if (!ctx.cr6.lt) goto loc_8234083C;
loc_823407E4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234083c
	if (ctx.cr6.eq) goto loc_8234083C;
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
	// bge 0x8234082c
	if (!ctx.cr0.lt) goto loc_8234082C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234082C;
	sub_823380C8(ctx, base);
loc_8234082C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823407e4
	if (ctx.cr6.gt) goto loc_823407E4;
loc_8234083C:
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
	// bge 0x82340874
	if (!ctx.cr0.lt) goto loc_82340874;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82340874;
	sub_823380C8(ctx, base);
loc_82340874:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// stw r28,3716(r27)
	REX_STORE_U32(r27.u32 + 3716, r28.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r30,1
	r30.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// stw r28,-30188(r11)
	REX_STORE_U32(ctx.r11.u32 + -30188, r28.u32);
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// stw r10,3956(r27)
	REX_STORE_U32(r27.u32 + 3956, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x823408fc
	if (!ctx.cr6.lt) goto loc_823408FC;
loc_823408A4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823408fc
	if (ctx.cr6.eq) goto loc_823408FC;
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
	// bge 0x823408ec
	if (!ctx.cr0.lt) goto loc_823408EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823408EC;
	sub_823380C8(ctx, base);
loc_823408EC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823408a4
	if (ctx.cr6.gt) goto loc_823408A4;
loc_823408FC:
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
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x82340934
	if (!ctx.cr0.lt) goto loc_82340934;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82340934;
	sub_823380C8(ctx, base);
loc_82340934:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,1
	r30.s64 = 1;
	// stw r29,3944(r27)
	REX_STORE_U32(r27.u32 + 3944, r29.u32);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x823409ac
	if (!ctx.cr6.lt) goto loc_823409AC;
loc_82340954:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823409ac
	if (ctx.cr6.eq) goto loc_823409AC;
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
	// bge 0x8234099c
	if (!ctx.cr0.lt) goto loc_8234099C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234099C;
	sub_823380C8(ctx, base);
loc_8234099C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82340954
	if (ctx.cr6.gt) goto loc_82340954;
loc_823409AC:
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
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x823409e4
	if (!ctx.cr0.lt) goto loc_823409E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823409E4;
	sub_823380C8(ctx, base);
loc_823409E4:
	// stw r29,3948(r27)
	REX_STORE_U32(r27.u32 + 3948, r29.u32);
	// li r30,1
	r30.s64 = 1;
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
	// bge cr6,0x82340a5c
	if (!ctx.cr6.lt) goto loc_82340A5C;
loc_82340A04:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82340a5c
	if (ctx.cr6.eq) goto loc_82340A5C;
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
	// bge 0x82340a4c
	if (!ctx.cr0.lt) goto loc_82340A4C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82340A4C;
	sub_823380C8(ctx, base);
loc_82340A4C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82340a04
	if (ctx.cr6.gt) goto loc_82340A04;
loc_82340A5C:
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
	// bge 0x82340a94
	if (!ctx.cr0.lt) goto loc_82340A94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82340A94;
	sub_823380C8(ctx, base);
loc_82340A94:
	// stw r30,440(r27)
	REX_STORE_U32(r27.u32 + 440, r30.u32);
	// li r29,0
	r29.s64 = 0;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,1
	r30.s64 = 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82340b0c
	if (!ctx.cr6.lt) goto loc_82340B0C;
loc_82340AB4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82340b0c
	if (ctx.cr6.eq) goto loc_82340B0C;
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
	// bge 0x82340afc
	if (!ctx.cr0.lt) goto loc_82340AFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82340AFC;
	sub_823380C8(ctx, base);
loc_82340AFC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82340ab4
	if (ctx.cr6.gt) goto loc_82340AB4;
loc_82340B0C:
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
	// bge 0x82340b44
	if (!ctx.cr0.lt) goto loc_82340B44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82340B44;
	sub_823380C8(ctx, base);
loc_82340B44:
	// stw r30,3940(r27)
	REX_STORE_U32(r27.u32 + 3940, r30.u32);
	// li r29,0
	r29.s64 = 0;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,1
	r30.s64 = 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82340bbc
	if (!ctx.cr6.lt) goto loc_82340BBC;
loc_82340B64:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82340bbc
	if (ctx.cr6.eq) goto loc_82340BBC;
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
	// bge 0x82340bac
	if (!ctx.cr0.lt) goto loc_82340BAC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82340BAC;
	sub_823380C8(ctx, base);
loc_82340BAC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82340b64
	if (ctx.cr6.gt) goto loc_82340B64;
loc_82340BBC:
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
	// bge 0x82340bf4
	if (!ctx.cr0.lt) goto loc_82340BF4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82340BF4;
	sub_823380C8(ctx, base);
loc_82340BF4:
	// stw r30,448(r27)
	REX_STORE_U32(r27.u32 + 448, r30.u32);
	// li r30,1
	r30.s64 = 1;
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
	// bge cr6,0x82340c6c
	if (!ctx.cr6.lt) goto loc_82340C6C;
loc_82340C14:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82340c6c
	if (ctx.cr6.eq) goto loc_82340C6C;
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
	// bge 0x82340c5c
	if (!ctx.cr0.lt) goto loc_82340C5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82340C5C;
	sub_823380C8(ctx, base);
loc_82340C5C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82340c14
	if (ctx.cr6.gt) goto loc_82340C14;
loc_82340C6C:
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
	// bge 0x82340ca4
	if (!ctx.cr0.lt) goto loc_82340CA4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82340CA4;
	sub_823380C8(ctx, base);
loc_82340CA4:
	// stw r30,400(r27)
	REX_STORE_U32(r27.u32 + 400, r30.u32);
	// li r30,3
	r30.s64 = 3;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82340d1c
	if (!ctx.cr6.lt) goto loc_82340D1C;
loc_82340CC4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82340d1c
	if (ctx.cr6.eq) goto loc_82340D1C;
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
	// bge 0x82340d0c
	if (!ctx.cr0.lt) goto loc_82340D0C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82340D0C;
	sub_823380C8(ctx, base);
loc_82340D0C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82340cc4
	if (ctx.cr6.gt) goto loc_82340CC4;
loc_82340D1C:
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
	// bge 0x82340d54
	if (!ctx.cr0.lt) goto loc_82340D54;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82340D54;
	sub_823380C8(ctx, base);
loc_82340D54:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,15528(r27)
	REX_STORE_U32(r27.u32 + 15528, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82364E08) {
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
	ctx.lr = 0x82364E10;
	// rlwinm r11,r6,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// li r9,4
	ctx.r9.s64 = 4;
	// add r25,r11,r3
	r25.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r26,r4,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// addi r10,r5,-16
	ctx.r10.s64 = ctx.r5.s64 + -16;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82364E2C:
	// lhz r7,22(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 22);
	// lhz r6,26(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 26);
	// lhz r9,18(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 18);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lhz r8,30(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 30);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r29,20(r10)
	r29.u64 = REX_LOAD_U16(ctx.r10.u32 + 20);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lhz r28,24(r10)
	r28.u64 = REX_LOAD_U16(ctx.r10.u32 + 24);
	// add r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lhz r27,28(r10)
	r27.u64 = REX_LOAD_U16(ctx.r10.u32 + 28);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lhzu r4,16(r10)
	ea = 16 + ctx.r10.u32;
	ctx.r4.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// mulli r6,r6,799
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(799));
	// mulli r31,r3,2408
	r31.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(2408));
	// mulli r8,r8,3406
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(3406));
	// mulli r5,r5,565
	ctx.r5.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(565));
	// mulli r7,r7,4017
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(4017));
	// mulli r9,r9,2276
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(2276));
	// subf r3,r6,r31
	ctx.r3.u64 = r31.u64 - ctx.r6.u64;
	// subf r30,r8,r5
	r30.u64 = ctx.r5.u64 - ctx.r8.u64;
	// subf r31,r7,r31
	r31.u64 = r31.u64 - ctx.r7.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// subf r5,r31,r30
	ctx.r5.u64 = r30.u64 - r31.u64;
	// extsh r6,r27
	ctx.r6.s64 = r27.s16;
	// subf r8,r3,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r3.u64;
	// extsh r7,r29
	ctx.r7.s64 = r29.s16;
	// rlwinm r4,r4,11,0,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 11) & 0xFFFFF800;
	// add r27,r5,r8
	r27.u64 = ctx.r5.u64 + ctx.r8.u64;
	// subf r24,r5,r8
	r24.u64 = ctx.r8.u64 - ctx.r5.u64;
	// add r29,r6,r7
	r29.u64 = ctx.r6.u64 + ctx.r7.u64;
	// extsh r5,r28
	ctx.r5.s64 = r28.s16;
	// addi r8,r4,128
	ctx.r8.s64 = ctx.r4.s64 + 128;
	// mulli r4,r29,1108
	ctx.r4.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(1108));
	// mulli r7,r7,1568
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1568));
	// rlwinm r5,r5,11,0,20
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 11) & 0xFFFFF800;
	// mulli r23,r6,3784
	r23.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(3784));
	// add r6,r7,r4
	ctx.r6.u64 = ctx.r7.u64 + ctx.r4.u64;
	// mulli r28,r27,181
	r28.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(181));
	// subf r29,r5,r8
	r29.u64 = ctx.r8.u64 - ctx.r5.u64;
	// add r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 + ctx.r5.u64;
	// mulli r27,r24,181
	r27.s64 = static_cast<int64_t>(r24.u64 * static_cast<uint64_t>(181));
	// subf r8,r23,r4
	ctx.r8.u64 = ctx.r4.u64 - r23.u64;
	// addi r4,r28,128
	ctx.r4.s64 = r28.s64 + 128;
	// subf r28,r6,r7
	r28.u64 = ctx.r7.u64 - ctx.r6.u64;
	// addi r27,r27,128
	r27.s64 = r27.s64 + 128;
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r6,r29,r8
	ctx.r6.u64 = r29.u64 + ctx.r8.u64;
	// subf r3,r8,r29
	ctx.r3.u64 = r29.u64 - ctx.r8.u64;
	// srawi r5,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 8;
	// add r8,r30,r31
	ctx.r8.u64 = r30.u64 + r31.u64;
	// srawi r4,r27,8
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0xFF) != 0);
	ctx.r4.s64 = r27.s32 >> 8;
	// add r31,r9,r7
	r31.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r30,r5,r6
	r30.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r29,r3,r4
	r29.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r27,r28,r8
	r27.u64 = r28.u64 + ctx.r8.u64;
	// srawi r31,r31,8
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	r31.s64 = r31.s32 >> 8;
	// srawi r30,r30,8
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xFF) != 0);
	r30.s64 = r30.s32 >> 8;
	// subf r4,r4,r3
	ctx.r4.u64 = ctx.r3.u64 - ctx.r4.u64;
	// srawi r29,r29,8
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xFF) != 0);
	r29.s64 = r29.s32 >> 8;
	// srawi r3,r27,8
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0xFF) != 0);
	ctx.r3.s64 = r27.s32 >> 8;
	// subf r8,r8,r28
	ctx.r8.u64 = r28.u64 - ctx.r8.u64;
	// sth r3,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r3.u16);
	// subf r3,r5,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r5.u64;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// sth r8,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r8.u16);
	// srawi r8,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 8;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// sth r4,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r4.u16);
	// extsh r30,r30
	r30.s64 = r30.s16;
	// extsh r29,r29
	r29.s64 = r29.s16;
	// sth r31,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, r31.u16);
	// subf r7,r9,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r9.u64;
	// sth r30,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, r30.u16);
	// sth r29,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, r29.u16);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// srawi r5,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 8;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sth r6,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r6.u16);
	// sth r4,14(r11)
	REX_STORE_U16(ctx.r11.u32 + 14, ctx.r4.u16);
	// add r11,r26,r11
	ctx.r11.u64 = r26.u64 + ctx.r11.u64;
	// bdnz 0x82364e2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82364E2C;
	// add r11,r26,r25
	ctx.r11.u64 = r26.u64 + r25.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r10,r26,r11
	ctx.r10.u64 = r26.u64 + ctx.r11.u64;
	// subf r5,r11,r25
	ctx.r5.u64 = r25.u64 - ctx.r11.u64;
	// add r8,r26,r10
	ctx.r8.u64 = r26.u64 + ctx.r10.u64;
	// subf r4,r11,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r3,r11,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r11.u64;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
loc_82364FAC:
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhzx r7,r4,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r11.u32);
	// lhzx r6,r3,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// extsh r31,r8
	r31.s64 = ctx.r8.s16;
	// lhzx r9,r5,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r11.u32);
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// extsh r30,r6
	r30.s64 = ctx.r6.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// mulli r6,r31,1892
	ctx.r6.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(1892));
	// add r29,r8,r9
	r29.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mulli r7,r30,784
	ctx.r7.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(784));
	// subf r28,r8,r9
	r28.u64 = ctx.r9.u64 - ctx.r8.u64;
	// mulli r30,r30,1892
	r30.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(1892));
	// mulli r31,r31,784
	r31.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(784));
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// mulli r8,r29,1448
	ctx.r8.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(1448));
	// mulli r6,r28,1448
	ctx.r6.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(1448));
	// subf r7,r30,r31
	ctx.r7.u64 = r31.u64 - r30.u64;
	// add r31,r8,r9
	r31.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r30,r6,r7
	r30.u64 = ctx.r6.u64 + ctx.r7.u64;
	// subf r7,r7,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r7.u64;
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r6,r31,r10
	ctx.r6.u64 = r31.u64 + ctx.r10.u64;
	// add r8,r30,r10
	ctx.r8.u64 = r30.u64 + ctx.r10.u64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// srawi r6,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 16;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// sthx r6,r5,r11
	REX_STORE_U16(ctx.r5.u32 + ctx.r11.u32, ctx.r6.u16);
	// srawi r7,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 16;
	// srawi r9,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// sth r8,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// sthx r7,r4,r11
	REX_STORE_U16(ctx.r4.u32 + ctx.r11.u32, ctx.r7.u16);
	// sthx r6,r3,r11
	REX_STORE_U16(ctx.r3.u32 + ctx.r11.u32, ctx.r6.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x82364fac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82364FAC;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_8236DD68) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8236DD70;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8236ded4
	if (ctx.cr6.eq) goto loc_8236DED4;
	// lwz r11,212(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r10,216(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// srawi r30,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	r30.s64 = ctx.r11.s32 >> 1;
	// srawi r29,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	r29.s64 = ctx.r10.s32 >> 1;
	// bl 0x82392200
	ctx.lr = 0x8236DD98;
	sub_82392200(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823952d8
	ctx.lr = 0x8236DDA0;
	sub_823952D8(ctx, base);
	// lwz r9,204(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r8,208(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 208);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r7,20680(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20680);
	// rlwinm r6,r9,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r30,212(r31)
	REX_STORE_U32(r31.u32 + 212, r30.u32);
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// stw r29,216(r31)
	REX_STORE_U32(r31.u32 + 216, r29.u32);
	// rlwinm r4,r8,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r6,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r6.u32);
	// rlwinm r3,r9,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,236(r31)
	REX_STORE_U32(r31.u32 + 236, ctx.r5.u32);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r4,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r4.u32);
	// stw r3,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r3.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r11,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r11.u32);
	// beq cr6,0x8236dee4
	if (ctx.cr6.eq) goto loc_8236DEE4;
	// lwz r11,20684(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236dee4
	if (ctx.cr6.eq) goto loc_8236DEE4;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r8,272(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 272);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// beq cr6,0x8236dee4
	if (ctx.cr6.eq) goto loc_8236DEE4;
loc_8236DE24:
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8236debc
	if (!ctx.cr6.gt) goto loc_8236DEBC;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r8,r6
	ctx.r8.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r5,r8,28,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x2;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r10,r10,-24
	ctx.r10.s64 = ctx.r10.s64 + -24;
loc_8236DE50:
	// lwz r7,140(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cntlzw r3,r11
	ctx.r3.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// lwz r30,24(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subf r7,r6,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r6.u64;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r7,28,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0x2;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r3,r3,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r7,r3,r5
	ctx.r7.u64 = ctx.r3.u64 | ctx.r5.u64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r8,r7,28
	ctx.r8.u64 = ctx.r7.u32 & 0xF;
	// rlwinm r7,r30,0,20,15
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// or r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 | ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r3,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xFFFFF000;
	// or r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwu r7,24(r10)
	ea = 24 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8236de50
	if (ctx.cr6.lt) goto loc_8236DE50;
loc_8236DEBC:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8236de24
	if (ctx.cr6.lt) goto loc_8236DE24;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
loc_8236DED4:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82392200
	ctx.lr = 0x8236DEDC;
	sub_82392200(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823952d8
	ctx.lr = 0x8236DEE4;
	sub_823952D8(ctx, base);
loc_8236DEE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82377978) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// bl 0x822d4e88
	ctx.lr = 0x82377980;
	// lwz r11,288(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82377f04
	if (ctx.cr6.eq) goto loc_82377F04;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82377f04
	if (ctx.cr6.eq) goto loc_82377F04;
	// cmpwi cr6,r6,31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 31, ctx.xer);
	// ble cr6,0x823779a0
	if (!ctx.cr6.gt) goto loc_823779A0;
	// addi r6,r6,-64
	ctx.r6.s64 = ctx.r6.s64 + -64;
loc_823779A0:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x823779b8
	if (!ctx.cr6.eq) goto loc_823779B8;
	// rlwinm r11,r6,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// li r5,-64
	ctx.r5.s64 = -64;
	// subfic r30,r11,16320
	ctx.xer.ca = ctx.r11.u32 <= 16320;
	r30.u64 = static_cast<uint64_t>(16320) - ctx.r11.u64;
	// b 0x823779c0
	goto loc_823779C0;
loc_823779B8:
	// addi r5,r5,32
	ctx.r5.s64 = ctx.r5.s64 + 32;
	// rlwinm r30,r6,6,0,25
	r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
loc_823779C0:
	// lwz r11,21704(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82377a08
	if (!ctx.cr6.eq) goto loc_82377A08;
	// lwz r11,204(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// addi r9,r4,-4
	ctx.r9.s64 = ctx.r4.s64 + -4;
	// lwz r8,208(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// addi r4,r4,-8
	ctx.r4.s64 = ctx.r4.s64 + -8;
	// srawi r31,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	r31.s64 = ctx.r11.s32 >> 1;
	// lwz r7,3792(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 3792);
	// srawi r29,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	r29.s64 = ctx.r8.s32 >> 1;
	// lwz r10,3788(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3788);
	// lwz r6,3796(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 3796);
	// mullw r8,r31,r4
	ctx.r8.s64 = int64_t(r31.s32) * int64_t(ctx.r4.s32);
	// mullw r9,r29,r9
	ctx.r9.s64 = int64_t(r29.s32) * int64_t(ctx.r9.s32);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// b 0x82377b20
	goto loc_82377B20;
loc_82377A08:
	// lwz r11,21540(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,204(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// beq cr6,0x82377aa0
	if (ctx.cr6.eq) goto loc_82377AA0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r31,r3,208
	r31.s64 = ctx.r3.s64 + 208;
	// bne cr6,0x82377a68
	if (!ctx.cr6.eq) goto loc_82377A68;
	// lwz r10,208(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// lwz r8,224(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// srawi r6,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 1;
	// lwz r4,3860(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 3860);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,3864(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3864);
	// lwz r7,3856(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 3856);
	// subf r4,r8,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r8.u64;
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// lwz r29,220(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r10,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r10.u64;
	// subf r7,r6,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r6.u64;
	// subf r10,r29,r8
	ctx.r10.u64 = ctx.r8.u64 - r29.u64;
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// b 0x82377b24
	goto loc_82377B24;
loc_82377A68:
	// lwz r9,208(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lwz r7,3792(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 3792);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// lwz r6,3788(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 3788);
	// rlwinm r4,r10,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r29,3796(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 3796);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r10,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r10.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r10,r10,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r10.u64;
	// subf r7,r9,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r9.u64;
	// subf r9,r9,r29
	ctx.r9.u64 = r29.u64 - ctx.r9.u64;
	// b 0x82377b24
	goto loc_82377B24;
loc_82377AA0:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82377ad8
	if (!ctx.cr6.eq) goto loc_82377AD8;
	// lwz r10,208(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// lwz r6,3792(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 3792);
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// lwz r8,3788(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 3788);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,3796(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 3796);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// subf r7,r9,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r9.u64;
	// subf r9,r9,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r9.u64;
	// b 0x82377b20
	goto loc_82377B20;
loc_82377AD8:
	// lwz r9,208(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lwz r7,224(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// lwz r6,3860(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 3860);
	// rlwinm r4,r10,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r29,3856(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 3856);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r28,3864(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 3864);
	// subf r10,r10,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r10.u64;
	// lwz r4,220(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r8,r7,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r7.u64;
	// subf r6,r7,r28
	ctx.r6.u64 = r28.u64 - ctx.r7.u64;
	// subf r10,r10,r29
	ctx.r10.u64 = r29.u64 - ctx.r10.u64;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
	// subf r9,r9,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r9.u64;
loc_82377B20:
	// addi r31,r3,208
	r31.s64 = ctx.r3.s64 + 208;
loc_82377B24:
	// extsw r8,r5
	ctx.r8.s64 = ctx.r5.s32;
	// lwz r6,188(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// extsw r5,r30
	ctx.r5.s64 = r30.s32;
	// vspltisb v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_set1_epi8(char(0x0)));
	// std r8,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r8.u64);
	// lfd f0,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// std r5,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r5.u64);
	// lfd f13,-64(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// addi r30,r8,-22832
	r30.s64 = ctx.r8.s64 + -22832;
	// addi r8,r1,-64
	ctx.r8.s64 = ctx.r1.s64 + -64;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// li r4,-16
	ctx.r4.s64 = -16;
	// vspltish v12,6
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x6)));
	// addi r29,r1,-64
	r29.s64 = ctx.r1.s64 + -64;
	// srawi r5,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 5;
	// addic. r6,r6,40
	ctx.xer.ca = ctx.r6.u32 > 4294967255;
	ctx.r6.s64 = ctx.r6.s64 + 40;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// lvx128 v63,r30,r4
	ea = (r30.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// stfs f10,-64(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// stfs f10,-60(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// stfs f10,-56(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// stfs f10,-52(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// lvx128 v62,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v11,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stfs f9,-64(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// stfs f9,-60(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// stfs f9,-56(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// stfs f9,-52(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// lvx128 v0,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ble 0x82377c44
	if (!ctx.cr0.gt) goto loc_82377C44;
loc_82377BAC:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82377c28
	if (!ctx.cr6.gt) goto loc_82377C28;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82377BBC:
	// lvx128 v10,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v9,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v10,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglh v8,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vmrglh v7,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vmrghh v6,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vmrghh v5,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vcfsx v9,v8,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vcfsx v7,v7,0
	simde_mm_store_ps(ctx.v7.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vcfsx v6,v6,0
	simde_mm_store_ps(ctx.v6.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vcfsx v10,v5,0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v5.u32)));
	// vmaddfp v8,v0,v9,v11
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v7,v0,v7,v11
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v9,v0,v6,v11
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v10,v0,v10,v11
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vcfpsxws128 v61,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v8.f32)));
	// vcfpsxws128 v60,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v7.f32)));
	// vcfpsxws128 v59,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v9.f32)));
	// vcfpsxws128 v58,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v10.f32)));
	// vpkswss128 v4,v59,v60
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.s32), simde_mm_load_si128((simde__m128i*)ctx.v59.s32)));
	// vpkswss128 v3,v58,v61
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.s32), simde_mm_load_si128((simde__m128i*)ctx.v58.s32)));
	// vsrah v2,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v1,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v57,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// stvx128 v57,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// bdnz 0x82377bbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82377BBC;
loc_82377C28:
	// lwz r8,188(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r6,204(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// addi r8,r8,40
	ctx.r8.s64 = ctx.r8.s64 + 40;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82377bac
	if (ctx.cr6.lt) goto loc_82377BAC;
loc_82377C44:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r10,r7,28
	ctx.r10.u64 = ctx.r7.u32 & 0xF;
	// srawi r29,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	r29.s64 = ctx.r11.s32 >> 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82377d98
	if (!ctx.cr6.eq) goto loc_82377D98;
	// lwz r11,200(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// li r6,0
	ctx.r6.s64 = 0;
	// addic. r10,r11,20
	ctx.xer.ca = ctx.r11.u32 > 4294967275;
	ctx.r10.s64 = ctx.r11.s64 + 20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82377f04
	if (!ctx.cr0.gt) goto loc_82377F04;
	// vspltish v11,15
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0xF)));
	// vslb v10,v11,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi8(0x7));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi8(a, shift));
	}
	// lvx128 v11,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82377C74:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x82377d74
	if (!ctx.cr6.gt) goto loc_82377D74;
	// addi r10,r29,-1
	ctx.r10.s64 = r29.s64 + -1;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// rlwinm r8,r10,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// subf r10,r9,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r9.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82377C94:
	// lvx128 v9,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v7,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v6,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v5,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v4,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vsubshs v3,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubshs v2,v6,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubshs v1,v5,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubshs v31,v4,v10
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vupklsb128 v56,v3,v96
	simde_mm_store_si128((simde__m128i*)ctx.v56.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vupklsb128 v55,v2,v96
	simde_mm_store_si128((simde__m128i*)ctx.v55.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vupkhsb128 v54,v2,v96
	simde_mm_store_si128((simde__m128i*)ctx.v54.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16))));
	// vupkhsb128 v53,v3,v96
	simde_mm_store_si128((simde__m128i*)ctx.v53.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16))));
	// vupklsb128 v52,v31,v96
	simde_mm_store_si128((simde__m128i*)ctx.v52.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vcsxwfp128 v2,v56,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v2.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v56.u32)));
	// vupkhsb128 v51,v31,v96
	simde_mm_store_si128((simde__m128i*)ctx.v51.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v31.s16))));
	// vcsxwfp128 v3,v55,0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v55.u32)));
	// vupklsb128 v50,v1,v96
	simde_mm_store_si128((simde__m128i*)ctx.v50.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vcsxwfp128 v4,v54,0
	simde_mm_store_ps(ctx.v4.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v54.u32)));
	// vupkhsb128 v49,v1,v96
	simde_mm_store_si128((simde__m128i*)ctx.v49.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16))));
	// vcsxwfp128 v5,v53,0
	simde_mm_store_ps(ctx.v5.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v53.u32)));
	// vcsxwfp128 v6,v52,0
	simde_mm_store_ps(ctx.v6.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v52.u32)));
	// vcsxwfp128 v7,v51,0
	simde_mm_store_ps(ctx.v7.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// vcsxwfp128 v8,v50,0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)));
	// vcsxwfp128 v9,v49,0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v49.u32)));
	// vmaddfp v2,v0,v2,v11
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v3,v0,v3,v11
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v4,v0,v4,v11
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v5,v0,v5,v11
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v6,v0,v6,v11
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v7,v0,v7,v11
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v8,v0,v8,v11
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v9,v0,v9,v11
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vcfpsxws128 v48,v2,0
	simde_mm_store_si128((simde__m128i*)ctx.v48.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v2.f32)));
	// vcfpsxws128 v47,v3,0
	simde_mm_store_si128((simde__m128i*)ctx.v47.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v3.f32)));
	// vcfpsxws128 v46,v4,0
	simde_mm_store_si128((simde__m128i*)ctx.v46.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v4.f32)));
	// vcfpsxws128 v45,v5,0
	simde_mm_store_si128((simde__m128i*)ctx.v45.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v5.f32)));
	// vcfpsxws128 v44,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v44.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v6.f32)));
	// vcfpsxws128 v43,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v43.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v7.f32)));
	// vcfpsxws128 v42,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v42.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v8.f32)));
	// vcfpsxws128 v41,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v41.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v9.f32)));
	// vpkswss128 v30,v46,v47
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.s32), simde_mm_load_si128((simde__m128i*)ctx.v46.s32)));
	// vpkswss128 v29,v45,v48
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.s32), simde_mm_load_si128((simde__m128i*)ctx.v45.s32)));
	// vpkswss128 v28,v43,v44
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.s32), simde_mm_load_si128((simde__m128i*)ctx.v43.s32)));
	// vsrah v27,v30,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkswss128 v26,v41,v42
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.s32), simde_mm_load_si128((simde__m128i*)ctx.v41.s32)));
	// vsrah v25,v29,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v28,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v23,v26,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v40,v25,v27
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vpkshus128 v39,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// stvx128 v40,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v39,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82377c94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82377C94;
loc_82377D74:
	// lwz r10,200(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82377c74
	if (ctx.cr6.lt) goto loc_82377C74;
	// b 0x822d4ed8
	return;
loc_82377D98:
	// addi r3,r3,200
	ctx.r3.s64 = ctx.r3.s64 + 200;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r10,r11,20
	ctx.xer.ca = ctx.r11.u32 > 4294967275;
	ctx.r10.s64 = ctx.r11.s64 + 20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82377f04
	if (!ctx.cr0.gt) goto loc_82377F04;
	// vspltish v11,15
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0xF)));
	// li r6,16
	ctx.r6.s64 = 16;
	// vslb v10,v11,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi8(0x7));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi8(a, shift));
	}
	// lvx128 v11,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82377DBC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x82377ee4
	if (!ctx.cr6.gt) goto loc_82377EE4;
	// addi r11,r29,-1
	ctx.r11.s64 = r29.s64 + -1;
	// subf r10,r9,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r9.u64;
	// rlwinm r8,r11,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82377DE0:
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lvrx128 v37,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v36,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v9,v36,v37
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// lvlx128 v38,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v35,r6,r8
	temp.u32 = ctx.r6.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v8,v38,v35
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8)));
	// vmrghb v7,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v6,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v5,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vsubshs v3,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vmrglb v4,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vsubshs v2,v6,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubshs v1,v5,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubshs v31,v4,v10
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vor128 v34,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vor128 v33,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// vupklsb128 v62,v1,v96
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vupklsb128 v61,v31,v96
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vupkhsb128 v60,v31,v96
	simde_mm_store_si128((simde__m128i*)ctx.v60.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v31.s16))));
	// vupkhsb128 v59,v1,v96
	simde_mm_store_si128((simde__m128i*)ctx.v59.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16))));
	// vupklsb128 v32,v34,v96
	simde_mm_store_si128((simde__m128i*)ctx.v32.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v34.s16)));
	// vcsxwfp128 v4,v62,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v4.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vupklsb128 v63,v33,v96
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v33.s16)));
	// vcsxwfp128 v5,v61,0
	simde_mm_store_ps(ctx.v5.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)));
	// vupkhsb128 v58,v33,v96
	simde_mm_store_si128((simde__m128i*)ctx.v58.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v33.s16), simde_mm_load_si128((simde__m128i*)ctx.v33.s16))));
	// vcsxwfp128 v6,v60,0
	simde_mm_store_ps(ctx.v6.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// vupkhsb128 v57,v34,v96
	simde_mm_store_si128((simde__m128i*)ctx.v57.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v34.s16), simde_mm_load_si128((simde__m128i*)ctx.v34.s16))));
	// vcsxwfp128 v7,v59,0
	simde_mm_store_ps(ctx.v7.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// vcsxwfp128 v2,v32,0
	simde_mm_store_ps(ctx.v2.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v32.u32)));
	// vcsxwfp128 v3,v63,0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vcsxwfp128 v8,v58,0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)));
	// vcsxwfp128 v9,v57,0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v57.u32)));
	// vmaddfp v4,v0,v4,v11
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v5,v0,v5,v11
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v6,v0,v6,v11
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v7,v0,v7,v11
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v2,v0,v2,v11
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v3,v0,v3,v11
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v8,v0,v8,v11
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v9,v0,v9,v11
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vcfpsxws128 v54,v4,0
	simde_mm_store_si128((simde__m128i*)ctx.v54.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v4.f32)));
	// vcfpsxws128 v53,v5,0
	simde_mm_store_si128((simde__m128i*)ctx.v53.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v5.f32)));
	// vcfpsxws128 v52,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v6.f32)));
	// vcfpsxws128 v51,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v51.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v7.f32)));
	// vcfpsxws128 v56,v2,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v2.f32)));
	// vcfpsxws128 v55,v3,0
	simde_mm_store_si128((simde__m128i*)ctx.v55.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v3.f32)));
	// vcfpsxws128 v50,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v50.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v8.f32)));
	// vcfpsxws128 v49,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v49.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v9.f32)));
	// vpkswss128 v30,v52,v53
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.s32), simde_mm_load_si128((simde__m128i*)ctx.v52.s32)));
	// vpkswss128 v29,v51,v54
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.s32), simde_mm_load_si128((simde__m128i*)ctx.v51.s32)));
	// vpkswss128 v28,v50,v55
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.s32), simde_mm_load_si128((simde__m128i*)ctx.v50.s32)));
	// vsrah v26,v30,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkswss128 v27,v49,v56
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.s32), simde_mm_load_si128((simde__m128i*)ctx.v49.s32)));
	// vsrah v25,v29,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v28,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v23,v27,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v48,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vpkshus128 v47,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// stvlx128 v48,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// stvrx128 v48,r8,r6
	ea = ctx.r8.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v48.u8[i]);
	// stvlx128 v47,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v47.u8[15 - i]);
	// stvrx128 v47,r11,r6
	ea = ctx.r11.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v47.u8[i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82377de0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82377DE0;
loc_82377EE4:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82377dbc
	if (ctx.cr6.lt) goto loc_82377DBC;
loc_82377F04:
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82397FA8) {
	REX_FUNC_PROLOGUE();
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
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// li r5,16
	ctx.r5.s64 = 16;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// li r6,112
	ctx.r6.s64 = 112;
	// vspltish v11,4
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x4)));
	// li r7,48
	ctx.r7.s64 = 48;
	// vspltish v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x3)));
	// li r8,80
	ctx.r8.s64 = 80;
	// lvx128 v3,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,64
	ctx.r9.s64 = 64;
	// vslh v26,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v10,r4,r5
	ea = (ctx.r4.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v8,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v2,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v4,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// lvx128 v7,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v8,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r11,96
	ctx.r11.s64 = 96;
	// vadduhm v24,v10,v10
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// lvx128 v31,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v23,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v6,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v22,v9,v7
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vspltish v30,1
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_set1_epi16(short(0x1)));
	// vslh v21,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v12,6
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x6)));
	// vadduhm v19,v2,v24
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// lvx128 v5,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubuhm v8,v23,v4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v20,v1,v25
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vslh v18,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v10,v22,v22
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)v22.u8));
	// vadduhm v16,v1,v21
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vsubuhm v1,v8,v20
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vsubuhm v29,v8,v19
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v15,v18,v2
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vor v8,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)v17.u8));
	// vslh v14,v3,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v28,v15,v8
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vsubuhm v27,v8,v16
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vadduhm v23,v25,v4
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vor v8,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// vadduhm v22,v3,v24
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vslh v21,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v31,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v19,v14,v26
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v18,v8,v23
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vsubuhm v17,v8,v22
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v15,v9,v9
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v14,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v8,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vadduhm v2,v19,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v16,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v9,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vslh v7,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v31,v5,v5
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vslh v26,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v10,v16,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v25,v2,v8
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v24,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v7,v9
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v21,v26,v31
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vadduhm v20,v4,v15
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vadduhm v19,v3,v14
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vsubuhm v9,v2,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vsubuhm v1,v1,v18
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vadduhm v31,v29,v17
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vsubuhm v7,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v8,v21,v24
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vsubuhm v18,v10,v20
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vsubuhm v17,v10,v19
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vor v11,v25,v25
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v25.u8));
	// vadduhm v5,v11,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// vsubuhm v11,v11,v8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// li r31,16
	r31.s64 = 16;
	// vadduhm v8,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// addi r4,r4,23088
	ctx.r4.s64 = ctx.r4.s64 + 23088;
	// vadduhm v10,v28,v18
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vspltish v16,8
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_set1_epi16(short(0x8)));
	// vadduhm v6,v27,v17
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vsubuhm v9,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vadduhm v15,v8,v1
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v14,v5,v10
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v7,v11,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vsubuhm v6,v11,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vsubuhm v4,v5,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubuhm v2,v8,v1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vsrah v11,v14,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v10,v15,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubuhm v3,v9,v31
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vadduhm v1,v9,v31
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vsrah v8,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmrghh v31,v11,v10
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vsrah v7,v6,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmrglh v29,v11,v10
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vsrah v6,v3,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v9,v1,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v5,v2,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v11,v4,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmrghh v28,v7,v6
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vslh v22,v16,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglh v27,v7,v6
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// lvx128 v7,r4,r31
	ea = (ctx.r4.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghh v26,v9,v8
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// lvx128 v6,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghh v25,v5,v11
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vmrglh v24,v5,v11
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vmrglh v23,v9,v8
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vmrghw128 v63,v31,v26
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v26.u32), simde_mm_load_si128((simde__m128i*)v31.u32)));
	// vmrghw128 v59,v28,v25
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v25.u32), simde_mm_load_si128((simde__m128i*)v28.u32)));
	// vmrglw128 v56,v27,v24
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v24.u32), simde_mm_load_si128((simde__m128i*)v27.u32)));
	// vmrglw128 v60,v29,v23
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v23.u32), simde_mm_load_si128((simde__m128i*)v29.u32)));
	// vmrglw128 v62,v31,v26
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v26.u32), simde_mm_load_si128((simde__m128i*)v31.u32)));
	// vmrglw128 v58,v28,v25
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v25.u32), simde_mm_load_si128((simde__m128i*)v28.u32)));
	// vmrghw128 v61,v29,v23
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v23.u32), simde_mm_load_si128((simde__m128i*)v29.u32)));
	// vmrghw128 v57,v27,v24
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v24.u32), simde_mm_load_si128((simde__m128i*)v27.u32)));
	// vperm128 v11,v63,v59,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v10,v60,v56,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v9,v62,v58,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v8,v61,v57,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vadduhm v1,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vperm128 v4,v63,v59,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vadduhm v7,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vperm128 v3,v61,v57,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vslh v31,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v5,v62,v58,v6
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vslh v21,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v2,v60,v56,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vadduhm v20,v1,v11
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v19,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v10,v10
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v16,v31,v21
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vsubuhm v11,v19,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vadduhm v28,v7,v7
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vadduhm v14,v31,v17
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v6,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsubuhm v29,v11,v20
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vsubuhm v31,v11,v16
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vadduhm v15,v18,v1
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vor v11,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v28.u8));
	// vadduhm v10,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v25,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v26,v6,v6
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v24,v9,v9
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v23,v6,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v4,v4
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v28,v11,v15
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vsubuhm v27,v11,v14
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vadduhm v19,v25,v10
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vor v11,v26,v26
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v26.u8));
	// vadduhm v18,v1,v24
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vslh v17,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v16,v23,v6
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v15,v5,v5
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vslh v14,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v9,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v4,v21,v20
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vslh v3,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v26,v2,v5
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v25,v11,v19
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vsubuhm v24,v11,v18
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vadduhm v23,v10,v8
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v21,v5,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v1,v17
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vor v11,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v16.u8));
	// vadduhm v19,v15,v5
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v9,v14,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v10,v22,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vslh v0,v26,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v18,v3,v2
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsubuhm v17,v11,v23
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vsubuhm v16,v11,v20
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v15,v21,v19
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v11,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsubuhm v10,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsubuhm v9,v0,v18
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vsubuhm v0,v0,v15
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vsrah v8,v7,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubuhm v4,v31,v25
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vsrah v13,v6,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v1,v28,v17
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v7,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v3,v29,v24
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vadduhm v5,v27,v16
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vsubuhm v11,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsubuhm v9,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vadduhm v0,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vadduhm v6,v1,v13
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v10,v4,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v13,v5,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v8,v3,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v14,v7,v6
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v5,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v4,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v3,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vsubuhm v2,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vsubuhm v1,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vsubuhm v31,v9,v10
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubuhm v30,v7,v6
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vsrah v29,v14,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v28,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v27,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v2,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v29,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v24,v1,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v28,r3,r5
	ea = (ctx.r3.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v23,v31,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v27,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v22,v30,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v26,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v23,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v22,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823CD060) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(std::fma(ctx.f11.f64, ctx.f10.f64, ctx.f12.f64)));
	// fmadds f1,f9,f8,f7
	ctx.f1.f64 = double(float(std::fma(ctx.f9.f64, ctx.f8.f64, ctx.f7.f64)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823CD378) {
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
	// bl 0x824d451c
	ctx.lr = 0x823CD390;
	__imp__KeQueryPerformanceFrequency(ctx, base);
	// std r3,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r3.u64);
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
}

DEFINE_REX_FUNC(sub_823CD890) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824d417c
	ctx.lr = 0x823CD8AC;
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	ctx.r11.s64 = -3;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// li r8,16448
	ctx.r8.s64 = 16448;
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824d416c
	ctx.lr = 0x823CD8E0;
	__imp__NtOpenFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823cd928
	if (ctx.cr0.lt) goto loc_823CD928;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,13
	ctx.r7.s64 = 13;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x824d425c
	ctx.lr = 0x823CD908;
	__imp__NtSetInformationFile(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x824d421c
	ctx.lr = 0x823CD914;
	__imp__NtClose(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x823cd924
	if (ctx.cr6.lt) goto loc_823CD924;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823cd930
	goto loc_823CD930;
loc_823CD924:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823CD928:
	// bl 0x8220a840
	ctx.lr = 0x823CD92C;
	sub_8220A840(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823CD930:
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

DEFINE_REX_FUNC(sub_823CE078) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823CE0A8) {
	REX_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x823ce588
	sub_823CE588(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823CE4D0) {
	REX_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r3,r11,8,25,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x40;
	// b 0x823ce440
	sub_823CE440(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823CE588) {
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
	// lis r11,30403
	ctx.r11.s64 = 1992491008;
	// stw r4,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,62033
	ctx.r11.u64 = ctx.r11.u64 | 62033;
	// stw r10,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// bl 0x823cec58
	ctx.lr = 0x823CE5B8;
	sub_823CEC58(ctx, base);
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

DEFINE_REX_FUNC(sub_823CF240) {
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
	ctx.lr = 0x823CF248;
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
	// bgt cr6,0x823cf270
	if (ctx.cr6.gt) goto loc_823CF270;
	// lwz r11,11968(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 11968);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r11,11968(r3)
	REX_STORE_U32(ctx.r3.u32 + 11968, ctx.r11.u32);
	// b 0x823cf3cc
	goto loc_823CF3CC;
loc_823CF270:
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
	// bl 0x822d4fa0
	ctx.lr = 0x823CF288;
	sub_822D4FA0(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,232
	ctx.r4.s64 = 232;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d5870
	ctx.lr = 0x823CF298;
	sub_822D5870(ctx, base);
	// lwz r11,11968(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 11968);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r7,r11,-10
	ctx.r7.s64 = ctx.r11.s64 + -10;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r6,r11,-13808
	ctx.r6.s64 = ctx.r11.s64 + -13808;
loc_823CF2AC:
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
	// bge cr6,0x823cf2e0
	if (!ctx.cr6.lt) goto loc_823CF2E0;
loc_823CF2C4:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,232
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 232, ctx.xer);
	// beq cr6,0x823cf2e0
	if (ctx.cr6.eq) goto loc_823CF2E0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823cf2c4
	if (ctx.cr6.lt) goto loc_823CF2C4;
loc_823CF2E0:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823cf304
	if (!ctx.cr6.eq) goto loc_823CF304;
	// lvx128 v0,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x823cf2f8
	goto loc_823CF2F8;
loc_823CF2F0:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_823CF2F8:
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpequb. v13,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_cmpeq_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 0xFFFF);
	// beq cr6,0x823cf2f0
	if (ctx.cr6.eq) goto loc_823CF2F0;
loc_823CF304:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x823cf314
	goto loc_823CF314;
loc_823CF30C:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_823CF314:
	// cmplwi cr6,r9,232
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 232, ctx.xer);
	// bne cr6,0x823cf30c
	if (!ctx.cr6.eq) goto loc_823CF30C;
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
	// bge cr6,0x823cf3b4
	if (!ctx.cr6.lt) goto loc_823CF3B4;
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
	// bge cr6,0x823cf378
	if (!ctx.cr6.lt) goto loc_823CF378;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// b 0x823cf38c
	goto loc_823CF38C;
loc_823CF378:
	// neg r5,r9
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823cf3a4
	if (ctx.cr6.gt) goto loc_823CF3A4;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
loc_823CF38C:
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
loc_823CF3A4:
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// stw r10,11968(r28)
	REX_STORE_U32(r28.u32 + 11968, ctx.r10.u32);
	// b 0x823cf2ac
	goto loc_823CF2AC;
loc_823CF3B4:
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
	// bl 0x822d4fa0
	ctx.lr = 0x823CF3CC;
	sub_822D4FA0(ctx, base);
loc_823CF3CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_823D7748) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D7758) {
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
	ctx.lr = 0x823D7760;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r9,68(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r8,60(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lwz r7,64(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823d779c
	if (ctx.cr0.eq) goto loc_823D779C;
loc_823D7790:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x823d78f4
	goto loc_823D78F4;
loc_823D779C:
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r9,72(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r6,68(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 68);
	// lwz r5,64(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// lwz r10,60(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823d7790
	if (!ctx.cr0.eq) goto loc_823D7790;
	// lwz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r10,r10,0,26,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// addis r10,r10,-6688
	ctx.r10.s64 = ctx.r10.s64 + -438304768;
	// addic. r10,r10,-18
	ctx.xer.ca = ctx.r10.u32 > 17;
	ctx.r10.s64 = ctx.r10.s64 + -18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823d77f4
	if (ctx.cr0.eq) goto loc_823D77F4;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x823d77ec
	if (ctx.cr6.eq) goto loc_823D77EC;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x823d7790
	if (!ctx.cr6.eq) goto loc_823D7790;
loc_823D77EC:
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x823d77f8
	goto loc_823D77F8;
loc_823D77F4:
	// li r10,8
	ctx.r10.s64 = 8;
loc_823D77F8:
	// lwz r6,4(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 4);
	// rlwinm r7,r7,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r5,96(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm r30,r8,30,2,31
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r3,100(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// li r25,0
	r25.s64 = 0;
	// lwz r31,76(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mullw r8,r7,r5
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// lwz r7,32(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r4,64(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 64);
	// lwz r29,96(r6)
	r29.u64 = REX_LOAD_U32(ctx.r6.u32 + 96);
	// lwz r27,100(r6)
	r27.u64 = REX_LOAD_U32(ctx.r6.u32 + 100);
	// lwz r26,76(r6)
	r26.u64 = REX_LOAD_U32(ctx.r6.u32 + 76);
	// lwz r24,60(r6)
	r24.u64 = REX_LOAD_U32(ctx.r6.u32 + 60);
	// lwz r23,104(r6)
	r23.u64 = REX_LOAD_U32(ctx.r6.u32 + 104);
	// lwz r5,32(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 32);
	// lwz r22,112(r9)
	r22.u64 = REX_LOAD_U32(ctx.r9.u32 + 112);
	// rlwinm r4,r4,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r6,r27,r26
	ctx.r6.s64 = int64_t(r27.s32) * int64_t(r26.s32);
	// mullw r4,r4,r29
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(r29.s32);
	// mullw r31,r3,r31
	r31.s64 = int64_t(ctx.r3.s32) * int64_t(r31.s32);
	// rlwinm r29,r24,30,2,31
	r29.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 30) & 0x3FFFFFFF;
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// mullw r3,r29,r10
	ctx.r3.s64 = int64_t(r29.s32) * int64_t(ctx.r10.s32);
	// mullw r4,r30,r10
	ctx.r4.s64 = int64_t(r30.s32) * int64_t(ctx.r10.s32);
	// rlwinm r31,r23,30,2,31
	r31.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 30) & 0x3FFFFFFF;
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// mullw r24,r31,r10
	r24.s64 = int64_t(r31.s32) * int64_t(ctx.r10.s32);
	// add r27,r6,r5
	r27.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r26,r8,r7
	r26.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// ble cr6,0x823d78f0
	if (!ctx.cr6.gt) goto loc_823D78F0;
	// lwz r10,108(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 108);
loc_823D7884:
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d78d0
	if (ctx.cr6.eq) goto loc_823D78D0;
loc_823D7898:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823D78A8;
	sub_822D4FA0(ctx, base);
	// lwz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r7,96(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 96);
	// lwz r8,96(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r10,108(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 108);
	// add r30,r7,r30
	r30.u64 = ctx.r7.u64 + r30.u64;
	// add r29,r8,r29
	r29.u64 = ctx.r8.u64 + r29.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823d7898
	if (ctx.cr6.lt) goto loc_823D7898;
loc_823D78D0:
	// lwz r7,100(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 100);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lwz r8,100(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r6,112(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 112);
	// add r27,r7,r27
	r27.u64 = ctx.r7.u64 + r27.u64;
	// add r26,r8,r26
	r26.u64 = ctx.r8.u64 + r26.u64;
	// cmplw cr6,r25,r6
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x823d7884
	if (ctx.cr6.lt) goto loc_823D7884;
loc_823D78F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823D78F4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_823DBD38) {
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
	// lwz r3,56(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// addi r11,r11,-7240
	ctx.r11.s64 = ctx.r11.s64 + -7240;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x823cd250
	ctx.lr = 0x823DBD64;
	sub_823CD250(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// bl 0x823cd250
	ctx.lr = 0x823DBD70;
	sub_823CD250(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 92);
	// bl 0x823cd250
	ctx.lr = 0x823DBD7C;
	sub_823CD250(ctx, base);
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

DEFINE_REX_FUNC(sub_823DC3F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// beq cr6,0x823dc4a0
	if (ctx.cr6.eq) goto loc_823DC4A0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x823dc454
	if (ctx.cr6.eq) goto loc_823DC454;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x823dc454
	if (ctx.cr6.eq) goto loc_823DC454;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823dc64c
	if (!ctx.cr6.lt) goto loc_823DC64C;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823DC440:
	// lfs f0,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823dc440
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DC440;
	// b 0x823dc64c
	goto loc_823DC64C;
loc_823DC454:
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823dc64c
	if (!ctx.cr6.lt) goto loc_823DC64C;
	// subf r10,r4,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r4.u64;
	// addi r11,r4,-8
	ctx.r11.s64 = ctx.r4.s64 + -8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823DC474:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmuls f0,f12,f12
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfsu f0,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823dc474
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DC474;
	// b 0x823dc64c
	goto loc_823DC64C;
loc_823DC4A0:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x823dc534
	if (ctx.cr6.eq) goto loc_823DC534;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x823dc534
	if (ctx.cr6.eq) goto loc_823DC534;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823dc64c
	if (!ctx.cr6.lt) goto loc_823DC64C;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f0,-23528(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -23528);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-8264
	ctx.r11.s64 = ctx.r11.s64 + -8264;
loc_823DC4E0:
	// lfs f13,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f12.u64);
	// lwz r8,-44(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// std r8,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r8.u64);
	// lfd f12,-40(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfsx f11,r8,r11
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r8,r9
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmadds f13,f10,f13,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f11.f64)));
	// stfsu f13,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823dc4e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DC4E0;
	// b 0x823dc64c
	goto loc_823DC64C;
loc_823DC534:
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823dc64c
	if (!ctx.cr6.lt) goto loc_823DC64C;
	// subf r10,r4,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r4.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r4,-8
	ctx.r11.s64 = ctx.r4.s64 + -8;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f0,-23528(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -23528);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r10,r10,-8264
	ctx.r10.s64 = ctx.r10.s64 + -8264;
loc_823DC564:
	// lfs f13,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f12,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f10.u64);
	// lwz r6,-36(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// fctiwz f10,f12
	ctx.f10.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f10,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f10.u64);
	// lwz r5,-36(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// fctiwz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f10.u64);
	// lwz r4,-36(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r4,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.r4.u64);
	// lfd f10,-48(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// std r6,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.r6.u64);
	// lfd f9,-32(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// std r5,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r5.u64);
	// lfd f8,-24(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lfsx f7,r4,r10
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fsubs f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfsx f10,r4,r9
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// fmadds f11,f10,f11,f7
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, ctx.f7.f64)));
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// frsp f10,f9
	ctx.f10.f64 = double(float(ctx.f9.f64));
	// lfsx f11,r5,r10
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f9,r5,r8
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fmadds f12,f9,f12,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f11.f64)));
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfsx f12,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfsx f11,r9,r7
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmadds f13,f11,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f12.f64)));
	// stfsu f13,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823dc564
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DC564;
loc_823DC64C:
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E3430) {
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
	// bge cr6,0x823e3504
	if (!ctx.cr6.lt) goto loc_823E3504;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-13044(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -13044);
	ctx.f0.f64 = double(temp.f32);
loc_823E348C:
	// lbz r10,7(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lbz r10,6(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lbz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,8(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lbzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x823e348c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E348C;
loc_823E3504:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e3520
	if (ctx.cr6.eq) goto loc_823E3520;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82413d40
	ctx.lr = 0x823E3520;
	sub_82413D40(ctx, base);
loc_823E3520:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e353c
	if (ctx.cr6.eq) goto loc_823E353C;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x823dc3f0
	ctx.lr = 0x823E353C;
	sub_823DC3F0(ctx, base);
loc_823E353C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E44D0) {
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
	// bge cr6,0x823e4614
	if (!ctx.cr6.lt) goto loc_823E4614;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f0,-7204(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -7204);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,-31056(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -31056);
	ctx.f13.f64 = double(temp.f32);
loc_823E4534:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r8,r10,28,4,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFC0;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// rlwinm r5,r10,18,14,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3FFC0;
	// srawi r10,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 6;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// srawi r9,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 6;
	// addi r7,r7,512
	ctx.r7.s64 = ctx.r7.s64 + 512;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// srawi r8,r8,6
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 6;
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// addi r5,r5,512
	ctx.r5.s64 = ctx.r5.s64 + 512;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r5,r5,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,8(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,0(r6)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,4(r6)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// rlwinm r10,r10,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,12(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x823e4534
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E4534;
loc_823E4614:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e4630
	if (ctx.cr6.eq) goto loc_823E4630;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82413d40
	ctx.lr = 0x823E4630;
	sub_82413D40(ctx, base);
loc_823E4630:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e464c
	if (ctx.cr6.eq) goto loc_823E464C;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x823dc3f0
	ctx.lr = 0x823E464C;
	sub_823DC3F0(ctx, base);
loc_823E464C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E95B0) {
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
	ctx.lr = 0x823E95B8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,24(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r6,32(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lhz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x823e9948
	if (ctx.cr6.lt) goto loc_823E9948;
	// beq cr6,0x823e98b8
	if (ctx.cr6.eq) goto loc_823E98B8;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x823e9800
	if (ctx.cr6.lt) goto loc_823E9800;
	// beq cr6,0x823e96a4
	if (ctx.cr6.eq) goto loc_823E96A4;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x823e9608
	if (ctx.cr6.eq) goto loc_823E9608;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x823e9b1c
	goto loc_823E9B1C;
loc_823E9608:
	// lwz r10,52(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 52);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lhz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 8);
	// divwu r28,r9,r10
	r28.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823e9628
	if (!ctx.cr6.gt) goto loc_823E9628;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_823E9628:
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x823e969c
	if (ctx.cr6.eq) goto loc_823E969C;
loc_823E9634:
	// lhz r11,10(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 10);
	// li r29,0
	r29.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823e9690
	if (ctx.cr0.eq) goto loc_823E9690;
	// li r30,0
	r30.s64 = 0;
loc_823E9648:
	// lwz r11,56(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 56);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwzx r31,r11,r30
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,48(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x823e8d70
	ctx.lr = 0x823E9668;
	sub_823E8D70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823e9b1c
	if (ctx.cr0.lt) goto loc_823E9B1C;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lhz r10,10(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 10);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// add r26,r11,r26
	r26.u64 = ctx.r11.u64 + r26.u64;
	// blt cr6,0x823e9648
	if (ctx.cr6.lt) goto loc_823E9648;
loc_823E9690:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(r27.u32, r28.u32, ctx.xer);
	// blt cr6,0x823e9634
	if (ctx.cr6.lt) goto loc_823E9634;
loc_823E969C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823e9b1c
	goto loc_823E9B1C;
loc_823E96A4:
	// lhz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823e96b8
	if (!ctx.cr6.gt) goto loc_823E96B8;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_823E96B8:
	// lhz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 4);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x823e9774
	if (!ctx.cr6.eq) goto loc_823E9774;
	// lhz r11,6(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 6);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x823e9774
	if (!ctx.cr6.eq) goto loc_823E9774;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e9940
	if (ctx.cr6.eq) goto loc_823E9940;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r11,r5,32
	ctx.r11.s64 = ctx.r5.s64 + 32;
	// subf r9,r5,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r5.u64;
loc_823E96E8:
	// lfs f0,-32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,-16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f0,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f0,-28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f0,-12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lfs f0,-24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// lfs f0,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 44, temp.u32);
	// lfs f0,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 48, temp.u32);
	// lfs f0,-20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 52, temp.u32);
	// lfs f0,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 56, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 60, temp.u32);
	// lfs f0,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stfsu f0,64(r10)
	ea = 64 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823e96e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E96E8;
	// b 0x823e9940
	goto loc_823E9940;
loc_823E9774:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e9940
	if (ctx.cr6.eq) goto loc_823E9940;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r6,-4
	ctx.r7.s64 = ctx.r6.s64 + -4;
loc_823E9788:
	// lhz r11,6(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 6);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823e97f4
	if (ctx.cr0.eq) goto loc_823E97F4;
loc_823E9798:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823e97e4
	if (ctx.cr6.eq) goto loc_823E97E4;
loc_823E97A4:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x823e97cc
	if (ctx.cr6.gt) goto loc_823E97CC;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bgt cr6,0x823e97cc
	if (ctx.cr6.gt) goto loc_823E97CC;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// b 0x823e97d0
	goto loc_823E97D0;
loc_823E97CC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823E97D0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// lhz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823e97a4
	if (ctx.cr6.lt) goto loc_823E97A4;
loc_823E97E4:
	// lhz r11,6(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 6);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823e9798
	if (ctx.cr6.lt) goto loc_823E9798;
loc_823E97F4:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x823e9788
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E9788;
	// b 0x823e9940
	goto loc_823E9940;
loc_823E9800:
	// lhz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823e9814
	if (!ctx.cr6.gt) goto loc_823E9814;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_823E9814:
	// lhz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 4);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x823e982c
	if (!ctx.cr6.eq) goto loc_823E982C;
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 6);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x823e995c
	if (ctx.cr6.eq) goto loc_823E995C;
loc_823E982C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e9940
	if (ctx.cr6.eq) goto loc_823E9940;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r7,r6,-4
	ctx.r7.s64 = ctx.r6.s64 + -4;
loc_823E9840:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e98ac
	if (ctx.cr6.eq) goto loc_823E98AC;
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 6);
loc_823E9850:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823e989c
	if (ctx.cr6.eq) goto loc_823E989C;
loc_823E985C:
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bgt cr6,0x823e9884
	if (ctx.cr6.gt) goto loc_823E9884;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x823e9884
	if (ctx.cr6.gt) goto loc_823E9884;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// b 0x823e9888
	goto loc_823E9888;
loc_823E9884:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823E9888:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 6);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823e985c
	if (ctx.cr6.lt) goto loc_823E985C;
loc_823E989C:
	// lhz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823e9850
	if (ctx.cr6.lt) goto loc_823E9850;
loc_823E98AC:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x823e9840
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E9840;
	// b 0x823e9940
	goto loc_823E9940;
loc_823E98B8:
	// lhz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 8);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823e98cc
	if (!ctx.cr6.gt) goto loc_823E98CC;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_823E98CC:
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 6);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x823e995c
	if (ctx.cr6.eq) goto loc_823E995C;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e9940
	if (ctx.cr6.eq) goto loc_823E9940;
	// addi r7,r6,-4
	ctx.r7.s64 = ctx.r6.s64 + -4;
loc_823E98E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823e9934
	if (ctx.cr6.eq) goto loc_823E9934;
loc_823E98F4:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x823e9904
	if (!ctx.cr6.gt) goto loc_823E9904;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x823e9920
	goto loc_823E9920;
loc_823E9904:
	// clrlwi r10,r8,30
	ctx.r10.u64 = ctx.r8.u32 & 0x3;
	// rlwinm r9,r8,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
loc_823E9920:
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 6);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823e98f4
	if (ctx.cr6.lt) goto loc_823E98F4;
loc_823E9934:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x823e98e8
	if (ctx.cr6.lt) goto loc_823E98E8;
loc_823E9940:
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// b 0x823e995c
	goto loc_823E995C;
loc_823E9948:
	// lhz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 8);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823e995c
	if (!ctx.cr6.gt) goto loc_823E995C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_823E995C:
	// lhz r10,2(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 2);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x823e99ec
	if (ctx.cr6.eq) goto loc_823E99EC;
	// lwz r11,52(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 52);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// beq cr6,0x823e99ac
	if (ctx.cr6.eq) goto loc_823E99AC;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x823e99e8
	if (!ctx.cr6.eq) goto loc_823E99E8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e99e8
	if (ctx.cr6.eq) goto loc_823E99E8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// subf r11,r6,r26
	ctx.r11.u64 = r26.u64 - ctx.r6.u64;
loc_823E9994:
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
	// bdnz 0x823e9994
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E9994;
	// b 0x823e99e8
	goto loc_823E99E8;
loc_823E99AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e99e8
	if (ctx.cr6.eq) goto loc_823E99E8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// subf r9,r6,r26
	ctx.r9.u64 = r26.u64 - ctx.r6.u64;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
loc_823E99C8:
	// lfsx f13,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x823e99dc
	if (!ctx.cr6.eq) goto loc_823E99DC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823E99DC:
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823e99c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E99C8;
loc_823E99E8:
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
loc_823E99EC:
	// lhz r9,8(r24)
	ctx.r9.u64 = REX_LOAD_U16(r24.u32 + 8);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x823e9acc
	if (ctx.cr0.eq) goto loc_823E9ACC;
	// lhz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x823e9a10
	if (ctx.cr6.eq) goto loc_823E9A10;
	// lhz r11,6(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 6);
	// lhz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 4);
	// b 0x823e9a18
	goto loc_823E9A18;
loc_823E9A10:
	// lhz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 4);
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 6);
loc_823E9A18:
	// clrlwi. r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x823e9acc
	if (ctx.cr0.eq) goto loc_823E9ACC;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x823e9a34
	if (!ctx.cr6.eq) goto loc_823E9A34;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r4,r9,9268
	ctx.r4.s64 = ctx.r9.s64 + 9268;
	// b 0x823e9a3c
	goto loc_823E9A3C;
loc_823E9A34:
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r4,r9,9252
	ctx.r4.s64 = ctx.r9.s64 + 9252;
loc_823E9A3C:
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// mullw. r8,r10,r3
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r7,r9,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// beq 0x823e9ac8
	if (ctx.cr0.eq) goto loc_823E9AC8;
	// mullw r9,r8,r7
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// mullw r5,r8,r11
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
loc_823E9A54:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subf r5,r11,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r11.u64;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823e9a90
	if (!ctx.cr6.gt) goto loc_823E9A90;
	// subf r31,r11,r7
	r31.u64 = ctx.r7.u64 - ctx.r11.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_823E9A74:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r31,r10,2,28,29
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// add r30,r10,r9
	r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r31,r4
	r31.u64 = REX_LOAD_U32(r31.u32 + ctx.r4.u32);
	// stwx r31,r30,r6
	REX_STORE_U32(r30.u32 + ctx.r6.u32, r31.u32);
	// bdnz 0x823e9a74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E9A74;
loc_823E9A90:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e9ac0
	if (ctx.cr6.eq) goto loc_823E9AC0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823E9AA0:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r31,r10,r5
	r31.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r30,r10,r9
	r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r31,r26
	r31.u64 = REX_LOAD_U32(r31.u32 + r26.u32);
	// stwx r31,r30,r6
	REX_STORE_U32(r30.u32 + ctx.r6.u32, r31.u32);
	// bdnz 0x823e9aa0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E9AA0;
loc_823E9AC0:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823e9a54
	if (!ctx.cr6.eq) goto loc_823E9A54;
loc_823E9AC8:
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
loc_823E9ACC:
	// lwz r10,44(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 44);
	// lhz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 12);
	// mullw r7,r10,r3
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823e9ae4
	if (!ctx.cr6.gt) goto loc_823E9AE4;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_823E9AE4:
	// lwz r10,28(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823e9afc
	if (!ctx.cr6.eq) goto loc_823E9AFC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x823e9b1c
	goto loc_823E9B1C;
loc_823E9AFC:
	// lhz r11,10(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 10);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r4,r11,r22
	ctx.r4.u64 = ctx.r11.u64 + r22.u64;
	// bctrl 
	ctx.lr = 0x823E9B14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_823E9B1C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_823FE960) {
	REX_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r8,112(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x823f6d28
	sub_823F6D28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823FEAD8) {
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
	// bl 0x822d4e54
	ctx.lr = 0x823FEAE0;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,460(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 460);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FEB04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823FEB24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823FEB44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FEB64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823FEB84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823FEBA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FEBC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823FEBE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823FEC04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FEC24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,256
	ctx.r10.s64 = 256;
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r3,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r26,-75
	r26.s64 = -4915200;
	// ori r7,r9,65153
	ctx.r7.u64 = ctx.r9.u64 | 65153;
	// lis r30,-5
	r30.s64 = -327680;
	// lis r3,-34
	ctx.r3.s64 = -2228224;
	// lis r27,-87
	r27.s64 = -5701632;
	// lis r4,-23
	ctx.r4.s64 = -1507328;
	// lis r5,-9
	ctx.r5.s64 = -589824;
	// lis r6,-25
	ctx.r6.s64 = -1638400;
	// lis r28,-76
	r28.s64 = -4980736;
	// lis r29,-66
	r29.s64 = -4325376;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,0
	ctx.r9.s64 = 0;
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// mr r19,r7
	r19.u64 = ctx.r7.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r26,r26,56095
	r26.u64 = r26.u64 | 56095;
	// ori r30,r30,47199
	r30.u64 = r30.u64 | 47199;
	// ori r3,r3,44063
	ctx.r3.u64 = ctx.r3.u64 | 44063;
	// ori r27,r27,24607
	r27.u64 = r27.u64 | 24607;
	// ori r4,r4,42015
	ctx.r4.u64 = ctx.r4.u64 | 42015;
	// ori r5,r5,2335
	ctx.r5.u64 = ctx.r5.u64 | 2335;
	// ori r6,r6,60767
	ctx.r6.u64 = ctx.r6.u64 | 60767;
	// ori r28,r28,40991
	r28.u64 = r28.u64 | 40991;
	// ori r29,r29,12319
	r29.u64 = r29.u64 | 12319;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// li r17,63
	r17.s64 = 63;
	// ori r10,r10,257
	ctx.r10.u64 = ctx.r10.u64 | 257;
	// ori r16,r9,65280
	r16.u64 = ctx.r9.u64 | 65280;
loc_823FECBC:
	// cmpwi cr6,r8,192
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 192, ctx.xer);
	// bge cr6,0x823feccc
	if (!ctx.cr6.lt) goto loc_823FECCC;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// b 0x823fecd4
	goto loc_823FECD4;
loc_823FECCC:
	// divw r9,r29,r17
	ctx.r9.u64 = uint32_t((r17.s32 && !(r29.s32 == INT32_MIN && r17.s32 == -1)) ? r29.s32 / r17.s32 : 0);
	// subfic r9,r9,22464
	ctx.xer.ca = ctx.r9.u32 <= 22464;
	ctx.r9.u64 = static_cast<uint64_t>(22464) - ctx.r9.u64;
loc_823FECD4:
	// lwz r15,24(r31)
	r15.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r8,192
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 192, ctx.xer);
	// stwx r9,r11,r15
	REX_STORE_U32(ctx.r11.u32 + r15.u32, ctx.r9.u32);
	// bge cr6,0x823fecec
	if (!ctx.cr6.lt) goto loc_823FECEC;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// b 0x823fecf4
	goto loc_823FECF4;
loc_823FECEC:
	// divw r9,r28,r17
	ctx.r9.u64 = uint32_t((r17.s32 && !(r28.s32 == INT32_MIN && r17.s32 == -1)) ? r28.s32 / r17.s32 : 0);
	// subfic r9,r9,25728
	ctx.xer.ca = ctx.r9.u32 <= 25728;
	ctx.r9.u64 = static_cast<uint64_t>(25728) - ctx.r9.u64;
loc_823FECF4:
	// lwz r15,28(r31)
	r15.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r8,192
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 192, ctx.xer);
	// stwx r9,r11,r15
	REX_STORE_U32(ctx.r11.u32 + r15.u32, ctx.r9.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwzx r15,r11,r9
	r15.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mullw r15,r15,r10
	r15.s64 = int64_t(r15.s32) * int64_t(ctx.r10.s32);
	// rlwinm r15,r15,16,16,31
	r15.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 16) & 0xFFFF;
	// stwx r15,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r15.u32);
	// bge cr6,0x823fed20
	if (!ctx.cr6.lt) goto loc_823FED20;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// b 0x823fed30
	goto loc_823FED30;
loc_823FED20:
	// lis r9,0
	ctx.r9.s64 = 0;
	// divw r15,r6,r17
	r15.u64 = uint32_t((r17.s32 && !(ctx.r6.s32 == INT32_MIN && r17.s32 == -1)) ? ctx.r6.s32 / r17.s32 : 0);
	// ori r9,r9,47232
	ctx.r9.u64 = ctx.r9.u64 | 47232;
	// subf r9,r15,r9
	ctx.r9.u64 = ctx.r9.u64 - r15.u64;
loc_823FED30:
	// lwz r15,32(r31)
	r15.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r8,192
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 192, ctx.xer);
	// stwx r9,r11,r15
	REX_STORE_U32(ctx.r11.u32 + r15.u32, ctx.r9.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwzx r15,r11,r9
	r15.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mullw r15,r15,r10
	r15.s64 = int64_t(r15.s32) * int64_t(ctx.r10.s32);
	// rlwinm r15,r15,16,16,31
	r15.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 16) & 0xFFFF;
	// stwx r15,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r15.u32);
	// bge cr6,0x823fed5c
	if (!ctx.cr6.lt) goto loc_823FED5C;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// b 0x823fed64
	goto loc_823FED64;
loc_823FED5C:
	// divw r9,r5,r17
	ctx.r9.u64 = uint32_t((r17.s32 && !(ctx.r5.s32 == INT32_MIN && r17.s32 == -1)) ? ctx.r5.s32 / r17.s32 : 0);
	// subf r9,r9,r16
	ctx.r9.u64 = r16.u64 - ctx.r9.u64;
loc_823FED64:
	// lwz r15,36(r31)
	r15.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r8,192
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 192, ctx.xer);
	// stwx r9,r11,r15
	REX_STORE_U32(ctx.r11.u32 + r15.u32, ctx.r9.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwzx r15,r11,r9
	r15.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mullw r15,r15,r10
	r15.s64 = int64_t(r15.s32) * int64_t(ctx.r10.s32);
	// rlwinm r15,r15,16,16,31
	r15.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 16) & 0xFFFF;
	// stwx r15,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r15.u32);
	// bge cr6,0x823fed90
	if (!ctx.cr6.lt) goto loc_823FED90;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// b 0x823feda0
	goto loc_823FEDA0;
loc_823FED90:
	// lis r9,0
	ctx.r9.s64 = 0;
	// divw r15,r4,r17
	r15.u64 = uint32_t((r17.s32 && !(ctx.r4.s32 == INT32_MIN && r17.s32 == -1)) ? ctx.r4.s32 / r17.s32 : 0);
	// ori r9,r9,60672
	ctx.r9.u64 = ctx.r9.u64 | 60672;
	// subf r9,r15,r9
	ctx.r9.u64 = ctx.r9.u64 - r15.u64;
loc_823FEDA0:
	// lwz r15,40(r31)
	r15.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r8,192
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 192, ctx.xer);
	// stwx r9,r11,r15
	REX_STORE_U32(ctx.r11.u32 + r15.u32, ctx.r9.u32);
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwzx r15,r11,r9
	r15.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mullw r15,r15,r10
	r15.s64 = int64_t(r15.s32) * int64_t(ctx.r10.s32);
	// rlwinm r15,r15,16,16,31
	r15.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 16) & 0xFFFF;
	// stwx r15,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r15.u32);
	// bge cr6,0x823fedcc
	if (!ctx.cr6.lt) goto loc_823FEDCC;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// b 0x823fedd4
	goto loc_823FEDD4;
loc_823FEDCC:
	// divw r9,r27,r17
	ctx.r9.u64 = uint32_t((r17.s32 && !(r27.s32 == INT32_MIN && r17.s32 == -1)) ? r27.s32 / r17.s32 : 0);
	// subfic r9,r9,29568
	ctx.xer.ca = ctx.r9.u32 <= 29568;
	ctx.r9.u64 = static_cast<uint64_t>(29568) - ctx.r9.u64;
loc_823FEDD4:
	// lwz r15,44(r31)
	r15.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r8,192
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 192, ctx.xer);
	// stwx r9,r11,r15
	REX_STORE_U32(ctx.r11.u32 + r15.u32, ctx.r9.u32);
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwzx r15,r11,r9
	r15.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mullw r15,r15,r10
	r15.s64 = int64_t(r15.s32) * int64_t(ctx.r10.s32);
	// rlwinm r15,r15,16,16,31
	r15.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 16) & 0xFFFF;
	// stwx r15,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r15.u32);
	// bge cr6,0x823fee00
	if (!ctx.cr6.lt) goto loc_823FEE00;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// b 0x823fee10
	goto loc_823FEE10;
loc_823FEE00:
	// lis r9,0
	ctx.r9.s64 = 0;
	// divw r15,r3,r17
	r15.u64 = uint32_t((r17.s32 && !(ctx.r3.s32 == INT32_MIN && r17.s32 == -1)) ? ctx.r3.s32 / r17.s32 : 0);
	// ori r9,r9,39936
	ctx.r9.u64 = ctx.r9.u64 | 39936;
	// subf r9,r15,r9
	ctx.r9.u64 = ctx.r9.u64 - r15.u64;
loc_823FEE10:
	// lwz r15,48(r31)
	r15.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r8,192
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 192, ctx.xer);
	// stwx r9,r11,r15
	REX_STORE_U32(ctx.r11.u32 + r15.u32, ctx.r9.u32);
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwzx r15,r11,r9
	r15.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mullw r15,r15,r10
	r15.s64 = int64_t(r15.s32) * int64_t(ctx.r10.s32);
	// rlwinm r15,r15,16,16,31
	r15.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 16) & 0xFFFF;
	// stwx r15,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r15.u32);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// blt cr6,0x823fee3c
	if (ctx.cr6.lt) goto loc_823FEE3C;
	// mr r9,r16
	ctx.r9.u64 = r16.u64;
loc_823FEE3C:
	// lwz r15,52(r31)
	r15.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r8,192
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 192, ctx.xer);
	// stwx r9,r11,r15
	REX_STORE_U32(ctx.r11.u32 + r15.u32, ctx.r9.u32);
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwzx r15,r11,r9
	r15.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mullw r15,r15,r10
	r15.s64 = int64_t(r15.s32) * int64_t(ctx.r10.s32);
	// rlwinm r15,r15,16,16,31
	r15.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 16) & 0xFFFF;
	// stwx r15,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r15.u32);
	// bge cr6,0x823fee68
	if (!ctx.cr6.lt) goto loc_823FEE68;
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// b 0x823fee78
	goto loc_823FEE78;
loc_823FEE68:
	// lis r9,0
	ctx.r9.s64 = 0;
	// divw r15,r30,r17
	r15.u64 = uint32_t((r17.s32 && !(r30.s32 == INT32_MIN && r17.s32 == -1)) ? r30.s32 / r17.s32 : 0);
	// ori r9,r9,63936
	ctx.r9.u64 = ctx.r9.u64 | 63936;
	// subf r9,r15,r9
	ctx.r9.u64 = ctx.r9.u64 - r15.u64;
loc_823FEE78:
	// lwz r15,56(r31)
	r15.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r8,192
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 192, ctx.xer);
	// stwx r9,r11,r15
	REX_STORE_U32(ctx.r11.u32 + r15.u32, ctx.r9.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwzx r15,r11,r9
	r15.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mullw r15,r15,r10
	r15.s64 = int64_t(r15.s32) * int64_t(ctx.r10.s32);
	// rlwinm r15,r15,16,16,31
	r15.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 16) & 0xFFFF;
	// stwx r15,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r15.u32);
	// bge cr6,0x823feea4
	if (!ctx.cr6.lt) goto loc_823FEEA4;
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
	// b 0x823feeac
	goto loc_823FEEAC;
loc_823FEEA4:
	// divw r9,r26,r17
	ctx.r9.u64 = uint32_t((r17.s32 && !(r26.s32 == INT32_MIN && r17.s32 == -1)) ? r26.s32 / r17.s32 : 0);
	// subfic r9,r9,32448
	ctx.xer.ca = ctx.r9.u32 <= 32448;
	ctx.r9.u64 = static_cast<uint64_t>(32448) - ctx.r9.u64;
loc_823FEEAC:
	// lwz r15,60(r31)
	r15.u64 = REX_LOAD_U32(r31.u32 + 60);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r25,r25,-223
	r25.s64 = r25.s64 + -223;
	// addi r29,r29,22464
	r29.s64 = r29.s64 + 22464;
	// addi r24,r24,-206
	r24.s64 = r24.s64 + -206;
	// addi r28,r28,25728
	r28.s64 = r28.s64 + 25728;
	// stwx r9,r11,r15
	REX_STORE_U32(ctx.r11.u32 + r15.u32, ctx.r9.u32);
	// addi r23,r23,-94
	r23.s64 = r23.s64 + -94;
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 60);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r15,0(r9)
	r15.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mullw r15,r15,r10
	r15.s64 = int64_t(r15.s32) * int64_t(ctx.r10.s32);
	// rlwinm r15,r15,16,16,31
	r15.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 16) & 0xFFFF;
	// addi r6,r6,8217
	ctx.r6.s64 = ctx.r6.s64 + 8217;
	// addi r5,r5,3060
	ctx.r5.s64 = ctx.r5.s64 + 3060;
	// stw r15,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r15.u32);
	// addi r22,r22,-24
	r22.s64 = r22.s64 + -24;
	// addi r4,r4,7632
	ctx.r4.s64 = ctx.r4.s64 + 7632;
	// addi r21,r21,-186
	r21.s64 = r21.s64 + -186;
	// addi r27,r27,29568
	r27.s64 = r27.s64 + 29568;
	// addi r20,r20,-132
	r20.s64 = r20.s64 + -132;
	// addi r3,r3,11376
	ctx.r3.s64 = ctx.r3.s64 + 11376;
	// addi r19,r19,-7
	r19.s64 = r19.s64 + -7;
	// addi r30,r30,1461
	r30.s64 = r30.s64 + 1461;
	// addi r18,r18,-171
	r18.s64 = r18.s64 + -171;
	// addi r26,r26,25308
	r26.s64 = r26.s64 + 25308;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823fecbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FECBC;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ea4
	return;
}

DEFINE_REX_FUNC(sub_82412BF8) {
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
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82412c44
	if (ctx.cr6.lt) goto loc_82412C44;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,16984
	ctx.r6.s64 = ctx.r11.s64 + 16984;
	// addi r5,r10,16912
	ctx.r5.s64 = ctx.r10.s64 + 16912;
	// addi r4,r9,16880
	ctx.r4.s64 = ctx.r9.s64 + 16880;
	// li r7,338
	ctx.r7.s64 = 338;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x82412C44;
	sub_8240E308(ctx, base);
loc_82412C44:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
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

DEFINE_REX_FUNC(sub_82412E60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82412E68;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,1504(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1504);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lwz r11,1500(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1500);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// lwz r10,1496(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1496);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r7,1504(r3)
	REX_STORE_U32(ctx.r3.u32 + 1504, ctx.r7.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r6,r9,-26712
	ctx.r6.s64 = ctx.r9.s64 + -26712;
	// addi r5,r8,21804
	ctx.r5.s64 = ctx.r8.s64 + 21804;
	// subfic r4,r11,8192
	ctx.xer.ca = ctx.r11.u32 <= 8192;
	ctx.r4.u64 = static_cast<uint64_t>(8192) - ctx.r11.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8247da50
	ctx.lr = 0x82412EA8;
	sub_8247DA50(ctx, base);
	// lwz r11,1500(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1500);
	// lwz r10,1496(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1496);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r11,1500(r31)
	REX_STORE_U32(r31.u32 + 1500, ctx.r11.u32);
	// subfic r4,r11,8192
	ctx.xer.ca = ctx.r11.u32 <= 8192;
	ctx.r4.u64 = static_cast<uint64_t>(8192) - ctx.r11.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822e16d0
	ctx.lr = 0x82412ECC;
	sub_822E16D0(ctx, base);
	// lwz r11,1500(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1500);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,1500(r31)
	REX_STORE_U32(r31.u32 + 1500, ctx.r11.u32);
	// cmpwi cr6,r11,8192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8192, ctx.xer);
	// blt cr6,0x82412f04
	if (ctx.cr6.lt) goto loc_82412F04;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-26832
	ctx.r6.s64 = ctx.r11.s64 + -26832;
	// addi r5,r10,-26744
	ctx.r5.s64 = ctx.r10.s64 + -26744;
	// addi r4,r9,16880
	ctx.r4.s64 = ctx.r9.s64 + 16880;
	// li r7,1585
	ctx.r7.s64 = 1585;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x82412F04;
	sub_8240E308(ctx, base);
loc_82412F04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82416248) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e78
	ctx.lr = 0x82416250;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f30
	ctx.lr = 0x82416258;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
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
	// beq cr6,0x82416284
	if (ctx.cr6.eq) goto loc_82416284;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82413040
	ctx.lr = 0x82416280;
	sub_82413040(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82416284:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824162a0
	if (ctx.cr6.eq) goto loc_824162A0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413dd0
	ctx.lr = 0x8241629C;
	sub_82413DD0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_824162A0:
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
	// lfs f31,1996(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 1996);
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
	// bne 0x82416310
	if (!ctx.cr0.eq) goto loc_82416310;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x82416318
	goto loc_82416318;
loc_82416310:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_82416318:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82416330
	if (ctx.cr6.eq) goto loc_82416330;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc658
	ctx.lr = 0x82416330;
	sub_823DC658(ctx, base);
loc_82416330:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824166c4
	if (!ctx.cr6.gt) goto loc_824166C4;
	// add r10,r30,r29
	ctx.r10.u64 = r30.u64 + r29.u64;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// lfd f11,-9120(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r7.u32 + -9120);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lfs f4,-31056(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -31056);
	ctx.f4.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lfs f12,16288(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16288);
	ctx.f12.f64 = double(temp.f32);
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// lfs f13,-7224(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -7224);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r25,r30,2,0,29
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,17176(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 17176);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f10,27992(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 27992);
	ctx.f10.f64 = double(temp.f32);
	// lfs f3,16172(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16172);
	ctx.f3.f64 = double(temp.f32);
	// rlwinm r30,r30,4,0,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f5,-7212(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -7212);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// subf r29,r25,r28
	r29.u64 = r28.u64 - r25.u64;
loc_824163A4:
	// add r10,r27,r11
	ctx.r10.u64 = r27.u64 + ctx.r11.u64;
	// lfsx f9,r27,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// fadds f9,f9,f29
	ctx.f9.f64 = double(float(ctx.f9.f64 + f29.f64));
	// rlwinm r7,r26,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xC;
	// lwz r6,92(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f8,-8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 + f31.f64));
	// lfs f6,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f7,f7,f30
	ctx.f7.f64 = double(float(ctx.f7.f64 + f30.f64));
	// fadds f6,f6,f28
	ctx.f6.f64 = double(float(ctx.f6.f64 + f28.f64));
	// lfsx f2,r7,r24
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + r24.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f7,f7,f5
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f6,f6,f3
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fadds f1,f9,f2
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// fadds f27,f8,f2
	f27.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// fadds f26,f7,f2
	f26.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// fadds f2,f6,f2
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f2.f64));
	// fctiwz f1,f1
	ctx.f1.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f1,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f1,f27
	ctx.f1.s64 = std::isnan(f27.f64) ? int64_t(0x80000000U) : (f27.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f27.f64));
	// stfd f1,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// fctiwz f1,f26
	ctx.f1.s64 = std::isnan(f26.f64) ? int64_t(0x80000000U) : (f26.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f26.f64));
	// stfd f1,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f1.u64);
	// fctiwz f2,f2
	ctx.f2.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f2,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f2.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r6,100(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// beq cr6,0x824165dc
	if (ctx.cr6.eq) goto loc_824165DC;
	// extsw r7,r4
	ctx.r7.s64 = ctx.r4.s32;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// extsw r28,r3
	r28.s64 = ctx.r3.s32;
	// std r7,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f2,104(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r28,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, r28.u64);
	// lfd f1,112(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f1,f1
	ctx.f1.f64 = double(ctx.f1.s64);
	// extsw r7,r5
	ctx.r7.s64 = ctx.r5.s32;
	// frsp f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// std r7,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lfd f31,120(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f2,f2
	ctx.f2.f64 = double(ctx.f2.s64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsw r28,r6
	r28.s64 = ctx.r6.s32;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// std r28,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, r28.u64);
	// lfs f30,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	f30.f64 = double(temp.f32);
	// fsubs f8,f8,f1
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f1.f64));
	// frsp f2,f2
	ctx.f2.f64 = double(float(ctx.f2.f64));
	// fmuls f8,f8,f10
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fsubs f7,f7,f2
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f2.f64));
	// fmadds f2,f8,f0,f30
	ctx.f2.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, f30.f64)));
	// stfs f2,16(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f2,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f2,f8,f13,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f2.f64)));
	// stfs f2,16(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// fcfid f2,f31
	ctx.f2.f64 = double(f31.s64);
	// lfs f1,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f7,f7,f10
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// fmadds f1,f8,f12,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f1.f64)));
	// stfs f1,16(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// frsp f2,f2
	ctx.f2.f64 = double(float(ctx.f2.f64));
	// lfs f1,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f1,f7,f0,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f1.f64)));
	// stfs f1,20(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fsubs f9,f9,f2
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f2.f64));
	// lfs f2,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f2,f7,f13,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f2.f64)));
	// stfs f2,20(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfs f2,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f9,f9,f10
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmadds f2,f7,f12,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f2.f64)));
	// stfs f2,20(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// fmul f8,f8,f11
	ctx.f8.f64 = ctx.f8.f64 * ctx.f11.f64;
	// lfs f2,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f2,f9,f0,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f2.f64)));
	// stfs f2,24(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmul f7,f7,f11
	ctx.f7.f64 = ctx.f7.f64 * ctx.f11.f64;
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// frsp f31,f8
	f31.f64 = double(float(ctx.f8.f64));
	// lfs f8,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f9,f13,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f8.f64)));
	// stfs f8,24(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// frsp f30,f7
	f30.f64 = double(float(ctx.f7.f64));
	// lfd f7,128(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f8,f7
	ctx.f8.f64 = double(ctx.f7.s64);
	// lfs f7,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f7,f9,f12,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f7.f64)));
	// fmul f9,f9,f11
	ctx.f9.f64 = ctx.f9.f64 * ctx.f11.f64;
	// stfs f7,24(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// frsp f29,f9
	f29.f64 = double(float(ctx.f9.f64));
	// lfs f7,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f9,f6,f8
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// addi r7,r10,28
	ctx.r7.s64 = ctx.r10.s64 + 28;
	// fmuls f9,f9,f4
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// fmadds f8,f9,f0,f7
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f7.f64)));
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
loc_824165DC:
	// cmpwi cr6,r3,1023
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1023, ctx.xer);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// blt cr6,0x824165ec
	if (ctx.cr6.lt) goto loc_824165EC;
	// li r10,1023
	ctx.r10.s64 = 1023;
loc_824165EC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82416604
	if (!ctx.cr6.gt) goto loc_82416604;
	// cmpwi cr6,r3,1023
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1023, ctx.xer);
	// blt cr6,0x82416608
	if (ctx.cr6.lt) goto loc_82416608;
	// li r3,1023
	ctx.r3.s64 = 1023;
	// b 0x82416608
	goto loc_82416608;
loc_82416604:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82416608:
	// cmpwi cr6,r4,1023
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1023, ctx.xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// blt cr6,0x82416618
	if (ctx.cr6.lt) goto loc_82416618;
	// li r10,1023
	ctx.r10.s64 = 1023;
loc_82416618:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82416630
	if (!ctx.cr6.gt) goto loc_82416630;
	// cmpwi cr6,r4,1023
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1023, ctx.xer);
	// blt cr6,0x82416634
	if (ctx.cr6.lt) goto loc_82416634;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// b 0x82416634
	goto loc_82416634;
loc_82416630:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82416634:
	// cmpwi cr6,r5,1023
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1023, ctx.xer);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// blt cr6,0x82416644
	if (ctx.cr6.lt) goto loc_82416644;
	// li r10,1023
	ctx.r10.s64 = 1023;
loc_82416644:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8241665c
	if (!ctx.cr6.gt) goto loc_8241665C;
	// cmpwi cr6,r5,1023
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1023, ctx.xer);
	// blt cr6,0x82416660
	if (ctx.cr6.lt) goto loc_82416660;
	// li r5,1023
	ctx.r5.s64 = 1023;
	// b 0x82416660
	goto loc_82416660;
loc_8241665C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82416660:
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// blt cr6,0x82416670
	if (ctx.cr6.lt) goto loc_82416670;
	// li r10,3
	ctx.r10.s64 = 3;
loc_82416670:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82416688
	if (!ctx.cr6.gt) goto loc_82416688;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// blt cr6,0x8241668c
	if (ctx.cr6.lt) goto loc_8241668C;
	// li r6,3
	ctx.r6.s64 = 3;
	// b 0x8241668c
	goto loc_8241668C;
loc_82416688:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8241668C:
	// rlwinm r10,r6,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// rlwinm r10,r10,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// add r9,r30,r9
	ctx.r9.u64 = r30.u64 + ctx.r9.u64;
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// add r8,r30,r8
	ctx.r8.u64 = r30.u64 + ctx.r8.u64;
	// rlwinm r10,r10,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// or r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 | ctx.r3.u64;
	// stwux r10,r29,r25
	ea = r29.u32 + r25.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	r29.u32 = ea;
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824163a4
	if (ctx.cr6.lt) goto loc_824163A4;
loc_824166C4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f7c
	ctx.lr = 0x824166D0;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_824248B0) {
	REX_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82424918) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// blt cr6,0x8242494c
	if (ctx.cr6.lt) goto loc_8242494C;
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// bgt cr6,0x8242494c
	if (ctx.cr6.gt) goto loc_8242494C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-16936
	ctx.r6.s64 = ctx.r11.s64 + -16936;
	// addi r5,r10,8424
	ctx.r5.s64 = ctx.r10.s64 + 8424;
	// addi r4,r9,16880
	ctx.r4.s64 = ctx.r9.s64 + 16880;
	// li r7,1699
	ctx.r7.s64 = 1699;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8240e308
	sub_8240E308(ctx, base);
	return;
loc_8242494C:
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

DEFINE_REX_FUNC(sub_82426D18) {
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
	ctx.lr = 0x82426D20;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82426D3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82426dc4
	if (ctx.cr6.eq) goto loc_82426DC4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82426dc4
	if (ctx.cr6.eq) goto loc_82426DC4;
	// li r28,0
	r28.s64 = 0;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82426d84
	if (!ctx.cr6.lt) goto loc_82426D84;
loc_82426D78:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// b 0x82426d90
	goto loc_82426D90;
loc_82426D84:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82426a60
	ctx.lr = 0x82426D90;
	sub_82426A60(ctx, base);
loc_82426D90:
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r29,0(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82426DA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82426dd0
	if (ctx.cr0.eq) goto loc_82426DD0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82426d78
	if (ctx.cr6.lt) goto loc_82426D78;
loc_82426DC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82426DC8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_82426DD0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x82426dc8
	goto loc_82426DC8;
}

DEFINE_REX_FUNC(sub_82428D00) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-17180
	ctx.r11.s64 = ctx.r11.s64 + -17180;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82428d34
	if (ctx.cr0.eq) goto loc_82428D34;
	// addi r4,r3,-4
	ctx.r4.s64 = ctx.r3.s64 + -4;
	// lwz r3,-4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// bl 0x82412de0
	ctx.lr = 0x82428D34;
	sub_82412DE0(ctx, base);
loc_82428D34:
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

DEFINE_REX_FUNC(sub_82429708) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82429710;
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
	ctx.lr = 0x8242972C;
	sub_82412D18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// beq 0x8242974c
	if (ctx.cr0.eq) goto loc_8242974C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82429338
	ctx.lr = 0x82429748;
	sub_82429338(ctx, base);
	// b 0x82429750
	goto loc_82429750;
loc_8242974C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82429750:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8242A0B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8242A0C0;
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
	ctx.lr = 0x8242A0E0;
	sub_82412D18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// beq 0x8242a104
	if (ctx.cr0.eq) goto loc_8242A104;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82427918
	ctx.lr = 0x8242A100;
	sub_82427918(ctx, base);
	// b 0x8242a108
	goto loc_8242A108;
loc_8242A104:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8242A108:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8242C6E0) {
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
	// bl 0x823cd280
	ctx.lr = 0x8242C6F8;
	sub_823CD280(ctx, base);
	// lwz r9,176(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 176);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8242c72c
	if (ctx.cr6.eq) goto loc_8242C72C;
	// lwz r8,172(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 172);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8242C710:
	// lwzx r7,r11,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8242c744
	if (ctx.cr6.eq) goto loc_8242C744;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8242c710
	if (ctx.cr6.lt) goto loc_8242C710;
loc_8242C72C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8242C730:
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
loc_8242C744:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8242c730
	goto loc_8242C730;
}

DEFINE_REX_FUNC(sub_8242D988) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8242D990;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8242d9b4
	goto loc_8242D9B4;
loc_8242D99C:
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r9,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r9.u32);
loc_8242D9B4:
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8242d99c
	if (!ctx.cr6.eq) goto loc_8242D99C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// stw r28,212(r31)
	REX_STORE_U32(r31.u32 + 212, r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r28,208(r31)
	REX_STORE_U32(r31.u32 + 208, r28.u32);
	// beq cr6,0x8242da0c
	if (ctx.cr6.eq) goto loc_8242DA0C;
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
loc_8242D9DC:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// beq cr6,0x8242d9fc
	if (ctx.cr6.eq) goto loc_8242D9FC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242d9fc
	if (ctx.cr6.eq) goto loc_8242D9FC;
	// bl 0x82473600
	ctx.lr = 0x8242D9F8;
	sub_82473600(ctx, base);
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
loc_8242D9FC:
	// rotlwi r11,r30,0
	ctx.r11.u64 = __builtin_rotateleft32(r30.u32, 0);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8242d9dc
	if (!ctx.cr6.eq) goto loc_8242D9DC;
loc_8242DA0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82433B88) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,2(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lbz r9,1(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// rotlwi r8,r11,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lfs f0,21056(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 21056);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 | ctx.r7.u64;
	// rlwinm r3,r4,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r11,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 8;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82434B38) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82434B40;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82434b5c
	if (ctx.cr6.eq) goto loc_82434B5C;
	// lwz r31,4(r6)
	r31.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// b 0x82434b60
	goto loc_82434B60;
loc_82434B5C:
	// lwz r31,204(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
loc_82434B60:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82434bac
	if (ctx.cr6.eq) goto loc_82434BAC;
	// b 0x82434b88
	goto loc_82434B88;
loc_82434B6C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// bctrl 
	ctx.lr = 0x82434B7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82434b94
	if (ctx.cr0.eq) goto loc_82434B94;
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_82434B88:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82434b6c
	if (!ctx.cr6.eq) goto loc_82434B6C;
	// b 0x82434bb4
	goto loc_82434BB4;
loc_82434B94:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82434bb8
	goto loc_82434BB8;
loc_82434B9C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x82434b94
	if (ctx.cr6.eq) goto loc_82434B94;
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_82434BAC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82434b9c
	if (!ctx.cr6.eq) goto loc_82434B9C;
loc_82434BB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82434BB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82435690) {
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
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r30,0
	r30.s64 = 0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824356cc
	if (!ctx.cr6.lt) goto loc_824356CC;
	// bl 0x824d419c
	ctx.lr = 0x824356C0;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x824356cc
	if (ctx.cr6.eq) goto loc_824356CC;
	// li r30,1
	r30.s64 = 1;
loc_824356CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824356e0
	if (ctx.cr6.eq) goto loc_824356E0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82435738
	if (ctx.cr6.eq) goto loc_82435738;
loc_824356E0:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bgt cr6,0x82435738
	if (ctx.cr6.gt) goto loc_82435738;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7712
	ctx.r3.s64 = ctx.r11.s64 + 7712;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8242c3b0
	ctx.lr = 0x82435708;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82435738
	if (ctx.cr0.eq) goto loc_82435738;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
loc_82435738:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82435750
	if (ctx.cr6.eq) goto loc_82435750;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x82435754
	goto loc_82435754;
loc_82435750:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82435754:
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

DEFINE_REX_FUNC(sub_82437A08) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,10136
	ctx.r11.s64 = ctx.r11.s64 + 10136;
	// addi r10,r10,10088
	ctx.r10.s64 = ctx.r10.s64 + 10088;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,180(r3)
	REX_STORE_U32(ctx.r3.u32 + 180, ctx.r10.u32);
	// addi r3,r3,700
	ctx.r3.s64 = ctx.r3.s64 + 700;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// bl 0x8242d868
	ctx.lr = 0x82437A44;
	sub_8242D868(ctx, base);
	// addi r3,r31,660
	ctx.r3.s64 = r31.s64 + 660;
	// bl 0x8242d868
	ctx.lr = 0x82437A4C;
	sub_8242D868(ctx, base);
	// addi r3,r31,652
	ctx.r3.s64 = r31.s64 + 652;
	// bl 0x82434c78
	ctx.lr = 0x82437A54;
	sub_82434C78(ctx, base);
	// addi r3,r31,588
	ctx.r3.s64 = r31.s64 + 588;
	// bl 0x8242d868
	ctx.lr = 0x82437A5C;
	sub_8242D868(ctx, base);
	// addi r3,r31,548
	ctx.r3.s64 = r31.s64 + 548;
	// bl 0x8242d868
	ctx.lr = 0x82437A64;
	sub_8242D868(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82435f00
	ctx.lr = 0x82437A6C;
	sub_82435F00(ctx, base);
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

DEFINE_REX_FUNC(sub_82438E00) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82473600
	sub_82473600(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82439140) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82439148;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r3,544
	ctx.r3.s64 = ctx.r3.s64 + 544;
	// bl 0x824344e8
	ctx.lr = 0x82439158;
	sub_824344E8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x824391cc
	if (ctx.cr0.eq) goto loc_824391CC;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7712
	ctx.r3.s64 = ctx.r11.s64 + 7712;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x8242c3b0
	ctx.lr = 0x8243917C;
	sub_8242C3B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x824391c4
	if (ctx.cr0.eq) goto loc_824391C4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,584
	ctx.r3.s64 = r30.s64 + 584;
	// bl 0x82438e18
	ctx.lr = 0x82439190;
	sub_82438E18(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824391a4
	if (!ctx.cr0.eq) goto loc_824391A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x824391A0;
	sub_82473600(ctx, base);
	// b 0x824391c4
	goto loc_824391C4;
loc_824391A4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r3,516(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 516);
	// bl 0x8243b940
	ctx.lr = 0x824391C0;
	sub_8243B940(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_824391C4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82473600
	ctx.lr = 0x824391CC;
	sub_82473600(ctx, base);
loc_824391CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8243AAA0) {
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
	ctx.lr = 0x8243AAA8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// clrlwi. r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8243aae8
	if (!ctx.cr0.eq) goto loc_8243AAE8;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8243aad4
	if (!ctx.cr6.eq) goto loc_8243AAD4;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8243aae8
	goto loc_8243AAE8;
loc_8243AAD4:
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// li r10,32
	ctx.r10.s64 = 32;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_8243AAE8:
	// addis r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 65536;
	// sth r6,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r6.u16);
	// clrlwi r29,r11,16
	r29.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r7,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r7.u32);
	// addi r10,r10,-18
	ctx.r10.s64 = ctx.r10.s64 + -18;
	// clrlwi r28,r5,16
	r28.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r29,14(r31)
	REX_STORE_U16(r31.u32 + 14, r29.u16);
	// sth r10,16(r31)
	REX_STORE_U16(r31.u32 + 16, ctx.r10.u16);
	// clrlwi r30,r6,16
	r30.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(r28.u32, 2, ctx.xer);
	// beq cr6,0x8243ab38
	if (ctx.cr6.eq) goto loc_8243AB38;
	// clrlwi r11,r29,16
	ctx.r11.u64 = r29.u32 & 0xFFFF;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// sth r11,12(r31)
	REX_STORE_U16(r31.u32 + 12, ctx.r11.u16);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// b 0x8243abac
	goto loc_8243ABAC;
loc_8243AB38:
	// lhz r11,246(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 246);
	// li r10,7
	ctx.r10.s64 = 7;
	// mulli r9,r30,7
	ctx.r9.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(7));
	// sth r10,20(r31)
	REX_STORE_U16(r31.u32 + 20, ctx.r10.u16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// sth r11,18(r31)
	REX_STORE_U16(r31.u32 + 18, ctx.r11.u16);
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r8,r8,r30
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r31,20
	ctx.r6.s64 = r31.s64 + 20;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// li r8,0
	ctx.r8.s64 = 0;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mullw r9,r10,r7
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// sth r10,12(r31)
	REX_STORE_U16(r31.u32 + 12, ctx.r10.u16);
	// divwu r11,r9,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r9.u32 / ctx.r11.u32 : 0);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,10688
	ctx.r11.s64 = ctx.r11.s64 + 10688;
loc_8243AB90:
	// lhzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// sth r10,2(r6)
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r10.u16);
	// lhzx r10,r8,r9
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// sthu r10,4(r6)
	ea = 4 + ctx.r6.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r6.u32 = ea;
	// bdnz 0x8243ab90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243AB90;
loc_8243ABAC:
	// cmplwi cr6,r4,40
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 40, ctx.xer);
	// beq cr6,0x8243abbc
	if (ctx.cr6.eq) goto loc_8243ABBC;
	// sth r5,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r5.u16);
	// b 0x8243ac54
	goto loc_8243AC54;
loc_8243ABBC:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,-2
	ctx.r10.s64 = -2;
	// addi r9,r11,9780
	ctx.r9.s64 = ctx.r11.s64 + 9780;
	// sth r10,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r10.u16);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// lwz r11,9780(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 9780);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r7,12(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x8243AC04;
	sub_822D4FA0(ctx, base);
	// clrlwi. r11,r27,16
	ctx.r11.u64 = r27.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// bne 0x8243ac14
	if (!ctx.cr0.eq) goto loc_8243AC14;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_8243AC14:
	// sth r11,18(r31)
	REX_STORE_U16(r31.u32 + 18, ctx.r11.u16);
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(r26.s32, -1, ctx.xer);
	// bne cr6,0x8243ac50
	if (!ctx.cr6.eq) goto loc_8243AC50;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// blt cr6,0x8243ac48
	if (ctx.cr6.lt) goto loc_8243AC48;
	// cmplwi cr6,r30,8
	ctx.cr6.compare<uint32_t>(r30.u32, 8, ctx.xer);
	// bgt cr6,0x8243ac48
	if (ctx.cr6.gt) goto loc_8243AC48;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,21244
	ctx.r11.s64 = ctx.r11.s64 + 21244;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
loc_8243AC48:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// b 0x8243ac54
	goto loc_8243AC54;
loc_8243AC50:
	// stw r26,20(r31)
	REX_STORE_U32(r31.u32 + 20, r26.u32);
loc_8243AC54:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82441CE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82441CF0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r28,r3,28
	r28.s64 = ctx.r3.s64 + 28;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82441D14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// lwz r11,164(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82441d8c
	if (!ctx.cr6.eq) goto loc_82441D8C;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7712
	ctx.r3.s64 = ctx.r11.s64 + 7712;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8242c3b0
	ctx.lr = 0x82441D40;
	sub_8242C3B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82441d54
	if (!ctx.cr0.eq) goto loc_82441D54;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x82441d9c
	goto loc_82441D9C;
loc_82441D54:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// lwz r3,76(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 76);
	// bl 0x8245f9d8
	ctx.lr = 0x82441D78;
	sub_8245F9D8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x82441d9c
	if (!ctx.cr0.lt) goto loc_82441D9C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x82441D88;
	sub_82473600(ctx, base);
	// b 0x82441d9c
	goto loc_82441D9C;
loc_82441D8C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,76(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 76);
	// bl 0x8245fe38
	ctx.lr = 0x82441D98;
	sub_8245FE38(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82441D9C:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82441DB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82443D48) {
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
	ctx.lr = 0x82443D50;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82443d7c
	if (!ctx.cr6.eq) goto loc_82443D7C;
	// lis r30,4919
	r30.s64 = 322371584;
	// ori r30,r30,61441
	r30.u64 = r30.u64 | 61441;
	// b 0x82443d80
	goto loc_82443D80;
loc_82443D7C:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_82443D80:
	// lwz r31,68(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 68);
	// b 0x82443db8
	goto loc_82443DB8;
loc_82443D88:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82443da0
	if (ctx.cr6.eq) goto loc_82443DA0;
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82443da4
	goto loc_82443DA4;
loc_82443DA0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82443DA4:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82435770
	ctx.lr = 0x82443DB8;
	sub_82435770(ctx, base);
loc_82443DB8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82443d88
	if (!ctx.cr6.eq) goto loc_82443D88;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x82443de8
	if (!ctx.cr6.eq) goto loc_82443DE8;
	// lwz r11,84(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,180(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82443DE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_82443DE8:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8244A870) {
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
	ctx.lr = 0x8244A878;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// mr r19,r10
	r19.u64 = ctx.r10.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244ab08
	if (ctx.cr6.eq) goto loc_8244AB08;
	// lwz r29,0(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8244ab08
	if (ctx.cr6.eq) goto loc_8244AB08;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8244ab08
	if (ctx.cr6.eq) goto loc_8244AB08;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8244a8d0
	if (ctx.cr6.eq) goto loc_8244A8D0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8244ab08
	if (ctx.cr6.eq) goto loc_8244AB08;
loc_8244A8D0:
	// lwz r10,692(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 692);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8244a8e8
	if (ctx.cr6.eq) goto loc_8244A8E8;
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x8244ab18
	goto loc_8244AB18;
loc_8244A8E8:
	// lwz r11,292(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r22,700(r31)
	r22.u64 = REX_LOAD_U32(r31.u32 + 700);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r4,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r4.u16);
	// beq cr6,0x8244a91c
	if (ctx.cr6.eq) goto loc_8244A91C;
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8244a918
	if (ctx.cr6.eq) goto loc_8244A918;
	// stw r10,412(r31)
	REX_STORE_U32(r31.u32 + 412, ctx.r10.u32);
	// b 0x8244a91c
	goto loc_8244A91C;
loc_8244A918:
	// stw r26,412(r31)
	REX_STORE_U32(r31.u32 + 412, r26.u32);
loc_8244A91C:
	// lwz r9,416(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 416);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8244a92c
	if (ctx.cr6.eq) goto loc_8244A92C;
	// stw r10,412(r31)
	REX_STORE_U32(r31.u32 + 412, ctx.r10.u32);
loc_8244A92C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244a940
	if (ctx.cr6.eq) goto loc_8244A940;
	// lhz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 24);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x8244a944
	goto loc_8244A944;
loc_8244A940:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_8244A944:
	// lwz r30,192(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 192);
	// extsh r25,r11
	r25.s64 = ctx.r11.s16;
	// stw r26,692(r31)
	REX_STORE_U32(r31.u32 + 692, r26.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r11,34(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 34);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x822d5870
	ctx.lr = 0x8244A964;
	sub_822D5870(ctx, base);
	// lhz r8,34(r29)
	ctx.r8.u64 = REX_LOAD_U16(r29.u32 + 34);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8244a9ac
	if (!ctx.cr6.gt) goto loc_8244A9AC;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// rlwinm r9,r26,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
loc_8244A97C:
	// lwz r10,88(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 88);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r7,r11,r27
	ctx.r7.u64 = ctx.r11.u64 + r27.u64;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// stwx r7,r9,r30
	REX_STORE_U32(ctx.r9.u32 + r30.u32, ctx.r7.u32);
	// lhz r8,34(r29)
	ctx.r8.u64 = REX_LOAD_U16(r29.u32 + 34);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8244a97c
	if (ctx.cr6.lt) goto loc_8244A97C;
loc_8244A9AC:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8244a9d8
	if (ctx.cr6.eq) goto loc_8244A9D8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8244a9d8
	if (ctx.cr6.eq) goto loc_8244A9D8;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8244a9d8
	if (ctx.cr6.eq) goto loc_8244A9D8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8244ab18
	goto loc_8244AB18;
loc_8244A9D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,336(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 336);
	// lwz r7,452(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 452);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8244aa0c
	if (ctx.cr6.eq) goto loc_8244AA0C;
	// lwz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 328);
	// mr r28,r24
	r28.u64 = r24.u64;
	// lwz r9,332(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 332);
	// mullw r7,r11,r24
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(r24.s32);
	// divwu r11,r7,r9
	ctx.r11.u64 = uint32_t(ctx.r9.u32 ? ctx.r7.u32 / ctx.r9.u32 : 0);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8244aa0c
	if (ctx.cr6.lt) goto loc_8244AA0C;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_8244AA0C:
	// lwz r11,424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 424);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8244aa28
	if (!ctx.cr6.eq) goto loc_8244AA28;
	// mullw r11,r10,r28
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(r28.s32);
	// li r10,6
	ctx.r10.s64 = 6;
	// divwu r11,r11,r10
	ctx.r11.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// b 0x8244aa34
	goto loc_8244AA34;
loc_8244AA28:
	// lwz r11,360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 360);
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r28.s32);
	// divwu r11,r10,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
loc_8244AA34:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8244aa40
	if (ctx.cr6.lt) goto loc_8244AA40;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_8244AA40:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r9,708(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 708);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82463438
	ctx.lr = 0x8244AA5C;
	sub_82463438(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8244ab14
	if (ctx.cr6.lt) goto loc_8244AB14;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lhz r30,80(r1)
	r30.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8244a6c8
	ctx.lr = 0x8244AA80;
	sub_8244A6C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8244ab14
	if (ctx.cr6.lt) goto loc_8244AB14;
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x8244aaac
	if (ctx.cr6.eq) goto loc_8244AAAC;
	// lwz r10,368(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 368);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r8,360(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 360);
	// mullw r7,r10,r8
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// mullw r6,r7,r9
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// stw r6,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r6.u32);
loc_8244AAAC:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x8244aad4
	if (ctx.cr6.eq) goto loc_8244AAD4;
	// lis r10,152
	ctx.r10.s64 = 9961472;
	// ld r9,184(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 184);
	// lwz r8,336(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 336);
	// ori r7,r10,38528
	ctx.r7.u64 = ctx.r10.u64 | 38528;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// mulld r5,r9,r7
	ctx.r5.s64 = static_cast<int64_t>(ctx.r9.u64 * ctx.r7.u64);
	// divd r4,r5,r6
	ctx.r4.s64 = (ctx.r6.s64 && !(ctx.r5.s64 == INT64_MIN && ctx.r6.s64 == -1)) ? ctx.r5.s64 / ctx.r6.s64 : 0;
	// std r4,0(r21)
	REX_STORE_U64(r21.u32 + 0, ctx.r4.u64);
loc_8244AAD4:
	// clrlwi r8,r30,16
	ctx.r8.u64 = r30.u32 & 0xFFFF;
	// ld r9,184(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 184);
	// clrldi r10,r11,48
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFF;
	// subf r7,r8,r22
	ctx.r7.u64 = r22.u64 - ctx.r8.u64;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subfic r5,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r5.u64 = static_cast<uint64_t>(0) - ctx.r7.u64;
	// stw r7,700(r31)
	REX_STORE_U32(r31.u32 + 700, ctx.r7.u32);
	// std r6,184(r31)
	REX_STORE_U64(r31.u32 + 184, ctx.r6.u64);
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r10,692(r31)
	REX_STORE_U32(r31.u32 + 692, ctx.r10.u32);
	// b 0x8244ab18
	goto loc_8244AB18;
loc_8244AB08:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x8244ab18
	goto loc_8244AB18;
loc_8244AB14:
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
loc_8244AB18:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8244ab28
	if (ctx.cr6.eq) goto loc_8244AB28;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r11,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r11.u32);
loc_8244AB28:
	// lwz r11,704(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8244ab64
	if (ctx.cr6.eq) goto loc_8244AB64;
	// lwz r11,696(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8244ab64
	if (ctx.cr6.eq) goto loc_8244AB64;
	// lwz r11,692(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 692);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8244ab64
	if (!ctx.cr6.eq) goto loc_8244AB64;
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,692(r31)
	REX_STORE_U32(r31.u32 + 692, ctx.r8.u32);
loc_8244AB64:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x8244ab74
	if (ctx.cr6.eq) goto loc_8244AB74;
	// lwz r11,692(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 692);
	// stw r11,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r11.u32);
loc_8244AB74:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_8245C0A8) {
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
	// bl 0x822d4e88
	ctx.lr = 0x8245C0B0;
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f29.u64);
	// stfd f30,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8245bd88
	ctx.lr = 0x8245C0C8;
	sub_8245BD88(ctx, base);
	// addis r29,r30,6
	r29.s64 = r30.s64 + 393216;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r29,r29,-19856
	r29.s64 = r29.s64 + -19856;
	// li r9,103
	ctx.r9.s64 = 103;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f30,27692(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 27692);
	f30.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f29,30900(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 30900);
	f29.f64 = double(temp.f32);
	// stfs f30,2060(r29)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r29.u32 + 2060, temp.u32);
	// stw r9,2056(r29)
	REX_STORE_U32(r29.u32 + 2056, ctx.r9.u32);
	// stfs f29,2064(r29)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r29.u32 + 2064, temp.u32);
	// bl 0x822d5870
	ctx.lr = 0x8245C100;
	sub_822D5870(ctx, base);
	// lwz r6,2056(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 2056);
	// addis r28,r30,6
	r28.s64 = r30.s64 + 393216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// neg r3,r6
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// addi r28,r28,-17776
	r28.s64 = r28.s64 + -17776;
	// clrlwi r11,r3,23
	ctx.r11.u64 = ctx.r3.u32 & 0x1FF;
	// li r31,0
	r31.s64 = 0;
	// li r7,97
	ctx.r7.s64 = 97;
	// lfs f31,1996(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	f31.f64 = double(temp.f32);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stfs f31,2068(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 2068, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,2048(r29)
	REX_STORE_U32(r29.u32 + 2048, r31.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,2052(r29)
	REX_STORE_U32(r29.u32 + 2052, ctx.r11.u32);
	// stfs f30,2060(r28)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r28.u32 + 2060, temp.u32);
	// stw r7,2056(r28)
	REX_STORE_U32(r28.u32 + 2056, ctx.r7.u32);
	// stfs f29,2064(r28)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r28.u32 + 2064, temp.u32);
	// bl 0x822d5870
	ctx.lr = 0x8245C14C;
	sub_822D5870(ctx, base);
	// lwz r10,2056(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 2056);
	// addis r29,r30,6
	r29.s64 = r30.s64 + 393216;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stfs f31,2068(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 2068, temp.u32);
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// stw r31,2048(r28)
	REX_STORE_U32(r28.u32 + 2048, r31.u32);
	// addi r29,r29,-15696
	r29.s64 = r29.s64 + -15696;
	// clrlwi r8,r9,23
	ctx.r8.u64 = ctx.r9.u32 & 0x1FF;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r8,2052(r28)
	REX_STORE_U32(r28.u32 + 2052, ctx.r8.u32);
	// bl 0x822d5870
	ctx.lr = 0x8245C17C;
	sub_822D5870(ctx, base);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// li r11,40
	ctx.r11.s64 = 40;
	// stfs f31,2080(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 2080, temp.u32);
	// stfs f31,2084(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 2084, temp.u32);
	// stw r31,2048(r29)
	REX_STORE_U32(r29.u32 + 2048, r31.u32);
	// stfs f31,2088(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 2088, temp.u32);
	// stw r11,2064(r29)
	REX_STORE_U32(r29.u32 + 2064, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,2068(r29)
	REX_STORE_U32(r29.u32 + 2068, ctx.r11.u32);
	// lfs f0,30916(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 30916);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,2072(r29)
	REX_STORE_U32(r29.u32 + 2072, ctx.r11.u32);
	// stfs f0,2076(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 2076, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-64(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8245E578) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8245E580;
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245E5A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8245f810
	ctx.lr = 0x8245E5B4;
	sub_8245F810(ctx, base);
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
	ctx.lr = 0x8245E5D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8245F278) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245F298;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_8245F668) {
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
	ctx.lr = 0x8245F670;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// li r27,0
	r27.s64 = 0;
	// bl 0x8245e7e8
	ctx.lr = 0x8245F694;
	sub_8245E7E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8245f6c0
	if (ctx.cr0.eq) goto loc_8245F6C0;
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245F6BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8245f744
	goto loc_8245F744;
loc_8245F6C0:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7712
	ctx.r3.s64 = ctx.r11.s64 + 7712;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// addi r4,r28,24
	ctx.r4.s64 = r28.s64 + 24;
	// bl 0x8242c3b0
	ctx.lr = 0x8245F6DC;
	sub_8242C3B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8245f6f0
	if (!ctx.cr0.eq) goto loc_8245F6F0;
	// lis r27,-32761
	r27.s64 = -2147024896;
	// ori r27,r27,14
	r27.u64 = r27.u64 | 14;
	// b 0x8245f744
	goto loc_8245F744;
loc_8245F6F0:
	// addic r11,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	ctx.r11.s64 = r30.s64 + -1;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
	// subfe r9,r11,r30
	temp.u8 = (~ctx.r11.u32 + r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r26,16(r31)
	REX_STORE_U32(r31.u32 + 16, r26.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r28,20(r31)
	REX_STORE_U32(r31.u32 + 20, r28.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x822d4fa0
	ctx.lr = 0x8245F728;
	sub_822D4FA0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 16);
	// bl 0x8245f9d8
	ctx.lr = 0x8245F734;
	sub_8245F9D8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bge 0x8245f744
	if (!ctx.cr0.lt) goto loc_8245F744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x8245F744;
	sub_82473600(ctx, base);
loc_8245F744:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_824626F8) {
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
	// bl 0x822d4e78
	ctx.lr = 0x82462700;
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r24,r5,16
	r24.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x82462804
	if (!ctx.cr6.gt) goto loc_82462804;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r11,34(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r25,0
	r25.s64 = 0;
	// li r28,1
	r28.s64 = 1;
	// lfs f31,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	f31.f64 = double(temp.f32);
	// lfs f30,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f30.f64 = double(temp.f32);
loc_82462740:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824627f0
	if (!ctx.cr6.gt) goto loc_824627F0;
	// rlwinm r27,r25,2,0,29
	r27.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,0
	r30.s64 = 0;
loc_82462750:
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// mulli r10,r30,1776
	ctx.r10.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(1776));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// lhz r11,110(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 110);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lfsx f0,r10,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// slw r11,r28,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r11.u8 & 0x3F));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x8246279c
	if (!ctx.cr6.lt) goto loc_8246279C;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// not r11,r10
	ctx.r11.u64 = ~ctx.r10.u64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x824627bc
	if (!ctx.cr6.lt) goto loc_824627BC;
	// b 0x824627b8
	goto loc_824627B8;
loc_8246279C:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x824627bc
	if (!ctx.cr6.gt) goto loc_824627BC;
loc_824627B8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_824627BC:
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 520);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824627D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82462750
	if (ctx.cr6.lt) goto loc_82462750;
loc_824627F0:
	// addi r10,r25,1
	ctx.r10.s64 = r25.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r24
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r24.s32, ctx.xer);
	// blt cr6,0x82462740
	if (ctx.cr6.lt) goto loc_82462740;
loc_82462804:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82467730) {
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
	ctx.lr = 0x82467738;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r24,0
	r24.s64 = 0;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r22,r24
	r22.u64 = r24.u64;
	// mr r25,r24
	r25.u64 = r24.u64;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// lwz r18,256(r31)
	r18.u64 = REX_LOAD_U32(r31.u32 + 256);
	// beq cr6,0x82468af4
	if (ctx.cr6.eq) goto loc_82468AF4;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// li r23,1
	r23.s64 = 1;
	// li r27,14
	r27.s64 = 14;
	// li r14,12
	r14.s64 = 12;
	// addi r20,r11,3760
	r20.s64 = ctx.r11.s64 + 3760;
	// li r15,8
	r15.s64 = 8;
	// addi r19,r10,-25352
	r19.s64 = ctx.r10.s64 + -25352;
	// ori r16,r9,65535
	r16.u64 = ctx.r9.u64 | 65535;
	// li r17,36
	r17.s64 = 36;
	// li r21,45
	r21.s64 = 45;
loc_82467790:
	// lwz r11,40(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 40);
	// cmplwi cr6,r11,52
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 52, ctx.xer);
	// bgt cr6,0x82468ab0
	if (ctx.cr6.gt) goto loc_82468AB0;
	// lis r12,-32186
	ctx.r12.s64 = -2109341696;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,30644
	ctx.r12.s64 = ctx.r12.s64 + 30644;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82467888;
	case 1:
		goto loc_82468AB0;
	case 2:
		goto loc_82468AB0;
	case 3:
		goto loc_8246824C;
	case 4:
		goto loc_824684D8;
	case 5:
		goto loc_82468584;
	case 6:
		goto loc_824685AC;
	case 7:
		goto loc_824685AC;
	case 8:
		goto loc_824685D0;
	case 9:
		goto loc_824687A0;
	case 10:
		goto loc_82468AB0;
	case 11:
		goto loc_82467C08;
	case 12:
		goto loc_82467D50;
	case 13:
		goto loc_82467CD8;
	case 14:
		goto loc_82467DAC;
	case 15:
		goto loc_82467E30;
	case 16:
		goto loc_82468AB0;
	case 17:
		goto loc_82468AB0;
	case 18:
		goto loc_8246805C;
	case 19:
		goto loc_82468254;
	case 20:
		goto loc_82468AB0;
	case 21:
		goto loc_82468AB0;
	case 22:
		goto loc_82468AB0;
	case 23:
		goto loc_82468AB0;
	case 24:
		goto loc_82468AB0;
	case 25:
		goto loc_82468AB0;
	case 26:
		goto loc_82468AB0;
	case 27:
		goto loc_82468AB0;
	case 28:
		goto loc_82468AB0;
	case 29:
		goto loc_8246825C;
	case 30:
		goto loc_824683B8;
	case 31:
		goto loc_82468400;
	case 32:
		goto loc_82467E4C;
	case 33:
		goto loc_8246826C;
	case 34:
		goto loc_82468AB0;
	case 35:
		goto loc_82468AB0;
	case 36:
		goto loc_82467F7C;
	case 37:
		goto loc_8246809C;
	case 38:
		goto loc_82468064;
	case 39:
		goto loc_82467F7C;
	case 40:
		goto loc_82467F34;
	case 41:
		goto loc_82467F6C;
	case 42:
		goto loc_82467F74;
	case 43:
		goto loc_82468AB0;
	case 44:
		goto loc_82468138;
	case 45:
		goto loc_824681F0;
	case 46:
		goto loc_82468194;
	case 47:
		goto loc_82468AB0;
	case 48:
		goto loc_82467FA8;
	case 49:
		goto loc_82468AB0;
	case 50:
		goto loc_82468AB0;
	case 51:
		goto loc_82468AB0;
	case 52:
		goto loc_82468274;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82467888:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x8246797c
	if (ctx.cr6.gt) goto loc_8246797C;
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82467920
	if (ctx.cr6.eq) goto loc_82467920;
	// lwz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 228);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x824678c4
	if (!ctx.cr6.gt) goto loc_824678C4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_824678B4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x824678b4
	if (ctx.cr6.gt) goto loc_824678B4;
loc_824678C4:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x824678e0
	if (!ctx.cr6.gt) goto loc_824678E0;
loc_824678D0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x824678d0
	if (ctx.cr6.gt) goto loc_824678D0;
loc_824678E0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// addi r3,r26,224
	ctx.r3.s64 = r26.s64 + 224;
	// bl 0x824658f8
	ctx.lr = 0x824678F0;
	sub_824658F8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// slw r9,r23,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r8,236(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 236);
	// divw r18,r11,r9
	r18.u64 = uint32_t((ctx.r9.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r11.s32 / ctx.r9.s32 : 0);
	// cmpw cr6,r18,r8
	ctx.cr6.compare<int32_t>(r18.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82468ac8
	if (ctx.cr6.lt) goto loc_82468AC8;
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(r18.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82468ac8
	if (ctx.cr6.gt) goto loc_82468AC8;
loc_82467920:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,580(r31)
	REX_STORE_U16(r31.u32 + 580, ctx.r11.u16);
	// beq cr6,0x82467960
	if (ctx.cr6.eq) goto loc_82467960;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// rlwinm r9,r24,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
loc_8246793C:
	// lwz r8,584(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 584);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sthx r10,r9,r8
	REX_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u16);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// lhz r6,34(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 34);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x8246793c
	if (ctx.cr6.lt) goto loc_8246793C;
loc_82467960:
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82302810
	ctx.lr = 0x8246796C;
	sub_82302810(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// b 0x82467b2c
	goto loc_82467B2C;
loc_8246797C:
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lhz r5,34(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 34);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// lwz r3,320(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 320);
	// mullw r7,r5,r10
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x824679f8
	if (!ctx.cr6.gt) goto loc_824679F8;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// addi r11,r3,424
	ctx.r11.s64 = ctx.r3.s64 + 424;
loc_824679AC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsh r29,r6
	r29.s64 = ctx.r6.s16;
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lhz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r28,r9
	r28.s64 = ctx.r9.s16;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// ble cr6,0x824679e0
	if (!ctx.cr6.gt) goto loc_824679E0;
	// lhz r30,-310(r11)
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + -310);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// extsh r9,r30
	ctx.r9.s64 = r30.s16;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r30,r9,r10
	r30.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
loc_824679E0:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,1776
	ctx.r11.s64 = ctx.r11.s64 + 1776;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x824679ac
	if (ctx.cr6.lt) goto loc_824679AC;
loc_824679F8:
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// sth r24,580(r31)
	REX_STORE_U16(r31.u32 + 580, r24.u16);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82467afc
	if (!ctx.cr6.gt) goto loc_82467AFC;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// addi r11,r3,114
	ctx.r11.s64 = ctx.r3.s64 + 114;
loc_82467A14:
	// lwz r10,310(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 310);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lhz r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// subf r7,r3,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r3.u64;
	// cmpw cr6,r5,r3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x82467ae0
	if (!ctx.cr6.eq) goto loc_82467AE0;
	// lhz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r3,r30
	ctx.r3.s64 = r30.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r4,r10
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r10.u32);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82467ae0
	if (!ctx.cr6.eq) goto loc_82467AE0;
	// lhz r4,580(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 580);
	// lwz r3,584(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 584);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r8,r4,r3
	REX_STORE_U16(ctx.r4.u32 + ctx.r3.u32, ctx.r8.u16);
	// lhz r8,580(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 580);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// sth r8,580(r31)
	REX_STORE_U16(r31.u32 + 580, ctx.r8.u16);
	// lhz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r4,r10
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r10.u32);
	// sth r3,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r3.u16);
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r3,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// sth r8,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r8.u16);
	// lhz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// rlwinm r8,r3,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lhz r4,-2(r8)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r8.u32 + -2);
	// sth r4,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r4.u16);
	// lhz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lhzx r3,r4,r10
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r10.u32);
	// add r10,r3,r8
	ctx.r10.u64 = ctx.r3.u64 + ctx.r8.u64;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// sth r10,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r10.u16);
	// subf r7,r8,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r8.u64;
loc_82467AE0:
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// lhz r9,34(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 34);
	// addi r11,r11,1776
	ctx.r11.s64 = ctx.r11.s64 + 1776;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82467a14
	if (ctx.cr6.lt) goto loc_82467A14;
loc_82467AFC:
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82468aec
	if (ctx.cr6.gt) goto loc_82468AEC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82468aec
	if (!ctx.cr6.gt) goto loc_82468AEC;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt cr6,0x82468aec
	if (ctx.cr6.lt) goto loc_82468AEC;
	// cntlzw r11,r7
	ctx.r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r10,216(r26)
	REX_STORE_U32(r26.u32 + 216, ctx.r10.u32);
loc_82467B2C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82462398
	ctx.lr = 0x82467B34;
	sub_82462398(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82303b78
	ctx.lr = 0x82467B48;
	sub_82303B78(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x82467b68
	if (ctx.cr6.gt) goto loc_82467B68;
	// li r11,52
	ctx.r11.s64 = 52;
	// b 0x82468aac
	goto loc_82468AAC;
loc_82467B68:
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82467c00
	if (!ctx.cr6.gt) goto loc_82467C00;
	// mr r29,r24
	r29.u64 = r24.u64;
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
loc_82467B80:
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lhzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r11,r7,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r6,114(r30)
	ctx.r6.u64 = REX_LOAD_U16(r30.u32 + 114);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82467bd0
	if (!ctx.cr6.eq) goto loc_82467BD0;
	// li r5,112
	ctx.r5.s64 = 112;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r24,444(r30)
	REX_STORE_U32(r30.u32 + 444, r24.u32);
	// stw r23,436(r30)
	REX_STORE_U32(r30.u32 + 436, r23.u32);
	// bl 0x822d5870
	ctx.lr = 0x82467BBC;
	sub_822D5870(ctx, base);
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x822d5870
	ctx.lr = 0x82467BCC;
	sub_822D5870(ctx, base);
	// stw r24,64(r30)
	REX_STORE_U32(r30.u32 + 64, r24.u32);
loc_82467BD0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8246bc28
	ctx.lr = 0x82467BE0;
	sub_8246BC28(ctx, base);
	// lhz r9,580(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 580);
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82467b80
	if (ctx.cr6.lt) goto loc_82467B80;
loc_82467C00:
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82468aac
	goto loc_82468AAC;
loc_82467C08:
	// addi r30,r26,224
	r30.s64 = r26.s64 + 224;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8246e538
	ctx.lr = 0x82467C18;
	sub_8246E538(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// stw r24,60(r26)
	REX_STORE_U32(r26.u32 + 60, r24.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824658f8
	ctx.lr = 0x82467C38;
	sub_824658F8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82467c58
	if (!ctx.cr6.eq) goto loc_82467C58;
	// stw r27,40(r26)
	REX_STORE_U32(r26.u32 + 40, r27.u32);
	// b 0x82468ab0
	goto loc_82468AB0;
loc_82467C58:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824658f8
	ctx.lr = 0x82467C68;
	sub_824658F8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82467c8c
	if (ctx.cr6.eq) goto loc_82467C8C;
	// stw r11,60(r26)
	REX_STORE_U32(r26.u32 + 60, ctx.r11.u32);
	// stw r14,40(r26)
	REX_STORE_U32(r26.u32 + 40, r14.u32);
	// b 0x82468ab0
	goto loc_82468AB0;
loc_82467C8C:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824658f8
	ctx.lr = 0x82467C9C;
	sub_824658F8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824658f8
	ctx.lr = 0x82467CB8;
	sub_824658F8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r14,40(r26)
	REX_STORE_U32(r26.u32 + 40, r14.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,60(r26)
	REX_STORE_U32(r26.u32 + 60, ctx.r10.u32);
	// b 0x82468ab0
	goto loc_82468AB0;
loc_82467CD8:
	// lwz r11,60(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82467d48
	if (!ctx.cr6.gt) goto loc_82467D48;
	// addi r29,r26,224
	r29.s64 = r26.s64 + 224;
loc_82467CE8:
	// lwz r30,60(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 60);
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// ble cr6,0x82467cf8
	if (!ctx.cr6.gt) goto loc_82467CF8;
	// mr r30,r15
	r30.u64 = r15.u64;
loc_82467CF8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824658f8
	ctx.lr = 0x82467D08;
	sub_824658F8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// bge cr6,0x82467d30
	if (!ctx.cr6.lt) goto loc_82467D30;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subfic r10,r30,8
	ctx.xer.ca = r30.u32 <= 8;
	ctx.r10.u64 = static_cast<uint64_t>(8) - r30.u64;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// slw r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
loc_82467D30:
	// lwz r11,60(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 60);
	// subf r10,r30,r11
	ctx.r10.u64 = ctx.r11.u64 - r30.u64;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,60(r26)
	REX_STORE_U32(r26.u32 + 60, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x82467ce8
	if (ctx.cr6.gt) goto loc_82467CE8;
loc_82467D48:
	// stw r27,40(r26)
	REX_STORE_U32(r26.u32 + 40, r27.u32);
	// b 0x82468ab0
	goto loc_82468AB0;
loc_82467D50:
	// lwz r11,60(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82467da4
	if (!ctx.cr6.gt) goto loc_82467DA4;
	// addi r29,r26,224
	r29.s64 = r26.s64 + 224;
loc_82467D60:
	// lwz r30,60(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 60);
	// cmpwi cr6,r30,24
	ctx.cr6.compare<int32_t>(r30.s32, 24, ctx.xer);
	// ble cr6,0x82467d70
	if (!ctx.cr6.gt) goto loc_82467D70;
	// li r30,24
	r30.s64 = 24;
loc_82467D70:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824658f8
	ctx.lr = 0x82467D80;
	sub_824658F8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// lwz r11,60(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 60);
	// subf r10,r30,r11
	ctx.r10.u64 = ctx.r11.u64 - r30.u64;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,60(r26)
	REX_STORE_U32(r26.u32 + 60, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x82467d60
	if (ctx.cr6.gt) goto loc_82467D60;
loc_82467DA4:
	// stw r27,40(r26)
	REX_STORE_U32(r26.u32 + 40, r27.u32);
	// b 0x82468ab0
	goto loc_82468AB0;
loc_82467DAC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r26,224
	ctx.r3.s64 = r26.s64 + 224;
	// bl 0x824658f8
	ctx.lr = 0x82467DBC;
	sub_824658F8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r10,580(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 580);
	// stw r24,140(r31)
	REX_STORE_U32(r31.u32 + 140, r24.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82467e04
	if (!ctx.cr6.gt) goto loc_82467E04;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
loc_82467DF0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82467df0
	if (ctx.cr6.lt) goto loc_82467DF0;
loc_82467E04:
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82467e24
	if (!ctx.cr6.eq) goto loc_82467E24;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r24,88(r26)
	REX_STORE_U32(r26.u32 + 88, r24.u32);
	// stw r11,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r11.u32);
	// stw r23,192(r31)
	REX_STORE_U32(r31.u32 + 192, r23.u32);
	// b 0x82468ab0
	goto loc_82468AB0;
loc_82467E24:
	// li r11,40
	ctx.r11.s64 = 40;
	// stw r23,192(r31)
	REX_STORE_U32(r31.u32 + 192, r23.u32);
	// b 0x82468aac
	goto loc_82468AAC;
loc_82467E30:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8246cb88
	ctx.lr = 0x82467E38;
	sub_8246CB88(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r11.u32);
loc_82467E4C:
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// addi r28,r26,224
	r28.s64 = r26.s64 + 224;
	// mr r27,r23
	r27.u64 = r23.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x8246e538
	ctx.lr = 0x82467E64;
	sub_8246E538(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82467f0c
	if (!ctx.cr6.gt) goto loc_82467F0C;
	// mr r29,r24
	r29.u64 = r24.u64;
	// rlwinm r10,r24,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
loc_82467E88:
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lhzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r10,r7,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x824658f8
	ctx.lr = 0x82467EB0;
	sub_824658F8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// and r27,r8,r27
	r27.u64 = ctx.r8.u64 & r27.u64;
	// bl 0x82449dd0
	ctx.lr = 0x82467EE0;
	sub_82449DD0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
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
	// blt cr6,0x82467e88
	if (ctx.cr6.lt) goto loc_82467E88;
loc_82467F0C:
	// lhz r11,110(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 110);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// mulli r10,r11,90
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(90));
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// stw r8,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r8.u32);
	// stw r16,136(r26)
	REX_STORE_U32(r26.u32 + 136, r16.u32);
	// bne cr6,0x82468ad8
	if (!ctx.cr6.eq) goto loc_82468AD8;
	// li r11,30
	ctx.r11.s64 = 30;
	// b 0x82468aa8
	goto loc_82468AA8;
loc_82467F34:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r26,224
	ctx.r3.s64 = r26.s64 + 224;
	// bl 0x824658f8
	ctx.lr = 0x82467F44;
	sub_824658F8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r11.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82468aec
	if (ctx.cr6.eq) goto loc_82468AEC;
	// stw r17,40(r26)
	REX_STORE_U32(r26.u32 + 40, r17.u32);
	// b 0x82468ab0
	goto loc_82468AB0;
loc_82467F6C:
	// li r11,42
	ctx.r11.s64 = 42;
	// stw r11,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r11.u32);
loc_82467F74:
	// li r11,39
	ctx.r11.s64 = 39;
	// stw r11,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r11.u32);
loc_82467F7C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r26,224
	ctx.r3.s64 = r26.s64 + 224;
	// bl 0x824658f8
	ctx.lr = 0x82467F8C;
	sub_824658F8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,48
	ctx.r10.s64 = 48;
	// stw r11,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r11.u32);
	// stw r10,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r10.u32);
loc_82467FA8:
	// addi r28,r26,224
	r28.s64 = r26.s64 + 224;
	// lhz r4,34(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 34);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8246e538
	ctx.lr = 0x82467FB8;
	sub_8246E538(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82468050
	if (!ctx.cr6.gt) goto loc_82468050;
	// mr r29,r24
	r29.u64 = r24.u64;
	// rlwinm r10,r24,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
loc_82467FDC:
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lhzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r10,r7,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x824658f8
	ctx.lr = 0x82468004;
	sub_824658F8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
	// bl 0x82449dd0
	ctx.lr = 0x82468024;
	sub_82449DD0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
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
	// blt cr6,0x82467fdc
	if (ctx.cr6.lt) goto loc_82467FDC;
loc_82468050:
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r24,40(r31)
	REX_STORE_U32(r31.u32 + 40, r24.u32);
	// stw r11,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r11.u32);
loc_8246805C:
	// li r11,38
	ctx.r11.s64 = 38;
	// stw r11,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r11.u32);
loc_82468064:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82468094
	if (!ctx.cr6.eq) goto loc_82468094;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r26,224
	ctx.r3.s64 = r26.s64 + 224;
	// bl 0x824658f8
	ctx.lr = 0x82468080;
	sub_824658F8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r11.u32);
loc_82468094:
	// li r11,37
	ctx.r11.s64 = 37;
	// stw r11,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r11.u32);
loc_8246809C:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824680e0
	if (!ctx.cr6.eq) goto loc_824680E0;
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82468130
	if (!ctx.cr6.eq) goto loc_82468130;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r26,224
	ctx.r3.s64 = r26.s64 + 224;
	// bl 0x824658f8
	ctx.lr = 0x824680C4;
	sub_824658F8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,168(r31)
	REX_STORE_U16(r31.u32 + 168, ctx.r10.u16);
	// b 0x82468130
	goto loc_82468130;
loc_824680E0:
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82468130
	if (!ctx.cr6.eq) goto loc_82468130;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82468130
	if (ctx.cr6.eq) goto loc_82468130;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r26,224
	ctx.r3.s64 = r26.s64 + 224;
	// bl 0x824658f8
	ctx.lr = 0x82468108;
	sub_824658F8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x82468aec
	if (!ctx.cr6.lt) goto loc_82468AEC;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82468aec
	if (ctx.cr6.lt) goto loc_82468AEC;
	// stw r11,632(r31)
	REX_STORE_U32(r31.u32 + 632, ctx.r11.u32);
loc_82468130:
	// li r11,44
	ctx.r11.s64 = 44;
	// stw r11,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r11.u32);
loc_82468138:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8246818c
	if (!ctx.cr6.eq) goto loc_8246818C;
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8246818c
	if (!ctx.cr6.eq) goto loc_8246818C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r26,224
	ctx.r3.s64 = r26.s64 + 224;
	// bl 0x824658f8
	ctx.lr = 0x82468160;
	sub_824658F8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// bgt cr6,0x82468aec
	if (ctx.cr6.gt) goto loc_82468AEC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82468aec
	if (ctx.cr6.lt) goto loc_82468AEC;
	// sth r11,170(r31)
	REX_STORE_U16(r31.u32 + 170, ctx.r11.u16);
loc_8246818C:
	// li r11,46
	ctx.r11.s64 = 46;
	// stw r11,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r11.u32);
loc_82468194:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824681ec
	if (!ctx.cr6.eq) goto loc_824681EC;
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824681ec
	if (!ctx.cr6.eq) goto loc_824681EC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r26,224
	ctx.r3.s64 = r26.s64 + 224;
	// bl 0x824658f8
	ctx.lr = 0x824681BC;
	sub_824658F8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82468aec
	if (ctx.cr6.lt) goto loc_82468AEC;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x82468aec
	if (ctx.cr6.gt) goto loc_82468AEC;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// sth r11,172(r31)
	REX_STORE_U16(r31.u32 + 172, ctx.r11.u16);
loc_824681EC:
	// stw r21,40(r26)
	REX_STORE_U32(r26.u32 + 40, r21.u32);
loc_824681F0:
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82468230
	if (ctx.cr6.eq) goto loc_82468230;
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82468230
	if (!ctx.cr6.eq) goto loc_82468230;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r26,224
	ctx.r3.s64 = r26.s64 + 224;
	// bl 0x824658f8
	ctx.lr = 0x82468218;
	sub_824658F8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,174(r31)
	REX_STORE_U16(r31.u32 + 174, ctx.r10.u16);
loc_82468230:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82468244
	if (!ctx.cr6.eq) goto loc_82468244;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82468aac
	goto loc_82468AAC;
loc_82468244:
	// stw r15,40(r26)
	REX_STORE_U32(r26.u32 + 40, r15.u32);
	// b 0x82468ab0
	goto loc_82468AB0;
loc_8246824C:
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r11,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r11.u32);
loc_82468254:
	// li r11,29
	ctx.r11.s64 = 29;
	// stw r11,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r11.u32);
loc_8246825C:
	// li r11,33
	ctx.r11.s64 = 33;
	// sth r24,150(r26)
	REX_STORE_U16(r26.u32 + 150, r24.u16);
	// stw r24,44(r26)
	REX_STORE_U32(r26.u32 + 44, r24.u32);
	// stw r11,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r11.u32);
loc_8246826C:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82468aac
	goto loc_82468AAC;
loc_82468274:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// addi r30,r26,224
	r30.s64 = r26.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8246e538
	ctx.lr = 0x82468288;
	sub_8246E538(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne cr6,0x824682e4
	if (!ctx.cr6.eq) goto loc_824682E4;
	// bl 0x824658f8
	ctx.lr = 0x824682B0;
	sub_824658F8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 320);
	// stw r11,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// lwz r9,320(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lwz r8,40(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// stw r24,68(r9)
	REX_STORE_U32(ctx.r9.u32 + 68, r24.u32);
	// rlwinm r30,r7,27,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r24,284(r31)
	REX_STORE_U32(r31.u32 + 284, r24.u32);
	// b 0x824683a4
	goto loc_824683A4;
loc_824682E4:
	// bl 0x824658f8
	ctx.lr = 0x824682E8;
	sub_824658F8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 320);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,68(r10)
	REX_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,320(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 320);
	// stw r8,1844(r9)
	REX_STORE_U32(ctx.r9.u32 + 1844, ctx.r8.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r7,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r7.u32);
	// bl 0x824658f8
	ctx.lr = 0x82468324;
	sub_824658F8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// bl 0x824658f8
	ctx.lr = 0x8246834C;
	sub_824658F8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,1816(r11)
	REX_STORE_U32(ctx.r11.u32 + 1816, ctx.r10.u32);
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lwz r8,68(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,1816(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 1816);
	// lwz r7,40(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cntlzw r5,r9
	ctx.r5.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r4,r6,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// and r30,r3,r4
	r30.u64 = ctx.r3.u64 & ctx.r4.u64;
	// addi r4,r11,1776
	ctx.r4.s64 = ctx.r11.s64 + 1776;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// beq cr6,0x824683a0
	if (ctx.cr6.eq) goto loc_824683A0;
	// li r5,0
	ctx.r5.s64 = 0;
loc_824683A0:
	// bl 0x8246bc28
	ctx.lr = 0x824683A4;
	sub_8246BC28(ctx, base);
loc_824683A4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r23,296(r31)
	REX_STORE_U32(r31.u32 + 296, r23.u32);
	// bne cr6,0x82468ad8
	if (!ctx.cr6.eq) goto loc_82468AD8;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82468aac
	goto loc_82468AAC;
loc_824683B8:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// stw r24,592(r31)
	REX_STORE_U32(r31.u32 + 592, r24.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x824683f4
	if (ctx.cr6.lt) goto loc_824683F4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r26,224
	ctx.r3.s64 = r26.s64 + 224;
	// bl 0x824658f8
	ctx.lr = 0x824683D8;
	sub_824658F8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824683f4
	if (ctx.cr6.eq) goto loc_824683F4;
	// stw r23,592(r31)
	REX_STORE_U32(r31.u32 + 592, r23.u32);
loc_824683F4:
	// li r11,31
	ctx.r11.s64 = 31;
	// sth r24,150(r26)
	REX_STORE_U16(r26.u32 + 150, r24.u16);
	// stw r11,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r11.u32);
loc_82468400:
	// lwz r11,592(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 592);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824684d0
	if (!ctx.cr6.eq) goto loc_824684D0;
	// lhz r11,150(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 150);
	// lhz r10,580(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x824684d0
	if (!ctx.cr6.lt) goto loc_824684D0;
	// addi r29,r26,224
	r29.s64 = r26.s64 + 224;
loc_82468428:
	// lhz r10,150(r26)
	ctx.r10.u64 = REX_LOAD_U16(r26.u32 + 150);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
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
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mulli r9,r5,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1776));
	// add r30,r9,r10
	r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,36(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 36);
	// addi r4,r10,3
	ctx.r4.s64 = ctx.r10.s64 + 3;
	// srawi r3,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 2;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x82468480
	if (!ctx.cr6.gt) goto loc_82468480;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
loc_82468470:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x82468470
	if (ctx.cr6.gt) goto loc_82468470;
loc_82468480:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824658f8
	ctx.lr = 0x82468490;
	sub_824658F8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,484(r30)
	REX_STORE_U32(r30.u32 + 484, ctx.r11.u32);
	// lhz r10,150(r26)
	ctx.r10.u64 = REX_LOAD_U16(r26.u32 + 150);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sth r8,150(r26)
	REX_STORE_U16(r26.u32 + 150, ctx.r8.u16);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// lhz r6,580(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82468428
	if (ctx.cr6.lt) goto loc_82468428;
loc_824684D0:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r11.u32);
loc_824684D8:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x824684f0
	if (ctx.cr6.gt) goto loc_824684F0;
	// bl 0x8246ba58
	ctx.lr = 0x824684EC;
	sub_8246BA58(ctx, base);
	// b 0x824684f4
	goto loc_824684F4;
loc_824684F0:
	// bl 0x8246d470
	ctx.lr = 0x824684F4;
	sub_8246D470(ctx, base);
loc_824684F4:
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,296(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 296);
	// bl 0x82466b70
	ctx.lr = 0x8246850C;
	sub_82466B70(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r11,150(r26)
	REX_STORE_U16(r26.u32 + 150, ctx.r11.u16);
	// lhz r10,580(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82468578
	if (!ctx.cr6.gt) goto loc_82468578;
	// mr r30,r24
	r30.u64 = r24.u64;
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
loc_8246852C:
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 320);
	// li r3,0
	ctx.r3.s64 = 0;
	// lhzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r11,r7,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r29,r11,r10
	r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r24,180(r29)
	REX_STORE_U8(r29.u32 + 180, r24.u8);
	// bl 0x82464610
	ctx.lr = 0x82468554;
	sub_82464610(ctx, base);
	// addi r6,r30,1
	ctx.r6.s64 = r30.s64 + 1;
	// stfs f1,196(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r29.u32 + 196, temp.u32);
	// lhz r5,580(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8246852c
	if (ctx.cr6.lt) goto loc_8246852C;
loc_82468578:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r24,132(r26)
	REX_STORE_U32(r26.u32 + 132, r24.u32);
	// stw r11,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r11.u32);
loc_82468584:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8246c9a8
	ctx.lr = 0x8246858C;
	sub_8246C9A8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// lwz r11,400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 400);
	// li r10,6
	ctx.r10.s64 = 6;
	// sth r11,152(r26)
	REX_STORE_U16(r26.u32 + 152, ctx.r11.u16);
	// sth r24,150(r26)
	REX_STORE_U16(r26.u32 + 150, r24.u16);
	// stw r10,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r10.u32);
loc_824685AC:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824685cc
	if (!ctx.cr6.eq) goto loc_824685CC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8246bd90
	ctx.lr = 0x824685C0;
	sub_8246BD90(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
loc_824685CC:
	// stw r15,40(r26)
	REX_STORE_U32(r26.u32 + 40, r15.u32);
loc_824685D0:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x8246865c
	if (ctx.cr6.gt) goto loc_8246865C;
	// addi r30,r26,224
	r30.s64 = r26.s64 + 224;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r22,r23
	r22.u64 = r23.u64;
	// bl 0x8246e538
	ctx.lr = 0x824685F0;
	sub_8246E538(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8246865c
	if (ctx.cr6.eq) goto loc_8246865C;
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lwz r10,424(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x8246865c
	if (!ctx.cr6.gt) goto loc_8246865C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824658f8
	ctx.lr = 0x82468630;
	sub_824658F8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// lhz r9,114(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 114);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8246865c
	if (!ctx.cr6.eq) goto loc_8246865C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82468aec
	if (!ctx.cr6.eq) goto loc_82468AEC;
loc_8246865C:
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82468790
	if (!ctx.cr6.gt) goto loc_82468790;
	// mr r29,r24
	r29.u64 = r24.u64;
	// clrlwi r27,r22,24
	r27.u64 = r22.u32 & 0xFF;
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
loc_82468678:
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lwz r8,8(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lwz r7,460(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 460);
	// lhzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mulli r9,r5,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1776));
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r9,r10
	r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r28,r11,r8
	r28.u64 = ctx.r11.u64 + ctx.r8.u64;
	// beq cr6,0x824686c0
	if (ctx.cr6.eq) goto loc_824686C0;
	// lwz r11,456(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 456);
	// lhz r10,118(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 118);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// sraw r9,r8,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r9.s64 = ctx.r8.s32 >> temp.u32;
	// b 0x824686dc
	goto loc_824686DC;
loc_824686C0:
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r11,118(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 118);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// beq cr6,0x824686dc
	if (ctx.cr6.eq) goto loc_824686DC;
	// lwz r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 456);
	// slw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
loc_824686DC:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x824686f4
	if (ctx.cr6.eq) goto loc_824686F4;
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lwz r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 456);
	// sraw r10,r11,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r10.s64 = ctx.r11.s32 >> temp.u32;
	// b 0x82468714
	goto loc_82468714;
loc_824686F4:
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// beq cr6,0x82468710
	if (ctx.cr6.eq) goto loc_82468710;
	// lwz r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 456);
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// b 0x82468714
	goto loc_82468714;
loc_82468710:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82468714:
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// lwz r9,56(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 56);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// lwz r9,460(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 460);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82468740
	if (ctx.cr6.eq) goto loc_82468740;
	// lwz r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 456);
	// sraw r11,r11,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r11.s64 = ctx.r11.s32 >> temp.u32;
	// b 0x82468754
	goto loc_82468754;
loc_82468740:
	// lwz r10,448(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 448);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82468754
	if (ctx.cr6.eq) goto loc_82468754;
	// lwz r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 456);
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
loc_82468754:
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82468760;
	sub_822D5870(ctx, base);
	// stw r24,4(r28)
	REX_STORE_U32(r28.u32 + 4, r24.u32);
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,424(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 424);
	// lwz r8,16(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// stb r27,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, r27.u8);
	// lhz r7,580(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82468678
	if (ctx.cr6.lt) goto loc_82468678;
loc_82468790:
	// li r11,9
	ctx.r11.s64 = 9;
	// sth r24,150(r26)
	REX_STORE_U16(r26.u32 + 150, r24.u16);
	// sth r24,152(r26)
	REX_STORE_U16(r26.u32 + 152, r24.u16);
	// stw r11,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r11.u32);
loc_824687A0:
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 280);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82468aa4
	if (!ctx.cr6.eq) goto loc_82468AA4;
	// lhz r11,150(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 150);
	// lhz r10,580(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82468aa4
	if (!ctx.cr6.lt) goto loc_82468AA4;
loc_824687C4:
	// lhz r11,150(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 150);
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lwz r7,60(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 60);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// lhzx r5,r6,r9
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r9.u32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mulli r11,r4,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1776));
	// add r27,r11,r10
	r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x82468818
	if (!ctx.cr6.gt) goto loc_82468818;
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82468818
	if (!ctx.cr6.eq) goto loc_82468818;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8246d310
	ctx.lr = 0x82468814;
	sub_8246D310(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_82468818:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// lwz r11,424(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 424);
	// lwz r10,40(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 40);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lbz r22,0(r9)
	r22.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// bne cr6,0x82468868
	if (!ctx.cr6.eq) goto loc_82468868;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x82468868
	if (ctx.cr6.gt) goto loc_82468868;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(r22.s32, 1, ctx.xer);
	// bne cr6,0x82468a50
	if (!ctx.cr6.eq) goto loc_82468A50;
	// lwz r11,304(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 304);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 4);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x82468860;
	sub_822D5870(ctx, base);
	// stw r24,64(r27)
	REX_STORE_U32(r27.u32 + 64, r24.u32);
	// b 0x82468a50
	goto loc_82468A50;
loc_82468868:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// mr r28,r19
	r28.u64 = r19.u64;
	// lwz r30,4(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82468880
	if (!ctx.cr6.gt) goto loc_82468880;
	// mr r28,r20
	r28.u64 = r20.u64;
loc_82468880:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(r22.s32, 1, ctx.xer);
	// bne cr6,0x82468a00
	if (!ctx.cr6.eq) goto loc_82468A00;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x824688bc
	if (!ctx.cr6.gt) goto loc_824688BC;
	// lwz r10,444(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 444);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x824688bc
	if (!ctx.cr6.eq) goto loc_824688BC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r5,304(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 304);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8246da58
	ctx.lr = 0x824688AC;
	sub_8246DA58(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// b 0x824689d8
	goto loc_824689D8;
loc_824688BC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824688f8
	if (!ctx.cr6.eq) goto loc_824688F8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r26,224
	ctx.r3.s64 = r26.s64 + 224;
	// bl 0x824658f8
	ctx.lr = 0x824688D4;
	sub_824658F8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,10
	ctx.r10.s64 = ctx.r11.s64 + 10;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lhz r11,152(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 152);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,152(r26)
	REX_STORE_U16(r26.u32 + 152, ctx.r8.u16);
loc_824688F8:
	// lhz r11,152(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 152);
	// lwz r10,304(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 304);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x824689d8
	if (!ctx.cr6.lt) goto loc_824689D8;
	// addi r29,r26,224
	r29.s64 = r26.s64 + 224;
loc_82468910:
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82325c30
	ctx.lr = 0x82468928;
	sub_82325C30(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82319a70
	ctx.lr = 0x82468940;
	sub_82319A70(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82468af4
	if (ctx.cr6.lt) goto loc_82468AF4;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// addi r9,r11,-60
	ctx.r9.s64 = ctx.r11.s64 + -60;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// ble cr6,0x82468980
	if (!ctx.cr6.gt) goto loc_82468980;
	// lhz r11,152(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 152);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82468980
	if (!ctx.cr6.eq) goto loc_82468980;
	// lwz r11,436(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 436);
	// divw r11,r21,r11
	ctx.r11.u64 = uint32_t((ctx.r11.s32 && !(r21.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? r21.s32 / ctx.r11.s32 : 0);
	// b 0x824689a4
	goto loc_824689A4;
loc_82468980:
	// lhz r11,152(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 152);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82468998
	if (!ctx.cr6.eq) goto loc_82468998;
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// b 0x824689a4
	goto loc_824689A4;
loc_82468998:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
loc_824689A4:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r9,r10,r30
	REX_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
	// lhz r8,152(r26)
	ctx.r8.u64 = REX_LOAD_U16(r26.u32 + 152);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// clrlwi r4,r6,16
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r6,152(r26)
	REX_STORE_U16(r26.u32 + 152, ctx.r6.u16);
	// lwz r5,304(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 304);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// cmpw cr6,r3,r5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82468910
	if (ctx.cr6.lt) goto loc_82468910;
loc_824689D8:
	// lhz r11,114(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 114);
	// lwz r10,424(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 424);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lhzx r6,r8,r7
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// stw r5,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r5.u32);
	// sth r24,152(r26)
	REX_STORE_U16(r26.u32 + 152, r24.u16);
	// b 0x82468a08
	goto loc_82468A08;
loc_82468A00:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x82468a50
	if (ctx.cr6.eq) goto loc_82468A50;
loc_82468A08:
	// lwz r11,304(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 304);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82468a48
	if (!ctx.cr6.gt) goto loc_82468A48;
	// lwz r8,304(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 304);
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// rlwinm r10,r23,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
loc_82468A24:
	// lwzx r10,r10,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82468a34
	if (!ctx.cr6.gt) goto loc_82468A34;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82468A34:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x82468a24
	if (ctx.cr6.lt) goto loc_82468A24;
loc_82468A48:
	// stw r9,64(r27)
	REX_STORE_U32(r27.u32 + 64, ctx.r9.u32);
	// stw r23,444(r27)
	REX_STORE_U32(r27.u32 + 444, r23.u32);
loc_82468A50:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82468a78
	if (!ctx.cr6.gt) goto loc_82468A78;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(r22.s32, 1, ctx.xer);
	// bne cr6,0x82468a78
	if (!ctx.cr6.eq) goto loc_82468A78;
	// lhz r11,118(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 118);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// stw r10,428(r27)
	REX_STORE_U32(r27.u32 + 428, ctx.r10.u32);
	// lwz r9,304(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 304);
	// stw r9,432(r27)
	REX_STORE_U32(r27.u32 + 432, ctx.r9.u32);
loc_82468A78:
	// lhz r11,150(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 150);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,150(r26)
	REX_STORE_U16(r26.u32 + 150, ctx.r9.u16);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// lhz r7,580(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x824687c4
	if (ctx.cr6.lt) goto loc_824687C4;
loc_82468AA4:
	// li r11,10
	ctx.r11.s64 = 10;
loc_82468AA8:
	// li r27,14
	r27.s64 = 14;
loc_82468AAC:
	// stw r11,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r11.u32);
loc_82468AB0:
	// lwz r11,40(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 40);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82467790
	if (!ctx.cr6.eq) goto loc_82467790;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4ea0
	return;
loc_82468AC8:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4ea0
	return;
loc_82468AD8:
	// li r11,10
	ctx.r11.s64 = 10;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r11,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4ea0
	return;
loc_82468AEC:
	// lis r25,-32764
	r25.s64 = -2147221504;
	// ori r25,r25,2
	r25.u64 = r25.u64 | 2;
loc_82468AF4:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_824B5138) {
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
	ctx.lr = 0x824B5140;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1152(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 1152);
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// vspltish v0,6
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x6)));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r31,1164(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 1164);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r28,260(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v12,v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xD0C))));
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stvx128 v12,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// bl 0x824a6648
	ctx.lr = 0x824B5194;
	sub_824A6648(ctx, base);
	// cntlzw r7,r28
	ctx.r7.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// vspltish v11,8
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x8)));
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r5,r7,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// vspltish v10,-1
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// vspltisb v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// and r9,r5,r27
	ctx.r9.u64 = ctx.r5.u64 & r27.u64;
	// vspltish v6,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x1)));
	// vspltish v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x2)));
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// addi r4,r9,3
	ctx.r4.s64 = ctx.r9.s64 + 3;
	// vslh v2,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// vspltish v5,5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x5)));
	// slw r9,r6,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r4.u8 & 0x3F));
	// vspltish v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x0)));
	// bne cr6,0x824b5290
	if (!ctx.cr6.eq) goto loc_824B5290;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824b5388
	if (!ctx.cr6.gt) goto loc_824B5388;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,4
	ctx.r8.s64 = 4;
loc_824B51F4:
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v9,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// vsldoi128 v11,v13,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v10,v13,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// vsldoi128 v13,v13,v63,6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 10));
	// vsubshs v4,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// lvx128 v3,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v11,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v31,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v30,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v10,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v26,v30,v1
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v25,v29,v11
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v24,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v23,v27,v28
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v22,v25,v26
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vsubshs v21,v13,v24
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vadduhm v20,v22,v23
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v19,v21,v4
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v18,v20,v3
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v17,v18,v19
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vsrah v16,v17,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v62,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vor v8,v8,v16
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// stvewx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// bdnz 0x824b51f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B51F4;
	// vand v0,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// li r3,0
	ctx.r3.s64 = 0;
	// vcmpgtuh. v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed4
	return;
loc_824B5290:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824b5388
	if (!ctx.cr6.gt) goto loc_824B5388;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_824B52A8:
	// lvx128 v13,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v11,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v3,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v10,v11,v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 14));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// vsldoi128 v9,v13,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsubshs v31,v7,v3
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsldoi v4,v11,v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 12));
	// vsldoi128 v3,v13,v61,4
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 12));
	// vsubshs v30,v7,v1
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v10,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v11,v11,v13,6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 10));
	// vslh v28,v9,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v13,v13,v61,6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 10));
	// vslh v27,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v21,v27,v29
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v20,v26,v10
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v23,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v4,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v25,v28
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v16,v24,v9
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v18,v3,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v10,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v9,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vadduhm v4,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vslh v14,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v3,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vsubshs v1,v13,v15
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// lvx128 v13,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v28,v9,v10
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubshs v29,v11,v14
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vadduhm v27,v3,v4
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v26,v1,v31
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vadduhm v24,v28,v13
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v25,v29,v30
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vadduhm v23,v27,v13
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// lvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v22,v24,v25
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v21,v23,v26
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vsrah v20,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v19,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v60,v8,v20
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v20.u8)));
	// vpkshus128 v59,v20,v19
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vor128 v8,v60,v19
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)v19.u8)));
	// stvx128 v59,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// bdnz 0x824b52a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B52A8;
loc_824B5388:
	// vand v0,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// li r3,0
	ctx.r3.s64 = 0;
	// vcmpgtuh. v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed4
	return;
}

