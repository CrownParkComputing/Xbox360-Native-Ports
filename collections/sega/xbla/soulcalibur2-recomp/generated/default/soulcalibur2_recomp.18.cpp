#include "soulcalibur2_funcs.18.h"

DEFINE_REX_FUNC(sub_820E0AF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f10,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f12
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f7,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f12,f13
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f5,f10,f13
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f8,f10,f10
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f0,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f3,f10,f12
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f4,f7,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f2,f7,f12
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f10,f7,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f12,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f12,44(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f12,28(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fmuls f7,f6,f0
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmuls f12,f5,f0
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f5,f3,f0
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f6,f4,f0
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f4,f2,f0
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fadds f10,f9,f11
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fadds f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// fadds f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// fsubs f8,f5,f6
	ctx.f8.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// stfs f8,36(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fadds f8,f4,f12
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// stfs f8,32(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fsubs f8,f7,f0
	ctx.f8.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// stfs f8,16(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fadds f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fsubs f0,f12,f4
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f4.f64));
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fadds f0,f5,f6
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fsubs f0,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fsubs f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820ED080) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// addi r31,r11,32336
	r31.s64 = ctx.r11.s64 + 32336;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// addi r3,r10,-28232
	ctx.r3.s64 = ctx.r10.s64 + -28232;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,4892(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 4892);
	// bl 0x820f2850
	ctx.lr = 0x820ED0C8;
	sub_820F2850(ctx, base);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x820ed190
	if (!ctx.cr6.eq) goto loc_820ED190;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r11,r11,-7072
	ctx.r11.s64 = ctx.r11.s64 + -7072;
	// lbz r10,188(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 188);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x820ed190
	if (!ctx.cr0.eq) goto loc_820ED190;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r10,r10,3884
	ctx.r10.u64 = ctx.r10.u64 | 3884;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820ed190
	if (!ctx.cr0.eq) goto loc_820ED190;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lhz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820ed190
	if (!ctx.cr0.eq) goto loc_820ED190;
	// lwz r11,4900(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4900);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x820ed190
	if (!ctx.cr6.eq) goto loc_820ED190;
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(f31.f64) ? int64_t(0x80000000U) : (f31.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f31.f64));
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x820ea3b8
	ctx.lr = 0x820ED134;
	sub_820EA3B8(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r6,r8,16800
	ctx.r6.s64 = ctx.r8.s64 + 16800;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-12416
	ctx.r8.s64 = ctx.r11.s64 + -12416;
	// addi r7,r10,-12440
	ctx.r7.s64 = ctx.r10.s64 + -12440;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x820ED164;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820ed180
	if (ctx.cr0.eq) goto loc_820ED180;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,31764
	ctx.r10.s64 = ctx.r10.s64 + 31764;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x820ed184
	goto loc_820ED184;
loc_820ED180:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820ED184:
	// fadds f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64 + f30.f64));
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stfs f29,84(r11)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r11.u32 + 84, temp.u32);
loc_820ED190:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

DEFINE_REX_FUNC(sub_820F3E90) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x820F3E98;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f4004
	if (ctx.cr6.eq) goto loc_820F4004;
	// bl 0x820f9418
	ctx.lr = 0x820F3EB8;
	sub_820F9418(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f3ee4
	if (ctx.cr6.eq) goto loc_820F3EE4;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x820f4004
	if (!ctx.cr6.eq) goto loc_820F4004;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x820f4000
	goto loc_820F4000;
loc_820F3EE4:
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820F3EF4;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f3f1c
	if (ctx.cr0.eq) goto loc_820F3F1C;
	// li r5,27
	ctx.r5.s64 = 27;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820F3F0C;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f3f1c
	if (ctx.cr0.eq) goto loc_820F3F1C;
loc_820F3F14:
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x820f4000
	goto loc_820F4000;
loc_820F3F1C:
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820F3F2C;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f3f44
	if (ctx.cr0.eq) goto loc_820F3F44;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f3f5c
	if (!ctx.cr6.eq) goto loc_820F3F5C;
	// b 0x820f3ffc
	goto loc_820F3FFC;
loc_820F3F44:
	// li r5,27
	ctx.r5.s64 = 27;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820F3F54;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820f3f14
	if (!ctx.cr0.eq) goto loc_820F3F14;
loc_820F3F5C:
	// li r5,9
	ctx.r5.s64 = 9;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820F3F6C;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f3f7c
	if (ctx.cr0.eq) goto loc_820F3F7C;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x820f4000
	goto loc_820F4000;
loc_820F3F7C:
	// li r5,28
	ctx.r5.s64 = 28;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820F3F8C;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x820f3fb8
	if (ctx.cr0.eq) goto loc_820F3FB8;
	// li r5,27
	ctx.r5.s64 = 27;
	// bl 0x820f8db8
	ctx.lr = 0x820F3FA4;
	sub_820F8DB8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	// addi r11,r11,65
	ctx.r11.s64 = ctx.r11.s64 + 65;
	// b 0x820f4000
	goto loc_820F4000;
loc_820F3FB8:
	// li r5,29
	ctx.r5.s64 = 29;
	// bl 0x820f8db8
	ctx.lr = 0x820F3FC0;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x820f3fec
	if (ctx.cr0.eq) goto loc_820F3FEC;
	// li r5,27
	ctx.r5.s64 = 27;
	// bl 0x820f8db8
	ctx.lr = 0x820F3FD8;
	sub_820F8DB8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,23,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x180;
	// addi r11,r11,129
	ctx.r11.s64 = ctx.r11.s64 + 129;
	// b 0x820f4000
	goto loc_820F4000;
loc_820F3FEC:
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x820f8db8
	ctx.lr = 0x820F3FF4;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f4004
	if (ctx.cr0.eq) goto loc_820F4004;
loc_820F3FFC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820F4000:
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_820F4004:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_820FC840) {
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
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FC86C;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820fc88c
	if (!ctx.cr0.eq) goto loc_820FC88C;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lhz r11,586(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 586);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820fc88c
	if (ctx.cr0.eq) goto loc_820FC88C;
	// li r5,64
	ctx.r5.s64 = 64;
	// b 0x820fc894
	goto loc_820FC894;
loc_820FC88C:
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
loc_820FC894:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FC89C;
	sub_820F8D58(ctx, base);
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

DEFINE_REX_FUNC(sub_820FDF50) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x820FDF58;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820fdf90
	if (ctx.cr6.eq) goto loc_820FDF90;
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x820f8d58
	ctx.lr = 0x820FDF84;
	sub_820F8D58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// b 0x820fe148
	goto loc_820FE148;
loc_820FDF90:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820fe0a0
	if (ctx.cr6.lt) goto loc_820FE0A0;
	// beq cr6,0x820fe018
	if (ctx.cr6.eq) goto loc_820FE018;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x820fe0ec
	if (!ctx.cr6.lt) goto loc_820FE0EC;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// lwz r5,40(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FDFBC;
	sub_820F8D58(ctx, base);
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x820f8db8
	ctx.lr = 0x820FDFCC;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820fdfe0
	if (!ctx.cr0.eq) goto loc_820FDFE0;
	// li r29,0
	r29.s64 = 0;
	// stw r29,36(r31)
	REX_STORE_U32(r31.u32 + 36, r29.u32);
	// b 0x820fe098
	goto loc_820FE098;
loc_820FDFE0:
	// li r3,30
	ctx.r3.s64 = 30;
	// lwz r30,36(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 36);
	// bl 0x820fed80
	ctx.lr = 0x820FDFEC;
	sub_820FED80(ctx, base);
	// addi r11,r3,60
	ctx.r11.s64 = ctx.r3.s64 + 60;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x820fe00c
	if (!ctx.cr6.gt) goto loc_820FE00C;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// bl 0x820fdeb0
	ctx.lr = 0x820FE008;
	sub_820FDEB0(ctx, base);
	// b 0x820fe0ec
	goto loc_820FE0EC;
loc_820FE00C:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// b 0x820fe0ec
	goto loc_820FE0EC;
loc_820FE018:
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FE02C;
	sub_820F8DB8(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820fe04c
	if (!ctx.cr0.eq) goto loc_820FE04C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,40(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x820f8d58
	ctx.lr = 0x820FE048;
	sub_820F8D58(ctx, base);
	// b 0x820fe070
	goto loc_820FE070;
loc_820FE04C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820fdeb0
	ctx.lr = 0x820FE054;
	sub_820FDEB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,40(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x820f8d58
	ctx.lr = 0x820FE064;
	sub_820F8D58(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r29,36(r31)
	REX_STORE_U32(r31.u32 + 36, r29.u32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_820FE070:
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FE080;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820fe0ec
	if (ctx.cr0.eq) goto loc_820FE0EC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FE098;
	sub_820F8D58(ctx, base);
loc_820FE098:
	// stw r29,32(r31)
	REX_STORE_U32(r31.u32 + 32, r29.u32);
	// b 0x820fe0ec
	goto loc_820FE0EC;
loc_820FE0A0:
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FE0B4;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820fe0dc
	if (!ctx.cr0.eq) goto loc_820FE0DC;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lhz r11,586(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 586);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820fe0dc
	if (ctx.cr0.eq) goto loc_820FE0DC;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FE0D8;
	sub_820F8D58(ctx, base);
	// b 0x820fe0ec
	goto loc_820FE0EC;
loc_820FE0DC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820fdeb0
	ctx.lr = 0x820FE0E4;
	sub_820FDEB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_820FE0EC:
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lbz r11,176(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 176);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820fe12c
	if (!ctx.cr0.eq) goto loc_820FE12C;
	// lbz r11,177(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 177);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820fe12c
	if (!ctx.cr0.eq) goto loc_820FE12C;
	// lbz r11,178(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 178);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820fe12c
	if (!ctx.cr0.eq) goto loc_820FE12C;
	// lbz r11,179(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 179);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820fe12c
	if (!ctx.cr0.eq) goto loc_820FE12C;
	// lbz r11,180(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 180);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820fe148
	if (ctx.cr0.eq) goto loc_820FE148;
loc_820FE12C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lhz r11,588(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 588);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820fe148
	if (ctx.cr6.eq) goto loc_820FE148;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x820f8d58
	ctx.lr = 0x820FE148;
	sub_820F8D58(ctx, base);
loc_820FE148:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821079C8) {
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
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lbz r11,393(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 393);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82107a40
	if (!ctx.cr6.eq) goto loc_82107A40;
	// bl 0x82106650
	ctx.lr = 0x821079F0;
	sub_82106650(ctx, base);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r31,r10,22960
	r31.s64 = ctx.r10.s64 + 22960;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// bl 0x82106c48
	ctx.lr = 0x82107A0C;
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
	ctx.lr = 0x82107A20;
	sub_82100C80(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,432
	ctx.r9.s64 = ctx.r11.s64 + 432;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,216(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 216);
	// stb r10,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// lwz r11,216(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 216);
	// stb r8,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
loc_82107A40:
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

DEFINE_REX_FUNC(sub_8210DD78) {
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
	// bl 0x82201818
	ctx.lr = 0x8210DD88;
	sub_82201818(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,28548(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28548);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210E7D8) {
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
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
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f11,27636(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 27636);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,28732(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28732);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f10,28728(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 28728);
	ctx.f10.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f9,28724(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 28724);
	ctx.f9.f64 = double(temp.f32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lfs f8,28720(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28720);
	ctx.f8.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,16232(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16232);
	ctx.f12.f64 = double(temp.f32);
	// li r3,6
	ctx.r3.s64 = 6;
	// stfs f1,92(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f1,108(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f1,124(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f1,140(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f1,156(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f1,172(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f10,132(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f8,144(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f11,148(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f8,160(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f10,164(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f12,188(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f12,204(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f12,220(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f0,228(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f0,232(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f12,236(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f0,244(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f0,248(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f0,252(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f0,256(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f0,260(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f0,264(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f0,268(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// bl 0x821e7c08
	ctx.lr = 0x8210E904;
	sub_821E7C08(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addis r3,r31,256
	ctx.r3.s64 = r31.s64 + 16777216;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// addi r3,r3,35
	ctx.r3.s64 = ctx.r3.s64 + 35;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x8210E91C;
	sub_820E68B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// ori r3,r3,34
	ctx.r3.u64 = ctx.r3.u64 | 34;
	// bl 0x820e68b8
	ctx.lr = 0x8210E930;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r3,r9,28676
	ctx.r3.s64 = ctx.r9.s64 + 28676;
	// lfd f2,28712(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + 28712);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lfd f1,28704(r10)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + 28704);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// stfd f2,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x8210E968;
	sub_821EACB0(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
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

DEFINE_REX_FUNC(sub_82116050) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lfs f13,236(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r11,13128
	r30.s64 = ctx.r11.s64 + 13128;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f31,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f31.f64 = double(temp.f32);
	// lfs f0,1840(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// lfs f30,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f30.f64 = double(temp.f32);
	// lfs f29,31220(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 31220);
	f29.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmadds f1,f0,f29,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, ctx.f13.f64)));
	// bl 0x82204ae0
	ctx.lr = 0x821160AC;
	sub_82204AE0(ctx, base);
	// stfs f1,236(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 236, temp.u32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// blt cr6,0x821160dc
	if (ctx.cr6.lt) goto loc_821160DC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,240(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,1840(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// lfs f13,16260(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16260);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f0,f13,f12
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// bl 0x82204ae0
	ctx.lr = 0x821160D8;
	sub_82204AE0(ctx, base);
	// stfs f1,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 240, temp.u32);
loc_821160DC:
	// lfs f0,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x82116154
	if (!ctx.cr6.gt) goto loc_82116154;
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82116134
	if (!ctx.cr6.gt) goto loc_82116134;
	// lfs f0,248(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x82116114
	if (ctx.cr6.lt) goto loc_82116114;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
loc_82116114:
	// lfs f13,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// lfs f0,1840(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmadds f1,f0,f29,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, ctx.f13.f64)));
	// bl 0x82204ae0
	ctx.lr = 0x8211612C;
	sub_82204AE0(ctx, base);
	// stfs f1,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 248, temp.u32);
	// b 0x82116154
	goto loc_82116154;
loc_82116134:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,244(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f3,16360(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16360);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x82204ae0
	ctx.lr = 0x82116150;
	sub_82204AE0(ctx, base);
	// stfs f1,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 244, temp.u32);
loc_82116154:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

DEFINE_REX_FUNC(sub_82119F40) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,124(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82119f80
	if (!ctx.cr6.gt) goto loc_82119F80;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82119f70
	if (!ctx.cr6.gt) goto loc_82119F70;
	// lfs f0,268(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82119f78
	goto loc_82119F78;
loc_82119F70:
	// lfs f13,268(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 268);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82119F78:
	// stfs f0,172(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// blr 
	return;
loc_82119F80:
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// stfs f13,172(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8211BA18) {
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
	ctx.lr = 0x8211BA20;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f28
	ctx.lr = 0x8211BA28;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lfs f27,248(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 248);
	f27.f64 = double(temp.f32);
	// addi r29,r3,192
	r29.s64 = ctx.r3.s64 + 192;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,29428(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 29428);
	// bl 0x8211e968
	ctx.lr = 0x8211BA4C;
	sub_8211E968(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f25,16204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16204);
	f25.f64 = double(temp.f32);
	// lfs f24,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	f24.f64 = double(temp.f32);
	// lfs f29,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f29.f64 = double(temp.f32);
	// lfs f26,2012(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2012);
	f26.f64 = double(temp.f32);
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211baac
	if (!ctx.cr6.eq) goto loc_8211BAAC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fmr f1,f25
	ctx.f1.f64 = f25.f64;
	// bl 0x820e1cc0
	ctx.lr = 0x8211BA88;
	sub_820E1CC0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,1996
	ctx.r11.s64 = ctx.r11.s64 + 1996;
	// lfs f31,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8211bb04
	if (!ctx.cr6.gt) goto loc_8211BB04;
	// fmuls f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 * f25.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x8211bb04
	goto loc_8211BB04;
loc_8211BAAC:
	// bl 0x820e22e8
	ctx.lr = 0x8211BAB0;
	sub_820E22E8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,1996
	ctx.r11.s64 = ctx.r11.s64 + 1996;
	// fmuls f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 * f26.f64));
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 * f26.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,2360(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2360);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8211baec
	if (!ctx.cr6.lt) goto loc_8211BAEC;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x8211bafc
	goto loc_8211BAFC;
loc_8211BAEC:
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_8211BAFC:
	// fadds f0,f27,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f27.f64 + f29.f64));
	// fmuls f27,f0,f24
	f27.f64 = double(float(ctx.f0.f64 * f24.f64));
loc_8211BB04:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f9,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f8,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f8.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f7,152(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 152);
	ctx.f7.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stfs f29,140(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f0,-30900(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30900);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,-30904(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -30904);
	f30.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,-30908(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -30908);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfs f12,17064(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 17064);
	ctx.f12.f64 = double(temp.f32);
	// addi r28,r31,128
	r28.s64 = r31.s64 + 128;
	// lfs f11,-30912(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -30912);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-30916(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -30916);
	ctx.f10.f64 = double(temp.f32);
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f29,156(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f9,176(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f8,180(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f7,184(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f11,160(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f10,168(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f29,172(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x820e2290
	ctx.lr = 0x8211BB8C;
	sub_820E2290(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x820e1c28
	ctx.lr = 0x8211BB98;
	sub_820E1C28(ctx, base);
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f28,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	f28.f64 = double(temp.f32);
	// lfs f0,2384(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2384);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f13,f28,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, f28.f64, ctx.f0.f64)));
	// bl 0x820e1cc0
	ctx.lr = 0x8211BBBC;
	sub_820E1CC0(ctx, base);
	// lfs f0,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8211bbd0
	if (!ctx.cr6.lt) goto loc_8211BBD0;
	// fmuls f27,f27,f26
	f27.f64 = double(float(f27.f64 * f26.f64));
loc_8211BBD0:
	// addi r30,r31,208
	r30.s64 = r31.s64 + 208;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e2028
	ctx.lr = 0x8211BBE8;
	sub_820E2028(ctx, base);
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r9,212(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 212);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r8,216(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 216);
	// lwz r7,220(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 220);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8211bc24
	if (!ctx.cr6.gt) goto loc_8211BC24;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-31120(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -31120);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8211bc2c
	goto loc_8211BC2C;
loc_8211BC24:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-31124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -31124);
	ctx.f13.f64 = double(temp.f32);
loc_8211BC2C:
	// lfs f0,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f11,224(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 224);
	ctx.f11.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// lfs f0,16268(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16268);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,-30920(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -30920);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fnmsubs f1,f0,f13,f11
	ctx.f1.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f13.f64, -ctx.f11.f64)));
	// bl 0x82204ae0
	ctx.lr = 0x8211BC58;
	sub_82204AE0(ctx, base);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f1,224(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 224, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820e1b28
	ctx.lr = 0x8211BC78;
	sub_820E1B28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// lfs f1,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f30,26932(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26932);
	f30.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// bl 0x82204ae0
	ctx.lr = 0x8211BC90;
	sub_82204AE0(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,200(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 200);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// lfs f2,-30924(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30924);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82204ae0
	ctx.lr = 0x8211BCA8;
	sub_82204AE0(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// stfs f1,200(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 200, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8211bd20
	if (!ctx.cr6.gt) goto loc_8211BD20;
	// lfs f13,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x8211bd20
	if (!ctx.cr6.lt) goto loc_8211BD20;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f29,108(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x820e1bf0
	ctx.lr = 0x8211BCE8;
	sub_820E1BF0(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x820e1c50
	ctx.lr = 0x8211BCF8;
	sub_820E1C50(ctx, base);
	// lfs f0,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8211bd20
	if (!ctx.cr6.lt) goto loc_8211BD20;
	// lfs f13,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f13,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
loc_8211BD20:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8211ad38
	ctx.lr = 0x8211BD28;
	sub_8211AD38(ctx, base);
	// lfs f13,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,240(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// li r27,1
	r27.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8211bd94
	if (ctx.cr6.gt) goto loc_8211BD94;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16704);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x8211be6c
	if (!ctx.cr6.gt) goto loc_8211BE6C;
	// lhz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 64);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8211bd64
	if (ctx.cr0.eq) goto loc_8211BD64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821f8230
	ctx.lr = 0x8211BD64;
	sub_821F8230(ctx, base);
loc_8211BD64:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,200(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,224(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 224);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f26
	ctx.f12.f64 = double(float(ctx.f12.f64 * f26.f64));
	// lfs f10,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// fnmsubs f0,f11,f28,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f11.f64, f28.f64, -ctx.f0.f64)));
	// fnmsubs f13,f10,f28,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f10.f64, f28.f64, -ctx.f13.f64)));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// stfs f13,200(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 200, temp.u32);
	// stfs f25,120(r31)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// stfs f12,224(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 224, temp.u32);
loc_8211BD94:
	// lfs f0,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,240(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,244(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 244, temp.u32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x8211be28
	if (!ctx.cr6.lt) goto loc_8211BE28;
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211be28
	if (!ctx.cr6.eq) goto loc_8211BE28;
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211be28
	if (!ctx.cr6.eq) goto loc_8211BE28;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-30932
	ctx.r6.s64 = ctx.r11.s64 + -30932;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,777
	ctx.r4.s64 = 777;
	// bl 0x821f7d50
	ctx.lr = 0x8211BDE8;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8211be28
	if (ctx.cr0.eq) goto loc_8211BE28;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,256(r3)
	REX_STORE_U32(ctx.r3.u32 + 256, r31.u32);
	// addi r11,r11,-30952
	ctx.r11.s64 = ctx.r11.s64 + -30952;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r11,264(r3)
	REX_STORE_U32(ctx.r3.u32 + 264, ctx.r11.u32);
	// stw r27,292(r31)
	REX_STORE_U32(r31.u32 + 292, r27.u32);
	// lwz r11,256(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r11,280(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 280);
	// stfs f29,284(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r3.u32 + 284, temp.u32);
	// stfs f29,280(r3)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r3.u32 + 280, temp.u32);
	// stw r11,260(r3)
	REX_STORE_U32(ctx.r3.u32 + 260, ctx.r11.u32);
	// stfs f29,276(r3)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r3.u32 + 276, temp.u32);
	// stfs f29,272(r3)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r3.u32 + 272, temp.u32);
loc_8211BE28:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e22e8
	ctx.lr = 0x8211BE30;
	sub_820E22E8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,284(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 284);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r11,26528
	ctx.r11.s64 = ctx.r11.s64 + 26528;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f0,-8496(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8496);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16372(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16372);
	ctx.f13.f64 = double(temp.f32);
	// lfs f28,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f28.f64 = double(temp.f32);
	// fmadds f30,f1,f0,f13
	f30.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// beq cr6,0x8211c000
	if (ctx.cr6.eq) goto loc_8211C000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2392(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2392);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f30,f0
	f30.f64 = double(float(f30.f64 * ctx.f0.f64));
	// b 0x8211c03c
	goto loc_8211C03C;
loc_8211BE6C:
	// li r11,4
	ctx.r11.s64 = 4;
	// stfs f0,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// stfs f31,224(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 224, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r11.u32);
	// stfs f31,12(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
	// stfs f31,0(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// stfs f31,4(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f31,8(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// lfs f11,228(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 228);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,260(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,232(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,236(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 * f26.f64));
	// fmuls f11,f11,f26
	ctx.f11.f64 = double(float(ctx.f11.f64 * f26.f64));
	// stfs f0,236(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 236, temp.u32);
	// stfs f11,228(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 228, temp.u32);
	// lfs f0,2392(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2392);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f13,f0,f12
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64)));
	// bl 0x82204b00
	ctx.lr = 0x8211BEC0;
	sub_82204B00(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// stfs f1,232(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 232, temp.u32);
	// lfs f0,16316(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16316);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8211bfe4
	if (ctx.cr6.lt) goto loc_8211BFE4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,252(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,-31132(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -31132);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bgt cr6,0x8211bfe4
	if (ctx.cr6.gt) goto loc_8211BFE4;
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 280);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x820e2148
	ctx.lr = 0x8211BEFC;
	sub_820E2148(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-31136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -31136);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8211bfe4
	if (ctx.cr6.gt) goto loc_8211BFE4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,268(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 268);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,26528
	ctx.r11.s64 = ctx.r11.s64 + 26528;
	// lfs f0,28900(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28900);
	ctx.f0.f64 = double(temp.f32);
	// lfs f28,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f28.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8211bf40
	if (!ctx.cr6.lt) goto loc_8211BF40;
	// lfs f0,252(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x8211bf54
	if (!ctx.cr6.lt) goto loc_8211BF54;
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + f28.f64));
	// b 0x8211bf50
	goto loc_8211BF50;
loc_8211BF40:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 252);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2364(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2364);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_8211BF50:
	// stfs f0,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 252, temp.u32);
loc_8211BF54:
	// bl 0x821fedc8
	ctx.lr = 0x8211BF58;
	sub_821FEDC8(ctx, base);
	// lfs f0,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// stfs f0,268(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 268, temp.u32);
loc_8211BF68:
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211bf94
	if (!ctx.cr6.eq) goto loc_8211BF94;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2344(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2344);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8211bf94
	if (!ctx.cr6.gt) goto loc_8211BF94;
	// lfs f0,252(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 - f28.f64));
	// stfs f0,252(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 252, temp.u32);
loc_8211BF94:
	// lfs f0,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x8211c0dc
	if (ctx.cr6.lt) goto loc_8211C0DC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f3,236(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 236);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,232(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 232);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,228(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 228);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0ec8
	ctx.lr = 0x8211BFB4;
	sub_820E0EC8(ctx, base);
	// stfs f29,204(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 204, temp.u32);
	// lfs f0,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 48, temp.u32);
	// lfs f0,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 52, temp.u32);
	// lfs f0,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 56, temp.u32);
	// stfs f29,60(r28)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r28.u32 + 60, temp.u32);
loc_8211BFD4:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f74
	ctx.lr = 0x8211BFE0;
	// b 0x822d4ed4
	return;
loc_8211BFE4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,26528
	ctx.r11.s64 = ctx.r11.s64 + 26528;
	// lfs f28,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f28.f64 = double(temp.f32);
	// fsubs f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 - f28.f64));
	// stfs f0,252(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 252, temp.u32);
	// b 0x8211bf68
	goto loc_8211BF68;
loc_8211C000:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 * f24.f64));
	// stfs f0,268(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 268, temp.u32);
	// lfs f13,196(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lfs f0,252(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// bge cr6,0x8211c02c
	if (!ctx.cr6.lt) goto loc_8211C02C;
	// fsubs f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 - f28.f64));
	// b 0x8211c038
	goto loc_8211C038;
loc_8211C02C:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x8211c03c
	if (!ctx.cr6.lt) goto loc_8211C03C;
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + f28.f64));
loc_8211C038:
	// stfs f0,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 252, temp.u32);
loc_8211C03C:
	// lfs f0,256(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// lfs f13,228(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f0,f30,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, ctx.f13.f64)));
	// bl 0x82204b00
	ctx.lr = 0x8211C050;
	sub_82204B00(ctx, base);
	// stfs f1,228(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 228, temp.u32);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// lfs f0,260(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,232(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f0,f30,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, ctx.f13.f64)));
	// bl 0x82204b00
	ctx.lr = 0x8211C068;
	sub_82204B00(ctx, base);
	// stfs f1,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 232, temp.u32);
	// lfs f0,264(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// lfs f13,236(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f0,f30,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, ctx.f13.f64)));
	// bl 0x82204b00
	ctx.lr = 0x8211C080;
	sub_82204B00(ctx, base);
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// stfs f1,236(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 236, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211c098
	if (ctx.cr6.eq) goto loc_8211C098;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r11.u32);
loc_8211C098:
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211bf68
	if (ctx.cr6.eq) goto loc_8211BF68;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x8211bf68
	if (!ctx.cr6.gt) goto loc_8211BF68;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211bf68
	if (ctx.cr6.eq) goto loc_8211BF68;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8211bf68
	if (ctx.cr6.eq) goto loc_8211BF68;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8211bf68
	if (ctx.cr6.eq) goto loc_8211BF68;
loc_8211C0DC:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// sth r27,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, r27.u16);
	// b 0x8211bfd4
	goto loc_8211BFD4;
}

DEFINE_REX_FUNC(sub_8213AAD0) {
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
	// li r31,0
	r31.s64 = 0;
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r31,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r31,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r8,r8,-24304
	ctx.r8.s64 = ctx.r8.s64 + -24304;
	// li r7,6
	ctx.r7.s64 = 6;
	// lfs f2,-24288(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24288);
	ctx.f2.f64 = double(temp.f32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lfs f1,-24292(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24292);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8213a318
	ctx.lr = 0x8213AB20;
	sub_8213A318(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r7,r10,20960
	ctx.r7.s64 = ctx.r10.s64 + 20960;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// lis r8,-32169
	ctx.r8.s64 = -2108227584;
	// lfs f7,2332(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2332);
	ctx.f7.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// fmr f6,f7
	ctx.f6.f64 = ctx.f7.f64;
	// lwz r10,-32480(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + -32480);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r3,24(r7)
	REX_STORE_U32(ctx.r7.u32 + 24, ctx.r3.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r8,r8,23912
	ctx.r8.s64 = ctx.r8.s64 + 23912;
	// lfs f5,-24308(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24308);
	ctx.f5.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f4,-24312(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -24312);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lfs f3,26856(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 26856);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,29404(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 29404);
	ctx.f2.f64 = double(temp.f32);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// lfs f1,15620(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 15620);
	ctx.f1.f64 = double(temp.f32);
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stw r31,68(r8)
	REX_STORE_U32(ctx.r8.u32 + 68, r31.u32);
	// bl 0x82104548
	ctx.lr = 0x8213AB94;
	sub_82104548(ctx, base);
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

DEFINE_REX_FUNC(sub_82141218) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r3,220(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// b 0x82140ce8
	sub_82140CE8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82141290) {
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
	// bl 0x822d4e78
	ctx.lr = 0x82141298;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f34
	ctx.lr = 0x821412A0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r31,r11,23912
	r31.s64 = ctx.r11.s64 + 23912;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82141528
	if (!ctx.cr6.eq) goto loc_82141528;
	// bl 0x8212fe30
	ctx.lr = 0x821412BC;
	sub_8212FE30(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// addi r26,r11,432
	r26.s64 = ctx.r11.s64 + 432;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r10,31920
	ctx.r10.s64 = ctx.r10.s64 + 31920;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r5,r9,30080
	ctx.r5.s64 = ctx.r9.s64 + 30080;
	// lfs f0,26832(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26832);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,220(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 220);
	// lfs f27,52(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 52);
	f27.f64 = double(temp.f32);
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f30,48(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 48);
	f30.f64 = double(temp.f32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lha r30,5454(r11)
	r30.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 5454));
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r28,r11
	r28.s64 = ctx.r11.s8;
	// bl 0x821eb1a0
	ctx.lr = 0x8214130C;
	sub_821EB1A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r27,r28,2,0,29
	r27.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r1,88
	r28.s64 = ctx.r1.s64 + 88;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,31148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 31148);
	ctx.f0.f64 = double(temp.f32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// fadds f28,f27,f0
	f28.f64 = double(float(f27.f64 + ctx.f0.f64));
	// lfs f29,26792(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26792);
	f29.f64 = double(temp.f32);
	// stfd f28,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f28.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// addi r3,r9,-23348
	ctx.r3.s64 = ctx.r9.s64 + -23348;
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 - ctx.f0.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfsx f0,r27,r28
	temp.u32 = REX_LOAD_U32(r27.u32 + r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f30,f0
	ctx.f1.f64 = double(float(f30.f64 + ctx.f0.f64));
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x82141364;
	sub_821EACB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82137518
	ctx.lr = 0x8214136C;
	sub_82137518(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r29,r11,-23448
	r29.s64 = ctx.r11.s64 + -23448;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lfd f31,26672(r10)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 26672);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stfd f31,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f31.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f31,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821eb1a0
	ctx.lr = 0x821413AC;
	sub_821EB1A0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfd f31,56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 56, f31.u64);
	// stfd f31,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f31.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// addi r25,r11,-23364
	r25.s64 = ctx.r11.s64 + -23364;
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// lfs f0,28328(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28328);
	ctx.f0.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fadds f27,f27,f0
	f27.f64 = double(float(f27.f64 + ctx.f0.f64));
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 - ctx.f0.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfsx f0,r27,r28
	temp.u32 = REX_LOAD_U32(r27.u32 + r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f30,f0
	ctx.f1.f64 = double(float(f30.f64 + ctx.f0.f64));
	// stfd f27,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f27.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x82141410;
	sub_821EACB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82130450
	ctx.lr = 0x8214141C;
	sub_82130450(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82141528
	if (ctx.cr0.eq) goto loc_82141528;
	// lwz r11,216(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 216);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r28,r11
	r28.s64 = ctx.r11.s8;
	// bl 0x82130450
	ctx.lr = 0x8214143C;
	sub_82130450(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,-23408
	ctx.r5.s64 = ctx.r11.s64 + -23408;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eb1a0
	ctx.lr = 0x82141458;
	sub_821EB1A0(ctx, base);
	// rlwinm r27,r28,2,0,29
	r27.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r1,88
	r28.s64 = ctx.r1.s64 + 88;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 - ctx.f0.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfd f28,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f28.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lfsx f0,r27,r28
	temp.u32 = REX_LOAD_U32(r27.u32 + r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f30,f0
	ctx.f1.f64 = double(float(f30.f64 + ctx.f0.f64));
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// addi r3,r11,-23380
	ctx.r3.s64 = ctx.r11.s64 + -23380;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x821eacb0
	ctx.lr = 0x8214149C;
	sub_821EACB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821304f8
	ctx.lr = 0x821414A8;
	sub_821304F8(ctx, base);
	// stfd f31,40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// stfd f31,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f31.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eb1a0
	ctx.lr = 0x821414D8;
	sub_821EB1A0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 - ctx.f0.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfsx f0,r27,r28
	temp.u32 = REX_LOAD_U32(r27.u32 + r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f30,f0
	ctx.f1.f64 = double(float(f30.f64 + ctx.f0.f64));
	// stfd f31,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, f31.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f31,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f31.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// stfd f27,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, f27.u64);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// li r6,2
	ctx.r6.s64 = 2;
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x82141528;
	sub_821EACB0(ctx, base);
loc_82141528:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f80
	ctx.lr = 0x82141534;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8214F788) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r4,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,144(r3)
	REX_STORE_U32(ctx.r3.u32 + 144, ctx.r10.u32);
	// lfs f0,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x8214f7dc
	if (ctx.cr6.eq) goto loc_8214F7DC;
	// stb r10,188(r11)
	REX_STORE_U8(ctx.r11.u32 + 188, ctx.r10.u8);
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// stfs f0,144(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 144, temp.u32);
	// stfs f0,148(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 148, temp.u32);
	// stfs f0,152(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 152, temp.u32);
	// stfs f0,156(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 156, temp.u32);
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r9,120(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// stb r9,104(r11)
	REX_STORE_U8(ctx.r11.u32 + 104, ctx.r9.u8);
	// lwz r9,112(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// addi r11,r11,232
	ctx.r11.s64 = ctx.r11.s64 + 232;
	// stb r11,107(r9)
	REX_STORE_U8(ctx.r9.u32 + 107, ctx.r11.u8);
loc_8214F7DC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,132(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stfs f0,136(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stw r10,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r10.u32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82151800) {
	REX_FUNC_PROLOGUE();
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82151850
	if (ctx.cr6.eq) goto loc_82151850;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r10,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// bne cr6,0x82151830
	if (!ctx.cr6.eq) goto loc_82151830;
	// lwz r3,96(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// b 0x82101d68
	sub_82101D68(ctx, base);
	return;
loc_82151830:
	// lwz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// blr 
	return;
loc_82151850:
	// lwz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82154E60) {
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
	// bl 0x822d4e68
	ctx.lr = 0x82154E68;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x822d4f00
	ctx.lr = 0x82154E70;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// blt cr6,0x82155848
	if (ctx.cr6.lt) goto loc_82155848;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r24,0
	r24.s64 = 0;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// addi r25,r10,432
	r25.s64 = ctx.r10.s64 + 432;
	// bne cr6,0x82154f14
	if (!ctx.cr6.eq) goto loc_82154F14;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,-17520
	ctx.r6.s64 = ctx.r10.s64 + -17520;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x821f7d50
	ctx.lr = 0x82154EC0;
	sub_821F7D50(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82154f00
	if (ctx.cr0.eq) goto loc_82154F00;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lha r8,284(r31)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(r31.u32 + 284));
	// addi r10,r11,2544
	ctx.r10.s64 = ctx.r11.s64 + 2544;
	// lwz r3,48(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// addi r9,r9,-18148
	ctx.r9.s64 = ctx.r9.s64 + -18148;
	// stw r8,68(r30)
	REX_STORE_U32(r30.u32 + 68, ctx.r8.u32);
	// stw r10,320(r30)
	REX_STORE_U32(r30.u32 + 320, ctx.r10.u32);
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// bl 0x820e4bb0
	ctx.lr = 0x82154EF0;
	sub_820E4BB0(ctx, base);
	// stw r3,324(r30)
	REX_STORE_U32(r30.u32 + 324, ctx.r3.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// sth r24,342(r30)
	REX_STORE_U16(r30.u32 + 342, r24.u16);
	// b 0x82154f04
	goto loc_82154F04;
loc_82154F00:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_82154F04:
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r25,84
	ctx.r3.s64 = r25.s64 + 84;
	// bl 0x821d6210
	ctx.lr = 0x82154F14;
	sub_821D6210(ctx, base);
loc_82154F14:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
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
	// lfs f28,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f28.f64 = double(temp.f32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lfs f12,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f12.f64 = double(temp.f32);
	// lfs f31,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f31.f64 = double(temp.f32);
	// li r22,1
	r22.s64 = 1;
	// lfs f14,2024(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2024);
	f14.f64 = double(temp.f32);
	// lis r23,-32169
	r23.s64 = -2108227584;
	// lfs f15,26528(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 26528);
	f15.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// lfs f16,2012(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2012);
	f16.f64 = double(temp.f32);
	// addi r21,r11,13128
	r21.s64 = ctx.r11.s64 + 13128;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ble cr6,0x8215508c
	if (!ctx.cr6.gt) goto loc_8215508C;
	// li r11,20
	ctx.r11.s64 = 20;
	// lwz r8,260(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82154F78:
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82154f8c
	if (ctx.cr0.eq) goto loc_82154F8C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82154F8C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82154f78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82154F78;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f29,f13
	f29.f64 = double(float(ctx.f13.f64));
	// lfs f13,17064(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 17064);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f0,f16,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, f16.f64, ctx.f13.f64)));
	// fadds f30,f29,f31
	f30.f64 = double(float(f29.f64 + f31.f64));
	// bl 0x820e0028
	ctx.lr = 0x82154FC0;
	sub_820E0028(ctx, base);
	// fadds f13,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + f31.f64));
	// lfs f12,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,1840(r21)
	temp.u32 = REX_LOAD_U32(r21.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// fnmsubs f1,f0,f15,f12
	ctx.f1.f64 = double(float(-std::fma(ctx.f0.f64, f15.f64, -ctx.f12.f64)));
	// fnmsubs f29,f13,f29,f30
	f29.f64 = double(float(-std::fma(ctx.f13.f64, f29.f64, -f30.f64)));
	// bl 0x82204ae0
	ctx.lr = 0x82154FE0;
	sub_82204AE0(ctx, base);
	// stfs f1,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lha r3,284(r31)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r31.u32 + 284));
	// addi r11,r11,-7072
	ctx.r11.s64 = ctx.r11.s64 + -7072;
	// ori r9,r9,3696
	ctx.r9.u64 = ctx.r9.u64 | 3696;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82155018
	if (ctx.cr0.eq) goto loc_82155018;
	// lhz r11,310(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 310);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82155028
	goto loc_82155028;
loc_82155018:
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82155030
	if (ctx.cr0.eq) goto loc_82155030;
	// lhz r11,310(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 310);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82155028:
	// sth r11,310(r31)
	REX_STORE_U16(r31.u32 + 310, ctx.r11.u16);
	// bl 0x821d1dd0
	ctx.lr = 0x82155030;
	sub_821D1DD0(ctx, base);
loc_82155030:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2020(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2020);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82155048
	if (!ctx.cr6.lt) goto loc_82155048;
	// fmr f29,f30
	f29.f64 = f30.f64;
loc_82155048:
	// fctiwz f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(f29.f64) ? int64_t(0x80000000U) : (f29.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f29.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r3,260(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r30,92(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bctrl 
	ctx.lr = 0x8215506C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 - ctx.f0.f64));
	// stfs f0,264(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 264, temp.u32);
	// b 0x821555b4
	goto loc_821555B4;
loc_8215508C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,264(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,16308(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16308);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f11,f13,f0,f13
	ctx.f11.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f0.f64, -ctx.f13.f64)));
	// stfs f11,264(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 264, temp.u32);
	// lfs f13,2392(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2392);
	ctx.f13.f64 = double(temp.f32);
	// fabs f11,f11
	ctx.f11.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x821550b8
	if (!ctx.cr6.lt) goto loc_821550B8;
	// stfs f28,264(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 264, temp.u32);
loc_821550B8:
	// lfs f11,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 268);
	ctx.f11.f64 = double(temp.f32);
	// li r26,12
	r26.s64 = 12;
	// fnmsubs f0,f11,f0,f11
	ctx.f0.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f0.f64, -ctx.f11.f64)));
	// stfs f0,268(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 268, temp.u32);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821550ec
	if (!ctx.cr6.lt) goto loc_821550EC;
	// lwz r11,296(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 296);
	// stfs f28,268(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 268, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821550ec
	if (ctx.cr6.eq) goto loc_821550EC;
	// stb r26,36(r11)
	REX_STORE_U8(ctx.r11.u32 + 36, r26.u8);
	// stw r24,296(r31)
	REX_STORE_U32(r31.u32 + 296, r24.u32);
loc_821550EC:
	// lhz r11,286(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 286);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821554d8
	if (!ctx.cr0.eq) goto loc_821554D8;
	// lfs f0,264(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x82155488
	if (ctx.cr6.gt) goto loc_82155488;
	// lfs f0,268(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f0,2384(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2384);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82155488
	if (ctx.cr6.gt) goto loc_82155488;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lha r10,284(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 284));
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lha r8,310(r31)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(r31.u32 + 310));
	// addi r28,r11,-7072
	r28.s64 = ctx.r11.s64 + -7072;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// ori r29,r9,3696
	r29.u64 = ctx.r9.u64 | 3696;
	// addi r10,r28,28
	ctx.r10.s64 = r28.s64 + 28;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// lwzx r30,r11,r10
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr. r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r27,r24
	r27.u64 = r24.u64;
	// ble 0x82155160
	if (!ctx.cr0.gt) goto loc_82155160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ori r30,r30,4096
	r30.u64 = r30.u64 | 4096;
	// b 0x82155170
	goto loc_82155170;
loc_82155160:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82155178
	if (!ctx.cr6.lt) goto loc_82155178;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r30,r30,8192
	r30.u64 = r30.u64 | 8192;
loc_82155170:
	// sth r11,310(r31)
	REX_STORE_U16(r31.u32 + 310, ctx.r11.u16);
	// mr r27,r22
	r27.u64 = r22.u64;
loc_82155178:
	// lbz r11,103(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 103);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8215518c
	if (ctx.cr0.eq) goto loc_8215518C;
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r27,r24
	r27.u64 = r24.u64;
loc_8215518C:
	// lwz r3,260(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821551A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821551C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r20,r3
	ctx.cr6.compare<int32_t>(r20.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82155364
	if (ctx.cr6.eq) goto loc_82155364;
	// rlwinm. r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r29,-32169
	r29.s64 = -2108227584;
	// beq 0x821551dc
	if (ctx.cr0.eq) goto loc_821551DC;
	// stfs f31,264(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 264, temp.u32);
	// b 0x821551e8
	goto loc_821551E8;
loc_821551DC:
	// rlwinm. r11,r30,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821551f0
	if (ctx.cr0.eq) goto loc_821551F0;
	// stfs f14,264(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f14.f64);
	REX_STORE_U32(r31.u32 + 264, temp.u32);
loc_821551E8:
	// stfs f28,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 268, temp.u32);
	// b 0x821552fc
	goto loc_821552FC;
loc_821551F0:
	// rlwinm. r11,r30,0,20,21
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xC00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821552fc
	if (ctx.cr0.eq) goto loc_821552FC;
	// rlwinm. r11,r30,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82155208
	if (ctx.cr0.eq) goto loc_82155208;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f31.f64;
	// b 0x8215520c
	goto loc_8215520C;
loc_82155208:
	// fmr f0,f14
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f14.f64;
loc_8215520C:
	// stfs f0,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 268, temp.u32);
	// lwz r11,24296(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 24296);
	// lwz r10,24300(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 24300);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lwz r8,260(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// srawi r9,r3,24
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 24;
	// lfs f0,-23588(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -23588);
	ctx.f0.f64 = double(temp.f32);
	// lha r5,8(r8)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(ctx.r8.u32 + 8));
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lfs f13,-17772(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -17772);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mulli r8,r5,12
	ctx.r8.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(12));
	// lwzx r6,r4,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lwzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lbz r4,104(r6)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + 104);
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// stb r11,104(r7)
	REX_STORE_U8(ctx.r7.u32 + 104, ctx.r11.u8);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r11,296(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 296);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f28,120(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82155288
	if (ctx.cr6.eq) goto loc_82155288;
	// stb r26,36(r11)
	REX_STORE_U8(ctx.r11.u32 + 36, r26.u8);
loc_82155288:
	// lwz r6,260(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r11,24296(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 24296);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r9,-17532
	ctx.r7.s64 = ctx.r9.s64 + -17532;
	// lwz r3,408(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 408);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,9
	ctx.r8.s64 = 9;
	// lha r5,8(r6)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(ctx.r6.u32 + 8));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// addi r5,r11,112
	ctx.r5.s64 = ctx.r11.s64 + 112;
	// bl 0x821675c0
	ctx.lr = 0x821552C0;
	sub_821675C0(ctx, base);
	// stw r3,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821552fc
	if (ctx.cr0.eq) goto loc_821552FC;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,6
	ctx.r10.s64 = 6;
	// sth r11,18(r3)
	REX_STORE_U16(ctx.r3.u32 + 18, ctx.r11.u16);
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r9,296(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 296);
	// stw r10,192(r9)
	REX_STORE_U32(ctx.r9.u32 + 192, ctx.r10.u32);
	// lwz r10,296(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 296);
	// stfs f28,128(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r10.u32 + 128, temp.u32);
	// lwz r10,296(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 296);
	// stfs f28,132(r10)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r10.u32 + 132, temp.u32);
	// lwz r10,296(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 296);
	// stb r11,186(r10)
	REX_STORE_U8(ctx.r10.u32 + 186, ctx.r11.u8);
loc_821552FC:
	// lfs f0,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// bne cr6,0x82155314
	if (!ctx.cr6.eq) goto loc_82155314;
	// lfs f0,264(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// beq cr6,0x82155324
	if (ctx.cr6.eq) goto loc_82155324;
loc_82155314:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x82155324
	if (!ctx.cr6.eq) goto loc_82155324;
	// lha r3,284(r31)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r31.u32 + 284));
	// bl 0x821d1dd0
	ctx.lr = 0x82155324;
	sub_821D1DD0(ctx, base);
loc_82155324:
	// lwz r9,292(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 292);
	// stfs f28,272(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 272, temp.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821555b4
	if (ctx.cr6.eq) goto loc_821555B4;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r11,24300(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24300);
	// lha r10,8(r10)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 8));
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lha r11,2(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 2));
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8215535c
	if (!ctx.cr6.gt) goto loc_8215535C;
	// sth r22,342(r9)
	REX_STORE_U16(ctx.r9.u32 + 342, r22.u16);
	// b 0x821555b4
	goto loc_821555B4;
loc_8215535C:
	// sth r24,342(r9)
	REX_STORE_U16(ctx.r9.u32 + 342, r24.u16);
	// b 0x821555b4
	goto loc_821555B4;
loc_82155364:
	// lbz r11,103(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 103);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82155388
	if (!ctx.cr0.eq) goto loc_82155388;
	// lha r10,284(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 284));
	// addi r9,r28,24
	ctx.r9.s64 = r28.s64 + 24;
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82155394
	if (!ctx.cr0.eq) goto loc_82155394;
loc_82155388:
	// lbz r10,332(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 332);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821553c0
	if (ctx.cr0.eq) goto loc_821553C0;
loc_82155394:
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// sth r22,286(r31)
	REX_STORE_U16(r31.u32 + 286, r22.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821553a8
	if (ctx.cr6.eq) goto loc_821553A8;
	// sth r22,340(r11)
	REX_STORE_U16(ctx.r11.u32 + 340, r22.u16);
loc_821553A8:
	// lha r3,284(r31)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r31.u32 + 284));
	// bl 0x821d1d90
	ctx.lr = 0x821553B0;
	sub_821D1D90(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r25,84
	ctx.r3.s64 = r25.s64 + 84;
	// bl 0x821d6210
	ctx.lr = 0x821553BC;
	sub_821D6210(ctx, base);
	// b 0x821555b4
	goto loc_821555B4;
loc_821553C0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821555b4
	if (!ctx.cr6.eq) goto loc_821555B4;
	// lha r3,284(r31)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r31.u32 + 284));
	// addi r7,r28,24
	ctx.r7.s64 = r28.s64 + 24;
	// xori r8,r3,1
	ctx.r8.u64 = ctx.r3.u64 ^ 1;
	// addi r11,r28,24
	ctx.r11.s64 = r28.s64 + 24;
	// mullw r10,r3,r29
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(r29.s32);
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mullw r6,r8,r29
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(r29.s32);
	// lwzx r5,r6,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// or r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 | ctx.r9.u64;
	// andi. r9,r9,16416
	ctx.r9.u64 = ctx.r9.u64 & 16416;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x821555b4
	if (ctx.cr0.eq) goto loc_821555B4;
	// lhz r9,30(r25)
	ctx.r9.u64 = REX_LOAD_U16(r25.u32 + 30);
	// cmplwi cr6,r9,17
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 17, ctx.xer);
	// beq cr6,0x821555b4
	if (ctx.cr6.eq) goto loc_821555B4;
	// stw r24,288(r31)
	REX_STORE_U32(r31.u32 + 288, r24.u32);
	// lha r9,30(r25)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r25.u32 + 30));
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// beq cr6,0x82155460
	if (ctx.cr6.eq) goto loc_82155460;
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// beq cr6,0x82155460
	if (ctx.cr6.eq) goto loc_82155460;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// andi. r11,r11,16416
	ctx.r11.u64 = ctx.r11.u64 & 16416;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82155434
	if (ctx.cr0.eq) goto loc_82155434;
	// slw r11,r22,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r3.u8 & 0x3F));
	// stw r11,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r11.u32);
loc_82155434:
	// lwzx r11,r6,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// andi. r11,r11,16416
	ctx.r11.u64 = ctx.r11.u64 & 16416;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82155454
	if (ctx.cr0.eq) goto loc_82155454;
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// slw r10,r22,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r8.u8 & 0x3F));
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r11.u32);
loc_82155454:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// b 0x82155480
	goto loc_82155480;
loc_82155460:
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// andi. r11,r11,16416
	ctx.r11.u64 = ctx.r11.u64 & 16416;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821555b4
	if (ctx.cr0.eq) goto loc_821555B4;
	// slw r11,r22,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r8.u8 & 0x3F));
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r11.u32);
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
loc_82155480:
	// bl 0x821d1db0
	ctx.lr = 0x82155484;
	sub_821D1DB0(ctx, base);
	// b 0x821555b4
	goto loc_821555B4;
loc_82155488:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lha r3,284(r31)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r31.u32 + 284));
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r11,r11,-7072
	ctx.r11.s64 = ctx.r11.s64 + -7072;
	// ori r9,r9,3696
	ctx.r9.u64 = ctx.r9.u64 | 3696;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821554bc
	if (ctx.cr0.eq) goto loc_821554BC;
	// lhz r11,310(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 310);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x821554cc
	goto loc_821554CC;
loc_821554BC:
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821555b4
	if (ctx.cr0.eq) goto loc_821555B4;
	// lhz r11,310(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 310);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_821554CC:
	// sth r11,310(r31)
	REX_STORE_U16(r31.u32 + 310, ctx.r11.u16);
	// bl 0x821d1dd0
	ctx.lr = 0x821554D4;
	sub_821D1DD0(ctx, base);
	// b 0x821555b4
	goto loc_821555B4;
loc_821554D8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,276(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-30108(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30108);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,276(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 276, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x821555b4
	if (!ctx.cr6.gt) goto loc_821555B4;
	// lwz r3,260(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lha r10,8(r3)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 8));
	// lwz r11,24300(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24300);
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lhzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x8215552c
	if (!ctx.cr6.eq) goto loc_8215552C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x821db218
	ctx.lr = 0x8215551C;
	sub_821DB218(ctx, base);
	// srawi r11,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 8;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82155560
	goto loc_82155560;
loc_8215552C:
	// lha r10,8(r3)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 8));
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lha r8,8(r3)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 8));
	// lwz r9,16(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lhax r30,r10,r11
	r30.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32));
	// mulli r10,r8,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(12));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82155554;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// srawi r11,r3,24
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 24;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lbz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
loc_82155560:
	// lhz r11,30(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 30);
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// beq cr6,0x82155594
	if (ctx.cr6.eq) goto loc_82155594;
	// li r4,550
	ctx.r4.s64 = 550;
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e0958
	ctx.lr = 0x8215557C;
	sub_821E0958(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// clrlwi r3,r30,24
	ctx.r3.u64 = r30.u32 & 0xFF;
	// bl 0x821de0f8
	ctx.lr = 0x82155588;
	sub_821DE0F8(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// b 0x821555b4
	goto loc_821555B4;
loc_82155594:
	// li r9,7
	ctx.r9.s64 = 7;
	// sth r24,328(r31)
	REX_STORE_U16(r31.u32 + 328, r24.u16);
	// li r11,3600
	ctx.r11.s64 = 3600;
	// stb r24,332(r31)
	REX_STORE_U8(r31.u32 + 332, r24.u8);
	// sth r30,412(r31)
	REX_STORE_U16(r31.u32 + 412, r30.u16);
	// sth r5,414(r31)
	REX_STORE_U16(r31.u32 + 414, ctx.r5.u16);
	// stw r9,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// sth r11,330(r31)
	REX_STORE_U16(r31.u32 + 330, ctx.r11.u16);
loc_821555B4:
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r11,24296(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 24296);
	// lha r9,8(r10)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 8));
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r9,r11
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_821555D8:
	// stb r24,188(r11)
	REX_STORE_U8(ctx.r11.u32 + 188, r24.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lwz r3,260(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8214f7f8
	ctx.lr = 0x821555EC;
	sub_8214F7F8(ctx, base);
	// lwz r11,24296(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 24296);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x821555d8
	if (!ctx.cr6.eq) goto loc_821555D8;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,264(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,-17
	ctx.r11.s64 = ctx.r11.s64 + -17;
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// lfs f0,16172(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16172);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfs f23,-24208(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -24208);
	f23.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,-24332(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -24332);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,-17536(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -17536);
	ctx.f13.f64 = double(temp.f32);
	// lfs f29,15632(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15632);
	f29.f64 = double(temp.f32);
	// lfs f25,-17776(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -17776);
	f25.f64 = double(temp.f32);
	// stfs f29,96(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f25,104(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fnmsubs f30,f12,f23,f0
	f30.f64 = double(float(-std::fma(ctx.f12.f64, f23.f64, -ctx.f0.f64)));
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfd f12,88(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fsubs f27,f30,f0
	f27.f64 = double(float(f30.f64 - ctx.f0.f64));
	// fcfid f0,f12
	ctx.f0.f64 = double(ctx.f12.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x82204ae0
	ctx.lr = 0x8215567C;
	sub_82204AE0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	f24.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f17,27848(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 27848);
	f17.f64 = double(temp.f32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f18,31840(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 31840);
	f18.f64 = double(temp.f32);
	// lfs f19,16272(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16272);
	f19.f64 = double(temp.f32);
	// li r28,-3
	r28.s64 = -3;
	// lfs f20,-17540(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -17540);
	f20.f64 = double(temp.f32);
	// lfs f21,16268(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16268);
	f21.f64 = double(temp.f32);
	// lfs f22,-17544(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -17544);
	f22.f64 = double(temp.f32);
	// lfs f26,-17548(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -17548);
	f26.f64 = double(temp.f32);
loc_821556BC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,260(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 260);
	// bl 0x8214f7f8
	ctx.lr = 0x821556C8;
	sub_8214F7F8(ctx, base);
	// lwz r11,24296(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 24296);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// lwzx r30,r10,r11
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stb r22,188(r30)
	REX_STORE_U8(r30.u32 + 188, r22.u8);
	// bne cr6,0x82155760
	if (!ctx.cr6.eq) goto loc_82155760;
	// lfs f0,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// stfs f30,116(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 116, temp.u32);
	// fmadds f0,f0,f26,f29
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f26.f64, f29.f64)));
	// stfs f25,120(r30)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(r30.u32 + 120, temp.u32);
	// stfs f0,112(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 112, temp.u32);
	// lfs f0,268(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 - ctx.f0.f64));
	// fmuls f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 * f24.f64));
	// stfs f0,156(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 156, temp.u32);
	// lwz r11,296(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215578c
	if (ctx.cr6.eq) goto loc_8215578C;
	// lfs f0,268(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// ble cr6,0x82155728
	if (!ctx.cr6.gt) goto loc_82155728;
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 - ctx.f0.f64));
	// b 0x8215572c
	goto loc_8215572C;
loc_82155728:
	// fsubs f0,f14,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f14.f64 - ctx.f0.f64));
loc_8215572C:
	// fnmsubs f0,f0,f26,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, f26.f64, -f29.f64)));
	// stfs f0,196(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 196, temp.u32);
	// stfs f30,200(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 200, temp.u32);
	// stfs f25,204(r11)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r11.u32 + 204, temp.u32);
	// lfs f0,268(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,296(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 296);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// stfs f31,144(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 144, temp.u32);
	// fmuls f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 * f24.f64));
	// stfs f31,148(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 148, temp.u32);
	// stfs f31,152(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 152, temp.u32);
	// stfs f0,156(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 156, temp.u32);
	// b 0x8215578c
	goto loc_8215578C;
loc_82155760:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r30,112
	ctx.r10.s64 = r30.s64 + 112;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r10.u32);
	// stw r9,116(r30)
	REX_STORE_U32(r30.u32 + 116, ctx.r9.u32);
	// stw r8,120(r30)
	REX_STORE_U32(r30.u32 + 120, ctx.r8.u32);
	// stw r11,124(r30)
	REX_STORE_U32(r30.u32 + 124, ctx.r11.u32);
	// stfs f24,156(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f24.f64);
	REX_STORE_U32(r30.u32 + 156, temp.u32);
loc_8215578C:
	// fcmpu cr6,f27,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f27.f64, f28.f64);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// bge cr6,0x821557bc
	if (!ctx.cr6.lt) goto loc_821557BC;
	// fmuls f1,f27,f22
	ctx.f1.f64 = double(float(f27.f64 * f22.f64));
	// bl 0x82204ae0
	ctx.lr = 0x821557A4;
	sub_82204AE0(ctx, base);
	// fnmsubs f0,f1,f21,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(-std::fma(ctx.f1.f64, f21.f64, -f31.f64)));
	// stfs f0,144(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 144, temp.u32);
	// fsubs f0,f31,f1
	ctx.f0.f64 = double(float(f31.f64 - ctx.f1.f64));
	// stfs f0,148(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 148, temp.u32);
	// fnmsubs f0,f1,f16,f31
	ctx.f0.f64 = double(float(-std::fma(ctx.f1.f64, f16.f64, -f31.f64)));
	// b 0x821557dc
	goto loc_821557DC;
loc_821557BC:
	// fmuls f1,f27,f20
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f27.f64 * f20.f64));
	// bl 0x82204ae0
	ctx.lr = 0x821557C4;
	sub_82204AE0(ctx, base);
	// fsubs f13,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f31.f64 - ctx.f1.f64));
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,144(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 144, temp.u32);
	// fnmsubs f13,f1,f19,f31
	ctx.f13.f64 = double(float(-std::fma(ctx.f1.f64, f19.f64, -f31.f64)));
	// stfs f13,148(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 148, temp.u32);
	// fnmsubs f0,f1,f0,f31
	ctx.f0.f64 = double(float(-std::fma(ctx.f1.f64, ctx.f0.f64, -f31.f64)));
loc_821557DC:
	// stfs f0,152(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 152, temp.u32);
	// addi r29,r30,144
	r29.s64 = r30.s64 + 144;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x82155830
	if (!ctx.cr6.eq) goto loc_82155830;
	// lhz r11,286(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 286);
	// lfs f0,1840(r21)
	temp.u32 = REX_LOAD_U32(r21.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82155804
	if (ctx.cr0.eq) goto loc_82155804;
	// fmuls f0,f0,f18
	ctx.f0.f64 = double(float(ctx.f0.f64 * f18.f64));
	// b 0x82155808
	goto loc_82155808;
loc_82155804:
	// fmuls f0,f0,f15
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * f15.f64));
loc_82155808:
	// lfs f13,272(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 272);
	ctx.f13.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// bl 0x82204b00
	ctx.lr = 0x82155818;
	sub_82204B00(ctx, base);
	// stfs f1,272(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 272, temp.u32);
	// bl 0x820e0028
	ctx.lr = 0x82155820;
	sub_820E0028(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmadds f1,f1,f17,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, f17.f64, f31.f64)));
	// bl 0x820e1cf8
	ctx.lr = 0x82155830;
	sub_820E1CF8(ctx, base);
loc_82155830:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// fadds f30,f30,f23
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(f30.f64 + f23.f64));
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f27,f27,f23
	f27.f64 = double(float(f27.f64 + f23.f64));
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(r28.s32, 3, ctx.xer);
	// ble cr6,0x821556bc
	if (!ctx.cr6.gt) goto loc_821556BC;
loc_82155848:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x822d4f4c
	ctx.lr = 0x82155854;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_82181948) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82181950;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 44);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82181970
	if (ctx.cr0.eq) goto loc_82181970;
loc_82181968:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82181a14
	goto loc_82181A14;
loc_82181970:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d5870
	ctx.lr = 0x8218197C;
	sub_822D5870(ctx, base);
	// li r31,0
	r31.s64 = 0;
loc_82181980:
	// addi r11,r31,3
	ctx.r11.s64 = r31.s64 + 3;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821819ac
	if (ctx.cr0.eq) goto loc_821819AC;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 52);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x821819d8
	if (ctx.cr6.gt) goto loc_821819D8;
loc_821819AC:
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// lwz r4,52(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 52);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// bl 0x82182040
	ctx.lr = 0x821819C4;
	sub_82182040(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82181968
	if (ctx.cr0.eq) goto loc_82181968;
	// lwz r10,85(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 85);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r29
	REX_STORE_U32(ctx.r11.u32 + r29.u32, ctx.r10.u32);
loc_821819D8:
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// clrlwi r31,r11,24
	r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(r31.u32, 2, ctx.xer);
	// blt cr6,0x82181980
	if (ctx.cr6.lt) goto loc_82181980;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821819EC:
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r9,52(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// lwzx r10,r10,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// blt cr6,0x821819ec
	if (ctx.cr6.lt) goto loc_821819EC;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82181A14:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82184360) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82184380
	goto loc_82184380;
loc_8218436C:
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ld r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// cmpld cr6,r9,r4
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r4.u64, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82184380:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8218436c
	if (!ctx.cr6.eq) goto loc_8218436C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82184A00) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r4,2(r3)
	REX_STORE_U16(ctx.r3.u32 + 2, ctx.r4.u16);
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// sth r10,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// lhz r11,2(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82184a44
	if (ctx.cr6.eq) goto loc_82184A44;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82184a3c
	if (ctx.cr6.eq) goto loc_82184A3C;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,18
	ctx.r11.s64 = 18;
	// b 0x82184a48
	goto loc_82184A48;
loc_82184A3C:
	// li r11,82
	ctx.r11.s64 = 82;
	// b 0x82184a48
	goto loc_82184A48;
loc_82184A44:
	// li r11,50
	ctx.r11.s64 = 50;
loc_82184A48:
	// sth r11,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82185EF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82185F00;
	// stwu r1,-1440(r1)
	ea = -1440 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82185c60
	ctx.lr = 0x82185F0C;
	sub_82185C60(ctx, base);
	// lwz r11,76(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 76);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	r31.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(r31.u32, 2, ctx.xer);
	// blt cr6,0x82186064
	if (ctx.cr6.lt) goto loc_82186064;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82185fd0
	if (!ctx.cr6.eq) goto loc_82185FD0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82184a00
	ctx.lr = 0x82185F44;
	sub_82184A00(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82185fa4
	if (ctx.cr6.eq) goto loc_82185FA4;
	// li r30,0
	r30.s64 = 0;
loc_82185F50:
	// lwz r11,76(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 76);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82185f98
	if (!ctx.cr0.eq) goto loc_82185F98;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x821855a0
	ctx.lr = 0x82185F84;
	sub_821855A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82185f98
	if (ctx.cr0.eq) goto loc_82185F98;
	// clrlwi r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r28,r11,24
	r28.u64 = ctx.r11.u32 & 0xFF;
loc_82185F98:
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82185f50
	if (!ctx.cr0.eq) goto loc_82185F50;
loc_82185FA4:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82185fc4
	if (!ctx.cr0.eq) goto loc_82185FC4;
loc_82185FAC:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// bl 0x82187d00
	ctx.lr = 0x82185FC0;
	sub_82187D00(ctx, base);
	// b 0x82186064
	goto loc_82186064;
loc_82185FC4:
	// bl 0x822094c8
	ctx.lr = 0x82185FC8;
	sub_822094C8(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82186054
	goto loc_82186054;
loc_82185FD0:
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82184a00
	ctx.lr = 0x82185FD8;
	sub_82184A00(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82186040
	if (ctx.cr6.eq) goto loc_82186040;
	// li r30,0
	r30.s64 = 0;
loc_82185FE4:
	// lwz r11,76(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 76);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82186034
	if (!ctx.cr0.eq) goto loc_82186034;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r9,45(r11)
	REX_STORE_U8(ctx.r11.u32 + 45, ctx.r9.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x821855a0
	ctx.lr = 0x82186020;
	sub_821855A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82186034
	if (ctx.cr0.eq) goto loc_82186034;
	// clrlwi r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r28,r11,24
	r28.u64 = ctx.r11.u32 & 0xFF;
loc_82186034:
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82185fe4
	if (!ctx.cr0.eq) goto loc_82185FE4;
loc_82186040:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82185fac
	if (ctx.cr0.eq) goto loc_82185FAC;
	// bl 0x822094c8
	ctx.lr = 0x8218604C;
	sub_822094C8(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r3,488(r29)
	REX_STORE_U32(r29.u32 + 488, ctx.r3.u32);
loc_82186054:
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// stw r3,480(r29)
	REX_STORE_U32(r29.u32 + 480, ctx.r3.u32);
	// bl 0x822094c8
	ctx.lr = 0x82186060;
	sub_822094C8(ctx, base);
	// stw r3,484(r29)
	REX_STORE_U32(r29.u32 + 484, ctx.r3.u32);
loc_82186064:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1440
	ctx.r1.s64 = ctx.r1.s64 + 1440;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8218AB28) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_8218AB40:
	// stbu r5,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8218ab40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218AB40;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218C0A8) {
	REX_FUNC_PROLOGUE();
	// srawi r11,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 6;
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r9,30488
	ctx.r11.s64 = ctx.r9.s64 + 30488;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrldi r9,r3,58
	ctx.r9.u64 = ctx.r3.u64 & 0x3F;
	// sld r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r9.u8 & 0x7F));
	// ldx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stdx r9,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218D838) {
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
	ctx.lr = 0x8218D840;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r31,r11,30756
	r31.s64 = ctx.r11.s64 + 30756;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,30772(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 30772);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lfs f31,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f31.f64 = double(temp.f32);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8218d894
	if (!ctx.cr0.eq) goto loc_8218D894;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f31,12(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stfs f31,4(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f31,8(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stw r11,30772(r10)
	REX_STORE_U32(ctx.r10.u32 + 30772, ctx.r11.u32);
	// lfs f0,16172(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
loc_8218D894:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,6272
	ctx.r3.s64 = r30.s64 + 6272;
	// bl 0x8215bcc8
	ctx.lr = 0x8218D8A8;
	sub_8215BCC8(ctx, base);
	// stfs f31,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x821feec8
	ctx.lr = 0x8218D8B4;
	sub_821FEEC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,2008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	f30.f64 = double(temp.f32);
	// fmsubs f0,f1,f30,f31
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f30.f64, -f31.f64)));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x821feec8
	ctx.lr = 0x8218D8C8;
	sub_821FEEC8(ctx, base);
	// fmsubs f0,f1,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f30.f64, -f31.f64)));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x821feec8
	ctx.lr = 0x8218D8D4;
	sub_821FEEC8(ctx, base);
	// fmsubs f0,f1,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f30.f64, -f31.f64)));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8219cb70
	ctx.lr = 0x8218D8EC;
	sub_8219CB70(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218fe60
	ctx.lr = 0x8218D910;
	sub_8218FE60(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lhz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 72);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8218d934
	if (!ctx.cr6.eq) goto loc_8218D934;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x821a13a8
	ctx.lr = 0x8218D934;
	sub_821A13A8(ctx, base);
loc_8218D934:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82191BE0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r8,100
	ctx.r8.s64 = 100;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r10,2964(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 2964);
	// lwz r9,2960(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 2960);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// divw r6,r7,r8
	ctx.r6.u64 = uint32_t((ctx.r8.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r7.s32 / ctx.r8.s32 : 0);
	// mulli r6,r6,100
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(100));
	// subf r7,r6,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r6.u64;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82191c34
	goto loc_82191C34;
loc_82191C10:
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,2560
	ctx.r6.s64 = ctx.r11.s64 + 2560;
	// lwzx r7,r7,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// cmpw cr6,r7,r3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r3.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// divw r7,r9,r8
	ctx.r7.u64 = uint32_t((ctx.r8.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r9.s32 / ctx.r8.s32 : 0);
	// mulli r7,r7,100
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(100));
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
loc_82191C34:
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82191c10
	if (!ctx.cr6.eq) goto loc_82191C10;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,2560
	ctx.r9.s64 = ctx.r11.s64 + 2560;
	// stwx r3,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r3.u32);
	// lwz r10,2964(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 2964);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// divw r9,r10,r8
	ctx.r9.u64 = uint32_t((ctx.r8.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r10.s32 / ctx.r8.s32 : 0);
	// mulli r9,r9,100
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(100));
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r10,2964(r11)
	REX_STORE_U32(ctx.r11.u32 + 2964, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82194ED0) {
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
	// bl 0x82191cc0
	ctx.lr = 0x82194EF0;
	sub_82191CC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82194f00
	if (ctx.cr0.eq) goto loc_82194F00;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
loc_82194F00:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82191be0
	ctx.lr = 0x82194F08;
	sub_82191BE0(ctx, base);
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

DEFINE_REX_FUNC(sub_82197D50) {
	REX_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82197F00) {
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
	ctx.lr = 0x82197F08;
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, f29.u64);
	// stfd f30,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-19520
	ctx.r11.s64 = ctx.r11.s64 + -19520;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// addi r11,r10,4324
	ctx.r11.s64 = ctx.r10.s64 + 4324;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r4,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r10,r9,4276
	ctx.r10.s64 = ctx.r9.s64 + 4276;
	// stw r5,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r5.u32);
	// li r29,1
	r29.s64 = 1;
	// stw r6,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r6.u32);
	// li r27,0
	r27.s64 = 0;
	// stw r10,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r29,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r29.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r27,256(r31)
	REX_STORE_U32(r31.u32 + 256, r27.u32);
	// stw r9,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r9.u32);
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// stb r29,112(r31)
	REX_STORE_U8(r31.u32 + 112, r29.u8);
	// addi r26,r10,432
	r26.s64 = ctx.r10.s64 + 432;
	// stb r29,113(r31)
	REX_STORE_U8(r31.u32 + 113, r29.u8);
	// ori r3,r3,248
	ctx.r3.u64 = ctx.r3.u64 | 248;
	// stw r27,108(r31)
	REX_STORE_U32(r31.u32 + 108, r27.u32);
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// addi r28,r31,80
	r28.s64 = r31.s64 + 80;
	// lwz r4,344(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x82197F9C;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// addi r25,r11,21804
	r25.s64 = ctx.r11.s64 + 21804;
	// addi r30,r10,31472
	r30.s64 = ctx.r10.s64 + 31472;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d55f8
	ctx.lr = 0x82197FBC;
	sub_822D55F8(ctx, base);
	// lis r3,3840
	ctx.r3.s64 = 251658240;
	// lwz r4,344(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 344);
	// ori r3,r3,23
	ctx.r3.u64 = ctx.r3.u64 | 23;
	// bl 0x820e68b8
	ctx.lr = 0x82197FCC;
	sub_820E68B8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// lwz r4,344(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 344);
	// ori r3,r3,248
	ctx.r3.u64 = ctx.r3.u64 | 248;
	// bl 0x820e68b8
	ctx.lr = 0x82197FE0;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,4268
	ctx.r4.s64 = ctx.r11.s64 + 4268;
	// addi r3,r30,128
	ctx.r3.s64 = r30.s64 + 128;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// bl 0x822d55f8
	ctx.lr = 0x82197FF8;
	sub_822D55F8(ctx, base);
	// lis r3,3840
	ctx.r3.s64 = 251658240;
	// lwz r4,344(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 344);
	// ori r3,r3,26
	ctx.r3.u64 = ctx.r3.u64 | 26;
	// bl 0x820e68b8
	ctx.lr = 0x82198008;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r30,256
	ctx.r3.s64 = r30.s64 + 256;
	// bl 0x822d55f8
	ctx.lr = 0x82198018;
	sub_822D55F8(ctx, base);
	// lis r3,3840
	ctx.r3.s64 = 251658240;
	// lwz r4,344(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 344);
	// ori r3,r3,28
	ctx.r3.u64 = ctx.r3.u64 | 28;
	// bl 0x820e68b8
	ctx.lr = 0x82198028;
	sub_820E68B8(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r30,r11,31280
	r30.s64 = ctx.r11.s64 + 31280;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d55f8
	ctx.lr = 0x82198040;
	sub_822D55F8(ctx, base);
	// lis r3,3840
	ctx.r3.s64 = 251658240;
	// lwz r4,344(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 344);
	// ori r3,r3,29
	ctx.r3.u64 = ctx.r3.u64 | 29;
	// bl 0x820e68b8
	ctx.lr = 0x82198050;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x822d55f8
	ctx.lr = 0x82198060;
	sub_822D55F8(ctx, base);
	// lis r3,3840
	ctx.r3.s64 = 251658240;
	// lwz r4,344(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 344);
	// ori r3,r3,30
	ctx.r3.u64 = ctx.r3.u64 | 30;
	// bl 0x820e68b8
	ctx.lr = 0x82198070;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r30,128
	ctx.r3.s64 = r30.s64 + 128;
	// bl 0x822d55f8
	ctx.lr = 0x82198080;
	sub_822D55F8(ctx, base);
	// lis r3,1280
	ctx.r3.s64 = 83886080;
	// lwz r4,344(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 344);
	// ori r3,r3,145
	ctx.r3.u64 = ctx.r3.u64 | 145;
	// bl 0x820e68b8
	ctx.lr = 0x82198090;
	sub_820E68B8(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r30,r11,30864
	r30.s64 = ctx.r11.s64 + 30864;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d55f8
	ctx.lr = 0x821980A8;
	sub_822D55F8(ctx, base);
	// lis r3,3840
	ctx.r3.s64 = 251658240;
	// lwz r4,344(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 344);
	// ori r3,r3,78
	ctx.r3.u64 = ctx.r3.u64 | 78;
	// bl 0x820e68b8
	ctx.lr = 0x821980B8;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r30,32
	ctx.r3.s64 = r30.s64 + 32;
	// bl 0x822d55f8
	ctx.lr = 0x821980C8;
	sub_822D55F8(ctx, base);
	// lis r3,3840
	ctx.r3.s64 = 251658240;
	// lwz r4,344(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 344);
	// ori r3,r3,81
	ctx.r3.u64 = ctx.r3.u64 | 81;
	// bl 0x820e68b8
	ctx.lr = 0x821980D8;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x822d55f8
	ctx.lr = 0x821980E8;
	sub_822D55F8(ctx, base);
	// lis r3,3840
	ctx.r3.s64 = 251658240;
	// lwz r4,344(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 344);
	// ori r3,r3,27
	ctx.r3.u64 = ctx.r3.u64 | 27;
	// bl 0x820e68b8
	ctx.lr = 0x821980F8;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// bl 0x822d55f8
	ctx.lr = 0x82198108;
	sub_822D55F8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r6,-32174
	ctx.r6.s64 = -2108555264;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r22,r6,-14808
	r22.s64 = ctx.r6.s64 + -14808;
	// addi r11,r30,32
	ctx.r11.s64 = r30.s64 + 32;
	// lfd f2,-7672(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = REX_LOAD_U64(ctx.r10.u32 + -7672);
	// addi r10,r30,64
	ctx.r10.s64 = r30.s64 + 64;
	// stfd f2,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// stw r30,-14808(r6)
	REX_STORE_U32(ctx.r6.u32 + -14808, r30.u32);
	// stfd f2,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// addi r9,r30,32
	ctx.r9.s64 = r30.s64 + 32;
	// addi r8,r30,64
	ctx.r8.s64 = r30.s64 + 64;
	// stw r11,4(r22)
	REX_STORE_U32(r22.u32 + 4, ctx.r11.u32);
	// addi r26,r30,32
	r26.s64 = r30.s64 + 32;
	// stw r10,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r10.u32);
	// addi r25,r30,96
	r25.s64 = r30.s64 + 96;
	// stw r30,48(r22)
	REX_STORE_U32(r22.u32 + 48, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,52(r22)
	REX_STORE_U32(r22.u32 + 52, ctx.r9.u32);
	// addi r5,r5,-7656
	ctx.r5.s64 = ctx.r5.s64 + -7656;
	// stw r8,56(r22)
	REX_STORE_U32(r22.u32 + 56, ctx.r8.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r30,96(r22)
	REX_STORE_U32(r22.u32 + 96, r30.u32);
	// stw r26,100(r22)
	REX_STORE_U32(r22.u32 + 100, r26.u32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// stw r25,104(r22)
	REX_STORE_U32(r22.u32 + 104, r25.u32);
	// bl 0x821eb1a0
	ctx.lr = 0x8219817C;
	sub_821EB1A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,-8492(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8492);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lfs f12,3884(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3884);
	ctx.f12.f64 = double(temp.f32);
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// stfs f12,140(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// lfs f13,2332(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2332);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f12,4264(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4264);
	ctx.f12.f64 = double(temp.f32);
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f13,136(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// lfs f11,144(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// stfs f10,156(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// fadds f8,f11,f8
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fadds f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f13,152(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// bl 0x82196930
	ctx.lr = 0x821981F4;
	sub_82196930(ctx, base);
	// lwa r11,260(r31)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r31.u32 + 260));
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfs f0,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,96(r31)
	REX_STORE_U32(r31.u32 + 96, r29.u32);
	// stw r27,128(r31)
	REX_STORE_U32(r31.u32 + 128, r27.u32);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,248(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 248, temp.u32);
	// bl 0x82187b58
	ctx.lr = 0x82198220;
	sub_82187B58(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82188070
	ctx.lr = 0x82198228;
	sub_82188070(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r30,68
	r30.s64 = 68;
	// lfs f29,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f29.f64 = double(temp.f32);
	// lfs f31,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lfs f30,-24948(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -24948);
	f30.f64 = double(temp.f32);
loc_82198244:
	// mr r29,r27
	r29.u64 = r27.u64;
loc_82198248:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822c80d0
	ctx.lr = 0x82198250;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82198268
	if (ctx.cr0.eq) goto loc_82198268;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x820e7330
	ctx.lr = 0x82198264;
	sub_820E7330(ctx, base);
	// b 0x8219826c
	goto loc_8219826C;
loc_82198268:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_8219826C:
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(r29.s32, 3, ctx.xer);
	// stwx r3,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r3.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - f30.f64));
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f31,16(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f31,20(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f29,24(r3)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blt cr6,0x82198248
	if (ctx.cr6.lt) goto loc_82198248;
	// addi r30,r30,3
	r30.s64 = r30.s64 + 3;
	// cmpwi cr6,r30,98
	ctx.cr6.compare<int32_t>(r30.s32, 98, ctx.xer);
	// blt cr6,0x82198244
	if (ctx.cr6.lt) goto loc_82198244;
	// bl 0x82187b58
	ctx.lr = 0x821982B0;
	sub_82187B58(ctx, base);
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r5,104(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r4,100(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 100);
	// bl 0x82188808
	ctx.lr = 0x821982C4;
	sub_82188808(ctx, base);
	// bl 0x82189128
	ctx.lr = 0x821982C8;
	sub_82189128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

DEFINE_REX_FUNC(sub_821A5768) {
	REX_FUNC_PROLOGUE();
	// lwz r3,212(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A5B48) {
	REX_FUNC_PROLOGUE();
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// addi r3,r11,17664
	ctx.r3.s64 = ctx.r11.s64 + 17664;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A5ED0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
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
	// bl 0x822d4e84
	ctx.lr = 0x821A5ED8;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f00
	ctx.lr = 0x821A5EE0;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// lfs f0,12(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f24,f0,f1
	f24.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f13,28(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// fmuls f28,f13,f1
	f28.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lfs f27,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	f27.f64 = double(temp.f32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfs f26,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	f26.f64 = double(temp.f32);
	// lfs f25,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	f25.f64 = double(temp.f32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f31,16(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16);
	f31.f64 = double(temp.f32);
	// lfs f30,20(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 20);
	f30.f64 = double(temp.f32);
	// lfs f29,24(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 24);
	f29.f64 = double(temp.f32);
	// lfs f13,32(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 - f27.f64));
	// lfs f11,40(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f26
	ctx.f12.f64 = double(float(ctx.f12.f64 - f26.f64));
	// lfs f10,44(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f11,f25
	ctx.f11.f64 = double(float(ctx.f11.f64 - f25.f64));
	// lfs f9,48(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// fmsubs f10,f10,f1,f24
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f1.f64, -f24.f64)));
	// lfs f8,52(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 - f31.f64));
	// lfs f7,56(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f8,f8,f30
	ctx.f8.f64 = double(float(ctx.f8.f64 - f30.f64));
	// lfs f23,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f23.f64 = double(temp.f32);
	// fsubs f7,f7,f29
	ctx.f7.f64 = double(float(ctx.f7.f64 - f29.f64));
	// lfs f6,60(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 60);
	ctx.f6.f64 = double(temp.f32);
	// fdivs f0,f23,f0
	ctx.f0.f64 = double(float(f23.f64 / ctx.f0.f64));
	// fmsubs f6,f6,f1,f28
	ctx.f6.f64 = double(float(std::fma(ctx.f6.f64, ctx.f1.f64, -f28.f64)));
	// fmuls f22,f13,f0
	f22.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f21,f12,f0
	f21.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f20,f11,f0
	f20.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f19,f10,f0
	f19.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f18,f9,f0
	f18.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f17,f8,f0
	f17.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f16,f7,f0
	f16.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f15,f6,f0
	f15.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// beq cr6,0x821a6078
	if (ctx.cr6.eq) goto loc_821A6078;
	// subf r11,r5,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r5.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r27,r11,-8
	r27.s64 = ctx.r11.s64 + -8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r29,r4,-4
	r29.s64 = ctx.r4.s64 + -4;
	// addi r30,r5,8
	r30.s64 = ctx.r5.s64 + 8;
	// lfs f14,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	f14.f64 = double(temp.f32);
	// addi r31,r3,-20
	r31.s64 = ctx.r3.s64 + -20;
	// lfs f0,15944(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15944);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_821A5FC4:
	// lfs f0,-8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lfs f0,-4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// lfs f0,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f31,52(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// fadds f31,f18,f31
	f31.f64 = double(float(f18.f64 + f31.f64));
	// stfs f30,56(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// fadds f30,f17,f30
	f30.f64 = double(float(f17.f64 + f30.f64));
	// stfs f29,60(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// fadds f29,f16,f29
	f29.f64 = double(float(f16.f64 + f29.f64));
	// stfs f28,64(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// lfsx f0,r27,r30
	temp.u32 = REX_LOAD_U32(r27.u32 + r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f28,f15,f28
	f28.f64 = double(float(f15.f64 + f28.f64));
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f0,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// lfs f0,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// lfsu f1,16(r29)
	ea = 16 + r29.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	r29.u32 = ea;
	// bl 0x820e00c0
	ctx.lr = 0x821A6028;
	sub_820E00C0(ctx, base);
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f23
	ctx.f13.f64 = double(float(ctx.f13.f64 + f23.f64));
	// fsubs f12,f12,f23
	ctx.f12.f64 = double(float(ctx.f12.f64 - f23.f64));
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// fmuls f13,f13,f14
	ctx.f13.f64 = double(float(ctx.f13.f64 * f14.f64));
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f27,52(r31)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// fadds f27,f22,f27
	f27.f64 = double(float(f22.f64 + f27.f64));
	// stfs f26,56(r31)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// fadds f26,f21,f26
	f26.f64 = double(float(f21.f64 + f26.f64));
	// stfs f25,60(r31)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// fadds f25,f20,f25
	f25.f64 = double(float(f20.f64 + f25.f64));
	// stfsu f24,64(r31)
	ea = 64 + r31.u32;
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ea, temp.u32);
	r31.u32 = ea;
	// fadds f24,f19,f24
	f24.f64 = double(float(f19.f64 + f24.f64));
	// bne 0x821a5fc4
	if (!ctx.cr0.eq) goto loc_821A5FC4;
loc_821A6078:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f4c
	ctx.lr = 0x821A6084;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821AFF50) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821aff80
	if (ctx.cr6.eq) goto loc_821AFF80;
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// addi r11,r10,13128
	ctx.r11.s64 = ctx.r10.s64 + 13128;
	// mulli r10,r9,136
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(136));
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
loc_821AFF80:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// addi r3,r11,1088
	ctx.r3.s64 = ctx.r11.s64 + 1088;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B0FD8) {
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r11,240
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 240, ctx.xer);
	// bne cr6,0x821b1038
	if (!ctx.cr6.eq) goto loc_821B1038;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,320(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 320);
	// bl 0x8212e800
	ctx.lr = 0x821B1010;
	sub_8212E800(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8212c708
	ctx.lr = 0x821B1020;
	sub_8212C708(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,180
	ctx.r5.s64 = 180;
	// lfs f2,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8212f220
	ctx.lr = 0x821B1038;
	sub_8212F220(ctx, base);
loc_821B1038:
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

DEFINE_REX_FUNC(sub_821B2B70) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r10,r11,432
	ctx.r10.s64 = ctx.r11.s64 + 432;
	// lha r11,74(r10)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 74));
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x821b2ba4
	if (ctx.cr6.eq) goto loc_821B2BA4;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x821b2b9c
	if (ctx.cr6.eq) goto loc_821B2B9C;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x821b2ba8
	goto loc_821B2BA8;
loc_821B2B9C:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x821b2ba8
	goto loc_821B2BA8;
loc_821B2BA4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821B2BA8:
	// sth r11,74(r10)
	REX_STORE_U16(ctx.r10.u32 + 74, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B3930) {
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
	ctx.lr = 0x821B3938;
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r29,r11,432
	r29.s64 = ctx.r11.s64 + 432;
	// lhz r11,72(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 72);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x821b3960
	if (ctx.cr6.eq) goto loc_821B3960;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821b3d48
	goto loc_821B3D48;
loc_821B3960:
	// lwa r10,568(r29)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(r29.u32 + 568));
	// lfs f0,556(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 556);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r28,84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r28,1
	ctx.r9.s64 = r28.s64 + 1;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,332(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 332);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// divw r10,r9,r11
	ctx.r10.u64 = uint32_t((ctx.r11.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r9.s32 / ctx.r11.s32 : 0);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addi r7,r8,-8304
	ctx.r7.s64 = ctx.r8.s64 + -8304;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mulli r8,r10,4896
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(4896));
	// lwz r10,604(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 604);
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// add r30,r8,r10
	r30.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r31,r7,-7072
	r31.s64 = ctx.r7.s64 + -7072;
	// andc r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// lfs f0,2008(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// mulli r11,r28,4896
	ctx.r11.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(4896));
	// fsubs f30,f13,f0
	f30.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// add r27,r11,r10
	r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bl 0x821b3890
	ctx.lr = 0x821B39E8;
	sub_821B3890(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821b3890
	ctx.lr = 0x821B39F8;
	sub_821B3890(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821b32f0
	ctx.lr = 0x821B3A04;
	sub_821B32F0(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,3696
	ctx.r4.s64 = ctx.r11.s64 + 3696;
	// bl 0x821b32f0
	ctx.lr = 0x821B3A14;
	sub_821B32F0(ctx, base);
	// addi r5,r30,24
	ctx.r5.s64 = r30.s64 + 24;
	// addi r4,r27,24
	ctx.r4.s64 = r27.s64 + 24;
	// lwz r3,10148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 10148);
	// lfs f1,556(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 556);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82165448
	ctx.lr = 0x821B3A28;
	sub_82165448(ctx, base);
	// lwz r11,10148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10148);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lfs f1,556(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 556);
	ctx.f1.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// ori r9,r9,13844
	ctx.r9.u64 = ctx.r9.u64 | 13844;
	// addi r8,r31,10484
	ctx.r8.s64 = r31.s64 + 10484;
	// lfs f0,112(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r31,10532
	ctx.r8.s64 = r31.s64 + 10532;
	// stfs f0,10484(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10484, temp.u32);
	// addi r5,r30,2460
	ctx.r5.s64 = r30.s64 + 2460;
	// lfs f31,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f31.f64 = double(temp.f32);
	// addi r4,r27,2460
	ctx.r4.s64 = r27.s64 + 2460;
	// lwzx r3,r31,r9
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + ctx.r9.u32);
	// lfs f0,116(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,10484(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10484);
	// stfs f0,10488(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10488, temp.u32);
	// lfs f0,120(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,10488(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10488);
	// stfs f31,10496(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 10496, temp.u32);
	// lwz r9,10496(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 10496);
	// stfs f0,10492(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10492, temp.u32);
	// lwz r8,10492(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 10492);
	// stw r10,10532(r31)
	REX_STORE_U32(r31.u32 + 10532, ctx.r10.u32);
	// stw r11,10536(r31)
	REX_STORE_U32(r31.u32 + 10536, ctx.r11.u32);
	// stw r8,10540(r31)
	REX_STORE_U32(r31.u32 + 10540, ctx.r8.u32);
	// stw r9,10544(r31)
	REX_STORE_U32(r31.u32 + 10544, ctx.r9.u32);
	// bl 0x82165448
	ctx.lr = 0x821B3A94;
	sub_82165448(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r4,10148(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 10148);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// ori r8,r10,13844
	ctx.r8.u64 = ctx.r10.u64 | 13844;
	// addi r27,r11,14180
	r27.s64 = ctx.r11.s64 + 14180;
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r26,r11,14228
	r26.s64 = ctx.r11.s64 + 14228;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r25,r10,14180
	r25.u64 = ctx.r10.u64 | 14180;
	// ori r24,r11,14184
	r24.u64 = ctx.r11.u64 | 14184;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r22,r11,14192
	r22.u64 = ctx.r11.u64 | 14192;
	// lwzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r8.u32);
	// ori r23,r10,14188
	r23.u64 = ctx.r10.u64 | 14188;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addis r6,r31,1
	ctx.r6.s64 = r31.s64 + 65536;
	// ori r7,r10,13844
	ctx.r7.u64 = ctx.r10.u64 | 13844;
	// lfs f0,112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r6,9968
	ctx.r5.s64 = ctx.r6.s64 + 9968;
	// stfsx f0,r31,r25
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + r25.u32, temp.u32);
	// lwz r25,0(r27)
	r25.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lfs f0,116(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfsx f0,r31,r24
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + r24.u32, temp.u32);
	// lwz r24,4(r27)
	r24.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lfs f0,120(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stw r25,0(r26)
	REX_STORE_U32(r26.u32 + 0, r25.u32);
	// stfsx f0,r31,r23
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + r23.u32, temp.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// stfsx f31,r31,r22
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + r22.u32, temp.u32);
	// lwz r27,12(r27)
	r27.u64 = REX_LOAD_U32(r27.u32 + 12);
	// stw r24,4(r26)
	REX_STORE_U32(r26.u32 + 4, r24.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,8(r26)
	REX_STORE_U32(r26.u32 + 8, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r27,12(r26)
	REX_STORE_U32(r26.u32 + 12, r27.u32);
	// addi r3,r31,6272
	ctx.r3.s64 = r31.s64 + 6272;
	// lwzx r6,r31,r7
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + ctx.r7.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8215b898
	ctx.lr = 0x821B3B3C;
	sub_8215B898(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,3696
	ctx.r4.s64 = ctx.r11.s64 + 3696;
	// bl 0x82126988
	ctx.lr = 0x821B3B4C;
	sub_82126988(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82124bb8
	ctx.lr = 0x821B3B54;
	sub_82124BB8(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x82124bb8
	ctx.lr = 0x821B3B60;
	sub_82124BB8(ctx, base);
	// lwz r11,564(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 564);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821b3b90
	if (ctx.cr6.eq) goto loc_821B3B90;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r3,r11,-27096
	ctx.r3.s64 = ctx.r11.s64 + -27096;
	// bl 0x821a1398
	ctx.lr = 0x821B3B80;
	sub_821A1398(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r11,572(r29)
	REX_STORE_U32(r29.u32 + 572, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,576(r29)
	REX_STORE_U32(r29.u32 + 576, ctx.r11.u32);
loc_821B3B90:
	// lhz r11,594(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 594);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r28,564(r29)
	REX_STORE_U32(r29.u32 + 564, r28.u32);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x821b3bb4
	if (!ctx.cr6.eq) goto loc_821B3BB4;
	// stw r8,104(r10)
	REX_STORE_U32(ctx.r10.u32 + 104, ctx.r8.u32);
	// b 0x821b3bb8
	goto loc_821B3BB8;
loc_821B3BB4:
	// stw r9,104(r10)
	REX_STORE_U32(ctx.r10.u32 + 104, ctx.r9.u32);
loc_821B3BB8:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r11,r11,4290
	ctx.r11.u64 = ctx.r11.u64 | 4290;
	// ori r7,r10,3712
	ctx.r7.u64 = ctx.r10.u64 | 3712;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + ctx.r11.u32);
	// lwzx r11,r31,r7
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x821b3be0
	if (!ctx.cr6.eq) goto loc_821B3BE0;
	// stw r8,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r8.u32);
	// b 0x821b3be4
	goto loc_821B3BE4;
loc_821B3BE0:
	// stw r9,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r9.u32);
loc_821B3BE4:
	// lwz r11,10148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10148);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lbz r9,26(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 26);
	// ori r10,r10,13844
	ctx.r10.u64 = ctx.r10.u64 | 13844;
	// ori r8,r8,9856
	ctx.r8.u64 = ctx.r8.u64 | 9856;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lfs f0,176(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// stfs f0,6160(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 6160, temp.u32);
	// ori r7,r7,9860
	ctx.r7.u64 = ctx.r7.u64 | 9860;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// ori r6,r6,9864
	ctx.r6.u64 = ctx.r6.u64 | 9864;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r5,r5,9868
	ctx.r5.u64 = ctx.r5.u64 | 9868;
	// ori r4,r4,14228
	ctx.r4.u64 = ctx.r4.u64 | 14228;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// lis r30,1
	r30.s64 = 65536;
	// ori r3,r3,14232
	ctx.r3.u64 = ctx.r3.u64 | 14232;
	// ori r30,r30,14236
	r30.u64 = r30.u64 | 14236;
	// lis r28,1
	r28.s64 = 65536;
	// lis r27,1
	r27.s64 = 65536;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// ori r28,r28,3696
	r28.u64 = r28.u64 | 3696;
	// ori r27,r27,14240
	r27.u64 = r27.u64 | 14240;
	// mullw r28,r9,r28
	r28.s64 = int64_t(ctx.r9.s32) * int64_t(r28.s32);
	// lfs f0,180(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6164(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 6164, temp.u32);
	// lfs f0,184(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6168(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 6168, temp.u32);
	// stfs f31,6172(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 6172, temp.u32);
	// addi r26,r31,32
	r26.s64 = r31.s64 + 32;
	// lfs f0,176(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// stfs f0,10532(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10532, temp.u32);
	// addi r9,r10,128
	ctx.r9.s64 = ctx.r10.s64 + 128;
	// lfs f0,180(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10536(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10536, temp.u32);
	// lfs f0,184(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10540(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10540, temp.u32);
	// stfs f31,10544(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 10544, temp.u32);
	// lfs f0,176(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r31,r8
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + ctx.r8.u32, temp.u32);
	// lfs f0,180(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r31,r7
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + ctx.r7.u32, temp.u32);
	// lfs f0,184(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r31,r6
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + ctx.r6.u32, temp.u32);
	// stfsx f31,r31,r5
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + ctx.r5.u32, temp.u32);
	// lfs f0,176(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r31,r4
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + ctx.r4.u32, temp.u32);
	// lfs f0,180(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r31,r3
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + ctx.r3.u32, temp.u32);
	// lfs f0,184(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfsx f0,r31,r30
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + r30.u32, temp.u32);
	// stfsx f31,r31,r27
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + r27.u32, temp.u32);
	// lwzx r11,r28,r26
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + r26.u32);
	// lfs f0,560(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 560);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b3ce4
	if (ctx.cr0.eq) goto loc_821B3CE4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// b 0x821b3cec
	goto loc_821B3CEC;
loc_821B3CE4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16232);
	ctx.f13.f64 = double(temp.f32);
loc_821B3CEC:
	// fsubs f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,16308(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16308);
	ctx.f13.f64 = double(temp.f32);
	// lwa r11,332(r29)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r29.u32 + 332));
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// lfs f13,556(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 556);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,552(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 552);
	ctx.f12.f64 = double(temp.f32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stfs f0,560(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 560, temp.u32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,556(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r29.u32 + 556, temp.u32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfs f12,552(r29)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r29.u32 + 552, temp.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x821b3d38
	if (ctx.cr6.lt) goto loc_821B3D38;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,556(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 556, temp.u32);
loc_821B3D38:
	// fcmpu cr6,f12,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, f30.f64);
	// li r3,0
	ctx.r3.s64 = 0;
	// bge cr6,0x821b3d48
	if (!ctx.cr6.lt) goto loc_821B3D48;
	// li r3,1
	ctx.r3.s64 = 1;
loc_821B3D48:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_821C7FE0) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r3,15
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 15, ctx.xer);
	// beq cr6,0x821c7ffc
	if (ctx.cr6.eq) goto loc_821C7FFC;
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// beq cr6,0x821c7ffc
	if (ctx.cr6.eq) goto loc_821C7FFC;
	// cmpwi cr6,r3,24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 24, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_821C7FFC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C89F0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,52(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 52);
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r30,8(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,3,25,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x78;
	// addi r11,r9,-11728
	ctx.r11.s64 = ctx.r9.s64 + -11728;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f31,1996(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	f31.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r11,10140(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10140);
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r4,r11,20028
	ctx.r4.s64 = ctx.r11.s64 + 20028;
	// bl 0x820e1ec0
	ctx.lr = 0x821C8A5C;
	sub_820E1EC0(ctx, base);
	// stfs f31,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// lfs f1,10312(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 10312);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x820e00c0
	ctx.lr = 0x821C8A70;
	sub_820E00C0(ctx, base);
	// addi r30,r31,5684
	r30.s64 = r31.s64 + 5684;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1c50
	ctx.lr = 0x821C8A84;
	sub_820E1C50(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,2392(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2392);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,5640(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5640);
	// lha r11,0(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,5680(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5680, temp.u32);
	// bl 0x820e22e8
	ctx.lr = 0x821C8AB4;
	sub_820E22E8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,7336(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 7336);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x821c8ae0
	if (!ctx.cr6.lt) goto loc_821C8AE0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,0(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f31,8(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
	// stfs f31,5680(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 5680, temp.u32);
loc_821C8AE0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

DEFINE_REX_FUNC(sub_821CD640) {
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
	ctx.lr = 0x821CD648;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821cd998
	if (ctx.cr6.eq) goto loc_821CD998;
	// lhz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 88);
	// li r24,1
	r24.s64 = 1;
	// addi r10,r3,19552
	ctx.r10.s64 = ctx.r3.s64 + 19552;
	// stw r5,868(r3)
	REX_STORE_U32(ctx.r3.u32 + 868, ctx.r5.u32);
	// mr r22,r24
	r22.u64 = r24.u64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// li r29,0
	r29.s64 = 0;
	// bne cr6,0x821cd6f8
	if (!ctx.cr6.eq) goto loc_821CD6F8;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// beq cr6,0x821cd6a8
	if (ctx.cr6.eq) goto loc_821CD6A8;
	// mr r22,r29
	r22.u64 = r29.u64;
	// stw r29,11000(r3)
	REX_STORE_U32(ctx.r3.u32 + 11000, r29.u32);
	// stw r29,11004(r3)
	REX_STORE_U32(ctx.r3.u32 + 11004, r29.u32);
	// sth r29,10988(r3)
	REX_STORE_U16(ctx.r3.u32 + 10988, r29.u16);
	// sth r29,10990(r3)
	REX_STORE_U16(ctx.r3.u32 + 10990, r29.u16);
loc_821CD6A8:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x821c5098
	ctx.lr = 0x821CD6B0;
	sub_821C5098(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x821cd6c0
	if (!ctx.cr0.lt) goto loc_821CD6C0;
	// li r6,25
	ctx.r6.s64 = 25;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_821CD6C0:
	// lbz r11,19664(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 19664);
	// addi r26,r30,1
	r26.s64 = r30.s64 + 1;
	// sth r6,92(r31)
	REX_STORE_U16(r31.u32 + 92, ctx.r6.u16);
	// li r27,10
	r27.s64 = 10;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821cd6e4
	if (!ctx.cr0.eq) goto loc_821CD6E4;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// stb r24,19664(r31)
	REX_STORE_U8(r31.u32 + 19664, r24.u8);
	// b 0x821cd6ec
	goto loc_821CD6EC;
loc_821CD6E4:
	// addi r28,r31,19608
	r28.s64 = r31.s64 + 19608;
	// stb r29,19664(r31)
	REX_STORE_U8(r31.u32 + 19664, r29.u8);
loc_821CD6EC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821f5538
	ctx.lr = 0x821CD6F4;
	sub_821F5538(ctx, base);
	// b 0x821cd704
	goto loc_821CD704;
loc_821CD6F8:
	// mr r27,r24
	r27.u64 = r24.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// li r26,2
	r26.s64 = 2;
loc_821CD704:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,12364
	ctx.r5.s64 = ctx.r11.s64 + 12364;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x821af9d8
	ctx.lr = 0x821CD71C;
	sub_821AF9D8(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// ori r5,r11,2
	ctx.r5.u64 = ctx.r11.u64 | 2;
	// bl 0x821ee990
	ctx.lr = 0x821CD73C;
	sub_821EE990(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821cd820
	if (ctx.cr0.eq) goto loc_821CD820;
	// bne cr6,0x821cd7b0
	if (!ctx.cr6.eq) goto loc_821CD7B0;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// lis r7,-32228
	ctx.r7.s64 = -2112094208;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r9,12512
	ctx.r6.s64 = ctx.r9.s64 + 12512;
	// lwz r3,12(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// addi r8,r7,21040
	ctx.r8.s64 = ctx.r7.s64 + 21040;
	// addi r9,r10,-12752
	ctx.r9.s64 = ctx.r10.s64 + -12752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,601
	ctx.r5.s64 = ctx.r11.s64 + 601;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x821366d8
	ctx.lr = 0x821CD78C;
	sub_821366D8(ctx, base);
	// lwz r10,10140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10140);
	// lwz r11,10144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10144);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r11,r11,20028
	ctx.r11.s64 = ctx.r11.s64 + 20028;
	// stw r11,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
loc_821CD7B0:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r10,336(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 336);
	// stw r9,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r9.u32);
	// stw r10,336(r11)
	REX_STORE_U32(ctx.r11.u32 + 336, ctx.r10.u32);
	// stw r28,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, r28.u32);
	// sth r29,100(r11)
	REX_STORE_U16(ctx.r11.u32 + 100, r29.u16);
	// stb r29,103(r11)
	REX_STORE_U8(ctx.r11.u32 + 103, r29.u8);
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// bne 0x821cd7ec
	if (!ctx.cr0.eq) goto loc_821CD7EC;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// b 0x821cd7f0
	goto loc_821CD7F0;
loc_821CD7EC:
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
loc_821CD7F0:
	// stw r10,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// lha r11,88(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 88));
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x821cd814
	if (ctx.cr6.eq) goto loc_821CD814;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// beq cr6,0x821cd814
	if (ctx.cr6.eq) goto loc_821CD814;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r24,19764(r31)
	REX_STORE_U32(r31.u32 + 19764, r24.u32);
	// stw r11,19672(r31)
	REX_STORE_U32(r31.u32 + 19672, ctx.r11.u32);
loc_821CD814:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c77e8
	ctx.lr = 0x821CD81C;
	sub_821C77E8(ctx, base);
	// b 0x821cd834
	goto loc_821CD834;
loc_821CD820:
	// beq cr6,0x821cd834
	if (ctx.cr6.eq) goto loc_821CD834;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r29,103(r11)
	REX_STORE_U8(ctx.r11.u32 + 103, r29.u8);
	// stb r10,36(r11)
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r10.u8);
	// stw r29,16(r31)
	REX_STORE_U32(r31.u32 + 16, r29.u32);
loc_821CD834:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lha r4,92(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 92));
	// bl 0x821c5100
	ctx.lr = 0x821CD840;
	sub_821C5100(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x821cd894
	if (ctx.cr6.eq) goto loc_821CD894;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r30,r11,12500
	r30.s64 = ctx.r11.s64 + 12500;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x821af9f8
	ctx.lr = 0x821CD860;
	sub_821AF9F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x821cd894
	if (!ctx.cr0.gt) goto loc_821CD894;
	// lhz r11,90(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 90);
	// cmplwi cr6,r11,254
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 254, ctx.xer);
	// beq cr6,0x821cd894
	if (ctx.cr6.eq) goto loc_821CD894;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x821af9d8
	ctx.lr = 0x821CD888;
	sub_821AF9D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8212b838
	ctx.lr = 0x821CD894;
	sub_8212B838(ctx, base);
loc_821CD894:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// add r10,r25,r23
	ctx.r10.u64 = r25.u64 + r23.u64;
	// addi r30,r11,12488
	r30.s64 = ctx.r11.s64 + 12488;
	// addi r11,r10,127
	ctx.r11.s64 = ctx.r10.s64 + 127;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// rlwinm r29,r11,0,0,24
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// bl 0x821af9f8
	ctx.lr = 0x821CD8B8;
	sub_821AF9F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x821cd8f8
	if (!ctx.cr0.gt) goto loc_821CD8F8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x821af9d8
	ctx.lr = 0x821CD8D4;
	sub_821AF9D8(ctx, base);
	// addi r11,r31,6272
	ctx.r11.s64 = r31.s64 + 6272;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r8,r11,532
	ctx.r8.s64 = ctx.r11.s64 + 532;
	// addi r7,r11,524
	ctx.r7.s64 = ctx.r11.s64 + 524;
	// addi r6,r11,528
	ctx.r6.s64 = ctx.r11.s64 + 528;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8215cd78
	ctx.lr = 0x821CD8F4;
	sub_8215CD78(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_821CD8F8:
	// mr r30,r21
	r30.u64 = r21.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// bne cr6,0x821cd908
	if (!ctx.cr6.eq) goto loc_821CD908;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_821CD908:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lha r27,92(r31)
	r27.s64 = int16_t(REX_LOAD_U16(r31.u32 + 92));
	// bl 0x821f2ec8
	ctx.lr = 0x821CD914;
	sub_821F2EC8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821f2ee8
	ctx.lr = 0x821CD920;
	sub_821F2EE8(ctx, base);
	// lwz r10,11008(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 11008);
	// addi r11,r31,10984
	ctx.r11.s64 = r31.s64 + 10984;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r10,10144(r31)
	REX_STORE_U32(r31.u32 + 10144, ctx.r10.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r10,11008(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 11008);
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x8214b2d8
	ctx.lr = 0x821CD958;
	sub_8214B2D8(ctx, base);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// bne cr6,0x821cd998
	if (!ctx.cr6.eq) goto loc_821CD998;
	// subf r30,r25,r29
	r30.u64 = r29.u64 - r25.u64;
	// lwz r3,19428(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 19428);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821af9a0
	ctx.lr = 0x821CD970;
	sub_821AF9A0(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x821cd98c
	if (ctx.cr6.eq) goto loc_821CD98C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lha r5,140(r31)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r31.u32 + 140));
	// lha r4,90(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 90));
	// bl 0x821c5168
	ctx.lr = 0x821CD988;
	sub_821C5168(ctx, base);
	// stw r3,872(r31)
	REX_STORE_U32(r31.u32 + 872, ctx.r3.u32);
loc_821CD98C:
	// neg r4,r30
	ctx.r4.s64 = static_cast<int64_t>(-r30.u64);
	// lwz r3,19428(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 19428);
	// bl 0x821af9a0
	ctx.lr = 0x821CD998;
	sub_821AF9A0(ctx, base);
loc_821CD998:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_821DBE10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x821DBE18;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r30,r11,-7280
	r30.s64 = ctx.r11.s64 + -7280;
	// lwz r29,36(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 36);
loc_821DBE38:
	// stw r6,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r6.u32);
	// mulli r11,r6,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(12));
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lbzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x821d8e30
	ctx.lr = 0x821DBE54;
	sub_821D8E30(ctx, base);
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x821dbe74
	if (ctx.cr6.eq) goto loc_821DBE74;
	// cmpwi cr6,r6,6
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 6, ctx.xer);
	// beq cr6,0x821dbe6c
	if (ctx.cr6.eq) goto loc_821DBE6C;
	// li r9,10
	ctx.r9.s64 = 10;
	// b 0x821dbe78
	goto loc_821DBE78;
loc_821DBE6C:
	// li r9,4
	ctx.r9.s64 = 4;
	// b 0x821dbe78
	goto loc_821DBE78;
loc_821DBE74:
	// li r9,5
	ctx.r9.s64 = 5;
loc_821DBE78:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// blt cr6,0x821dbee4
	if (ctx.cr6.lt) goto loc_821DBEE4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_821DBE8C:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stb r5,3(r3)
	REX_STORE_U8(ctx.r3.u32 + 3, ctx.r5.u8);
	// stb r5,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r5.u8);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x821dbec0
	if (!ctx.cr6.lt) goto loc_821DBEC0;
	// clrlwi r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	// srawi r4,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 2;
	// mulli r8,r8,15
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(15));
	// clrlwi r4,r4,27
	ctx.r4.u64 = ctx.r4.u32 & 0x1F;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// stb r4,1(r3)
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r4.u8);
	// stb r8,2(r3)
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r8.u8);
	// b 0x821dbed8
	goto loc_821DBED8;
loc_821DBEC0:
	// li r8,20
	ctx.r8.s64 = 20;
	// li r4,7
	ctx.r4.s64 = 7;
	// li r28,65
	r28.s64 = 65;
	// stb r8,1(r3)
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r8.u8);
	// stb r4,2(r3)
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r4.u8);
	// stb r28,3(r3)
	REX_STORE_U8(ctx.r3.u32 + 3, r28.u8);
loc_821DBED8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bdnz 0x821dbe8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DBE8C;
loc_821DBEE4:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpwi cr6,r6,6
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 6, ctx.xer);
	// ble cr6,0x821dbe38
	if (!ctx.cr6.gt) goto loc_821DBE38;
	// stw r29,36(r31)
	REX_STORE_U32(r31.u32 + 36, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821DF398) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821DF3A0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821df3c4
	if (!ctx.cr6.eq) goto loc_821DF3C4;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r11,r11,-8304
	ctx.r11.s64 = ctx.r11.s64 + -8304;
	// lwz r30,828(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 828);
loc_821DF3C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dd490
	ctx.lr = 0x821DF3CC;
	sub_821DD490(ctx, base);
	// lha r11,0(r3)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 0));
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// bne cr6,0x821df428
	if (!ctx.cr6.eq) goto loc_821DF428;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r6,r8,15264
	ctx.r6.s64 = ctx.r8.s64 + 15264;
	// addi r8,r10,-4248
	ctx.r8.s64 = ctx.r10.s64 + -4248;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// bl 0x821f7d50
	ctx.lr = 0x821DF404;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821df41c
	if (ctx.cr0.eq) goto loc_821DF41C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,31764
	ctx.r11.s64 = ctx.r11.s64 + 31764;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x821df420
	goto loc_821DF420;
loc_821DF41C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821DF420:
	// li r31,0
	r31.s64 = 0;
	// b 0x821df47c
	goto loc_821DF47C;
loc_821DF428:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// beq cr6,0x821df44c
	if (ctx.cr6.eq) goto loc_821DF44C;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r6,r8,15264
	ctx.r6.s64 = ctx.r8.s64 + 15264;
	// addi r8,r10,-4248
	ctx.r8.s64 = ctx.r10.s64 + -4248;
	// b 0x821df45c
	goto loc_821DF45C;
loc_821DF44C:
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r6,r8,15256
	ctx.r6.s64 = ctx.r8.s64 + 15256;
	// addi r8,r10,-9528
	ctx.r8.s64 = ctx.r10.s64 + -9528;
loc_821DF45C:
	// bl 0x821f7d50
	ctx.lr = 0x821DF460;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821df478
	if (ctx.cr0.eq) goto loc_821DF478;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,31764
	ctx.r11.s64 = ctx.r11.s64 + 31764;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x821df47c
	goto loc_821DF47C;
loc_821DF478:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821DF47C:
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r31,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, r31.u32);
	// stw r31,4688(r10)
	REX_STORE_U32(ctx.r10.u32 + 4688, r31.u32);
	// stw r30,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, r30.u32);
	// stw r29,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821E2268) {
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
	// bne 0x821e22f8
	if (!ctx.cr0.eq) goto loc_821E22F8;
	// lbz r10,2973(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2973);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821e22f8
	if (!ctx.cr0.eq) goto loc_821E22F8;
	// lhz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x821e22f8
	if (!ctx.cr6.eq) goto loc_821E22F8;
	// lha r10,30(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 30));
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x821e22a8
	if (ctx.cr6.lt) goto loc_821E22A8;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// ble cr6,0x821e22f8
	if (!ctx.cr6.gt) goto loc_821E22F8;
loc_821E22A8:
	// lbz r10,6(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 6);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821e22f8
	if (!ctx.cr0.eq) goto loc_821E22F8;
	// lbz r10,2(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// lwz r11,2980(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2980);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821e22f8
	if (!ctx.cr6.eq) goto loc_821E22F8;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r9,r11,5608
	ctx.r9.s64 = ctx.r11.s64 + 5608;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// stw r11,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// adde r11,r8,r7
	temp.u8 = (ctx.r8.u32 + ctx.r7.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_821E22F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E3F78) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// clrlwi. r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f12,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// beq 0x821e3fa0
	if (ctx.cr0.eq) goto loc_821E3FA0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,-8496(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8496);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2024(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2024);
	ctx.f13.f64 = double(temp.f32);
	// b 0x821e3fb0
	goto loc_821E3FB0;
loc_821E3FA0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,20480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20480);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16092(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16092);
	ctx.f13.f64 = double(temp.f32);
loc_821E3FB0:
	// fdivs f12,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f13,56(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// fdivs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f12,64(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E5E58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821E5E60;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821e5ee0
	if (!ctx.cr6.eq) goto loc_821E5EE0;
	// addi r11,r4,22
	ctx.r11.s64 = ctx.r4.s64 + 22;
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r3
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r3.u32);
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r30,r3
	REX_STORE_U32(r30.u32 + ctx.r3.u32, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x821e5ea4
	if (!ctx.cr6.gt) goto loc_821E5EA4;
	// stwx r10,r30,r3
	REX_STORE_U32(r30.u32 + ctx.r3.u32, ctx.r10.u32);
loc_821E5EA4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwzx r5,r30,r31
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e5d80
	ctx.lr = 0x821E5EB4;
	sub_821E5D80(ctx, base);
	// lwzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x821e5f20
	if (ctx.cr0.lt) goto loc_821E5F20;
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// li r9,2
	ctx.r9.s64 = 2;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,65
	ctx.r11.s64 = ctx.r11.s64 + 65;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// stw r9,192(r11)
	REX_STORE_U32(ctx.r11.u32 + 192, ctx.r9.u32);
	// b 0x821e5f20
	goto loc_821E5F20;
loc_821E5EE0:
	// xori r4,r29,1
	ctx.r4.u64 = r29.u64 ^ 1;
	// addi r11,r4,22
	ctx.r11.s64 = ctx.r4.s64 + 22;
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r8,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821e5f20
	if (!ctx.cr6.lt) goto loc_821E5F20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e35f8
	ctx.lr = 0x821E5F0C;
	sub_821E35F8(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,192(r3)
	REX_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
	// lwzx r11,r8,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r8,r31
	REX_STORE_U32(ctx.r8.u32 + r31.u32, ctx.r11.u32);
loc_821E5F20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821E9588) {
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
	// addi r3,r4,32
	ctx.r3.s64 = ctx.r4.s64 + 32;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82202740
	ctx.lr = 0x821E95A4;
	sub_82202740(ctx, base);
	// lbz r11,5(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 5);
	// stw r3,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821e95bc
	if (!ctx.cr0.eq) goto loc_821E95BC;
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r11,91(r31)
	REX_STORE_U8(r31.u32 + 91, ctx.r11.u8);
loc_821E95BC:
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

DEFINE_REX_FUNC(sub_821EB360) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32165
	ctx.r8.s64 = -2107965440;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfd f2,26664(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + 26664);
	// addi r31,r8,10016
	r31.s64 = ctx.r8.s64 + 10016;
	// lfd f4,17240(r10)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r10.u32 + 17240);
	// addi r3,r5,17248
	ctx.r3.s64 = ctx.r5.s64 + 17248;
	// lfd f3,17232(r9)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r9.u32 + 17232);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfd f4,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f4.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f3,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f2,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r11,384(r31)
	REX_STORE_U32(r31.u32 + 384, ctx.r11.u32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x821ead40
	ctx.lr = 0x821EB3CC;
	sub_821EAD40(ctx, base);
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

DEFINE_REX_FUNC(sub_821EC570) {
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
	// addi r11,r3,768
	ctx.r11.s64 = ctx.r3.s64 + 768;
	// stw r3,1692(r3)
	REX_STORE_U32(ctx.r3.u32 + 1692, ctx.r3.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,1696(r3)
	REX_STORE_U32(ctx.r3.u32 + 1696, ctx.r11.u32);
	// bl 0x821eb7f8
	ctx.lr = 0x821EC594;
	sub_821EB7F8(ctx, base);
	// lwz r11,4464(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4464);
	// addi r3,r31,4464
	ctx.r3.s64 = r31.s64 + 4464;
	// addi r4,r31,2412
	ctx.r4.s64 = r31.s64 + 2412;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EC5AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821ec4c8
	ctx.lr = 0x821EC5B4;
	sub_821EC4C8(ctx, base);
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

DEFINE_REX_FUNC(sub_821EE990) {
	REX_FUNC_PROLOGUE();
	// b 0x821f5910
	sub_821F5910(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821EECB0) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e80
	ctx.lr = 0x821EECB8;
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f29.u64);
	// stfd f30,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,103(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 103);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821eee40
	if (ctx.cr0.eq) goto loc_821EEE40;
	// lwz r29,92(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x821eee40
	if (ctx.cr6.eq) goto loc_821EEE40;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r31,r11,7792
	r31.s64 = ctx.r11.s64 + 7792;
	// lwz r11,7792(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7792);
	// addi r3,r11,4464
	ctx.r3.s64 = ctx.r11.s64 + 4464;
	// lwz r11,4464(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4464);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq 0x821eed24
	if (ctx.cr0.eq) goto loc_821EED24;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lfs f13,88(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,13128
	ctx.r10.s64 = ctx.r10.s64 + 13128;
	// lfs f0,1840(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x821eed2c
	goto loc_821EED2C;
loc_821EED24:
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// lfs f1,-272(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -272);
	ctx.f1.f64 = double(temp.f32);
loc_821EED2C:
	// bctrl 
	ctx.lr = 0x821EED30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,48(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r27,-32173
	r27.s64 = -2108489728;
	// lfs f0,52(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lwz r26,108(r30)
	r26.u64 = REX_LOAD_U32(r30.u32 + 108);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f13,56(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lfs f0,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lwz r29,508(r27)
	r29.u64 = REX_LOAD_U32(r27.u32 + 508);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x821fa860
	ctx.lr = 0x821EED68;
	sub_821FA860(ctx, base);
	// addi r10,r3,67
	ctx.r10.s64 = ctx.r3.s64 + 67;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r28,508(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 508);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f31,r10,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	f31.f64 = double(temp.f32);
	// bl 0x821fa860
	ctx.lr = 0x821EED80;
	sub_821FA860(ctx, base);
	// addi r11,r3,35
	ctx.r11.s64 = ctx.r3.s64 + 35;
	// lwz r29,508(r27)
	r29.u64 = REX_LOAD_U32(r27.u32 + 508);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f30,r11,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	f30.f64 = double(temp.f32);
	// bl 0x821fa860
	ctx.lr = 0x821EED98;
	sub_821FA860(ctx, base);
	// addi r10,r3,51
	ctx.r10.s64 = ctx.r3.s64 + 51;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r28,4464(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 4464);
	// lfs f0,2012(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2012);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f29,r10,r29
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	f29.f64 = double(temp.f32);
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 * ctx.f0.f64));
	// bl 0x820e0028
	ctx.lr = 0x821EEDBC;
	sub_820E0028(ctx, base);
	// fmuls f0,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f29.f64));
	// lwz r10,48(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 48);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,4464
	ctx.r3.s64 = ctx.r11.s64 + 4464;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * f30.f64));
	// bctrl 
	ctx.lr = 0x821EEDD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r29,508(r27)
	r29.u64 = REX_LOAD_U32(r27.u32 + 508);
	// bl 0x821fa860
	ctx.lr = 0x821EEDE4;
	sub_821FA860(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// addi r3,r11,4464
	ctx.r3.s64 = ctx.r11.s64 + 4464;
	// mulli r11,r10,192
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(192));
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// lwz r11,44(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EEE08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r3,508(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 508);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821fafe0
	ctx.lr = 0x821EEE18;
	sub_821FAFE0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,104(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 104);
	// addi r3,r11,4464
	ctx.r3.s64 = ctx.r11.s64 + 4464;
	// lwz r4,80(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,4464(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4464);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EEE40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EEE40:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_821F7778) {
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
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// bl 0x821f7d50
	ctx.lr = 0x821F77B4;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f77d0
	if (ctx.cr0.eq) goto loc_821F77D0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,31764
	ctx.r11.s64 = ctx.r11.s64 + 31764;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x821f77d4
	goto loc_821F77D4;
loc_821F77D0:
	// li r31,0
	r31.s64 = 0;
loc_821F77D4:
	// rlwinm. r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f77ec
	if (ctx.cr0.eq) goto loc_821F77EC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821f77ec
	if (ctx.cr6.eq) goto loc_821F77EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7c80
	ctx.lr = 0x821F77EC;
	sub_821F7C80(ctx, base);
loc_821F77EC:
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

DEFINE_REX_FUNC(sub_821F9498) {
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
	ctx.lr = 0x821F94A0;
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ori r12,r12,30800
	ctx.r12.u64 = ctx.r12.u64 | 30800;
	// bl 0x822d6634
	ctx.lr = 0x821F94B4;
	sub_822D6634(ctx, base);
	// stwux r1,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// addi r31,r11,3380
	r31.s64 = ctx.r11.s64 + 3380;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// li r5,96
	ctx.r5.s64 = 96;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// bl 0x82207d70
	ctx.lr = 0x821F94F0;
	sub_82207D70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mulli r28,r30,40
	r28.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(40));
	// add r11,r28,r11
	ctx.r11.u64 = r28.u64 + ctx.r11.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r9,r11,-40
	ctx.r9.s64 = ctx.r11.s64 + -40;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// lfs f0,-12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -40);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// fadds f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -36);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// fadds f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f12,-36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,32064(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 32064);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,72(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// lfs f13,2000(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,-12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,-40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -40);
	ctx.f8.f64 = double(temp.f32);
	// fadds f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// stfs f11,68(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// fadds f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f13,f12
	ctx.f13.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwa r11,84(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 84));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwa r11,84(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 84));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fsubs f31,f31,f13
	f31.f64 = double(float(f31.f64 - ctx.f13.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f30,f30,f0
	f30.f64 = double(float(f30.f64 - ctx.f0.f64));
	// ble 0x821f9604
	if (!ctx.cr0.gt) goto loc_821F9604;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// addi r11,r10,-36
	ctx.r11.s64 = ctx.r10.s64 + -36;
loc_821F95B0:
	// lfs f0,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// lfs f13,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwa r10,84(r1)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 84));
	// fctiwz f0,f13
	ctx.f0.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwa r9,84(r1)
	ctx.r9.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 84));
	// std r9,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// stfsu f0,40(r11)
	ea = 40 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821f95b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F95B0;
loc_821F9604:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lfs f2,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f1,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,3952
	ctx.r3.s64 = ctx.r1.s64 + 3952;
	// bl 0x821f8c68
	ctx.lr = 0x821F961C;
	sub_821F8C68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lbz r5,48(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 48);
	// bl 0x821f8fe0
	ctx.lr = 0x821F962C;
	sub_821F8FE0(ctx, base);
	// addi r29,r1,3952
	r29.s64 = ctx.r1.s64 + 3952;
	// li r31,4
	r31.s64 = 4;
loc_821F9634:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821f8fe0
	ctx.lr = 0x821F9644;
	sub_821F8FE0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// bne 0x821f9634
	if (!ctx.cr0.eq) goto loc_821F9634;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r3,r11,10016
	ctx.r3.s64 = ctx.r11.s64 + 10016;
	// bl 0x821fe7b0
	ctx.lr = 0x821F9664;
	sub_821FE7B0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82202838) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lbz r9,28(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 28);
	// lbz r8,29(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 29);
	// lbz r7,30(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 30);
	// lbz r11,31(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 31);
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfs f0,-13044(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -13044);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r8,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r10.u64);
	// lfd f12,-8(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// std r7,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r7.u64);
	// lfd f10,-8(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,8(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,4(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82204E90) {
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
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// rlwinm r30,r3,5,0,26
	r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r31,r11,30472
	r31.s64 = ctx.r11.s64 + 30472;
	// lwzx r3,r30,r31
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// bl 0x822c8a00
	ctx.lr = 0x82204EB8;
	sub_822C8A00(ctx, base);
	// addi r10,r31,8
	ctx.r10.s64 = r31.s64 + 8;
	// addi r9,r31,12
	ctx.r9.s64 = r31.s64 + 12;
	// addi r8,r31,16
	ctx.r8.s64 = r31.s64 + 16;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r30,r10
	REX_STORE_U8(r30.u32 + ctx.r10.u32, ctx.r11.u8);
	// stwx r11,r30,r9
	REX_STORE_U32(r30.u32 + ctx.r9.u32, ctx.r11.u32);
	// stwx r11,r30,r8
	REX_STORE_U32(r30.u32 + ctx.r8.u32, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_822060D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822060D8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r3,88
	r30.s64 = ctx.r3.s64 + 88;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82206174
	if (ctx.cr6.lt) goto loc_82206174;
	// beq cr6,0x82206108
	if (ctx.cr6.eq) goto loc_82206108;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bge cr6,0x822061d4
	if (!ctx.cr6.lt) goto loc_822061D4;
	// li r11,12
	ctx.r11.s64 = 12;
	// stb r11,36(r3)
	REX_STORE_U8(ctx.r3.u32 + 36, ctx.r11.u8);
	// b 0x822061d4
	goto loc_822061D4;
loc_82206108:
	// lwz r4,128(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 128);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82206160
	if (!ctx.cr6.eq) goto loc_82206160;
	// stw r4,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r4.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r7,136(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 136);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r5,108(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 108);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r3,104(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 104);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r9,132(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 132);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r6,r9,2047
	ctx.r6.s64 = ctx.r9.s64 + 2047;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// rlwinm r6,r6,0,0,20
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFF800;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822059d0
	ctx.lr = 0x8220615C;
	sub_822059D0(ctx, base);
	// b 0x822061d4
	goto loc_822061D4;
loc_82206160:
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 136);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x822d4fa0
	ctx.lr = 0x82206170;
	sub_822D4FA0(ctx, base);
	// b 0x822061d4
	goto loc_822061D4;
loc_82206174:
	// lwz r4,128(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 128);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822061c0
	if (!ctx.cr6.eq) goto loc_822061C0;
	// stw r4,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r4.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r7,112(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 112);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r6,2048
	ctx.r6.s64 = 2048;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r5,108(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r3,104(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 104);
	// bl 0x822059d0
	ctx.lr = 0x822061BC;
	sub_822059D0(ctx, base);
	// b 0x822061d4
	goto loc_822061D4;
loc_822061C0:
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x822d4fa0
	ctx.lr = 0x822061CC;
	sub_822D4FA0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_822061D4:
	// stw r29,84(r31)
	REX_STORE_U32(r31.u32 + 84, r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8220A098) {
	REX_FUNC_PROLOGUE();
	// b 0x824d412c
	__imp__MmQueryAddressProtect(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8220A158) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,22480
	ctx.r11.s64 = ctx.r11.s64 + 22480;
loc_8220A168:
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8220a1bc
	if (!ctx.cr6.eq) goto loc_8220A1BC;
	// clrlwi. r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x8220a1ac
	if (ctx.cr0.eq) goto loc_8220A1AC;
	// addi r7,r5,-1
	ctx.r7.s64 = ctx.r5.s64 + -1;
	// addi r9,r4,-2
	ctx.r9.s64 = ctx.r4.s64 + -2;
loc_8220A18C:
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8220a1ac
	if (!ctx.cr6.lt) goto loc_8220A1AC;
	// lhz r31,0(r11)
	r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// sthu r31,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, r31.u16);
	ctx.r9.u32 = ea;
	// blt cr6,0x8220a18c
	if (ctx.cr6.lt) goto loc_8220A18C;
loc_8220A1AC:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,0
	ctx.r9.s64 = 0;
	// sthx r9,r10,r4
	REX_STORE_U16(ctx.r10.u32 + ctx.r4.u32, ctx.r9.u16);
	// b 0x8220a1c4
	goto loc_8220A1C4;
loc_8220A1BC:
	// rlwinm r10,r10,1,15,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8220A1C4:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x8220a168
	if (!ctx.cr6.gt) goto loc_8220A168;
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220DE28) {
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
	ctx.lr = 0x8220DE30;
	// addi r31,r1,-288
	r31.s64 = ctx.r1.s64 + -288;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// stw r3,308(r31)
	REX_STORE_U32(r31.u32 + 308, ctx.r3.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r21,0
	r21.s64 = 0;
	// addi r10,r31,128
	ctx.r10.s64 = r31.s64 + 128;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r21,80(r31)
	REX_STORE_U32(r31.u32 + 80, r21.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// stw r4,316(r31)
	REX_STORE_U32(r31.u32 + 316, ctx.r4.u32);
	// mr r30,r21
	r30.u64 = r21.u64;
	// stw r5,324(r31)
	REX_STORE_U32(r31.u32 + 324, ctx.r5.u32);
	// addi r11,r10,-8
	ctx.r11.s64 = ctx.r10.s64 + -8;
	// stw r6,332(r31)
	REX_STORE_U32(r31.u32 + 332, ctx.r6.u32);
	// stw r7,340(r31)
	REX_STORE_U32(r31.u32 + 340, ctx.r7.u32);
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
loc_8220DE78:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8220de78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8220DE78;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8220deec
	if (ctx.cr6.eq) goto loc_8220DEEC;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x8220deb0
	if (!ctx.cr6.eq) goto loc_8220DEB0;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x822d6840
	ctx.lr = 0x8220DEAC;
	sub_822D6840(ctx, base);
	// lwz r5,324(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 324);
loc_8220DEB0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8220ded8
	goto loc_8220DED8;
loc_8220DED8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge cr6,0x8220dee8
	if (!ctx.cr6.lt) goto loc_8220DEE8;
loc_8220DEE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8220e3dc
	goto loc_8220E3DC;
loc_8220DEE8:
	// lwz r6,332(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 332);
loc_8220DEEC:
	// lis r22,-32161
	r22.s64 = -2107703296;
	// lwz r11,-12940(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + -12940);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220df00
	if (ctx.cr0.eq) goto loc_8220DF00;
	// ori r23,r23,128
	r23.u64 = r23.u64 | 128;
loc_8220DF00:
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220df18
	if (!ctx.cr6.eq) goto loc_8220DF18;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lwz r11,4752(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4752);
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
loc_8220DF18:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220df30
	if (!ctx.cr6.eq) goto loc_8220DF30;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lwz r11,4756(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4756);
	// stw r11,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r11.u32);
loc_8220DF30:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220df48
	if (!ctx.cr6.eq) goto loc_8220DF48;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lwz r11,4764(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4764);
	// stw r11,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r11.u32);
loc_8220DF48:
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220df60
	if (!ctx.cr6.eq) goto loc_8220DF60;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lwz r11,4760(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4760);
	// stw r11,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r11.u32);
loc_8220DF60:
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220df78
	if (!ctx.cr6.eq) goto loc_8220DF78;
	// lis r11,32764
	ctx.r11.s64 = 2147221504;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
loc_8220DF78:
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220df90
	if (ctx.cr6.eq) goto loc_8220DF90;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8220df98
	if (!ctx.cr6.gt) goto loc_8220DF98;
loc_8220DF90:
	// lis r11,15
	ctx.r11.s64 = 983040;
	// stw r11,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r11.u32);
loc_8220DF98:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lis r30,1
	r30.s64 = 65536;
	// bne cr6,0x8220dff0
	if (!ctx.cr6.eq) goto loc_8220DFF0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r30,332(r31)
	REX_STORE_U32(r31.u32 + 332, r30.u32);
	// bne cr6,0x8220dfc0
	if (!ctx.cr6.eq) goto loc_8220DFC0;
	// lis r11,64
	ctx.r11.s64 = 4194304;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r25,r10,65535
	r25.u64 = ctx.r10.u64 | 65535;
	// b 0x8220dfd0
	goto loc_8220DFD0;
loc_8220DFC0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r25,r11,65535
	r25.u64 = ctx.r11.u64 | 65535;
loc_8220DFC8:
	// add r11,r5,r25
	ctx.r11.u64 = ctx.r5.u64 + r25.u64;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
loc_8220DFD0:
	// stw r11,324(r31)
	REX_STORE_U32(r31.u32 + 324, ctx.r11.u32);
	// clrlwi. r11,r23,31
	ctx.r11.u64 = r23.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r24,1432
	r24.s64 = 1432;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// bne 0x8220e028
	if (!ctx.cr0.eq) goto loc_8220E028;
	// beq cr6,0x8220e01c
	if (ctx.cr6.eq) goto loc_8220E01C;
	// oris r23,r23,32768
	r23.u64 = r23.u64 | 2147483648;
	// b 0x8220e02c
	goto loc_8220E02C;
loc_8220DFF0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// ori r25,r11,65535
	r25.u64 = ctx.r11.u64 | 65535;
	// add r11,r6,r25
	ctx.r11.u64 = ctx.r6.u64 + r25.u64;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r11,332(r31)
	REX_STORE_U32(r31.u32 + 332, ctx.r11.u32);
	// bne cr6,0x8220dfc8
	if (!ctx.cr6.eq) goto loc_8220DFC8;
	// addis r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 1048576;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// b 0x8220dfd0
	goto loc_8220DFD0;
loc_8220E01C:
	// li r24,1460
	r24.s64 = 1460;
	// li r20,-1
	r20.s64 = -1;
	// b 0x8220e02c
	goto loc_8220E02C;
loc_8220E028:
	// bne cr6,0x8220dee0
	if (!ctx.cr6.eq) goto loc_8220DEE0;
loc_8220E02C:
	// rlwinm. r11,r23,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220e044
	if (ctx.cr0.eq) goto loc_8220E044;
	// bl 0x824d419c
	ctx.lr = 0x8220E038;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r27,3
	r27.s64 = 3;
	// beq cr6,0x8220e048
	if (ctx.cr6.eq) goto loc_8220E048;
loc_8220E044:
	// mr r27,r21
	r27.u64 = r21.u64;
loc_8220E048:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// beq cr6,0x8220e150
	if (ctx.cr6.eq) goto loc_8220E150;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220e0a4
	if (ctx.cr6.eq) goto loc_8220E0A4;
	// lwz r10,156(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 156);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220dee0
	if (ctx.cr6.eq) goto loc_8220DEE0;
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220dee0
	if (ctx.cr6.eq) goto loc_8220DEE0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8220dee0
	if (ctx.cr6.gt) goto loc_8220DEE0;
	// rlwinm. r9,r23,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8220dee0
	if (!ctx.cr0.eq) goto loc_8220DEE0;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stw r29,84(r31)
	REX_STORE_U32(r31.u32 + 84, r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,324(r31)
	REX_STORE_U32(r31.u32 + 324, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r28,r10,r29
	r28.u64 = ctx.r10.u64 + r29.u64;
	// bl 0x822d5870
	ctx.lr = 0x8220E0A0;
	sub_822D5870(ctx, base);
	// b 0x8220e140
	goto loc_8220E140;
loc_8220E0A4:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824d441c
	ctx.lr = 0x8220E0B4;
	__imp__NtQueryVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8220dee0
	if (ctx.cr0.lt) goto loc_8220DEE0;
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// bne cr6,0x8220dee0
	if (!ctx.cr6.eq) goto loc_8220DEE0;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x8220dee0
	if (ctx.cr6.eq) goto loc_8220DEE0;
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bne cr6,0x8220e138
	if (!ctx.cr6.eq) goto loc_8220E138;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x8220E0EC;
	sub_822D5870(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// add r28,r11,r10
	r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,332(r31)
	REX_STORE_U32(r31.u32 + 332, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824d441c
	ctx.lr = 0x8220E10C;
	__imp__NtQueryVirtualMemory(ctx, base);
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,324(r31)
	REX_STORE_U32(r31.u32 + 324, ctx.r11.u32);
	// blt 0x8220e140
	if (ctx.cr0.lt) goto loc_8220E140;
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r10,8192
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8192, ctx.xer);
	// bne cr6,0x8220e140
	if (!ctx.cr6.eq) goto loc_8220E140;
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,324(r31)
	REX_STORE_U32(r31.u32 + 324, ctx.r11.u32);
	// b 0x8220e140
	goto loc_8220E140;
loc_8220E138:
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r30,332(r31)
	REX_STORE_U32(r31.u32 + 332, r30.u32);
loc_8220E140:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// li r26,1
	r26.s64 = 1;
	// stw r29,80(r31)
	REX_STORE_U32(r31.u32 + 80, r29.u32);
	// b 0x8220e19c
	goto loc_8220E19C;
loc_8220E150:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220dee0
	if (!ctx.cr6.eq) goto loc_8220DEE0;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r31,324
	ctx.r4.s64 = r31.s64 + 324;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x824d43bc
	ctx.lr = 0x8220E174;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8220dee0
	if (ctx.cr0.lt) goto loc_8220DEE0;
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// mr r26,r21
	r26.u64 = r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220e190
	if (!ctx.cr6.eq) goto loc_8220E190;
	// stw r30,332(r31)
	REX_STORE_U32(r31.u32 + 332, r30.u32);
loc_8220E190:
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
loc_8220E19C:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x8220e1fc
	if (!ctx.cr6.eq) goto loc_8220E1FC;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r31,332
	ctx.r4.s64 = r31.s64 + 332;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x824d43bc
	ctx.lr = 0x8220E1C4;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8220e1f0
	if (!ctx.cr0.lt) goto loc_8220E1F0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8220dee0
	if (!ctx.cr6.eq) goto loc_8220DEE0;
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r31,324
	ctx.r4.s64 = r31.s64 + 324;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x824d43ec
	ctx.lr = 0x8220E1EC;
	__imp__NtFreeVirtualMemory(ctx, base);
	// b 0x8220dee0
	goto loc_8220DEE0;
loc_8220E1F0:
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// add r28,r28,r11
	r28.u64 = r28.u64 + ctx.r11.u64;
loc_8220E1FC:
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r11,r10,1439
	ctx.r11.s64 = ctx.r10.s64 + 1439;
	// addi r9,r24,128
	ctx.r9.s64 = r24.s64 + 128;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r10,r10,76
	ctx.r10.s64 = ctx.r10.s64 + 76;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8220E214:
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x8220e214
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8220E214;
	// stw r21,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r21.u32);
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// lwz r10,-12940(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + -12940);
	// rlwinm. r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8220e25c
	if (ctx.cr0.eq) goto loc_8220E25C;
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// addi r9,r9,1548
	ctx.r9.s64 = ctx.r9.s64 + 1548;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r11,380(r10)
	REX_STORE_U32(ctx.r10.u32 + 380, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r10,380(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 380);
	// addi r29,r10,1548
	r29.s64 = ctx.r10.s64 + 1548;
	// b 0x8220e260
	goto loc_8220E260;
loc_8220E25C:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
loc_8220E260:
	// addi r10,r9,15
	ctx.r10.s64 = ctx.r9.s64 + 15;
	// lis r9,-4353
	ctx.r9.s64 = -285278208;
	// rlwinm r30,r10,0,0,27
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r8,r30,28,16,31
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 28) & 0xFFFF;
	// ori r9,r9,61183
	ctx.r9.u64 = ctx.r9.u64 | 61183;
	// sth r8,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// lis r12,24577
	ctx.r12.s64 = 1610678272;
	// ori r12,r12,125
	ctx.r12.u64 = ctx.r12.u64 | 125;
	// and r11,r23,r12
	ctx.r11.u64 = r23.u64 & ctx.r12.u64;
	// lwz r8,80(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stb r10,5(r8)
	REX_STORE_U8(ctx.r8.u32 + 5, ctx.r10.u8);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stw r9,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stw r23,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, r23.u32);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// sth r25,368(r11)
	REX_STORE_U16(ctx.r11.u32 + 368, r25.u16);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// subf r10,r11,r29
	ctx.r10.u64 = r29.u64 - ctx.r11.u64;
	// sth r10,58(r11)
	REX_STORE_U16(ctx.r11.u32 + 58, ctx.r10.u16);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stw r21,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, r21.u32);
	// bl 0x824d419c
	ctx.lr = 0x8220E2C8;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// li r11,128
	ctx.r11.s64 = 128;
	// stb r3,379(r10)
	REX_STORE_U8(ctx.r10.u32 + 379, ctx.r3.u8);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r27,1424(r10)
	REX_STORE_U32(ctx.r10.u32 + 1424, r27.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r11,r11,384
	ctx.r11.s64 = ctx.r11.s64 + 384;
loc_8220E2E8:
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x8220e2e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8220E2E8;
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r20,-1
	ctx.cr6.compare<int32_t>(r20.s32, -1, ctx.xer);
	// addi r11,r10,88
	ctx.r11.s64 = ctx.r10.s64 + 88;
	// stw r11,88(r10)
	REX_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// stw r11,92(r10)
	REX_STORE_U32(ctx.r10.u32 + 92, ctx.r11.u32);
	// bne cr6,0x8220e31c
	if (!ctx.cr6.eq) goto loc_8220E31C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r20,r29
	r20.u64 = r29.u64;
	// bl 0x824d440c
	ctx.lr = 0x8220E31C;
	__imp__RtlInitializeCriticalSection(ctx, base);
loc_8220E31C:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r20,1408(r11)
	REX_STORE_U32(ctx.r11.u32 + 1408, r20.u32);
	// lwz r11,324(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 324);
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// add r4,r30,r3
	ctx.r4.u64 = r30.u64 + ctx.r3.u64;
	// lwz r7,84(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 84);
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// bl 0x8220d718
	ctx.lr = 0x8220E348;
	sub_8220D718(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220dee0
	if (ctx.cr0.eq) goto loc_8220DEE0;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// rlwinm. r10,r23,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r21,56(r11)
	REX_STORE_U16(ctx.r11.u32 + 56, r21.u16);
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stw r11,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r10,140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 140);
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stw r11,44(r10)
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 148);
	// stw r10,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r10,152(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 152);
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stw r11,1412(r10)
	REX_STORE_U32(ctx.r10.u32 + 1412, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// li r10,31
	ctx.r10.s64 = 31;
	// li r9,-16
	ctx.r9.s64 = -16;
	// stw r10,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stw r9,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r9.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
loc_8220E3DC:
	// addi r1,r31,288
	ctx.r1.s64 = r31.s64 + 288;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_822240B0) {
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
	ctx.lr = 0x822240B8;
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-6528(r1)
	ea = -6528 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r17,r6
	r17.u64 = ctx.r6.u64;
	// li r14,1
	r14.s64 = 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822240e4
	if (ctx.cr6.eq) goto loc_822240E4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822240f8
	if (!ctx.cr6.eq) goto loc_822240F8;
loc_822240E4:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r31,r11,15096
	r31.s64 = ctx.r11.s64 + 15096;
	// addi r17,r10,15112
	r17.s64 = ctx.r10.s64 + 15112;
	// li r14,0
	r14.s64 = 0;
loc_822240F8:
	// li r3,1488
	ctx.r3.s64 = 1488;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x82224104;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r3,3878
	ctx.r3.s64 = 3878;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x82224114;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,448
	ctx.r3.s64 = 448;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x82224120;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r3,1403
	ctx.r3.s64 = 1403;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x82224130;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// li r3,1404
	ctx.r3.s64 = 1404;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x82224140;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r3,1405
	ctx.r3.s64 = 1405;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x82224150;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r3,1402
	ctx.r3.s64 = 1402;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x82224160;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mtctr r17
	ctx.ctr.u64 = r17.u64;
	// li r3,3200
	ctx.r3.s64 = 3200;
	// bctrl 
	ctx.lr = 0x82224174;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,3201
	ctx.r3.s64 = 3201;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x82224180;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// li r3,3201
	ctx.r3.s64 = 3201;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x82224190;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r3.u32);
	// li r3,3201
	ctx.r3.s64 = 3201;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x822241A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r3.u32);
	// li r3,3201
	ctx.r3.s64 = 3201;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x822241B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r3.u32);
	// li r3,3201
	ctx.r3.s64 = 3201;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x822241C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// li r23,0
	r23.s64 = 0;
	// stw r29,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, r29.u32);
	// stw r31,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r17,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, r17.u32);
	// beq cr6,0x82224254
	if (ctx.cr6.eq) goto loc_82224254;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-30328
	ctx.r4.s64 = ctx.r11.s64 + -30328;
	// bl 0x82223b20
	ctx.lr = 0x822241EC;
	sub_82223B20(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r9,16968(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16968);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r7,r10,-30336
	ctx.r7.s64 = ctx.r10.s64 + -30336;
	// addi r4,r8,-30380
	ctx.r4.s64 = ctx.r8.s64 + -30380;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,21250
	ctx.r5.s64 = 21250;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r11,1688(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1688);
	// lhz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// bl 0x82223b20
	ctx.lr = 0x8222421C;
	sub_82223B20(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r7,11028(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 11028);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,11024(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 11024);
	// addi r4,r11,-30428
	ctx.r4.s64 = ctx.r11.s64 + -30428;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82223b20
	ctx.lr = 0x82224238;
	sub_82223B20(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r5,11036(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 11036);
	// addi r4,r11,-30464
	ctx.r4.s64 = ctx.r11.s64 + -30464;
	// lwz r11,11024(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 11024);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82223b20
	ctx.lr = 0x82224254;
	sub_82223B20(ctx, base);
loc_82224254:
	// lis r11,-32763
	ctx.r11.s64 = -2147155968;
	// ori r11,r11,272
	ctx.r11.u64 = ctx.r11.u64 | 272;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82224298
	if (!ctx.cr6.eq) goto loc_82224298;
	// lis r11,2989
	ctx.r11.s64 = 195887104;
	// ori r11,r11,61453
	ctx.r11.u64 = ctx.r11.u64 | 61453;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82224298
	if (ctx.cr6.eq) goto loc_82224298;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82224298
	if (ctx.cr6.eq) goto loc_82224298;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r4,r11,-30624
	ctx.r4.s64 = ctx.r11.s64 + -30624;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82223b20
	ctx.lr = 0x82224294;
	sub_82223B20(ctx, base);
	// b 0x82224964
	goto loc_82224964;
loc_82224298:
	// rlwinm r11,r27,0,0,4
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xF8000000;
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822242e8
	if (!ctx.cr6.eq) goto loc_822242E8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822242dc
	if (ctx.cr6.eq) goto loc_822242DC;
	// lwz r11,24408(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24408);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822242dc
	if (ctx.cr6.eq) goto loc_822242DC;
	// rlwinm r10,r27,4,22,27
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0x3F0;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r9,-30800
	ctx.r4.s64 = ctx.r9.s64 + -30800;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// ld r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x82223b20
	ctx.lr = 0x822242D8;
	sub_82223B20(ctx, base);
	// b 0x82224964
	goto loc_82224964;
loc_822242DC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-30960
	ctx.r4.s64 = ctx.r11.s64 + -30960;
	// b 0x8222495c
	goto loc_8222495C;
loc_822242E8:
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82224308
	if (!ctx.cr6.eq) goto loc_82224308;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82224964
	if (ctx.cr6.eq) goto loc_82224964;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-31128
	ctx.r4.s64 = ctx.r10.s64 + -31128;
	// b 0x82224324
	goto loc_82224324;
loc_82224308:
	// lis r10,6144
	ctx.r10.s64 = 402653184;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8222433c
	if (!ctx.cr6.eq) goto loc_8222433C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82224964
	if (ctx.cr6.eq) goto loc_82224964;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-31256
	ctx.r4.s64 = ctx.r10.s64 + -31256;
loc_82224324:
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// ori r11,r11,53539
	ctx.r11.u64 = ctx.r11.u64 | 53539;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rlwimi r5,r11,16,0,25
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFFFFC0) | (ctx.r5.u64 & 0xFFFFFFFF0000003F);
	// b 0x82224384
	goto loc_82224384;
loc_8222433C:
	// rlwinm r11,r27,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xC0000000;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8222436c
	if (!ctx.cr6.eq) goto loc_8222436C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// rlwinm r5,r27,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,-31408
	ctx.r4.s64 = ctx.r11.s64 + -31408;
	// bl 0x82223b20
	ctx.lr = 0x82224360;
	sub_82223B20(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-31512
	ctx.r4.s64 = ctx.r11.s64 + -31512;
	// b 0x8222495c
	goto loc_8222495C;
loc_8222436C:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8222438c
	if (!ctx.cr6.eq) goto loc_8222438C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// rlwinm r5,r27,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,-31648
	ctx.r4.s64 = ctx.r11.s64 + -31648;
loc_82224384:
	// bl 0x82223b20
	ctx.lr = 0x82224388;
	sub_82223B20(ctx, base);
	// b 0x82224964
	goto loc_82224964;
loc_8222438C:
	// bl 0x82223ba8
	ctx.lr = 0x82224390;
	sub_82223BA8(ctx, base);
	// lis r12,32763
	ctx.r12.s64 = 2147155968;
	// lis r11,1025
	ctx.r11.s64 = 67174400;
	// ori r12,r12,61664
	ctx.r12.u64 = ctx.r12.u64 | 61664;
	// and r30,r24,r12
	r30.u64 = r24.u64 & ctx.r12.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822243cc
	if (!ctx.cr6.eq) goto loc_822243CC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-31784
	ctx.r4.s64 = ctx.r11.s64 + -31784;
	// bl 0x82223b20
	ctx.lr = 0x822243B8;
	sub_82223B20(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-31936
	ctx.r4.s64 = ctx.r11.s64 + -31936;
	// bl 0x82223b20
	ctx.lr = 0x822243C8;
	sub_82223B20(ctx, base);
	// li r23,1
	r23.s64 = 1;
loc_822243CC:
	// rlwinm. r11,r22,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222441c
	if (ctx.cr0.eq) goto loc_8222441C;
	// rlwinm. r11,r22,0,21,25
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x7C0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8222441c
	if (!ctx.cr0.eq) goto loc_8222441C;
	// rlwinm r11,r22,21,28,29
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 21) & 0xC;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lis r9,32
	ctx.r9.s64 = 2097152;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r11,0,5,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F00000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8222441c
	if (!ctx.cr6.eq) goto loc_8222441C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-32072
	ctx.r4.s64 = ctx.r11.s64 + -32072;
	// bl 0x82223b20
	ctx.lr = 0x82224408;
	sub_82223B20(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-32248
	ctx.r4.s64 = ctx.r11.s64 + -32248;
	// bl 0x82223b20
	ctx.lr = 0x82224418;
	sub_82223B20(ctx, base);
	// li r23,1
	r23.s64 = 1;
loc_8222441C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82224458
	if (!ctx.cr6.eq) goto loc_82224458;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-32392
	ctx.r4.s64 = ctx.r11.s64 + -32392;
	// bl 0x82223b20
	ctx.lr = 0x82224434;
	sub_82223B20(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-32544
	ctx.r4.s64 = ctx.r11.s64 + -32544;
	// bl 0x82223b20
	ctx.lr = 0x82224444;
	sub_82223B20(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-32596
	ctx.r4.s64 = ctx.r11.s64 + -32596;
	// bl 0x82223b20
	ctx.lr = 0x82224454;
	sub_82223B20(ctx, base);
	// li r23,1
	r23.s64 = 1;
loc_82224458:
	// lis r11,64
	ctx.r11.s64 = 4194304;
	// rlwinm r10,r30,0,9,26
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x7FFFE0;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// rlwinm r10,r10,0,26,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFC0003F;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82224928
	if (!ctx.cr6.eq) goto loc_82224928;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-32672
	ctx.r4.s64 = ctx.r11.s64 + -32672;
	// li r24,0
	r24.s64 = 0;
	// bl 0x82223b20
	ctx.lr = 0x82224484;
	sub_82223B20(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-32732
	ctx.r4.s64 = ctx.r11.s64 + -32732;
	// bl 0x82223b20
	ctx.lr = 0x82224494;
	sub_82223B20(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-32764
	ctx.r4.s64 = ctx.r11.s64 + -32764;
	// bl 0x82223b20
	ctx.lr = 0x822244A4;
	sub_82223B20(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// li r29,0
	r29.s64 = 0;
	// addi r16,r1,224
	r16.s64 = ctx.r1.s64 + 224;
	// addi r23,r11,32688
	r23.s64 = ctx.r11.s64 + 32688;
	// addi r22,r10,32624
	r22.s64 = ctx.r10.s64 + 32624;
	// addi r21,r9,32504
	r21.s64 = ctx.r9.s64 + 32504;
	// addi r20,r8,32416
	r20.s64 = ctx.r8.s64 + 32416;
	// addi r19,r7,32336
	r19.s64 = ctx.r7.s64 + 32336;
	// addi r18,r6,13728
	r18.s64 = ctx.r6.s64 + 13728;
loc_822244DC:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x822244f0
	if (!ctx.cr6.eq) goto loc_822244F0;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82223b20
	ctx.lr = 0x822244F0;
	sub_82223B20(ctx, base);
loc_822244F0:
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// li r7,31
	ctx.r7.s64 = 31;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82223e10
	ctx.lr = 0x8222450C;
	sub_82223E10(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// rlwinm r25,r29,5,0,26
	r25.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
loc_82224514:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x8222456c
	if (!ctx.cr6.gt) goto loc_8222456C;
	// add r11,r25,r30
	ctx.r11.u64 = r25.u64 + r30.u64;
	// add r10,r25,r30
	ctx.r10.u64 = r25.u64 + r30.u64;
	// addi r8,r11,-32
	ctx.r8.s64 = ctx.r11.s64 + -32;
	// mulli r10,r10,24
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// mulli r8,r8,24
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(24));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
loc_82224544:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82224564
	if (!ctx.cr0.eq) goto loc_82224564;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82224544
	if (!ctx.cr6.eq) goto loc_82224544;
loc_82224564:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8222469c
	if (ctx.cr0.eq) goto loc_8222469C;
loc_8222456C:
	// add r11,r25,r30
	ctx.r11.u64 = r25.u64 + r30.u64;
	// addi r10,r1,228
	ctx.r10.s64 = ctx.r1.s64 + 228;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// addi r8,r1,244
	ctx.r8.s64 = ctx.r1.s64 + 244;
	// rlwinm. r7,r10,0,21,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// clrlwi r28,r10,26
	r28.u64 = ctx.r10.u32 & 0x3F;
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r27,r10,1,31,31
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r26,r11,23,30,31
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x3;
	// beq 0x822245c0
	if (ctx.cr0.eq) goto loc_822245C0;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(r26.u32, 1, ctx.xer);
	// beq cr6,0x822245c0
	if (ctx.cr6.eq) goto loc_822245C0;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82223b20
	ctx.lr = 0x822245BC;
	sub_82223B20(ctx, base);
	// li r24,1
	r24.s64 = 1;
loc_822245C0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x822245e8
	if (ctx.cr6.eq) goto loc_822245E8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x822245e8
	if (!ctx.cr6.eq) goto loc_822245E8;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82223b20
	ctx.lr = 0x822245E4;
	sub_82223B20(ctx, base);
	// li r24,1
	r24.s64 = 1;
loc_822245E8:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// bgt cr6,0x82224610
	if (ctx.cr6.gt) goto loc_82224610;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(r26.u32, r27.u32, ctx.xer);
	// beq cr6,0x82224610
	if (ctx.cr6.eq) goto loc_82224610;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82223b20
	ctx.lr = 0x8222460C;
	sub_82223B20(ctx, base);
	// li r24,1
	r24.s64 = 1;
loc_82224610:
	// cmplwi cr6,r28,13
	ctx.cr6.compare<uint32_t>(r28.u32, 13, ctx.xer);
	// beq cr6,0x82224630
	if (ctx.cr6.eq) goto loc_82224630;
	// cmplwi cr6,r28,21
	ctx.cr6.compare<uint32_t>(r28.u32, 21, ctx.xer);
	// beq cr6,0x82224630
	if (ctx.cr6.eq) goto loc_82224630;
	// cmplwi cr6,r28,57
	ctx.cr6.compare<uint32_t>(r28.u32, 57, ctx.xer);
	// beq cr6,0x82224630
	if (ctx.cr6.eq) goto loc_82224630;
	// cmplwi cr6,r28,62
	ctx.cr6.compare<uint32_t>(r28.u32, 62, ctx.xer);
	// blt cr6,0x82224648
	if (ctx.cr6.lt) goto loc_82224648;
loc_82224630:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82223b20
	ctx.lr = 0x82224644;
	sub_82223B20(ctx, base);
	// li r24,1
	r24.s64 = 1;
loc_82224648:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x8222469c
	if (!ctx.cr6.eq) goto loc_8222469C;
	// cmplwi cr6,r28,11
	ctx.cr6.compare<uint32_t>(r28.u32, 11, ctx.xer);
	// beq cr6,0x82224680
	if (ctx.cr6.eq) goto loc_82224680;
	// cmplwi cr6,r28,12
	ctx.cr6.compare<uint32_t>(r28.u32, 12, ctx.xer);
	// beq cr6,0x82224680
	if (ctx.cr6.eq) goto loc_82224680;
	// cmplwi cr6,r28,39
	ctx.cr6.compare<uint32_t>(r28.u32, 39, ctx.xer);
	// beq cr6,0x82224680
	if (ctx.cr6.eq) goto loc_82224680;
	// cmplwi cr6,r28,40
	ctx.cr6.compare<uint32_t>(r28.u32, 40, ctx.xer);
	// beq cr6,0x82224680
	if (ctx.cr6.eq) goto loc_82224680;
	// cmplwi cr6,r28,43
	ctx.cr6.compare<uint32_t>(r28.u32, 43, ctx.xer);
	// blt cr6,0x8222469c
	if (ctx.cr6.lt) goto loc_8222469C;
	// cmplwi cr6,r28,48
	ctx.cr6.compare<uint32_t>(r28.u32, 48, ctx.xer);
	// bgt cr6,0x8222469c
	if (ctx.cr6.gt) goto loc_8222469C;
loc_82224680:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82223b20
	ctx.lr = 0x82224698;
	sub_82223B20(ctx, base);
	// li r24,1
	r24.s64 = 1;
loc_8222469C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,26
	ctx.cr6.compare<int32_t>(r30.s32, 26, ctx.xer);
	// blt cr6,0x82224514
	if (ctx.cr6.lt) goto loc_82224514;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r16,r16,768
	r16.s64 = r16.s64 + 768;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(r29.s32, 8, ctx.xer);
	// blt cr6,0x822244dc
	if (ctx.cr6.lt) goto loc_822244DC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,32192
	ctx.r4.s64 = ctx.r11.s64 + 32192;
	// bl 0x82223b20
	ctx.lr = 0x822246C8;
	sub_82223B20(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r24,0
	r24.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// li r22,0
	r22.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// addi r25,r11,32016
	r25.s64 = ctx.r11.s64 + 32016;
loc_822246E4:
	// li r29,0
	r29.s64 = 0;
loc_822246E8:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x82224740
	if (!ctx.cr6.gt) goto loc_82224740;
	// add r11,r29,r27
	ctx.r11.u64 = r29.u64 + r27.u64;
	// add r10,r29,r27
	ctx.r10.u64 = r29.u64 + r27.u64;
	// addi r8,r11,-32
	ctx.r8.s64 = ctx.r11.s64 + -32;
	// mulli r10,r10,24
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// mulli r8,r8,24
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(24));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
loc_82224718:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82224738
	if (!ctx.cr0.eq) goto loc_82224738;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82224718
	if (!ctx.cr6.eq) goto loc_82224718;
loc_82224738:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x822248a0
	if (ctx.cr0.eq) goto loc_822248A0;
loc_82224740:
	// mr r28,r26
	r28.u64 = r26.u64;
	// cmpwi cr6,r27,256
	ctx.cr6.compare<int32_t>(r27.s32, 256, ctx.xer);
	// bge cr6,0x822248a0
	if (!ctx.cr6.lt) goto loc_822248A0;
loc_8222474C:
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(r28.s32, r26.s32, ctx.xer);
	// addi r31,r29,1
	r31.s64 = r29.s64 + 1;
	// beq cr6,0x8222475c
	if (ctx.cr6.eq) goto loc_8222475C;
	// li r31,0
	r31.s64 = 0;
loc_8222475C:
	// cmpwi cr6,r31,26
	ctx.cr6.compare<int32_t>(r31.s32, 26, ctx.xer);
	// bge cr6,0x82224894
	if (!ctx.cr6.lt) goto loc_82224894;
	// rlwinm r30,r28,5,0,26
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 5) & 0xFFFFFFE0;
loc_82224768:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x822247c0
	if (!ctx.cr6.gt) goto loc_822247C0;
	// add r11,r30,r31
	ctx.r11.u64 = r30.u64 + r31.u64;
	// add r10,r30,r31
	ctx.r10.u64 = r30.u64 + r31.u64;
	// addi r8,r11,-32
	ctx.r8.s64 = ctx.r11.s64 + -32;
	// mulli r10,r10,24
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// mulli r8,r8,24
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(24));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
loc_82224798:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822247b8
	if (!ctx.cr0.eq) goto loc_822247B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82224798
	if (!ctx.cr6.eq) goto loc_82224798;
loc_822247B8:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82224888
	if (ctx.cr0.eq) goto loc_82224888;
loc_822247C0:
	// add r11,r30,r31
	ctx.r11.u64 = r30.u64 + r31.u64;
	// add r10,r29,r27
	ctx.r10.u64 = r29.u64 + r27.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// addi r9,r1,228
	ctx.r9.s64 = ctx.r1.s64 + 228;
	// mulli r10,r10,24
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r8,r1,228
	ctx.r8.s64 = ctx.r1.s64 + 228;
	// rlwinm r9,r9,20,12,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xFFFFF;
	// lwzx r8,r10,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r7,r8,20,12,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0xFFFFF;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82224888
	if (!ctx.cr6.eq) goto loc_82224888;
	// addi r8,r1,244
	ctx.r8.s64 = ctx.r1.s64 + 244;
	// addi r6,r1,244
	ctx.r6.s64 = ctx.r1.s64 + 244;
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r5,r10,r6
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// rlwinm r6,r8,20,12,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0xFFFFF;
	// rlwinm r8,r5,20,12,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 20) & 0xFFFFF;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82224888
	if (ctx.cr6.eq) goto loc_82224888;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82224820
	if (!ctx.cr6.eq) goto loc_82224820;
	// li r24,1
	r24.s64 = 1;
	// b 0x8222483c
	goto loc_8222483C;
loc_82224820:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82224838
	if (ctx.cr6.eq) goto loc_82224838;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82224838
	if (ctx.cr6.eq) goto loc_82224838;
	// li r22,1
	r22.s64 = 1;
	// b 0x8222483c
	goto loc_8222483C;
loc_82224838:
	// li r23,1
	r23.s64 = 1;
loc_8222483C:
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// lwzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwzx r9,r10,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm r3,r11,26,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xF;
	// rlwinm r11,r11,30,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xF;
	// rlwinm r10,r9,26,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0xF;
	// stw r3,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// rlwinm r9,r9,30,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0xF;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82223b20
	ctx.lr = 0x82224888;
	sub_82223B20(ctx, base);
loc_82224888:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,26
	ctx.cr6.compare<int32_t>(r31.s32, 26, ctx.xer);
	// blt cr6,0x82224768
	if (ctx.cr6.lt) goto loc_82224768;
loc_82224894:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(r28.s32, 8, ctx.xer);
	// blt cr6,0x8222474c
	if (ctx.cr6.lt) goto loc_8222474C;
loc_822248A0:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,26
	ctx.cr6.compare<int32_t>(r29.s32, 26, ctx.xer);
	// blt cr6,0x822246e8
	if (ctx.cr6.lt) goto loc_822246E8;
	// addi r27,r27,32
	r27.s64 = r27.s64 + 32;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpwi cr6,r27,256
	ctx.cr6.compare<int32_t>(r27.s32, 256, ctx.xer);
	// blt cr6,0x822246e4
	if (ctx.cr6.lt) goto loc_822246E4;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x822248e4
	if (ctx.cr6.eq) goto loc_822248E4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,31848
	ctx.r4.s64 = ctx.r11.s64 + 31848;
	// bl 0x82223b20
	ctx.lr = 0x822248D4;
	sub_82223B20(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,31664
	ctx.r4.s64 = ctx.r11.s64 + 31664;
	// bl 0x82223b20
	ctx.lr = 0x822248E4;
	sub_82223B20(ctx, base);
loc_822248E4:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x8222490c
	if (ctx.cr6.eq) goto loc_8222490C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,31504
	ctx.r4.s64 = ctx.r11.s64 + 31504;
	// bl 0x82223b20
	ctx.lr = 0x822248FC;
	sub_82223B20(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,31368
	ctx.r4.s64 = ctx.r11.s64 + 31368;
	// bl 0x82223b20
	ctx.lr = 0x8222490C;
	sub_82223B20(ctx, base);
loc_8222490C:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x82224924
	if (ctx.cr6.eq) goto loc_82224924;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,31216
	ctx.r4.s64 = ctx.r11.s64 + 31216;
	// bl 0x82223b20
	ctx.lr = 0x82224924;
	sub_82223B20(ctx, base);
loc_82224924:
	// li r23,1
	r23.s64 = 1;
loc_82224928:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x82224940
	if (ctx.cr6.eq) goto loc_82224940;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82223ed0
	ctx.lr = 0x82224940;
	sub_82223ED0(ctx, base);
loc_82224940:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x82224954
	if (ctx.cr6.eq) goto loc_82224954;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,31072
	ctx.r4.s64 = ctx.r11.s64 + 31072;
	// b 0x8222495c
	goto loc_8222495C;
loc_82224954:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,30928
	ctx.r4.s64 = ctx.r11.s64 + 30928;
loc_8222495C:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82223b20
	ctx.lr = 0x82224964;
	sub_82223B20(ctx, base);
loc_82224964:
	// addi r1,r1,6528
	ctx.r1.s64 = ctx.r1.s64 + 6528;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_822474E0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82247504
	if (!ctx.cr6.eq) goto loc_82247504;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82247534
	goto loc_82247534;
loc_82247504:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8224751c
	if (ctx.cr6.lt) goto loc_8224751C;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// b 0x82247534
	goto loc_82247534;
loc_8224751C:
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8227aed0
	ctx.lr = 0x82247530;
	sub_8227AED0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82247534:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822483C8) {
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
	ctx.lr = 0x822483E0;
	sub_82246220(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82248408
	if (ctx.cr6.eq) goto loc_82248408;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82248408
	if (!ctx.cr6.eq) goto loc_82248408;
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// b 0x82248410
	goto loc_82248410;
loc_82248408:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82248410:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822492E8) {
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
	ctx.lr = 0x82249300;
	sub_82246220(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224932c
	if (ctx.cr6.eq) goto loc_8224932C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8224932c
	if (ctx.cr6.eq) goto loc_8224932C;
	// lwz r11,240(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 240);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// rlwinm r4,r11,0,26,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30;
	// bl 0x8227ae40
	ctx.lr = 0x82249324;
	sub_8227AE40(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82249334
	goto loc_82249334;
loc_8224932C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82249334:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8224AA68) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82255b48
	ctx.lr = 0x8224AA8C;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8224aaa8
	if (ctx.cr0.eq) goto loc_8224AAA8;
	// li r10,22592
	ctx.r10.s64 = 22592;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
loc_8224AAA8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8224aabc
	if (!ctx.cr6.eq) goto loc_8224AABC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8224aac8
	goto loc_8224AAC8;
loc_8224AABC:
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_8224AAC8:
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

DEFINE_REX_FUNC(sub_8224C210) {
	REX_FUNC_PROLOGUE();
	// lis r5,-32163
	ctx.r5.s64 = -2107834368;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-10048
	ctx.r3.s64 = ctx.r11.s64 + -10048;
	// lwz r6,25832(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 25832);
	// clrlwi. r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224c37c
	if (!ctx.cr0.eq) goto loc_8224C37C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-3980
	ctx.r9.s64 = ctx.r10.s64 + -3980;
	// li r10,160
	ctx.r10.s64 = 160;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r7,-32219
	ctx.r7.s64 = -2111504384;
	// stw r9,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r10,r7,-18856
	ctx.r10.s64 = ctx.r7.s64 + -18856;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r8,9
	ctx.r8.s64 = 9;
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r10,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r8,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// addi r9,r9,-3992
	ctx.r9.s64 = ctx.r9.s64 + -3992;
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r10,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r9,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r10,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// addi r8,r8,-16968
	ctx.r8.s64 = ctx.r8.s64 + -16968;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r9,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r8,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// addi r8,r10,-4008
	ctx.r8.s64 = ctx.r10.s64 + -4008;
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r9,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r8,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r8.u32);
	// li r8,200
	ctx.r8.s64 = 200;
	// stw r10,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// stw r10,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// addi r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 + 44;
	// addi r10,r3,92
	ctx.r10.s64 = ctx.r3.s64 + 92;
	// stw r9,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r9.u32);
	// stw r8,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r8.u32);
	// addi r10,r3,124
	ctx.r10.s64 = ctx.r3.s64 + 124;
	// stw r11,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// lis r8,-32172
	ctx.r8.s64 = -2108424192;
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// addi r9,r10,-4024
	ctx.r9.s64 = ctx.r10.s64 + -4024;
	// stw r11,132(r3)
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,136(r3)
	REX_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// addi r8,r8,-6964
	ctx.r8.s64 = ctx.r8.s64 + -6964;
	// stw r11,140(r3)
	REX_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// stw r9,160(r3)
	REX_STORE_U32(ctx.r3.u32 + 160, ctx.r9.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r10,144(r3)
	REX_STORE_U32(ctx.r3.u32 + 144, ctx.r10.u32);
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r9,148(r3)
	REX_STORE_U32(ctx.r3.u32 + 148, ctx.r9.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r8,172(r3)
	REX_STORE_U32(ctx.r3.u32 + 172, ctx.r8.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r11,168(r3)
	REX_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
	// ori r9,r6,1
	ctx.r9.u64 = ctx.r6.u64 | 1;
	// stw r10,164(r3)
	REX_STORE_U32(ctx.r3.u32 + 164, ctx.r10.u32);
	// stw r8,152(r3)
	REX_STORE_U32(ctx.r3.u32 + 152, ctx.r8.u32);
	// addi r10,r3,176
	ctx.r10.s64 = ctx.r3.s64 + 176;
	// stw r11,156(r3)
	REX_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// std r11,176(r3)
	REX_STORE_U64(ctx.r3.u32 + 176, ctx.r11.u64);
	// std r11,184(r3)
	REX_STORE_U64(ctx.r3.u32 + 184, ctx.r11.u64);
	// stw r9,25832(r5)
	REX_STORE_U32(ctx.r5.u32 + 25832, ctx.r9.u32);
loc_8224C37C:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82252250) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-5472
	ctx.r3.s64 = ctx.r11.s64 + -5472;
	// b 0x82251550
	sub_82251550(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82252330) {
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
	// addi r10,r10,-5392
	ctx.r10.s64 = ctx.r10.s64 + -5392;
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
	ctx.lr = 0x82252378;
	sub_82246CA8(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,-21360
	ctx.r11.s64 = ctx.r11.s64 + -21360;
	// addi r10,r10,-21528
	ctx.r10.s64 = ctx.r10.s64 + -21528;
	// addi r9,r9,27648
	ctx.r9.s64 = ctx.r9.s64 + 27648;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x8224c970
	ctx.lr = 0x822523A8;
	sub_8224C970(ctx, base);
	// stw r3,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23616
	ctx.r4.s64 = ctx.r11.s64 + 23616;
	// bl 0x822512d8
	ctx.lr = 0x822523C0;
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

DEFINE_REX_FUNC(sub_822549C0) {
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
	// lis r7,-32219
	ctx.r7.s64 = -2111504384;
	// addi r10,r10,-4844
	ctx.r10.s64 = ctx.r10.s64 + -4844;
	// std r31,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r31.u64);
	// lis r6,-32220
	ctx.r6.s64 = -2111569920;
	// std r31,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r31.u64);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// std r31,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, r31.u64);
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// std r31,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, r31.u64);
	// addi r9,r9,-5044
	ctx.r9.s64 = ctx.r9.s64 + -5044;
	// std r31,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r8,r8,13192
	ctx.r8.s64 = ctx.r8.s64 + 13192;
	// addi r11,r7,-6520
	ctx.r11.s64 = ctx.r7.s64 + -6520;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r10,r6,27816
	ctx.r10.s64 = ctx.r6.s64 + 27816;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x822496d8
	ctx.lr = 0x82254A34;
	sub_822496D8(ctx, base);
	// stw r3,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23688
	ctx.r4.s64 = ctx.r11.s64 + 23688;
	// bl 0x822512d8
	ctx.lr = 0x82254A4C;
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

DEFINE_REX_FUNC(sub_822567E0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,23544(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 23544);
	// bl 0x82255c88
	ctx.lr = 0x82256800;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82256814
	if (!ctx.cr0.eq) goto loc_82256814;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x82256820
	goto loc_82256820;
loc_82256814:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82255c18
	ctx.lr = 0x8225681C;
	sub_82255C18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82256820:
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

DEFINE_REX_FUNC(sub_82257520) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82257528;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822575ac
	if (ctx.cr6.eq) goto loc_822575AC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822575ac
	if (ctx.cr6.eq) goto loc_822575AC;
	// li r31,0
	r31.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r31,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r31.u32);
	// bl 0x82255b48
	ctx.lr = 0x82257554;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82257564
	if (ctx.cr0.eq) goto loc_82257564;
	// bl 0x8227bf88
	ctx.lr = 0x82257560;
	sub_8227BF88(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82257564:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82257578
	if (!ctx.cr6.eq) goto loc_82257578;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x822575b4
	goto loc_822575B4;
loc_82257578:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227c518
	ctx.lr = 0x82257584;
	sub_8227C518(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x822575a0
	if (!ctx.cr0.lt) goto loc_822575A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227c510
	ctx.lr = 0x82257594;
	sub_8227C510(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x8225759C;
	sub_82255B70(ctx, base);
	// b 0x822575a4
	goto loc_822575A4;
loc_822575A0:
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
loc_822575A4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x822575b4
	goto loc_822575B4;
loc_822575AC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_822575B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8225B358) {
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
	// bl 0x82255cf8
	ctx.lr = 0x8225B370;
	sub_82255CF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8225b384
	if (!ctx.cr0.eq) goto loc_8225B384;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x8225b398
	goto loc_8225B398;
loc_8225B384:
	// lwz r4,52(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225a890
	ctx.lr = 0x8225B398;
	sub_8225A890(ctx, base);
loc_8225B398:
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

DEFINE_REX_FUNC(sub_8225C320) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8225C328;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// lwz r4,4(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x82288f80
	ctx.lr = 0x8225C358;
	sub_82288F80(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82288fa8
	ctx.lr = 0x8225C364;
	sub_82288FA8(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82288f58
	ctx.lr = 0x8225C370;
	sub_82288F58(ctx, base);
	// lwz r29,12(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8225c3a8
	if (ctx.cr6.eq) goto loc_8225C3A8;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225c394
	if (ctx.cr6.eq) goto loc_8225C394;
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
loc_8225C394:
	// bl 0x82289458
	ctx.lr = 0x8225C398;
	sub_82289458(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82255b70
	ctx.lr = 0x8225C3A0;
	sub_82255B70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
loc_8225C3A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8225DBC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8225DBC8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x8225da70
	ctx.lr = 0x8225DBE8;
	sub_8225DA70(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8227c2b8
	ctx.lr = 0x8225DBF4;
	sub_8227C2B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8225E5F0) {
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
	// li r4,2019
	ctx.r4.s64 = 2019;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8225da70
	ctx.lr = 0x8225E618;
	sub_8225DA70(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8227c2b8
	ctx.lr = 0x8225E624;
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

DEFINE_REX_FUNC(sub_8225F4A8) {
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
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8225dd60
	ctx.lr = 0x8225F4DC;
	sub_8225DD60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822469c0
	ctx.lr = 0x8225F4E4;
	sub_822469C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8224da00
	ctx.lr = 0x8225F4EC;
	sub_8224DA00(ctx, base);
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

DEFINE_REX_FUNC(sub_82263180) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82263188;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822632d4
	if (ctx.cr6.eq) goto loc_822632D4;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x822632c8
	if (ctx.cr6.eq) goto loc_822632C8;
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// beq cr6,0x82263298
	if (ctx.cr6.eq) goto loc_82263298;
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// bne cr6,0x8226328c
	if (!ctx.cr6.eq) goto loc_8226328C;
	// li r30,0
	r30.s64 = 0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82262fb0
	ctx.lr = 0x822631EC;
	sub_82262FB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82263290
	if (ctx.cr0.lt) goto loc_82263290;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82263224
	if (ctx.cr6.eq) goto loc_82263224;
	// lfs f0,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bne cr6,0x82263224
	if (!ctx.cr6.eq) goto loc_82263224;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm. r10,r10,0,28,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8226328c
	if (ctx.cr0.eq) goto loc_8226328C;
loc_82263224:
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8226328c
	if (ctx.cr6.eq) goto loc_8226328C;
	// lhz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8226328c
	if (ctx.cr0.eq) goto loc_8226328C;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwimi r11,r10,0,31,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF1) | (ctx.r11.u64 & 0xE);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x822830c0
	ctx.lr = 0x82263260;
	sub_822830C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82263284
	if (ctx.cr0.lt) goto loc_82263284;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82263278
	if (ctx.cr6.eq) goto loc_82263278;
	// bl 0x82282a68
	ctx.lr = 0x82263278;
	sub_82282A68(ctx, base);
loc_82263278:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_82263284:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82263290
	if (ctx.cr6.lt) goto loc_82263290;
loc_8226328C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82263290:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4edc
	return;
loc_82263298:
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8226328c
	if (!ctx.cr6.eq) goto loc_8226328C;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226328c
	if (ctx.cr6.eq) goto loc_8226328C;
	// bl 0x82282a68
	ctx.lr = 0x822632BC;
	sub_82282A68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// b 0x8226328c
	goto loc_8226328C;
loc_822632C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// b 0x8226328c
	goto loc_8226328C;
loc_822632D4:
	// li r30,0
	r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x82262fb0
	ctx.lr = 0x82263320;
	sub_82262FB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82263290
	if (ctx.cr0.lt) goto loc_82263290;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// lwz r30,84(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82263358
	if (ctx.cr6.eq) goto loc_82263358;
	// lfs f0,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bne cr6,0x82263358
	if (!ctx.cr6.eq) goto loc_82263358;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ r30.u64;
	// rlwinm. r11,r11,0,28,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822633b8
	if (ctx.cr0.eq) goto loc_822633B8;
loc_82263358:
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822633bc
	if (ctx.cr6.eq) goto loc_822633BC;
	// lhz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822633bc
	if (ctx.cr0.eq) goto loc_822633BC;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// rlwimi r10,r11,0,31,27
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF1) | (ctx.r10.u64 & 0xE);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// bl 0x822830c0
	ctx.lr = 0x82263398;
	sub_822830C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822633b8
	if (ctx.cr0.lt) goto loc_822633B8;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822633b0
	if (ctx.cr6.eq) goto loc_822633B0;
	// bl 0x82282a68
	ctx.lr = 0x822633B0;
	sub_82282A68(ctx, base);
loc_822633B0:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_822633B8:
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_822633BC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226328c
	if (ctx.cr6.eq) goto loc_8226328C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8226328c
	if (ctx.cr6.eq) goto loc_8226328C;
	// lhz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8226328c
	if (ctx.cr0.eq) goto loc_8226328C;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 16);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x822627e0
	ctx.lr = 0x822633FC;
	sub_822627E0(ctx, base);
	// b 0x82263290
	goto loc_82263290;
}

DEFINE_REX_FUNC(sub_8226F9A8) {
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
	ctx.lr = 0x8226F9B0;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// stw r11,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// beq cr6,0x8226fa68
	if (ctx.cr6.eq) goto loc_8226FA68;
	// bl 0x82257bf8
	ctx.lr = 0x8226F9E0;
	sub_82257BF8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x8226f9f8
	if (!ctx.cr6.eq) goto loc_8226F9F8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8226fa68
	if (!ctx.cr6.eq) goto loc_8226FA68;
	// li r29,1
	r29.s64 = 1;
	// b 0x8226fa98
	goto loc_8226FA98;
loc_8226F9F8:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x8226fa84
	if (!ctx.cr6.eq) goto loc_8226FA84;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8226fa68
	if (ctx.cr6.eq) goto loc_8226FA68;
loc_8226FA08:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x8226FA10;
	sub_822469C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8226da90
	ctx.lr = 0x8226FA1C;
	sub_8226DA90(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x8225e9f8
	ctx.lr = 0x8226FA28;
	sub_8225E9F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f4,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x8225e470
	ctx.lr = 0x8226FA58;
	sub_8225E470(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x8226FA60;
	sub_822469C0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8224db90
	ctx.lr = 0x8226FA68;
	sub_8224DB90(ctx, base);
loc_8226FA68:
	// lwz r3,196(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x822d7b58
	ctx.lr = 0x8226FA70;
	sub_822D7B58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226FA74:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
loc_8226FA84:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// bne cr6,0x8226fa68
	if (!ctx.cr6.eq) goto loc_8226FA68;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm. r29,r11,27,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8226fa08
	if (ctx.cr0.eq) goto loc_8226FA08;
loc_8226FA98:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82266d10
	ctx.lr = 0x8226FAA8;
	sub_82266D10(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x8226fac0
	if (!ctx.cr0.lt) goto loc_8226FAC0;
	// lwz r3,196(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x822d7b58
	ctx.lr = 0x8226FAB8;
	sub_822D7B58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8226fa74
	goto loc_8226FA74;
loc_8226FAC0:
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f30,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	f30.f64 = double(temp.f32);
	// lfs f31,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	f31.f64 = double(temp.f32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f2,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f1.f64 = double(temp.f32);
	// fmr f4,f30
	ctx.f4.f64 = f30.f64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// bl 0x8225e470
	ctx.lr = 0x8226FAF4;
	sub_8225E470(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x8226FAFC;
	sub_822469C0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8224db90
	ctx.lr = 0x8226FB04;
	sub_8224DB90(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226fb28
	if (ctx.cr6.eq) goto loc_8226FB28;
	// lfs f0,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,180(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	f31.f64 = double(temp.f32);
	// lfs f30,188(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 188);
	f30.f64 = double(temp.f32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
loc_8226FB28:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x82256c60
	ctx.lr = 0x8226FB34;
	sub_82256C60(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82258b88
	ctx.lr = 0x8226FB44;
	sub_82258B88(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x8225eae0
	ctx.lr = 0x8226FB50;
	sub_8225EAE0(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x8225e9f8
	ctx.lr = 0x8226FB60;
	sub_8225E9F8(ctx, base);
	// b 0x8226fa68
	goto loc_8226FA68;
}

DEFINE_REX_FUNC(sub_82278820) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82278828;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x82278964
	if (ctx.cr6.gt) goto loc_82278964;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82278964
	if (!ctx.cr6.eq) goto loc_82278964;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8227885c
	if (!ctx.cr6.eq) goto loc_8227885C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x8227896c
	goto loc_8227896C;
loc_8227885C:
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82278894
	if (ctx.cr6.eq) goto loc_82278894;
loc_8227886C:
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,1,16,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addic. r5,r9,-2
	ctx.xer.ca = ctx.r9.u32 > 1;
	ctx.r5.s64 = ctx.r9.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bne 0x8227886c
	if (!ctx.cr0.eq) goto loc_8227886C;
loc_82278894:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82255b48
	ctx.lr = 0x822788A0;
	sub_82255B48(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822788c0
	if (!ctx.cr0.eq) goto loc_822788C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8227896c
	goto loc_8227896C;
loc_822788C0:
	// addi r3,r30,2
	ctx.r3.s64 = r30.s64 + 2;
	// bl 0x82255b48
	ctx.lr = 0x822788C8;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// bne 0x822788f4
	if (!ctx.cr0.eq) goto loc_822788F4;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82255b70
	ctx.lr = 0x822788DC;
	sub_82255B70(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// stw r7,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// b 0x8227896c
	goto loc_8227896C;
loc_822788F4:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82278900;
	sub_822D4FA0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// ble cr6,0x82278958
	if (!ctx.cr6.gt) goto loc_82278958;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8227891C:
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r6,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r6.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwzx r6,r6,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r7,-2(r6)
	REX_STORE_U16(ctx.r6.u32 + -2, ctx.r7.u16);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// blt cr6,0x8227891c
	if (ctx.cr6.lt) goto loc_8227891C;
loc_82278958:
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r7,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// b 0x8227896c
	goto loc_8227896C;
loc_82278964:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_8227896C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8227CC28) {
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
	// lis r31,-32163
	r31.s64 = -2107834368;
	// lwz r3,30172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 30172);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227cc74
	if (ctx.cr6.eq) goto loc_8227CC74;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227CC58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,30172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 30172);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227CC6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,30172(r31)
	REX_STORE_U32(r31.u32 + 30172, ctx.r11.u32);
loc_8227CC74:
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

DEFINE_REX_FUNC(sub_8227DACC) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8227DB68) {
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
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
loc_8227DB84:
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
	// bne 0x8227db84
	if (!ctx.cr0.eq) goto loc_8227DB84;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8227dc14
	if (!ctx.cr6.eq) goto loc_8227DC14;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227dbdc
	if (ctx.cr6.eq) goto loc_8227DBDC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227d628
	ctx.lr = 0x8227DBC4;
	sub_8227D628(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227DBD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
loc_8227DBDC:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227dbfc
	if (ctx.cr6.eq) goto loc_8227DBFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227DBF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
loc_8227DBFC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,1464
	ctx.r11.s64 = ctx.r11.s64 + 1464;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x82255b70
	ctx.lr = 0x8227DC10;
	sub_82255B70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227DC14:
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

DEFINE_REX_FUNC(sub_82280040) {
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
	ctx.lr = 0x82280048;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// sth r11,0(r6)
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r11.u16);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// sth r11,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r11.u16);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lfs f0,1996(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82280108
	if (!ctx.cr6.gt) goto loc_82280108;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r29,r4,16
	r29.u64 = ctx.r4.u32 & 0xFFFF;
loc_822800A0:
	// lhzx r27,r11,r31
	r27.u64 = REX_LOAD_U16(ctx.r11.u32 + r31.u32);
	// cmplw cr6,r27,r29
	ctx.cr6.compare<uint32_t>(r27.u32, r29.u32, ctx.xer);
	// beq cr6,0x822800c0
	if (ctx.cr6.eq) goto loc_822800C0;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822800a0
	if (ctx.cr6.lt) goto loc_822800A0;
	// b 0x82280108
	goto loc_82280108;
loc_822800C0:
	// mulli r11,r5,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82280100
	if (ctx.cr6.eq) goto loc_82280100;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bctrl 
	ctx.lr = 0x822800E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82280108
	if (!ctx.cr0.eq) goto loc_82280108;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82280108
	goto loc_82280108;
loc_82280100:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82280108:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82284D98) {
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
	// std r4,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// std r5,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// std r6,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// bl 0x82284d28
	ctx.lr = 0x82284DB4;
	sub_82284D28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82284dc4
	if (ctx.cr0.eq) goto loc_82284DC4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82284e18
	goto loc_82284E18;
loc_82284DC4:
	// lfs f13,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// beq cr6,0x82284ddc
	if (ctx.cr6.eq) goto loc_82284DDC;
	// lfs f0,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82284de8
	goto loc_82284DE8;
loc_82284DDC:
	// lfs f13,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,140(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
loc_82284DE8:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82284df8
	if (ctx.cr6.gt) goto loc_82284DF8;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82284e08
	if (!ctx.cr6.gt) goto loc_82284E08;
loc_82284DF8:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82284e10
	if (ctx.cr6.lt) goto loc_82284E10;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82284e10
	if (ctx.cr6.lt) goto loc_82284E10;
loc_82284E08:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82284e14
	goto loc_82284E14;
loc_82284E10:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82284E14:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
loc_82284E18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822868F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822868F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r3,348
	r29.s64 = ctx.r3.s64 + 348;
	// li r28,10
	r28.s64 = 10;
	// li r30,0
	r30.s64 = 0;
loc_8228690C:
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228691c
	if (ctx.cr6.eq) goto loc_8228691C;
	// bl 0x82216cc8
	ctx.lr = 0x8228691C;
	sub_82216CC8(ctx, base);
loc_8228691C:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stwu r30,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, r30.u32);
	r29.u32 = ea;
	// bne 0x8228690c
	if (!ctx.cr0.eq) goto loc_8228690C;
	// lwz r3,340(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 340);
	// stw r30,392(r31)
	REX_STORE_U32(r31.u32 + 392, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228693c
	if (ctx.cr6.eq) goto loc_8228693C;
	// bl 0x82216cc8
	ctx.lr = 0x8228693C;
	sub_82216CC8(ctx, base);
loc_8228693C:
	// lwz r3,336(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 336);
	// stw r30,340(r31)
	REX_STORE_U32(r31.u32 + 340, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82286950
	if (ctx.cr6.eq) goto loc_82286950;
	// bl 0x82216cc8
	ctx.lr = 0x82286950;
	sub_82216CC8(ctx, base);
loc_82286950:
	// lwz r3,348(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 348);
	// stw r30,336(r31)
	REX_STORE_U32(r31.u32 + 336, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82286964
	if (ctx.cr6.eq) goto loc_82286964;
	// bl 0x82216cc8
	ctx.lr = 0x82286964;
	sub_82216CC8(ctx, base);
loc_82286964:
	// lwz r3,344(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 344);
	// stw r30,348(r31)
	REX_STORE_U32(r31.u32 + 348, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82286978
	if (ctx.cr6.eq) goto loc_82286978;
	// bl 0x82216cc8
	ctx.lr = 0x82286978;
	sub_82216CC8(ctx, base);
loc_82286978:
	// lwz r3,332(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 332);
	// stw r30,344(r31)
	REX_STORE_U32(r31.u32 + 344, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82286998
	if (ctx.cr6.eq) goto loc_82286998;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82286998;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82286998:
	// stw r30,332(r31)
	REX_STORE_U32(r31.u32 + 332, r30.u32);
	// stw r30,328(r31)
	REX_STORE_U32(r31.u32 + 328, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82288E58) {
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
	// bne cr6,0x82288e78
	if (!ctx.cr6.eq) goto loc_82288E78;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82288e8c
	goto loc_82288E8C;
loc_82288E78:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82288E88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82288E8C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822898E0) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82289914
	if (ctx.cr6.eq) goto loc_82289914;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82289914;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82289914:
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

DEFINE_REX_FUNC(sub_8228B038) {
	REX_FUNC_PROLOGUE();
	// lwz r3,80(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8228B040) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,80(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// stw r4,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8228B2B0) {
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
	// bl 0x82255b70
	ctx.lr = 0x8228B2CC;
	sub_82255B70(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228b2ec
	if (ctx.cr6.eq) goto loc_8228B2EC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228B2EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228B2EC:
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// bl 0x82255b70
	ctx.lr = 0x8228B2F4;
	sub_82255B70(ctx, base);
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

DEFINE_REX_FUNC(sub_8228C710) {
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
	ctx.lr = 0x8228C718;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r31.u32);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r11,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// bl 0x822d5870
	ctx.lr = 0x8228C750;
	sub_822D5870(ctx, base);
	// stw r31,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r31.u32);
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// stw r31,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r31.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r31,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, r31.u32);
	// bl 0x82277218
	ctx.lr = 0x8228C770;
	sub_82277218(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8228c8f4
	if (ctx.cr0.lt) goto loc_8228C8F4;
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r3,144(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228c7a8
	if (ctx.cr6.eq) goto loc_8228C7A8;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// bl 0x82276748
	ctx.lr = 0x8228C790;
	sub_82276748(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8228c8b8
	if (ctx.cr0.lt) goto loc_8228C8B8;
	// lwz r3,144(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82276818
	ctx.lr = 0x8228C7A0;
	sub_82276818(ctx, base);
	// stw r3,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// b 0x8228c804
	goto loc_8228C804;
loc_8228C7A8:
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822767a0
	ctx.lr = 0x8228C7B8;
	sub_822767A0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8228c8b8
	if (ctx.cr0.lt) goto loc_8228C8B8;
	// lwz r3,148(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82255b48
	ctx.lr = 0x8228C7C8;
	sub_82255B48(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r4.u32);
	// bne 0x8228c7e0
	if (!ctx.cr0.eq) goto loc_8228C7E0;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x8228c8bc
	goto loc_8228C8BC;
loc_8228C7E0:
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// lwz r5,148(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r3,144(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x822767a0
	ctx.lr = 0x8228C7F0;
	sub_822767A0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8228c8b8
	if (ctx.cr0.lt) goto loc_8228C8B8;
	// lwz r3,144(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82276860
	ctx.lr = 0x8228C800;
	sub_82276860(ctx, base);
	// stw r31,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r31.u32);
loc_8228C804:
	// bl 0x82289428
	ctx.lr = 0x8228C808;
	sub_82289428(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82289408
	ctx.lr = 0x8228C810;
	sub_82289408(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r25,148(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r29,152(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228C830;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,-2
	ctx.r7.s64 = -2;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r27,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r27.u32);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// stw r31,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// bl 0x823d36b0
	ctx.lr = 0x8228C870;
	sub_823D36B0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8228c8b8
	if (ctx.cr0.lt) goto loc_8228C8B8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8228c8b8
	if (ctx.cr6.eq) goto loc_8228C8B8;
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r10,164(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r9,168(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r8,172(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r7,176(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r5,184(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// stw r10,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r10.u32);
	// stw r9,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r9.u32);
	// stw r8,12(r28)
	REX_STORE_U32(r28.u32 + 12, ctx.r8.u32);
	// stw r7,20(r28)
	REX_STORE_U32(r28.u32 + 20, ctx.r7.u32);
	// stw r6,24(r28)
	REX_STORE_U32(r28.u32 + 24, ctx.r6.u32);
	// stw r5,16(r28)
	REX_STORE_U32(r28.u32 + 16, ctx.r5.u32);
loc_8228C8B8:
	// lwz r4,152(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
loc_8228C8BC:
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228c8dc
	if (ctx.cr6.eq) goto loc_8228C8DC;
	// lwz r3,144(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228c8dc
	if (ctx.cr6.eq) goto loc_8228C8DC;
	// bl 0x82276778
	ctx.lr = 0x8228C8D8;
	sub_82276778(ctx, base);
	// b 0x8228c8e4
	goto loc_8228C8E4;
loc_8228C8DC:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82255b70
	ctx.lr = 0x8228C8E4;
	sub_82255B70(ctx, base);
loc_8228C8E4:
	// lwz r3,144(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228c8f4
	if (ctx.cr6.eq) goto loc_8228C8F4;
	// bl 0x82276860
	ctx.lr = 0x8228C8F4;
	sub_82276860(ctx, base);
loc_8228C8F4:
	// lwz r3,188(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// bl 0x822d7b58
	ctx.lr = 0x8228C8FC;
	sub_822D7B58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_822942B8) {
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
	ctx.lr = 0x822942C0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r5,r3,8
	ctx.r5.s64 = ctx.r3.s64 + 8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r26,0
	r26.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// bl 0x82295a78
	ctx.lr = 0x822942F0;
	sub_82295A78(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r31,32
	r29.s64 = r31.s64 + 32;
	// addi r4,r11,13876
	ctx.r4.s64 = ctx.r11.s64 + 13876;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lha r11,660(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 660));
	// rlwinm r24,r11,4,0,27
	r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x822d4fa0
	ctx.lr = 0x82294310;
	sub_822D4FA0(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// twllei r24,0
	if (r24.s32 == 0 || r24.u32 < 0u) ppc_trap(ctx, base, 0);
	// rlwinm. r10,r9,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// twllei r24,0
	if (r24.s32 == 0 || r24.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 4);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// divw r7,r10,r24
	ctx.r7.u64 = uint32_t((r24.s32 && !(ctx.r10.s32 == INT32_MIN && r24.s32 == -1)) ? ctx.r10.s32 / r24.s32 : 0);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// stw r7,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r7.u32);
	// lwz r7,16(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 16);
	// mullw r7,r7,r11
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// rotlwi r11,r7,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// stw r8,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r8.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// andc r10,r24,r10
	ctx.r10.u64 = r24.u64 & ~ctx.r10.u64;
	// divw r8,r7,r24
	ctx.r8.u64 = uint32_t((r24.s32 && !(ctx.r7.s32 == INT32_MIN && r24.s32 == -1)) ? ctx.r7.s32 / r24.s32 : 0);
	// andc r11,r24,r11
	ctx.r11.u64 = r24.u64 & ~ctx.r11.u64;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// stw r8,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r8.u32);
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// beq 0x82294394
	if (ctx.cr0.eq) goto loc_82294394;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lhz r26,94(r1)
	r26.u64 = REX_LOAD_U16(ctx.r1.u32 + 94);
loc_82294394:
	// clrlwi. r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822943f4
	if (ctx.cr0.eq) goto loc_822943F4;
	// lha r9,680(r30)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r30.u32 + 680));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lha r11,678(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 678));
	// lfs f0,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lhz r27,102(r1)
	r27.u64 = REX_LOAD_U16(ctx.r1.u32 + 102);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lhz r28,102(r1)
	r28.u64 = REX_LOAD_U16(ctx.r1.u32 + 102);
loc_822943F4:
	// lha r9,674(r30)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r30.u32 + 674));
	// extsh r10,r28
	ctx.r10.s64 = r28.s16;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 0);
	// extsh r8,r27
	ctx.r8.s64 = r27.s16;
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// addi r10,r10,2048
	ctx.r10.s64 = ctx.r10.s64 + 2048;
	// extsh r11,r26
	ctx.r11.s64 = r26.s16;
	// srawi r10,r10,12
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 12;
	// li r9,1
	ctx.r9.s64 = 1;
	// sth r10,60(r31)
	REX_STORE_U16(r31.u32 + 60, ctx.r10.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// lha r10,676(r30)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r30.u32 + 676));
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// addi r10,r10,2048
	ctx.r10.s64 = ctx.r10.s64 + 2048;
	// srawi r10,r10,12
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 12;
	// sth r10,62(r31)
	REX_STORE_U16(r31.u32 + 62, ctx.r10.u16);
	// lha r10,668(r30)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r30.u32 + 668));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// addi r10,r10,2048
	ctx.r10.s64 = ctx.r10.s64 + 2048;
	// srawi r10,r10,12
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 12;
	// sth r10,64(r31)
	REX_STORE_U16(r31.u32 + 64, ctx.r10.u16);
	// lha r10,664(r30)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r30.u32 + 664));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// stw r9,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r9.u32);
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// sth r11,66(r31)
	REX_STORE_U16(r31.u32 + 66, ctx.r11.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8229E9D8) {
	REX_FUNC_PROLOGUE();
	// lbz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 120);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stb r4,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, ctx.r4.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8229F3A8) {
	REX_FUNC_PROLOGUE();
	// ld r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 16);
	// ld r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x8229f3c4
	if (!ctx.cr6.eq) goto loc_8229F3C4;
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// ld r10,24(r4)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r4.u32 + 24);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
loc_8229F3C4:
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8229f3d0
	if (ctx.cr6.lt) goto loc_8229F3D0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8229F3D0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8229F730) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,7
	ctx.r3.s64 = 7;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lfs f0,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f13,480(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 480);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,484(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 484);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f13,488(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 488);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822b94f8
	ctx.lr = 0x8229F778;
	sub_822B94F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A1098) {
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
	// add r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 + ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r9,244(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 244);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822a1194
	if (ctx.cr6.eq) goto loc_822A1194;
	// stb r5,244(r10)
	REX_STORE_U8(ctx.r10.u32 + 244, ctx.r5.u8);
	// lbz r10,228(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 228);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822a1194
	if (ctx.cr0.eq) goto loc_822A1194;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822a1100
	if (!ctx.cr6.eq) goto loc_822A1100;
	// lbz r11,245(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 245);
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822a10f4
	if (ctx.cr0.eq) goto loc_822A10F4;
	// lwz r4,368(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 368);
	// b 0x822a10f8
	goto loc_822A10F8;
loc_822A10F4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822A10F8:
	// bl 0x822101c0
	ctx.lr = 0x822A10FC;
	sub_822101C0(ctx, base);
	// b 0x822a1194
	goto loc_822A1194;
loc_822A1100:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a1194
	if (ctx.cr6.eq) goto loc_822A1194;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822a1128
	if (!ctx.cr6.eq) goto loc_822A1128;
	// lbz r11,246(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 246);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r4,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x822108e8
	ctx.lr = 0x822A1124;
	sub_822108E8(ctx, base);
	// b 0x822a1194
	goto loc_822A1194;
loc_822A1128:
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x822a1168
	if (!ctx.cr6.eq) goto loc_822A1168;
	// lbz r11,258(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 258);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822a1150
	if (ctx.cr0.eq) goto loc_822A1150;
	// lwz r4,456(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 456);
	// bl 0x82210cc8
	ctx.lr = 0x822A1148;
	sub_82210CC8(ctx, base);
	// lwz r4,460(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 460);
	// b 0x822a115c
	goto loc_822A115C;
loc_822A1150:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82210cc8
	ctx.lr = 0x822A1158;
	sub_82210CC8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
loc_822A115C:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82210d90
	ctx.lr = 0x822A1164;
	sub_82210D90(ctx, base);
	// b 0x822a1194
	goto loc_822A1194;
loc_822A1168:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,22808
	ctx.r10.s64 = ctx.r10.s64 + 22808;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822a1194
	if (ctx.cr6.eq) goto loc_822A1194;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A1194;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A1194:
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

DEFINE_REX_FUNC(sub_822A5B38) {
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
	ctx.lr = 0x822A5B40;
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f29.u64);
	// stfd f30,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,184
	ctx.r11.s64 = ctx.r1.s64 + 184;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r6,r5,32
	ctx.r6.s64 = ctx.r5.s64 + 32;
	// addi r7,r11,-16
	ctx.r7.s64 = ctx.r11.s64 + -16;
	// addi r11,r3,552
	ctx.r11.s64 = ctx.r3.s64 + 552;
	// li r5,8
	ctx.r5.s64 = 8;
loc_822A5B6C:
	// li r9,4
	ctx.r9.s64 = 4;
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,76
	ctx.r8.s64 = ctx.r1.s64 + 76;
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r6,-36
	ctx.r10.s64 = ctx.r6.s64 + -36;
	// lfs f10,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f10.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822A5B8C:
	// lfs f0,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f8,36(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,52(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// lfsu f0,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmadds f0,f0,f10,f9
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f9.f64)));
	// fmadds f0,f7,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f8,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f0.f64)));
	// stfsu f0,4(r8)
	ea = 4 + ctx.r8.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x822a5b8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A5B8C;
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,8(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// stfs f13,12(r7)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// stfsu f12,16(r7)
	ea = 16 + ctx.r7.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// bne 0x822a5b6c
	if (!ctx.cr0.eq) goto loc_822A5B6C;
	// lfs f0,256(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,240(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fadds f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,260(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,244(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// li r10,8
	ctx.r10.s64 = 8;
	// fadds f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,264(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,248(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,168
	ctx.r11.s64 = ctx.r1.s64 + 168;
	// fadds f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f13,272(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,276(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,288(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f12.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lfs f11,292(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f11.f64 = double(temp.f32);
	// fadds f6,f12,f13
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fadds f5,f11,f10
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f4,280(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,296(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 296);
	ctx.f2.f64 = double(temp.f32);
	// fadds f3,f13,f9
	ctx.f3.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// lfs f13,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2012(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2012);
	ctx.f0.f64 = double(temp.f32);
	// fadds f8,f10,f8
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// lfs f1,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// fadds f7,f4,f7
	ctx.f7.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// fmuls f10,f6,f13
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f9,f5,f13
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fadds f13,f12,f3
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f3.f64));
	// fadds f12,f11,f8
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// fadds f11,f2,f7
	ctx.f11.f64 = double(float(ctx.f2.f64 + ctx.f7.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fsubs f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// stfs f11,48(r4)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// lfs f11,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f11,52(r4)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r4.u32 + 52, temp.u32);
loc_822A5C7C:
	// lfs f11,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f7,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f8,f8,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fsubs f11,f7,f0
	ctx.f11.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// stfs f8,12(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfsu f11,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822a5c7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A5C7C;
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lfs f31,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// stfs f31,152(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmadds f0,f12,f12,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f11.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 / ctx.f0.f64));
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fneg f0,f13
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x8229f270
	ctx.lr = 0x822A5D24;
	sub_8229F270(ctx, base);
	// addi r11,r1,168
	ctx.r11.s64 = ctx.r1.s64 + 168;
	// li r8,8
	ctx.r8.s64 = 8;
loc_822A5D2C:
	// li r9,4
	ctx.r9.s64 = 4;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f12,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822A5D44:
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f11,-16(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -16);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f10,-32(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f11,f10,f0,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f11.f64)));
	// fmadds f11,f12,f9,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f9.f64, ctx.f11.f64)));
	// fadds f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// stfsx f11,r10,r7
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822a5d44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A5D44;
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfsu f12,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bne 0x822a5d2c
	if (!ctx.cr0.eq) goto loc_822A5D2C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r31,r1,176
	r31.s64 = ctx.r1.s64 + 176;
	// li r30,8
	r30.s64 = 8;
	// lfs f0,1452(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,7260(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 7260);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_822A5DCC:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x822a4f30
	ctx.lr = 0x822A5DDC;
	sub_822A4F30(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lfs f30,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f30.f64 = double(temp.f32);
	// lfs f29,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	f29.f64 = double(temp.f32);
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f30,96(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f29,100(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x822a4ed0
	ctx.lr = 0x822A5E08;
	sub_822A4ED0(ctx, base);
	// lfs f2,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// lfs f4,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// lfs f0,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f2,80(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bne 0x822a5dcc
	if (!ctx.cr0.eq) goto loc_822A5DCC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f6,f31
	ctx.f6.f64 = f31.f64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lfs f5,2024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	ctx.f5.f64 = double(temp.f32);
	// bl 0x822ca1f8
	ctx.lr = 0x822A5E48;
	sub_822CA1F8(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
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

DEFINE_REX_FUNC(sub_822B8838) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// stw r3,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// lbz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r31,0(r3)
	r31.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822b8878
	if (ctx.cr6.eq) goto loc_822B8878;
	// lbz r11,1(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// lbz r31,1(r8)
	r31.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// beq cr6,0x822b8878
	if (ctx.cr6.eq) goto loc_822B8878;
	// lbz r11,2(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r8,2(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822b8878
	if (ctx.cr6.eq) goto loc_822B8878;
loc_822B8870:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822b8928
	goto loc_822B8928;
loc_822B8878:
	// lbz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822b8870
	if (ctx.cr6.lt) goto loc_822B8870;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822b88c8
	if (!ctx.cr6.eq) goto loc_822B88C8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822b8918
	goto loc_822B8918;
loc_822B88C8:
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// not r8,r11
	ctx.r8.u64 = ~ctx.r11.u64;
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,16(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,16(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_822B8918:
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_822B8928:
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822BA848) {
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
	ctx.lr = 0x822BA850;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x822d6450
	ctx.lr = 0x822BA86C;
	sub_822D6450(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x822ba88c
	goto loc_822BA88C;
loc_822BA87C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// beq cr6,0x822ba894
	if (ctx.cr6.eq) goto loc_822BA894;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_822BA88C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ba87c
	if (!ctx.cr6.eq) goto loc_822BA87C;
loc_822BA894:
	// stw r11,36(r29)
	REX_STORE_U32(r29.u32 + 36, ctx.r11.u32);
	// li r28,0
	r28.s64 = 0;
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r30,r11,r31
	r30.u64 = ctx.r11.u64 + r31.u64;
	// ble cr6,0x822ba91c
	if (!ctx.cr6.gt) goto loc_822BA91C;
loc_822BA8B8:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822ba8d8
	goto loc_822BA8D8;
loc_822BA8C8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// beq cr6,0x822ba8e0
	if (ctx.cr6.eq) goto loc_822BA8E0;
	// lwz r4,12(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
loc_822BA8D8:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822ba8c8
	if (!ctx.cr6.eq) goto loc_822BA8C8;
loc_822BA8E0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822ba778
	ctx.lr = 0x822BA8EC;
	sub_822BA778(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r11,r11,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r11.s32 / ctx.r9.s32 : 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// andc r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r9.s32, ctx.xer);
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// blt cr6,0x822ba8b8
	if (ctx.cr6.lt) goto loc_822BA8B8;
loc_822BA91C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822C21D8) {
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
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// stw r5,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r5.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x822c2210
	if (!ctx.cr6.gt) goto loc_822C2210;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822C2210:
	// bl 0x822c80d0
	ctx.lr = 0x822C2214;
	sub_822C80D0(ctx, base);
	// stw r3,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d4fa0
	ctx.lr = 0x822C2228;
	sub_822D4FA0(ctx, base);
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

DEFINE_REX_FUNC(sub_822C4B70) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822C4B78;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32163
	r29.s64 = -2107834368;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r10,31492(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 31492);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r28,16(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// blt cr6,0x822c4c64
	if (ctx.cr6.lt) goto loc_822C4C64;
	// bne cr6,0x822c4c8c
	if (!ctx.cr6.eq) goto loc_822C4C8C;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c4bf0
	if (ctx.cr6.eq) goto loc_822C4BF0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x822160f0
	ctx.lr = 0x822C4BB8;
	sub_822160F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822c4bdc
	if (ctx.cr0.eq) goto loc_822C4BDC;
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
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822125d0
	ctx.lr = 0x822C4BDC;
	sub_822125D0(ctx, base);
loc_822C4BDC:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c4bf0
	if (ctx.cr6.eq) goto loc_822C4BF0;
	// bl 0x822c80a8
	ctx.lr = 0x822C4BEC;
	sub_822C80A8(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
loc_822C4BF0:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c4c18
	if (ctx.cr6.eq) goto loc_822C4C18;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x822160f0
	ctx.lr = 0x822C4C04;
	sub_822160F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822c4c18
	if (ctx.cr0.eq) goto loc_822C4C18;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82212778
	ctx.lr = 0x822C4C18;
	sub_82212778(ctx, base);
loc_822C4C18:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c4c2c
	if (ctx.cr6.eq) goto loc_822C4C2C;
	// bl 0x822c80a8
	ctx.lr = 0x822C4C28;
	sub_822C80A8(ctx, base);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
loc_822C4C2C:
	// lwz r4,84(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822c4c44
	if (ctx.cr6.eq) goto loc_822C4C44;
	// lwz r3,31492(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 31492);
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x822a98f0
	ctx.lr = 0x822C4C44;
	sub_822A98F0(ctx, base);
loc_822C4C44:
	// lwz r4,140(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 140);
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822c4c88
	if (ctx.cr6.eq) goto loc_822C4C88;
	// lwz r3,31492(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 31492);
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x822a98f0
	ctx.lr = 0x822C4C60;
	sub_822A98F0(ctx, base);
	// b 0x822c4c88
	goto loc_822C4C88;
loc_822C4C64:
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c4c78
	if (ctx.cr6.eq) goto loc_822C4C78;
	// bl 0x822c80a8
	ctx.lr = 0x822C4C74;
	sub_822C80A8(ctx, base);
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
loc_822C4C78:
	// lwz r3,140(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c4c8c
	if (ctx.cr6.eq) goto loc_822C4C8C;
	// bl 0x822c80a8
	ctx.lr = 0x822C4C88;
	sub_822C80A8(ctx, base);
loc_822C4C88:
	// stw r30,140(r31)
	REX_STORE_U32(r31.u32 + 140, r30.u32);
loc_822C4C8C:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c4cc8
	if (ctx.cr6.eq) goto loc_822C4CC8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x822160f0
	ctx.lr = 0x822C4CA0;
	sub_822160F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822c4cb4
	if (ctx.cr0.eq) goto loc_822C4CB4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82226af8
	ctx.lr = 0x822C4CB4;
	sub_82226AF8(ctx, base);
loc_822C4CB4:
	// lwz r3,31492(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 31492);
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x822a98f0
	ctx.lr = 0x822C4CC4;
	sub_822A98F0(ctx, base);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
loc_822C4CC8:
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r30,132(r31)
	REX_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r30,136(r31)
	REX_STORE_U32(r31.u32 + 136, r30.u32);
	// stb r30,260(r31)
	REX_STORE_U8(r31.u32 + 260, r30.u8);
	// stw r30,256(r31)
	REX_STORE_U32(r31.u32 + 256, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822C8868) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lfd f1,31632(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 31632);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C88C0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,25784
	ctx.r11.s64 = ctx.r11.s64 + 25784;
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x824d440c
	ctx.lr = 0x822C88F0;
	__imp__RtlInitializeCriticalSection(ctx, base);
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

DEFINE_REX_FUNC(sub_822C9480) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,25844
	ctx.r10.s64 = ctx.r10.s64 + 25844;
	// li r9,2047
	ctx.r9.s64 = 2047;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r3,8220
	ctx.r3.s64 = ctx.r3.s64 + 8220;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r11,8208(r31)
	REX_STORE_U32(r31.u32 + 8208, ctx.r11.u32);
	// stw r11,8212(r31)
	REX_STORE_U32(r31.u32 + 8212, ctx.r11.u32);
	// stw r9,8216(r31)
	REX_STORE_U32(r31.u32 + 8216, ctx.r9.u32);
	// bl 0x822c88c0
	ctx.lr = 0x822C94C8;
	sub_822C88C0(ctx, base);
	// addi r3,r31,8256
	ctx.r3.s64 = r31.s64 + 8256;
	// bl 0x822c88c0
	ctx.lr = 0x822C94D0;
	sub_822C88C0(ctx, base);
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

DEFINE_REX_FUNC(sub_822CA120) {
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
	// lis r31,-32163
	r31.s64 = -2107834368;
	// lwz r11,31684(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 31684);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ca16c
	if (!ctx.cr6.eq) goto loc_822CA16C;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x822c80d0
	ctx.lr = 0x822CA148;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ca158
	if (ctx.cr0.eq) goto loc_822CA158;
	// bl 0x822c99d0
	ctx.lr = 0x822CA154;
	sub_822C99D0(ctx, base);
	// b 0x822ca15c
	goto loc_822CA15C;
loc_822CA158:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822CA15C:
	// stw r3,31684(r31)
	REX_STORE_U32(r31.u32 + 31684, ctx.r3.u32);
	// bl 0x822ca058
	ctx.lr = 0x822CA164;
	sub_822CA058(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822ca170
	goto loc_822CA170;
loc_822CA16C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822CA170:
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

DEFINE_REX_FUNC(sub_822CBAC8) {
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
	ctx.lr = 0x822CBAD0;
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
	// bl 0x822cb8a0
	ctx.lr = 0x822CBAE8;
	sub_822CB8A0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822356a8
	ctx.lr = 0x822CBAF8;
	sub_822356A8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822CCD80) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822CCD88;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,8(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x822ccda4
	if (!ctx.cr6.eq) goto loc_822CCDA4;
loc_822CCD9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822cce3c
	goto loc_822CCE3C;
loc_822CCDA4:
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm. r29,r5,0,0,0
	r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822ccdbc
	if (ctx.cr0.eq) goto loc_822CCDBC;
	// clrlwi r5,r5,1
	ctx.r5.u64 = ctx.r5.u32 & 0x7FFFFFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822ccdc0
	goto loc_822CCDC0;
loc_822CCDBC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822CCDC0:
	// bl 0x822d2268
	ctx.lr = 0x822CCDC4;
	sub_822D2268(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ccd9c
	if (ctx.cr6.eq) goto loc_822CCD9C;
	// bl 0x822d0960
	ctx.lr = 0x822CCDD4;
	sub_822D0960(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822ccd9c
	if (ctx.cr6.eq) goto loc_822CCD9C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d0960
	ctx.lr = 0x822CCDE4;
	sub_822D0960(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x822ccdf4
	if (!ctx.cr6.eq) goto loc_822CCDF4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822cce3c
	goto loc_822CCE3C;
loc_822CCDF4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x822cce0c
	if (ctx.cr6.eq) goto loc_822CCE0C;
	// bl 0x822d0960
	ctx.lr = 0x822CCE04;
	sub_822D0960(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822cce14
	goto loc_822CCE14;
loc_822CCE0C:
	// bl 0x822d0960
	ctx.lr = 0x822CCE10;
	sub_822D0960(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
loc_822CCE14:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x822d2298
	ctx.lr = 0x822CCE20;
	sub_822D2298(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ccd9c
	if (ctx.cr6.eq) goto loc_822CCD9C;
	// bl 0x822d1a40
	ctx.lr = 0x822CCE2C;
	sub_822D1A40(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,26148
	ctx.r11.s64 = ctx.r11.s64 + 26148;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_822CCE3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822CF7A0) {
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
	// addi r30,r3,120
	r30.s64 = ctx.r3.s64 + 120;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CF7D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lbz r31,176(r31)
	r31.u64 = REX_LOAD_U8(r31.u32 + 176);
	// bctrl 
	ctx.lr = 0x822CF7E8;
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

DEFINE_REX_FUNC(sub_822D0EA0) {
	REX_FUNC_PROLOGUE();
	// lwz r9,192(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 192);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,104(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// lbz r5,40(r3)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + 40);
	// subf r7,r4,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r4.u64;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x822d0eec
	if (ctx.cr0.eq) goto loc_822D0EEC;
	// lbz r10,29(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 29);
	// lwz r9,216(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// mulli r10,r10,36
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(36));
	// lwz r5,204(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r4,96(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r9,r4,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r4.u64;
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// stb r8,40(r3)
	REX_STORE_U8(ctx.r3.u32 + 40, ctx.r8.u8);
loc_822D0EEC:
	// lbz r10,212(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 212);
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822d0f88
	if (!ctx.cr6.lt) goto loc_822D0F88;
	// lwz r10,104(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// stb r8,40(r11)
	REX_STORE_U8(ctx.r11.u32 + 40, ctx.r8.u8);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x822d0f88
	if (ctx.cr6.gt) goto loc_822D0F88;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x822d0f88
	if (ctx.cr6.lt) goto loc_822D0F88;
	// lwz r10,208(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// lwz r8,108(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lbz r6,29(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 29);
	// subf r8,r8,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r8.u64;
	// lwz r9,216(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// mulli r10,r6,36
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(36));
	// lwz r7,204(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r9,r9,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// stw r9,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// lbz r8,212(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 212);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,92(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r9,0,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF800;
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// beq cr6,0x822d0f78
	if (ctx.cr6.eq) goto loc_822D0F78;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
loc_822D0F78:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,40(r11)
	REX_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
	// blr 
	return;
loc_822D0F88:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D3FD0) {
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
	// li r11,-2
	ctx.r11.s64 = -2;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822d3ffc
	if (!ctx.cr6.gt) goto loc_822D3FFC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,26348
	ctx.r3.s64 = ctx.r11.s64 + 26348;
	// bl 0x822d4588
	ctx.lr = 0x822D3FFC;
	sub_822D4588(ctx, base);
loc_822D3FFC:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bge cr6,0x822d4018
	if (!ctx.cr6.lt) goto loc_822D4018;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,16(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x822d3810
	ctx.lr = 0x822D4014;
	sub_822D3810(ctx, base);
	// b 0x822d4068
	goto loc_822D4068;
loc_822D4018:
	// clrlwi. r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d4048
	if (ctx.cr0.eq) goto loc_822D4048;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(r31.u32, 16, ctx.xer);
	// bge cr6,0x822d4048
	if (!ctx.cr6.lt) goto loc_822D4048;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822d4038
	if (!ctx.cr6.lt) goto loc_822D4038;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_822D4038:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822d37b0
	ctx.lr = 0x822D4044;
	sub_822D37B0(ctx, base);
	// b 0x822d4068
	goto loc_822D4068;
loc_822D4048:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x822d4068
	if (!ctx.cr6.eq) goto loc_822D4068;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// blt cr6,0x822d4064
	if (ctx.cr6.lt) goto loc_822D4064;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_822D4064:
	// stb r10,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
loc_822D4068:
	// subfic r11,r31,0
	ctx.xer.ca = r31.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r31.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
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

DEFINE_REX_FUNC(sub_822D6060) {
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
	// bl 0x822d6ff8
	ctx.lr = 0x822D6070;
	sub_822D6FF8(ctx, base);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// ori r11,r11,17405
	ctx.r11.u64 = ctx.r11.u64 | 17405;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// addis r11,r11,39
	ctx.r11.s64 = ctx.r11.s64 + 2555904;
	// addi r11,r11,-24893
	ctx.r11.s64 = ctx.r11.s64 + -24893;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// rlwinm r3,r11,16,17,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7FFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D6FF8) {
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
	// bl 0x822d6f20
	ctx.lr = 0x822D700C;
	sub_822D6F20(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x822d701c
	if (!ctx.cr0.eq) goto loc_822D701C;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822d6420
	ctx.lr = 0x822D701C;
	sub_822D6420(ctx, base);
loc_822D701C:
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

DEFINE_REX_FUNC(__savevmx_15) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__savevmx_114) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__savevmx_125) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_22) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_85) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_822DFD50) {
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
	ctx.lr = 0x822DFD58;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// bl 0x822d6ff8
	ctx.lr = 0x822DFD78;
	sub_822D6FF8(ctx, base);
	// lwz r25,124(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// bl 0x822d6ff8
	ctx.lr = 0x822DFD80;
	sub_822D6FF8(ctx, base);
	// lwz r24,128(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// bl 0x822d6ff8
	ctx.lr = 0x822DFD88;
	sub_822D6FF8(ctx, base);
	// stw r30,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, r30.u32);
	// bl 0x822d6ff8
	ctx.lr = 0x822DFD90;
	sub_822D6FF8(ctx, base);
	// li r11,-2
	ctx.r11.s64 = -2;
	// stw r28,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, r28.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// li r5,256
	ctx.r5.s64 = 256;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// bl 0x822e4260
	ctx.lr = 0x822DFDC0;
	sub_822E4260(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d9780
	ctx.lr = 0x822DFDCC;
	sub_822D9780(ctx, base);
	// bl 0x822d6ff8
	ctx.lr = 0x822DFDD0;
	sub_822D6FF8(ctx, base);
	// stw r25,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, r25.u32);
	// bl 0x822d6ff8
	ctx.lr = 0x822DFDD8;
	sub_822D6FF8(ctx, base);
	// stw r24,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, r24.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dfe08
	if (ctx.cr6.eq) goto loc_822DFE08;
	// bl 0x822d9728
	ctx.lr = 0x822DFDEC;
	sub_822D9728(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822dfe08
	if (ctx.cr0.eq) goto loc_822DFE08;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822dfca8
	ctx.lr = 0x822DFE00;
	sub_822DFCA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_822DFE08:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_822E5CE0) {
	REX_FUNC_PROLOGUE();
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-11584
	ctx.r10.s64 = ctx.r10.s64 + -11584;
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// b 0x824d437c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822E6898) {
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
	ctx.lr = 0x822E68A0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// stw r30,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, r30.u32);
	// li r27,16462
	r27.s64 = 16462;
	// stw r30,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r30,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r30.u32);
	// beq cr6,0x822e6a88
	if (ctx.cr6.eq) goto loc_822E6A88;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
loc_822E68CC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x822E68DC;
	sub_822D4FA0(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// or r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r6,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r10,2,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r10,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 | ctx.r6.u64;
	// or r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r6,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822e6958
	if (ctx.cr6.lt) goto loc_822E6958;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x822e695c
	if (!ctx.cr6.lt) goto loc_822E695C;
loc_822E6958:
	// li r9,1
	ctx.r9.s64 = 1;
loc_822E695C:
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822e6998
	if (ctx.cr6.eq) goto loc_822E6998;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822e6980
	if (ctx.cr6.lt) goto loc_822E6980;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x822e6984
	if (!ctx.cr6.lt) goto loc_822E6984;
loc_822E6980:
	// li r9,1
	ctx.r9.s64 = 1;
loc_822E6984:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822e6998
	if (ctx.cr6.eq) goto loc_822E6998;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_822E6998:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822e69b8
	if (ctx.cr6.lt) goto loc_822E69B8;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x822e69bc
	if (!ctx.cr6.lt) goto loc_822E69BC;
loc_822E69B8:
	// li r9,1
	ctx.r9.s64 = 1;
loc_822E69BC:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822e69d4
	if (ctx.cr6.eq) goto loc_822E69D4;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_822E69D4:
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r8,r8,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r6,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// lbz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822e6a30
	if (ctx.cr6.lt) goto loc_822E6A30;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822e6a34
	if (!ctx.cr6.lt) goto loc_822E6A34;
loc_822E6A30:
	// li r7,1
	ctx.r7.s64 = 1;
loc_822E6A34:
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822e6a70
	if (ctx.cr6.eq) goto loc_822E6A70;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x822e6a58
	if (ctx.cr6.lt) goto loc_822E6A58;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x822e6a5c
	if (!ctx.cr6.lt) goto loc_822E6A5C;
loc_822E6A58:
	// li r10,1
	ctx.r10.s64 = 1;
loc_822E6A5C:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822e6a70
	if (ctx.cr6.eq) goto loc_822E6A70;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_822E6A70:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bne 0x822e68cc
	if (!ctx.cr0.eq) goto loc_822E68CC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e6b14
	if (!ctx.cr6.eq) goto loc_822E6B14;
loc_822E6A88:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r27,16
	ctx.r10.u64 = r27.u32 & 0xFFFF;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r8,r11,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r7,r9,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// clrlwi r27,r11,16
	r27.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e6a88
	if (ctx.cr6.eq) goto loc_822E6A88;
	// b 0x822e6b14
	goto loc_822E6B14;
loc_822E6AD0:
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r27,16
	ctx.r10.u64 = r27.u32 & 0xFFFF;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// clrlwi r27,r10,16
	r27.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_822E6B14:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e6ad0
	if (ctx.cr0.eq) goto loc_822E6AD0;
	// sth r27,0(r31)
	REX_STORE_U16(r31.u32 + 0, r27.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822F4638) {
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
	// lwz r8,76(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822F4920) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-26048
	ctx.r10.s64 = ctx.r11.s64 + -26048;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x822f44d8
	ctx.lr = 0x822F4944;
	sub_822F44D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822eece8
	ctx.lr = 0x822F494C;
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

DEFINE_REX_FUNC(sub_822F5A48) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822F5A50;
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
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F5A74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822f5a94
	if (ctx.cr6.eq) goto loc_822F5A94;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,244(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 244);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F5A90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_822F5A94:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822f5ab4
	if (ctx.cr6.eq) goto loc_822F5AB4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,248(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F5AB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
loc_822F5AB4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F5AC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822f5af0
	if (ctx.cr6.eq) goto loc_822F5AF0;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F5AE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// stw r9,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r9.u32);
loc_822F5AF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822F9308) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r4,1524(r3)
	REX_STORE_U8(ctx.r3.u32 + 1524, ctx.r4.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,1528(r11)
	REX_STORE_U32(ctx.r11.u32 + 1528, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F9760) {
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
	ctx.lr = 0x822F9768;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,528
	ctx.r5.s64 = 528;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x822f9490
	ctx.lr = 0x822F979C;
	sub_822F9490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f97ec
	if (ctx.cr6.lt) goto loc_822F97EC;
	// li r5,528
	ctx.r5.s64 = 528;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x822F97B8;
	sub_822D5870(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,508(r11)
	REX_STORE_U32(ctx.r11.u32 + 508, r30.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,520(r10)
	REX_STORE_U32(ctx.r10.u32 + 520, r28.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,524(r9)
	REX_STORE_U32(ctx.r9.u32 + 524, r27.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r26,516(r8)
	REX_STORE_U32(ctx.r8.u32 + 516, r26.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r7,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_822F97EC:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f9808
	if (ctx.cr6.eq) goto loc_822F9808;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822f94e8
	ctx.lr = 0x822F9808;
	sub_822F94E8(ctx, base);
loc_822F9808:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_822FB8E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822FB8E8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822fb914
	if (!ctx.cr6.eq) goto loc_822FB914;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
loc_822FB914:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U64(r29.u32 + 0);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822ec1e8
	ctx.lr = 0x822FB928;
	sub_822EC1E8(ctx, base);
	// cmplwi cr6,r3,24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 24, ctx.xer);
	// beq cr6,0x822fb93c
	if (ctx.cr6.eq) goto loc_822FB93C;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
loc_822FB93C:
	// ld r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U64(r29.u32 + 0);
	// li r6,24
	ctx.r6.s64 = 24;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r10,24
	ctx.r4.s64 = ctx.r10.s64 + 24;
	// std r4,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r4.u64);
	// lbz r3,3(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r10,r3,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// rlwinm r10,r8,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,1(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r4,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// sth r3,4(r31)
	REX_STORE_U16(r31.u32 + 4, ctx.r3.u16);
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r8,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r7,6(r31)
	REX_STORE_U16(r31.u32 + 6, ctx.r7.u16);
	// lbzu r3,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stb r3,8(r31)
	REX_STORE_U8(r31.u32 + 8, ctx.r3.u8);
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stb r10,9(r31)
	REX_STORE_U8(r31.u32 + 9, ctx.r10.u8);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stb r9,10(r31)
	REX_STORE_U8(r31.u32 + 10, ctx.r9.u8);
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stb r8,11(r31)
	REX_STORE_U8(r31.u32 + 11, ctx.r8.u8);
	// lbzu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stb r7,12(r31)
	REX_STORE_U8(r31.u32 + 12, ctx.r7.u8);
	// lbzu r4,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stb r4,13(r31)
	REX_STORE_U8(r31.u32 + 13, ctx.r4.u8);
	// lbzu r3,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stb r3,14(r31)
	REX_STORE_U8(r31.u32 + 14, ctx.r3.u8);
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r10,15(r31)
	REX_STORE_U8(r31.u32 + 15, ctx.r10.u8);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,3(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r10,r7,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r3,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lbz r8,6(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r9,5(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r4,7(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// rotlwi r10,r4,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// subfc r11,r6,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r6.u32;
	ctx.r11.u64 = ctx.r7.u64 - ctx.r6.u64;
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// and r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 & ctx.r5.u64;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82307770) {
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
	ctx.lr = 0x82307778;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,28(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x823077c4
	if (ctx.cr6.eq) goto loc_823077C4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823077c4
	if (ctx.cr6.eq) goto loc_823077C4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823077c4
	if (ctx.cr6.eq) goto loc_823077C4;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823077c4
	if (ctx.cr6.eq) goto loc_823077C4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x823077d4
	if (!ctx.cr6.eq) goto loc_823077D4;
loc_823077C4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
loc_823077D4:
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,0(r28)
	REX_STORE_U16(r28.u32 + 0, ctx.r10.u16);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x82307820
	if (ctx.cr6.lt) goto loc_82307820;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r9,0(r28)
	REX_STORE_U16(r28.u32 + 0, ctx.r9.u16);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// stw r7,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r7.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
	// stw r6,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
loc_82307820:
	// li r29,0
	r29.s64 = 0;
loc_82307824:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82307880
	if (!ctx.cr6.eq) goto loc_82307880;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82307854;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823078e8
	if (ctx.cr6.lt) goto loc_823078E8;
	// ld r9,8(r27)
	ctx.r9.u64 = REX_LOAD_U64(r27.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r10,8(r27)
	REX_STORE_U64(r27.u32 + 8, ctx.r10.u64);
	// lwz r9,0(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// stw r7,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r7.u32);
loc_82307880:
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r10,r25
	ctx.r10.s64 = r25.s8;
	// lhz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U16(r28.u32 + 0);
	// extsb r9,r29
	ctx.r9.s64 = r29.s8;
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// lbzx r4,r8,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// extsb r25,r6
	r25.s64 = ctx.r6.s8;
	// extsb r29,r5
	r29.s64 = ctx.r5.s8;
	// slw r10,r4,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r10.u8 & 0x3F));
	// or r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 | ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r8,r29,24
	ctx.r8.u64 = r29.u32 & 0xFF;
	// sth r7,0(r28)
	REX_STORE_U16(r28.u32 + 0, ctx.r7.u16);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// stw r6,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// blt cr6,0x82307824
	if (ctx.cr6.lt) goto loc_82307824;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_823078E8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8230DA20) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8230DA28;
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
	// bne cr6,0x8230da5c
	if (!ctx.cr6.eq) goto loc_8230DA5C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed8
	return;
loc_8230DA5C:
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
	ctx.lr = 0x8230DA80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230daf8
	if (ctx.cr6.lt) goto loc_8230DAF8;
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
	// bl 0x82307c58
	ctx.lr = 0x8230DAA0;
	sub_82307C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230daf8
	if (ctx.cr6.lt) goto loc_8230DAF8;
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
	// bl 0x82307a88
	ctx.lr = 0x8230DAC0;
	sub_82307A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230daf8
	if (ctx.cr6.lt) goto loc_8230DAF8;
	// ld r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U64(r28.u32 + 0);
	// cmpldi cr6,r11,24
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 24, ctx.xer);
	// blt cr6,0x8230daf0
	if (ctx.cr6.lt) goto loc_8230DAF0;
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
	// ble cr6,0x8230daf8
	if (!ctx.cr6.gt) goto loc_8230DAF8;
loc_8230DAF0:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
loc_8230DAF8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82310B30) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82310B38;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82310b60
	if (!ctx.cr6.eq) goto loc_82310B60;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
loc_82310B60:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82310c1c
	if (ctx.cr6.eq) goto loc_82310C1C;
loc_82310B6C:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82310b84
	if (ctx.cr6.eq) goto loc_82310B84;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x82310c0c
	if (ctx.cr6.eq) goto loc_82310C0C;
loc_82310B84:
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
	ctx.lr = 0x82310B9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82310c1c
	if (ctx.cr6.lt) goto loc_82310C1C;
	// lwz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82310bc0
	if (!ctx.cr6.eq) goto loc_82310BC0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82310BC0:
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82310bdc
	if (ctx.cr6.eq) goto loc_82310BDC;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82310BDC:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82310bf4
	if (ctx.cr6.eq) goto loc_82310BF4;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
loc_82310BF4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x822f94e8
	ctx.lr = 0x82310C04;
	sub_822F94E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82310c1c
	if (ctx.cr6.lt) goto loc_82310C1C;
loc_82310C0C:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82310b6c
	if (!ctx.cr6.eq) goto loc_82310B6C;
loc_82310C1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82312D40) {
	REX_FUNC_PROLOGUE();
	// b 0x82312c80
	sub_82312C80(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82313140) {
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
	ctx.lr = 0x82313148;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x822f9490
	ctx.lr = 0x82313178;
	sub_822F9490(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82313270
	if (ctx.cr6.lt) goto loc_82313270;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82313190;
	sub_822D5870(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,52(r9)
	REX_STORE_U32(ctx.r9.u32 + 52, r28.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,48(r8)
	REX_STORE_U32(ctx.r8.u32 + 48, r29.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r6,80(r7)
	REX_STORE_U32(ctx.r7.u32 + 80, ctx.r6.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r8,88(r9)
	REX_STORE_U32(ctx.r9.u32 + 88, ctx.r8.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r6,92(r7)
	REX_STORE_U32(ctx.r7.u32 + 92, ctx.r6.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r8,100(r9)
	REX_STORE_U32(ctx.r9.u32 + 100, ctx.r8.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r6,104(r7)
	REX_STORE_U32(ctx.r7.u32 + 104, ctx.r6.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r10,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,36(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r8,112(r9)
	REX_STORE_U32(ctx.r9.u32 + 112, ctx.r8.u32);
	// lwz r6,40(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r6,116(r7)
	REX_STORE_U32(ctx.r7.u32 + 116, ctx.r6.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r30.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r30.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r9,16
	ctx.r6.s64 = ctx.r9.s64 + 16;
	// bl 0x822f9490
	ctx.lr = 0x8231324C;
	sub_822F9490(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82313270
	if (ctx.cr6.lt) goto loc_82313270;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r30,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// stw r30,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r30.u32);
	// stw r30,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r30.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,44(r27)
	REX_STORE_U32(r27.u32 + 44, ctx.r9.u32);
loc_82313270:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82316738) {
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
	// bl 0x822d4e58
	ctx.lr = 0x82316740;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x822d4f1c
	ctx.lr = 0x82316748;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// fmr f23,f1
	ctx.fpscr.disableFlushMode();
	f23.f64 = ctx.f1.f64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// mr r16,r7
	r16.u64 = ctx.r7.u64;
	// li r18,0
	r18.s64 = 0;
	// bl 0x82316688
	ctx.lr = 0x82316768;
	sub_82316688(ctx, base);
	// lis r11,152
	ctx.r11.s64 = 9961472;
	// ori r10,r11,38528
	ctx.r10.u64 = ctx.r11.u64 | 38528;
	// cmpw cr6,r16,r10
	ctx.cr6.compare<int32_t>(r16.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82316790
	if (!ctx.cr6.gt) goto loc_82316790;
loc_82316778:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x822d4f68
	ctx.lr = 0x8231678C;
	// b 0x822d4ea8
	return;
loc_82316790:
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r24,r10
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82316778
	if (ctx.cr6.gt) goto loc_82316778;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r24,r10
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82316778
	if (ctx.cr6.gt) goto loc_82316778;
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r24,1,0,30
	r30.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r28,r11,1
	r28.s64 = ctx.r11.s64 + 1;
	// addi r23,r30,1
	r23.s64 = r30.s64 + 1;
	// rlwinm r31,r28,3,0,28
	r31.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823143c0
	ctx.lr = 0x823167CC;
	sub_823143C0(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823167f0
	if (!ctx.cr6.eq) goto loc_823167F0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x822d4f68
	ctx.lr = 0x823167EC;
	// b 0x822d4ea8
	return;
loc_823167F0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823143c0
	ctx.lr = 0x823167F8;
	sub_823143C0(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82316c88
	if (ctx.cr6.eq) goto loc_82316C88;
	// rlwinm r3,r23,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x823143c0
	ctx.lr = 0x8231680C;
	sub_823143C0(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82316c88
	if (ctx.cr6.eq) goto loc_82316C88;
	// neg r11,r24
	ctx.r11.s64 = static_cast<int64_t>(-r24.u64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// rlwinm r20,r11,1,0,30
	r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// lfd f24,31912(r10)
	ctx.fpscr.disableFlushMode();
	f24.u64 = REX_LOAD_U64(ctx.r10.u32 + 31912);
	// mr r29,r20
	r29.u64 = r20.u64;
	// lfd f31,26664(r9)
	f31.u64 = REX_LOAD_U64(ctx.r9.u32 + 26664);
	// lfd f27,-25040(r8)
	f27.u64 = REX_LOAD_U64(ctx.r8.u32 + -25040);
	// ble cr6,0x823168f4
	if (!ctx.cr6.gt) goto loc_823168F4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fsqrt f30,f27
	f30.f64 = sqrt(f27.f64);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r31,r19
	r31.u64 = r19.u64;
	// subf r27,r19,r21
	r27.u64 = r21.u64 - r19.u64;
	// lfd f26,-24480(r11)
	f26.u64 = REX_LOAD_U64(ctx.r11.u32 + -24480);
	// lfd f28,-24488(r10)
	f28.u64 = REX_LOAD_U64(ctx.r10.u32 + -24488);
	// lfd f29,-24496(r9)
	f29.u64 = REX_LOAD_U64(ctx.r9.u32 + -24496);
loc_82316868:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x823168d8
	if (ctx.cr6.eq) goto loc_823168D8;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fmul f25,f13,f29
	f25.f64 = ctx.f13.f64 * f29.f64;
	// fmr f1,f25
	ctx.f1.f64 = f25.f64;
	// bl 0x822d4c88
	ctx.lr = 0x82316890;
	sub_822D4C88(ctx, base);
	// fdiv f12,f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f1.f64 / f25.f64;
	// extsw r9,r29
	ctx.r9.s64 = r29.s32;
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f25,f11
	f25.f64 = double(ctx.f11.s64);
	// fdiv f10,f12,f30
	ctx.f10.f64 = ctx.f12.f64 / f30.f64;
	// stfdx f10,r27,r31
	REX_STORE_U64(r27.u32 + r31.u32, ctx.f10.u64);
	// fmul f22,f25,f28
	f22.f64 = f25.f64 * f28.f64;
	// fmr f1,f22
	ctx.f1.f64 = f22.f64;
	// bl 0x822d4c88
	ctx.lr = 0x823168B8;
	sub_822D4C88(ctx, base);
	// fmr f21,f1
	ctx.fpscr.disableFlushMode();
	f21.f64 = ctx.f1.f64;
	// fmr f1,f22
	ctx.f1.f64 = f22.f64;
	// bl 0x822d4c88
	ctx.lr = 0x823168C4;
	sub_822D4C88(ctx, base);
	// fmul f9,f21,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = f21.f64 * ctx.f1.f64;
	// fmul f8,f9,f26
	ctx.f8.f64 = ctx.f9.f64 * f26.f64;
	// fdiv f7,f8,f25
	ctx.f7.f64 = ctx.f8.f64 / f25.f64;
	// stfd f7,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.f7.u64);
	// b 0x823168e4
	goto loc_823168E4;
loc_823168D8:
	// fdiv f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f31.f64 / f30.f64;
	// stfdx f0,r27,r31
	REX_STORE_U64(r27.u32 + r31.u32, ctx.f0.u64);
	// stfd f24,0(r31)
	REX_STORE_U64(r31.u32 + 0, f24.u64);
loc_823168E4:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bne 0x82316868
	if (!ctx.cr0.eq) goto loc_82316868;
loc_823168F4:
	// fmr f28,f24
	ctx.fpscr.disableFlushMode();
	f28.f64 = f24.f64;
	// neg r22,r24
	r22.s64 = static_cast<int64_t>(-r24.u64);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x823169e8
	if (!ctx.cr6.gt) goto loc_823169E8;
	// extsw r11,r23
	ctx.r11.s64 = r23.s32;
	// add r10,r30,r24
	ctx.r10.u64 = r30.u64 + r24.u64;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// neg r27,r10
	r27.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r29,r22
	r29.u64 = r22.u64;
	// lfd f26,-24504(r11)
	f26.u64 = REX_LOAD_U64(ctx.r11.u32 + -24504);
	// addi r31,r18,-8
	r31.s64 = r18.s64 + -8;
	// subf r28,r24,r30
	r28.u64 = r30.u64 - r24.u64;
	// lfd f29,-24512(r10)
	f29.u64 = REX_LOAD_U64(ctx.r10.u32 + -24512);
	// mr r26,r23
	r26.u64 = r23.u64;
	// lfd f30,-24520(r9)
	f30.u64 = REX_LOAD_U64(ctx.r9.u32 + -24520);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f25,f0
	f25.f64 = double(ctx.f0.s64);
loc_82316944:
	// stfd f24,8(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 8, f24.u64);
	// cmpw cr6,r20,r27
	ctx.cr6.compare<int32_t>(r20.s32, r27.s32, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// bgt cr6,0x82316958
	if (ctx.cr6.gt) goto loc_82316958;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_82316958:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(r30.s32, r28.s32, ctx.xer);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// blt cr6,0x82316968
	if (ctx.cr6.lt) goto loc_82316968;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_82316968:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823169a0
	if (!ctx.cr6.lt) goto loc_823169A0;
	// subf r10,r11,r30
	ctx.r10.u64 = r30.u64 - ctx.r11.u64;
	// lfd f0,8(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 8);
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + ctx.r11.u64;
	// add r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 + r29.u64;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r6,r8,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfdx f13,r7,r21
	ctx.f13.u64 = REX_LOAD_U64(ctx.r7.u32 + r21.u32);
	// lfdx f12,r6,r19
	ctx.f12.u64 = REX_LOAD_U64(ctx.r6.u32 + r19.u32);
	// fmadd f11,f12,f13,f0
	ctx.f11.f64 = std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64);
	// stfd f11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.f11.u64);
	// b 0x82316958
	goto loc_82316958;
loc_823169A0:
	// extsw r11,r29
	ctx.r11.s64 = r29.s32;
	// lfd f22,8(r31)
	ctx.fpscr.disableFlushMode();
	f22.u64 = REX_LOAD_U64(r31.u32 + 8);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fdiv f12,f13,f25
	ctx.f12.f64 = ctx.f13.f64 / f25.f64;
	// fmul f1,f12,f30
	ctx.f1.f64 = ctx.f12.f64 * f30.f64;
	// bl 0x822d4d68
	ctx.lr = 0x823169C0;
	sub_822D4D68(ctx, base);
	// fmadd f11,f1,f29,f26
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = std::fma(ctx.f1.f64, f29.f64, f26.f64);
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// fmul f10,f11,f22
	ctx.f10.f64 = ctx.f11.f64 * f22.f64;
	// stfdu f10,8(r31)
	ea = 8 + r31.u32;
	REX_STORE_U64(ea, ctx.f10.u64);
	r31.u32 = ea;
	// fabs f9,f10
	ctx.f9.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fadd f28,f9,f28
	f28.f64 = ctx.f9.f64 + f28.f64;
	// bne 0x82316944
	if (!ctx.cr0.eq) goto loc_82316944;
loc_823169E8:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfd f29,-6032(r10)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r10.u32 + -6032);
	// lfd f2,-24528(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + -24528);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x822d5b48
	ctx.lr = 0x82316A00;
	sub_822D5B48(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// lfd f2,-24536(r9)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r9.u32 + -24536);
	// bl 0x822d5b48
	ctx.lr = 0x82316A14;
	sub_822D5B48(ctx, base);
	// fmadd f13,f28,f27,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = std::fma(f28.f64, f27.f64, f31.f64);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// fmadd f11,f30,f27,f1
	ctx.f11.f64 = std::fma(f30.f64, f27.f64, ctx.f1.f64);
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f26,f1
	f26.f64 = ctx.f1.f64;
	// cmpwi cr6,r23,4
	ctx.cr6.compare<int32_t>(r23.s32, 4, ctx.xer);
	// lfd f0,-24544(r8)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + -24544);
	// fmadd f12,f13,f30,f31
	ctx.f12.f64 = std::fma(ctx.f13.f64, f30.f64, f31.f64);
	// fadd f13,f11,f31
	ctx.f13.f64 = ctx.f11.f64 + f31.f64;
	// fadd f10,f12,f1
	ctx.f10.f64 = ctx.f12.f64 + ctx.f1.f64;
	// fmul f12,f10,f0
	ctx.f12.f64 = ctx.f10.f64 * ctx.f0.f64;
	// blt cr6,0x82316aac
	if (ctx.cr6.lt) goto loc_82316AAC;
	// fdiv f0,f31,f13
	ctx.f0.f64 = f31.f64 / ctx.f13.f64;
	// addi r9,r23,-3
	ctx.r9.s64 = r23.s64 + -3;
	// addi r11,r18,-8
	ctx.r11.s64 = r18.s64 + -8;
loc_82316A50:
	// lfd f11,8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfd f10,16(r11)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// fmul f9,f0,f11
	ctx.f9.f64 = ctx.f0.f64 * ctx.f11.f64;
	// lfd f8,24(r11)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// fmul f7,f0,f10
	ctx.f7.f64 = ctx.f0.f64 * ctx.f10.f64;
	// lfd f6,32(r11)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fmul f5,f0,f8
	ctx.f5.f64 = ctx.f0.f64 * ctx.f8.f64;
	// fmul f4,f0,f6
	ctx.f4.f64 = ctx.f0.f64 * ctx.f6.f64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// fmul f3,f9,f30
	ctx.f3.f64 = ctx.f9.f64 * f30.f64;
	// fmul f2,f7,f30
	ctx.f2.f64 = ctx.f7.f64 * f30.f64;
	// fmul f1,f5,f30
	ctx.f1.f64 = ctx.f5.f64 * f30.f64;
	// fmul f11,f4,f30
	ctx.f11.f64 = ctx.f4.f64 * f30.f64;
	// fmul f10,f3,f27
	ctx.f10.f64 = ctx.f3.f64 * f27.f64;
	// stfd f10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.f10.u64);
	// fmul f9,f2,f27
	ctx.f9.f64 = ctx.f2.f64 * f27.f64;
	// stfd f9,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.f9.u64);
	// fmul f8,f1,f27
	ctx.f8.f64 = ctx.f1.f64 * f27.f64;
	// stfd f8,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.f8.u64);
	// fmul f7,f11,f27
	ctx.f7.f64 = ctx.f11.f64 * f27.f64;
	// stfdu f7,32(r11)
	ea = 32 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.f7.u64);
	ctx.r11.u32 = ea;
	// blt cr6,0x82316a50
	if (ctx.cr6.lt) goto loc_82316A50;
loc_82316AAC:
	// cmpw cr6,r10,r23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r23.s32, ctx.xer);
	// bge cr6,0x82316ae4
	if (!ctx.cr6.lt) goto loc_82316AE4;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// fdiv f0,f31,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f31.f64 / ctx.f13.f64;
	// subf r10,r10,r23
	ctx.r10.u64 = r23.u64 - ctx.r10.u64;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + r18.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82316ACC:
	// lfd f11,8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// fmul f10,f0,f11
	ctx.f10.f64 = ctx.f0.f64 * ctx.f11.f64;
	// fmul f9,f10,f30
	ctx.f9.f64 = ctx.f10.f64 * f30.f64;
	// fmul f8,f9,f27
	ctx.f8.f64 = ctx.f9.f64 * f27.f64;
	// stfdu f8,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.f8.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82316acc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82316ACC;
loc_82316AE4:
	// fdiv f28,f31,f13
	ctx.fpscr.disableFlushMode();
	f28.f64 = f31.f64 / ctx.f13.f64;
	// stfs f23,104(r25)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(r25.u32 + 104, temp.u32);
	// fdiv f0,f13,f13
	ctx.f0.f64 = ctx.f13.f64 / ctx.f13.f64;
	// fmul f11,f23,f28
	ctx.f11.f64 = f23.f64 * f28.f64;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// stfs f13,108(r25)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r25.u32 + 108, temp.u32);
	// fmadd f10,f11,f12,f31
	ctx.f10.f64 = std::fma(ctx.f11.f64, ctx.f12.f64, f31.f64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fcmpu cr6,f23,f9
	ctx.cr6.compare(f23.f64, ctx.f9.f64);
	// ble cr6,0x82316b14
	if (!ctx.cr6.gt) goto loc_82316B14;
	// fmr f0,f23
	ctx.f0.f64 = f23.f64;
	// b 0x82316b20
	goto loc_82316B20;
loc_82316B14:
	// fmul f0,f23,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f23.f64 * f28.f64;
	// fmadd f12,f0,f12,f31
	ctx.f12.f64 = std::fma(ctx.f0.f64, ctx.f12.f64, f31.f64);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
loc_82316B20:
	// fdivs f11,f23,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(f23.f64 / ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,140(r25)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r25.u32 + 140, temp.u32);
	// extsw r9,r17
	ctx.r9.s64 = r17.s32;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lfs f12,28876(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28876);
	ctx.f12.f64 = double(temp.f32);
	// fcfid f27,f10
	f27.f64 = double(ctx.f10.s64);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f12,16200(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16200);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f8,f23,f12
	ctx.f8.f64 = double(float(f23.f64 - ctx.f12.f64));
	// stfs f8,104(r25)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r25.u32 + 104, temp.u32);
	// stfs f9,132(r25)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r25.u32 + 132, temp.u32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lfd f12,-24552(r8)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r8.u32 + -24552);
	// fmul f7,f27,f12
	ctx.f7.f64 = f27.f64 * ctx.f12.f64;
	// lfd f29,-24560(r7)
	f29.u64 = REX_LOAD_U64(ctx.r7.u32 + -24560);
	// fmuls f6,f13,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// stfs f6,136(r25)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r25.u32 + 136, temp.u32);
	// fsubs f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fdiv f1,f29,f7
	ctx.f1.f64 = f29.f64 / ctx.f7.f64;
	// fsubs f4,f6,f8
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// fmuls f3,f5,f5
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fdivs f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 / ctx.f3.f64));
	// stfs f2,144(r25)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r25.u32 + 144, temp.u32);
	// bl 0x822d49e8
	ctx.lr = 0x82316B90;
	sub_822D49E8(ctx, base);
	// fsub f1,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64 - ctx.f1.f64;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfd f0,4000(r6)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r6.u32 + 4000);
	// fmul f0,f27,f0
	ctx.f0.f64 = f27.f64 * ctx.f0.f64;
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,116(r25)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r25.u32 + 116, temp.u32);
	// fdiv f1,f29,f0
	ctx.f1.f64 = f29.f64 / ctx.f0.f64;
	// bl 0x822d49e8
	ctx.lr = 0x82316BB0;
	sub_822D49E8(ctx, base);
	// fsub f12,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = f31.f64 - ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,116(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,108(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// stfs f10,112(r25)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r25.u32 + 112, temp.u32);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f9,120(r25)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r25.u32 + 120, temp.u32);
	// frsp f8,f12
	ctx.f8.f64 = double(float(ctx.f12.f64));
	// stfs f8,124(r25)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r25.u32 + 124, temp.u32);
	// fsubs f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// stfs f7,128(r25)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r25.u32 + 128, temp.u32);
	// bl 0x8232e3b8
	ctx.lr = 0x82316BF4;
	sub_8232E3B8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82316c90
	if (ctx.cr6.lt) goto loc_82316C90;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// addi r3,r25,24
	ctx.r3.s64 = r25.s64 + 24;
	// bl 0x8232e628
	ctx.lr = 0x82316C10;
	sub_8232E628(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82316c90
	if (ctx.cr6.lt) goto loc_82316C90;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// addi r3,r25,44
	ctx.r3.s64 = r25.s64 + 44;
	// bl 0x8232e628
	ctx.lr = 0x82316C2C;
	sub_8232E628(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82316c90
	if (ctx.cr6.lt) goto loc_82316C90;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// fmul f1,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64 * f30.f64;
	// addi r3,r25,64
	ctx.r3.s64 = r25.s64 + 64;
	// bl 0x8232e628
	ctx.lr = 0x82316C48;
	sub_8232E628(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82316c90
	if (ctx.cr6.lt) goto loc_82316C90;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// fmul f1,f28,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64 * f26.f64;
	// addi r3,r25,84
	ctx.r3.s64 = r25.s64 + 84;
	// bl 0x8232e628
	ctx.lr = 0x82316C64;
	sub_8232E628(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82316c90
	if (ctx.cr6.lt) goto loc_82316C90;
	// stw r16,152(r25)
	REX_STORE_U32(r25.u32 + 152, r16.u32);
	// mulli r3,r16,28
	ctx.r3.s64 = static_cast<int64_t>(r16.u64 * static_cast<uint64_t>(28));
	// bl 0x823143c0
	ctx.lr = 0x82316C7C;
	sub_823143C0(ctx, base);
	// stw r3,148(r25)
	REX_STORE_U32(r25.u32 + 148, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82316c90
	if (!ctx.cr6.eq) goto loc_82316C90;
loc_82316C88:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
loc_82316C90:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x823143d0
	ctx.lr = 0x82316C98;
	sub_823143D0(ctx, base);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x82316ca8
	if (ctx.cr6.eq) goto loc_82316CA8;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x823143d0
	ctx.lr = 0x82316CA8;
	sub_823143D0(ctx, base);
loc_82316CA8:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x82316cb8
	if (ctx.cr6.eq) goto loc_82316CB8;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x823143d0
	ctx.lr = 0x82316CB8;
	sub_823143D0(ctx, base);
loc_82316CB8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x822d4f68
	ctx.lr = 0x82316CC8;
	// b 0x822d4ea8
	return;
}

DEFINE_REX_FUNC(sub_82337F50) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823380b0
	if (ctx.cr6.eq) goto loc_823380B0;
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// clrldi r9,r4,32
	ctx.r9.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// sld r7,r10,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf. r6,r4,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// std r7,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// stw r6,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// bge 0x823380b0
	if (!ctx.cr0.lt) goto loc_823380B0;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82338018
	if (ctx.cr6.lt) goto loc_82338018;
loc_82337FA0:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82337ff0
	if (ctx.cr6.gt) goto loc_82337FF0;
loc_82337FAC:
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
	// ble cr6,0x82337fac
	if (!ctx.cr6.gt) goto loc_82337FAC;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x823380b0
	if (!ctx.cr6.lt) goto loc_823380B0;
loc_82337FF0:
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82338084
	if (!ctx.cr6.eq) goto loc_82338084;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337bd8
	ctx.lr = 0x82338004;
	sub_82337BD8(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82337fa0
	if (!ctx.cr6.lt) goto loc_82337FA0;
loc_82338018:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,3(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lbz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rldicr r6,r9,8,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r4,r10,48
	ctx.r4.s64 = ctx.r10.s64 + 48;
	// rldicr r6,r6,8,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// stw r4,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r4.u32);
	// add r10,r6,r5
	ctx.r10.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rldicr r10,r10,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rldicr r10,r7,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// sld r10,r6,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r3.u8 & 0x7F));
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r5,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r5.u64);
	// b 0x823380ac
	goto loc_823380AC;
loc_82338084:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,-16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -16, ctx.xer);
	// bge cr6,0x823380ac
	if (!ctx.cr6.lt) goto loc_823380AC;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823380a4
	if (!ctx.cr6.eq) goto loc_823380A4;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
loc_823380A4:
	// li r10,127
	ctx.r10.s64 = 127;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_823380AC:
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_823380B0:
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

DEFINE_REX_FUNC(sub_82341FD0) {
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
	ctx.lr = 0x82341FD8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20688(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20688);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,144(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// lwz r3,84(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r8,272(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 272);
	// ld r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addic. r11,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r11.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rldicr r4,r7,1,62
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rldicl r25,r7,1,63
	r25.u64 = __builtin_rotateleft64(ctx.r7.u64, 1) & 0x1;
	// std r4,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r4.u64);
	// add r29,r10,r8
	r29.u64 = ctx.r10.u64 + ctx.r8.u64;
	// bge 0x8234202c
	if (!ctx.cr0.lt) goto loc_8234202C;
	// bl 0x823380c8
	ctx.lr = 0x8234202C;
	sub_823380C8(ctx, base);
loc_8234202C:
	// lwz r30,84(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r28,2
	r28.s64 = 2;
	// li r27,0
	r27.s64 = 0;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x823420a0
	if (!ctx.cr6.lt) goto loc_823420A0;
loc_82342048:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823420a0
	if (ctx.cr6.eq) goto loc_823420A0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U64(r30.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r28,r11,r28
	r28.u64 = r28.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r28
	ctx.r11.u64 = r28.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r28.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// bge 0x82342090
	if (!ctx.cr0.lt) goto loc_82342090;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823380c8
	ctx.lr = 0x82342090;
	sub_823380C8(ctx, base);
loc_82342090:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82342048
	if (ctx.cr6.gt) goto loc_82342048;
loc_823420A0:
	// subfic r11,r28,64
	ctx.xer.ca = r28.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r28.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(r30.u32 + 0);
	// clrldi r8,r28,32
	ctx.r8.u64 = r28.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r28,r10
	ctx.r6.u64 = ctx.r10.u64 - r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r28,r11,r27
	r28.u64 = ctx.r11.u64 + r27.u64;
	// std r4,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r4.u64);
	// bge 0x823420d8
	if (!ctx.cr0.lt) goto loc_823420D8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823380c8
	ctx.lr = 0x823420D8;
	sub_823380C8(ctx, base);
loc_823420D8:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// beq cr6,0x82342268
	if (ctx.cr6.eq) goto loc_82342268;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(r28.u32, 2, ctx.xer);
	// beq cr6,0x82342250
	if (ctx.cr6.eq) goto loc_82342250;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(r28.u32, 3, ctx.xer);
	// beq cr6,0x82342234
	if (ctx.cr6.eq) goto loc_82342234;
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
	// bge 0x82342118
	if (!ctx.cr0.lt) goto loc_82342118;
	// bl 0x823380c8
	ctx.lr = 0x82342118;
	sub_823380C8(ctx, base);
loc_82342118:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82342190
	if (ctx.cr6.eq) goto loc_82342190;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,84(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r4,144(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 144);
	// li r26,2
	r26.s64 = 2;
	// bl 0x823416b8
	ctx.lr = 0x82342134;
	sub_823416B8(ctx, base);
loc_82342134:
	// lwz r9,20688(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20688);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r8,140(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 140);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x8234221c
	if (!ctx.cr6.gt) goto loc_8234221C;
loc_82342164:
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8234252c
	if (!ctx.cr6.gt) goto loc_8234252C;
loc_82342174:
	// add. r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 + ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82342500
	if (ctx.cr0.eq) goto loc_82342500;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x823424ac
	if (!ctx.cr6.eq) goto loc_823424AC;
	// lwz r10,-24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -24);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// b 0x82342504
	goto loc_82342504;
loc_82342190:
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
	// bge 0x823421b8
	if (!ctx.cr0.lt) goto loc_823421B8;
	// bl 0x823380c8
	ctx.lr = 0x823421B8;
	sub_823380C8(ctx, base);
loc_823421B8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823421dc
	if (ctx.cr6.eq) goto loc_823421DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r26,4
	r26.s64 = 4;
	// bl 0x82341b38
	ctx.lr = 0x823421CC;
	sub_82341B38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82342134
	if (ctx.cr6.eq) goto loc_82342134;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_823421DC:
	// li r26,0
	r26.s64 = 0;
loc_823421E0:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x8234221c
	if (ctx.cr6.eq) goto loc_8234221C;
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8234221c
	if (!ctx.cr6.gt) goto loc_8234221C;
	// addi r11,r29,-24
	ctx.r11.s64 = r29.s64 + -24;
loc_823421FC:
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// not r8,r9
	ctx.r8.u64 = ~ctx.r9.u64;
	// rlwimi r8,r9,0,1,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7FFFFFFF) | (ctx.r8.u64 & 0xFFFFFFFF80000000);
	// stwu r8,24(r11)
	ea = 24 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// lwz r7,144(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 144);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x823421fc
	if (ctx.cr6.lt) goto loc_823421FC;
loc_8234221C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x82342540
	if (!ctx.cr6.eq) goto loc_82342540;
	// stw r26,348(r31)
	REX_STORE_U32(r31.u32 + 348, r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_82342234:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r26,3
	r26.s64 = 3;
	// bl 0x82341b38
	ctx.lr = 0x82342240;
	sub_82341B38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823421e0
	if (ctx.cr6.eq) goto loc_823421E0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_82342250:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,84(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r4,144(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 144);
	// li r26,1
	r26.s64 = 1;
	// bl 0x823416b8
	ctx.lr = 0x82342264;
	sub_823416B8(ctx, base);
	// b 0x823421e0
	goto loc_823421E0;
loc_82342268:
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
	// bge 0x82342290
	if (!ctx.cr0.lt) goto loc_82342290;
	// bl 0x823380c8
	ctx.lr = 0x82342290;
	sub_823380C8(ctx, base);
loc_82342290:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// li r27,0
	r27.s64 = 0;
	// beq cr6,0x823423a4
	if (ctx.cr6.eq) goto loc_823423A4;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// li r26,6
	r26.s64 = 6;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823421e0
	if (!ctx.cr6.gt) goto loc_823421E0;
loc_823422AC:
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
	// bge 0x823422d4
	if (!ctx.cr0.lt) goto loc_823422D4;
	// bl 0x823380c8
	ctx.lr = 0x823422D4;
	sub_823380C8(ctx, base);
loc_823422D4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8234234c
	if (ctx.cr6.eq) goto loc_8234234C;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82342390
	if (!ctx.cr6.gt) goto loc_82342390;
loc_823422EC:
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
	// rldicl r28,r10,1,63
	r28.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82342314
	if (!ctx.cr0.lt) goto loc_82342314;
	// bl 0x823380c8
	ctx.lr = 0x82342314;
	sub_823380C8(ctx, base);
loc_82342314:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r11,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// rlwimi r9,r28,31,0,0
	ctx.r9.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// stwx r9,r11,r29
	REX_STORE_U32(ctx.r11.u32 + r29.u32, ctx.r9.u32);
	// lwz r8,140(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823422ec
	if (ctx.cr6.lt) goto loc_823422EC;
	// b 0x82342390
	goto loc_82342390;
loc_8234234C:
	// lwz r10,140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 140);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82342390
	if (!ctx.cr6.gt) goto loc_82342390;
loc_8234235C:
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r10,r29
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	// clrlwi r7,r8,1
	ctx.r7.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// stwx r7,r10,r29
	REX_STORE_U32(ctx.r10.u32 + r29.u32, ctx.r7.u32);
	// lwz r6,140(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8234235c
	if (ctx.cr6.lt) goto loc_8234235C;
loc_82342390:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823422ac
	if (ctx.cr6.lt) goto loc_823422AC;
	// b 0x823421e0
	goto loc_823421E0;
loc_823423A4:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// li r26,5
	r26.s64 = 5;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823421e0
	if (!ctx.cr6.gt) goto loc_823421E0;
loc_823423B4:
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
	// bge 0x823423dc
	if (!ctx.cr0.lt) goto loc_823423DC;
	// bl 0x823380c8
	ctx.lr = 0x823423DC;
	sub_823380C8(ctx, base);
loc_823423DC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82342454
	if (ctx.cr6.eq) goto loc_82342454;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82342498
	if (!ctx.cr6.gt) goto loc_82342498;
loc_823423F4:
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
	// rldicl r28,r10,1,63
	r28.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8234241c
	if (!ctx.cr0.lt) goto loc_8234241C;
	// bl 0x823380c8
	ctx.lr = 0x8234241C;
	sub_823380C8(ctx, base);
loc_8234241C:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r27.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r11,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// rlwimi r9,r28,31,0,0
	ctx.r9.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// stwx r9,r11,r29
	REX_STORE_U32(ctx.r11.u32 + r29.u32, ctx.r9.u32);
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823423f4
	if (ctx.cr6.lt) goto loc_823423F4;
	// b 0x82342498
	goto loc_82342498;
loc_82342454:
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82342498
	if (!ctx.cr6.gt) goto loc_82342498;
loc_82342464:
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mullw r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r27.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r10,r29
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	// clrlwi r7,r8,1
	ctx.r7.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// stwx r7,r10,r29
	REX_STORE_U32(ctx.r10.u32 + r29.u32, ctx.r7.u32);
	// lwz r6,136(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82342464
	if (ctx.cr6.lt) goto loc_82342464;
loc_82342498:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823423b4
	if (ctx.cr6.lt) goto loc_823423B4;
	// b 0x823421e0
	goto loc_823421E0;
loc_823424AC:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x823424d4
	if (!ctx.cr6.eq) goto loc_823424D4;
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// lwz r5,0(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r10,r5,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// b 0x82342504
	goto loc_82342504;
loc_823424D4:
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r10,-24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -24);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r8,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r8.u64;
	// lwz r4,0(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r3,r4,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82342504
	if (ctx.cr6.eq) goto loc_82342504;
loc_82342500:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_82342504:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r10,31,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x80000000;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// xor r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// rlwimi r5,r9,0,1,31
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7FFFFFFF) | (ctx.r5.u64 & 0xFFFFFFFF80000000);
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82342174
	if (ctx.cr6.lt) goto loc_82342174;
loc_8234252C:
	// lwz r10,140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82342164
	if (ctx.cr6.lt) goto loc_82342164;
	// b 0x8234221c
	goto loc_8234221C;
loc_82342540:
	// cmpwi cr6,r24,5
	ctx.cr6.compare<int32_t>(r24.s32, 5, ctx.xer);
	// bne cr6,0x82342558
	if (!ctx.cr6.eq) goto loc_82342558;
	// stw r26,21644(r31)
	REX_STORE_U32(r31.u32 + 21644, r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_82342558:
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(r24.s32, 4, ctx.xer);
	// bne cr6,0x82342570
	if (!ctx.cr6.eq) goto loc_82342570;
	// stw r26,20708(r31)
	REX_STORE_U32(r31.u32 + 20708, r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_82342570:
	// cmpwi cr6,r24,3
	ctx.cr6.compare<int32_t>(r24.s32, 3, ctx.xer);
	// bne cr6,0x82342588
	if (!ctx.cr6.eq) goto loc_82342588;
	// stw r26,14868(r31)
	REX_STORE_U32(r31.u32 + 14868, r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_82342588:
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(r24.s32, 2, ctx.xer);
	// bne cr6,0x823425a0
	if (!ctx.cr6.eq) goto loc_823425A0;
	// stw r26,20692(r31)
	REX_STORE_U32(r31.u32 + 20692, r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_823425A0:
	// stw r26,352(r31)
	REX_STORE_U32(r31.u32 + 352, r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_823649E0) {
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
	ctx.lr = 0x823649E8;
	// rlwinm r11,r6,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// li r9,4
	ctx.r9.s64 = 4;
	// add r25,r11,r3
	r25.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r26,r4,2,0,29
	r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// addi r10,r5,-32
	ctx.r10.s64 = ctx.r5.s64 + -32;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82364A04:
	// lwz r9,36(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r8,60(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// lwz r7,44(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// mulli r30,r9,2276
	r30.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(2276));
	// lwz r6,52(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r4,40(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r3,56(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r27,48(r10)
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// lwzu r31,32(r10)
	ea = 32 + ctx.r10.u32;
	r31.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r29,r6,r7
	r29.u64 = ctx.r6.u64 + ctx.r7.u64;
	// mulli r5,r9,565
	ctx.r5.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(565));
	// mulli r6,r6,799
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(799));
	// mulli r29,r29,2408
	r29.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(2408));
	// mulli r8,r8,3406
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(3406));
	// mulli r7,r7,4017
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(4017));
	// add r9,r30,r5
	ctx.r9.u64 = r30.u64 + ctx.r5.u64;
	// subf r30,r6,r29
	r30.u64 = r29.u64 - ctx.r6.u64;
	// subf r28,r8,r5
	r28.u64 = ctx.r5.u64 - ctx.r8.u64;
	// subf r29,r7,r29
	r29.u64 = r29.u64 - ctx.r7.u64;
	// subf r8,r30,r9
	ctx.r8.u64 = ctx.r9.u64 - r30.u64;
	// subf r7,r29,r28
	ctx.r7.u64 = r28.u64 - r29.u64;
	// add r5,r3,r4
	ctx.r5.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rlwinm r6,r31,11,0,20
	ctx.r6.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 11) & 0xFFFFF800;
	// add r24,r7,r8
	r24.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r23,r7,r8
	r23.u64 = ctx.r8.u64 - ctx.r7.u64;
	// mulli r7,r4,1568
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1568));
	// mulli r31,r5,1108
	r31.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1108));
	// addi r8,r6,128
	ctx.r8.s64 = ctx.r6.s64 + 128;
	// rlwinm r5,r27,11,0,20
	ctx.r5.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 11) & 0xFFFFF800;
	// mulli r22,r3,3784
	r22.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(3784));
	// mulli r4,r24,181
	ctx.r4.s64 = static_cast<int64_t>(r24.u64 * static_cast<uint64_t>(181));
	// add r6,r7,r31
	ctx.r6.u64 = ctx.r7.u64 + r31.u64;
	// mulli r27,r23,181
	r27.s64 = static_cast<int64_t>(r23.u64 * static_cast<uint64_t>(181));
	// add r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 + ctx.r5.u64;
	// subf r3,r5,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r5.u64;
	// subf r8,r22,r31
	ctx.r8.u64 = r31.u64 - r22.u64;
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// addi r27,r27,128
	r27.s64 = r27.s64 + 128;
	// subf r31,r6,r7
	r31.u64 = ctx.r7.u64 - ctx.r6.u64;
	// add r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r9,r30,r9
	ctx.r9.u64 = r30.u64 + ctx.r9.u64;
	// add r7,r3,r8
	ctx.r7.u64 = ctx.r3.u64 + ctx.r8.u64;
	// srawi r6,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 8;
	// subf r3,r8,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r8.u64;
	// srawi r4,r27,8
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0xFF) != 0);
	ctx.r4.s64 = r27.s32 >> 8;
	// add r8,r28,r29
	ctx.r8.u64 = r28.u64 + r29.u64;
	// add r30,r9,r5
	r30.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r29,r6,r7
	r29.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r28,r3,r4
	r28.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r27,r31,r8
	r27.u64 = r31.u64 + ctx.r8.u64;
	// srawi r30,r30,8
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xFF) != 0);
	r30.s64 = r30.s32 >> 8;
	// srawi r29,r29,8
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xFF) != 0);
	r29.s64 = r29.s32 >> 8;
	// subf r8,r8,r31
	ctx.r8.u64 = r31.u64 - ctx.r8.u64;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// subf r4,r4,r3
	ctx.r4.u64 = ctx.r3.u64 - ctx.r4.u64;
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// srawi r31,r28,8
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0xFF) != 0);
	r31.s64 = r28.s32 >> 8;
	// srawi r3,r27,8
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0xFF) != 0);
	ctx.r3.s64 = r27.s32 >> 8;
	// subf r7,r6,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r6.u64;
	// stw r31,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r31.u32);
	// srawi r6,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 8;
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// subf r5,r9,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r9.u64;
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// stw r6,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// srawi r3,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 8;
	// srawi r9,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 8;
	// stw r4,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// stw r3,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r3.u32);
	// stw r9,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// add r11,r26,r11
	ctx.r11.u64 = r26.u64 + ctx.r11.u64;
	// bdnz 0x82364a04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82364A04;
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
loc_82364B50:
	// lwzx r9,r5,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r8,r4,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lwzx r30,r3,r11
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// mulli r31,r7,1892
	r31.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1892));
	// add r29,r8,r9
	r29.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mulli r6,r30,784
	ctx.r6.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(784));
	// subf r8,r8,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r8.u64;
	// mulli r28,r7,784
	r28.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(784));
	// mulli r30,r30,1892
	r30.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(1892));
	// add r9,r31,r6
	ctx.r9.u64 = r31.u64 + ctx.r6.u64;
	// mulli r7,r29,1448
	ctx.r7.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(1448));
	// mulli r8,r8,1448
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(1448));
	// subf r6,r30,r28
	ctx.r6.u64 = r28.u64 - r30.u64;
	// add r31,r7,r9
	r31.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r30,r8,r6
	r30.u64 = ctx.r8.u64 + ctx.r6.u64;
	// subf r6,r6,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r6.u64;
	// add r8,r31,r10
	ctx.r8.u64 = r31.u64 + ctx.r10.u64;
	// subf r7,r9,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r9.u64;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// add r9,r30,r10
	ctx.r9.u64 = r30.u64 + ctx.r10.u64;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// stwx r8,r5,r11
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r8.u32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// srawi r9,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 16;
	// srawi r8,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 16;
	// srawi r7,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 16;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stwx r8,r4,r11
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r8.u32);
	// stwx r7,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82364b50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82364B50;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_8236B288) {
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
	ctx.lr = 0x8236B290;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r30,16(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// blt cr6,0x8236b408
	if (ctx.cr6.lt) goto loc_8236B408;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8236b408
	if (ctx.cr6.lt) goto loc_8236B408;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// blt cr6,0x8236b408
	if (ctx.cr6.lt) goto loc_8236B408;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// blt cr6,0x8236b408
	if (ctx.cr6.lt) goto loc_8236B408;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x8236b408
	if (ctx.cr6.lt) goto loc_8236B408;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x8236b408
	if (ctx.cr6.lt) goto loc_8236B408;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x8236b408
	if (ctx.cr6.lt) goto loc_8236B408;
	// lwz r23,244(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(r23.s32, 1, ctx.xer);
	// blt cr6,0x8236b408
	if (ctx.cr6.lt) goto loc_8236B408;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8236b30c
	if (ctx.cr6.gt) goto loc_8236B30C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8236B30C:
	// add r10,r29,r28
	ctx.r10.u64 = r29.u64 + r28.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8236b408
	if (ctx.cr6.gt) goto loc_8236B408;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8236b328
	if (ctx.cr6.gt) goto loc_8236B328;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8236B328:
	// add r10,r27,r7
	ctx.r10.u64 = r27.u64 + ctx.r7.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8236b408
	if (ctx.cr6.gt) goto loc_8236B408;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8236b344
	if (ctx.cr6.gt) goto loc_8236B344;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8236B344:
	// add r10,r26,r24
	ctx.r10.u64 = r26.u64 + r24.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8236b408
	if (ctx.cr6.gt) goto loc_8236B408;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8236b360
	if (ctx.cr6.gt) goto loc_8236B360;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8236B360:
	// add r10,r25,r23
	ctx.r10.u64 = r25.u64 + r23.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8236b408
	if (ctx.cr6.gt) goto loc_8236B408;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// lwz r6,296(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 296);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82369db0
	ctx.lr = 0x8236B380;
	sub_82369DB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236b408
	if (!ctx.cr6.eq) goto loc_8236B408;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82369db0
	ctx.lr = 0x8236B398;
	sub_82369DB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236b408
	if (!ctx.cr6.eq) goto loc_8236B408;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82369db0
	ctx.lr = 0x8236B3B0;
	sub_82369DB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236b408
	if (!ctx.cr6.eq) goto loc_8236B408;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82369db0
	ctx.lr = 0x8236B3C8;
	sub_82369DB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236b408
	if (!ctx.cr6.eq) goto loc_8236B408;
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r27,8(r31)
	REX_STORE_U32(r31.u32 + 8, r27.u32);
	// stw r26,20(r31)
	REX_STORE_U32(r31.u32 + 20, r26.u32);
	// stw r25,24(r31)
	REX_STORE_U32(r31.u32 + 24, r25.u32);
	// stw r28,12(r31)
	REX_STORE_U32(r31.u32 + 12, r28.u32);
	// stw r7,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// stw r24,28(r31)
	REX_STORE_U32(r31.u32 + 28, r24.u32);
	// stw r23,32(r31)
	REX_STORE_U32(r31.u32 + 32, r23.u32);
	// bl 0x8236a0e8
	ctx.lr = 0x8236B3F8;
	sub_8236A0E8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec4
	return;
loc_8236B408:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_823751F8) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v14{};
	PPCVRegister v15{};
	PPCVRegister v16{};
	PPCVRegister v17{};
	PPCVRegister v20{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	uint32_t ea{};
	// vspltish v15,15
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_set1_epi16(short(0xF)));
	// addi r9,r3,128
	ctx.r9.s64 = ctx.r3.s64 + 128;
	// li r0,0
	ctx.r0.s64 = 0;
	// add r12,r6,r6
	ctx.r12.u64 = ctx.r6.u64 + ctx.r6.u64;
	// addi r10,r3,256
	ctx.r10.s64 = ctx.r3.s64 + 256;
	// vslb v8,v15,v15
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi8(0x7));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi8(a, shift));
	}
	// add r8,r12,r12
	ctx.r8.u64 = ctx.r12.u64 + ctx.r12.u64;
	// addi r11,r3,384
	ctx.r11.s64 = ctx.r3.s64 + 384;
	// lvx128 v10,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r12,r8
	ctx.r6.u64 = ctx.r12.u64 + ctx.r8.u64;
	// lvx128 v11,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v14,r3,r12
	ea = (ctx.r3.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v1,v11,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v15,r9,r12
	ea = (ctx.r9.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v0,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v20,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v2,v14,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v21,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v3,v15,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v12,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v5,v21,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v4,v20,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vpkshus v10,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// lvx128 v16,r10,r12
	ea = (ctx.r10.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v17,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v1,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v0,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vpkshus v11,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// lvx128 v22,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v2,v16,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v23,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v3,v17,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v24,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v20,v4,v5
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// lvx128 v25,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v6,v24,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v7,v25,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vpkshus v12,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v5,v23,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vpkshus v13,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v4,v22,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v26,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v27,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r7,r7
	ctx.r8.u64 = ctx.r7.u64 + ctx.r7.u64;
	// vpkshus v21,v6,v7
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v6,v26,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v7,v27,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// stvx v10,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v22,v4,v5
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stvx v12,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v11,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v23,v6,v7
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// stvx v20,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v22,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r8,r12,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r12.u32 | (ctx.r12.u64 << 32), 2) & 0xFFFFFFFC;
	// stvx v21,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v23,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r12,r8
	ctx.r6.u64 = ctx.r12.u64 + ctx.r8.u64;
	// lvx128 v10,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v1,v11,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v12,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v0,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v13,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r12,r6
	ctx.r8.u64 = ctx.r12.u64 + ctx.r6.u64;
	// lvx128 v14,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v15,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v16,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v17,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r12,r8
	ctx.r6.u64 = ctx.r12.u64 + ctx.r8.u64;
	// lvx128 v20,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v21,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v22,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v23,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v24,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v25,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v26,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v27,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v2,v14,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vpkshus v10,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v3,v15,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// vaddshs v1,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v0,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// vaddshs v5,v21,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vpkshus v11,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v4,v20,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v2,v16,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v3,v17,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vpkshus v12,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v6,v24,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// stvx v10,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v7,v25,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vpkshus v20,v4,v5
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v5,v23,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vpkshus v13,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v4,v22,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vpkshus v21,v6,v7
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v6,v26,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v7,v27,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// stvx v12,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 + ctx.r6.u64;
	// vpkshus v22,v4,v5
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// stvx v11,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v13,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v23,v6,v7
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stvx v20,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v22,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v21,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v23,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8238A780) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8238a7c8
	if (!ctx.cr6.gt) goto loc_8238A7C8;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8238A7A8:
	// lbzx r10,r11,r4
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r9,r10,128
	ctx.r9.s64 = ctx.r10.s64 + 128;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// stbx r7,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8238a7a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238A7A8;
loc_8238A7C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8238a7f8
	if (!ctx.cr6.gt) goto loc_8238A7F8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8238A7D8:
	// lbzx r10,r11,r5
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r9,r10,128
	ctx.r9.s64 = ctx.r10.s64 + 128;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// stbx r7,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8238a7d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238A7D8;
loc_8238A7F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8238A808:
	// lbzx r10,r11,r6
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r9,r10,128
	ctx.r9.s64 = ctx.r10.s64 + 128;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stbx r8,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8238a808
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238A808;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8238C1C0) {
	REX_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238c1e4
	if (ctx.cr6.eq) goto loc_8238C1E4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8238c1e4
	if (ctx.cr6.eq) goto loc_8238C1E4;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x823bf258
	sub_823BF258(ctx, base);
	return;
loc_8238C1E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8238C910) {
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
	ctx.lr = 0x8238C918;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,21888(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21888);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r17,256(r3)
	r17.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// li r20,0
	r20.s64 = 0;
	// li r21,0
	r21.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8238c9ec
	if (!ctx.cr6.eq) goto loc_8238C9EC;
	// lwz r11,14836(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8238c9ec
	if (!ctx.cr6.gt) goto loc_8238C9EC;
	// ld r11,3632(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 3632);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// ble cr6,0x8238c9ec
	if (!ctx.cr6.gt) goto loc_8238C9EC;
	// bl 0x8232ed78
	ctx.lr = 0x8238C958;
	sub_8232ED78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c9ec
	if (!ctx.cr6.eq) goto loc_8238C9EC;
	// lwz r29,20404(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 20404);
	// lwz r10,22196(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22196);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,20400(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20400);
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 36);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,3772(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3772);
	// lwz r9,22188(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 22188);
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r28,r6,r11
	r28.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r3,8(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r4,4(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r30,0(r5)
	r30.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r9,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r9.s64 = r28.s32 >> 1;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r28,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	r28.s64 = ctx.r7.s32 >> 1;
	// mullw r5,r5,r8
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// addze r8,r28
	temp.s64 = r28.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r28.u32;
	ctx.r8.s64 = temp.s64;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r5,r4,r8
	ctx.r5.u64 = ctx.r4.u64 + ctx.r8.u64;
	// add r4,r3,r8
	ctx.r4.u64 = ctx.r3.u64 + ctx.r8.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// add r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 + ctx.r9.u64;
	// mullw r8,r8,r29
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r29.s32);
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 + ctx.r7.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r6,r3,r8
	ctx.r6.u64 = ctx.r3.u64 + ctx.r8.u64;
	// b 0x8238ca8c
	goto loc_8238CA8C;
loc_8238C9EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8232ed78
	ctx.lr = 0x8238C9F4;
	sub_8232ED78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238ca20
	if (!ctx.cr6.eq) goto loc_8238CA20;
	// lwz r10,20400(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20400);
	// lwz r9,20404(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20404);
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,192(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 192);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// b 0x8238ca28
	goto loc_8238CA28;
loc_8238CA20:
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
loc_8238CA28:
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r8,108(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r4,3772(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3772);
	// mullw r3,r8,r10
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// lwz r8,96(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r7,220(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r6,224(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwz r30,4(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r29,8(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// srawi r28,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	r28.s64 = ctx.r3.s32 >> 1;
	// mullw r3,r8,r10
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// addze r8,r28
	temp.s64 = r28.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r28.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r10,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 1;
	// add r28,r3,r7
	r28.u64 = ctx.r3.u64 + ctx.r7.u64;
	// addze r7,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r7.s64 = temp.s64;
	// add r30,r30,r6
	r30.u64 = r30.u64 + ctx.r6.u64;
	// add r3,r29,r6
	ctx.r3.u64 = r29.u64 + ctx.r6.u64;
	// add r5,r28,r5
	ctx.r5.u64 = r28.u64 + ctx.r5.u64;
	// add r6,r30,r7
	ctx.r6.u64 = r30.u64 + ctx.r7.u64;
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
loc_8238CA8C:
	// lwz r26,48(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r27,52(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lhz r10,15556(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 15556);
	// rotlwi r7,r26,1
	ctx.r7.u64 = __builtin_rotateleft32(r26.u32, 1);
	// rotlwi r3,r27,1
	ctx.r3.u64 = __builtin_rotateleft32(r27.u32, 1);
	// lwz r29,40(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 40);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r24,32(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// lwz r8,15692(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 15692);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// lwz r23,44(r31)
	r23.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r19,36(r31)
	r19.u64 = REX_LOAD_U32(r31.u32 + 36);
	// andc r16,r10,r7
	r16.u64 = ctx.r10.u64 & ~ctx.r7.u64;
	// lwz r30,64(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 64);
	// andc r22,r10,r3
	r22.u64 = ctx.r10.u64 & ~ctx.r3.u64;
	// lwz r18,72(r31)
	r18.u64 = REX_LOAD_U32(r31.u32 + 72);
	// subf r7,r24,r29
	ctx.r7.u64 = r29.u64 - r24.u64;
	// lwz r28,68(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 68);
	// add r3,r8,r25
	ctx.r3.u64 = ctx.r8.u64 + r25.u64;
	// lwz r29,76(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 76);
	// subf r8,r19,r23
	ctx.r8.u64 = r23.u64 - r19.u64;
	// subf r19,r30,r18
	r19.u64 = r18.u64 - r30.u64;
	// twlgei r22,-1
	if (r22.s32 == -1 || r22.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// subf r18,r28,r29
	r18.u64 = r29.u64 - r28.u64;
	// divw r23,r27,r10
	r23.u64 = uint32_t((ctx.r10.s32 && !(r27.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? r27.s32 / ctx.r10.s32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r22,r26,r10
	r22.u64 = uint32_t((ctx.r10.s32 && !(r26.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? r26.s32 / ctx.r10.s32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r16,-1
	if (r16.s32 == -1 || r16.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x8238cb14
	if (!ctx.cr6.eq) goto loc_8238CB14;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x8238cb9c
	if (ctx.cr6.eq) goto loc_8238CB9C;
loc_8238CB14:
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(r23.s32, 1, ctx.xer);
	// bne cr6,0x8238cb3c
	if (!ctx.cr6.eq) goto loc_8238CB3C;
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lhz r29,15556(r31)
	r29.u64 = REX_LOAD_U16(r31.u32 + 15556);
	// mullw r30,r10,r22
	r30.s64 = int64_t(ctx.r10.s32) * int64_t(r22.s32);
	// add r10,r30,r28
	ctx.r10.u64 = r30.u64 + r28.u64;
	// rlwinm r30,r29,29,3,31
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r30,r10,r30
	r30.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// add r3,r30,r3
	ctx.r3.u64 = r30.u64 + ctx.r3.u64;
	// b 0x8238cb9c
	goto loc_8238CB9C;
loc_8238CB3C:
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(r23.s32, -1, ctx.xer);
	// bne cr6,0x8238cb5c
	if (!ctx.cr6.eq) goto loc_8238CB5C;
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lhz r30,15556(r31)
	r30.u64 = REX_LOAD_U16(r31.u32 + 15556);
	// mullw r10,r10,r22
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r22.s32);
	// subf r10,r10,r28
	ctx.r10.u64 = r28.u64 - ctx.r10.u64;
	// rlwinm r30,r30,29,3,31
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x8238cb94
	goto loc_8238CB94;
loc_8238CB5C:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(r22.s32, 1, ctx.xer);
	// mullw r30,r28,r23
	r30.s64 = int64_t(r28.s32) * int64_t(r23.s32);
	// bne cr6,0x8238cb84
	if (!ctx.cr6.eq) goto loc_8238CB84;
	// lwz r29,64(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lhz r10,15556(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 15556);
	// add r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r30,r30,r10
	r30.s64 = int64_t(r30.s32) * int64_t(ctx.r10.s32);
	// add r3,r30,r3
	ctx.r3.u64 = r30.u64 + ctx.r3.u64;
	// b 0x8238cb9c
	goto loc_8238CB9C;
loc_8238CB84:
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lhz r29,15556(r31)
	r29.u64 = REX_LOAD_U16(r31.u32 + 15556);
	// subf r10,r30,r10
	ctx.r10.u64 = ctx.r10.u64 - r30.u64;
	// rlwinm r30,r29,29,3,31
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 29) & 0x1FFFFFFF;
loc_8238CB94:
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// subf r3,r10,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r10.u64;
loc_8238CB9C:
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// lwz r29,15552(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 15552);
	// lis r30,12338
	r30.s64 = 808583168;
	// ori r25,r10,22094
	r25.u64 = ctx.r10.u64 | 22094;
	// ori r30,r30,13385
	r30.u64 = r30.u64 | 13385;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(r29.u32, r25.u32, ctx.xer);
	// bgt cr6,0x8238cdcc
	if (ctx.cr6.gt) goto loc_8238CDCC;
	// beq cr6,0x8238ce5c
	if (ctx.cr6.eq) goto loc_8238CE5C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8238cc14
	if (ctx.cr6.eq) goto loc_8238CC14;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(r29.u32, 3, ctx.xer);
	// beq cr6,0x8238cc14
	if (ctx.cr6.eq) goto loc_8238CC14;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// beq cr6,0x8238ce5c
	if (ctx.cr6.eq) goto loc_8238CE5C;
loc_8238CBD4:
	// lwz r30,144(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_8238CBD8:
	// li r31,0
	r31.s64 = 0;
	// stw r20,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r20.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r21,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r21.u32);
	// stw r31,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r31.u32);
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// stw r17,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r17.u32);
	// stw r22,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r22.u32);
	// stw r23,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// stw r18,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r18.u32);
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r19.u32);
	// bctrl 
	ctx.lr = 0x8238CC08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822d4ea8
	return;
loc_8238CC14:
	// lhz r28,15556(r31)
	r28.u64 = REX_LOAD_U16(r31.u32 + 15556);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r28,16
	ctx.cr6.compare<uint32_t>(r28.u32, 16, ctx.xer);
	// beq cr6,0x8238cc3c
	if (ctx.cr6.eq) goto loc_8238CC3C;
	// cmplwi cr6,r28,32
	ctx.cr6.compare<uint32_t>(r28.u32, 32, ctx.xer);
	// bne cr6,0x8238cc44
	if (!ctx.cr6.eq) goto loc_8238CC44;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// addi r30,r10,5152
	r30.s64 = ctx.r10.s64 + 5152;
	// addi r30,r30,76
	r30.s64 = r30.s64 + 76;
	// b 0x8238cc44
	goto loc_8238CC44;
loc_8238CC3C:
	// lis r30,-32161
	r30.s64 = -2107703296;
	// addi r30,r30,5152
	r30.s64 = r30.s64 + 5152;
loc_8238CC44:
	// cmpw cr6,r7,r19
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r19.s32, ctx.xer);
	// bne cr6,0x8238cc98
	if (!ctx.cr6.eq) goto loc_8238CC98;
	// cmpw cr6,r8,r18
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r18.s32, ctx.xer);
	// bne cr6,0x8238cc98
	if (!ctx.cr6.eq) goto loc_8238CC98;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(r22.s32, 1, ctx.xer);
	// bne cr6,0x8238cc64
	if (!ctx.cr6.eq) goto loc_8238CC64;
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x8238cc88
	goto loc_8238CC88;
loc_8238CC64:
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(r23.s32, 1, ctx.xer);
	// bne cr6,0x8238cc74
	if (!ctx.cr6.eq) goto loc_8238CC74;
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x8238cc88
	goto loc_8238CC88;
loc_8238CC74:
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(r23.s32, -1, ctx.xer);
	// bne cr6,0x8238cc84
	if (!ctx.cr6.eq) goto loc_8238CC84;
	// lwz r30,12(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 12);
	// b 0x8238cc88
	goto loc_8238CC88;
loc_8238CC84:
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
loc_8238CC88:
	// cmplwi cr6,r28,16
	ctx.cr6.compare<uint32_t>(r28.u32, 16, ctx.xer);
	// bne cr6,0x8238cbd8
	if (!ctx.cr6.eq) goto loc_8238CBD8;
	// lwz r17,260(r31)
	r17.u64 = REX_LOAD_U32(r31.u32 + 260);
	// b 0x8238cbd8
	goto loc_8238CBD8;
loc_8238CC98:
	// rlwinm r10,r18,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8238cce8
	if (!ctx.cr6.eq) goto loc_8238CCE8;
	// rlwinm r10,r19,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8238cce8
	if (!ctx.cr6.eq) goto loc_8238CCE8;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(r23.s32, 1, ctx.xer);
	// bne cr6,0x8238ccc0
	if (!ctx.cr6.eq) goto loc_8238CCC0;
	// lwz r30,20(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 20);
	// b 0x8238cbd8
	goto loc_8238CBD8;
loc_8238CCC0:
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(r23.s32, -1, ctx.xer);
	// bne cr6,0x8238ccd0
	if (!ctx.cr6.eq) goto loc_8238CCD0;
	// lwz r30,28(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 28);
	// b 0x8238cbd8
	goto loc_8238CBD8;
loc_8238CCD0:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(r22.s32, 1, ctx.xer);
	// bne cr6,0x8238cce0
	if (!ctx.cr6.eq) goto loc_8238CCE0;
	// lwz r30,16(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 16);
	// b 0x8238cbd8
	goto loc_8238CBD8;
loc_8238CCE0:
	// lwz r30,24(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 24);
	// b 0x8238cbd8
	goto loc_8238CBD8;
loc_8238CCE8:
	// rlwinm r29,r8,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r29,r18
	ctx.cr6.compare<int32_t>(r29.s32, r18.s32, ctx.xer);
	// bne cr6,0x8238cd38
	if (!ctx.cr6.eq) goto loc_8238CD38;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r10,r19
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r19.s32, ctx.xer);
	// bne cr6,0x8238cd38
	if (!ctx.cr6.eq) goto loc_8238CD38;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(r23.s32, 1, ctx.xer);
	// bne cr6,0x8238cd10
	if (!ctx.cr6.eq) goto loc_8238CD10;
	// lwz r30,36(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 36);
	// b 0x8238cbd8
	goto loc_8238CBD8;
loc_8238CD10:
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(r23.s32, -1, ctx.xer);
	// bne cr6,0x8238cd20
	if (!ctx.cr6.eq) goto loc_8238CD20;
	// lwz r30,44(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 44);
	// b 0x8238cbd8
	goto loc_8238CBD8;
loc_8238CD20:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(r22.s32, 1, ctx.xer);
	// bne cr6,0x8238cd30
	if (!ctx.cr6.eq) goto loc_8238CD30;
	// lwz r30,32(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 32);
	// b 0x8238cbd8
	goto loc_8238CBD8;
loc_8238CD30:
	// lwz r30,40(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 40);
	// b 0x8238cbd8
	goto loc_8238CBD8;
loc_8238CD38:
	// cmpw cr6,r18,r8
	ctx.cr6.compare<int32_t>(r18.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8238cd8c
	if (ctx.cr6.lt) goto loc_8238CD8C;
	// cmpw cr6,r19,r7
	ctx.cr6.compare<int32_t>(r19.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8238cd8c
	if (ctx.cr6.lt) goto loc_8238CD8C;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(r23.s32, 1, ctx.xer);
	// bne cr6,0x8238cd58
	if (!ctx.cr6.eq) goto loc_8238CD58;
	// lwz r30,52(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 52);
	// b 0x8238cd7c
	goto loc_8238CD7C;
loc_8238CD58:
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(r23.s32, -1, ctx.xer);
	// bne cr6,0x8238cd68
	if (!ctx.cr6.eq) goto loc_8238CD68;
	// lwz r30,60(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 60);
	// b 0x8238cd7c
	goto loc_8238CD7C;
loc_8238CD68:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(r22.s32, 1, ctx.xer);
	// bne cr6,0x8238cd78
	if (!ctx.cr6.eq) goto loc_8238CD78;
	// lwz r30,48(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 48);
	// b 0x8238cd7c
	goto loc_8238CD7C;
loc_8238CD78:
	// lwz r30,56(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 56);
loc_8238CD7C:
	// cmplwi cr6,r28,16
	ctx.cr6.compare<uint32_t>(r28.u32, 16, ctx.xer);
	// bne cr6,0x8238cbd8
	if (!ctx.cr6.eq) goto loc_8238CBD8;
	// lwz r17,260(r31)
	r17.u64 = REX_LOAD_U32(r31.u32 + 260);
	// b 0x8238cbd8
	goto loc_8238CBD8;
loc_8238CD8C:
	// li r10,3
	ctx.r10.s64 = 3;
	// divw r10,r29,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(r29.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? r29.s32 / ctx.r10.s32 : 0);
	// cmpw cr6,r10,r18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r18.s32, ctx.xer);
	// bgt cr6,0x8238cdc4
	if (ctx.cr6.gt) goto loc_8238CDC4;
	// rlwinm r31,r7,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r7,r31
	ctx.r10.u64 = ctx.r7.u64 + r31.u64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// cmpw cr6,r10,r19
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r19.s32, ctx.xer);
	// bgt cr6,0x8238cdbc
	if (ctx.cr6.gt) goto loc_8238CDBC;
	// lwz r30,64(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 64);
	// b 0x8238cbd8
	goto loc_8238CBD8;
loc_8238CDBC:
	// lwz r30,68(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 68);
	// b 0x8238cbd8
	goto loc_8238CBD8;
loc_8238CDC4:
	// lwz r30,72(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 72);
	// b 0x8238cbd8
	goto loc_8238CBD8;
loc_8238CDCC:
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r10,r10,22105
	ctx.r10.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8238ce5c
	if (ctx.cr6.eq) goto loc_8238CE5C;
	// lis r10,12889
	ctx.r10.s64 = 844693504;
	// ori r10,r10,21849
	ctx.r10.u64 = ctx.r10.u64 | 21849;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8238ce2c
	if (ctx.cr6.eq) goto loc_8238CE2C;
	// lis r10,22870
	ctx.r10.s64 = 1498808320;
	// ori r10,r10,22869
	ctx.r10.u64 = ctx.r10.u64 | 22869;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8238cbd4
	if (!ctx.cr6.eq) goto loc_8238CBD4;
	// neg r31,r26
	r31.s64 = static_cast<int64_t>(-r26.u64);
	// neg r10,r27
	ctx.r10.s64 = static_cast<int64_t>(-r27.u64);
	// andc r31,r31,r26
	r31.u64 = r31.u64 & ~r26.u64;
	// andc r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 & ~r27.u64;
	// rlwinm r30,r31,1,31,31
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0x1;
	// rlwinm r31,r10,2,30,30
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x2;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// addi r10,r10,8572
	ctx.r10.s64 = ctx.r10.s64 + 8572;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r31,r10
	r30.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// b 0x8238cbd8
	goto loc_8238CBD8;
loc_8238CE2C:
	// neg r31,r26
	r31.s64 = static_cast<int64_t>(-r26.u64);
	// neg r10,r27
	ctx.r10.s64 = static_cast<int64_t>(-r27.u64);
	// andc r31,r31,r26
	r31.u64 = r31.u64 & ~r26.u64;
	// andc r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 & ~r27.u64;
	// rlwinm r30,r31,1,31,31
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0x1;
	// rlwinm r31,r10,2,30,30
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x2;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// addi r10,r10,8556
	ctx.r10.s64 = ctx.r10.s64 + 8556;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r31,r10
	r30.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// b 0x8238cbd8
	goto loc_8238CBD8;
loc_8238CE5C:
	// li r24,0
	r24.s64 = 0;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// beq cr6,0x8238ce9c
	if (ctx.cr6.eq) goto loc_8238CE9C;
	// subf. r30,r25,r29
	r30.u64 = r29.u64 - r25.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8238ce84
	if (ctx.cr0.eq) goto loc_8238CE84;
	// cmplwi cr6,r30,11
	ctx.cr6.compare<uint32_t>(r30.u32, 11, ctx.xer);
	// bne cr6,0x8238ceac
	if (!ctx.cr6.eq) goto loc_8238CEAC;
	// lwz r20,22152(r31)
	r20.u64 = REX_LOAD_U32(r31.u32 + 22152);
	// lwz r21,22156(r31)
	r21.u64 = REX_LOAD_U32(r31.u32 + 22156);
	// b 0x8238cea4
	goto loc_8238CEA4;
loc_8238CE84:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r21,22152(r31)
	r21.u64 = REX_LOAD_U32(r31.u32 + 22152);
	// li r20,0
	r20.s64 = 0;
	// addi r30,r10,-21936
	r30.s64 = ctx.r10.s64 + -21936;
	// addi r24,r30,32
	r24.s64 = r30.s64 + 32;
	// b 0x8238ceac
	goto loc_8238CEAC;
loc_8238CE9C:
	// lwz r21,22152(r31)
	r21.u64 = REX_LOAD_U32(r31.u32 + 22152);
	// lwz r20,22156(r31)
	r20.u64 = REX_LOAD_U32(r31.u32 + 22156);
loc_8238CEA4:
	// lis r30,-32252
	r30.s64 = -2113667072;
	// addi r24,r30,-21936
	r24.s64 = r30.s64 + -21936;
loc_8238CEAC:
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// mr r23,r27
	r23.u64 = r27.u64;
	// mr r22,r26
	r22.u64 = r26.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8238cec8
	if (!ctx.cr6.eq) goto loc_8238CEC8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x8238cf68
	if (ctx.cr6.eq) goto loc_8238CF68;
loc_8238CEC8:
	// subf r10,r29,r25
	ctx.r10.u64 = r25.u64 - r29.u64;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(r23.s32, 1, ctx.xer);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r30,r10,1
	r30.u64 = ctx.r10.u64 ^ 1;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bne cr6,0x8238cf20
	if (!ctx.cr6.eq) goto loc_8238CF20;
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// twllei r30,0
	if (r30.s32 == 0 || r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r31,68(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 68);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r28,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	r28.s64 = r31.s32 >> 1;
	// mullw r10,r10,r22
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r22.s32);
	// rotlwi r29,r10,1
	r29.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r31,r10,r30
	r31.u64 = uint32_t((r30.s32 && !(ctx.r10.s32 == INT32_MIN && r30.s32 == -1)) ? ctx.r10.s32 / r30.s32 : 0);
	// addi r10,r29,-1
	ctx.r10.s64 = r29.s64 + -1;
	// addze r29,r28
	temp.s64 = r28.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r28.u32;
	r29.s64 = temp.s64;
	// andc r10,r30,r10
	ctx.r10.u64 = r30.u64 & ~ctx.r10.u64;
	// add r31,r31,r29
	r31.u64 = r31.u64 + r29.u64;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// b 0x8238cf60
	goto loc_8238CF60;
loc_8238CF20:
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(r23.s32, -1, ctx.xer);
	// bne cr6,0x8238cf88
	if (!ctx.cr6.eq) goto loc_8238CF88;
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwz r31,68(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 68);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// mullw r10,r10,r22
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r22.s32);
loc_8238CF3C:
	// srawi r29,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	r29.s64 = r31.s32 >> 1;
	// rotlwi r31,r10,1
	r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r30
	ctx.r10.u64 = uint32_t((r30.s32 && !(ctx.r10.s32 == INT32_MIN && r30.s32 == -1)) ? ctx.r10.s32 / r30.s32 : 0);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// twllei r30,0
	if (r30.s32 == 0 || r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r30,r30,r31
	r30.u64 = r30.u64 & ~r31.u64;
	// addze r29,r29
	temp.s64 = r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r29.u32;
	r29.s64 = temp.s64;
	// twlgei r30,-1
	if (r30.s32 == -1 || r30.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// subf r31,r29,r10
	r31.u64 = ctx.r10.u64 - r29.u64;
loc_8238CF60:
	// add r20,r31,r20
	r20.u64 = r31.u64 + r20.u64;
	// add r21,r31,r21
	r21.u64 = r31.u64 + r21.u64;
loc_8238CF68:
	// cmpw cr6,r7,r19
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r19.s32, ctx.xer);
	// bne cr6,0x8238cff4
	if (!ctx.cr6.eq) goto loc_8238CFF4;
	// cmpw cr6,r8,r18
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r18.s32, ctx.xer);
	// bne cr6,0x8238cff4
	if (!ctx.cr6.eq) goto loc_8238CFF4;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(r23.s32, 1, ctx.xer);
	// bne cr6,0x8238cfcc
	if (!ctx.cr6.eq) goto loc_8238CFCC;
	// lwz r30,4(r24)
	r30.u64 = REX_LOAD_U32(r24.u32 + 4);
	// b 0x8238cbd8
	goto loc_8238CBD8;
loc_8238CF88:
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(r22.s32, 1, ctx.xer);
	// lwz r31,64(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 64);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// mullw r10,r10,r23
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r23.s32);
	// bne cr6,0x8238cf3c
	if (!ctx.cr6.eq) goto loc_8238CF3C;
	// rotlwi r29,r10,1
	r29.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// srawi r28,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	r28.s64 = r31.s32 >> 1;
	// divw r31,r10,r30
	r31.u64 = uint32_t((r30.s32 && !(ctx.r10.s32 == INT32_MIN && r30.s32 == -1)) ? ctx.r10.s32 / r30.s32 : 0);
	// addi r10,r29,-1
	ctx.r10.s64 = r29.s64 + -1;
	// addze r29,r28
	temp.s64 = r28.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r28.u32;
	r29.s64 = temp.s64;
	// andc r10,r30,r10
	ctx.r10.u64 = r30.u64 & ~ctx.r10.u64;
	// twllei r30,0
	if (r30.s32 == 0 || r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// add r31,r31,r29
	r31.u64 = r31.u64 + r29.u64;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// b 0x8238cf60
	goto loc_8238CF60;
loc_8238CFCC:
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(r23.s32, -1, ctx.xer);
	// bne cr6,0x8238cfdc
	if (!ctx.cr6.eq) goto loc_8238CFDC;
	// lwz r30,12(r24)
	r30.u64 = REX_LOAD_U32(r24.u32 + 12);
	// b 0x8238cbd8
	goto loc_8238CBD8;
loc_8238CFDC:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(r22.s32, 1, ctx.xer);
	// bne cr6,0x8238cfec
	if (!ctx.cr6.eq) goto loc_8238CFEC;
	// lwz r30,0(r24)
	r30.u64 = REX_LOAD_U32(r24.u32 + 0);
	// b 0x8238cbd8
	goto loc_8238CBD8;
loc_8238CFEC:
	// lwz r30,8(r24)
	r30.u64 = REX_LOAD_U32(r24.u32 + 8);
	// b 0x8238cbd8
	goto loc_8238CBD8;
loc_8238CFF4:
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(r23.s32, 1, ctx.xer);
	// bne cr6,0x8238d004
	if (!ctx.cr6.eq) goto loc_8238D004;
	// lwz r30,20(r24)
	r30.u64 = REX_LOAD_U32(r24.u32 + 20);
	// b 0x8238cbd8
	goto loc_8238CBD8;
loc_8238D004:
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(r23.s32, -1, ctx.xer);
	// bne cr6,0x8238d014
	if (!ctx.cr6.eq) goto loc_8238D014;
	// lwz r30,28(r24)
	r30.u64 = REX_LOAD_U32(r24.u32 + 28);
	// b 0x8238cbd8
	goto loc_8238CBD8;
loc_8238D014:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(r22.s32, 1, ctx.xer);
	// bne cr6,0x8238d024
	if (!ctx.cr6.eq) goto loc_8238D024;
	// lwz r30,16(r24)
	r30.u64 = REX_LOAD_U32(r24.u32 + 16);
	// b 0x8238cbd8
	goto loc_8238CBD8;
loc_8238D024:
	// lwz r30,24(r24)
	r30.u64 = REX_LOAD_U32(r24.u32 + 24);
	// b 0x8238cbd8
	goto loc_8238CBD8;
}

DEFINE_REX_FUNC(sub_823A6E38) {
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
	ctx.lr = 0x823A6E40;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823a6e70
	if (!ctx.cr6.eq) goto loc_823A6E70;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r27,0
	r27.s64 = 0;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// b 0x823a6fa0
	goto loc_823A6FA0;
loc_823A6E70:
	// lbz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + r28.u32);
	// extsh r30,r5
	r30.s64 = ctx.r5.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x823a6f5c
	if (ctx.cr6.lt) goto loc_823A6F5C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = r30.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x823a6f54
	if (!ctx.cr6.lt) goto loc_823A6F54;
loc_823A6EBC:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823a6ee8
	if (ctx.cr6.lt) goto loc_823A6EE8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x823A6ED8;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x823a6ebc
	if (ctx.cr6.eq) goto loc_823A6EBC;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x823a6f9c
	goto loc_823A6F9C;
loc_823A6EE8:
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
loc_823A6F54:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x823a6f9c
	goto loc_823A6F9C;
loc_823A6F5C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337f50
	ctx.lr = 0x823A6F64;
	sub_82337F50(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,32768
	r29.u64 = ctx.r11.u64 | 32768;
loc_823A6F6C:
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
	// bl 0x82337f50
	ctx.lr = 0x823A6F84;
	sub_82337F50(ctx, base);
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
	// blt cr6,0x823a6f6c
	if (ctx.cr6.lt) goto loc_823A6F6C;
loc_823A6F9C:
	// mr r27,r30
	r27.u64 = r30.u64;
loc_823A6FA0:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// cmpwi cr6,r26,8
	ctx.cr6.compare<int32_t>(r26.s32, 8, ctx.xer);
	// bne cr6,0x823a6fbc
	if (!ctx.cr6.eq) goto loc_823A6FBC;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpwi cr6,r27,37
	ctx.cr6.compare<int32_t>(r27.s32, 37, ctx.xer);
	// blt cr6,0x823a70dc
	if (ctx.cr6.lt) goto loc_823A70DC;
	// addi r27,r27,-37
	r27.s64 = r27.s64 + -37;
loc_823A6FBC:
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_823A6FC0:
	// rlwinm r24,r11,0,30,28
	r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x823a742c
	if (ctx.cr6.eq) goto loc_823A742C;
	// cmpwi cr6,r27,35
	ctx.cr6.compare<int32_t>(r27.s32, 35, ctx.xer);
	// beq cr6,0x823a7268
	if (ctx.cr6.eq) goto loc_823A7268;
	// cmpwi cr6,r27,36
	ctx.cr6.compare<int32_t>(r27.s32, 36, ctx.xer);
	// beq cr6,0x823a7250
	if (ctx.cr6.eq) goto loc_823A7250;
	// lwz r11,1976(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 1976);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r26,76(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x823904a8
	ctx.lr = 0x823A6FF0;
	sub_823904A8(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x823a7004
	if (ctx.cr6.eq) goto loc_823A7004;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x823a7008
	if (ctx.cr6.eq) goto loc_823A7008;
loc_823A7004:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823A7008:
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// rlwinm r28,r3,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,8040
	r25.s64 = ctx.r11.s64 + 8040;
	// lwzx r11,r28,r25
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + r25.u32);
	// subf. r30,r10,r11
	r30.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble 0x823a70e4
	if (!ctx.cr0.gt) goto loc_823A70E4;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// bgt cr6,0x823a70e4
	if (ctx.cr6.gt) goto loc_823A70E4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823a70e4
	if (ctx.cr6.eq) goto loc_823A70E4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823a709c
	if (!ctx.cr6.gt) goto loc_823A709C;
loc_823A7044:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a709c
	if (ctx.cr6.eq) goto loc_823A709C;
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
	// bge 0x823a708c
	if (!ctx.cr0.lt) goto loc_823A708C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A708C;
	sub_823380C8(ctx, base);
loc_823A708C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a7044
	if (ctx.cr6.gt) goto loc_823A7044;
loc_823A709C:
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
	// bge 0x823a70d4
	if (!ctx.cr0.lt) goto loc_823A70D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A70D4;
	sub_823380C8(ctx, base);
loc_823A70D4:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// b 0x823a70e8
	goto loc_823A70E8;
loc_823A70DC:
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// b 0x823a6fc0
	goto loc_823A6FC0;
loc_823A70E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823A70E8:
	// addi r10,r25,24
	ctx.r10.s64 = r25.s64 + 24;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// li r4,6
	ctx.r4.s64 = 6;
	// neg r8,r9
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwzx r7,r28,r10
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + ctx.r10.u32);
	// rlwinm r6,r8,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r5,r8,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,15,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFFFF8000;
	// xor r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// rlwimi r9,r24,0,16,31
	ctx.r9.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// subf r28,r5,r9
	r28.u64 = ctx.r9.u64 - ctx.r5.u64;
	// rlwimi r28,r9,0,16,31
	r28.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF) | (r28.u64 & 0xFFFFFFFFFFFF0000);
	// bl 0x823904d0
	ctx.lr = 0x823A7128;
	sub_823904D0(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x823a713c
	if (ctx.cr6.eq) goto loc_823A713C;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x823a7140
	if (ctx.cr6.eq) goto loc_823A7140;
loc_823A713C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823A7140:
	// rlwinm r27,r3,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r27,r25
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + r25.u32);
	// subf. r30,r11,r10
	r30.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble 0x823a720c
	if (!ctx.cr0.gt) goto loc_823A720C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// bgt cr6,0x823a720c
	if (ctx.cr6.gt) goto loc_823A720C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823a720c
	if (ctx.cr6.eq) goto loc_823A720C;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823a71cc
	if (!ctx.cr6.gt) goto loc_823A71CC;
loc_823A7174:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a71cc
	if (ctx.cr6.eq) goto loc_823A71CC;
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
	// bge 0x823a71bc
	if (!ctx.cr0.lt) goto loc_823A71BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A71BC;
	sub_823380C8(ctx, base);
loc_823A71BC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a7174
	if (ctx.cr6.gt) goto loc_823A7174;
loc_823A71CC:
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
	// bge 0x823a7204
	if (!ctx.cr0.lt) goto loc_823A7204;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A7204;
	sub_823380C8(ctx, base);
loc_823A7204:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// b 0x823a7210
	goto loc_823A7210;
loc_823A720C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823A7210:
	// addi r10,r25,24
	ctx.r10.s64 = r25.s64 + 24;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// neg r8,r9
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// lwzx r7,r27,r10
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + ctx.r10.u32);
	// rlwinm r6,r8,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// xor r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 ^ ctx.r6.u64;
	// rlwimi r11,r28,0,28,15
	ctx.r11.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFF000F) | (ctx.r11.u64 & 0xFFF0);
	// subf r10,r5,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r5.u64;
	// rlwimi r10,r11,0,28,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF000F) | (ctx.r10.u64 & 0xFFF0);
	// stw r10,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec4
	return;
loc_823A7250:
	// clrlwi r11,r24,28
	ctx.r11.u64 = r24.u32 & 0xF;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec4
	return;
loc_823A7268:
	// lwz r9,1976(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 1976);
	// li r29,0
	r29.s64 = 0;
	// lwz r8,412(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 412);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// lwz r28,76(r9)
	r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// subf r30,r28,r8
	r30.u64 = ctx.r8.u64 - r28.u64;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// ble cr6,0x823a7294
	if (!ctx.cr6.gt) goto loc_823A7294;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823a7340
	goto loc_823A7340;
loc_823A7294:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x823a72a4
	if (!ctx.cr6.eq) goto loc_823A72A4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823a7340
	goto loc_823A7340;
loc_823A72A4:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823a7304
	if (!ctx.cr6.gt) goto loc_823A7304;
loc_823A72AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a7304
	if (ctx.cr6.eq) goto loc_823A7304;
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
	// bge 0x823a72f4
	if (!ctx.cr0.lt) goto loc_823A72F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A72F4;
	sub_823380C8(ctx, base);
loc_823A72F4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a72ac
	if (ctx.cr6.gt) goto loc_823A72AC;
loc_823A7304:
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
	// bge 0x823a733c
	if (!ctx.cr0.lt) goto loc_823A733C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A733C;
	sub_823380C8(ctx, base);
loc_823A733C:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_823A7340:
	// lwz r9,416(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 416);
	// rlwimi r24,r11,16,0,15
	r24.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (r24.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// subf r30,r28,r9
	r30.u64 = ctx.r9.u64 - r28.u64;
	// mr r28,r24
	r28.u64 = r24.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// ble cr6,0x823a7378
	if (!ctx.cr6.gt) goto loc_823A7378;
loc_823A7364:
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwimi r28,r11,4,16,27
	r28.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFF0) | (r28.u64 & 0xFFFFFFFFFFFF000F);
	// stw r28,0(r23)
	REX_STORE_U32(r23.u32 + 0, r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec4
	return;
loc_823A7378:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823a7364
	if (ctx.cr6.eq) goto loc_823A7364;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823a73e0
	if (!ctx.cr6.gt) goto loc_823A73E0;
loc_823A7388:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a73e0
	if (ctx.cr6.eq) goto loc_823A73E0;
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
	// bge 0x823a73d0
	if (!ctx.cr0.lt) goto loc_823A73D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A73D0;
	sub_823380C8(ctx, base);
loc_823A73D0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a7388
	if (ctx.cr6.gt) goto loc_823A7388;
loc_823A73E0:
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
	// bge 0x823a7418
	if (!ctx.cr0.lt) goto loc_823A7418;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A7418;
	sub_823380C8(ctx, base);
loc_823A7418:
	// rlwimi r28,r30,4,16,27
	r28.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFF0) | (r28.u64 & 0xFFFFFFFFFFFF000F);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r28,0(r23)
	REX_STORE_U32(r23.u32 + 0, r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec4
	return;
loc_823A742C:
	// clrlwi r11,r24,28
	ctx.r11.u64 = r24.u32 & 0xF;
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_823C2958) {
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
	ctx.lr = 0x823C2960;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,316(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// srawi r11,r24,31
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = r24.s32 >> 31;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// xor r10,r24,r11
	ctx.r10.u64 = r24.u64 ^ ctx.r11.u64;
	// mr r19,r9
	r19.u64 = ctx.r9.u64;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// mr r30,r24
	r30.u64 = r24.u64;
	// beq cr6,0x823c29a4
	if (ctx.cr6.eq) goto loc_823C29A4;
	// srawi r30,r24,1
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x1) != 0);
	r30.s64 = r24.s32 >> 1;
loc_823C29A4:
	// clrlwi r11,r30,30
	ctx.r11.u64 = r30.u32 & 0x3;
	// srawi r28,r23,1
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x1) != 0);
	r28.s64 = r23.s32 >> 1;
	// srawi r31,r22,1
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x1) != 0);
	r31.s64 = r22.s32 >> 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823c29e8
	if (!ctx.cr6.eq) goto loc_823C29E8;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// lwz r3,332(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x823c2220
	ctx.lr = 0x823C29CC;
	sub_823C2220(ctx, base);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r3,340(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x823c2220
	ctx.lr = 0x823C29E4;
	sub_823C2220(ctx, base);
	// b 0x823c2a5c
	goto loc_823C2A5C;
loc_823C29E8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x823c2a5c
	if (!ctx.cr6.gt) goto loc_823C2A5C;
	// lwz r27,340(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r29,332(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r25,r31
	r25.u64 = r31.u64;
loc_823C2A04:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x823c2a4c
	if (!ctx.cr6.gt) goto loc_823C2A4C;
	// add r3,r7,r26
	ctx.r3.u64 = ctx.r7.u64 + r26.u64;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// add r31,r6,r27
	r31.u64 = ctx.r6.u64 + r27.u64;
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r8,r6,r10
	ctx.r8.u64 = ctx.r6.u64 + ctx.r10.u64;
loc_823C2A28:
	// lbzx r18,r9,r4
	r18.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// lbzx r17,r3,r11
	r17.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stbx r18,r8,r29
	REX_STORE_U8(ctx.r8.u32 + r29.u32, r18.u8);
	// stbx r17,r31,r10
	REX_STORE_U8(r31.u32 + ctx.r10.u32, r17.u8);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r8,r6,r10
	ctx.r8.u64 = ctx.r6.u64 + ctx.r10.u64;
	// bdnz 0x823c2a28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C2A28;
loc_823C2A4C:
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// bne 0x823c2a04
	if (!ctx.cr0.eq) goto loc_823C2A04;
loc_823C2A5C:
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x823c2220
	ctx.lr = 0x823C2A78;
	sub_823C2220(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eac
	return;
}

DEFINE_REX_FUNC(sub_823C4A70) {
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
	ctx.lr = 0x823C4A78;
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
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// blt cr6,0x823c4aa0
	if (ctx.cr6.lt) goto loc_823C4AA0;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
loc_823C4AA0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8220a098
	ctx.lr = 0x823C4AA8;
	sub_8220A098(ctx, base);
	// not r11,r3
	ctx.r11.u64 = ~ctx.r3.u64;
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823c4af4
	if (ctx.cr6.eq) goto loc_823C4AF4;
	// rlwinm r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c4af4
	if (ctx.cr6.eq) goto loc_823C4AF4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x823c4b1c
	if (!ctx.cr6.gt) goto loc_823C4B1C;
loc_823C4ACC:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823996f0
	ctx.lr = 0x823C4ADC;
	sub_823996F0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r31,r31,r28
	r31.u64 = r31.u64 + r28.u64;
	// add r30,r30,r26
	r30.u64 = r30.u64 + r26.u64;
	// bne 0x823c4acc
	if (!ctx.cr0.eq) goto loc_823C4ACC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_823C4AF4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x823c4b1c
	if (!ctx.cr6.gt) goto loc_823C4B1C;
loc_823C4AFC:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823999c0
	ctx.lr = 0x823C4B0C;
	sub_823999C0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r31,r31,r28
	r31.u64 = r31.u64 + r28.u64;
	// add r30,r30,r26
	r30.u64 = r30.u64 + r26.u64;
	// bne 0x823c4afc
	if (!ctx.cr0.eq) goto loc_823C4AFC;
loc_823C4B1C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_823C8878) {
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
	// bl 0x822d4e60
	ctx.lr = 0x823C8880;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r18,r8
	r18.u64 = ctx.r8.u64;
	// vspltish v4,3
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_set1_epi16(short(0x3)));
	// mr r19,r10
	r19.u64 = ctx.r10.u64;
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// addi r9,r11,-8608
	ctx.r9.s64 = ctx.r11.s64 + -8608;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v7,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,48
	ctx.r7.s64 = 48;
	// lvx128 v12,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r29,r1,112
	r29.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stvx128 v7,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,160
	r28.s64 = ctx.r1.s64 + 160;
	// lvx128 v11,r9,r7
	ea = (ctx.r9.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r24,r22,0,0,27
	r24.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xFFFFFFF0;
	// lvx128 v10,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stvx128 v13,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,16
	r30.s64 = 16;
	// stvx128 v12,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stvx128 v11,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r31,r5,r23
	r31.u64 = ctx.r5.u64 + r23.u64;
	// stvx128 v10,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,0
	ctx.r7.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x823c89cc
	if (!ctx.cr6.gt) goto loc_823C89CC;
	// addi r11,r24,-1
	ctx.r11.s64 = r24.s64 + -1;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823C8940:
	// lvrx128 v63,r6,r10
	temp.u32 = ctx.r6.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// vor128 v63,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvrx128 v61,r4,r8
	temp.u32 = ctx.r4.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v60,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm128 v9,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v63,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vmrghb v6,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v8,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v3,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v5,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v2,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v1,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v5,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v8,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v31,v1
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v25,v2,v3
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubshs v24,v28,v29
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vsubshs v23,v27,v30
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v22,v26,v24
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vaddshs v21,v25,v23
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vsrah v20,v22,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v19,v21,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v59,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// stvlx128 v59,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvrx128 v59,r9,r30
	ea = ctx.r9.u32 + r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v59.u8[i]);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bdnz 0x823c8940
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C8940;
loc_823C89CC:
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r22.s32, ctx.xer);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// bge cr6,0x823c8a24
	if (!ctx.cr6.lt) goto loc_823C8A24;
	// subf r9,r11,r22
	ctx.r9.u64 = r22.u64 - ctx.r11.u64;
	// addi r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823C89EC:
	// srawi r9,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 7;
	// clrlwi r6,r10,25
	ctx.r6.u64 = ctx.r10.u32 & 0x7F;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// subfic r4,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r4.u64 = static_cast<uint64_t>(128) - ctx.r6.u64;
	// lbzx r8,r9,r3
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// lbzx r9,r7,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r6,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 7;
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// stbx r4,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r4.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823c89ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C89EC;
loc_823C8A24:
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r23.s32, ctx.xer);
	// bge cr6,0x823c8a4c
	if (!ctx.cr6.lt) goto loc_823C8A4C;
	// subf r9,r11,r23
	ctx.r9.u64 = r23.u64 - ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823C8A34:
	// srawi r9,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 7;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// lbzx r8,r9,r3
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// stbx r8,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823c8a34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C8A34;
loc_823C8A4C:
	// add r28,r3,r21
	r28.u64 = ctx.r3.u64 + r21.u64;
	// li r20,0
	r20.s64 = 0;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// ble cr6,0x823c90a8
	if (!ctx.cr6.gt) goto loc_823C90A8;
	// addi r26,r28,1
	r26.s64 = r28.s64 + 1;
loc_823C8A60:
	// clrlwi r11,r20,30
	ctx.r11.u64 = r20.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x823c9098
	if (ctx.cr6.gt) goto loc_823C9098;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823c8abc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823C8ABC;
	// bdzf 4*cr6+eq,0x823c8cb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823C8CB4;
	// bne cr6,0x823c8e90
	if (!ctx.cr6.eq) goto loc_823C8E90;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823C8A90;
	sub_822D4FA0(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lvx128 v7,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x823c9098
	goto loc_823C9098;
loc_823C8ABC:
	// li r29,0
	r29.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x823c8bec
	if (!ctx.cr6.gt) goto loc_823C8BEC;
	// addi r11,r24,-1
	ctx.r11.s64 = r24.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r9,r11,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r7,r31,r27
	ctx.r7.u64 = r27.u64 - r31.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// subf r6,r31,r25
	ctx.r6.u64 = r25.u64 - r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823C8AF8:
	// lvrx128 v58,r30,r10
	temp.u32 = r30.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lvlx128 v57,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + ctx.r11.u64;
	// vor128 v63,v57,v58
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvlx128 v56,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lvlx128 v55,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v54,r30,r8
	temp.u32 = r30.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vperm128 v8,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v63,v55,v54
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// lvrx128 v53,r3,r5
	temp.u32 = ctx.r3.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v56,v53
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// vmrghb v5,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v3,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v1,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v4,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v31,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v0,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v9,1
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x1)));
	// vspltish v5,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x2)));
	// vslh v28,v4,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v0,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v0,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x3)));
	// vslh v25,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v24,v31,v1
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v23,v29,v30
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vsubshs v22,v26,v27
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vsubshs v21,v25,v28
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vslh v20,v3,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v2,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v18,v23,v22
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vaddshs v17,v24,v21
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vsrah v6,v18,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v8,v17,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v16,v6,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v8,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vpkshus128 v52,v8,v6
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vslh v14,v8,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v9,v6,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v8,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vaddshs v6,v9,v16
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvlx128 v52,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// stvrx128 v52,r11,r30
	ea = ctx.r11.u32 + r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v52.u8[i]);
	// vaddshs v5,v8,v19
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vaddshs v4,v6,v20
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vsrah v3,v5,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v2,v4,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v51,v3,v2
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// stvlx128 v51,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvrx128 v51,r4,r30
	ea = ctx.r4.u32 + r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v51.u8[i]);
	// bdnz 0x823c8af8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C8AF8;
loc_823C8BEC:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// cmpw cr6,r9,r22
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r22.s32, ctx.xer);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bge cr6,0x823c8c44
	if (!ctx.cr6.lt) goto loc_823C8C44;
	// subf r10,r9,r22
	ctx.r10.u64 = r22.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823C8C0C:
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// clrlwi r6,r11,25
	ctx.r6.u64 = ctx.r11.u32 & 0x7F;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// subfic r5,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r5.u64 = static_cast<uint64_t>(128) - ctx.r6.u64;
	// lbzx r4,r10,r28
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + r28.u32);
	// lbzx r3,r26,r10
	ctx.r3.u64 = REX_LOAD_U8(r26.u32 + ctx.r10.u32);
	// mullw r8,r4,r5
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// mullw r10,r3,r6
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// srawi r8,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 7;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// stbx r6,r9,r31
	REX_STORE_U8(ctx.r9.u32 + r31.u32, ctx.r6.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x823c8c0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C8C0C;
loc_823C8C44:
	// cmpw cr6,r9,r23
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r23.s32, ctx.xer);
	// bge cr6,0x823c8c6c
	if (!ctx.cr6.lt) goto loc_823C8C6C;
	// subf r10,r9,r23
	ctx.r10.u64 = r23.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823C8C54:
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// lbzx r8,r10,r28
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + r28.u32);
	// stbx r8,r9,r31
	REX_STORE_U8(ctx.r9.u32 + r31.u32, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x823c8c54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C8C54;
loc_823C8C6C:
	// cmpw cr6,r7,r23
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r23.s32, ctx.xer);
	// bge cr6,0x823c9084
	if (!ctx.cr6.lt) goto loc_823C9084;
	// subf r10,r7,r23
	ctx.r10.u64 = r23.u64 - ctx.r7.u64;
	// add r11,r7,r27
	ctx.r11.u64 = ctx.r7.u64 + r27.u64;
	// subf r7,r27,r31
	ctx.r7.u64 = r31.u64 - r27.u64;
	// subf r6,r27,r25
	ctx.r6.u64 = r25.u64 - r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823C8C88:
	// lbzx r10,r7,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stbx r8,r6,r11
	REX_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823c8c88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C8C88;
	// b 0x823c9084
	goto loc_823C9084;
loc_823C8CB4:
	// li r29,0
	r29.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x823c8dd0
	if (!ctx.cr6.gt) goto loc_823C8DD0;
	// addi r11,r24,-1
	ctx.r11.s64 = r24.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r9,r11,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r7,r31,r27
	ctx.r7.u64 = r27.u64 - r31.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// subf r6,r31,r25
	ctx.r6.u64 = r25.u64 - r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823C8CF0:
	// lvrx128 v50,r30,r10
	temp.u32 = r30.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lvlx128 v49,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// vor128 v63,v49,v50
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// lvlx128 v48,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// add r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lvlx128 v47,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v46,r30,r8
	temp.u32 = r30.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vperm128 v8,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v63,v47,v46
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// lvrx128 v45,r3,r5
	temp.u32 = ctx.r3.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v48,v45
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v5,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v3,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v1,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v4,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v31,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v0,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v9,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x2)));
	// vslh v28,v4,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v0,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v0,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x3)));
	// vslh v25,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v24,v31,v1
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v23,v29,v30
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vsubshs v22,v26,v27
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vsubshs v21,v25,v28
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vslh v20,v3,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v2,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v18,v23,v22
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vaddshs v17,v24,v21
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vsrah v6,v18,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v8,v17,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v16,v6,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v8,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vpkshus128 v44,v8,v6
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v14,v20,v16
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vaddshs v9,v19,v15
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vsrah v8,v14,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvlx128 v44,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v44.u8[15 - i]);
	// vsrah v6,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvrx128 v44,r11,r30
	ea = ctx.r11.u32 + r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v44.u8[i]);
	// vpkshus128 v43,v6,v8
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// stvlx128 v43,r11,r6
	ea = ctx.r11.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v43.u8[15 - i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvrx128 v43,r4,r30
	ea = ctx.r4.u32 + r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v43.u8[i]);
	// bdnz 0x823c8cf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C8CF0;
loc_823C8DD0:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// cmpw cr6,r9,r22
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r22.s32, ctx.xer);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bge cr6,0x823c8e28
	if (!ctx.cr6.lt) goto loc_823C8E28;
	// subf r10,r9,r22
	ctx.r10.u64 = r22.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823C8DF0:
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// clrlwi r6,r11,25
	ctx.r6.u64 = ctx.r11.u32 & 0x7F;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// subfic r5,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r5.u64 = static_cast<uint64_t>(128) - ctx.r6.u64;
	// lbzx r4,r10,r28
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + r28.u32);
	// lbzx r3,r26,r10
	ctx.r3.u64 = REX_LOAD_U8(r26.u32 + ctx.r10.u32);
	// mullw r8,r4,r5
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// mullw r10,r3,r6
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// srawi r8,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 7;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// stbx r6,r9,r31
	REX_STORE_U8(ctx.r9.u32 + r31.u32, ctx.r6.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x823c8df0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C8DF0;
loc_823C8E28:
	// cmpw cr6,r9,r23
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r23.s32, ctx.xer);
	// bge cr6,0x823c8e50
	if (!ctx.cr6.lt) goto loc_823C8E50;
	// subf r10,r9,r23
	ctx.r10.u64 = r23.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823C8E38:
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// lbzx r8,r10,r28
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + r28.u32);
	// stbx r8,r9,r31
	REX_STORE_U8(ctx.r9.u32 + r31.u32, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x823c8e38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C8E38;
loc_823C8E50:
	// cmpw cr6,r7,r23
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r23.s32, ctx.xer);
	// bge cr6,0x823c9084
	if (!ctx.cr6.lt) goto loc_823C9084;
	// subf r10,r7,r23
	ctx.r10.u64 = r23.u64 - ctx.r7.u64;
	// add r11,r7,r27
	ctx.r11.u64 = ctx.r7.u64 + r27.u64;
	// subf r8,r27,r31
	ctx.r8.u64 = r31.u64 - r27.u64;
	// subf r7,r27,r25
	ctx.r7.u64 = r25.u64 - r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823C8E6C:
	// lbzx r9,r8,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// stbx r6,r7,r11
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823c8e6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C8E6C;
	// b 0x823c9084
	goto loc_823C9084;
loc_823C8E90:
	// li r29,0
	r29.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x823c8fc0
	if (!ctx.cr6.gt) goto loc_823C8FC0;
	// addi r11,r24,-1
	ctx.r11.s64 = r24.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r9,r11,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r7,r31,r27
	ctx.r7.u64 = r27.u64 - r31.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// subf r6,r31,r25
	ctx.r6.u64 = r25.u64 - r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823C8ECC:
	// lvrx128 v42,r30,r10
	temp.u32 = r30.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lvlx128 v41,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// vor128 v63,v41,v42
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8)));
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lvlx128 v40,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lvlx128 v39,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v38,r30,r8
	temp.u32 = r30.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vperm128 v8,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v63,v39,v38
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// lvrx128 v37,r3,r5
	temp.u32 = ctx.r3.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v40,v37
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// vmrghb v4,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v2,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v3,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v1,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v31,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x1)));
	// vspltish v8,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x2)));
	// vslh v29,v3,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v6,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v3,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v25,v1,v2
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v24,v30,v31
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vsubshs v23,v27,v28
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vsubshs v22,v26,v29
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vslh v21,v9,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v9,3
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x3)));
	// vaddshs v19,v24,v23
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vaddshs v18,v25,v22
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vslh v17,v5,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v5,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v6,v19,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v8,v18,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v15,v21,v20
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vaddshs v14,v17,v16
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vslh v5,v6,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v8,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vpkshus128 v36,v8,v6
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v3,v15,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v2,v14,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsrah v1,v3,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvlx128 v36,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v36.u8[15 - i]);
	// vsrah v31,v2,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvrx128 v36,r11,r30
	ea = ctx.r11.u32 + r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v36.u8[i]);
	// vpkshus128 v35,v31,v1
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// stvlx128 v35,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v35.u8[15 - i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvrx128 v35,r4,r30
	ea = ctx.r4.u32 + r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v35.u8[i]);
	// bdnz 0x823c8ecc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C8ECC;
loc_823C8FC0:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// cmpw cr6,r9,r22
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r22.s32, ctx.xer);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bge cr6,0x823c9018
	if (!ctx.cr6.lt) goto loc_823C9018;
	// subf r10,r9,r22
	ctx.r10.u64 = r22.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823C8FE0:
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// clrlwi r6,r11,25
	ctx.r6.u64 = ctx.r11.u32 & 0x7F;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// subfic r5,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r5.u64 = static_cast<uint64_t>(128) - ctx.r6.u64;
	// lbzx r4,r10,r28
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + r28.u32);
	// lbzx r3,r26,r10
	ctx.r3.u64 = REX_LOAD_U8(r26.u32 + ctx.r10.u32);
	// mullw r8,r4,r5
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// mullw r10,r3,r6
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// srawi r8,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 7;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// stbx r6,r9,r31
	REX_STORE_U8(ctx.r9.u32 + r31.u32, ctx.r6.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x823c8fe0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C8FE0;
loc_823C9018:
	// cmpw cr6,r9,r23
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r23.s32, ctx.xer);
	// bge cr6,0x823c9040
	if (!ctx.cr6.lt) goto loc_823C9040;
	// subf r10,r9,r23
	ctx.r10.u64 = r23.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823C9028:
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// lbzx r8,r10,r28
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + r28.u32);
	// stbx r8,r9,r31
	REX_STORE_U8(ctx.r9.u32 + r31.u32, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x823c9028
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C9028;
loc_823C9040:
	// cmpw cr6,r7,r23
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r23.s32, ctx.xer);
	// bge cr6,0x823c9084
	if (!ctx.cr6.lt) goto loc_823C9084;
	// subf r10,r7,r23
	ctx.r10.u64 = r23.u64 - ctx.r7.u64;
	// add r11,r7,r31
	ctx.r11.u64 = ctx.r7.u64 + r31.u64;
	// subf r7,r31,r27
	ctx.r7.u64 = r27.u64 - r31.u64;
	// subf r6,r31,r25
	ctx.r6.u64 = r25.u64 - r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823C905C:
	// lbzx r10,r7,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stbx r8,r6,r11
	REX_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823c905c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C905C;
loc_823C9084:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// mr r31,r27
	r31.u64 = r27.u64;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// add r28,r28,r21
	r28.u64 = r28.u64 + r21.u64;
	// add r26,r26,r21
	r26.u64 = r26.u64 + r21.u64;
loc_823C9098:
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// add r25,r25,r18
	r25.u64 = r25.u64 + r18.u64;
	// cmpw cr6,r20,r19
	ctx.cr6.compare<int32_t>(r20.s32, r19.s32, ctx.xer);
	// blt cr6,0x823c8a60
	if (ctx.cr6.lt) goto loc_823C8A60;
loc_823C90A8:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_823FAEF0) {
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
	ctx.lr = 0x823FAEF8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,324(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 324);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r30,432(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 432);
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// addi r18,r11,-1
	r18.s64 = ctx.r11.s64 + -1;
loc_823FAF10:
	// lwz r11,148(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 148);
	// lwz r10,156(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 156);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823faf34
	if (ctx.cr6.lt) goto loc_823FAF34;
	// bne cr6,0x823faf58
	if (!ctx.cr6.eq) goto loc_823FAF58;
	// lwz r11,152(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 152);
	// lwz r10,160(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 160);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823faf58
	if (ctx.cr6.gt) goto loc_823FAF58;
loc_823FAF34:
	// lwz r11,440(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 440);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FAF48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823faf10
	if (!ctx.cr6.eq) goto loc_823FAF10;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eb0
	return;
loc_823FAF58:
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 36);
	// li r21,0
	r21.s64 = 0;
	// lwz r31,220(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823fb080
	if (!ctx.cr6.gt) goto loc_823FB080;
	// li r22,0
	r22.s64 = 0;
	// addi r20,r30,72
	r20.s64 = r30.s64 + 72;
loc_823FAF74:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823fb068
	if (ctx.cr6.eq) goto loc_823FB068;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,160(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 160);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// lwzx r4,r20,r22
	ctx.r4.u64 = REX_LOAD_U32(r20.u32 + r22.u32);
	// mullw r5,r9,r10
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r8,32(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823FAFAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,160(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 160);
	// cmplw cr6,r7,r18
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r18.u32, ctx.xer);
	// bge cr6,0x823fafc0
	if (!ctx.cr6.lt) goto loc_823FAFC0;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// b 0x823fafe0
	goto loc_823FAFE0;
loc_823FAFC0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r9,r10,r11
	ctx.r9.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf. r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823fafe0
	if (!ctx.cr0.eq) goto loc_823FAFE0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_823FAFE0:
	// lwz r11,452(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 452);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwzx r26,r22,r19
	r26.u64 = REX_LOAD_U32(r22.u32 + r19.u32);
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + r22.u64;
	// lwz r25,4(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ble cr6,0x823fb068
	if (!ctx.cr6.gt) goto loc_823FB068;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
loc_823FB004:
	// lwz r29,0(r24)
	r29.u64 = REX_LOAD_U32(r24.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823fb050
	if (ctx.cr6.eq) goto loc_823FB050;
loc_823FB018:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bctrl 
	ctx.lr = 0x823FB034;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,128
	r29.s64 = r29.s64 + 128;
	// add r28,r10,r28
	r28.u64 = ctx.r10.u64 + r28.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823fb018
	if (ctx.cr6.lt) goto loc_823FB018;
loc_823FB050:
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addic. r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r10,r26
	r26.u64 = ctx.r10.u64 + r26.u64;
	// bne 0x823fb004
	if (!ctx.cr0.eq) goto loc_823FB004;
loc_823FB068:
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 36);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// addi r31,r31,84
	r31.s64 = r31.s64 + 84;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(r21.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823faf74
	if (ctx.cr6.lt) goto loc_823FAF74;
loc_823FB080:
	// lwz r11,160(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 160);
	// lwz r10,324(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 324);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,160(r27)
	REX_STORE_U32(r27.u32 + 160, ctx.r11.u32);
	// subfe r11,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_82403448) {
	REX_FUNC_PROLOGUE();
	// lwz r11,80(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 80);
	// lhz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// lwz r10,328(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 328);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// lwz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mullw r11,r4,r8
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// srawi r11,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 3;
	// clrlwi r11,r11,22
	ctx.r11.u64 = ctx.r11.u32 & 0x3FF;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r9,128(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 128);
	// stbx r9,r6,r7
	REX_STORE_U8(ctx.r6.u32 + ctx.r7.u32, ctx.r9.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82404B08) {
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
	ctx.lr = 0x82404B10;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r9,300(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r31,292(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lwz r30,284(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r29,276(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r28,3
	r28.s64 = 3;
	// stw r9,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// li r27,0
	r27.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r28,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// bl 0x82404900
	ctx.lr = 0x82404B6C;
	sub_82404900(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82405090) {
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
	ctx.lr = 0x82405098;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r11,144(r1)
	REX_STORE_U16(ctx.r1.u32 + 144, ctx.r11.u16);
	// addi r3,r1,146
	ctx.r3.s64 = ctx.r1.s64 + 146;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// bl 0x822d5870
	ctx.lr = 0x824050D4;
	sub_822D5870(ctx, base);
	// cmplwi cr6,r29,24
	ctx.cr6.compare<uint32_t>(r29.u32, 24, ctx.xer);
	// li r5,24
	ctx.r5.s64 = 24;
	// bgt cr6,0x824050e4
	if (ctx.cr6.gt) goto loc_824050E4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_824050E4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822d4fa0
	ctx.lr = 0x824050F0;
	sub_822D4FA0(ctx, base);
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r7,148(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// not r9,r30
	ctx.r9.u64 = ~r30.u64;
	// rlwinm r8,r11,17,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x7;
	// rlwinm r10,r11,17,26,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x38;
	// rlwinm r6,r11,20,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r8,r11,23,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// rlwinm r6,r11,25,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x3;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r4,r11,27,30,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r3,r11,31,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x3;
	// rlwimi r5,r10,1,0,30
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r5.u64 & 0xFFFFFFFF00000001);
	// rlwinm r8,r11,29,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x3;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r7,22,10,31
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 22) & 0x3FFFFF;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// rlwinm r31,r7,23,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 23) & 0x1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r30
	r29.u64 = r30.u64;
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// rlwinm r4,r11,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r7,11,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 11) & 0xF;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r8,r7,29,26,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x3F;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r5,r7,30
	ctx.r5.u64 = ctx.r7.u32 & 0x3;
	// or r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 | ctx.r3.u64;
	// rlwinm r11,r7,13,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 13) & 0x2;
	// rlwinm r3,r6,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// or r10,r3,r31
	ctx.r10.u64 = ctx.r3.u64 | r31.u64;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// rlwimi r29,r10,2,0,29
	r29.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC) | (r29.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r7,12,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0x1;
	// rlwinm r3,r29,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 6) & 0xFFFFFFC0;
	// srawi r29,r4,26
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFFFF) != 0);
	r29.s64 = ctx.r4.s32 >> 26;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 | ctx.r8.u64;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x824051cc
	if (!ctx.cr6.eq) goto loc_824051CC;
	// lwz r5,152(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// rlwinm r3,r7,2,27,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x10;
	// rlwinm r4,r5,19,19,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 19) & 0x1FFF;
	// clrlwi r7,r5,19
	ctx.r7.u64 = ctx.r5.u32 & 0x1FFF;
	// rlwinm r5,r5,6,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0x3F;
	// ori r31,r3,3
	r31.u64 = ctx.r3.u64 | 3;
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// b 0x82405230
	goto loc_82405230;
loc_824051CC:
	// lwz r7,152(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// bne cr6,0x824051f8
	if (!ctx.cr6.eq) goto loc_824051F8;
	// clrlwi r4,r7,19
	ctx.r4.u64 = ctx.r7.u32 & 0x1FFF;
	// rlwinm r5,r7,19,19,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 19) & 0x1FFF;
	// rlwinm r7,r7,6,26,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0x3F;
	// add r3,r4,r11
	ctx.r3.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 + ctx.r11.u64;
	// li r31,18
	r31.s64 = 18;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// b 0x82405234
	goto loc_82405234;
loc_824051F8:
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// bne cr6,0x82405220
	if (!ctx.cr6.eq) goto loc_82405220;
	// clrlwi r4,r7,21
	ctx.r4.u64 = ctx.r7.u32 & 0x7FF;
	// rlwinm r5,r7,21,21,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 21) & 0x7FF;
	// rlwinm r7,r7,10,22,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 10) & 0x3FF;
	// add r3,r4,r11
	ctx.r3.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 + ctx.r11.u64;
	// li r31,17
	r31.s64 = 17;
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + ctx.r11.u64;
	// b 0x82405234
	goto loc_82405234;
loc_82405220:
	// li r31,20
	r31.s64 = 20;
	// li r4,1
	ctx.r4.s64 = 1;
	// clrlwi r7,r7,8
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFFFF;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82405230:
	// add r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 + ctx.r11.u64;
loc_82405234:
	// lwz r11,348(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r23,340(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// stw r28,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// stw r24,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r24.u32);
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r23,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r23.u32);
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// bl 0x82404900
	ctx.lr = 0x82405264;
	sub_82404900(ctx, base);
	// lwz r11,44(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 44);
	// rlwimi r30,r11,0,30,21
	r30.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFC03) | (r30.u64 & 0x3FC);
	// stw r30,44(r28)
	REX_STORE_U32(r28.u32 + 44, r30.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_8240EE38) {
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
	ctx.lr = 0x8240EE40;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 2;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// addze r28,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r28.s64 = temp.s64;
	// srawi r11,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 2;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r17,r9
	r17.u64 = ctx.r9.u64;
	// mr r16,r10
	r16.u64 = ctx.r10.u64;
	// li r24,0
	r24.s64 = 0;
	// addze. r27,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r27.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble 0x8240ef64
	if (!ctx.cr0.gt) goto loc_8240EF64;
	// subf r11,r28,r8
	ctx.r11.u64 = ctx.r8.u64 - r28.u64;
	// addi r18,r27,-1
	r18.s64 = r27.s64 + -1;
	// rlwinm r21,r11,4,0,27
	r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r26,0
	r26.s64 = 0;
	// rlwinm r20,r6,2,0,29
	r20.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
loc_8240EE84:
	// cmpw cr6,r24,r18
	ctx.cr6.compare<int32_t>(r24.s32, r18.s32, ctx.xer);
	// li r25,4
	r25.s64 = 4;
	// blt cr6,0x8240ee94
	if (ctx.cr6.lt) goto loc_8240EE94;
	// subfic r25,r16,4
	ctx.xer.ca = r16.u32 <= 4;
	r25.u64 = static_cast<uint64_t>(4) - r16.u64;
loc_8240EE94:
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x8240ef50
	if (!ctx.cr6.gt) goto loc_8240EF50;
	// addi r22,r28,-1
	r22.s64 = r28.s64 + -1;
loc_8240EEA4:
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
loc_8240EEB0:
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8240EEBC:
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r10,r10,r19
	ctx.r10.u64 = ctx.r10.u64 + r19.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f0,r6,r5
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r5.u32, temp.u32);
	// stfsx f13,r6,r4
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r4.u32, temp.u32);
	// bdnz 0x8240eebc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8240EEBC;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// add r8,r8,r23
	ctx.r8.u64 = ctx.r8.u64 + r23.u64;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// blt cr6,0x8240eeb0
	if (ctx.cr6.lt) goto loc_8240EEB0;
	// cmpw cr6,r29,r22
	ctx.cr6.compare<int32_t>(r29.s32, r22.s32, ctx.xer);
	// li r30,4
	r30.s64 = 4;
	// blt cr6,0x8240ef14
	if (ctx.cr6.lt) goto loc_8240EF14;
	// subfic r30,r17,4
	ctx.xer.ca = r17.u32 <= 4;
	r30.u64 = static_cast<uint64_t>(4) - r17.u64;
loc_8240EF14:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240eba8
	ctx.lr = 0x8240EF28;
	sub_8240EBA8(ctx, base);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240eba8
	ctx.lr = 0x8240EF40;
	sub_8240EBA8(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// blt cr6,0x8240eea4
	if (ctx.cr6.lt) goto loc_8240EEA4;
loc_8240EF50:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// add r31,r21,r31
	r31.u64 = r21.u64 + r31.u64;
	// add r26,r20,r26
	r26.u64 = r20.u64 + r26.u64;
	// cmpw cr6,r24,r27
	ctx.cr6.compare<int32_t>(r24.s32, r27.s32, ctx.xer);
	// blt cr6,0x8240ee84
	if (ctx.cr6.lt) goto loc_8240EE84;
loc_8240EF64:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x822d4ea8
	return;
}

DEFINE_REX_FUNC(sub_82412F10) {
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
	// stw r4,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82412e60
	ctx.lr = 0x82412F4C;
	sub_82412E60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82413A18) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82413a50
	if (ctx.cr6.eq) goto loc_82413A50;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82413a50
	if (ctx.cr6.eq) goto loc_82413A50;
	// stw r10,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
loc_82413A50:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82413a68
	if (!ctx.cr6.eq) goto loc_82413A68;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82413aa0
	if (ctx.cr6.eq) goto loc_82413AA0;
loc_82413A68:
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82413a84
	if (!ctx.cr6.gt) goto loc_82413A84;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82413A84:
	// bl 0x822c80d0
	ctx.lr = 0x82413A88;
	sub_822C80D0(ctx, base);
	// stw r3,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82413aa0
	if (!ctx.cr6.eq) goto loc_82413AA0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82413ac8
	goto loc_82413AC8;
loc_82413AA0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82413ac4
	if (ctx.cr6.eq) goto loc_82413AC4;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82413ac4
	if (ctx.cr6.eq) goto loc_82413AC4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_82413AC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82413AC8:
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

DEFINE_REX_FUNC(sub_82419020) {
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
	ctx.lr = 0x82419028;
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
	// beq cr6,0x8241905c
	if (ctx.cr6.eq) goto loc_8241905C;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82413040
	ctx.lr = 0x82419058;
	sub_82413040(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_8241905C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82419078
	if (ctx.cr6.eq) goto loc_82419078;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413dd0
	ctx.lr = 0x82419074;
	sub_82413DD0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_82419078:
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
	// bne 0x824190e0
	if (!ctx.cr0.eq) goto loc_824190E0;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x824190e8
	goto loc_824190E8;
loc_824190E0:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_824190E8:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82419100
	if (ctx.cr6.eq) goto loc_82419100;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc658
	ctx.lr = 0x82419100;
	sub_823DC658(ctx, base);
loc_82419100:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82419304
	if (!ctx.cr6.gt) goto loc_82419304;
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// rlwinm r27,r30,2,0,29
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
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
	// lis r29,-32254
	r29.s64 = -2113798144;
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
	// lfs f12,23268(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 23268);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,-6656(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + -6656);
	ctx.f7.f64 = double(temp.f32);
loc_82419160:
	// add r11,r10,r25
	ctx.r11.u64 = ctx.r10.u64 + r25.u64;
	// lfsx f0,r10,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
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
	// beq cr6,0x82419288
	if (ctx.cr6.eq) goto loc_82419288;
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
loc_82419288:
	// cmpwi cr6,r9,32767
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32767, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt cr6,0x82419298
	if (ctx.cr6.lt) goto loc_82419298;
	// li r11,32767
	ctx.r11.s64 = 32767;
loc_82419298:
	// cmpwi cr6,r11,-32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32767, ctx.xer);
	// ble cr6,0x824192b0
	if (!ctx.cr6.gt) goto loc_824192B0;
	// cmpwi cr6,r9,32767
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32767, ctx.xer);
	// blt cr6,0x824192b4
	if (ctx.cr6.lt) goto loc_824192B4;
	// li r9,32767
	ctx.r9.s64 = 32767;
	// b 0x824192b4
	goto loc_824192B4;
loc_824192B0:
	// li r9,-32767
	ctx.r9.s64 = -32767;
loc_824192B4:
	// cmpwi cr6,r5,32767
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 32767, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x824192c4
	if (ctx.cr6.lt) goto loc_824192C4;
	// li r11,32767
	ctx.r11.s64 = 32767;
loc_824192C4:
	// cmpwi cr6,r11,-32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32767, ctx.xer);
	// ble cr6,0x824192dc
	if (!ctx.cr6.gt) goto loc_824192DC;
	// cmpwi cr6,r5,32767
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 32767, ctx.xer);
	// blt cr6,0x824192e0
	if (ctx.cr6.lt) goto loc_824192E0;
	// li r5,32767
	ctx.r5.s64 = 32767;
	// b 0x824192e0
	goto loc_824192E0;
loc_824192DC:
	// li r5,-32767
	ctx.r5.s64 = -32767;
loc_824192E0:
	// rlwimi r9,r5,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stwux r9,r30,r27
	ea = r30.u32 + r27.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
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
	// blt cr6,0x82419160
	if (ctx.cr6.lt) goto loc_82419160;
loc_82419304:
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

DEFINE_REX_FUNC(sub_8241FC88) {
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
	ctx.lr = 0x8241FC90;
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
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8241fcd0
	if (!ctx.cr6.eq) goto loc_8241FCD0;
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
	// li r7,1991
	ctx.r7.s64 = 1991;
	// bl 0x8240e308
	ctx.lr = 0x8241FCD0;
	sub_8240E308(ctx, base);
loc_8241FCD0:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240e880
	ctx.lr = 0x8241FCE0;
	sub_8240E880(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240e880
	ctx.lr = 0x8241FCF4;
	sub_8240E880(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8241fd64
	if (!ctx.cr0.eq) goto loc_8241FD64;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// bne cr6,0x8241fd64
	if (!ctx.cr6.eq) goto loc_8241FD64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8241fd20
	if (ctx.cr6.eq) goto loc_8241FD20;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8240e930
	ctx.lr = 0x8241FD20;
	sub_8240E930(ctx, base);
loc_8241FD20:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8241fd5c
	if (ctx.cr6.eq) goto loc_8241FD5C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8241fd5c
	if (ctx.cr6.eq) goto loc_8241FD5C;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,11440
	ctx.r11.s64 = ctx.r11.s64 + 11440;
	// addi r4,r10,-18772
	ctx.r4.s64 = ctx.r10.s64 + -18772;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,45
	ctx.r6.s64 = 45;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,180(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// bctrl 
	ctx.lr = 0x8241FD5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8241FD5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8241fdc0
	goto loc_8241FDC0;
loc_8241FD64:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8241fd80
	if (ctx.cr6.eq) goto loc_8241FD80;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8240e930
	ctx.lr = 0x8241FD80;
	sub_8240E930(ctx, base);
loc_8241FD80:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8241fdbc
	if (ctx.cr6.eq) goto loc_8241FDBC;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8241fdbc
	if (ctx.cr6.eq) goto loc_8241FDBC;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,11440
	ctx.r11.s64 = ctx.r11.s64 + 11440;
	// addi r4,r10,-18772
	ctx.r4.s64 = ctx.r10.s64 + -18772;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,45
	ctx.r6.s64 = 45;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,180(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// bctrl 
	ctx.lr = 0x8241FDBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8241FDBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241FDC0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82422880) {
	REX_FUNC_PROLOGUE();
	// lbz r3,2144(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 2144);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82422CF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82422D00;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,12248
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 12248, ctx.xer);
	// bge cr6,0x82422d14
	if (!ctx.cr6.lt) goto loc_82422D14;
	// li r4,12248
	ctx.r4.s64 = 12248;
loc_82422D14:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r30,r4,8
	r30.s64 = ctx.r4.s64 + 8;
	// lwz r29,4(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,1440(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1440);
	// lwz r3,1444(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1444);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82422D34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82426A08) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82427018) {
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
	// stw r4,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82422880
	ctx.lr = 0x8242703C;
	sub_82422880(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8242708c
	if (ctx.cr0.eq) goto loc_8242708C;
	// li r31,0
	r31.s64 = 0;
loc_82427048:
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// lbzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82427078
	if (!ctx.cr0.eq) goto loc_82427078;
	// lwz r3,56(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 56);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82427078;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82427078:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// blt cr6,0x82427048
	if (ctx.cr6.lt) goto loc_82427048;
	// lwz r3,60(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 60);
	// b 0x82427090
	goto loc_82427090;
loc_8242708C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82427090:
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

DEFINE_REX_FUNC(sub_82428B00) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82428B08;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// bl 0x82426a08
	ctx.lr = 0x82428B20;
	sub_82426A08(ctx, base);
	// lwz r11,228(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82428b98
	if (ctx.cr0.eq) goto loc_82428B98;
	// lwz r11,952(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 952);
	// li r30,0
	r30.s64 = 0;
	// lwz r11,2736(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// lwz r31,96(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82428b98
	if (ctx.cr6.eq) goto loc_82428B98;
	// li r29,0
	r29.s64 = 0;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82428b60
	if (!ctx.cr6.lt) goto loc_82428B60;
loc_82428B54:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// b 0x82428b6c
	goto loc_82428B6C;
loc_82428B60:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82426a60
	ctx.lr = 0x82428B6C;
	sub_82426A60(ctx, base);
loc_82428B6C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x82428b84
	if (!ctx.cr6.eq) goto loc_82428B84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82426a28
	ctx.lr = 0x82428B84;
	sub_82426A28(ctx, base);
loc_82428B84:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82428b54
	if (ctx.cr6.lt) goto loc_82428B54;
loc_82428B98:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82429EA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82429EB0;
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
	// li r4,56
	ctx.r4.s64 = 56;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x82412d18
	ctx.lr = 0x82429ED0;
	sub_82412D18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// beq 0x82429ef4
	if (ctx.cr0.eq) goto loc_82429EF4;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82428400
	ctx.lr = 0x82429EF0;
	sub_82428400(ctx, base);
	// b 0x82429ef8
	goto loc_82429EF8;
loc_82429EF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82429EF8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8242C5A8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x824d438c
	__imp__RtlEnterCriticalSection(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8242C750) {
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
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8242c778
	if (!ctx.cr6.eq) goto loc_8242C778;
	// lis r31,-30570
	r31.s64 = -2003435520;
	// ori r31,r31,1
	r31.u64 = r31.u64 | 1;
	// b 0x8242c7d8
	goto loc_8242C7D8;
loc_8242C778:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r31,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,9660
	ctx.r10.s64 = ctx.r10.s64 + 9660;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
loc_8242C78C:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8242c7ac
	if (!ctx.cr0.eq) goto loc_8242C7AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8242c78c
	if (!ctx.cr6.eq) goto loc_8242C78C;
loc_8242C7AC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8242c7cc
	if (!ctx.cr0.eq) goto loc_8242C7CC;
	// stw r3,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242C7C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8242c7d8
	goto loc_8242C7D8;
loc_8242C7CC:
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x8242c618
	ctx.lr = 0x8242C7D4;
	sub_8242C618(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8242C7D8:
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

DEFINE_REX_FUNC(sub_8242E690) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8242E698;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r3,15400
	ctx.r3.s64 = ctx.r3.s64 + 15400;
	// bl 0x8242d868
	ctx.lr = 0x8242E6A8;
	sub_8242D868(ctx, base);
	// addi r11,r30,15400
	ctx.r11.s64 = r30.s64 + 15400;
	// li r29,63
	r29.s64 = 63;
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
loc_8242E6B4:
	// addi r31,r31,-240
	r31.s64 = r31.s64 + -240;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x8242d988
	ctx.lr = 0x8242E6C0;
	sub_8242D988(ctx, base);
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r11,-22768
	ctx.r6.s64 = ctx.r11.s64 + -22768;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e2380
	ctx.lr = 0x8242E6D8;
	sub_820E2380(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x8242e6b4
	if (!ctx.cr0.lt) goto loc_8242E6B4;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x8242c4b8
	ctx.lr = 0x8242E6E8;
	sub_8242C4B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82433318) {
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
	ctx.lr = 0x82433320;
	// li r9,6
	ctx.r9.s64 = 6;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r8,r1,-196
	ctx.r8.s64 = ctx.r1.s64 + -196;
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
	// lwz r27,20(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r26,32(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82433344:
	// lwzu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// stwu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82433344
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82433344;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824333c8
	if (!ctx.cr6.eq) goto loc_824333C8;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,-168(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// stfs f12,-164(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -164, temp.u32);
	// stfs f0,-144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// stfs f11,-160(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// stfs f0,-140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// stfs f10,-156(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -156, temp.u32);
	// stfs f0,-136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// stfs f9,-152(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -152, temp.u32);
	// stfs f0,-132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// stfs f8,-148(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -148, temp.u32);
	// stfs f0,-128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// stfs f0,-124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -124, temp.u32);
	// stfs f0,-120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// stfs f0,-116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -116, temp.u32);
	// stfs f0,-112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// stfs f0,-108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// stfs f0,-104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// stfs f0,-100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -100, temp.u32);
	// b 0x8243345c
	goto loc_8243345C;
loc_824333C8:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r5,6
	ctx.r5.s64 = 6;
	// lfs f12,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r1,-148
	ctx.r7.s64 = ctx.r1.s64 + -148;
	// fadds f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f9,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r9,-4
	ctx.r8.s64 = ctx.r9.s64 + -4;
	// lfs f6,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// lfs f4,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// lfs f3,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f6,f4
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// lfs f1,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f3,f1
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f1.f64));
	// lfs f12,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fadds f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f11,-168(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// stfs f8,-164(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -164, temp.u32);
	// stfs f5,-160(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// stfs f2,-156(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + -156, temp.u32);
	// stfs f13,-152(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -152, temp.u32);
	// stfs f10,-148(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -148, temp.u32);
loc_82433434:
	// lwzu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x82433434
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82433434;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r8,r1,-124
	ctx.r8.s64 = ctx.r1.s64 + -124;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82433450:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82433450
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82433450;
loc_8243345C:
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r1,-112
	ctx.r10.s64 = ctx.r1.s64 + -112;
	// addi r8,r1,-112
	ctx.r8.s64 = ctx.r1.s64 + -112;
	// addi r7,r1,-128
	ctx.r7.s64 = ctx.r1.s64 + -128;
	// addi r5,r1,-128
	ctx.r5.s64 = ctx.r1.s64 + -128;
	// addi r4,r1,-144
	ctx.r4.s64 = ctx.r1.s64 + -144;
	// addi r3,r1,-144
	ctx.r3.s64 = ctx.r1.s64 + -144;
	// lvrx128 v63,r9,r10
	temp.u32 = ctx.r9.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r10,r1,-160
	ctx.r10.s64 = ctx.r1.s64 + -160;
	// lvlx128 v62,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v60,r9,r7
	temp.u32 = ctx.r9.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r8,r1,-160
	ctx.r8.s64 = ctx.r1.s64 + -160;
	// lvlx128 v59,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r1,-176
	ctx.r7.s64 = ctx.r1.s64 + -176;
	// lvrx128 v57,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r5,r1,-176
	ctx.r5.s64 = ctx.r1.s64 + -176;
	// lvlx128 v56,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,-192
	ctx.r4.s64 = ctx.r1.s64 + -192;
	// addi r3,r1,-192
	ctx.r3.s64 = ctx.r1.s64 + -192;
	// lvrx128 v55,r9,r10
	temp.u32 = ctx.r9.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// rlwinm r10,r11,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// lvlx128 v54,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v53,r9,r7
	temp.u32 = ctx.r9.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r28,4
	r28.s64 = 4;
	// lvlx128 v52,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v61,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvrx128 v51,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v58,v59,v60
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// lvlx128 v50,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v57,v56,v57
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vor128 v12,v54,v55
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// vor128 v13,v52,v53
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// vor128 v0,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// beq cr6,0x82433574
	if (ctx.cr6.eq) goto loc_82433574;
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(r27.u32, 3, ctx.xer);
	// ble cr6,0x824336e0
	if (!ctx.cr6.gt) goto loc_824336E0;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
loc_824334F4:
	// lvehx v11,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v12,v12,v61
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v61.f32)));
	// lvsl v7,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// vperm v6,v11,v11,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vsplth v5,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_set1_epi16(short(0xF0E))));
	// vupkhsb128 v49,v5,v96
	simde_mm_store_si128((simde__m128i*)ctx.v49.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16))));
	// vcsxwfp128 v63,v49,15
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v49.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vor128 v48,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vmulfp128 v63,v63,v0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vaddfp128 v0,v0,v57
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v57.f32)));
	// vmulfp128 v62,v48,v13
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vaddfp128 v13,v13,v58
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v58.f32)));
	// beq cr6,0x82433544
	if (ctx.cr6.eq) goto loc_82433544;
	// lvlx128 v47,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v46,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v45,v47,v46
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// lvlx128 v44,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddfp128 v62,v62,v44
	simde_mm_store_ps(ctx.v62.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v44.f32)));
	// vaddfp128 v63,v63,v45
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v45.f32)));
loc_82433544:
	// vpermwi128 v43,v62,17
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xEE));
	// stvlx128 v63,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r11,r9
	ea = ctx.r11.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// rlwinm r8,r11,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stvewx128 v43,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r10,r28
	ea = (ctx.r10.u32 + r28.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// bne cr6,0x824334f4
	if (!ctx.cr6.eq) goto loc_824334F4;
loc_82433574:
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(r27.u32, 3, ctx.xer);
	// ble cr6,0x824336e0
	if (!ctx.cr6.gt) goto loc_824336E0;
	// rlwinm r29,r27,1,0,28
	r29.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFF8;
	// vaddfp128 v63,v61,v61
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v61.f32)));
	// clrlwi r27,r27,30
	r27.u64 = r27.u32 & 0x3;
	// vaddfp128 v62,v58,v58
	simde_mm_store_ps(ctx.v62.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v58.f32)));
	// li r7,0
	ctx.r7.s64 = 0;
	// vaddfp128 v61,v57,v57
	simde_mm_store_ps(ctx.v61.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v57.f32)));
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824336dc
	if (ctx.cr6.eq) goto loc_824336DC;
	// addi r10,r29,-1
	ctx.r10.s64 = r29.s64 + -1;
	// addi r30,r6,96
	r30.s64 = ctx.r6.s64 + 96;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r8,r11,864
	ctx.r8.s64 = ctx.r11.s64 + 864;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// li r31,32
	r31.s64 = 32;
	// li r3,48
	ctx.r3.s64 = 48;
	// li r4,64
	ctx.r4.s64 = 64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// li r5,80
	ctx.r5.s64 = 80;
loc_824335C8:
	// dcbt r30,r7
	// dcbt r0,r8
	// add r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lvlx128 v42,r7,r6
	temp.u32 = ctx.r7.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// lvlx128 v41,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v42,v41,4,3
	simde_mm_store_ps(ctx.v42.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v41.f32), 57), 4));
	// vupkhsb128 v40,v42,v96
	simde_mm_store_si128((simde__m128i*)ctx.v40.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v42.s16), simde_mm_load_si128((simde__m128i*)ctx.v42.s16))));
	// vcsxwfp128 v60,v40,15
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v40.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vor128 v59,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// vmrghw128 v11,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// vmrglw128 v10,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// beq cr6,0x82433670
	if (ctx.cr6.eq) goto loc_82433670;
	// vspltw128 v9,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// lvx128 v8,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v7,v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0x55));
	// lvx128 v6,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v5,v59,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x55));
	// lvx128 v3,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v4,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x55));
	// vmaddfp v9,v9,v0,v8
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// lvx128 v8,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v11,v11,v13,v8
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vmaddfp v8,v7,v12,v6
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// lvx128 v6,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v13,v13,v62
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v62.f32)));
	// lvx128 v7,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v0,v0,v61
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vaddfp128 v12,v12,v63
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v9,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v8,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v11,v10,v13,v6
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v9,v5,v0,v7
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v10,v4,v12,v3
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vaddfp128 v0,v0,v61
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vaddfp128 v13,v13,v62
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vaddfp128 v12,v12,v63
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v11,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v9,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v10,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x824336c8
	goto loc_824336C8;
loc_82433670:
	// vaddfp128 v39,v13,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v39.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vspltw128 v34,v59,2
	simde_mm_store_si128((simde__m128i*)ctx.v34.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x55));
	// vaddfp128 v37,v0,v61
	simde_mm_store_ps(ctx.v37.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vspltw128 v38,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v38.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// vaddfp128 v35,v12,v63
	simde_mm_store_ps(ctx.v35.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vspltw128 v36,v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v36.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0x55));
	// vspltw128 v33,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v33.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x55));
	// vmulfp128 v32,v11,v13
	simde_mm_store_ps(ctx.v32.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v60,v38,v0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v59,v36,v12
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v36.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v56,v10,v39
	simde_mm_store_ps(ctx.v56.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v39.f32)));
	// vmulfp128 v55,v34,v37
	simde_mm_store_ps(ctx.v55.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v34.f32), simde_mm_load_ps(ctx.v37.f32)));
	// vmulfp128 v54,v33,v35
	simde_mm_store_ps(ctx.v54.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v33.f32), simde_mm_load_ps(ctx.v35.f32)));
	// stvx128 v32,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v13,v39,v62
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v39.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vaddfp128 v0,v37,v61
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_load_ps(ctx.v61.f32)));
	// stvx128 v60,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v12,v35,v63
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v59,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v56,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v55,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v54,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_824336C8:
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// addi r8,r11,864
	ctx.r8.s64 = ctx.r11.s64 + 864;
	// bdnz 0x824335c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824335C8;
loc_824336DC:
	// add r6,r29,r6
	ctx.r6.u64 = r29.u64 + ctx.r6.u64;
loc_824336E0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8243375c
	if (ctx.cr6.eq) goto loc_8243375C;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
loc_824336EC:
	// lvehx v12,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// lvsl v7,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm v6,v12,v12,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vsplth v5,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_set1_epi16(short(0xF0E))));
	// vupkhsb128 v53,v5,v96
	simde_mm_store_si128((simde__m128i*)ctx.v53.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16))));
	// vcsxwfp128 v63,v53,15
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v53.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vor128 v52,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vmulfp128 v63,v63,v0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vaddfp128 v0,v0,v57
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v57.f32)));
	// vmulfp128 v62,v52,v13
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vaddfp128 v13,v13,v58
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v58.f32)));
	// beq cr6,0x82433738
	if (ctx.cr6.eq) goto loc_82433738;
	// lvlx128 v51,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v50,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v49,v51,v50
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// lvlx128 v48,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddfp128 v62,v62,v48
	simde_mm_store_ps(ctx.v62.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v48.f32)));
	// vaddfp128 v63,v63,v49
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v49.f32)));
loc_82433738:
	// vpermwi128 v47,v62,17
	simde_mm_store_si128((simde__m128i*)ctx.v47.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xEE));
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stvlx128 v63,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// stvrx128 v63,r11,r9
	ea = ctx.r11.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stvewx128 v47,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v47,r10,r28
	ea = (ctx.r10.u32 + r28.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// bdnz 0x824336ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824336EC;
loc_8243375C:
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82456270) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822d5870
	ctx.lr = 0x824562A0;
	sub_822D5870(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r3,r11,16
	ctx.r3.u64 = ctx.r11.u64 | 16;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r11,r10,20
	ctx.r11.u64 = ctx.r10.u64 | 20;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// ori r10,r9,24
	ctx.r10.u64 = ctx.r9.u64 | 24;
	// stwx r30,r31,r3
	REX_STORE_U32(r31.u32 + ctx.r3.u32, r30.u32);
	// ori r9,r8,28
	ctx.r9.u64 = ctx.r8.u64 | 28;
	// ori r8,r7,32
	ctx.r8.u64 = ctx.r7.u64 | 32;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stwx r30,r31,r11
	REX_STORE_U32(r31.u32 + ctx.r11.u32, r30.u32);
	// ori r7,r6,36
	ctx.r7.u64 = ctx.r6.u64 | 36;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stwx r30,r31,r10
	REX_STORE_U32(r31.u32 + ctx.r10.u32, r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfsx f31,r31,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + ctx.r9.u32, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,1996(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r31,r8
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + ctx.r8.u32, temp.u32);
	// stfsx f0,r31,r7
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + ctx.r7.u32, temp.u32);
	// stwx r6,r31,r4
	REX_STORE_U32(r31.u32 + ctx.r4.u32, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8245C3E0) {
	REX_FUNC_PROLOGUE();
	// li r11,13
	ctx.r11.s64 = 13;
	// divw r11,r4,r11
	ctx.r11.u64 = uint32_t((ctx.r11.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r4.s32 / ctx.r11.s32 : 0);
	// mulli r11,r11,13
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(13));
	// subf r11,r11,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r11.u64;
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
loc_8245C3FC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245c414
	if (ctx.cr6.eq) goto loc_8245C414;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8245c418
	goto loc_8245C418;
loc_8245C414:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8245C418:
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x8245c3fc
	if (!ctx.cr6.eq) goto loc_8245C3FC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8245CA08) {
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
	ctx.lr = 0x8245CA10;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r27,r3,100
	r27.s64 = ctx.r3.s64 + 100;
	// b 0x8245cb08
	goto loc_8245CB08;
loc_8245CA28:
	// lwz r11,632(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8245cb24
	if (!ctx.cr6.eq) goto loc_8245CB24;
	// lwz r11,616(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245ca50
	if (ctx.cr6.eq) goto loc_8245CA50;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,616(r31)
	REX_STORE_U32(r31.u32 + 616, ctx.r10.u32);
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8245ca54
	goto loc_8245CA54;
loc_8245CA50:
	// li r29,0
	r29.s64 = 0;
loc_8245CA54:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245CA68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r28,616(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 616);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8245caa0
	if (ctx.cr6.eq) goto loc_8245CAA0;
	// addic. r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8245caac
	if (ctx.cr0.eq) goto loc_8245CAAC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8245CA84:
	// lwz r11,616(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245ca98
	if (ctx.cr6.eq) goto loc_8245CA98;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,616(r31)
	REX_STORE_U32(r31.u32 + 616, ctx.r11.u32);
loc_8245CA98:
	// bdnz 0x8245ca84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8245CA84;
	// b 0x8245caac
	goto loc_8245CAAC;
loc_8245CAA0:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	r30.s64 = 0;
	// stw r11,632(r31)
	REX_STORE_U32(r31.u32 + 632, ctx.r11.u32);
loc_8245CAAC:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245CAC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8245cb04
	if (ctx.cr6.eq) goto loc_8245CB04;
loc_8245CAC8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245CAE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8245caf8
	if (ctx.cr6.eq) goto loc_8245CAF8;
	// lwz r28,4(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8245cafc
	goto loc_8245CAFC;
loc_8245CAF8:
	// li r29,0
	r29.s64 = 0;
loc_8245CAFC:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8245cac8
	if (!ctx.cr0.eq) goto loc_8245CAC8;
loc_8245CB04:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
loc_8245CB08:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245CB18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,616(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8245ca28
	if (!ctx.cr6.eq) goto loc_8245CA28;
loc_8245CB24:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245CB38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8245cb7c
	if (!ctx.cr6.gt) goto loc_8245CB7C;
	// addi r11,r31,624
	ctx.r11.s64 = r31.s64 + 624;
loc_8245CB48:
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
	// bne 0x8245cb48
	if (!ctx.cr0.eq) goto loc_8245CB48;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8245cb7c
	if (!ctx.cr6.eq) goto loc_8245CB7C;
	// lwz r3,612(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 612);
	// bl 0x823cdb60
	ctx.lr = 0x8245CB7C;
	sub_823CDB60(ctx, base);
loc_8245CB7C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8245FF00) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245FF30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8245f750
	ctx.lr = 0x8245FF40;
	sub_8245F750(ctx, base);
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
	ctx.lr = 0x8245FF5C;
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

DEFINE_REX_FUNC(sub_82460E60) {
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
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82460e90
	if (ctx.cr6.eq) goto loc_82460E90;
	// bl 0x82473600
	ctx.lr = 0x82460E8C;
	sub_82473600(ctx, base);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
loc_82460E90:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82460ea4
	if (ctx.cr6.eq) goto loc_82460EA4;
	// bl 0x82473600
	ctx.lr = 0x82460EA0;
	sub_82473600(ctx, base);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
loc_82460EA4:
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82460eb8
	if (ctx.cr6.eq) goto loc_82460EB8;
	// bl 0x82473600
	ctx.lr = 0x82460EB4;
	sub_82473600(ctx, base);
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
loc_82460EB8:
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

DEFINE_REX_FUNC(sub_82464300) {
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
	ctx.lr = 0x82464308;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,348(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824643dc
	if (ctx.cr6.eq) goto loc_824643DC;
	// lwz r11,244(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// li r27,0
	r27.s64 = 0;
	// mr r26,r27
	r26.u64 = r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824643c8
	if (!ctx.cr6.gt) goto loc_824643C8;
	// mr r29,r27
	r29.u64 = r27.u64;
loc_82464334:
	// lwz r11,348(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 348);
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824643b4
	if (ctx.cr6.eq) goto loc_824643B4;
	// lwz r11,244(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 244);
	// mr r28,r27
	r28.u64 = r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82464394
	if (!ctx.cr6.gt) goto loc_82464394;
	// mr r31,r27
	r31.u64 = r27.u64;
loc_82464358:
	// lwz r11,348(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 348);
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82464380
	if (ctx.cr6.eq) goto loc_82464380;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82460ee8
	ctx.lr = 0x82464374;
	sub_82460EE8(ctx, base);
	// lwz r11,348(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 348);
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// stwx r27,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, r27.u32);
loc_82464380:
	// lwz r11,244(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 244);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82464358
	if (ctx.cr6.lt) goto loc_82464358;
loc_82464394:
	// lwz r11,348(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 348);
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824643b4
	if (ctx.cr6.eq) goto loc_824643B4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82460ee8
	ctx.lr = 0x824643AC;
	sub_82460EE8(ctx, base);
	// lwz r11,348(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 348);
	// stwx r27,r29,r11
	REX_STORE_U32(r29.u32 + ctx.r11.u32, r27.u32);
loc_824643B4:
	// lwz r11,244(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 244);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82464334
	if (ctx.cr6.lt) goto loc_82464334;
loc_824643C8:
	// lwz r3,348(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 348);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824643dc
	if (ctx.cr6.eq) goto loc_824643DC;
	// bl 0x82460ee8
	ctx.lr = 0x824643D8;
	sub_82460EE8(ctx, base);
	// stw r27,348(r30)
	REX_STORE_U32(r30.u32 + 348, r27.u32);
loc_824643DC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82469360) {
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
	ctx.lr = 0x82469368;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,204(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// li r27,0
	r27.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82469470
	if (!ctx.cr6.eq) goto loc_82469470;
	// lwz r11,460(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824693a0
	if (ctx.cr6.eq) goto loc_824693A0;
	// lwz r28,328(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 328);
	// b 0x824693a4
	goto loc_824693A4;
loc_824693A0:
	// lwz r28,56(r23)
	r28.u64 = REX_LOAD_U32(r23.u32 + 56);
loc_824693A4:
	// lwz r10,584(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 584);
	// lwz r11,320(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 320);
	// lhz r9,202(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 202);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// lhz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r10,r6,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r4,118(r5)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + 118);
	// extsh r29,r4
	r29.s64 = ctx.r4.s16;
	// cmpw cr6,r8,r29
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r29.s32, ctx.xer);
	// bge cr6,0x82469818
	if (!ctx.cr6.lt) goto loc_82469818;
	// addi r31,r31,224
	r31.s64 = r31.s64 + 224;
	// li r22,1
	r22.s64 = 1;
loc_824693DC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r4,110(r30)
	ctx.r4.u64 = REX_LOAD_U16(r30.u32 + 110);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824658f8
	ctx.lr = 0x824693EC;
	sub_824658F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82469818
	if (ctx.cr6.lt) goto loc_82469818;
	// lhz r10,110(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 110);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// slw r10,r22,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r10.u8 & 0x3F));
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8246941c
	if (ctx.cr6.eq) goto loc_8246941C;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// orc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ~ctx.r10.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8246941C:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r10,202(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 202);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfsx f12,r7,r28
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + r28.u32, temp.u32);
	// lhz r6,202(r30)
	ctx.r6.u64 = REX_LOAD_U16(r30.u32 + 202);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// sth r4,202(r30)
	REX_STORE_U16(r30.u32 + 202, ctx.r4.u16);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// blt cr6,0x824693dc
	if (ctx.cr6.lt) goto loc_824693DC;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eb0
	return;
loc_82469470:
	// lwz r11,584(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 584);
	// lwz r10,320(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 320);
	// lbz r9,145(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 145);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// lhz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r11,r6,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r4,118(r5)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + 118);
	// extsh r25,r4
	r25.s64 = ctx.r4.s16;
	// bge cr6,0x82469818
	if (!ctx.cr6.lt) goto loc_82469818;
	// addi r24,r23,1456
	r24.s64 = r23.s64 + 1456;
	// li r22,1
	r22.s64 = 1;
	// li r18,7
	r18.s64 = 7;
	// li r20,10
	r20.s64 = 10;
	// li r19,3
	r19.s64 = 3;
	// li r21,6
	r21.s64 = 6;
loc_824694B8:
	// lwz r11,460(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r11,145(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 145);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// mullw r8,r9,r25
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r25.s32);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x824694dc
	if (ctx.cr6.eq) goto loc_824694DC;
	// lwz r10,328(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 328);
	// b 0x824694e0
	goto loc_824694E0;
loc_824694DC:
	// lwz r10,56(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 56);
loc_824694E0:
	// add r26,r11,r10
	r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82469504
	if (ctx.cr6.eq) goto loc_82469504;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x824695b0
	if (ctx.cr6.eq) goto loc_824695B0;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x824695e8
	if (ctx.cr6.eq) goto loc_824695E8;
	// b 0x82469770
	goto loc_82469770;
loc_82469504:
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824695ac
	if (!ctx.cr6.eq) goto loc_824695AC;
	// lwz r11,164(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824695ac
	if (!ctx.cr6.eq) goto loc_824695AC;
	// lhz r11,168(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 168);
	// lhz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 148);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x824695ac
	if (!ctx.cr6.lt) goto loc_824695AC;
	// addi r28,r31,224
	r28.s64 = r31.s64 + 224;
loc_82469538:
	// lhz r11,172(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 172);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r10,170(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 170);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r29,r9
	r29.s64 = ctx.r9.s16;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824658f8
	ctx.lr = 0x82469558;
	sub_824658F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82469818
	if (ctx.cr6.lt) goto loc_82469818;
	// lhz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 148);
	// subfic r11,r29,32
	ctx.xer.ca = r29.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - r29.u64;
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
	// stwx r5,r6,r24
	REX_STORE_U32(ctx.r6.u32 + r24.u32, ctx.r5.u32);
	// lhz r4,148(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 148);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,148(r31)
	REX_STORE_U16(r31.u32 + 148, ctx.r11.u16);
	// lhz r10,168(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 168);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82469538
	if (ctx.cr6.lt) goto loc_82469538;
loc_824695AC:
	// stw r18,72(r31)
	REX_STORE_U32(r31.u32 + 72, r18.u32);
loc_824695B0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x824658f8
	ctx.lr = 0x824695C0;
	sub_824658F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82469818
	if (ctx.cr6.lt) goto loc_82469818;
	// lhz r10,110(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 110);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82469810
	if (ctx.cr6.gt) goto loc_82469810;
	// stw r20,72(r31)
	REX_STORE_U32(r31.u32 + 72, r20.u32);
	// stw r27,80(r31)
	REX_STORE_U32(r31.u32 + 80, r27.u32);
	// sth r11,196(r31)
	REX_STORE_U16(r31.u32 + 196, ctx.r11.u16);
	// sth r27,202(r30)
	REX_STORE_U16(r30.u32 + 202, r27.u16);
loc_824695E8:
	// lwz r11,192(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82469694
	if (!ctx.cr6.eq) goto loc_82469694;
	// lhz r11,202(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 202);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82469694
	if (!ctx.cr6.eq) goto loc_82469694;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82469614
	if (ctx.cr6.lt) goto loc_82469614;
	// beq cr6,0x82469638
	if (ctx.cr6.eq) goto loc_82469638;
	// b 0x82469688
	goto loc_82469688;
loc_82469614:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x824658f8
	ctx.lr = 0x82469624;
	sub_824658F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82469818
	if (ctx.cr6.lt) goto loc_82469818;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r22,80(r31)
	REX_STORE_U32(r31.u32 + 80, r22.u32);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
loc_82469638:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r4,110(r30)
	ctx.r4.u64 = REX_LOAD_U16(r30.u32 + 110);
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x824658f8
	ctx.lr = 0x82469648;
	sub_824658F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82469818
	if (ctx.cr6.lt) goto loc_82469818;
	// lhz r11,110(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 110);
	// lwz r9,84(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// slw r10,r22,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r11.u8 & 0x3F));
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
	// beq cr6,0x82469684
	if (ctx.cr6.eq) goto loc_82469684;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// orc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ~ctx.r10.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82469684:
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
loc_82469688:
	// lhz r11,202(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 202);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,202(r30)
	REX_STORE_U16(r30.u32 + 202, ctx.r10.u16);
loc_82469694:
	// lhz r11,202(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 202);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r25.s32, ctx.xer);
	// bge cr6,0x82469770
	if (!ctx.cr6.lt) goto loc_82469770;
loc_824696A4:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824696bc
	if (ctx.cr6.eq) goto loc_824696BC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x824696f8
	if (ctx.cr6.eq) goto loc_824696F8;
	// b 0x8246971c
	goto loc_8246971C;
loc_824696BC:
	// addi r29,r31,224
	r29.s64 = r31.s64 + 224;
loc_824696C0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824658f8
	ctx.lr = 0x824696D0;
	sub_824658F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82469818
	if (ctx.cr6.lt) goto loc_82469818;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824696f4
	if (!ctx.cr6.eq) goto loc_824696F4;
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r11.u32);
	// b 0x824696c0
	goto loc_824696C0;
loc_824696F4:
	// stw r19,76(r31)
	REX_STORE_U32(r31.u32 + 76, r19.u32);
loc_824696F8:
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// lhz r4,196(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 196);
	// bl 0x824658f8
	ctx.lr = 0x8246970C;
	sub_824658F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82469818
	if (ctx.cr6.lt) goto loc_82469818;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r11.u32);
loc_8246971C:
	// lhz r11,202(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 202);
	// lwz r9,200(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 200);
	// lhz r8,196(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 196);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 208);
	// slw r11,r9,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r5,r6,r26
	REX_STORE_U32(ctx.r6.u32 + r26.u32, ctx.r5.u32);
	// stw r27,76(r31)
	REX_STORE_U32(r31.u32 + 76, r27.u32);
	// stw r27,200(r31)
	REX_STORE_U32(r31.u32 + 200, r27.u32);
	// stw r27,208(r31)
	REX_STORE_U32(r31.u32 + 208, r27.u32);
	// lhz r4,202(r30)
	ctx.r4.u64 = REX_LOAD_U16(r30.u32 + 202);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,202(r30)
	REX_STORE_U16(r30.u32 + 202, ctx.r10.u16);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r8,r25
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r25.s32, ctx.xer);
	// blt cr6,0x824696a4
	if (ctx.cr6.lt) goto loc_824696A4;
loc_82469770:
	// lwz r11,192(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 192);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r25.s32, ctx.xer);
	// bge cr6,0x824697cc
	if (!ctx.cr6.lt) goto loc_824697CC;
	// subf r10,r11,r25
	ctx.r10.u64 = r25.u64 - ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82469798:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824697bc
	if (ctx.cr6.eq) goto loc_824697BC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// neg r8,r9
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x824697c4
	goto loc_824697C4;
loc_824697BC:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_824697C4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82469798
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82469798;
loc_824697CC:
	// stw r21,72(r31)
	REX_STORE_U32(r31.u32 + 72, r21.u32);
	// sth r27,148(r31)
	REX_STORE_U16(r31.u32 + 148, r27.u16);
	// sth r27,202(r30)
	REX_STORE_U16(r30.u32 + 202, r27.u16);
	// stw r27,200(r31)
	REX_STORE_U32(r31.u32 + 200, r27.u32);
	// stw r27,76(r31)
	REX_STORE_U32(r31.u32 + 76, r27.u32);
	// stw r27,208(r31)
	REX_STORE_U32(r31.u32 + 208, r27.u32);
	// lbz r11,145(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 145);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stb r9,145(r31)
	REX_STORE_U8(r31.u32 + 145, ctx.r9.u8);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// blt cr6,0x824694b8
	if (ctx.cr6.lt) goto loc_824694B8;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eb0
	return;
loc_82469810:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
loc_82469818:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_8247CCC8) {
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
	ctx.lr = 0x8247CCD0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x822d5870
	ctx.lr = 0x8247CD00;
	sub_822D5870(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8247cd20
	if (!ctx.cr6.eq) goto loc_8247CD20;
loc_8247CD08:
	// bl 0x822db6c0
	ctx.lr = 0x8247CD0C;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x8247CD18;
	sub_822D6910(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8247cd88
	goto loc_8247CD88;
loc_8247CD20:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8247cd08
	if (ctx.cr6.eq) goto loc_8247CD08;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_8247CD2C:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8247cd2c
	if (!ctx.cr6.eq) goto loc_8247CD2C;
	// subf r10,r31,r11
	ctx.r10.u64 = ctx.r11.u64 - r31.u64;
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// li r9,73
	ctx.r9.s64 = 73;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8247cd70
	if (ctx.cr6.gt) goto loc_8247CD70;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8247CD70:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x8247CD88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8247CD88:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8247F4E8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8247f518
	if (!ctx.cr6.eq) goto loc_8247F518;
	// bl 0x822db6c0
	ctx.lr = 0x8247F504;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x8247F510;
	sub_822D6910(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x8247f620
	goto loc_8247F620;
loc_8247F518:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8247f538
	if (!ctx.cr6.eq) goto loc_8247F538;
loc_8247F520:
	// bl 0x822db6c0
	ctx.lr = 0x8247F524;
	sub_822DB6C0(ctx, base);
	// li r31,22
	r31.s64 = 22;
loc_8247F528:
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// bl 0x822d6910
	ctx.lr = 0x8247F530;
	sub_822D6910(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8247f620
	goto loc_8247F620;
loc_8247F538:
	// cntlzw r11,r7
	ctx.r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// li r31,0
	r31.s64 = 0;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r31,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, r31.u8);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8247f564
	if (ctx.cr6.gt) goto loc_8247F564;
loc_8247F558:
	// bl 0x822db6c0
	ctx.lr = 0x8247F55C;
	sub_822DB6C0(ctx, base);
	// li r31,34
	r31.s64 = 34;
	// b 0x8247f528
	goto loc_8247F528;
loc_8247F564:
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// blt cr6,0x8247f520
	if (ctx.cr6.lt) goto loc_8247F520;
	// cmplwi cr6,r6,36
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 36, ctx.xer);
	// bgt cr6,0x8247f520
	if (ctx.cr6.gt) goto loc_8247F520;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8247f598
	if (ctx.cr6.eq) goto loc_8247F598;
	// li r10,45
	ctx.r10.s64 = 45;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// stb r10,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// neg r3,r3
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r3.u64);
loc_8247F598:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_8247F59C:
	// divwu r10,r3,r6
	ctx.r10.u64 = uint32_t(ctx.r6.u32 ? ctx.r3.u32 / ctx.r6.u32 : 0);
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// subf r10,r10,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r10.u64;
	// divwu r3,r3,r6
	ctx.r3.u64 = uint32_t(ctx.r6.u32 ? ctx.r3.u32 / ctx.r6.u32 : 0);
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// ble cr6,0x8247f5c4
	if (!ctx.cr6.gt) goto loc_8247F5C4;
	// addi r10,r10,87
	ctx.r10.s64 = ctx.r10.s64 + 87;
	// b 0x8247f5c8
	goto loc_8247F5C8;
loc_8247F5C4:
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
loc_8247F5C8:
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247f5e4
	if (ctx.cr6.eq) goto loc_8247F5E4;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8247f59c
	if (ctx.cr6.lt) goto loc_8247F59C;
loc_8247F5E4:
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8247f5f4
	if (ctx.cr6.lt) goto loc_8247F5F4;
	// stb r31,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, r31.u8);
	// b 0x8247f558
	goto loc_8247F558;
loc_8247F5F4:
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r31.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8247F5FC:
	// lbz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r9,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8247f5fc
	if (ctx.cr6.lt) goto loc_8247F5FC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247F620:
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

DEFINE_REX_FUNC(sub_82490468) {
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
	// blt cr6,0x82490558
	if (ctx.cr6.lt) goto loc_82490558;
	// cmplwi cr6,r9,512
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 512, ctx.xer);
	// blt cr6,0x824904e4
	if (ctx.cr6.lt) goto loc_824904E4;
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
	// b 0x824904f4
	goto loc_824904F4;
loc_824904E4:
	// lwz r10,1476(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1476);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
loc_824904F4:
	// cmplwi cr6,r6,128
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 128, ctx.xer);
	// blt cr6,0x82490540
	if (ctx.cr6.lt) goto loc_82490540;
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
loc_82490540:
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
loc_82490558:
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

DEFINE_REX_FUNC(sub_824A3798) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r9,18(r5)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + 18);
	// srawi r10,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 16;
	// lhz r8,16(r5)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + 16);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lhz r6,50(r3)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + 50);
	// rlwinm r4,r10,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// lhz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 52);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r8,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r5,r6,2,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFF8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x824a37e0
	if (ctx.cr6.eq) goto loc_824A37E0;
	// rlwinm r11,r11,2,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFF8;
	// li r6,-9
	ctx.r6.s64 = -9;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// b 0x824a37e8
	goto loc_824A37E8;
loc_824A37E0:
	// li r6,-8
	ctx.r6.s64 = -8;
	// rlwinm r4,r11,2,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFF8;
loc_824A37E8:
	// cmpwi cr6,r3,16384
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16384, ctx.xer);
	// beq cr6,0x824a3864
	if (ctx.cr6.eq) goto loc_824A3864;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r11,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 2;
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// bge cr6,0x824a3820
	if (!ctx.cr6.lt) goto loc_824A3820;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r8,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r8.u64;
	// b 0x824a3834
	goto loc_824A3834;
loc_824A3820:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x824a3834
	if (!ctx.cr6.gt) goto loc_824A3834;
	// subf r11,r11,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_824A3834:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x824a3850
	if (!ctx.cr6.lt) goto loc_824A3850;
	// subf r11,r9,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwimi r3,r10,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// blr 
	return;
loc_824A3850:
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x824a3864
	if (!ctx.cr6.gt) goto loc_824A3864;
	// subf r11,r9,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_824A3864:
	// rlwimi r3,r10,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824A7160) {
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
	// vspltish v12,-1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// vspltisb v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_set1_epi8(char(0x0)));
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// vspltish v6,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x1)));
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// vspltish v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x2)));
	// vslh v31,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// vspltish v5,5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x5)));
	// vspltish v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x0)));
	// bne cr6,0x824a7218
	if (!ctx.cr6.eq) goto loc_824A7218;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x824a7300
	if (!ctx.cr6.gt) goto loc_824A7300;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,16
	ctx.r10.s64 = 16;
loc_824A71A8:
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v9,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v11,v13,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// vsldoi128 v10,v13,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// vsldoi128 v13,v13,v63,6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 10));
	// vsubshs v4,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vslh v3,v11,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
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
	// vadduhm v26,v30,v3
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
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
	// vadduhm v18,v20,v2
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v17,v18,v19
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vsrah v16,v17,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v16,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v8,v8,v16
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bdnz 0x824a71a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824A71A8;
	// b 0x824a7300
	goto loc_824A7300;
loc_824A7218:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x824a7300
	if (!ctx.cr6.gt) goto loc_824A7300;
	// li r8,-16
	ctx.r8.s64 = -16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r9,16
	ctx.r9.s64 = 16;
loc_824A7234:
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v3,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v62,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v30,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v10,v11,v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 14));
	// vsldoi128 v9,v13,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 14));
	// vsldoi v4,v11,v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 12));
	// vsubshs v29,v7,v3
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsldoi128 v3,v13,v62,4
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 12));
	// vsubshs v28,v7,v30
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vslh v27,v10,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v11,v11,v13,6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 10));
	// vslh v26,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v13,v13,v62,6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 10));
	// vslh v25,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v9,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
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
	// vslh v22,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v19,v26,v27
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v18,v25,v10
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v21,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
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
	// vadduhm v15,v23,v24
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vslh v17,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
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
	// vadduhm v14,v22,v9
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v9,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vadduhm v4,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vslh v10,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v30,v16,v17
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v27,v14,v15
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vslh v3,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v26,v11,v10
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vadduhm v25,v4,v9
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v23,v27,v30
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vsubshs v24,v13,v3
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vadduhm v22,v26,v28
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v21,v25,v2
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v19,v23,v2
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v20,v24,v29
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v18,v21,v22
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v17,v19,v20
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vsrah v16,v18,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v17,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v61,v8,v16
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// stvx128 v16,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v15,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// vor128 v8,v61,v15
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// bdnz 0x824a7234
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824A7234;
loc_824A7300:
	// vand v0,v8,v31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// vcmpgtuh. v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// mfocrf r11,2
	ctx.r11.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824AEF68) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e88
	ctx.lr = 0x824AEF70;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// li r9,1120
	ctx.r9.s64 = 1120;
	// vspltish v8,3
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x3)));
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// lwz r30,1164(r6)
	r30.u64 = REX_LOAD_U32(ctx.r6.u32 + 1164);
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v26,7
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_set1_epi16(short(0x7)));
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// vrlh v10,v12,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, result);
	}
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// li r31,1
	r31.s64 = 1;
	// lvx128 v11,r6,r9
	ea = (ctx.r6.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// vspltish v31,1
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_set1_epi16(short(0x1)));
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// vaddshs v1,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// li r28,-32
	r28.s64 = -32;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// li r29,-16
	r29.s64 = -16;
	// vsubshs v25,v10,v11
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vspltish v30,5
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_set1_epi16(short(0x5)));
	// slw r9,r31,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r8.u8 & 0x3F));
	// li r3,16
	ctx.r3.s64 = 16;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// bne cr6,0x824af118
	if (!ctx.cr6.eq) goto loc_824AF118;
	// lvx128 v60,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lvx128 v61,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v62,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v9,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v62,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v7,v58,v59,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrghb v5,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v4,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x824af2f8
	if (!ctx.cr6.gt) goto loc_824AF2F8;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_824AF03C:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vslh v6,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// vslh v3,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v11,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// vadduhm v22,v6,v11
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// lvx128 v57,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v29,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v28,v10,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v27,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// vperm128 v6,v56,v57,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vadduhm v21,v3,v10
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vor v5,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor v4,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vslh v20,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v9,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v7,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v11,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vmrghb v9,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v10,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vmrglb v7,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v29,v2
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v15,v27,v28
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v3,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v29,v17,v18
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vadduhm v2,v22,v16
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vadduhm v28,v21,v15
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vslh v14,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v6,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v27,v0,v24
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vadduhm v24,v2,v3
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vsubshs v21,v9,v14
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vsubshs v20,v7,v6
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubshs v23,v0,v23
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vadduhm v22,v28,v29
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v19,v24,v1
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v17,v21,v27
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v16,v20,v23
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v18,v22,v1
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v6,v19,v17
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v3,v18,v16
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vsrah v15,v6,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v14,v3,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v15,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v14,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// blt cr6,0x824af03c
	if (ctx.cr6.lt) goto loc_824AF03C;
	// b 0x824af2f8
	goto loc_824AF2F8;
loc_824AF118:
	// li r31,32
	r31.s64 = 32;
	// lvrx128 v52,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v50,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lvlx128 v55,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v54,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v53,r3,r10
	temp.u32 = ctx.r3.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v6,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// lvrx128 v51,r31,r11
	temp.u32 = r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvrx128 v49,r31,r10
	temp.u32 = r31.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v10,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvlx128 v48,r3,r10
	temp.u32 = ctx.r3.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v5,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vor128 v9,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v7,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r31,r11
	temp.u32 = r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v2,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v4,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v3,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v2,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x824af2f8
	if (!ctx.cr6.gt) goto loc_824AF2F8;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
loc_824AF19C:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v29,v11,v11
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor v11,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// vor v7,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vor v28,v10,v10
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v10,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// lvx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v41,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor v6,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v2,v11,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v42,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v24,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v3,v43,v63,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvsl v1,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v23,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v19,v63,v42,v1
	simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vslh v22,v10,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v18,v0,v3
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v20,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v24,v2
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmrghb v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v16,v7,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v14,v0,v19
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v17,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v2,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)v18.u8));
	// vadduhm v18,v21,v22
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v24,v23,v11
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vor v27,v9,v9
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v9,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vadduhm v22,v20,v10
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v23,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v6,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v16,v17
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v16,v24,v15
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vslh v21,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v19,v23
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v29,v22,v18
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vslh v24,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v9,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v5,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vslh v23,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v4,v14,v14
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)v14.u8));
	// vadduhm v15,v29,v15
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vadduhm v28,v24,v28
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vor128 v1,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// vadduhm v24,v23,v9
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v14,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v5,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v16,v17
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vsubshs v18,v0,v21
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vsubshs v23,v3,v22
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vsubshs v16,v0,v20
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vsubshs v22,v2,v19
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vadduhm v20,v15,v1
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v15,v29,v14
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vadduhm v21,v17,v1
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v14,v24,v28
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v29,v23,v18
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vadduhm v28,v22,v16
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vslh v19,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v21,v29
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v21,v20,v28
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vsubshs v27,v0,v19
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vsubshs v24,v4,v17
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vadduhm v23,v14,v15
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vsrah v18,v22,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v21,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v20,v24,v27
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v19,v23,v1
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// stvx128 v18,r10,r28
	ea = (ctx.r10.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r10,r29
	ea = (ctx.r10.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v16,v19,v20
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vsrah v15,v16,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// stvx128 v15,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// blt cr6,0x824af19c
	if (ctx.cr6.lt) goto loc_824AF19C;
loc_824AF2F8:
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// li r11,0
	ctx.r11.s64 = 0;
	// vspltish v12,-1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// vspltish v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x0)));
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// vslh v9,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// bne cr6,0x824af380
	if (!ctx.cr6.eq) goto loc_824AF380;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824af41c
	if (!ctx.cr6.gt) goto loc_824AF41C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_824AF32C:
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v40,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v12,v13,v40,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 12));
	// vsldoi128 v10,v13,v40,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 14));
	// vsldoi128 v7,v13,v40,6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 10));
	// vadduhm v12,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v6,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vslh v5,v12,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v4,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vadduhm v3,v12,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v2,v3,v25
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v1,v2,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vsrah v31,v1,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v39,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vor v11,v11,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// stvewx128 v39,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v39,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x824af32c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AF32C;
	// b 0x824af41c
	goto loc_824AF41C;
loc_824AF380:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824af41c
	if (!ctx.cr6.gt) goto loc_824AF41C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
loc_824AF398:
	// lvx128 v13,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v10,v13,v38,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 12));
	// vsldoi128 v7,v13,v38,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 14));
	// vsldoi128 v6,v13,v38,6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 10));
	// vsldoi v5,v12,v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 12));
	// vsldoi v4,v12,v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 14));
	// vadduhm v3,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsldoi v2,v12,v13,6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 10));
	// vadduhm v1,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v10,v4,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vor v13,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vadduhm v31,v12,v2
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsubshs v30,v0,v1
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v10,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v13,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v27,v0,v31
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vadduhm v24,v10,v29
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v23,v13,v28
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v22,v24,v25
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v21,v23,v25
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v12,v22,v27
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v20,v21,v30
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vsrah v19,v12,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v20,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v37,v11,v19
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)v19.u8)));
	// vpkshus128 v36,v19,v18
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vor128 v11,v37,v18
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)v18.u8)));
	// stvx128 v36,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x824af398
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AF398;
loc_824AF41C:
	// vand v13,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// vcmpgtuh. v12,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), 0xFFFF);
	// mfocrf r11,2
	ctx.r11.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x822d4ed8
	return;
}

