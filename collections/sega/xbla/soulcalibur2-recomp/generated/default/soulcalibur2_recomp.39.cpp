#include "soulcalibur2_funcs.39.h"

DEFINE_REX_FUNC(sub_820E1BF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E6D50) {
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
	ctx.lr = 0x820E6D58;
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
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
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8480(r1)
	ea = -8480 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,8516(r1)
	REX_STORE_U32(ctx.r1.u32 + 8516, ctx.r5.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,8520
	ctx.r10.s64 = ctx.r1.s64 + 8520;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822d5598
	ctx.lr = 0x820E6DA8;
	sub_822D5598(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x820e6998
	ctx.lr = 0x820E6DB4;
	sub_820E6998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x820e6e0c
	if (!ctx.cr0.gt) goto loc_820E6E0C;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r28,-32177
	r28.s64 = -2108751872;
	// addi r29,r11,15980
	r29.s64 = ctx.r11.s64 + 15980;
loc_820E6DD4:
	// stfd f31,32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 32, f31.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f30,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f30.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821eacb0
	ctx.lr = 0x820E6DF4;
	sub_821EACB0(ctx, base);
	// lwzu r3,4(r30)
	ea = 4 + r30.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// bl 0x821eacb0
	ctx.lr = 0x820E6DFC;
	sub_821EACB0(ctx, base);
	// lfs f0,-700(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + -700);
	ctx.f0.f64 = double(temp.f32);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// fadds f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 + f31.f64));
	// bne 0x820e6dd4
	if (!ctx.cr0.eq) goto loc_820E6DD4;
loc_820E6E0C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r1,r1,8480
	ctx.r1.s64 = ctx.r1.s64 + 8480;
	// lfd f30,-56(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_820ED380) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r10,-28276
	ctx.r8.s64 = ctx.r10.s64 + -28276;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-28276(r10)
	REX_STORE_U32(ctx.r10.u32 + -28276, ctx.r11.u32);
	// lfs f0,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820EE048) {
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
	ctx.lr = 0x820EE050;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f20
	ctx.lr = 0x820EE058;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lwz r4,32(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r11,-28232
	ctx.r3.s64 = ctx.r11.s64 + -28232;
	// bl 0x82202540
	ctx.lr = 0x820EE070;
	sub_82202540(ctx, base);
	// lwz r11,380(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 380);
	// lfs f1,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// fctiwz f0,f1
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820ee09c
	if (ctx.cr6.lt) goto loc_820EE09C;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_820EE09C:
	// lwz r11,372(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 372);
	// mulli r9,r9,28
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(28));
	// mulli r10,r10,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(28));
	// add r31,r9,r11
	r31.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r31,32
	ctx.r11.s64 = r31.s64 + 32;
	// bl 0x820fefc8
	ctx.lr = 0x820EE0B8;
	sub_820FEFC8(ctx, base);
	// lfs f10,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f5,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f31,f5,f10
	f31.f64 = double(float(ctx.f5.f64 - ctx.f10.f64));
	// lfs f9,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// lfs f4,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f4.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fsubs f29,f4,f9
	f29.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// lfs f8,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,2388(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2388);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// lfs f11,44(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f26,f2,f8
	f26.f64 = double(float(ctx.f2.f64 - ctx.f8.f64));
	// lfs f3,44(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f28,f3,f11
	f28.f64 = double(float(ctx.f3.f64 - ctx.f11.f64));
	// lfs f12,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,36(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f13,f12,f1
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// lfs f6,40(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f27,f31,f0
	f27.f64 = double(float(f31.f64 * ctx.f0.f64));
	// lfs f31,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	f31.f64 = double(temp.f32);
	// lfs f30,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	f30.f64 = double(temp.f32);
	// fmuls f25,f29,f0
	f25.f64 = double(float(f29.f64 * ctx.f0.f64));
	// lfs f1,16836(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16836);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f29,f31,f7
	f29.f64 = double(float(f31.f64 - ctx.f7.f64));
	// fsubs f24,f30,f6
	f24.f64 = double(float(f30.f64 - ctx.f6.f64));
	// fmuls f23,f28,f0
	f23.f64 = double(float(f28.f64 * ctx.f0.f64));
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmuls f22,f27,f27
	f22.f64 = double(float(f27.f64 * f27.f64));
	// fmuls f27,f26,f0
	f27.f64 = double(float(f26.f64 * ctx.f0.f64));
	// fmuls f29,f29,f0
	f29.f64 = double(float(f29.f64 * ctx.f0.f64));
	// fmuls f28,f24,f0
	f28.f64 = double(float(f24.f64 * ctx.f0.f64));
	// fmadds f26,f25,f25,f22
	f26.f64 = double(float(std::fma(f25.f64, f25.f64, f22.f64)));
	// fmadds f26,f23,f23,f26
	f26.f64 = double(float(std::fma(f23.f64, f23.f64, f26.f64)));
	// fsqrts f26,f26
	f26.f64 = double(float(sqrt(f26.f64)));
	// fcmpu cr6,f26,f1
	ctx.cr6.compare(f26.f64, ctx.f1.f64);
	// bgt cr6,0x820ee168
	if (ctx.cr6.gt) goto loc_820EE168;
	// fmuls f29,f29,f29
	f29.f64 = double(float(f29.f64 * f29.f64));
	// fmadds f29,f28,f28,f29
	f29.f64 = double(float(std::fma(f28.f64, f28.f64, f29.f64)));
	// fmadds f29,f27,f27,f29
	f29.f64 = double(float(std::fma(f27.f64, f27.f64, f29.f64)));
	// fsqrts f29,f29
	f29.f64 = double(float(sqrt(f29.f64)));
	// fcmpu cr6,f29,f1
	ctx.cr6.compare(f29.f64, ctx.f1.f64);
	// ble cr6,0x820ee180
	if (!ctx.cr6.gt) goto loc_820EE180;
loc_820EE168:
	// fmr f11,f3
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f3.f64;
	// fmr f10,f5
	ctx.f10.f64 = ctx.f5.f64;
	// fmr f9,f4
	ctx.f9.f64 = ctx.f4.f64;
	// fmr f8,f2
	ctx.f8.f64 = ctx.f2.f64;
	// fmr f7,f31
	ctx.f7.f64 = f31.f64;
	// fmr f6,f30
	ctx.f6.f64 = f30.f64;
loc_820EE180:
	// fmuls f11,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmadds f11,f3,f12,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f3.f64, ctx.f12.f64, ctx.f11.f64)));
	// fmadds f10,f5,f12,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f5.f64, ctx.f12.f64, ctx.f10.f64)));
	// fmadds f9,f4,f12,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f4.f64, ctx.f12.f64, ctx.f9.f64)));
	// fmadds f8,f2,f12,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f2.f64, ctx.f12.f64, ctx.f8.f64)));
	// fmadds f7,f31,f12,f7
	ctx.f7.f64 = double(float(std::fma(f31.f64, ctx.f12.f64, ctx.f7.f64)));
	// fmadds f13,f30,f12,f13
	ctx.f13.f64 = double(float(std::fma(f30.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f12,412(r28)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r28.u32 + 412, temp.u32);
	// fmuls f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f12,416(r28)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r28.u32 + 416, temp.u32);
	// fmuls f12,f9,f0
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f12,420(r28)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r28.u32 + 420, temp.u32);
	// fmuls f12,f8,f0
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f12,428(r28)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r28.u32 + 428, temp.u32);
	// fmuls f12,f7,f0
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f12,432(r28)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r28.u32 + 432, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,436(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 436, temp.u32);
	// lfs f0,56(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,460(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 460, temp.u32);
	// lwz r10,380(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 380);
	// stw r10,444(r28)
	REX_STORE_U32(r28.u32 + 444, ctx.r10.u32);
	// lwz r10,40(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 40);
	// stw r10,456(r28)
	REX_STORE_U32(r28.u32 + 456, ctx.r10.u32);
	// lfs f0,60(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,464(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 464, temp.u32);
	// lfs f0,64(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,468(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 468, temp.u32);
	// lfs f0,68(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,472(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 472, temp.u32);
	// lfs f0,48(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,484(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 484, temp.u32);
	// lfs f0,76(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,496(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 496, temp.u32);
	// lfs f0,84(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,452(r28)
	REX_STORE_U32(r28.u32 + 452, ctx.r11.u32);
	// stfs f0,504(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 504, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f6c
	ctx.lr = 0x820EE23C;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_820FCC40) {
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
	// lwz r4,24(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,19
	ctx.r5.s64 = 19;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FCC6C;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x820fcc80
	if (ctx.cr0.eq) goto loc_820FCC80;
	// li r5,64
	ctx.r5.s64 = 64;
	// b 0x820fccb0
	goto loc_820FCCB0;
loc_820FCC80:
	// li r5,18
	ctx.r5.s64 = 18;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x820f8db8
	ctx.lr = 0x820FCC8C;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne 0x820fccac
	if (!ctx.cr0.eq) goto loc_820FCCAC;
	// li r5,21
	ctx.r5.s64 = 21;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x820f8db8
	ctx.lr = 0x820FCCA4;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_820FCCAC:
	// li r5,4160
	ctx.r5.s64 = 4160;
loc_820FCCB0:
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x820f8d58
	ctx.lr = 0x820FCCB8;
	sub_820F8D58(ctx, base);
	// li r5,7
	ctx.r5.s64 = 7;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FCCC8;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820fcce0
	if (ctx.cr0.eq) goto loc_820FCCE0;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FCCE0;
	sub_820F8D58(ctx, base);
loc_820FCCE0:
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

DEFINE_REX_FUNC(sub_820FF348) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f3,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82204ae0
	ctx.lr = 0x820FF370;
	sub_82204AE0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// lfs f0,2028(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2028);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 108, temp.u32);
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

DEFINE_REX_FUNC(sub_82100838) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r11,26532
	ctx.r3.s64 = ctx.r11.s64 + 26532;
	// bl 0x821eacb0
	ctx.lr = 0x82100860;
	sub_821EACB0(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x82100874;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r30,r11,21804
	r30.s64 = ctx.r11.s64 + 21804;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eb1a0
	ctx.lr = 0x82100890;
	sub_821EB1A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// addi r10,r10,32104
	ctx.r10.s64 = ctx.r10.s64 + 32104;
	// lfs f31,16200(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16200);
	f31.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// bl 0x820e68b8
	ctx.lr = 0x821008BC;
	sub_820E68B8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eb1a0
	ctx.lr = 0x821008D0;
	sub_821EB1A0(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// lis r8,-32177
	ctx.r8.s64 = -2108751872;
	// lis r7,-32177
	ctx.r7.s64 = -2108751872;
	// lis r6,-32177
	ctx.r6.s64 = -2108751872;
	// addi r11,r11,10704
	ctx.r11.s64 = ctx.r11.s64 + 10704;
	// addi r10,r10,11024
	ctx.r10.s64 = ctx.r10.s64 + 11024;
	// addi r9,r9,11216
	ctx.r9.s64 = ctx.r9.s64 + 11216;
	// addi r8,r8,12392
	ctx.r8.s64 = ctx.r8.s64 + 12392;
	// addi r7,r7,12056
	ctx.r7.s64 = ctx.r7.s64 + 12056;
	// addi r6,r6,11544
	ctx.r6.s64 = ctx.r6.s64 + 11544;
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// stfs f0,20(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f0,20(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// stfs f0,20(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// stfs f0,20(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

DEFINE_REX_FUNC(sub_82107640) {
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
	ctx.lr = 0x82107654;
	sub_82106650(ctx, base);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r11,17
	ctx.r11.s64 = 17;
	// addi r31,r10,22960
	r31.s64 = ctx.r10.s64 + 22960;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// bl 0x82106c48
	ctx.lr = 0x82107670;
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
	ctx.lr = 0x82107684;
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

DEFINE_REX_FUNC(sub_82109328) {
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
	ctx.lr = 0x82109330;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r11,476(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// stfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,468(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stfs f4,108(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f5,112(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r14,4(r11)
	r14.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r15,0(r11)
	r15.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f7,124(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r19,0(r10)
	r19.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// lwz r17,4(r10)
	r17.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r16,8(r10)
	r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r31,12(r9)
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r29,4(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// mr r27,r31
	r27.u64 = r31.u64;
	// lwz r28,8(r9)
	r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// stw r31,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, r31.u32);
	// mr r25,r29
	r25.u64 = r29.u64;
	// stw r7,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// mr r24,r28
	r24.u64 = r28.u64;
	// stw r7,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// lwz r18,84(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r23,r31
	r23.u64 = r31.u64;
	// stw r14,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r14.u32);
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// lwz r14,8(r11)
	r14.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r21,r29
	r21.u64 = r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r20,r28
	r20.u64 = r28.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r14,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r14.u32);
	// lwz r14,80(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// lwz r8,484(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// stw r14,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, r14.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r7,0(r18)
	REX_STORE_U32(r18.u32 + 0, ctx.r7.u32);
	// stw r29,4(r18)
	REX_STORE_U32(r18.u32 + 4, r29.u32);
	// stw r28,8(r18)
	REX_STORE_U32(r18.u32 + 8, r28.u32);
	// stw r31,12(r18)
	REX_STORE_U32(r18.u32 + 12, r31.u32);
	// stw r29,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, r29.u32);
	// stw r28,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, r28.u32);
	// stw r31,12(r5)
	REX_STORE_U32(ctx.r5.u32 + 12, r31.u32);
	// stw r7,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r29,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, r29.u32);
	// stw r28,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, r28.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r31,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, r31.u32);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r19,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r19.u32);
	// stw r17,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r17.u32);
	// stw r16,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r16.u32);
	// stw r15,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r15.u32);
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// stw r11,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// bne cr6,0x8210949c
	if (!ctx.cr6.eq) goto loc_8210949C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// b 0x821094a0
	goto loc_821094A0;
loc_8210949C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821094A0:
	// clrldi r4,r11,32
	ctx.r4.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r5,484(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821f7548
	ctx.lr = 0x821094B0;
	sub_821F7548(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_82111C90) {
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
	ctx.lr = 0x82111C98;
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
	// bl 0x82110640
	ctx.lr = 0x82111CAC;
	sub_82110640(ctx, base);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r10,r10,31920
	ctx.r10.s64 = ctx.r10.s64 + 31920;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r26,r11,432
	r26.s64 = ctx.r11.s64 + 432;
	// lfs f31,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lwz r11,36(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82111d8c
	if (ctx.cr6.eq) goto loc_82111D8C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f0,16232(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16232);
	ctx.f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f5,26632(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26632);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,16036(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16036);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,27844(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 27844);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,29524(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 29524);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x821e86d8
	ctx.lr = 0x82111D18;
	sub_821E86D8(ctx, base);
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// lwz r4,344(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 344);
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// bl 0x820e68b8
	ctx.lr = 0x82111D28;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,29516
	ctx.r5.s64 = ctx.r11.s64 + 29516;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eb1a0
	ctx.lr = 0x82111D40;
	sub_821EB1A0(ctx, base);
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// lwz r4,344(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 344);
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// bl 0x820e68b8
	ctx.lr = 0x82111D50;
	sub_820E68B8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r3,r9,29504
	ctx.r3.s64 = ctx.r9.s64 + 29504;
	// lfs f0,26792(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26792);
	ctx.f0.f64 = double(temp.f32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfd f2,27816(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + 27816);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x82111D8C;
	sub_821EACB0(ctx, base);
loc_82111D8C:
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// li r27,0
	r27.s64 = 0;
	// li r25,1
	r25.s64 = 1;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82111dac
	if (ctx.cr6.eq) goto loc_82111DAC;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
loc_82111DAC:
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82111dc0
	if (!ctx.cr6.lt) goto loc_82111DC0;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
loc_82111DC0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f30,29500(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 29500);
	f30.f64 = double(temp.f32);
	// addi r30,r11,-16948
	r30.s64 = ctx.r11.s64 + -16948;
	// beq 0x82111e28
	if (ctx.cr0.eq) goto loc_82111E28;
	// lha r11,140(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 140));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// lfs f0,29244(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 29244);
	ctx.f0.f64 = double(temp.f32);
	// stfs f30,20(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r9,29492
	ctx.r5.s64 = ctx.r9.s64 + 29492;
	// lbzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x82111E28;
	sub_821EAF80(ctx, base);
loc_82111E28:
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82111e40
	if (ctx.cr6.eq) goto loc_82111E40;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
loc_82111E40:
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82111e54
	if (!ctx.cr6.lt) goto loc_82111E54;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
loc_82111E54:
	// rlwinm. r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82111eac
	if (ctx.cr0.eq) goto loc_82111EAC;
	// lha r11,140(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 140));
	// stfs f30,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r9,29484
	ctx.r5.s64 = ctx.r9.s64 + 29484;
	// lbzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// lfs f0,29236(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 29236);
	ctx.f0.f64 = double(temp.f32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x82111EAC;
	sub_821EAF80(ctx, base);
loc_82111EAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821108e0
	ctx.lr = 0x82111EB4;
	sub_821108E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821109f0
	ctx.lr = 0x82111EBC;
	sub_821109F0(ctx, base);
	// lha r11,128(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 128));
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,340(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 340);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lha r28,148(r11)
	r28.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 148));
	// beq cr6,0x82111f2c
	if (ctx.cr6.eq) goto loc_82111F2C;
	// bl 0x821c5838
	ctx.lr = 0x82111EDC;
	sub_821C5838(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82111f2c
	if (ctx.cr0.eq) goto loc_82111F2C;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82111f24
	if (!ctx.cr6.eq) goto loc_82111F24;
	// lwz r11,340(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 340);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// lfs f0,16816(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16816);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82111f2c
	if (ctx.cr6.lt) goto loc_82111F2C;
	// stfs f31,52(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// b 0x82111f2c
	goto loc_82111F2C;
loc_82111F24:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
loc_82111F2C:
	// lhz r11,138(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 138);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8211211c
	if (!ctx.cr0.eq) goto loc_8211211C;
	// lwz r11,220(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 220);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// mr r30,r27
	r30.u64 = r27.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r29,r10,13128
	r29.s64 = ctx.r10.s64 + 13128;
	// beq 0x82111f64
	if (ctx.cr0.eq) goto loc_82111F64;
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// addi r10,r29,4
	ctx.r10.s64 = r29.s64 + 4;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// lwzx r30,r11,r10
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_82111F64:
	// andi. r11,r30,16416
	ctx.r11.u64 = r30.u64 & 16416;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82111fcc
	if (ctx.cr0.eq) goto loc_82111FCC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r3,332(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 332);
	// li r10,4
	ctx.r10.s64 = 4;
	// sth r11,124(r31)
	REX_STORE_U16(r31.u32 + 124, ctx.r11.u16);
	// stw r10,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// sth r11,126(r31)
	REX_STORE_U16(r31.u32 + 126, ctx.r11.u16);
	// sth r11,138(r31)
	REX_STORE_U16(r31.u32 + 138, ctx.r11.u16);
	// bl 0x82101d68
	ctx.lr = 0x82111F90;
	sub_82101D68(ctx, base);
	// lhz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 136);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82111fa8
	if (ctx.cr6.eq) goto loc_82111FA8;
	// lwz r3,340(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 340);
	// bl 0x821c5800
	ctx.lr = 0x82111FA4;
	sub_821C5800(ctx, base);
	// stw r27,340(r31)
	REX_STORE_U32(r31.u32 + 340, r27.u32);
loc_82111FA8:
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// li r10,12
	ctx.r10.s64 = 12;
	// li r3,27
	ctx.r3.s64 = 27;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// stb r10,36(r11)
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r10.u8);
	// stw r27,348(r31)
	REX_STORE_U32(r31.u32 + 348, r27.u32);
	// sth r27,136(r31)
	REX_STORE_U16(r31.u32 + 136, r27.u16);
	// bl 0x8212bc38
	ctx.lr = 0x82111FC8;
	sub_8212BC38(ctx, base);
	// b 0x8211211c
	goto loc_8211211C;
loc_82111FCC:
	// lhz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 136);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82111ff0
	if (!ctx.cr6.eq) goto loc_82111FF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82110b68
	ctx.lr = 0x82111FE0;
	sub_82110B68(ctx, base);
	// li r11,90
	ctx.r11.s64 = 90;
	// stw r3,340(r31)
	REX_STORE_U32(r31.u32 + 340, ctx.r3.u32);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// sth r27,136(r31)
	REX_STORE_U16(r31.u32 + 136, r27.u16);
loc_82111FF0:
	// lwz r3,340(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 340);
	// bl 0x821c5838
	ctx.lr = 0x82111FF8;
	sub_821C5838(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8211211c
	if (ctx.cr0.eq) goto loc_8211211C;
	// rlwinm r11,r30,0,15,20
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1F800;
	// rlwinm. r11,r11,0,20,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8211204c
	if (ctx.cr0.eq) goto loc_8211204C;
	// lwz r3,340(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 340);
	// bl 0x821c5800
	ctx.lr = 0x82112014;
	sub_821C5800(ctx, base);
	// stw r27,340(r31)
	REX_STORE_U32(r31.u32 + 340, r27.u32);
loc_82112018:
	// lhz r11,134(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 134);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,134(r31)
	REX_STORE_U16(r31.u32 + 134, ctx.r11.u16);
	// bge 0x82112034
	if (!ctx.cr0.lt) goto loc_82112034;
	// li r11,11
	ctx.r11.s64 = 11;
	// sth r11,134(r31)
	REX_STORE_U16(r31.u32 + 134, ctx.r11.u16);
loc_82112034:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lha r4,134(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 134));
	// bl 0x821dcf68
	ctx.lr = 0x82112040;
	sub_821DCF68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82112018
	if (ctx.cr0.eq) goto loc_82112018;
	// b 0x82112094
	goto loc_82112094;
loc_8211204C:
	// rlwinm r11,r30,0,14,21
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x3FC00;
	// rlwinm. r11,r11,0,21,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFE07FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821120a4
	if (ctx.cr0.eq) goto loc_821120A4;
	// lwz r3,340(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 340);
	// bl 0x821c5800
	ctx.lr = 0x82112060;
	sub_821C5800(ctx, base);
	// stw r27,340(r31)
	REX_STORE_U32(r31.u32 + 340, r27.u32);
loc_82112064:
	// lhz r11,134(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 134);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r11,134(r31)
	REX_STORE_U16(r31.u32 + 134, ctx.r11.u16);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// blt cr6,0x82112080
	if (ctx.cr6.lt) goto loc_82112080;
	// sth r27,134(r31)
	REX_STORE_U16(r31.u32 + 134, r27.u16);
loc_82112080:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lha r4,134(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 134));
	// bl 0x821dcf68
	ctx.lr = 0x8211208C;
	sub_821DCF68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82112064
	if (ctx.cr0.eq) goto loc_82112064;
loc_82112094:
	// sth r25,136(r31)
	REX_STORE_U16(r31.u32 + 136, r25.u16);
	// li r3,25
	ctx.r3.s64 = 25;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8212bc38
	ctx.lr = 0x821120A4;
	sub_8212BC38(ctx, base);
loc_821120A4:
	// lwz r11,220(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 220);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821120c8
	if (ctx.cr0.eq) goto loc_821120C8;
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// addi r10,r29,12
	ctx.r10.s64 = r29.s64 + 12;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_821120C8:
	// rlwinm. r11,r9,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821120e8
	if (ctx.cr0.eq) goto loc_821120E8;
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// bge 0x821120e8
	if (!ctx.cr0.lt) goto loc_821120E8;
	// stw r27,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, r27.u32);
loc_821120E8:
	// rlwinm. r11,r9,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8211211c
	if (ctx.cr0.eq) goto loc_8211211C;
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// lwz r10,84(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// ble cr6,0x8211211c
	if (!ctx.cr6.gt) goto loc_8211211C;
	// addi r9,r10,-8
	ctx.r9.s64 = ctx.r10.s64 + -8;
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8211211c
	if (ctx.cr6.lt) goto loc_8211211C;
	// stw r9,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r9.u32);
loc_8211211C:
	// lha r7,134(r31)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(r31.u32 + 134));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfs f12,29360(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 29360);
	ctx.f12.f64 = double(temp.f32);
	// lha r9,128(r31)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r31.u32 + 128));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lha r11,130(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 130));
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r6,344(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 344);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,29480(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 29480);
	ctx.f11.f64 = double(temp.f32);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,26552(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 26552);
	ctx.f13.f64 = double(temp.f32);
	// frsp f7,f0
	ctx.f7.f64 = double(float(ctx.f0.f64));
	// stfs f13,88(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 88, temp.u32);
	// frsp f13,f8
	ctx.f13.f64 = double(float(ctx.f8.f64));
	// lfs f10,29444(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 29444);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,29476(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 29476);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,16228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16228);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f7,f12,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f11.f64)));
	// fmadds f13,f13,f10,f9
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f9.f64)));
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f12,80(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 80, temp.u32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,84(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 84, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-80(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_821249C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lfs f1,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// beq cr6,0x821249ec
	if (ctx.cr6.eq) goto loc_821249EC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,0(r5)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f1,8(r5)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// stfs f1,12(r5)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lfs f13,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r5.u32 + 4, temp.u32);
loc_821249EC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,-30140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30140);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82124a1c
	if (ctx.cr6.lt) goto loc_82124A1C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,29356(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 29356);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82124a1c
	if (ctx.cr6.gt) goto loc_82124A1C;
	// fcmpu cr6,f2,f12
	ctx.cr6.compare(ctx.f2.f64, ctx.f12.f64);
	// blt cr6,0x82124a1c
	if (ctx.cr6.lt) goto loc_82124A1C;
	// fcmpu cr6,f2,f13
	ctx.cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_82124A1C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-31156(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -31156);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82126B58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r3,r11,-27136
	ctx.r3.s64 = ctx.r11.s64 + -27136;
	// bl 0x82125928
	ctx.lr = 0x82126B70;
	sub_82125928(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,46
	ctx.r9.s64 = 46;
	// stw r10,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r9,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// li r10,48
	ctx.r10.s64 = 48;
	// li r9,45
	ctx.r9.s64 = 45;
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r11,47
	ctx.r11.s64 = 47;
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r10,33
	ctx.r10.s64 = 33;
	// li r9,36
	ctx.r9.s64 = 36;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r11,34
	ctx.r11.s64 = 34;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r10,35
	ctx.r10.s64 = 35;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,20
	ctx.r8.s64 = 20;
	// li r7,37
	ctx.r7.s64 = 37;
	// li r6,38
	ctx.r6.s64 = 38;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82124268
	ctx.lr = 0x82126BD8;
	sub_82124268(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
loc_82126BDC:
	// li r6,268
	ctx.r6.s64 = 268;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x82124300
	ctx.lr = 0x82126BE8;
	sub_82124300(ctx, base);
	// li r6,17
	ctx.r6.s64 = 17;
	// li r5,21
	ctx.r5.s64 = 21;
	// bl 0x82124300
	ctx.lr = 0x82126BF4;
	sub_82124300(ctx, base);
	// li r6,15
	ctx.r6.s64 = 15;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82124300
	ctx.lr = 0x82126C00;
	sub_82124300(ctx, base);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// blt cr6,0x82126bdc
	if (ctx.cr6.lt) goto loc_82126BDC;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82129D18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r11,-24000
	ctx.r8.s64 = ctx.r11.s64 + -24000;
	// addi r10,r8,64
	ctx.r10.s64 = ctx.r8.s64 + 64;
loc_82129D28:
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r10,-148
	ctx.r11.s64 = ctx.r10.s64 + -148;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82129D34:
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r7,144(r11)
	REX_STORE_U32(ctx.r11.u32 + 144, ctx.r7.u32);
	// stw r9,148(r11)
	REX_STORE_U32(ctx.r11.u32 + 148, ctx.r9.u32);
	// stwu r7,152(r11)
	ea = 152 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82129d34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82129D34;
	// addi r10,r10,76
	ctx.r10.s64 = ctx.r10.s64 + 76;
	// addi r11,r8,216
	ctx.r11.s64 = ctx.r8.s64 + 216;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82129d28
	if (ctx.cr6.lt) goto loc_82129D28;
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// lis r8,-32169
	ctx.r8.s64 = -2108227584;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r7,-24008(r9)
	REX_STORE_U32(ctx.r9.u32 + -24008, ctx.r7.u32);
	// stw r7,-24004(r8)
	REX_STORE_U32(ctx.r8.u32 + -24004, ctx.r7.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212A268) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-29256
	ctx.r11.s64 = ctx.r11.s64 + -29256;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// beq 0x8212a2a4
	if (ctx.cr0.eq) goto loc_8212A2A4;
	// bl 0x822c80a8
	ctx.lr = 0x8212A2A4;
	sub_822C80A8(ctx, base);
loc_8212A2A4:
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

DEFINE_REX_FUNC(sub_8212AB38) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// stw r10,260(r11)
	REX_STORE_U32(ctx.r11.u32 + 260, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212AF90) {
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
	// lis r31,-32165
	r31.s64 = -2107965440;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r3,r11,15284
	ctx.r3.s64 = ctx.r11.s64 + 15284;
	// lwz r11,-32480(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -32480);
	// lwz r4,80(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// bl 0x82428fe8
	ctx.lr = 0x8212AFB8;
	sub_82428FE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8212afd8
	if (ctx.cr0.eq) goto loc_8212AFD8;
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// lwz r10,-32480(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + -32480);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,-23028(r9)
	REX_STORE_U32(ctx.r9.u32 + -23028, ctx.r11.u32);
	// sth r8,40(r10)
	REX_STORE_U16(ctx.r10.u32 + 40, ctx.r8.u16);
loc_8212AFD8:
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

DEFINE_REX_FUNC(sub_8212BFB8) {
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
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x82203138
	ctx.lr = 0x8212BFCC;
	sub_82203138(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212c000
	if (!ctx.cr6.eq) goto loc_8212C000;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r11,15284
	ctx.r3.s64 = ctx.r11.s64 + 15284;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,51
	ctx.r6.s64 = 51;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822042f8
	ctx.lr = 0x8212C000;
	sub_822042F8(ctx, base);
loc_8212C000:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212CD10) {
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
	ctx.lr = 0x8212CD18;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r27,-1
	r27.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8212a8e0
	ctx.lr = 0x8212CD2C;
	sub_8212A8E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8212cd94
	if (ctx.cr0.eq) goto loc_8212CD94;
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 20);
	// addi r11,r29,24
	ctx.r11.s64 = r29.s64 + 24;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8212cd94
	if (!ctx.cr6.gt) goto loc_8212CD94;
	// addi r31,r11,-16
	r31.s64 = ctx.r11.s64 + -16;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r28,r11,15284
	r28.s64 = ctx.r11.s64 + 15284;
loc_8212CD54:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + r29.u64;
	// lwzu r11,16(r31)
	ea = 16 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x82204910
	ctx.lr = 0x8212CD80;
	sub_82204910(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8212cd54
	if (ctx.cr6.lt) goto loc_8212CD54;
loc_8212CD94:
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r11,r11,-5720
	ctx.r11.s64 = ctx.r11.s64 + -5720;
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82202fc8
	ctx.lr = 0x8212CDA4;
	sub_82202FC8(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lwz r11,20140(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212cdbc
	if (ctx.cr6.eq) goto loc_8212CDBC;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8212CDBC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8212FEF0) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821f8230
	ctx.lr = 0x8212FF04;
	sub_821F8230(ctx, base);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,23912
	ctx.r5.s64 = ctx.r10.s64 + 23912;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,132(r5)
	REX_STORE_U32(ctx.r5.u32 + 132, ctx.r11.u32);
	// stw r10,136(r5)
	REX_STORE_U32(ctx.r5.u32 + 136, ctx.r10.u32);
	// stw r9,140(r5)
	REX_STORE_U32(ctx.r5.u32 + 140, ctx.r9.u32);
	// stw r8,144(r5)
	REX_STORE_U32(ctx.r5.u32 + 144, ctx.r8.u32);
	// stw r7,148(r5)
	REX_STORE_U32(ctx.r5.u32 + 148, ctx.r7.u32);
	// stw r6,152(r5)
	REX_STORE_U32(ctx.r5.u32 + 152, ctx.r6.u32);
	// stw r11,156(r5)
	REX_STORE_U32(ctx.r5.u32 + 156, ctx.r11.u32);
	// stw r10,160(r5)
	REX_STORE_U32(ctx.r5.u32 + 160, ctx.r10.u32);
	// stw r9,164(r5)
	REX_STORE_U32(ctx.r5.u32 + 164, ctx.r9.u32);
	// stw r8,180(r5)
	REX_STORE_U32(ctx.r5.u32 + 180, ctx.r8.u32);
	// stw r7,176(r5)
	REX_STORE_U32(ctx.r5.u32 + 176, ctx.r7.u32);
	// stw r6,172(r5)
	REX_STORE_U32(ctx.r5.u32 + 172, ctx.r6.u32);
	// stw r11,168(r5)
	REX_STORE_U32(ctx.r5.u32 + 168, ctx.r11.u32);
	// stw r10,184(r5)
	REX_STORE_U32(ctx.r5.u32 + 184, ctx.r10.u32);
	// stw r9,200(r5)
	REX_STORE_U32(ctx.r5.u32 + 200, ctx.r9.u32);
	// stw r8,196(r5)
	REX_STORE_U32(ctx.r5.u32 + 196, ctx.r8.u32);
	// stw r7,192(r5)
	REX_STORE_U32(ctx.r5.u32 + 192, ctx.r7.u32);
	// stw r6,188(r5)
	REX_STORE_U32(ctx.r5.u32 + 188, ctx.r6.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82130F18) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82130f44
	if (ctx.cr6.lt) goto loc_82130F44;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82130f44
	if (ctx.cr6.gt) goto loc_82130F44;
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
loc_82130F44:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2028(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2028);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// stb r11,147(r3)
	REX_STORE_U8(ctx.r3.u32 + 147, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82132D10) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r11,r11,22984
	ctx.r11.s64 = ctx.r11.s64 + 22984;
	// lbzx r11,r4,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bne cr6,0x82132d44
	if (!ctx.cr6.eq) goto loc_82132D44;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r10,r10,0,5,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stwx r10,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
loc_82132D44:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r9,r11,58
	ctx.r9.s64 = ctx.r11.s64 + 58;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwzx r8,r11,r3
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r9,r9,0,20,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF000FFF;
	// rlwinm r8,r8,0,5,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stwx r9,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u32);
	// stwx r8,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82133DA8) {
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
	// bl 0x82133b28
	ctx.lr = 0x82133DBC;
	sub_82133B28(ctx, base);
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82133e04
	if (!ctx.cr6.lt) goto loc_82133E04;
	// lwz r11,12(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mulli r11,r11,10
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(10));
	// lwz r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
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
	// lhax r11,r11,r9
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32));
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lha r3,16(r11)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 16));
	// rlwinm. r11,r3,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82133e08
	if (ctx.cr0.eq) goto loc_82133E08;
loc_82133E04:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82133E08:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821359A8) {
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lhz r11,30(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bne cr6,0x82135afc
	if (!ctx.cr6.eq) goto loc_82135AFC;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// addi r9,r11,23912
	ctx.r9.s64 = ctx.r11.s64 + 23912;
	// addi r8,r10,22000
	ctx.r8.s64 = ctx.r10.s64 + 22000;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lwz r11,76(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// lwz r10,28(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// mulli r11,r11,324
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(324));
	// lwz r9,32(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// lfs f1,1996(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,-24832(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -24832);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r8,r8,10
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(10));
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mulli r8,r8,6
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(6));
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r8,r8,14
	ctx.r8.s64 = ctx.r8.s64 + 14;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r8,r8,r6
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r8.u32 + ctx.r6.u32));
	// rlwinm r8,r8,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r8,21(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 21);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// blt cr6,0x82135b30
	if (ctx.cr6.lt) goto loc_82135B30;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// mulli r8,r8,10
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(10));
	// lfs f1,1992(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mulli r8,r8,6
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(6));
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r8,r8,14
	ctx.r8.s64 = ctx.r8.s64 + 14;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r8,r8,r5
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r8.u32 + ctx.r5.u32));
	// rlwinm r8,r8,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r8,21(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 21);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// bgt cr6,0x82135b30
	if (ctx.cr6.gt) goto loc_82135B30;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rotlwi r6,r5,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// mulli r7,r8,10
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(10));
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mulli r11,r11,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(6));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r11,r6
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r6.u32));
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r11,21(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82135b30
	goto loc_82135B30;
loc_82135AFC:
	// bl 0x821fedc8
	ctx.lr = 0x82135B00;
	sub_821FEDC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82135b24
	if (ctx.cr6.lt) goto loc_82135B24;
	// bl 0x821fedc8
	ctx.lr = 0x82135B14;
	sub_821FEDC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82135b2c
	if (!ctx.cr6.gt) goto loc_82135B2C;
loc_82135B24:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// b 0x82135b30
	goto loc_82135B30;
loc_82135B2C:
	// bl 0x821fedc8
	ctx.lr = 0x82135B30;
	sub_821FEDC8(ctx, base);
loc_82135B30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82145468) {
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
	// addi r11,r4,14
	ctx.r11.s64 = ctx.r4.s64 + 14;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mulli r11,r11,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(6));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbzx r10,r11,r3
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stbx r10,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
	// bl 0x8213e980
	ctx.lr = 0x82145498;
	sub_8213E980(ctx, base);
	// addi r11,r4,17
	ctx.r11.s64 = ctx.r4.s64 + 17;
	// mulli r11,r11,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(6));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + r31.u32, ctx.r10.u16);
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

DEFINE_REX_FUNC(sub_82149978) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82149980;
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
	ctx.lr = 0x821499A4;
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
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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
	// lha r11,22(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 22));
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x820e0368
	ctx.lr = 0x821499E0;
	sub_820E0368(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f3,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,48(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0d78
	ctx.lr = 0x821499F8;
	sub_820E0D78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8214A640) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-23016
	ctx.r10.s64 = ctx.r10.s64 + -23016;
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lbz r11,62(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 62);
	// sth r11,20(r31)
	REX_STORE_U16(r31.u32 + 20, ctx.r11.u16);
	// lbz r11,61(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 61);
	// lfs f0,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// sth r11,22(r31)
	REX_STORE_U16(r31.u32 + 22, ctx.r11.u16);
	// lfs f13,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f13,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f13,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
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
	// bl 0x820e0ec8
	ctx.lr = 0x8214A6BC;
	sub_820E0EC8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f3,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0ec8
	ctx.lr = 0x8214A6D0;
	sub_820E0EC8(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e0590
	ctx.lr = 0x8214A6E0;
	sub_820E0590(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x820e1528
	ctx.lr = 0x8214A6EC;
	sub_820E1528(ctx, base);
	// lfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// lfs f0,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// ble cr6,0x8214a70c
	if (!ctx.cr6.gt) goto loc_8214A70C;
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
loc_8214A70C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16232(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16232);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f1,48(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// bl 0x820e0088
	ctx.lr = 0x8214A724;
	sub_820E0088(ctx, base);
	// stfs f1,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_8214EE30) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8214EE38;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// lhz r10,18(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 18);
	// lha r11,8(r3)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 8));
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// mulli r10,r11,36
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(36));
	// lwz r11,24308(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24308);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt 0x8214eea0
	if (ctx.cr0.lt) goto loc_8214EEA0;
loc_8214EE64:
	// cmpw cr6,r28,r31
	ctx.cr6.compare<int32_t>(r28.s32, r31.s32, ctx.xer);
	// beq cr6,0x8214ee90
	if (ctx.cr6.eq) goto loc_8214EE90;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214ee98
	if (ctx.cr6.eq) goto loc_8214EE98;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lha r3,0(r29)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r29.u32 + 0));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214EE88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8214ee98
	if (!ctx.cr0.eq) goto loc_8214EE98;
loc_8214EE90:
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x8214ee64
	if (!ctx.cr0.lt) goto loc_8214EE64;
loc_8214EE98:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge cr6,0x8214eea4
	if (!ctx.cr6.lt) goto loc_8214EEA4;
loc_8214EEA0:
	// li r31,1
	r31.s64 = 1;
loc_8214EEA4:
	// sth r31,16(r30)
	REX_STORE_U16(r30.u32 + 16, r31.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821509B0) {
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
	// lwz r11,208(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82150ab8
	if (ctx.cr6.lt) goto loc_82150AB8;
	// beq cr6,0x82150a9c
	if (ctx.cr6.eq) goto loc_82150A9C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82150b5c
	if (!ctx.cr6.lt) goto loc_82150B5C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,212(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x821509f8
	if (ctx.cr6.gt) goto loc_821509F8;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_821509F8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2012(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x820e0028
	ctx.lr = 0x82150A08;
	sub_820E0028(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,192(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,-23600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -23600);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bne cr6,0x82150a30
	if (!ctx.cr6.eq) goto loc_82150A30;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16200(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16200);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82150a48
	goto loc_82150A48;
loc_82150A30:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,16036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16036);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,16200(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16200);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_82150A48:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lfs f12,212(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 212);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,31840(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 31840);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1840(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f13,f0,f13,f12
	ctx.f13.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f13.f64, -ctx.f12.f64)));
	// lfs f0,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,212(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 212, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82150a94
	if (ctx.cr6.gt) goto loc_82150A94;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 212, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r11.u32);
	// stb r10,188(r31)
	REX_STORE_U8(r31.u32 + 188, ctx.r10.u8);
	// b 0x82150b5c
	goto loc_82150B5C;
loc_82150A94:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82150b58
	goto loc_82150B58;
loc_82150A9C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,212(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82150a94
	if (ctx.cr6.gt) goto loc_82150A94;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82150b58
	goto loc_82150B58;
loc_82150AB8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,212(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// ble cr6,0x82150ad0
	if (!ctx.cr6.gt) goto loc_82150AD0;
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
loc_82150AD0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2012(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x820e0028
	ctx.lr = 0x82150AE0;
	sub_820E0028(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,192(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,-23600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -23600);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bne cr6,0x82150b08
	if (!ctx.cr6.eq) goto loc_82150B08;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16200(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16200);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82150b20
	goto loc_82150B20;
loc_82150B08:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,16036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16036);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,16200(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16200);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_82150B20:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lfs f12,212(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 212);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// addi r9,r11,13128
	ctx.r9.s64 = ctx.r11.s64 + 13128;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,31840(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 31840);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1840(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 212, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x82150b58
	if (ctx.cr6.lt) goto loc_82150B58;
	// stfs f31,212(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 212, temp.u32);
	// stw r11,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r11.u32);
loc_82150B58:
	// stb r11,188(r31)
	REX_STORE_U8(r31.u32 + 188, ctx.r11.u8);
loc_82150B5C:
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

DEFINE_REX_FUNC(sub_8215D1F0) {
	REX_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x821dd680
	sub_821DD680(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8215D390) {
	REX_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,10
	ctx.r4.s64 = 10;
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x821dd680
	sub_821DD680(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8215D500) {
	REX_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x821dd680
	sub_821DD680(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8215D650) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lbz r11,2970(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2970);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8215D9A8) {
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
	// bl 0x821dd670
	ctx.lr = 0x8215D9BC;
	sub_821DD670(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8215d9d0
	if (!ctx.cr6.eq) goto loc_8215D9D0;
loc_8215D9C8:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8215da74
	goto loc_8215DA74;
loc_8215D9D0:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,78
	ctx.r3.s64 = 78;
	// bl 0x821dce30
	ctx.lr = 0x8215D9DC;
	sub_821DCE30(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8215d9c8
	if (ctx.cr6.eq) goto loc_8215D9C8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8215d9f0
	if (!ctx.cr6.eq) goto loc_8215D9F0;
	// li r31,3
	r31.s64 = 3;
loc_8215D9F0:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,79
	ctx.r3.s64 = 79;
	// bl 0x821dce30
	ctx.lr = 0x8215D9FC;
	sub_821DCE30(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8215d9c8
	if (ctx.cr6.eq) goto loc_8215D9C8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8215da10
	if (!ctx.cr6.eq) goto loc_8215DA10;
	// li r31,3
	r31.s64 = 3;
loc_8215DA10:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x821dce30
	ctx.lr = 0x8215DA1C;
	sub_821DCE30(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8215d9c8
	if (ctx.cr6.eq) goto loc_8215D9C8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8215da30
	if (!ctx.cr6.eq) goto loc_8215DA30;
	// li r31,3
	r31.s64 = 3;
loc_8215DA30:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,81
	ctx.r3.s64 = 81;
	// bl 0x821dce30
	ctx.lr = 0x8215DA3C;
	sub_821DCE30(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8215d9c8
	if (ctx.cr6.eq) goto loc_8215D9C8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8215da50
	if (!ctx.cr6.eq) goto loc_8215DA50;
	// li r31,3
	r31.s64 = 3;
loc_8215DA50:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,82
	ctx.r3.s64 = 82;
	// bl 0x821dce30
	ctx.lr = 0x8215DA5C;
	sub_821DCE30(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8215d9c8
	if (ctx.cr6.eq) goto loc_8215D9C8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8215da70
	if (!ctx.cr6.eq) goto loc_8215DA70;
	// li r31,3
	r31.s64 = 3;
loc_8215DA70:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8215DA74:
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

DEFINE_REX_FUNC(sub_821621B8) {
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
loc_821621C8:
	// bl 0x82162160
	ctx.lr = 0x821621CC;
	sub_82162160(ctx, base);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// ble cr6,0x821621c8
	if (!ctx.cr6.gt) goto loc_821621C8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82165180) {
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
	ctx.lr = 0x82165188;
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r4,64
	r30.s64 = ctx.r4.s64 + 64;
	// lfs f31,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// li r29,87
	r29.s64 = 87;
	// lfs f30,31344(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 31344);
	f30.f64 = double(temp.f32);
	// lfs f29,2020(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2020);
	f29.f64 = double(temp.f32);
loc_821651BC:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e0e38
	ctx.lr = 0x821651D0;
	sub_820E0E38(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// li r9,1
	ctx.r9.s64 = 1;
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, f29.f64);
	// blt cr6,0x821651e8
	if (ctx.cr6.lt) goto loc_821651E8;
	// li r9,0
	ctx.r9.s64 = 0;
loc_821651E8:
	// lfs f10,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fabs f13,f10
	ctx.f13.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, f29.f64);
	// blt cr6,0x82165200
	if (ctx.cr6.lt) goto loc_82165200;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82165200:
	// lfs f11,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fabs f13,f11
	ctx.f13.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, f29.f64);
	// blt cr6,0x82165218
	if (ctx.cr6.lt) goto loc_82165218;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82165218:
	// fmuls f13,f10,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f10.f64 * f30.f64));
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// fmuls f12,f11,f30
	ctx.f12.f64 = double(float(ctx.f11.f64 * f30.f64));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// fmuls f9,f0,f30
	ctx.f9.f64 = double(float(ctx.f0.f64 * f30.f64));
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,26(r31)
	REX_STORE_U8(r31.u32 + 26, ctx.r11.u8);
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// fctiwz f13,f12
	ctx.f13.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f13,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// lhz r9,110(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// fctiwz f13,f9
	ctx.f13.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// lhz r10,102(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 102);
	// stfd f13,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// lhz r8,110(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// sth r8,12(r31)
	REX_STORE_U16(r31.u32 + 12, ctx.r8.u16);
	// sth r10,14(r31)
	REX_STORE_U16(r31.u32 + 14, ctx.r10.u16);
	// sth r9,16(r31)
	REX_STORE_U16(r31.u32 + 16, ctx.r9.u16);
	// lfs f13,48(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f13,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f13,56(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// beq cr6,0x82165374
	if (ctx.cr6.eq) goto loc_82165374;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82165350
	if (ctx.cr6.eq) goto loc_82165350;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82165338
	if (ctx.cr6.eq) goto loc_82165338;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82165314
	if (ctx.cr6.eq) goto loc_82165314;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821652f0
	if (ctx.cr6.eq) goto loc_821652F0;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x821652d8
	if (ctx.cr6.eq) goto loc_821652D8;
	// fdivs f11,f30,f10
	ctx.f11.f64 = double(float(f30.f64 / ctx.f10.f64));
	// lfs f13,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 / ctx.f0.f64));
	// lfs f10,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// b 0x82165394
	goto loc_82165394;
loc_821652D8:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f31.f64;
	// fmr f11,f31
	ctx.f11.f64 = f31.f64;
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
	// fmr f12,f31
	ctx.f12.f64 = f31.f64;
	// fmr f10,f31
	ctx.f10.f64 = f31.f64;
	// b 0x82165304
	goto loc_82165304;
loc_821652F0:
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 / ctx.f0.f64));
	// lfs f12,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmr f11,f31
	ctx.f11.f64 = f31.f64;
	// lfs f10,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
loc_82165304:
	// fmr f9,f31
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = f31.f64;
	// fmr f8,f31
	ctx.f8.f64 = f31.f64;
	// fmr f7,f31
	ctx.f7.f64 = f31.f64;
	// b 0x82165394
	goto loc_82165394;
loc_82165314:
	// fdivs f11,f30,f10
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(f30.f64 / ctx.f10.f64));
	// lfs f9,16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
	// lfs f7,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
	// fmr f12,f31
	ctx.f12.f64 = f31.f64;
	// fmr f10,f31
	ctx.f10.f64 = f31.f64;
	// b 0x82165394
	goto loc_82165394;
loc_82165338:
	// fdivs f0,f30,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f30.f64 / ctx.f11.f64));
	// fmr f11,f31
	ctx.f11.f64 = f31.f64;
	// fmr f9,f31
	ctx.f9.f64 = f31.f64;
	// fmr f8,f31
	ctx.f8.f64 = f31.f64;
	// fmr f7,f31
	ctx.f7.f64 = f31.f64;
	// b 0x82165388
	goto loc_82165388;
loc_82165350:
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 / ctx.f0.f64));
	// lfs f12,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f11,f30,f11
	ctx.f11.f64 = double(float(f30.f64 / ctx.f11.f64));
	// lfs f10,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,36(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,40(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// b 0x82165394
	goto loc_82165394;
loc_82165374:
	// fdivs f0,f30,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f30.f64 / ctx.f11.f64));
	// lfs f9,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fdivs f11,f30,f10
	ctx.f11.f64 = double(float(f30.f64 / ctx.f10.f64));
	// lfs f7,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
loc_82165388:
	// lfs f10,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,36(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
loc_82165394:
	// fmuls f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f10,f31
	ctx.cr6.compare(ctx.f10.f64, f31.f64);
	// fctiwz f13,f12
	ctx.f13.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f13,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// lhz r11,110(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// lhz r10,110(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// sth r11,20(r31)
	REX_STORE_U16(r31.u32 + 20, ctx.r11.u16);
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r10,18(r31)
	REX_STORE_U16(r31.u32 + 18, ctx.r10.u16);
	// bge cr6,0x821653cc
	if (!ctx.cr6.lt) goto loc_821653CC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_821653CC:
	// fmuls f0,f8,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// fmuls f13,f9,f11
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stb r10,27(r31)
	REX_STORE_U8(r31.u32 + 27, ctx.r10.u8);
	// fcmpu cr6,f7,f31
	ctx.cr6.compare(ctx.f7.f64, f31.f64);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// lhz r11,110(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// fctiwz f0,f13
	ctx.f0.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f0,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// lhz r9,110(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// sth r11,24(r31)
	REX_STORE_U16(r31.u32 + 24, ctx.r11.u16);
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r9,22(r31)
	REX_STORE_U16(r31.u32 + 22, ctx.r9.u16);
	// bge cr6,0x8216540c
	if (!ctx.cr6.lt) goto loc_8216540C;
	// li r11,2
	ctx.r11.s64 = 2;
loc_8216540C:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,27(r31)
	REX_STORE_U8(r31.u32 + 27, ctx.r11.u8);
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// bgt 0x821651bc
	if (ctx.cr0.gt) goto loc_821651BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_82171D88) {
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
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// addi r11,r11,27576
	ctx.r11.s64 = ctx.r11.s64 + 27576;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r8,r11,120
	ctx.r8.s64 = ctx.r11.s64 + 120;
	// addi r7,r11,96
	ctx.r7.s64 = ctx.r11.s64 + 96;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82171358
	ctx.lr = 0x82171DC0;
	sub_82171358(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-7208
	ctx.r11.s64 = ctx.r11.s64 + -7208;
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

DEFINE_REX_FUNC(sub_821732C0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r10,31764
	ctx.r8.s64 = ctx.r10.s64 + 31764;
	// li r9,0
	ctx.r9.s64 = 0;
	// std r11,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, ctx.r11.u64);
	// addi r10,r3,112
	ctx.r10.s64 = ctx.r3.s64 + 112;
	// sth r11,88(r3)
	REX_STORE_U16(ctx.r3.u32 + 88, ctx.r11.u16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stb r11,90(r3)
	REX_STORE_U8(ctx.r3.u32 + 90, ctx.r11.u8);
	// stw r10,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// stw r9,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r9.u32);
	// beq cr6,0x82173310
	if (ctx.cr6.eq) goto loc_82173310;
	// stw r4,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r4.u32);
	// stb r7,104(r3)
	REX_STORE_U8(ctx.r3.u32 + 104, ctx.r7.u8);
loc_82173310:
	// stb r11,105(r31)
	REX_STORE_U8(r31.u32 + 105, ctx.r11.u8);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stb r9,106(r31)
	REX_STORE_U8(r31.u32 + 106, ctx.r9.u8);
	// stb r9,107(r31)
	REX_STORE_U8(r31.u32 + 107, ctx.r9.u8);
	// stb r9,109(r31)
	REX_STORE_U8(r31.u32 + 109, ctx.r9.u8);
	// bne cr6,0x82173334
	if (!ctx.cr6.eq) goto loc_82173334;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 60, temp.u32);
loc_82173334:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x8217334c
	if (!ctx.cr6.eq) goto loc_8217334C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lfs f0,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 60, temp.u32);
loc_8217334C:
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x82173364
	if (!ctx.cr6.eq) goto loc_82173364;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lfs f0,2012(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 60, temp.u32);
loc_82173364:
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// bne cr6,0x8217337c
	if (!ctx.cr6.eq) goto loc_8217337C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lfs f0,17064(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17064);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 60, temp.u32);
loc_8217337C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f3,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lfs f2,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f1,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r9,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// addi r11,r11,-4224
	ctx.r11.s64 = ctx.r11.s64 + -4224;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lfs f8,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f8.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 + 112;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f5,2332(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2332);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-8492(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -8492);
	ctx.f4.f64 = double(temp.f32);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// fmr f6,f8
	ctx.f6.f64 = ctx.f8.f64;
	// bl 0x821065b0
	ctx.lr = 0x821733CC;
	sub_821065B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_821771D8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e80
	ctx.lr = 0x821771E0;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f34
	ctx.lr = 0x821771E8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lhz r11,432(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 432);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82177810
	if (!ctx.cr0.eq) goto loc_82177810;
	// lwz r10,216(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lbz r11,204(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 204);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lfs f31,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lfs f29,27892(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 27892);
	f29.f64 = double(temp.f32);
	// li r28,5
	r28.s64 = 5;
	// lfs f30,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	f30.f64 = double(temp.f32);
	// li r27,1
	r27.s64 = 1;
	// lfs f28,16272(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16272);
	f28.f64 = double(temp.f32);
	// li r29,0
	r29.s64 = 0;
	// stw r5,216(r3)
	REX_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// addi r26,r10,13128
	r26.s64 = ctx.r10.s64 + 13128;
	// bgt cr6,0x82177578
	if (ctx.cr6.gt) goto loc_82177578;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,-6208
	ctx.r12.s64 = ctx.r12.s64 + -6208;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32233
	ctx.r12.s64 = -2112421888;
	// nop 
	// addi r12,r12,29300
	ctx.r12.s64 = ctx.r12.s64 + 29300;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82177274;
	case 1:
		goto loc_82177284;
	case 2:
		goto loc_8217729C;
	case 3:
		goto loc_82177300;
	case 4:
		goto loc_82177490;
	case 5:
		goto loc_821774D8;
	case 6:
		goto loc_821774F8;
	case 7:
		goto loc_82177538;
	case 8:
		goto loc_82177550;
	case 9:
		goto loc_82177568;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82177274:
	// lbz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 220);
	// stb r27,204(r31)
	REX_STORE_U8(r31.u32 + 204, r27.u8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r11,220(r31)
	REX_STORE_U8(r31.u32 + 220, ctx.r11.u8);
loc_82177284:
	// lbz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 220);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82177578
	if (!ctx.cr0.eq) goto loc_82177578;
	// lbz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 204);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,204(r31)
	REX_STORE_U8(r31.u32 + 204, ctx.r11.u8);
loc_8217729C:
	// stfs f28,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 184, temp.u32);
	// stb r29,221(r31)
	REX_STORE_U8(r31.u32 + 221, r29.u8);
	// stfs f28,200(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 200, temp.u32);
	// stb r29,222(r31)
	REX_STORE_U8(r31.u32 + 222, r29.u8);
	// lbz r11,207(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 207);
	// addi r6,r31,221
	ctx.r6.s64 = r31.s64 + 221;
	// lbz r10,206(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 206);
	// addi r5,r31,172
	ctx.r5.s64 = r31.s64 + 172;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r30,r31,222
	r30.s64 = r31.s64 + 222;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x82176e78
	ctx.lr = 0x821772D0;
	sub_82176E78(ctx, base);
	// lbz r11,207(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 207);
	// lbz r10,206(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 206);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r31,188
	ctx.r5.s64 = r31.s64 + 188;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x82176e78
	ctx.lr = 0x821772F0;
	sub_82176E78(ctx, base);
	// lbz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 204);
	// stfs f31,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 208, temp.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,204(r31)
	REX_STORE_U8(r31.u32 + 204, ctx.r11.u8);
loc_82177300:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-5452(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -5452);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, f30.f64);
	// ble cr6,0x821773ec
	if (!ctx.cr6.gt) goto loc_821773EC;
	// lbz r11,171(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 171);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r27,221(r31)
	REX_STORE_U8(r31.u32 + 221, r27.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// stb r27,222(r31)
	REX_STORE_U8(r31.u32 + 222, r27.u8);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f0,2356(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2356);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// stfs f31,0(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f29,4(r11)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f31,8(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lbz r11,171(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 171);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// stb r29,160(r11)
	REX_STORE_U8(ctx.r11.u32 + 160, r29.u8);
	// lbz r10,206(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 206);
	// lbz r11,171(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 171);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// stb r10,165(r11)
	REX_STORE_U8(ctx.r11.u32 + 165, ctx.r10.u8);
	// lbz r9,207(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 207);
	// lbz r8,206(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 206);
	// lbz r11,171(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 171);
	// addi r10,r11,5
	ctx.r10.s64 = ctx.r11.s64 + 5;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// addi r6,r11,160
	ctx.r6.s64 = ctx.r11.s64 + 160;
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + r31.u64;
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// bl 0x82176e78
	ctx.lr = 0x82177394;
	sub_82176E78(ctx, base);
	// lbz r11,171(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 171);
	// lbz r10,170(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 170);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// divw r9,r11,r28
	ctx.r9.u64 = uint32_t((r28.s32 && !(ctx.r11.s32 == INT32_MIN && r28.s32 == -1)) ? ctx.r11.s32 / r28.s32 : 0);
	// stb r10,170(r31)
	REX_STORE_U8(r31.u32 + 170, ctx.r10.u8);
	// mulli r9,r9,5
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(5));
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// stb r11,171(r31)
	REX_STORE_U8(r31.u32 + 171, ctx.r11.u8);
	// lbz r11,206(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 206);
	// lbz r10,207(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 207);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,206(r31)
	REX_STORE_U8(r31.u32 + 206, ctx.r11.u8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821773dc
	if (ctx.cr6.lt) goto loc_821773DC;
	// stb r28,204(r31)
	REX_STORE_U8(r31.u32 + 204, r28.u8);
	// b 0x82177578
	goto loc_82177578;
loc_821773DC:
	// li r11,4
	ctx.r11.s64 = 4;
loc_821773E0:
	// stfs f31,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 208, temp.u32);
	// stb r11,204(r31)
	REX_STORE_U8(r31.u32 + 204, ctx.r11.u8);
	// b 0x82177578
	goto loc_82177578;
loc_821773EC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2012(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x820e0028
	ctx.lr = 0x821773FC;
	sub_820E0028(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f29,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r3,r31,172
	ctx.r3.s64 = r31.s64 + 172;
	// stfs f29,116(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmr f27,f1
	f27.f64 = ctx.f1.f64;
	// lfs f0,-24020(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24020);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f30,124(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x820e20b0
	ctx.lr = 0x82177438;
	sub_820E20B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f28,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 184, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f29,100(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r31,188
	ctx.r3.s64 = r31.s64 + 188;
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// lfs f0,16036(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16036);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f29,116(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f30,124(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x820e20b0
	ctx.lr = 0x82177478;
	sub_820E20B0(ctx, base);
	// lfs f13,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// stfs f28,200(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 200, temp.u32);
	// lfs f0,1840(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,208(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 208, temp.u32);
	// b 0x82177578
	goto loc_82177578;
loc_82177490:
	// lfs f13,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// lbz r11,171(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 171);
	// lfs f0,1840(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f0,208(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 208, temp.u32);
	// divw r9,r11,r28
	ctx.r9.u64 = uint32_t((r28.s32 && !(ctx.r11.s32 == INT32_MIN && r28.s32 == -1)) ? ctx.r11.s32 / r28.s32 : 0);
	// lfs f0,-24212(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24212);
	ctx.f0.f64 = double(temp.f32);
	// mulli r10,r9,5
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(5));
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lfs f13,84(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82177578
	if (ctx.cr6.lt) goto loc_82177578;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x821773e0
	goto loc_821773E0;
loc_821774D8:
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,28,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x82177578
	if (!ctx.cr6.eq) goto loc_82177578;
	// li r11,6
	ctx.r11.s64 = 6;
	// stfs f31,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 208, temp.u32);
	// stb r11,204(r31)
	REX_STORE_U8(r31.u32 + 204, ctx.r11.u8);
loc_821774F8:
	// lfs f0,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// stfs f0,208(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 208, temp.u32);
	// lbz r11,1827(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 1827);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
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
	// blt cr6,0x82177578
	if (ctx.cr6.lt) goto loc_82177578;
	// lbz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 204);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,204(r31)
	REX_STORE_U8(r31.u32 + 204, ctx.r11.u8);
loc_82177538:
	// lbz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 204);
	// lbz r10,220(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 220);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stb r11,204(r31)
	REX_STORE_U8(r31.u32 + 204, ctx.r11.u8);
	// stb r10,220(r31)
	REX_STORE_U8(r31.u32 + 220, ctx.r10.u8);
loc_82177550:
	// lbz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 220);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82177578
	if (!ctx.cr0.eq) goto loc_82177578;
	// lbz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 204);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,204(r31)
	REX_STORE_U8(r31.u32 + 204, ctx.r11.u8);
loc_82177568:
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82177578:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f6,-5456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -5456);
	ctx.f6.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f7,-23604(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -23604);
	ctx.f7.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f8,-5460(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -5460);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,2028(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2028);
	ctx.f9.f64 = double(temp.f32);
	// addi r8,r31,160
	ctx.r8.s64 = r31.s64 + 160;
	// lfs f13,30140(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 30140);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r31,84
	ctx.r9.s64 = r31.s64 + 84;
	// lfs f10,2008(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 2008);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,16628(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16628);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,2352(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2352);
	ctx.f12.f64 = double(temp.f32);
loc_821775C8:
	// lbzx r11,r8,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + r29.u32);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821777d0
	if (ctx.cr0.eq) goto loc_821777D0;
	// lbz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 204);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bge cr6,0x8217761c
	if (!ctx.cr6.lt) goto loc_8217761C;
	// lfs f0,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x8217761c
	if (!ctx.cr6.lt) goto loc_8217761C;
	// lbz r11,1827(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 1827);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// fmuls f5,f5,f28
	ctx.f5.f64 = double(float(ctx.f5.f64 * f28.f64));
	// fdivs f5,f12,f5
	ctx.f5.f64 = double(float(ctx.f12.f64 / ctx.f5.f64));
	// fadds f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x8217761c
	if (!ctx.cr6.gt) goto loc_8217761C;
	// stfs f30,8(r9)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
loc_8217761C:
	// lbz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 204);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x82177668
	if (!ctx.cr6.eq) goto loc_82177668;
	// lfs f0,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x82177658
	if (!ctx.cr6.gt) goto loc_82177658;
	// lbz r11,1827(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 1827);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f5,88(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// fmuls f5,f5,f11
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fdivs f5,f30,f5
	ctx.f5.f64 = double(float(f30.f64 / ctx.f5.f64));
	// fsubs f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
loc_82177658:
	// lfs f0,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82177668
	if (!ctx.cr6.lt) goto loc_82177668;
	// stfs f31,8(r9)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
loc_82177668:
	// lfs f5,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,1840(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f10,f5
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f5.f64)));
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lbz r11,207(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 207);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821776b0
	if (!ctx.cr6.eq) goto loc_821776B0;
	// add r11,r29,r31
	ctx.r11.u64 = r29.u64 + r31.u64;
	// lbz r11,165(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 165);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821777b0
	if (!ctx.cr0.eq) goto loc_821777B0;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821776a0
	if (!ctx.cr6.gt) goto loc_821776A0;
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_821776A0:
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ori r10,r10,14
	ctx.r10.u64 = ctx.r10.u64 | 14;
	// b 0x821777ac
	goto loc_821777AC;
loc_821776B0:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82177718
	if (!ctx.cr6.eq) goto loc_82177718;
	// add r11,r29,r31
	ctx.r11.u64 = r29.u64 + r31.u64;
	// lbz r10,165(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 165);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x821776e4
	if (!ctx.cr6.eq) goto loc_821776E4;
	// fcmpu cr6,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// ble cr6,0x821776d4
	if (!ctx.cr6.gt) goto loc_821776D4;
	// stfs f9,0(r9)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_821776D4:
	// lwz r10,212(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 212);
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// ori r7,r7,2
	ctx.r7.u64 = ctx.r7.u64 | 2;
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
loc_821776E4:
	// lbz r10,207(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 207);
	// lbz r11,165(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 165);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821777b0
	if (!ctx.cr6.eq) goto loc_821777B0;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// ble cr6,0x82177708
	if (!ctx.cr6.gt) goto loc_82177708;
	// stfs f8,0(r9)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_82177708:
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ori r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 | 12;
	// b 0x821777ac
	goto loc_821777AC;
loc_82177718:
	// add r10,r29,r31
	ctx.r10.u64 = r29.u64 + r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lbz r7,165(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 165);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82177748
	if (!ctx.cr6.eq) goto loc_82177748;
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// ble cr6,0x82177738
	if (!ctx.cr6.gt) goto loc_82177738;
	// stfs f29,0(r9)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_82177738:
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ori r7,r7,2
	ctx.r7.u64 = ctx.r7.u64 | 2;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
loc_82177748:
	// lbz r11,207(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 207);
	// lbz r7,165(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 165);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8217777c
	if (!ctx.cr6.eq) goto loc_8217777C;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8217776c
	if (!ctx.cr6.gt) goto loc_8217776C;
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_8217776C:
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ori r7,r7,4
	ctx.r7.u64 = ctx.r7.u64 | 4;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
loc_8217777C:
	// lbz r11,207(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 207);
	// lbz r10,165(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 165);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821777b0
	if (!ctx.cr6.eq) goto loc_821777B0;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// ble cr6,0x821777a0
	if (!ctx.cr6.gt) goto loc_821777A0;
	// stfs f7,0(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_821777A0:
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
loc_821777AC:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_821777B0:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f6
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// ble cr6,0x821777d0
	if (!ctx.cr6.gt) goto loc_821777D0;
	// stbx r27,r8,r29
	REX_STORE_U8(ctx.r8.u32 + r29.u32, r27.u8);
	// lbz r11,170(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 170);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,170(r31)
	REX_STORE_U8(r31.u32 + 170, ctx.r11.u8);
loc_821777D0:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bdnz 0x821775c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821775C8;
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82177810
	if (ctx.cr0.eq) goto loc_82177810;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,12
	ctx.r9.s64 = 12;
	// rlwinm r10,r10,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stb r9,36(r31)
	REX_STORE_U8(r31.u32 + 36, ctx.r9.u8);
loc_82177810:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f80
	ctx.lr = 0x8217781C;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8218EBC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r4,-62
	ctx.r11.s64 = ctx.r4.s64 + -62;
	// lfs f0,2020(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2020);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8218ebf0
	if (!ctx.cr6.lt) goto loc_8218EBF0;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// ld r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// li r9,1
	ctx.r9.s64 = 1;
	// sld r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r11.u8 & 0x7F));
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
loc_8218EBF0:
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// ld r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// sld r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r10.u8 & 0x7F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// std r10,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// stfsx f1,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821902D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821902e8
	if (!ctx.cr6.eq) goto loc_821902E8;
loc_821902E0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_821902E8:
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821902e0
	if (ctx.cr6.eq) goto loc_821902E0;
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82190338
	if (ctx.cr6.eq) goto loc_82190338;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82190308:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stb r10,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r10.u8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stb r10,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
	// stb r9,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r9.u8);
	// stb r9,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
loc_82190324:
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82190324
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82190324;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 + 136;
	// bne 0x82190308
	if (!ctx.cr0.eq) goto loc_82190308;
loc_82190338:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82191D20) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,-8564
	r30.s64 = ctx.r11.s64 + -8564;
	// li r8,-1
	ctx.r8.s64 = -1;
	// lfd f31,26664(r10)
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 26664);
	// li r5,1
	ctx.r5.s64 = 1;
	// stfd f31,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f31.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f31,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821eacb0
	ctx.lr = 0x82191D78;
	sub_821EACB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r6,84(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r5,r11,21804
	ctx.r5.s64 = ctx.r11.s64 + 21804;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eb1a0
	ctx.lr = 0x82191D90;
	sub_821EB1A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x82191db4
	if (ctx.cr6.eq) goto loc_82191DB4;
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
loc_82191DB4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82191dcc
	if (!ctx.cr6.gt) goto loc_82191DCC;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82191DCC:
	// stfd f31,48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 48, f31.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f1,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821eacb0
	ctx.lr = 0x82191DF4;
	sub_821EACB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r7,84(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r9,-8572
	ctx.r5.s64 = ctx.r9.s64 + -8572;
	// lfs f2,-18584(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -18584);
	ctx.f2.f64 = double(temp.f32);
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
	ctx.lr = 0x82191E28;
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
	ctx.lr = 0x82191E4C;
	sub_821EACB0(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lwz r11,30852(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 30852);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82191eac
	if (ctx.cr6.lt) goto loc_82191EAC;
	// beq cr6,0x82191e88
	if (ctx.cr6.eq) goto loc_82191E88;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82191eb8
	if (!ctx.cr6.lt) goto loc_82191EB8;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,-32480(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
	// sth r8,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r8.u16);
	// b 0x82191ea0
	goto loc_82191EA0;
loc_82191E88:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,-32480(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -32480);
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
loc_82191EA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821f8230
	ctx.lr = 0x82191EA8;
	sub_821F8230(ctx, base);
	// b 0x82191eb8
	goto loc_82191EB8;
loc_82191EAC:
	// li r4,30
	ctx.r4.s64 = 30;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x821d45b0
	ctx.lr = 0x82191EB8;
	sub_821D45B0(ctx, base);
loc_82191EB8:
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

DEFINE_REX_FUNC(sub_8219ABB8) {
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
loc_8219ABCC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82199f28
	ctx.lr = 0x8219ABD4;
	sub_82199F28(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,9
	ctx.cr6.compare<int32_t>(r31.s32, 9, ctx.xer);
	// ble cr6,0x8219abcc
	if (!ctx.cr6.gt) goto loc_8219ABCC;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82199f28
	ctx.lr = 0x8219ABE8;
	sub_82199F28(ctx, base);
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

DEFINE_REX_FUNC(sub_8219B658) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8219B660;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r11,r10,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// lfs f0,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// add r31,r11,r7
	r31.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f13,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
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
	// bl 0x820e1df8
	ctx.lr = 0x8219B6B0;
	sub_820E1DF8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8219b6cc
	if (ctx.cr6.eq) goto loc_8219B6CC;
	// bl 0x821feec8
	ctx.lr = 0x8219B6BC;
	sub_821FEEC8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e20b0
	ctx.lr = 0x8219B6CC;
	sub_820E20B0(ctx, base);
loc_8219B6CC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8219b6ec
	if (ctx.cr6.eq) goto loc_8219B6EC;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// lfs f0,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// lfs f0,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
loc_8219B6EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8219DCD8) {
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
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r11,r11,-32480
	ctx.r11.s64 = ctx.r11.s64 + -32480;
	// lwz r31,12(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219dd0c
	if (ctx.cr6.eq) goto loc_8219DD0C;
	// lwz r11,208(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// stb r10,36(r11)
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r10.u8);
loc_8219DD0C:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219dd1c
	if (ctx.cr6.eq) goto loc_8219DD1C;
	// stb r10,36(r11)
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r10.u8);
loc_8219DD1C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r5,r31,12
	ctx.r5.s64 = r31.s64 + 12;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219dd44
	if (ctx.cr6.eq) goto loc_8219DD44;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r11,r11,-8304
	ctx.r11.s64 = ctx.r11.s64 + -8304;
	// mulli r4,r10,272
	ctx.r4.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(272));
	// lwz r3,496(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 496);
	// bl 0x82190670
	ctx.lr = 0x8219DD44;
	sub_82190670(ctx, base);
loc_8219DD44:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219dd5c
	if (ctx.cr6.eq) goto loc_8219DD5C;
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
loc_8219DD5C:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219dd80
	if (ctx.cr6.eq) goto loc_8219DD80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8219dd80
	if (!ctx.cr6.eq) goto loc_8219DD80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8219DD80:
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

DEFINE_REX_FUNC(sub_821A1108) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,116(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f2,120(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f3,124(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A1828) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f2,12(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// addi r11,r11,6088
	ctx.r11.s64 = ctx.r11.s64 + 6088;
	// stfs f3,16(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f4,28(r3)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A21E8) {
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
	ctx.lr = 0x821A21F0;
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f29.u64);
	// stfd f30,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-32480
	ctx.r11.s64 = ctx.r11.s64 + -32480;
	// lfs f29,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f29.f64 = double(temp.f32);
	// lwz r31,12(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821a2368
	if (ctx.cr6.eq) goto loc_821A2368;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821a23c4
	if (ctx.cr6.eq) goto loc_821A23C4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821a22a8
	if (ctx.cr6.eq) goto loc_821A22A8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821a23cc
	if (!ctx.cr6.eq) goto loc_821A23CC;
	// lfs f30,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	f30.f64 = double(temp.f32);
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821a1b90
	ctx.lr = 0x821A2250;
	sub_821A1B90(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(f30.f64, f31.f64);
	// bgt cr6,0x821a228c
	if (ctx.cr6.gt) goto loc_821A228C;
	// addi r29,r31,20
	r29.s64 = r31.s64 + 20;
	// li r30,49
	r30.s64 = 49;
loc_821A2268:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzu r3,4(r29)
	ea = 4 + r29.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// bl 0x821a3a30
	ctx.lr = 0x821A2274;
	sub_821A3A30(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x821a2268
	if (!ctx.cr0.eq) goto loc_821A2268;
	// li r11,5
	ctx.r11.s64 = 5;
	// stfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x821a23c4
	goto loc_821A23C4;
loc_821A228C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,6876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6876);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x821a23c0
	if (!ctx.cr6.lt) goto loc_821A23C0;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
	// b 0x821a23c0
	goto loc_821A23C0;
loc_821A22A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821a1c60
	ctx.lr = 0x821A22B0;
	sub_821A1C60(ctx, base);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r30,r11,80
	r30.s64 = ctx.r11.s64 + 80;
	// lwz r29,104(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821a22d4
	if (ctx.cr6.eq) goto loc_821A22D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821a20a0
	ctx.lr = 0x821A22D4;
	sub_821A20A0(ctx, base);
loc_821A22D4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821a2fa8
	ctx.lr = 0x821A22E0;
	sub_821A2FA8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,28
	ctx.r11.s64 = r31.s64 + 28;
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821a2304
	if (!ctx.cr6.gt) goto loc_821A2304;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// b 0x821a2334
	goto loc_821A2334;
loc_821A2304:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r3,44
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 44, ctx.xer);
	// lfs f2,16928(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16928);
	ctx.f2.f64 = double(temp.f32);
	// blt cr6,0x821a2320
	if (ctx.cr6.lt) goto loc_821A2320;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f1,2376(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2376);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821a2324
	goto loc_821A2324;
loc_821A2320:
	// fmr f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f2.f64;
loc_821A2324:
	// cmpwi cr6,r3,46
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 46, ctx.xer);
	// bne cr6,0x821a2334
	if (!ctx.cr6.eq) goto loc_821A2334;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f2,2380(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2380);
	ctx.f2.f64 = double(temp.f32);
loc_821A2334:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x821a3a38
	ctx.lr = 0x821A2344;
	sub_821A3A38(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// lfs f3,16308(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16308);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// bl 0x821a3a48
	ctx.lr = 0x821A235C;
	sub_821A3A48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821a1f50
	ctx.lr = 0x821A2364;
	sub_821A1F50(ctx, base);
	// b 0x821a23cc
	goto loc_821A23CC;
loc_821A2368:
	// lfs f31,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	f31.f64 = double(temp.f32);
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821a1b90
	ctx.lr = 0x821A2380;
	sub_821A1B90(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16232);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(f31.f64, ctx.f13.f64);
	// blt cr6,0x821a23a8
	if (ctx.cr6.lt) goto loc_821A23A8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// b 0x821a23c4
	goto loc_821A23C4;
loc_821A23A8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,6876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6876);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821a23c0
	if (!ctx.cr6.gt) goto loc_821A23C0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_821A23C0:
	// stfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
loc_821A23C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821a1c60
	ctx.lr = 0x821A23CC;
	sub_821A1C60(ctx, base);
loc_821A23CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821a1c00
	ctx.lr = 0x821A23D4;
	sub_821A1C00(ctx, base);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821A99A8) {
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
	// bl 0x821a98f0
	ctx.lr = 0x821A99C0;
	sub_821A98F0(ctx, base);
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a99e4
	if (ctx.cr6.eq) goto loc_821A99E4;
	// lbz r10,156(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 156);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_821A99E4:
	// bl 0x821d4940
	ctx.lr = 0x821A99E8;
	sub_821D4940(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,21
	ctx.r9.s64 = 21;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// stb r10,88(r31)
	REX_STORE_U8(r31.u32 + 88, ctx.r10.u8);
	// stw r9,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r9.u32);
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

DEFINE_REX_FUNC(sub_821AAA28) {
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
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822094c0
	ctx.lr = 0x821AAA44;
	sub_822094C0(ctx, base);
	// stw r3,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821aa580
	ctx.lr = 0x821AAA50;
	sub_821AA580(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821ABB78) {
	REX_FUNC_PROLOGUE();
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AC878) {
	REX_FUNC_PROLOGUE();
	// b 0x821acaf0
	sub_821ACAF0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821AD308) {
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
	ctx.lr = 0x821AD310;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r27,r11,-10136
	r27.s64 = ctx.r11.s64 + -10136;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822d5870
	ctx.lr = 0x821AD32C;
	sub_822D5870(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r30,r11,-7072
	r30.s64 = ctx.r11.s64 + -7072;
	// ori r11,r10,20164
	ctx.r11.u64 = ctx.r10.u64 | 20164;
	// lwz r10,16468(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16468);
	// lwzx r18,r30,r11
	r18.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r18,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r18.u32);
	// ble cr6,0x821ad380
	if (!ctx.cr6.gt) goto loc_821AD380;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// addi r10,r30,16478
	ctx.r10.s64 = r30.s64 + 16478;
loc_821AD35C:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x821ad374
	if (!ctx.cr6.eq) goto loc_821AD374;
	// stw r18,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r18.u32);
loc_821AD374:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821ad35c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821AD35C;
loc_821AD380:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r5,384
	ctx.r5.s64 = 384;
	// addi r31,r11,-10552
	r31.s64 = ctx.r11.s64 + -10552;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5870
	ctx.lr = 0x821AD398;
	sub_822D5870(ctx, base);
	// lis r24,-32168
	r24.s64 = -2108162048;
	// lis r23,-32168
	r23.s64 = -2108162048;
	// lwz r11,16468(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16468);
	// lis r22,-32168
	r22.s64 = -2108162048;
	// lis r28,-32168
	r28.s64 = -2108162048;
	// li r21,0
	r21.s64 = 0;
	// li r20,-1
	r20.s64 = -1;
	// mr r26,r21
	r26.u64 = r21.u64;
	// stw r21,-10956(r24)
	REX_STORE_U32(r24.u32 + -10956, r21.u32);
	// mr r29,r21
	r29.u64 = r21.u64;
	// stw r21,-10948(r23)
	REX_STORE_U32(r23.u32 + -10948, r21.u32);
	// mr r25,r21
	r25.u64 = r21.u64;
	// stw r21,-10952(r22)
	REX_STORE_U32(r22.u32 + -10952, r21.u32);
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// stw r21,-10940(r28)
	REX_STORE_U32(r28.u32 + -10940, r21.u32);
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// li r19,1
	r19.s64 = 1;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821ad55c
	if (!ctx.cr6.gt) goto loc_821AD55C;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
loc_821AD3F0:
	// cmpw cr6,r8,r18
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r18.s32, ctx.xer);
	// blt cr6,0x821ad44c
	if (ctx.cr6.lt) goto loc_821AD44C;
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// addi r11,r30,16474
	ctx.r11.s64 = r30.s64 + 16474;
	// mulli r7,r10,24
	ctx.r7.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// addi r17,r31,12
	r17.s64 = r31.s64 + 12;
	// addi r16,r31,16
	r16.s64 = r31.s64 + 16;
	// lha r8,0(r11)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// addi r14,r31,20
	r14.s64 = r31.s64 + 20;
	// lha r15,-2(r11)
	r15.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + -2));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lha r11,2(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 2));
	// stwx r8,r7,r4
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.r8.u32);
	// ld r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// stwx r21,r7,r17
	REX_STORE_U32(ctx.r7.u32 + r17.u32, r21.u32);
	// stwx r15,r7,r31
	REX_STORE_U32(ctx.r7.u32 + r31.u32, r15.u32);
	// stwx r11,r7,r3
	REX_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r11.u32);
	// stwx r5,r7,r16
	REX_STORE_U32(ctx.r7.u32 + r16.u32, ctx.r5.u32);
	// stwx r20,r7,r14
	REX_STORE_U32(ctx.r7.u32 + r14.u32, r20.u32);
	// b 0x821ad52c
	goto loc_821AD52C;
loc_821AD44C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821ad4b8
	if (!ctx.cr6.lt) goto loc_821AD4B8;
	// addi r11,r30,16474
	ctx.r11.s64 = r30.s64 + 16474;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mulli r3,r10,24
	ctx.r3.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// add r7,r6,r11
	ctx.r7.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lha r3,2(r7)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r7.u32 + 2));
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
loc_821AD478:
	// addi r17,r30,16472
	r17.s64 = r30.s64 + 16472;
	// lha r16,0(r7)
	r16.s64 = int16_t(REX_LOAD_U16(ctx.r7.u32 + 0));
	// lhax r17,r6,r17
	r17.s64 = int16_t(REX_LOAD_U16(ctx.r6.u32 + r17.u32));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r5,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stw r19,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r19.u32);
	// stw r16,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r16.u32);
	// stw r17,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r17.u32);
	// stwu r8,24(r11)
	ea = 24 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r9,-10940(r28)
	REX_STORE_U32(r28.u32 + -10940, ctx.r9.u32);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x821ad478
	if (ctx.cr6.lt) goto loc_821AD478;
loc_821AD4B8:
	// cmpw cr6,r8,r18
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r18.s32, ctx.xer);
	// bge cr6,0x821ad534
	if (!ctx.cr6.lt) goto loc_821AD534;
	// addi r7,r30,16474
	ctx.r7.s64 = r30.s64 + 16474;
	// mulli r11,r10,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// addi r18,r31,16
	r18.s64 = r31.s64 + 16;
	// addi r17,r31,20
	r17.s64 = r31.s64 + 20;
	// lha r16,-2(r7)
	r16.s64 = int16_t(REX_LOAD_U16(ctx.r7.u32 + -2));
	// lha r15,0(r7)
	r15.s64 = int16_t(REX_LOAD_U16(ctx.r7.u32 + 0));
	// lha r14,2(r7)
	r14.s64 = int16_t(REX_LOAD_U16(ctx.r7.u32 + 2));
	// lbz r7,5(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 5);
	// stwx r16,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, r16.u32);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// stwx r15,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, r15.u32);
	// stwx r14,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, r14.u32);
	// addi r7,r31,12
	ctx.r7.s64 = r31.s64 + 12;
	// stwx r5,r11,r18
	REX_STORE_U32(ctx.r11.u32 + r18.u32, ctx.r5.u32);
	// stwx r8,r11,r17
	REX_STORE_U32(ctx.r11.u32 + r17.u32, ctx.r8.u32);
	// bne cr6,0x821ad51c
	if (!ctx.cr6.eq) goto loc_821AD51C;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// stwx r21,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, r21.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// b 0x821ad524
	goto loc_821AD524;
loc_821AD51C:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// stwx r20,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, r20.u32);
loc_821AD524:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,-10940(r28)
	REX_STORE_U32(r28.u32 + -10940, ctx.r9.u32);
loc_821AD52C:
	// lwz r18,80(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_821AD534:
	// lwz r11,16468(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16468);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821ad3f0
	if (ctx.cr6.lt) goto loc_821AD3F0;
	// stw r25,-10952(r22)
	REX_STORE_U32(r22.u32 + -10952, r25.u32);
	// stw r26,-10956(r24)
	REX_STORE_U32(r24.u32 + -10956, r26.u32);
	// stw r29,-10948(r23)
	REX_STORE_U32(r23.u32 + -10948, r29.u32);
	// stw r9,-10940(r28)
	REX_STORE_U32(r28.u32 + -10940, ctx.r9.u32);
loc_821AD55C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r28,r11,-10168
	r28.s64 = ctx.r11.s64 + -10168;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822d5870
	ctx.lr = 0x821AD574;
	sub_822D5870(ctx, base);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// ble cr6,0x821ad5b4
	if (!ctx.cr6.gt) goto loc_821AD5B4;
	// addis r10,r30,1
	ctx.r10.s64 = r30.s64 + 65536;
	// mtctr r18
	ctx.ctr.u64 = r18.u64;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// addi r10,r10,20174
	ctx.r10.s64 = ctx.r10.s64 + 20174;
loc_821AD58C:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x821ad5a8
	if (!ctx.cr6.eq) goto loc_821AD5A8;
	// lwz r9,16468(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16468);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_821AD5A8:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821ad58c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821AD58C;
loc_821AD5B4:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r5,384
	ctx.r5.s64 = 384;
	// addi r31,r11,-10936
	r31.s64 = ctx.r11.s64 + -10936;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5870
	ctx.lr = 0x821AD5CC;
	sub_822D5870(ctx, base);
	// lis r27,-32168
	r27.s64 = -2108162048;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// mr r29,r21
	r29.u64 = r21.u64;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// stw r21,-10944(r27)
	REX_STORE_U32(r27.u32 + -10944, r21.u32);
	// ble cr6,0x821ad74c
	if (!ctx.cr6.gt) goto loc_821AD74C;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
loc_821AD5F0:
	// lwz r11,16468(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16468);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821ad64c
	if (ctx.cr6.lt) goto loc_821AD64C;
	// addis r11,r30,1
	ctx.r11.s64 = r30.s64 + 65536;
	// mulli r9,r10,24
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// addi r11,r11,20170
	ctx.r11.s64 = ctx.r11.s64 + 20170;
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// addi r26,r31,16
	r26.s64 = r31.s64 + 16;
	// addi r25,r31,20
	r25.s64 = r31.s64 + 20;
	// lha r24,-2(r11)
	r24.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + -2));
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lha r23,0(r11)
	r23.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// lha r11,2(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 2));
	// stwx r21,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, r21.u32);
	// stwx r24,r9,r31
	REX_STORE_U32(ctx.r9.u32 + r31.u32, r24.u32);
	// stwx r23,r9,r5
	REX_STORE_U32(ctx.r9.u32 + ctx.r5.u32, r23.u32);
	// stwx r11,r9,r4
	REX_STORE_U32(ctx.r9.u32 + ctx.r4.u32, ctx.r11.u32);
	// stwx r29,r9,r26
	REX_STORE_U32(ctx.r9.u32 + r26.u32, r29.u32);
	// stwx r20,r9,r25
	REX_STORE_U32(ctx.r9.u32 + r25.u32, r20.u32);
	// b 0x821ad730
	goto loc_821AD730;
loc_821AD64C:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821ad6bc
	if (!ctx.cr6.lt) goto loc_821AD6BC;
	// addis r9,r30,1
	ctx.r9.s64 = r30.s64 + 65536;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r9,r9,20170
	ctx.r9.s64 = ctx.r9.s64 + 20170;
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// mulli r11,r10,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// lha r5,2(r9)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + 2));
loc_821AD67C:
	// addis r3,r30,1
	ctx.r3.s64 = r30.s64 + 65536;
	// lha r26,0(r9)
	r26.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + 0));
	// addi r3,r3,20168
	ctx.r3.s64 = ctx.r3.s64 + 20168;
	// stw r5,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// stw r29,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r29.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r19,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r19.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r26,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r26.u32);
	// stw r7,-10944(r27)
	REX_STORE_U32(r27.u32 + -10944, ctx.r7.u32);
	// lhax r3,r6,r3
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r6.u32 + ctx.r3.u32));
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// stwu r8,24(r11)
	ea = 24 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x821ad67c
	if (ctx.cr6.lt) goto loc_821AD67C;
loc_821AD6BC:
	// lwz r11,16468(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16468);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821ad734
	if (!ctx.cr6.lt) goto loc_821AD734;
	// addis r9,r30,1
	ctx.r9.s64 = r30.s64 + 65536;
	// mulli r11,r10,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// addi r9,r9,20170
	ctx.r9.s64 = ctx.r9.s64 + 20170;
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// addi r26,r31,20
	r26.s64 = r31.s64 + 20;
	// lha r25,-2(r9)
	r25.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + -2));
	// lha r24,0(r9)
	r24.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + 0));
	// lha r23,2(r9)
	r23.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + 2));
	// lbz r9,5(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 5);
	// stwx r25,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, r25.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// stwx r24,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, r24.u32);
	// stwx r23,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, r23.u32);
	// addi r9,r31,12
	ctx.r9.s64 = r31.s64 + 12;
	// stwx r29,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, r29.u32);
	// stwx r8,r11,r26
	REX_STORE_U32(ctx.r11.u32 + r26.u32, ctx.r8.u32);
	// bne cr6,0x821ad724
	if (!ctx.cr6.eq) goto loc_821AD724;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r21,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r21.u32);
	// b 0x821ad728
	goto loc_821AD728;
loc_821AD724:
	// stwx r20,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r20.u32);
loc_821AD728:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r7,-10944(r27)
	REX_STORE_U32(r27.u32 + -10944, ctx.r7.u32);
loc_821AD730:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_821AD734:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// cmpw cr6,r29,r18
	ctx.cr6.compare<int32_t>(r29.s32, r18.s32, ctx.xer);
	// blt cr6,0x821ad5f0
	if (ctx.cr6.lt) goto loc_821AD5F0;
	// stw r7,-10944(r27)
	REX_STORE_U32(r27.u32 + -10944, ctx.r7.u32);
loc_821AD74C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_821C34C0) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c35b4
	if (!ctx.cr0.eq) goto loc_821C35B4;
	// lwz r11,10200(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10200);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821c357c
	if (ctx.cr6.lt) goto loc_821C357C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x821c3590
	if (!ctx.cr6.lt) goto loc_821C3590;
	// lwa r11,10204(r3)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r3.u32 + 10204));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,26896(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26896);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820e0028
	ctx.lr = 0x821C3520;
	sub_820E0028(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,10200(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10200);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fsel f13,f1,f1,f0
	ctx.f13.f64 = ctx.f1.f64 >= 0.0 ? ctx.f1.f64 : ctx.f0.f64;
	// bne cr6,0x821c353c
	if (!ctx.cr6.eq) goto loc_821C353C;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
loc_821C353C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2012(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bge cr6,0x821c3558
	if (!ctx.cr6.lt) goto loc_821C3558;
	// lwz r11,10204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10204);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// stw r11,10204(r31)
	REX_STORE_U32(r31.u32 + 10204, ctx.r11.u32);
loc_821C3558:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16364(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16364);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// ble cr6,0x821c3570
	if (!ctx.cr6.gt) goto loc_821C3570;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,10200(r31)
	REX_STORE_U32(r31.u32 + 10200, ctx.r11.u32);
loc_821C3570:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,12192(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12192);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821c3588
	goto loc_821C3588;
loc_821C357C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,10212(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 10212);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-31132(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -31132);
	ctx.f0.f64 = double(temp.f32);
loc_821C3588:
	// fmuls f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,10212(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10212, temp.u32);
loc_821C3590:
	// lwz r11,10204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10204);
	// lfs f0,10312(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 10312);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,10208(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10208);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f12,10212(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10212);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,15756(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 15756, temp.u32);
	// stfs f12,15760(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 15760, temp.u32);
	// stw r11,10204(r31)
	REX_STORE_U32(r31.u32 + 10204, ctx.r11.u32);
loc_821C35B4:
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

DEFINE_REX_FUNC(sub_821C6800) {
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
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,-7176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -7176);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x821c6830
	if (ctx.cr6.eq) goto loc_821C6830;
loc_821C6828:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821c6a14
	goto loc_821C6A14;
loc_821C6830:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r30,r11,432
	r30.s64 = ctx.r11.s64 + 432;
	// lhz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 2);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x821c6950
	if (ctx.cr6.eq) goto loc_821C6950;
	// lwz r8,5464(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 5464);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x821c6a10
	if (ctx.cr6.eq) goto loc_821C6A10;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x821c6a10
	if (ctx.cr6.eq) goto loc_821C6A10;
	// lhz r11,10(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c68b8
	if (ctx.cr0.eq) goto loc_821C68B8;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lbz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r10,r11,23240
	ctx.r10.s64 = ctx.r11.s64 + 23240;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// addi r7,r10,120
	ctx.r7.s64 = ctx.r10.s64 + 120;
	// mulli r6,r11,284
	ctx.r6.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(284));
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r7,r6,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// rlwinm r6,r11,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// srw r6,r9,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// and. r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x821c6a10
	if (!ctx.cr0.eq) goto loc_821C6A10;
	// mulli r7,r11,284
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(284));
	// addi r10,r10,124
	ctx.r10.s64 = ctx.r10.s64 + 124;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// srw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// lwzx r10,r7,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c68b8
	if (ctx.cr0.eq) goto loc_821C68B8;
loc_821C68B0:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x821c6a14
	goto loc_821C6A14;
loc_821C68B8:
	// lbz r11,163(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 163);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c690c
	if (ctx.cr0.eq) goto loc_821C690C;
	// lwz r11,5436(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821c6a10
	if (!ctx.cr6.eq) goto loc_821C6A10;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821c6a10
	if (!ctx.cr6.eq) goto loc_821C6A10;
	// lhz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 88);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// beq cr6,0x821c69c0
	if (ctx.cr6.eq) goto loc_821C69C0;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x821c6904
	if (ctx.cr6.eq) goto loc_821C6904;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// beq cr6,0x821c6904
	if (ctx.cr6.eq) goto loc_821C6904;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// bne cr6,0x821c690c
	if (!ctx.cr6.eq) goto loc_821C690C;
	// li r3,14
	ctx.r3.s64 = 14;
	// b 0x821c6a14
	goto loc_821C6A14;
loc_821C6904:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x821c6a14
	goto loc_821C6A14;
loc_821C690C:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x821c6924
	if (!ctx.cr6.eq) goto loc_821C6924;
	// lwz r11,220(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 220);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821c6a10
	if (ctx.cr6.eq) goto loc_821C6A10;
loc_821C6924:
	// lbz r11,187(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 187);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c6938
	if (ctx.cr0.eq) goto loc_821C6938;
loc_821C6930:
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x821c6a14
	goto loc_821C6A14;
loc_821C6938:
	// lbz r11,175(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 175);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c6904
	if (!ctx.cr0.eq) goto loc_821C6904;
	// lbz r11,174(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 174);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c6a10
	if (!ctx.cr0.eq) goto loc_821C6A10;
loc_821C6950:
	// bl 0x821d8198
	ctx.lr = 0x821C6954;
	sub_821D8198(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821c69c8
	if (ctx.cr0.eq) goto loc_821C69C8;
	// lhz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 88);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x821c69a0
	if (ctx.cr6.gt) goto loc_821C69A0;
	// beq cr6,0x821c6990
	if (ctx.cr6.eq) goto loc_821C6990;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x821c6904
	if (ctx.cr6.eq) goto loc_821C6904;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x821c68b0
	if (ctx.cr6.eq) goto loc_821C68B0;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x821c6904
	if (ctx.cr6.eq) goto loc_821C6904;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
loc_821C6988:
	// bne cr6,0x821c6828
	if (!ctx.cr6.eq) goto loc_821C6828;
	// b 0x821c6930
	goto loc_821C6930;
loc_821C6990:
	// lwz r11,220(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 220);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821c68b0
	if (!ctx.cr6.eq) goto loc_821C68B0;
	// b 0x821c6930
	goto loc_821C6930;
loc_821C69A0:
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x821c6930
	if (ctx.cr6.eq) goto loc_821C6930;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// beq cr6,0x821c68b0
	if (ctx.cr6.eq) goto loc_821C68B0;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// beq cr6,0x821c69c0
	if (ctx.cr6.eq) goto loc_821C69C0;
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// b 0x821c6988
	goto loc_821C6988;
loc_821C69C0:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x821c6a14
	goto loc_821C6A14;
loc_821C69C8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,5464(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 5464);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c6828
	if (ctx.cr6.eq) goto loc_821C6828;
	// lhz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 88);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x821c68b0
	if (ctx.cr6.eq) goto loc_821C68B0;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x821c69c0
	if (ctx.cr6.eq) goto loc_821C69C0;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x821c68b0
	if (ctx.cr6.eq) goto loc_821C68B0;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// beq cr6,0x821c69c0
	if (ctx.cr6.eq) goto loc_821C69C0;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// beq cr6,0x821c68b0
	if (ctx.cr6.eq) goto loc_821C68B0;
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// beq cr6,0x821c68b0
	if (ctx.cr6.eq) goto loc_821C68B0;
	// b 0x821c6828
	goto loc_821C6828;
loc_821C6A10:
	// li r3,5
	ctx.r3.s64 = 5;
loc_821C6A14:
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

DEFINE_REX_FUNC(sub_821D1350) {
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
	// lis r30,-32168
	r30.s64 = -2108162048;
	// lwz r31,-8920(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + -8920);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821d138c
	if (ctx.cr6.eq) goto loc_821D138C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e48c0
	ctx.lr = 0x821D137C;
	sub_820E48C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x821D1384;
	sub_822C80A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8920(r30)
	REX_STORE_U32(r30.u32 + -8920, ctx.r11.u32);
loc_821D138C:
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

DEFINE_REX_FUNC(sub_821D1A50) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,432
	ctx.r9.s64 = ctx.r10.s64 + 432;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,720(r9)
	REX_STORE_U32(ctx.r9.u32 + 720, ctx.r11.u32);
	// stw r10,724(r9)
	REX_STORE_U32(ctx.r9.u32 + 724, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D1EC0) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8908(r10)
	REX_STORE_U32(ctx.r10.u32 + -8908, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D24F0) {
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
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r31,-32480(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// addi r11,r31,80
	ctx.r11.s64 = r31.s64 + 80;
	// bl 0x821b0030
	ctx.lr = 0x821D2514;
	sub_821B0030(ctx, base);
	// stw r3,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// bl 0x821d5140
	ctx.lr = 0x821D251C;
	sub_821D5140(ctx, base);
	// bl 0x821d1e40
	ctx.lr = 0x821D2520;
	sub_821D1E40(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r10,r10,-8304
	ctx.r10.s64 = ctx.r10.s64 + -8304;
	// addi r11,r11,-7176
	ctx.r11.s64 = ctx.r11.s64 + -7176;
	// li r3,4
	ctx.r3.s64 = 4;
	// lha r5,98(r11)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 98));
	// lwz r10,44(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// addis r4,r10,29
	ctx.r4.s64 = ctx.r10.s64 + 1900544;
	// bl 0x8212ec38
	ctx.lr = 0x821D2544;
	sub_8212EC38(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r11,-8948(r10)
	REX_STORE_U32(ctx.r10.u32 + -8948, ctx.r11.u32);
	// lfs f0,1992(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,7840(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 7840);
	// addi r10,r11,108
	ctx.r10.s64 = ctx.r11.s64 + 108;
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stfs f0,112(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// stfs f0,116(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// stfs f0,120(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 120, temp.u32);
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

DEFINE_REX_FUNC(sub_821D4A70) {
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
	// li r31,1
	r31.s64 = 1;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821d4a98
	if (!ctx.cr6.eq) goto loc_821D4A98;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lbz r3,1834(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 1834);
loc_821D4A98:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x821d4ac4
	if (ctx.cr6.eq) goto loc_821D4AC4;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x821d4b10
	if (ctx.cr6.eq) goto loc_821D4B10;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x821d4b08
	if (ctx.cr6.eq) goto loc_821D4B08;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x821d4b00
	if (ctx.cr6.eq) goto loc_821D4B00;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x821d4af8
	if (ctx.cr6.eq) goto loc_821D4AF8;
	// li r31,0
	r31.s64 = 0;
loc_821D4AC4:
	// li r10,1
	ctx.r10.s64 = 1;
loc_821D4AC8:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// stw r10,344(r11)
	REX_STORE_U32(ctx.r11.u32 + 344, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,348(r11)
	REX_STORE_U32(ctx.r11.u32 + 348, ctx.r10.u32);
	// bl 0x820e6b70
	ctx.lr = 0x821D4AE0;
	sub_820E6B70(ctx, base);
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
loc_821D4AF8:
	// li r10,6
	ctx.r10.s64 = 6;
	// b 0x821d4ac8
	goto loc_821D4AC8;
loc_821D4B00:
	// li r10,5
	ctx.r10.s64 = 5;
	// b 0x821d4ac8
	goto loc_821D4AC8;
loc_821D4B08:
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x821d4ac8
	goto loc_821D4AC8;
loc_821D4B10:
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x821d4ac8
	goto loc_821D4AC8;
}

DEFINE_REX_FUNC(sub_821D7888) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e7c
	ctx.lr = 0x821D7890;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d4f38
	ctx.lr = 0x821D7898;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r26,r11,432
	r26.s64 = ctx.r11.s64 + 432;
	// li r28,0
	r28.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// addi r27,r10,3976
	r27.s64 = ctx.r10.s64 + 3976;
	// lhz r11,30(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 30);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x821d78e0
	if (!ctx.cr6.eq) goto loc_821D78E0;
	// lwz r11,516(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 516);
	// addi r10,r27,24
	ctx.r10.s64 = r27.s64 + 24;
	// li r28,1
	r28.s64 = 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r25,1
	r25.s64 = 1;
	// lhax r3,r11,r10
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32));
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821d7a9c
	if (!ctx.cr6.eq) goto loc_821D7A9C;
loc_821D78E0:
	// li r10,17
	ctx.r10.s64 = 17;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821D78EC:
	// lbzx r10,r11,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r27.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821d7900
	if (ctx.cr0.eq) goto loc_821D7900;
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stbx r10,r11,r27
	REX_STORE_U8(ctx.r11.u32 + r27.u32, ctx.r10.u8);
loc_821D7900:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x821d78ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D78EC;
	// lwz r11,80(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 80);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r30,-1
	r30.s64 = -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lfs f31,-24864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24864);
	f31.f64 = double(temp.f32);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,16188(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16188);
	f30.f64 = double(temp.f32);
loc_821D7930:
	// bl 0x821fedc8
	ctx.lr = 0x821D7934;
	sub_821FEDC8(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f31.f64));
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e00d8
	ctx.lr = 0x821D7954;
	sub_821E00D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821d7990
	if (ctx.cr0.eq) goto loc_821D7990;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821d77e0
	ctx.lr = 0x821D7964;
	sub_821D77E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821d7990
	if (ctx.cr0.eq) goto loc_821D7990;
	// bl 0x821fed88
	ctx.lr = 0x821D7970;
	sub_821FED88(ctx, base);
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f30.f64));
	// lbzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + r27.u32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x821d7990
	if (ctx.cr6.gt) goto loc_821D7990;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_821D7990:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(r30.s32, -1, ctx.xer);
	// beq cr6,0x821d7930
	if (ctx.cr6.eq) goto loc_821D7930;
	// li r11,8
	ctx.r11.s64 = 8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stbx r11,r30,r27
	REX_STORE_U8(r30.u32 + r27.u32, ctx.r11.u8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r29,-1
	r29.s64 = -1;
	// lfs f29,16228(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16228);
	f29.f64 = double(temp.f32);
	// clrlwi r28,r30,24
	r28.u64 = r30.u32 & 0xFF;
	// lfs f28,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	f28.f64 = double(temp.f32);
	// lfs f30,16196(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16196);
	f30.f64 = double(temp.f32);
	// lfs f31,16172(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16172);
	f31.f64 = double(temp.f32);
loc_821D79C8:
	// li r31,0
	r31.s64 = 0;
	// bl 0x821fedc8
	ctx.lr = 0x821D79D0;
	sub_821FEDC8(ctx, base);
	// cmpwi cr6,r30,12
	ctx.cr6.compare<int32_t>(r30.s32, 12, ctx.xer);
	// blt cr6,0x821d7a5c
	if (ctx.cr6.lt) goto loc_821D7A5C;
	// cmpwi cr6,r30,13
	ctx.cr6.compare<int32_t>(r30.s32, 13, ctx.xer);
	// ble cr6,0x821d7a4c
	if (!ctx.cr6.gt) goto loc_821D7A4C;
	// cmpwi cr6,r30,14
	ctx.cr6.compare<int32_t>(r30.s32, 14, ctx.xer);
	// beq cr6,0x821d7a38
	if (ctx.cr6.eq) goto loc_821D7A38;
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(r30.s32, 15, ctx.xer);
	// beq cr6,0x821d7a20
	if (ctx.cr6.eq) goto loc_821D7A20;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(r30.s32, 16, ctx.xer);
	// bne cr6,0x821d7a5c
	if (!ctx.cr6.eq) goto loc_821D7A5C;
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f31.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821d7a18
	if (!ctx.cr6.eq) goto loc_821D7A18;
	// li r31,1
	r31.s64 = 1;
	// b 0x821d7a5c
	goto loc_821D7A5C;
loc_821D7A18:
	// addi r31,r11,6
	r31.s64 = ctx.r11.s64 + 6;
	// b 0x821d7a5c
	goto loc_821D7A5C;
loc_821D7A20:
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f30.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subfic r31,r11,6
	ctx.xer.ca = ctx.r11.u32 <= 6;
	r31.u64 = static_cast<uint64_t>(6) - ctx.r11.u64;
	// b 0x821d7a5c
	goto loc_821D7A5C;
loc_821D7A38:
	// fmuls f0,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f29.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x821d7a5c
	goto loc_821D7A5C;
loc_821D7A4C:
	// fmuls f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f28.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_821D7A5C:
	// rlwinm r11,r31,8,20,23
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 8) & 0xF00;
	// or r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 | r28.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x821d77e0
	ctx.lr = 0x821D7A6C;
	sub_821D77E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821d7a78
	if (ctx.cr0.eq) goto loc_821D7A78;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
loc_821D7A78:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(r29.s32, -1, ctx.xer);
	// beq cr6,0x821d79c8
	if (ctx.cr6.eq) goto loc_821D79C8;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x821d7a98
	if (ctx.cr6.eq) goto loc_821D7A98;
	// lwz r11,516(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 516);
	// addi r10,r27,24
	ctx.r10.s64 = r27.s64 + 24;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r29,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, r29.u16);
loc_821D7A98:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_821D7A9C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d4f84
	ctx.lr = 0x821D7AA8;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_821E1BD0) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821e2fb8
	ctx.lr = 0x821E1BEC;
	sub_821E2FB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,13420
	ctx.r11.s64 = ctx.r11.s64 + 13420;
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

DEFINE_REX_FUNC(sub_821E1F40) {
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
	// bne 0x821e1fdc
	if (!ctx.cr0.eq) goto loc_821E1FDC;
	// lbz r10,2973(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2973);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821e1fdc
	if (!ctx.cr0.eq) goto loc_821E1FDC;
	// lhz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x821e1fdc
	if (!ctx.cr6.eq) goto loc_821E1FDC;
	// lha r10,30(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 30));
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x821e1f80
	if (ctx.cr6.lt) goto loc_821E1F80;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// ble cr6,0x821e1fdc
	if (!ctx.cr6.gt) goto loc_821E1FDC;
loc_821E1F80:
	// lbz r10,6(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 6);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821e1fdc
	if (!ctx.cr0.eq) goto loc_821E1FDC;
	// lbz r10,2(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// lwz r11,2980(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2980);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821e1fdc
	if (!ctx.cr6.eq) goto loc_821E1FDC;
	// lhz r11,624(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 624);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x821e1fdc
	if (!ctx.cr6.eq) goto loc_821E1FDC;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r11,5608
	ctx.r9.s64 = ctx.r11.s64 + 5608;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// stw r11,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
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
loc_821E1FDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E3950) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// lwz r10,216(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// beq cr6,0x821e3a54
	if (ctx.cr6.eq) goto loc_821E3A54;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x821e39c0
	if (ctx.cr6.lt) goto loc_821E39C0;
	// beq cr6,0x821e39b8
	if (ctx.cr6.eq) goto loc_821E39B8;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x821e39d4
	if (ctx.cr6.gt) goto loc_821E39D4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,2008(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2008);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,26528(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 26528);
	ctx.f11.f64 = double(temp.f32);
	// fnmsubs f13,f0,f13,f12
	ctx.f13.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f13.f64, -ctx.f12.f64)));
	// stfs f13,156(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 156, temp.u32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// b 0x821e3a74
	goto loc_821E3A74;
loc_821E39B8:
	// li r8,4
	ctx.r8.s64 = 4;
	// b 0x821e3a58
	goto loc_821E3A58;
loc_821E39C0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821e39e8
	if (!ctx.cr6.gt) goto loc_821E39E8;
loc_821E39D4:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// stb r9,188(r11)
	REX_STORE_U8(ctx.r11.u32 + 188, ctx.r9.u8);
	// blr 
	return;
loc_821E39E8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,15968(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15968);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x821e3a00
	if (ctx.cr6.gt) goto loc_821E3A00;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
loc_821E3A00:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f9,208(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 208);
	ctx.f9.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f13,16020(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16020);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f13,2008(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2008);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f13,f0,f13,f12
	ctx.f13.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f13.f64, -ctx.f12.f64)));
	// stfs f13,156(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 156, temp.u32);
	// lfs f10,-11776(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -11776);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,26528(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 26528);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f0,f11
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f12,204(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 204, temp.u32);
	// fmuls f13,f8,f0
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmadds f13,f8,f10,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f10.f64, ctx.f13.f64)));
	// fnmsubs f0,f13,f0,f9
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f0.f64, -ctx.f9.f64)));
	// stfs f0,116(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// blr 
	return;
loc_821E3A54:
	// li r8,2
	ctx.r8.s64 = 2;
loc_821E3A58:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,116(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stfs f0,208(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 208, temp.u32);
	// stw r8,216(r11)
	REX_STORE_U32(ctx.r11.u32 + 216, ctx.r8.u32);
	// stb r9,104(r11)
	REX_STORE_U8(ctx.r11.u32 + 104, ctx.r9.u8);
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
loc_821E3A74:
	// stfs f0,204(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 204, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E9468) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// bl 0x821e9330
	ctx.lr = 0x821E947C;
	sub_821E9330(ctx, base);
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lfs f13,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r9,46
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 46, ctx.xer);
	// bne cr6,0x821e9520
	if (!ctx.cr6.eq) goto loc_821E9520;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// blt cr6,0x821e9510
	if (ctx.cr6.lt) goto loc_821E9510;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,2384(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2384);
	ctx.f0.f64 = double(temp.f32);
loc_821E94B8:
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// bgt cr6,0x821e94ec
	if (ctx.cr6.gt) goto loc_821E94EC;
	// cmplwi cr6,r9,7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 7, ctx.xer);
	// bge cr6,0x821e9508
	if (!ctx.cr6.lt) goto loc_821E9508;
	// mulli r8,r8,10
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(10));
	// fmuls f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,-48
	ctx.r8.s64 = ctx.r8.s64 + -48;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bge cr6,0x821e94b8
	if (!ctx.cr6.lt) goto loc_821E94B8;
loc_821E94EC:
	// cmplwi cr6,r9,7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 7, ctx.xer);
	// blt cr6,0x821e9510
	if (ctx.cr6.lt) goto loc_821E9510;
	// b 0x821e9508
	goto loc_821E9508;
loc_821E94F8:
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// bgt cr6,0x821e9510
	if (ctx.cr6.gt) goto loc_821E9510;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_821E9508:
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bge cr6,0x821e94f8
	if (!ctx.cr6.lt) goto loc_821E94F8;
loc_821E9510:
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// beq cr6,0x821e951c
	if (ctx.cr6.eq) goto loc_821E951C;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_821E951C:
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
loc_821E9520:
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
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfs f12,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x821e9560
	if (!ctx.cr6.lt) goto loc_821E9560;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fnmsubs f1,f12,f13,f0
	ctx.f1.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f13.f64, -ctx.f0.f64)));
	// b 0x821e9574
	goto loc_821E9574;
loc_821E9560:
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmadds f1,f12,f13,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
loc_821E9574:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821EF118) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821EF790) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,60
	ctx.r7.s64 = 60;
	// stb r10,1812(r3)
	REX_STORE_U8(ctx.r3.u32 + 1812, ctx.r10.u8);
	// li r6,2
	ctx.r6.s64 = 2;
	// lfs f0,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,17464(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 17464);
	ctx.f13.f64 = double(temp.f32);
	// stb r10,1811(r3)
	REX_STORE_U8(ctx.r3.u32 + 1811, ctx.r10.u8);
	// stfs f0,1840(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 1840, temp.u32);
	// stb r10,1813(r3)
	REX_STORE_U8(ctx.r3.u32 + 1813, ctx.r10.u8);
	// stfs f13,1836(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 1836, temp.u32);
	// stb r10,1819(r3)
	REX_STORE_U8(ctx.r3.u32 + 1819, ctx.r10.u8);
	// stfs f0,1844(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 1844, temp.u32);
	// stb r11,1888(r3)
	REX_STORE_U8(ctx.r3.u32 + 1888, ctx.r11.u8);
	// stb r7,1827(r3)
	REX_STORE_U8(ctx.r3.u32 + 1827, ctx.r7.u8);
	// stb r11,1829(r3)
	REX_STORE_U8(ctx.r3.u32 + 1829, ctx.r11.u8);
	// stb r6,1820(r3)
	REX_STORE_U8(ctx.r3.u32 + 1820, ctx.r6.u8);
	// stb r11,1831(r3)
	REX_STORE_U8(ctx.r3.u32 + 1831, ctx.r11.u8);
	// sth r11,1832(r3)
	REX_STORE_U16(ctx.r3.u32 + 1832, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F09D8) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3144(r3)
	REX_STORE_U32(ctx.r3.u32 + 3144, ctx.r11.u32);
	// stw r11,3148(r3)
	REX_STORE_U32(ctx.r3.u32 + 3148, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F0C40) {
	REX_FUNC_PROLOGUE();
	// b 0x822cc618
	sub_822CC618(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F0D28) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r10,r4,14,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0x10000;
	// lwz r8,104(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// rlwinm r9,r10,10,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x20000;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// beq cr6,0x821f0d4c
	if (ctx.cr6.eq) goto loc_821F0D4C;
	// lwz r8,108(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
loc_821F0D4C:
	// xor r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// stw r8,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r8.u32);
	// stw r10,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// and. r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// and r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ctx.r8.u64;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// beq 0x821f0d80
	if (ctx.cr0.eq) goto loc_821F0D80;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r10,r10,13128
	ctx.r10.s64 = ctx.r10.s64 + 13128;
	// lfs f0,1788(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1788);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821f0dc4
	goto loc_821F0DC4;
loc_821F0D80:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x821f0dcc
	if (!ctx.cr6.eq) goto loc_821F0DCC;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,1996(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x821f0dc0
	if (ctx.cr6.gt) goto loc_821F0DC0;
	// lis r8,-32165
	ctx.r8.s64 = -2107965440;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r10,r8,13128
	ctx.r10.s64 = ctx.r8.s64 + 13128;
	// lfs f13,1792(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1792);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x821f0dc4
	goto loc_821F0DC4;
loc_821F0DC0:
	// li r9,0
	ctx.r9.s64 = 0;
loc_821F0DC4:
	// stfs f0,112(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// b 0x821f0df8
	goto loc_821F0DF8;
loc_821F0DCC:
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// lfs f12,112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r9,r9,13128
	ctx.r9.s64 = ctx.r9.s64 + 13128;
	// lfs f13,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1792(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1792);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821f0df8
	if (!ctx.cr6.gt) goto loc_821F0DF8;
	// li r9,0
	ctx.r9.s64 = 0;
loc_821F0DF8:
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F4CB8) {
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
	ctx.lr = 0x821F4CC0;
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
	// ble cr6,0x821f4d40
	if (!ctx.cr6.gt) goto loc_821F4D40;
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
	// bl 0x821f4bb8
	ctx.lr = 0x821F4D04;
	sub_821F4BB8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// add r5,r29,r31
	ctx.r5.u64 = r29.u64 + r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// subf r3,r29,r31
	ctx.r3.u64 = r31.u64 - r29.u64;
	// bl 0x821f4bb8
	ctx.lr = 0x821F4D18;
	sub_821F4BB8(ctx, base);
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
	// bl 0x821f4bb8
	ctx.lr = 0x821F4D30;
	sub_821F4BB8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x821f4d44
	goto loc_821F4D44;
loc_821F4D40:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_821F4D44:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821f4bb8
	ctx.lr = 0x821F4D4C;
	sub_821F4BB8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_821F8360) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821F8368;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821f838c
	if (!ctx.cr6.eq) goto loc_821F838C;
	// addi r11,r3,15
	ctx.r11.s64 = ctx.r3.s64 + 15;
	// rlwinm r31,r11,0,0,27
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r30,r31,416
	r30.s64 = r31.s64 + 416;
	// b 0x821f8390
	goto loc_821F8390;
loc_821F838C:
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_821F8390:
	// li r5,416
	ctx.r5.s64 = 416;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82204c18
	ctx.lr = 0x821F83A0;
	sub_82204C18(ctx, base);
	// mulli r5,r29,416
	ctx.r5.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(416));
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82204c18
	ctx.lr = 0x821F83B0;
	sub_82204C18(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_821F83BC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821f8444
	if (!ctx.cr6.eq) goto loc_821F8444;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r9,r9,41064
	ctx.r9.u64 = ctx.r9.u64 | 41064;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821f83bc
	if (ctx.cr6.lt) goto loc_821F83BC;
	// addi r11,r31,431
	ctx.r11.s64 = r31.s64 + 431;
	// sth r7,10(r31)
	REX_STORE_U16(r31.u32 + 10, ctx.r7.u16);
	// sth r29,8(r31)
	REX_STORE_U16(r31.u32 + 8, r29.u16);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// ble cr6,0x821f842c
	if (!ctx.cr6.gt) goto loc_821F842C;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_821F8404:
	// addi r8,r11,416
	ctx.r8.s64 = ctx.r11.s64 + 416;
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// sth r10,66(r11)
	REX_STORE_U16(ctx.r11.u32 + 66, ctx.r10.u16);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// sth r6,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r6.u16);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x821f8404
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F8404;
loc_821F842C:
	// addi r11,r11,-416
	ctx.r11.s64 = ctx.r11.s64 + -416;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
loc_821F8444:
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x822d63f0
	ctx.lr = 0x821F844C;
	sub_822D63F0(ctx, base);
}

DEFINE_REX_FUNC(sub_821FB120) {
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
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f4,1344(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 1344);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,1340(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 1340);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,1336(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 1336);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,1332(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 1332);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82202a80
	ctx.lr = 0x821FB154;
	sub_82202A80(ctx, base);
	// lfs f0,204(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lfs f13,140(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x820e1cf8
	ctx.lr = 0x821FB16C;
	sub_820E1CF8(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r6,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,7792(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7792);
	// addi r3,r11,4464
	ctx.r3.s64 = ctx.r11.s64 + 4464;
	// lwz r11,4464(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4464);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FB19C;
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

DEFINE_REX_FUNC(sub_821FF380) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,112(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfd f31,-17960(r11)
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -17960);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x822d5b48
	ctx.lr = 0x821FF3B0;
	sub_822D5B48(ctx, base);
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// frsp f30,f1
	f30.f64 = double(float(ctx.f1.f64));
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x822d5b48
	ctx.lr = 0x821FF3C4;
	sub_822D5B48(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r3,104(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r10,0
	ctx.r10.s64 = 0;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82209d88
	ctx.lr = 0x821FF3E0;
	sub_82209D88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821ff424
	if (!ctx.cr0.eq) goto loc_821FF424;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,104(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 104);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,21104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 21104);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f31,f0
	ctx.f13.f64 = double(float(f31.f64 * ctx.f0.f64));
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 * ctx.f0.f64));
	// fctidz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// sth r10,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// bl 0x82209d98
	ctx.lr = 0x821FF424;
	sub_82209D98(ctx, base);
loc_821FF424:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

DEFINE_REX_FUNC(sub_82202620) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// lwz r6,12(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lfs f31,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	f31.f64 = double(temp.f32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r7,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// lfs f1,108(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x82202680
	if (!ctx.cr6.gt) goto loc_82202680;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1cf8
	ctx.lr = 0x8220267C;
	sub_820E1CF8(ctx, base);
	// stfs f31,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_82202680:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1cc0
	ctx.lr = 0x82202690;
	sub_820E1CC0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,2028(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2028);
	f31.f64 = double(temp.f32);
	// lfs f30,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f30.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x82204ae0
	ctx.lr = 0x822026B0;
	sub_82204AE0(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f1,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x82204ae0
	ctx.lr = 0x822026D0;
	sub_82204AE0(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lfs f1,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x82204ae0
	ctx.lr = 0x822026F0;
	sub_82204AE0(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lfs f1,108(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x82204ae0
	ctx.lr = 0x82202710;
	sub_82204AE0(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822083A0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r7,4
	ctx.r7.s64 = 4;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r6,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stwx r4,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r4.u32);
	// stb r7,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// stb r5,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r5.u8);
	// stb r8,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r8.u8);
	// stb r8,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82208998) {
	REX_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82208908
	sub_82208908(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82208A68) {
	REX_FUNC_PROLOGUE();
	// b 0x824d3eec
	__imp__XamUserGetSigninState(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82208D18) {
	REX_FUNC_PROLOGUE();
	// b 0x824d3f5c
	__imp__XamShowSigninUI(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82208D28) {
	REX_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x824d3f7c
	__imp__XamShowGamerCardUIForXUID(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82208EE0) {
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
	ctx.lr = 0x82208EE8;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r30,r5,25,7,31
	r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1FFFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82208f18
	if (!ctx.cr6.eq) goto loc_82208F18;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82208fd8
	if (ctx.cr6.eq) goto loc_82208FD8;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82208F08:
	// dcbzl r0,r10
	ea = (ctx.r10.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x82208f08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82208F08;
	// b 0x822d4ed8
	return;
loc_82208F18:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// blt cr6,0x82208f28
	if (ctx.cr6.lt) goto loc_82208F28;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82208F28:
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// vspltisb v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x4)));
	// lvsl v13,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lvsl v12,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslb v11,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi8(0x7));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_sllv_epi8(a, shift));
	}
	// vor v10,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vspltb v0,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_set1_epi8(char(0xF))));
	// beq cr6,0x82208f68
	if (ctx.cr6.eq) goto loc_82208F68;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r10,r11,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
loc_82208F58:
	// dcbzl r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// bdnz 0x82208f58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82208F58;
loc_82208F68:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82208fd8
	if (ctx.cr6.eq) goto loc_82208FD8;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// li r31,-32
	r31.s64 = -32;
	// li r4,-16
	ctx.r4.s64 = -16;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r8,64
	ctx.r8.s64 = 64;
	// li r9,80
	ctx.r9.s64 = 80;
loc_82208F98:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// bge cr6,0x82208fb0
	if (!ctx.cr6.lt) goto loc_82208FB0;
	// addi r29,r11,-32
	r29.s64 = ctx.r11.s64 + -32;
	// li r28,128
	r28.s64 = 128;
	// dcbzl r28,r29
	ea = (r28.u32 + r29.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
loc_82208FB0:
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x82208f98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82208F98;
loc_82208FD8:
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82210848) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f13,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,52,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,2332(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2332);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// sth r11,10606(r3)
	REX_STORE_U16(ctx.r3.u32 + 10606, ctx.r11.u16);
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210C20) {
	REX_FUNC_PROLOGUE();
	// lbz r3,10495(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 10495);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210CC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f13,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,-8492(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8492);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82210cfc
	if (!ctx.cr6.eq) goto loc_82210CFC;
	// lfs f12,10836(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10836);
	ctx.f12.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x82210d00
	if (ctx.cr6.eq) goto loc_82210D00;
loc_82210CFC:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82210D00:
	// lwz r11,10568(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10568);
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// rlwimi r11,r10,11,20,20
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x800) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r11,10568(r3)
	REX_STORE_U32(ctx.r3.u32 + 10568, ctx.r11.u32);
	// bne cr6,0x82210d24
	if (!ctx.cr6.eq) goto loc_82210D24;
	// lfs f12,10844(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10844);
	ctx.f12.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x82210d28
	if (ctx.cr6.eq) goto loc_82210D28;
loc_82210D24:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82210D28:
	// li r12,1
	ctx.r12.s64 = 1;
	// stfs f13,10832(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 10832, temp.u32);
	// rlwimi r11,r10,12,19,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFEFFF);
	// stfs f13,10840(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 10840, temp.u32);
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10568(r3)
	REX_STORE_U32(ctx.r3.u32 + 10568, ctx.r11.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r11,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// rldicr r12,r12,43,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 43) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82212F10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82212F18;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,3204
	ctx.r11.s64 = ctx.r4.s64 + 3204;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stwx r5,r6,r3
	REX_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r5.u32);
	// beq cr6,0x82213040
	if (ctx.cr6.eq) goto loc_82213040;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82212f44
	if (ctx.cr6.eq) goto loc_82212F44;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
loc_82212F44:
	// addi r10,r11,2593
	ctx.r10.s64 = ctx.r11.s64 + 2593;
	// lwz r7,28(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r8,r9,263
	ctx.r8.u64 = ctx.r9.u64 | 263;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stwx r7,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r7.u32);
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// clrldi r10,r3,56
	ctx.r10.u64 = ctx.r3.u64 & 0xFF;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// srd r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// addi r10,r4,3102
	ctx.r10.s64 = ctx.r4.s64 + 3102;
	// ldx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U64(ctx.r11.u32 + r31.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// or r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 | ctx.r3.u64;
	// stdx r7,r11,r31
	REX_STORE_U64(ctx.r11.u32 + r31.u32, ctx.r7.u64);
	// lwzx r11,r6,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzx r7,r10,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// stwx r7,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r7.u32);
	// beq cr6,0x82213040
	if (ctx.cr6.eq) goto loc_82213040;
	// subfic r11,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r4.u64;
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r11,r3,2593
	ctx.r11.s64 = ctx.r3.s64 + 2593;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r30,r31
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// rlwinm r11,r6,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82212fe0
	if (ctx.cr6.eq) goto loc_82212FE0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82212fe0
	if (ctx.cr6.eq) goto loc_82212FE0;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82212fe0
	if (ctx.cr6.eq) goto loc_82212FE0;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x82213040
	if (!ctx.cr6.eq) goto loc_82213040;
loc_82212FE0:
	// rlwinm r10,r6,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 13) & 0x1;
	// xor. r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82213040
	if (ctx.cr0.eq) goto loc_82213040;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// rlwinm r7,r11,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// not r29,r10
	r29.u64 = ~ctx.r10.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// addi r7,r7,-3
	ctx.r7.s64 = ctx.r7.s64 + -3;
	// rlwinm r11,r11,17,0,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// rlwinm r29,r29,16,0,15
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// and r11,r29,r11
	ctx.r11.u64 = r29.u64 & ctx.r11.u64;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
	// srawi r11,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 16;
	// rlwimi r10,r6,0,16,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF) | (ctx.r10.u64 & 0xF0000);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r10,r30,r31
	REX_STORE_U32(r30.u32 + r31.u32, ctx.r10.u32);
	// clrldi r10,r8,56
	ctx.r10.u64 = ctx.r8.u64 & 0xFF;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// ldx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + r31.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stdx r10,r11,r31
	REX_STORE_U64(ctx.r11.u32 + r31.u32, ctx.r10.u64);
loc_82213040:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82213200
	if (!ctx.cr6.eq) goto loc_82213200;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8221308c
	if (!ctx.cr6.eq) goto loc_8221308C;
	// lwz r10,10372(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10372);
	// rlwinm r11,r10,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82213070
	if (ctx.cr6.eq) goto loc_82213070;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x82213070
	if (ctx.cr6.eq) goto loc_82213070;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x8221308c
	if (!ctx.cr6.eq) goto loc_8221308C;
loc_82213070:
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r11,r10,0,16,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10372(r31)
	REX_STORE_U32(r31.u32 + 10372, ctx.r11.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
loc_8221308C:
	// lbz r11,11071(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11071);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// andi. r10,r11,247
	ctx.r10.u64 = ctx.r11.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r10,11071(r31)
	REX_STORE_U8(r31.u32 + 11071, ctx.r10.u8);
	// beq cr6,0x822130dc
	if (ctx.cr6.eq) goto loc_822130DC;
	// lhz r11,28(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 28);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x822130c0
	if (ctx.cr6.eq) goto loc_822130C0;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x822130c0
	if (ctx.cr6.eq) goto loc_822130C0;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x822130d4
	if (!ctx.cr6.eq) goto loc_822130D4;
loc_822130C0:
	// ori r11,r10,8
	ctx.r11.u64 = ctx.r10.u64 | 8;
	// stb r11,11071(r31)
	REX_STORE_U8(r31.u32 + 11071, ctx.r11.u8);
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
loc_822130D4:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x822130e8
	goto loc_822130E8;
loc_822130DC:
	// lwz r4,12832(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12832);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822130f0
	if (ctx.cr6.eq) goto loc_822130F0;
loc_822130E8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82212e80
	ctx.lr = 0x822130F0;
	sub_82212E80(ctx, base);
loc_822130F0:
	// lwz r11,13092(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822131c8
	if (!ctx.cr6.eq) goto loc_822131C8;
	// lbz r11,11068(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11068);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822131c8
	if (!ctx.cr0.eq) goto loc_822131C8;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822131c8
	if (!ctx.cr0.eq) goto loc_822131C8;
	// lbz r10,12563(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 12563);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x822131c8
	if (!ctx.cr0.eq) goto loc_822131C8;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8221312c
	if (ctx.cr0.eq) goto loc_8221312C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822131bc
	goto loc_822131BC;
loc_8221312C:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822131b4
	if (ctx.cr0.eq) goto loc_822131B4;
	// lwz r11,12816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12816);
	// lwz r10,13104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13104);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8221314c
	if (ctx.cr6.eq) goto loc_8221314C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822131b4
	if (!ctx.cr6.eq) goto loc_822131B4;
loc_8221314C:
	// lwz r11,12820(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12820);
	// lwz r10,13108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13108);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82213164
	if (ctx.cr6.eq) goto loc_82213164;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822131b4
	if (!ctx.cr6.eq) goto loc_822131B4;
loc_82213164:
	// lwz r11,12824(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12824);
	// lwz r10,13112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13112);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8221317c
	if (ctx.cr6.eq) goto loc_8221317C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822131b4
	if (!ctx.cr6.eq) goto loc_822131B4;
loc_8221317C:
	// lwz r11,12828(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12828);
	// lwz r10,13116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13116);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82213194
	if (ctx.cr6.eq) goto loc_82213194;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822131b4
	if (!ctx.cr6.eq) goto loc_822131B4;
loc_82213194:
	// lwz r11,12832(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12832);
	// lwz r10,13120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13120);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822131ac
	if (ctx.cr6.eq) goto loc_822131AC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822131b4
	if (!ctx.cr6.eq) goto loc_822131B4;
loc_822131AC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822131b8
	goto loc_822131B8;
loc_822131B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822131B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_822131BC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x822131cc
	if (!ctx.cr0.eq) goto loc_822131CC;
loc_822131C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822131CC:
	// lbz r10,11068(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 11068);
	// lwz r9,12292(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12292);
	// rlwimi r10,r11,0,31,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// stb r10,11068(r31)
	REX_STORE_U8(r31.u32 + 11068, ctx.r10.u8);
	// lwz r10,12816(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12816);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,10460(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10460);
	// stw r9,12292(r31)
	REX_STORE_U32(r31.u32 + 12292, ctx.r9.u32);
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// rlwimi r11,r10,0,28,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r11,10460(r31)
	REX_STORE_U32(r31.u32 + 10460, ctx.r11.u32);
	// b 0x82213284
	goto loc_82213284;
loc_82213200:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x8221322c
	if (!ctx.cr6.eq) goto loc_8221322C;
	// lwz r11,12820(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12820);
	// lwz r10,12296(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12296);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// lwz r9,10460(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 10460);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r10,12296(r31)
	REX_STORE_U32(r31.u32 + 12296, ctx.r10.u32);
	// rlwimi r9,r11,4,24,27
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF0F);
	// b 0x82213280
	goto loc_82213280;
loc_8221322C:
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bne cr6,0x82213258
	if (!ctx.cr6.eq) goto loc_82213258;
	// lwz r11,12824(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12824);
	// lwz r10,12300(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12300);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// lwz r9,10460(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 10460);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r10,12300(r31)
	REX_STORE_U32(r31.u32 + 12300, ctx.r10.u32);
	// rlwimi r9,r11,8,20,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF0FF);
	// b 0x82213280
	goto loc_82213280;
loc_82213258:
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bne cr6,0x82213298
	if (!ctx.cr6.eq) goto loc_82213298;
	// lwz r11,12828(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12828);
	// lwz r10,12304(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12304);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// lwz r9,10460(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 10460);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r10,12304(r31)
	REX_STORE_U32(r31.u32 + 12304, ctx.r10.u32);
	// rlwimi r9,r11,12,16,19
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0FFF);
loc_82213280:
	// stw r9,10460(r31)
	REX_STORE_U32(r31.u32 + 10460, ctx.r9.u32);
loc_82213284:
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
loc_82213298:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82226648) {
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
loc_82226658:
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
	// bne 0x82226658
	if (!ctx.cr0.eq) goto loc_82226658;
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

DEFINE_REX_FUNC(sub_82228860) {
	REX_FUNC_PROLOGUE();
	// lbz r11,11071(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 11071);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stb r11,11071(r3)
	REX_STORE_U8(ctx.r3.u32 + 11071, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822289E8) {
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x822d5870
	ctx.lr = 0x82228A14;
	sub_822D5870(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d6450
	ctx.lr = 0x82228A24;
	sub_822D6450(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1572(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1572);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82228a50
	if (ctx.cr6.eq) goto loc_82228A50;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,84
	ctx.r3.s64 = 84;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82228A4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82228a54
	goto loc_82228A54;
loc_82228A50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82228A54:
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
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
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222B568) {
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
	ctx.lr = 0x8222B570;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,276(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// stw r7,22088(r3)
	REX_STORE_U32(ctx.r3.u32 + 22088, ctx.r7.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// stw r8,22092(r3)
	REX_STORE_U32(ctx.r3.u32 + 22092, ctx.r8.u32);
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// stw r9,22096(r3)
	REX_STORE_U32(ctx.r3.u32 + 22096, ctx.r9.u32);
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// stw r6,22100(r3)
	REX_STORE_U32(ctx.r3.u32 + 22100, ctx.r6.u32);
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// stw r10,22104(r3)
	REX_STORE_U32(ctx.r3.u32 + 22104, ctx.r10.u32);
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// stw r25,22108(r3)
	REX_STORE_U32(ctx.r3.u32 + 22108, r25.u32);
	// rlwinm. r11,r4,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222b5bc
	if (ctx.cr0.eq) goto loc_8222B5BC;
	// addi r3,r3,22112
	ctx.r3.s64 = ctx.r3.s64 + 22112;
	// bl 0x824d461c
	ctx.lr = 0x8222B5BC;
	__imp__VdQueryVideoMode(ctx, base);
loc_8222B5BC:
	// lwz r11,21944(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21944);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222b68c
	if (ctx.cr0.eq) goto loc_8222B68C;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x8222b604
	if (!ctx.cr6.eq) goto loc_8222B604;
	// lbz r11,11069(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11069);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8222b604
	if (!ctx.cr0.eq) goto loc_8222B604;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
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
	// bl 0x8222ae50
	ctx.lr = 0x8222B5FC;
	sub_8222AE50(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8222b654
	goto loc_8222B654;
loc_8222B604:
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822d5870
	ctx.lr = 0x8222B614;
	sub_822D5870(ctx, base);
	// cntlzw r11,r24
	ctx.r11.u64 = r24.u32 == 0 ? 32 : __builtin_clz(r24.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// lwz r11,1572(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 1572);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222b650
	if (ctx.cr6.eq) goto loc_8222B650;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,92
	ctx.r3.s64 = 92;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B650;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222B650:
	// lwz r30,104(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
loc_8222B654:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8222b670
	if (!ctx.cr6.gt) goto loc_8222B670;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x8222B66C;
	sub_82215008(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8222B670:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r6,r11,-28848
	ctx.r6.s64 = ctx.r11.s64 + -28848;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822146b8
	ctx.lr = 0x8222B688;
	sub_822146B8(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_8222B68C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82230908) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r5,r11,-6152
	ctx.r5.s64 = ctx.r11.s64 + -6152;
	// lbz r11,262(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 262);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822309e4
	if (ctx.cr0.eq) goto loc_822309E4;
	// lbz r11,24380(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 24380);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822309c0
	if (!ctx.cr0.eq) goto loc_822309C0;
	// bl 0x8222fcd8
	ctx.lr = 0x82230938;
	sub_8222FCD8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r10,r10,16389
	ctx.r10.u64 = ctx.r10.u64 | 16389;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r5,r9,-17552
	ctx.r5.s64 = ctx.r9.s64 + -17552;
	// and r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r4,r8,-17564
	ctx.r4.s64 = ctx.r8.s64 + -17564;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824d44ec
	ctx.lr = 0x82230964;
	__imp__sprintf(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1444(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1444);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82230994
	if (ctx.cr6.eq) goto loc_82230994;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822309e4
	if (ctx.cr6.eq) goto loc_822309E4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822309e4
	if (ctx.cr6.eq) goto loc_822309E4;
	// b 0x822309ac
	goto loc_822309AC;
loc_82230994:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1572(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1572);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822309e4
	if (ctx.cr6.eq) goto loc_822309E4;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
loc_822309AC:
	// li r3,27
	ctx.r3.s64 = 27;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x822309BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822309e4
	goto loc_822309E4;
loc_822309C0:
	// lbz r11,260(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 260);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822309d4
	if (ctx.cr0.eq) goto loc_822309D4;
	// bl 0x8222f888
	ctx.lr = 0x822309D0;
	sub_8222F888(ctx, base);
	// b 0x822309e4
	goto loc_822309E4;
loc_822309D4:
	// lbz r11,261(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 261);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822309e4
	if (ctx.cr0.eq) goto loc_822309E4;
	// bl 0x82230040
	ctx.lr = 0x822309E4;
	sub_82230040(ctx, base);
loc_822309E4:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82234970) {
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
	ctx.lr = 0x82234978;
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// stw r3,836(r1)
	REX_STORE_U32(ctx.r1.u32 + 836, ctx.r3.u32);
	// stw r5,852(r1)
	REX_STORE_U32(ctx.r1.u32 + 852, ctx.r5.u32);
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
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// bl 0x82234450
	ctx.lr = 0x822349B4;
	sub_82234450(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82234bf0
	if (ctx.cr0.lt) goto loc_82234BF0;
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
	// bl 0x82234378
	ctx.lr = 0x822349DC;
	sub_82234378(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82234bf0
	if (ctx.cr0.lt) goto loc_82234BF0;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,3073
	ctx.r3.s64 = 3073;
	// addi r30,r11,448
	r30.s64 = ctx.r11.s64 + 448;
	// bl 0x82234450
	ctx.lr = 0x822349F8;
	sub_82234450(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82234bf0
	if (ctx.cr0.lt) goto loc_82234BF0;
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
	// bl 0x82234378
	ctx.lr = 0x82234A20;
	sub_82234378(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82234bf0
	if (ctx.cr0.lt) goto loc_82234BF0;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,3585
	ctx.r3.s64 = 3585;
	// add r30,r30,r11
	r30.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x82234450
	ctx.lr = 0x82234A3C;
	sub_82234450(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82234bf0
	if (ctx.cr0.lt) goto loc_82234BF0;
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
	// bl 0x82234378
	ctx.lr = 0x82234A64;
	sub_82234378(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82234bf0
	if (ctx.cr0.lt) goto loc_82234BF0;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,3601
	ctx.r3.s64 = 3601;
	// add r30,r30,r11
	r30.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x82234450
	ctx.lr = 0x82234A80;
	sub_82234450(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82234bf0
	if (ctx.cr0.lt) goto loc_82234BF0;
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
	// bl 0x82234378
	ctx.lr = 0x82234AA8;
	sub_82234378(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82234bf0
	if (ctx.cr0.lt) goto loc_82234BF0;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824d47bc
	ctx.lr = 0x82234AC0;
	__imp__XamAlloc(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82234bf0
	if (ctx.cr0.lt) goto loc_82234BF0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822d6a10
	ctx.lr = 0x82234AD0;
	sub_822D6A10(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r8,132(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r24,r1,144
	r24.s64 = ctx.r1.s64 + 144;
	// lwz r7,136(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// stw r3,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r23,r1,152
	r23.s64 = ctx.r1.s64 + 152;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
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
	// li r3,3601
	ctx.r3.s64 = 3601;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// bl 0x822344d8
	ctx.lr = 0x82234B20;
	sub_822344D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82234bf0
	if (ctx.cr0.lt) goto loc_82234BF0;
	// addi r4,r1,836
	ctx.r4.s64 = ctx.r1.s64 + 836;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822346b0
	ctx.lr = 0x82234B34;
	sub_822346B0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822346b0
	ctx.lr = 0x82234B40;
	sub_822346B0(ctx, base);
	// addi r4,r1,852
	ctx.r4.s64 = ctx.r1.s64 + 852;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822346b0
	ctx.lr = 0x82234B4C;
	sub_822346B0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822346b0
	ctx.lr = 0x82234B58;
	sub_822346B0(ctx, base);
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822346b0
	ctx.lr = 0x82234B64;
	sub_822346B0(ctx, base);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822346b0
	ctx.lr = 0x82234B70;
	sub_822346B0(ctx, base);
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
	// bl 0x822345d8
	ctx.lr = 0x82234B94;
	sub_822345D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82234bf0
	if (ctx.cr0.lt) goto loc_82234BF0;
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
	// bl 0x824d3ecc
	ctx.lr = 0x82234BE8;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82234c1c
	if (!ctx.cr0.lt) goto loc_82234C1C;
loc_82234BF0:
	// li r31,1627
	r31.s64 = 1627;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82234c04
	if (ctx.cr6.eq) goto loc_82234C04;
	// stw r3,24(r29)
	REX_STORE_U32(r29.u32 + 24, ctx.r3.u32);
	// b 0x82234c08
	goto loc_82234C08;
loc_82234C04:
	// bl 0x8220a828
	ctx.lr = 0x82234C08;
	sub_8220A828(ctx, base);
loc_82234C08:
	// lwz r3,136(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82234c40
	if (ctx.cr6.eq) goto loc_82234C40;
	// bl 0x824d47ac
	ctx.lr = 0x82234C18;
	__imp__XamFree(ctx, base);
	// b 0x82234c40
	goto loc_82234C40;
loc_82234C1C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82234c2c
	if (ctx.cr6.eq) goto loc_82234C2C;
	// li r31,997
	r31.s64 = 997;
	// b 0x82234c40
	goto loc_82234C40;
loc_82234C2C:
	// bl 0x8220a878
	ctx.lr = 0x82234C30;
	sub_8220A878(ctx, base);
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
loc_82234C40:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_8223C758) {
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
	// li r31,0
	r31.s64 = 0;
	// addi r10,r11,-6500
	ctx.r10.s64 = ctx.r11.s64 + -6500;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
loc_8223C77C:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8223c79c
	if (!ctx.cr0.eq) goto loc_8223C79C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8223c77c
	if (!ctx.cr6.eq) goto loc_8223C77C;
loc_8223C79C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8223c7dc
	if (ctx.cr0.eq) goto loc_8223C7DC;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,-6516
	ctx.r10.s64 = ctx.r10.s64 + -6516;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
loc_8223C7B4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8223c7d4
	if (!ctx.cr0.eq) goto loc_8223C7D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8223c7b4
	if (!ctx.cr6.eq) goto loc_8223C7B4;
loc_8223C7D4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8223c7f4
	if (!ctx.cr0.eq) goto loc_8223C7F4;
loc_8223C7DC:
	// stw r3,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223C7F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8223c804
	goto loc_8223C804;
loc_8223C7F4:
	// lis r31,-32768
	r31.s64 = -2147483648;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r31,r31,16386
	r31.u64 = r31.u64 | 16386;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_8223C804:
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

DEFINE_REX_FUNC(sub_82243BB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e80
	ctx.lr = 0x82243BB8;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82243c1c
	if (ctx.cr6.lt) goto loc_82243C1C;
	// beq cr6,0x82243bfc
	if (ctx.cr6.eq) goto loc_82243BFC;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x82243bf4
	if (ctx.cr6.lt) goto loc_82243BF4;
	// beq cr6,0x82243bd8
	if (ctx.cr6.eq) goto loc_82243BD8;
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x82243c58
	goto loc_82243C58;
loc_82243BD8:
	// li r31,6
	r31.s64 = 6;
loc_82243BDC:
	// li r11,640
	ctx.r11.s64 = 640;
	// li r30,5
	r30.s64 = 5;
	// li r29,32
	r29.s64 = 32;
	// li r28,4
	r28.s64 = 4;
	// li r26,33
	r26.s64 = 33;
	// b 0x82243c34
	goto loc_82243C34;
loc_82243BF4:
	// li r31,2
	r31.s64 = 2;
	// b 0x82243bdc
	goto loc_82243BDC;
loc_82243BFC:
	// li r11,320
	ctx.r11.s64 = 320;
	// li r31,2
	r31.s64 = 2;
	// li r30,4
	r30.s64 = 4;
	// li r29,16
	r29.s64 = 16;
	// li r28,4
	r28.s64 = 4;
	// li r27,-2
	r27.s64 = -2;
	// li r26,1
	r26.s64 = 1;
	// b 0x82243c38
	goto loc_82243C38;
loc_82243C1C:
	// li r11,320
	ctx.r11.s64 = 320;
	// li r31,0
	r31.s64 = 0;
	// li r30,4
	r30.s64 = 4;
	// li r29,16
	r29.s64 = 16;
	// li r28,0
	r28.s64 = 0;
	// li r26,22
	r26.s64 = 22;
loc_82243C34:
	// li r27,7
	r27.s64 = 7;
loc_82243C38:
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r31.u32);
	// stw r30,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r30.u32);
	// stw r29,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, r29.u32);
	// stw r28,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, r28.u32);
	// stw r27,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r27.u32);
	// stw r26,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r26.u32);
loc_82243C58:
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_822459C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822459f0
	if (ctx.cr6.eq) goto loc_822459F0;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x822459f0
	if (!ctx.cr6.eq) goto loc_822459F0;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// blr 
	return;
loc_822459F0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82245DA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82245DB0;
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
	// addi r31,r11,24644
	r31.s64 = ctx.r11.s64 + 24644;
	// lwz r11,24692(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 24692);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82245e28
	if (!ctx.cr0.eq) goto loc_82245E28;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r10,-5708
	ctx.r9.s64 = ctx.r10.s64 + -5708;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r11,24692(r8)
	REX_STORE_U32(ctx.r8.u32 + 24692, ctx.r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r9,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x82268478
	ctx.lr = 0x82245E0C;
	sub_82268478(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// addi r11,r31,28
	ctx.r11.s64 = r31.s64 + 28;
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
loc_82245E28:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82246BB8) {
	REX_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x82262010
	sub_82262010(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82246BE8) {
	REX_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x8226e930
	sub_8226E930(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82246C30) {
	REX_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x8226b360
	sub_8226B360(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82246CA8) {
	REX_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82246EF8) {
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
	ctx.lr = 0x82246F0C;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// li r4,8
	ctx.r4.s64 = 8;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	f28.f64 = ctx.f4.f64;
	// bl 0x8225da70
	ctx.lr = 0x82246F30;
	sub_8225DA70(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8227c2b8
	ctx.lr = 0x82246F3C;
	sub_8227C2B8(ctx, base);
	// stfs f31,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f30,4(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f29,8(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f28,12(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x822d4f84
	ctx.lr = 0x82246F58;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82247FF8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82246220
	ctx.lr = 0x82248014;
	sub_82246220(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82248050
	if (ctx.cr6.eq) goto loc_82248050;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82248050
	if (!ctx.cr6.eq) goto loc_82248050;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// lwz r4,4(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// bl 0x82246a38
	ctx.lr = 0x82248038;
	sub_82246A38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82248058
	if (ctx.cr0.lt) goto loc_82248058;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82275c60
	ctx.lr = 0x82248048;
	sub_82275C60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82248058
	goto loc_82248058;
loc_82248050:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82248058:
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

DEFINE_REX_FUNC(sub_82249268) {
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
	ctx.lr = 0x82249280;
	sub_82246220(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822492cc
	if (ctx.cr6.eq) goto loc_822492CC;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x822492cc
	if (!ctx.cr6.eq) goto loc_822492CC;
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x822492cc
	if (ctx.cr6.gt) goto loc_822492CC;
	// lwz r9,240(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 240);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r9,0,30,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,240(r11)
	REX_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x822492d4
	goto loc_822492D4;
loc_822492CC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_822492D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8224B410) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8224B418;
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
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224B440;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8224b488
	if (ctx.cr6.lt) goto loc_8224B488;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r10,r10,48
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(48));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r10,-44(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -44);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8224b488
	if (ctx.cr6.gt) goto loc_8224B488;
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mulli r11,r11,48
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(48));
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82249d18
	ctx.lr = 0x8224B484;
	sub_82249D18(ctx, base);
	// b 0x8224b490
	goto loc_8224B490;
loc_8224B488:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
loc_8224B490:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8224D5F0) {
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
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r31,r11,26596
	r31.s64 = ctx.r11.s64 + 26596;
	// lwz r11,26616(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 26616);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8224d634
	if (!ctx.cr0.eq) goto loc_8224D634;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,26616(r10)
	REX_STORE_U32(ctx.r10.u32 + 26616, ctx.r11.u32);
	// bl 0x8227acf8
	ctx.lr = 0x8224D628;
	sub_8227ACF8(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,15560
	ctx.r3.s64 = ctx.r11.s64 + 15560;
	// bl 0x822d5848
	ctx.lr = 0x8224D634;
	sub_822D5848(ctx, base);
loc_8224D634:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lfs f0,17064(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 17064);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
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

DEFINE_REX_FUNC(sub_8224E998) {
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
	// bl 0x82255b70
	ctx.lr = 0x8224E9BC;
	sub_82255B70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// beq 0x8224e9dc
	if (ctx.cr0.eq) goto loc_8224E9DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x8224E9DC;
	sub_82255B70(ctx, base);
loc_8224E9DC:
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

DEFINE_REX_FUNC(sub_82251BD8) {
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
	// addi r10,r10,-5728
	ctx.r10.s64 = ctx.r10.s64 + -5728;
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
	ctx.lr = 0x82251C20;
	sub_82246CA8(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,-21912
	ctx.r11.s64 = ctx.r11.s64 + -21912;
	// addi r10,r10,-21528
	ctx.r10.s64 = ctx.r10.s64 + -21528;
	// addi r9,r9,27576
	ctx.r9.s64 = ctx.r9.s64 + 27576;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x82245c78
	ctx.lr = 0x82251C50;
	sub_82245C78(ctx, base);
	// stw r3,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23568
	ctx.r4.s64 = ctx.r11.s64 + 23568;
	// bl 0x822512d8
	ctx.lr = 0x82251C68;
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

DEFINE_REX_FUNC(sub_82253068) {
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
	// addi r10,r10,-4812
	ctx.r10.s64 = ctx.r10.s64 + -4812;
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
	// addi r8,r8,-6328
	ctx.r8.s64 = ctx.r8.s64 + -6328;
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
	// bl 0x82249838
	ctx.lr = 0x822530DC;
	sub_82249838(ctx, base);
	// stw r3,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23692
	ctx.r4.s64 = ctx.r11.s64 + 23692;
	// bl 0x822512d8
	ctx.lr = 0x822530F4;
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

DEFINE_REX_FUNC(sub_82255FC8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r3,29668(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 29668);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822562B8) {
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
	// lwz r4,23556(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 23556);
	// bl 0x82255c88
	ctx.lr = 0x822562D0;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822562e0
	if (!ctx.cr0.eq) goto loc_822562E0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822562e4
	goto loc_822562E4;
loc_822562E0:
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
loc_822562E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82256678) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r3,29592(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 29592);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82256880) {
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
	ctx.lr = 0x822568A0;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822568b4
	if (!ctx.cr0.eq) goto loc_822568B4;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x822568bc
	goto loc_822568BC;
loc_822568B4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8226d650
	ctx.lr = 0x822568BC;
	sub_8226D650(ctx, base);
loc_822568BC:
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

DEFINE_REX_FUNC(sub_82257610) {
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
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r4,23544(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 23544);
	// bl 0x82255c88
	ctx.lr = 0x82257638;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8225764c
	if (!ctx.cr0.eq) goto loc_8225764C;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x82257658
	goto loc_82257658;
loc_8225764C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82267c28
	ctx.lr = 0x82257658;
	sub_82267C28(ctx, base);
loc_82257658:
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

DEFINE_REX_FUNC(sub_822590A0) {
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
	ctx.lr = 0x822590A8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82259214
	if (ctx.cr6.eq) goto loc_82259214;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82259214
	if (ctx.cr6.eq) goto loc_82259214;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82259214
	if (ctx.cr6.eq) goto loc_82259214;
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r25,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r25.u32);
	// stw r25,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r25.u32);
	// stw r25,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, r25.u32);
	// bne cr6,0x822590f8
	if (!ctx.cr6.eq) goto loc_822590F8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82259168
	goto loc_82259168;
loc_822590F8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822d6a10
	ctx.lr = 0x82259100;
	sub_822D6A10(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822d6a10
	ctx.lr = 0x8225910C;
	sub_822D6A10(ctx, base);
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + r29.u64;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// ble cr6,0x82259208
	if (!ctx.cr6.gt) goto loc_82259208;
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82259208
	if (!ctx.cr6.gt) goto loc_82259208;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82259208
	if (!ctx.cr6.lt) goto loc_82259208;
	// rlwinm r3,r30,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82255b48
	ctx.lr = 0x8225913C;
	sub_82255B48(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82259208
	if (ctx.cr0.eq) goto loc_82259208;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d6c18
	ctx.lr = 0x82259154;
	sub_822D6C18(ctx, base);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// subf r4,r29,r30
	ctx.r4.u64 = r30.u64 - r29.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// bl 0x822d6c18
	ctx.lr = 0x82259168;
	sub_822D6C18(ctx, base);
loc_82259168:
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r28,r11,29508
	r28.s64 = ctx.r11.s64 + 29508;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824d438c
	ctx.lr = 0x82259178;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r29,r11,29636
	r29.s64 = ctx.r11.s64 + 29636;
loc_82259180:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822555b8
	ctx.lr = 0x8225918C;
	sub_822555B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(r31.u32, r27.u32, ctx.xer);
	// beq cr6,0x822591c4
	if (ctx.cr6.eq) goto loc_822591C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x822591A0;
	sub_82255B70(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge cr6,0x822591b0
	if (!ctx.cr6.lt) goto loc_822591B0;
	// mr r31,r27
	r31.u64 = r27.u64;
	// b 0x822591bc
	goto loc_822591BC;
loc_822591B0:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r25
	r31.u64 = r25.u64;
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
loc_822591BC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82259180
	if (!ctx.cr6.eq) goto loc_82259180;
loc_822591C4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bge cr6,0x822591e0
	if (!ctx.cr6.lt) goto loc_822591E0;
	// bl 0x824d437c
	ctx.lr = 0x822591D4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,38
	ctx.r3.u64 = ctx.r3.u64 | 38;
	// b 0x8225921c
	goto loc_8225921C;
loc_822591E0:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// bl 0x824d437c
	ctx.lr = 0x82259200;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8225921c
	goto loc_8225921C;
loc_82259208:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8225921c
	goto loc_8225921C;
loc_82259214:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_8225921C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_8225EAE0) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8225e240
	ctx.lr = 0x8225EB08;
	sub_8225E240(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8224da00
	ctx.lr = 0x8225EB14;
	sub_8224DA00(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8225eb24
	if (ctx.cr6.eq) goto loc_8225EB24;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8225EB24:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
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

DEFINE_REX_FUNC(sub_82260A98) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r10,132(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// rlwinm r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// fmr f29,f2
	f29.f64 = ctx.f2.f64;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// stw r11,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// bne cr6,0x82260b8c
	if (!ctx.cr6.eq) goto loc_82260B8C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,64(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfs f0,-29184(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -29184);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82291750
	ctx.lr = 0x82260AF8;
	sub_82291750(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f3,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 60);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82291130
	ctx.lr = 0x82260B0C;
	sub_82291130(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lfs f0,15944(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15944);
	ctx.f0.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmuls f2,f29,f0
	ctx.f2.f64 = double(float(f29.f64 * ctx.f0.f64));
	// fmuls f1,f30,f0
	ctx.f1.f64 = double(float(f30.f64 * ctx.f0.f64));
	// bl 0x822911a8
	ctx.lr = 0x82260B30;
	sub_822911A8(ctx, base);
	// addi r30,r31,68
	r30.s64 = r31.s64 + 68;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82291210
	ctx.lr = 0x82260B44;
	sub_82291210(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// bl 0x82291210
	ctx.lr = 0x82260B54;
	sub_82291210(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f29,f0
	ctx.f2.f64 = double(float(f29.f64 * ctx.f0.f64));
	// fmuls f1,f30,f0
	ctx.f1.f64 = double(float(f30.f64 * ctx.f0.f64));
	// bl 0x822911a8
	ctx.lr = 0x82260B70;
	sub_822911A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82291210
	ctx.lr = 0x82260B80;
	sub_82291210(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
loc_82260B8C:
	// lwz r3,272(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x822d7b58
	ctx.lr = 0x82260B94;
	sub_822D7B58(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
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

DEFINE_REX_FUNC(sub_82267E18) {
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
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e78
	ctx.lr = 0x82267E20;
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r10,132(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r3,404(r1)
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r3.u32);
	// stw r4,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r4.u32);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// rlwinm. r10,r10,0,22,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x300;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// stw r11,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne 0x82268038
	if (!ctx.cr0.eq) goto loc_82268038;
	// bne cr6,0x82267ecc
	if (!ctx.cr6.eq) goto loc_82267ECC;
	// bl 0x82260a98
	ctx.lr = 0x82267E68;
	sub_82260A98(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82288ea0
	ctx.lr = 0x82267E78;
	sub_82288EA0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f3,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f3.f64 = double(temp.f32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 / ctx.f13.f64));
	// fdivs f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 / ctx.f0.f64));
	// bl 0x82291130
	ctx.lr = 0x82267EB8;
	sub_82291130(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r31,68
	ctx.r4.s64 = r31.s64 + 68;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82291210
	ctx.lr = 0x82267EC8;
	sub_82291210(ctx, base);
	// b 0x82268010
	goto loc_82268010;
loc_82267ECC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82267edc
	if (ctx.cr6.eq) goto loc_82267EDC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82267f00
	if (!ctx.cr6.eq) goto loc_82267F00;
loc_82267EDC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82260bb8
	ctx.lr = 0x82267EEC;
	sub_82260BB8(ctx, base);
	// addi r4,r31,68
	ctx.r4.s64 = r31.s64 + 68;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x822d4fa0
	ctx.lr = 0x82267EFC;
	sub_822D4FA0(ctx, base);
	// b 0x82268010
	goto loc_82268010;
loc_82267F00:
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r31,404(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
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
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lvsr v0,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// vpermwi128 v63,v60,234
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x15));
	// li r11,12
	ctx.r11.s64 = 12;
	// vpermwi128 v62,v60,186
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x45));
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// vpermwi128 v61,v60,174
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x51));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// vperm128 v62,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r30,20
	r30.s64 = 20;
	// vperm128 v61,v61,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r28,r1,96
	r28.s64 = ctx.r1.s64 + 96;
	// vpermwi128 v60,v60,171
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x54));
	// li r27,24
	r27.s64 = 24;
	// addi r26,r1,96
	r26.s64 = ctx.r1.s64 + 96;
	// li r25,28
	r25.s64 = 28;
	// stvewx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r7,32
	ctx.r7.s64 = 32;
	// stvewx128 v63,r29,r9
	ea = (r29.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r24,r1,96
	r24.s64 = ctx.r1.s64 + 96;
	// stvewx128 v63,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stvewx128 v63,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r10,36
	ctx.r10.s64 = 36;
	// stvewx128 v62,r4,r3
	ea = (ctx.r4.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r8,40
	ctx.r8.s64 = 40;
	// stvewx128 v62,r5,r30
	ea = (ctx.r5.u32 + r30.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r28,r27
	ea = (r28.u32 + r27.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// vperm128 v60,v60,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvewx128 v62,r26,r25
	ea = (r26.u32 + r25.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stvewx128 v61,r24,r7
	ea = (r24.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// li r5,44
	ctx.r5.s64 = 44;
	// stvewx128 v61,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,48
	ctx.r3.s64 = 48;
	// stvewx128 v61,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r30,r1,96
	r30.s64 = ctx.r1.s64 + 96;
	// li r7,52
	ctx.r7.s64 = 52;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stvewx128 v61,r6,r5
	ea = (ctx.r6.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// li r11,56
	ctx.r11.s64 = 56;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stvewx128 v60,r4,r3
	ea = (ctx.r4.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// li r8,60
	ctx.r8.s64 = 60;
	// stvewx128 v60,r30,r7
	ea = (r30.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
loc_82268010:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lfs f3,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,44(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822911a8
	ctx.lr = 0x82268024;
	sub_822911A8(ctx, base);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82291210
	ctx.lr = 0x82268034;
	sub_82291210(ctx, base);
	// b 0x822680b8
	goto loc_822680B8;
loc_82268038:
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// fmr f4,f30
	ctx.f4.f64 = f30.f64;
	// bne cr6,0x82268080
	if (!ctx.cr6.eq) goto loc_82268080;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82288ea0
	ctx.lr = 0x82268054;
	sub_82288EA0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f4,f0
	ctx.f4.f64 = double(float(ctx.f0.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f3,f13
	ctx.f3.f64 = double(float(ctx.f13.f64));
	// b 0x82268098
	goto loc_82268098;
loc_82268080:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822680e0
	if (!ctx.cr6.eq) goto loc_822680E0;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f30.f64);
	// blt cr6,0x822680f0
	if (ctx.cr6.lt) goto loc_822680F0;
loc_82268090:
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f30.f64;
loc_82268094:
	// fmr f3,f4
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f4.f64;
loc_82268098:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82260928
	ctx.lr = 0x822680A8;
	sub_82260928(ctx, base);
	// addi r4,r31,68
	ctx.r4.s64 = r31.s64 + 68;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x822d4fa0
	ctx.lr = 0x822680B8;
	sub_822D4FA0(ctx, base);
loc_822680B8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,412(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x822d4fa0
	ctx.lr = 0x822680C8;
	sub_822D4FA0(ctx, base);
	// lwz r3,288(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x822d7b58
	ctx.lr = 0x822680D0;
	sub_822D7B58(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822d4ec8
	return;
loc_822680E0:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82268098
	if (!ctx.cr6.eq) goto loc_82268098;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f30.f64);
	// ble cr6,0x82268090
	if (!ctx.cr6.gt) goto loc_82268090;
loc_822680F0:
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// b 0x82268094
	goto loc_82268094;
}

DEFINE_REX_FUNC(sub_82278648) {
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
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,30000
	r31.s64 = ctx.r11.s64 + 30000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d438c
	ctx.lr = 0x82278670;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,30028(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 30028);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822786a4
	if (ctx.cr0.eq) goto loc_822786A4;
loc_82278680:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// bne cr6,0x82278698
	if (!ctx.cr6.eq) goto loc_82278698;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_82278698:
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82278680
	if (!ctx.cr6.eq) goto loc_82278680;
loc_822786A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d437c
	ctx.lr = 0x822786AC;
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

DEFINE_REX_FUNC(sub_8227A848) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r4,2037
	ctx.r4.s64 = 2037;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8225da70
	ctx.lr = 0x8227A864;
	sub_8225DA70(ctx, base);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x822469c0
	ctx.lr = 0x8227A86C;
	sub_822469C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8224da00
	ctx.lr = 0x8227A874;
	sub_8224DA00(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8227AD28) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,4
	ctx.r11.s64 = 4;
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8227AF18) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8227AF20;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8227ad60
	ctx.lr = 0x8227AF30;
	sub_8227AD60(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8227af88
	if (ctx.cr6.eq) goto loc_8227AF88;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8227af88
	if (ctx.cr0.eq) goto loc_8227AF88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d6a10
	ctx.lr = 0x8227AF4C;
	sub_822D6A10(ctx, base);
	// addi r29,r3,1
	r29.s64 = ctx.r3.s64 + 1;
	// rlwinm r3,r29,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82255b48
	ctx.lr = 0x8227AF58;
	sub_82255B48(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8227af70
	if (!ctx.cr0.eq) goto loc_8227AF70;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8227af9c
	goto loc_8227AF9C;
loc_8227AF70:
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822d6c18
	ctx.lr = 0x8227AF84;
	sub_822D6C18(ctx, base);
	// b 0x8227af98
	goto loc_8227AF98;
loc_8227AF88:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_8227AF98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227AF9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8227CB10) {
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r6,r11,-14656
	ctx.r6.s64 = ctx.r11.s64 + -14656;
	// bl 0x8227cab0
	ctx.lr = 0x8227CB30;
	sub_8227CAB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8227cb54
	if (ctx.cr0.lt) goto loc_8227CB54;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r6,r11,-16528
	ctx.r6.s64 = ctx.r11.s64 + -16528;
	// bl 0x822d7298
	ctx.lr = 0x8227CB50;
	sub_822D7298(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227CB54:
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

DEFINE_REX_FUNC(sub_8227D628) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
loc_8227D62C:
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
	// bne 0x8227d62c
	if (!ctx.cr0.eq) goto loc_8227D62C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227d66c
	if (ctx.cr0.eq) goto loc_8227D66C;
	// b 0x8227e868
	sub_8227E868(ctx, base);
	return;
loc_8227D66C:
	// b 0x8227e790
	sub_8227E790(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8227E868) {
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
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,29924
	r31.s64 = ctx.r11.s64 + 29924;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d438c
	ctx.lr = 0x8227E890;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r3,30196(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 30196);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227e8a8
	if (ctx.cr6.eq) goto loc_8227E8A8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8227e628
	ctx.lr = 0x8227E8A8;
	sub_8227E628(ctx, base);
loc_8227E8A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d437c
	ctx.lr = 0x8227E8B0;
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

DEFINE_REX_FUNC(sub_8227F7C8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// subf r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8227FC48) {
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
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822802B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r3,4
	ctx.r3.s64 = 4;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f0,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 28, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 36, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 40, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 44, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 48, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 52, temp.u32);
	// lfs f0,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 56, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 60, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822852E0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822852E8) {
	REX_FUNC_PROLOGUE();
	// stw r4,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822853D0) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// beq cr6,0x8228544c
	if (ctx.cr6.eq) goto loc_8228544C;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82255b48
	ctx.lr = 0x82285400;
	sub_82255B48(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82285414
	if (!ctx.cr0.eq) goto loc_82285414;
loc_82285408:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82285474
	goto loc_82285474;
loc_82285414:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x822d4fa0
	ctx.lr = 0x82285428;
	sub_822D4FA0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x82246088
	ctx.lr = 0x8228543C;
	sub_82246088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// b 0x82285470
	goto loc_82285470;
loc_8228544C:
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82255b88
	ctx.lr = 0x82285458;
	sub_82255B88(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82285408
	if (ctx.cr0.eq) goto loc_82285408;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_82285470:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82285474:
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

DEFINE_REX_FUNC(sub_822874E0) {
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
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lwz r3,332(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 332);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,-2144(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -2144);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stw r11,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// stw r11,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287538;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stw r8,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// bl 0x822d7b58
	ctx.lr = 0x82287570;
	sub_822D7B58(ctx, base);
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

DEFINE_REX_FUNC(sub_82289408) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,31384(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31384);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82289420
	if (ctx.cr6.eq) goto loc_82289420;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,31380(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31380);
loc_82289420:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822899A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e80
	ctx.lr = 0x822899B0;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
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
	// addi r8,r8,8004
	ctx.r8.s64 = ctx.r8.s64 + 8004;
	// lvsr v0,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// li r5,16
	ctx.r5.s64 = 16;
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
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// vpermwi128 v60,v60,171
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x54));
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r10,20
	ctx.r10.s64 = 20;
	// vperm128 v62,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r8,24
	ctx.r8.s64 = 24;
	// vperm128 v61,v61,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r4,28
	ctx.r4.s64 = 28;
	// li r31,32
	r31.s64 = 32;
	// vperm128 v60,v60,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r30,36
	r30.s64 = 36;
	// li r29,40
	r29.s64 = 40;
	// li r28,44
	r28.s64 = 44;
	// stvewx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r27,48
	r27.s64 = 48;
	// stvewx128 v63,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r26,52
	r26.s64 = 52;
	// stvewx128 v63,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r9,56
	ctx.r9.s64 = 56;
	// stvewx128 v63,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r7,60
	ctx.r7.s64 = 60;
	// stvewx128 v62,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0x3;
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
	// stvewx128 v61,r11,r28
	ea = (ctx.r11.u32 + r28.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r11,r27
	ea = (ctx.r11.u32 + r27.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r11,r26
	ea = (ctx.r11.u32 + r26.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82290930) {
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
	// bl 0x8228f988
	ctx.lr = 0x82290950;
	sub_8228F988(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82290960
	if (ctx.cr0.eq) goto loc_82290960;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x82290960;
	sub_82255B70(ctx, base);
loc_82290960:
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

DEFINE_REX_FUNC(sub_82291880) {
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
	ctx.lr = 0x82291888;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r5,4(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82295688
	ctx.lr = 0x822918BC;
	sub_82295688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822918cc
	if (ctx.cr0.eq) goto loc_822918CC;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// b 0x822918d0
	goto loc_822918D0;
loc_822918CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822918D0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82291918
	if (!ctx.cr6.eq) goto loc_82291918;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822918e8
	if (ctx.cr6.eq) goto loc_822918E8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_822918E8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822918f8
	if (ctx.cr6.eq) goto loc_822918F8;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_822918F8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82291908
	if (ctx.cr6.eq) goto loc_82291908;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_82291908:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82291918
	if (ctx.cr6.eq) goto loc_82291918;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
loc_82291918:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822931C0) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x822268e0
	ctx.lr = 0x822931D4;
	sub_822268E0(ctx, base);
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

DEFINE_REX_FUNC(sub_822934B0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,22128
	ctx.r11.s64 = ctx.r11.s64 + 22128;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mullw r10,r8,r5
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822276d0
	ctx.lr = 0x822934E4;
	sub_822276D0(ctx, base);
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

DEFINE_REX_FUNC(sub_82294D38) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,304
	ctx.r3.s64 = ctx.r11.s64 + 304;
	// bl 0x82296078
	ctx.lr = 0x82294D5C;
	sub_82296078(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// clrlwi r30,r3,16
	r30.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82294d90
	if (ctx.cr0.eq) goto loc_82294D90;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x822d60f0
	ctx.lr = 0x82294D80;
	sub_822D60F0(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lha r11,86(r1)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 86));
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
loc_82294D90:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
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

DEFINE_REX_FUNC(sub_82298018) {
	REX_FUNC_PROLOGUE();
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// b 0x82297bc0
	sub_82297BC0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82298508) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82298510;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,31448(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 31448);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82298548
	if (ctx.cr6.eq) goto loc_82298548;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,31448(r10)
	REX_STORE_U32(ctx.r10.u32 + 31448, ctx.r11.u32);
	// stw r31,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r31.u32);
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// b 0x82298670
	goto loc_82298670;
loc_82298548:
	// li r3,204
	ctx.r3.s64 = 204;
	// bl 0x82255b48
	ctx.lr = 0x82298550;
	sub_82255B48(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bne 0x82298564
	if (!ctx.cr0.eq) goto loc_82298564;
	// li r3,-8
	ctx.r3.s64 = -8;
	// b 0x82298670
	goto loc_82298670;
loc_82298564:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r5,128
	ctx.r5.s64 = 128;
	// stw r10,164(r11)
	REX_STORE_U32(ctx.r11.u32 + 164, ctx.r10.u32);
	// li r7,224
	ctx.r7.s64 = 224;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r5,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// addi r9,r9,13980
	ctx.r9.s64 = ctx.r9.s64 + 13980;
	// stw r5,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// lis r5,-32767
	ctx.r5.s64 = -2147418112;
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// addi r6,r9,-8
	ctx.r6.s64 = ctx.r9.s64 + -8;
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r7,168(r11)
	REX_STORE_U32(ctx.r11.u32 + 168, ctx.r7.u32);
	// addi r4,r6,4
	ctx.r4.s64 = ctx.r6.s64 + 4;
	// stw r7,172(r11)
	REX_STORE_U32(ctx.r11.u32 + 172, ctx.r7.u32);
	// addi r7,r11,76
	ctx.r7.s64 = ctx.r11.s64 + 76;
	// stw r10,176(r11)
	REX_STORE_U32(ctx.r11.u32 + 176, ctx.r10.u32);
	// addi r31,r9,-8
	r31.s64 = ctx.r9.s64 + -8;
	// stw r10,180(r11)
	REX_STORE_U32(ctx.r11.u32 + 180, ctx.r10.u32);
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// stw r10,184(r11)
	REX_STORE_U32(ctx.r11.u32 + 184, ctx.r10.u32);
	// lis r6,32767
	ctx.r6.s64 = 2147418112;
	// stw r7,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r7.u32);
	// addi r7,r11,48
	ctx.r7.s64 = ctx.r11.s64 + 48;
	// sth r10,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// ori r29,r6,32768
	r29.u64 = ctx.r6.u64 | 32768;
	// sth r10,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// addi r30,r9,4
	r30.s64 = ctx.r9.s64 + 4;
	// sth r10,8(r11)
	REX_STORE_U16(ctx.r11.u32 + 8, ctx.r10.u16);
	// addi r6,r11,104
	ctx.r6.s64 = ctx.r11.s64 + 104;
	// sth r10,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r10.u16);
	// addi r28,r9,4
	r28.s64 = ctx.r9.s64 + 4;
	// stw r10,188(r11)
	REX_STORE_U32(ctx.r11.u32 + 188, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,192(r11)
	REX_STORE_U32(ctx.r11.u32 + 192, ctx.r10.u32);
	// stw r10,196(r11)
	REX_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// stw r10,200(r11)
	REX_STORE_U32(ctx.r11.u32 + 200, ctx.r10.u32);
	// stw r10,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// stw r31,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, r31.u32);
	// sth r8,56(r11)
	REX_STORE_U16(ctx.r11.u32 + 56, ctx.r8.u16);
	// stw r4,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r4.u32);
	// sth r8,58(r11)
	REX_STORE_U16(ctx.r11.u32 + 58, ctx.r8.u16);
	// stw r5,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r5.u32);
	// stw r10,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// stw r7,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r7.u32);
	// addi r7,r11,132
	ctx.r7.s64 = ctx.r11.s64 + 132;
	// stw r10,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// sth r8,84(r11)
	REX_STORE_U16(ctx.r11.u32 + 84, ctx.r8.u16);
	// stw r9,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r9.u32);
	// stw r30,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, r30.u32);
	// sth r8,86(r11)
	REX_STORE_U16(ctx.r11.u32 + 86, ctx.r8.u16);
	// stw r29,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, r29.u32);
	// stw r10,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// stw r10,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// stw r7,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r7.u32);
	// stw r6,136(r11)
	REX_STORE_U32(ctx.r11.u32 + 136, ctx.r6.u32);
	// stw r9,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r9.u32);
	// stw r10,132(r11)
	REX_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
	// stw r28,144(r11)
	REX_STORE_U32(ctx.r11.u32 + 144, r28.u32);
	// stw r7,160(r11)
	REX_STORE_U32(ctx.r11.u32 + 160, ctx.r7.u32);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// sth r8,44(r11)
	REX_STORE_U16(ctx.r11.u32 + 44, ctx.r8.u16);
loc_82298670:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8229EE28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8229EE30;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12036(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12036);
	// addi r30,r3,12036
	r30.s64 = ctx.r3.s64 + 12036;
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
	ctx.lr = 0x8229EE54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12024(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12024);
	// b 0x8229ee68
	goto loc_8229EE68;
loc_8229EE5C:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x8229ee78
	if (ctx.cr6.eq) goto loc_8229EE78;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_8229EE68:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229ee5c
	if (!ctx.cr6.eq) goto loc_8229EE5C;
	// li r31,0
	r31.s64 = 0;
	// b 0x8229ee7c
	goto loc_8229EE7C;
loc_8229EE78:
	// li r31,1
	r31.s64 = 1;
loc_8229EE7C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229EE90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822A0050) {
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
	// lwz r7,916(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 916);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822a00e8
	if (ctx.cr6.eq) goto loc_822A00E8;
	// lwz r9,1056(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1056);
	// addi r3,r3,924
	ctx.r3.s64 = ctx.r3.s64 + 924;
	// lwz r8,1052(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 1052);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822a00b4
	if (ctx.cr6.eq) goto loc_822A00B4;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// b 0x822a00a8
	goto loc_822A00A8;
loc_822A0090:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822a0104
	if (ctx.cr6.eq) goto loc_822A0104;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_822A00A8:
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822a0090
	if (!ctx.cr6.eq) goto loc_822A0090;
loc_822A00B4:
	// lwz r10,920(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 920);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a00e8
	if (ctx.cr6.eq) goto loc_822A00E8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822A00C8:
	// add r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r6,16(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822a0114
	if (ctx.cr6.eq) goto loc_822A0114;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822a00c8
	if (ctx.cr6.lt) goto loc_822A00C8;
loc_822A00E8:
	// addi r3,r30,1064
	ctx.r3.s64 = r30.s64 + 1064;
loc_822A00EC:
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
loc_822A0104:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// b 0x822a00ec
	goto loc_822A00EC;
loc_822A0114:
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x822a0140
	if (!ctx.cr6.eq) goto loc_822A0140;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822a0140
	if (ctx.cr6.eq) goto loc_822A0140;
	// lwz r10,128(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
loc_822A0140:
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// bl 0x8229f9f8
	ctx.lr = 0x822A0150;
	sub_8229F9F8(ctx, base);
	// lwz r10,916(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 916);
	// mulli r11,r31,24
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(24));
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x822a00ec
	goto loc_822A00EC;
}

DEFINE_REX_FUNC(sub_822A4B68) {
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
	ctx.lr = 0x822A4B80;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	f28.f64 = ctx.f4.f64;
	// beq 0x822a4be4
	if (ctx.cr0.eq) goto loc_822A4BE4;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822a4bf4
	if (!ctx.cr6.gt) goto loc_822A4BF4;
loc_822A4BB4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f28.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x822a4ad8
	ctx.lr = 0x822A4BD0;
	sub_822A4AD8(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822a4bb4
	if (ctx.cr6.lt) goto loc_822A4BB4;
	// b 0x822a4bf4
	goto loc_822A4BF4;
loc_822A4BE4:
	// stfs f31,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 192, temp.u32);
	// stfs f30,196(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// stfs f29,200(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 200, temp.u32);
	// stfs f28,204(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 204, temp.u32);
loc_822A4BF4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x822d4f84
	ctx.lr = 0x822A4C00;
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

DEFINE_REX_FUNC(sub_822A8A60) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e88
	ctx.lr = 0x822A8A68;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f1c
	ctx.lr = 0x822A8A70;
	// stwu r1,-1024(r1)
	ea = -1024 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// addi r11,r3,384
	ctx.r11.s64 = ctx.r3.s64 + 384;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,400
	ctx.r4.s64 = ctx.r3.s64 + 400;
	// lwz r11,31492(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 31492);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f0,1104(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 1104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,384(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 384, temp.u32);
	// lfs f0,1108(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 1108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,388(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 388, temp.u32);
	// lfs f0,1112(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 1112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,392(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 392, temp.u32);
	// lfs f12,1124(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 1124);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,388(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 388);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,1128(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 1128);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,392(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 392);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,1120(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 1120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,384(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 384);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// stfs f0,400(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 400, temp.u32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f12,404(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 404, temp.u32);
	// stfs f10,408(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 408, temp.u32);
	// bl 0x821f6bf0
	ctx.lr = 0x822A8ADC;
	sub_821F6BF0(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822a8b1c
	if (ctx.cr6.lt) goto loc_822A8B1C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822a8b00
	if (!ctx.cr6.eq) goto loc_822A8B00;
	// bl 0x822a9c78
	ctx.lr = 0x822A8AFC;
	sub_822A9C78(ctx, base);
	// b 0x822a8b04
	goto loc_822A8B04;
loc_822A8B00:
	// bl 0x822a9da0
	ctx.lr = 0x822A8B04;
	sub_822A9DA0(ctx, base);
loc_822A8B04:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,416(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 416, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,420(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 420, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,424(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 424, temp.u32);
loc_822A8B1C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f26,416(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 416);
	f26.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f25,424(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 424);
	f25.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fadds f12,f25,f26
	ctx.f12.f64 = double(float(f25.f64 + f26.f64));
	// lfs f24,420(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 420);
	f24.f64 = double(temp.f32);
	// addi r29,r31,416
	r29.s64 = r31.s64 + 416;
	// lfs f0,-29184(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -29184);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f13,f0
	f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f31,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lfs f28,2024(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2024);
	f28.f64 = double(temp.f32);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f28,100(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmsubs f29,f12,f31,f24
	f29.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, -f24.f64)));
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x822d4d68
	ctx.lr = 0x822A8B68;
	sub_822D4D68(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(f29.f64, ctx.f0.f64);
	// bge cr6,0x822a8be4
	if (!ctx.cr6.lt) goto loc_822A8BE4;
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lfs f11,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// fmsubs f0,f0,f28,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f28.f64, -ctx.f13.f64)));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmsubs f12,f11,f31,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, f31.f64, -ctx.f12.f64)));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fnmsubs f0,f11,f28,f13
	ctx.f0.f64 = double(float(-std::fma(ctx.f11.f64, f28.f64, -ctx.f13.f64)));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822a70e8
	ctx.lr = 0x822A8BAC;
	sub_822A70E8(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x822a6f18
	ctx.lr = 0x822A8BBC;
	sub_822A6F18(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x822a5a10
	ctx.lr = 0x822A8BCC;
	sub_822A5A10(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
loc_822A8BE4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a84b8
	ctx.lr = 0x822A8BEC;
	sub_822A84B8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lfs f30,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f30.f64 = double(temp.f32);
	// lfs f27,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	f27.f64 = double(temp.f32);
	// blt cr6,0x822a9164
	if (ctx.cr6.lt) goto loc_822A9164;
	// beq cr6,0x822a9140
	if (ctx.cr6.eq) goto loc_822A9140;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x822a8d18
	if (ctx.cr6.lt) goto loc_822A8D18;
	// bne cr6,0x822a91a8
	if (!ctx.cr6.eq) goto loc_822A91A8;
	// addi r30,r31,128
	r30.s64 = r31.s64 + 128;
	// addi r28,r31,192
	r28.s64 = r31.s64 + 192;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a50e0
	ctx.lr = 0x822A8C30;
	sub_822A50E0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x8229f270
	ctx.lr = 0x822A8C40;
	sub_8229F270(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821f3f40
	ctx.lr = 0x822A8C4C;
	sub_821F3F40(ctx, base);
	// addi r30,r31,256
	r30.s64 = r31.s64 + 256;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821f3f40
	ctx.lr = 0x822A8C5C;
	sub_821F3F40(ctx, base);
	// lbz r11,680(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 680);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822a91a8
	if (ctx.cr0.eq) goto loc_822A91A8;
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 96);
	// bl 0x8229e9b0
	ctx.lr = 0x822A8C70;
	sub_8229E9B0(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 96);
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f29,f0,f27
	f29.f64 = double(float(ctx.f0.f64 * f27.f64));
	// bl 0x8229e988
	ctx.lr = 0x822A8C90;
	sub_8229E988(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmuls f28,f0,f27
	f28.f64 = double(float(ctx.f0.f64 * f27.f64));
	// bl 0x822a5ac8
	ctx.lr = 0x822A8CC4;
	sub_822A5AC8(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f23,f29,f0
	f23.f64 = double(float(f29.f64 * ctx.f0.f64));
	// fadds f1,f23,f27
	ctx.f1.f64 = double(float(f23.f64 + f27.f64));
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f22,f28,f0
	f22.f64 = double(float(f28.f64 * ctx.f0.f64));
	// bl 0x822d6130
	ctx.lr = 0x822A8CDC;
	sub_822D6130(ctx, base);
	// frsp f21,f1
	ctx.fpscr.disableFlushMode();
	f21.f64 = double(float(ctx.f1.f64));
	// fadds f1,f22,f27
	ctx.f1.f64 = double(float(f22.f64 + f27.f64));
	// bl 0x822d6130
	ctx.lr = 0x822A8CE8;
	sub_822D6130(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,304(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f21,f23
	ctx.f12.f64 = double(float(f21.f64 - f23.f64));
	// fsubs f0,f0,f22
	ctx.f0.f64 = double(float(ctx.f0.f64 - f22.f64));
	// fdivs f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 / f29.f64));
	// fdivs f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 / f28.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,304(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 304, temp.u32);
	// lfs f0,308(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,308(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 308, temp.u32);
	// b 0x822a91a8
	goto loc_822A91A8;
loc_822A8D18:
	// lfs f13,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 * f28.f64));
	// lfs f0,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 * f28.f64));
	// lfs f11,516(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 516);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * f28.f64));
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// stfs f12,8(r29)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// stfs f30,112(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,132(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f30,152(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f30,172(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f31,160(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f11,168(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lfs f2,424(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 424);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x822d48b8
	ctx.lr = 0x822A8D8C;
	sub_822D48B8(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x822a5038
	ctx.lr = 0x822A8D98;
	sub_822A5038(ctx, base);
	// lfs f0,424(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 424);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,420(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 420);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fsqrts f2,f0
	ctx.f2.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x822d48b8
	ctx.lr = 0x822A8DB4;
	sub_822D48B8(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x822a4f90
	ctx.lr = 0x822A8DC4;
	sub_822A4F90(ctx, base);
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x8229f270
	ctx.lr = 0x822A8DD4;
	sub_8229F270(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x821f3f40
	ctx.lr = 0x822A8DE0;
	sub_821F3F40(ctx, base);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x8229f270
	ctx.lr = 0x822A8DF0;
	sub_8229F270(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821f3f40
	ctx.lr = 0x822A8DFC;
	sub_821F3F40(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822A8E08:
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f13,-16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f0,f0,f31,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, -ctx.f13.f64)));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfsx f0,r11,r9
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822a8e08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A8E08;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822a9aa8
	ctx.lr = 0x822A8E48;
	sub_822A9AA8(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// addi r11,r3,44
	ctx.r11.s64 = ctx.r3.s64 + 44;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822A8E58:
	// lfs f0,-12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,-44(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -44);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// lfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// lfs f8,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f13,f12,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f11.f64, ctx.f13.f64)));
	// fmadds f13,f10,f9,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f9.f64, ctx.f13.f64)));
	// fmadds f0,f0,f8,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f8.f64, ctx.f13.f64)));
	// stfsu f0,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x822a8e58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A8E58;
	// li r4,2
	ctx.r4.s64 = 2;
	// lfs f0,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822a9aa8
	ctx.lr = 0x822A8EB4;
	sub_822A9AA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x822a56a8
	ctx.lr = 0x822A8EC4;
	sub_822A56A8(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822A8ED4:
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f13,-16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f31,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, ctx.f13.f64)));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfsx f0,r11,r9
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822a8ed4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A8ED4;
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x821f4c50
	ctx.lr = 0x822A8F30;
	sub_821F4C50(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f12,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,220(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// lfs f0,-5956(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -5956);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-24904(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24904);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f29,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	f29.f64 = double(temp.f32);
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f29,212(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f13,216(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// bl 0x822d4d68
	ctx.lr = 0x822A8F68;
	sub_822D4D68(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fabs f13,f29
	ctx.f13.u64 = f29.u64 & ~0x8000000000000000;
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,204(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lfs f0,216(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bge cr6,0x822a8fd4
	if (!ctx.cr6.lt) goto loc_822A8FD4;
	// lfs f12,212(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f12,f31
	ctx.f10.f64 = double(float(ctx.f12.f64 * f31.f64));
	// lfs f13,208(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f11,f13,f31,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, -ctx.f11.f64)));
	// stfs f11,180(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// stfs f9,176(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// stfs f10,184(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fmuls f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f7,f12,f9
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f6,f13,f10
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmsubs f12,f12,f10,f8
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f10.f64, -ctx.f8.f64)));
	// stfs f12,192(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fmsubs f13,f13,f11,f7
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, -ctx.f7.f64)));
	// stfs f13,200(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fmsubs f0,f0,f9,f6
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, -ctx.f6.f64)));
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// b 0x822a901c
	goto loc_822A901C;
loc_822A8FD4:
	// lfs f12,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f12,f31
	ctx.f10.f64 = double(float(ctx.f12.f64 * f31.f64));
	// lfs f13,212(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f11,f13,f31,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, -ctx.f11.f64)));
	// stfs f11,192(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// stfs f9,196(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// stfs f10,200(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fmuls f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f7,f12,f9
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f6,f13,f10
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmsubs f12,f12,f10,f8
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f10.f64, -ctx.f8.f64)));
	// stfs f12,180(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmsubs f13,f13,f11,f7
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, -ctx.f7.f64)));
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fmsubs f0,f0,f9,f6
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, -ctx.f6.f64)));
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
loc_822A901C:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x821f4c50
	ctx.lr = 0x822A9028;
	sub_821F4C50(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821f4c50
	ctx.lr = 0x822A9034;
	sub_821F4C50(ctx, base);
	// stfs f31,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f31,228(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stfs f31,232(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stfs f30,236(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// bl 0x821f3f40
	ctx.lr = 0x822A9050;
	sub_821F3F40(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822ca328
	ctx.lr = 0x822A905C;
	sub_822CA328(ctx, base);
	// addi r30,r31,128
	r30.s64 = r31.s64 + 128;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821f3f40
	ctx.lr = 0x822A906C;
	sub_821F3F40(ctx, base);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822a9098
	if (!ctx.cr0.eq) goto loc_822A9098;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822a9098
	if (!ctx.cr6.eq) goto loc_822A9098;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a6618
	ctx.lr = 0x822A9090;
	sub_822A6618(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x822a90cc
	goto loc_822A90CC;
loc_822A9098:
	// addi r28,r31,192
	r28.s64 = r31.s64 + 192;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a5b38
	ctx.lr = 0x822A90AC;
	sub_822A5B38(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x8229f270
	ctx.lr = 0x822A90BC;
	sub_8229F270(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821f3f40
	ctx.lr = 0x822A90C8;
	sub_821F3F40(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
loc_822A90CC:
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// bl 0x821f3f40
	ctx.lr = 0x822A90D4;
	sub_821F3F40(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lfs f6,532(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 532);
	ctx.f6.f64 = double(temp.f32);
	// fmr f4,f30
	ctx.f4.f64 = f30.f64;
	// lfs f5,528(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 528);
	ctx.f5.f64 = double(temp.f32);
	// fmr f3,f28
	ctx.f3.f64 = f28.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x822ca1f8
	ctx.lr = 0x822A90F4;
	sub_822CA1F8(ctx, base);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x8229f270
	ctx.lr = 0x822A9104;
	sub_8229F270(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821f3f40
	ctx.lr = 0x822A9110;
	sub_821F3F40(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x821f3f40
	ctx.lr = 0x822A911C;
	sub_821F3F40(ctx, base);
	// lfs f0,328(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 328);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,344(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 344);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,360(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 360);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,376(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 376);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,264(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 264, temp.u32);
	// stfs f13,280(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 280, temp.u32);
	// stfs f12,296(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 296, temp.u32);
	// stfs f11,312(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 312, temp.u32);
	// b 0x822a91a8
	goto loc_822A91A8;
loc_822A9140:
	// addi r30,r31,128
	r30.s64 = r31.s64 + 128;
	// addi r28,r31,192
	r28.s64 = r31.s64 + 192;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r6,r31,432
	ctx.r6.s64 = r31.s64 + 432;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a7478
	ctx.lr = 0x822A915C;
	sub_822A7478(ctx, base);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// b 0x822a9184
	goto loc_822A9184;
loc_822A9164:
	// addi r30,r31,128
	r30.s64 = r31.s64 + 128;
	// addi r28,r31,192
	r28.s64 = r31.s64 + 192;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r6,r31,432
	ctx.r6.s64 = r31.s64 + 432;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a71f0
	ctx.lr = 0x822A9180;
	sub_822A71F0(ctx, base);
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
loc_822A9184:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8229f270
	ctx.lr = 0x822A9190;
	sub_8229F270(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821f3f40
	ctx.lr = 0x822A919C;
	sub_821F3F40(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// bl 0x821f3f40
	ctx.lr = 0x822A91A8;
	sub_821F3F40(ctx, base);
loc_822A91A8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f27,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r4,r31,256
	ctx.r4.s64 = r31.s64 + 256;
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r3,r31,320
	ctx.r3.s64 = r31.s64 + 320;
	// stfs f31,128(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f0,15944(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15944);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f30,152(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f27,160(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f27,164(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f30,172(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x8229f270
	ctx.lr = 0x822A9200;
	sub_8229F270(ctx, base);
	// stfs f26,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f26.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// stfs f24,4(r29)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// stfs f25,8(r29)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f68
	ctx.lr = 0x822A9218;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822CE528) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,26260
	ctx.r11.s64 = ctx.r11.s64 + 26260;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// addi r4,r11,26248
	ctx.r4.s64 = ctx.r11.s64 + 26248;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x822d6450
	ctx.lr = 0x822CE56C;
	sub_822D6450(ctx, base);
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

DEFINE_REX_FUNC(sub_822D0568) {
	REX_FUNC_PROLOGUE();
	// lbz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 104);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,105(r3)
	REX_STORE_U8(ctx.r3.u32 + 105, ctx.r11.u8);
	// stb r10,104(r3)
	REX_STORE_U8(ctx.r3.u32 + 104, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D0910) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822D0918;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
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
	ctx.lr = 0x822D093C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D0954;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822D1580) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822D1588;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,4596(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 4596);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(r29.u32, 16, ctx.xer);
	// bge cr6,0x822d15c8
	if (!ctx.cr6.lt) goto loc_822D15C8;
	// mulli r11,r29,264
	ctx.r11.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(264));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r31,r11,256
	r31.s64 = ctx.r11.s64 + 256;
loc_822D15A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d0de0
	ctx.lr = 0x822D15B0;
	sub_822D0DE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d160c
	if (ctx.cr0.eq) goto loc_822D160C;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,264
	r31.s64 = r31.s64 + 264;
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(r29.u32, 16, ctx.xer);
	// blt cr6,0x822d15a8
	if (ctx.cr6.lt) goto loc_822D15A8;
loc_822D15C8:
	// lwz r11,4596(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4596);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822d1600
	if (!ctx.cr6.gt) goto loc_822D1600;
	// addi r31,r30,256
	r31.s64 = r30.s64 + 256;
loc_822D15DC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d0de0
	ctx.lr = 0x822D15E4;
	sub_822D0DE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d160c
	if (ctx.cr0.eq) goto loc_822D160C;
	// lwz r11,4596(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4596);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,264
	r31.s64 = r31.s64 + 264;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822d15dc
	if (ctx.cr6.lt) goto loc_822D15DC;
loc_822D1600:
	// li r3,16
	ctx.r3.s64 = 16;
loc_822D1604:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
loc_822D160C:
	// lwz r11,4600(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4600);
	// addi r31,r30,4600
	r31.s64 = r30.s64 + 4600;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D1624;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,4596(r30)
	REX_STORE_U32(r30.u32 + 4596, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D163C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x822d1604
	goto loc_822D1604;
}

DEFINE_REX_FUNC(sub_822D37B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822D37B8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d37f4
	if (ctx.cr0.eq) goto loc_822D37F4;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822d37f4
	if (ctx.cr6.lt) goto loc_822D37F4;
	// lwz r29,0(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822d37ec
	if (ctx.cr6.eq) goto loc_822D37EC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x822D37EC;
	sub_822D4FA0(ctx, base);
loc_822D37EC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c80a8
	ctx.lr = 0x822D37F4;
	sub_822C80A8(ctx, base);
loc_822D37F4:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stbx r10,r30,r31
	REX_STORE_U8(r30.u32 + r31.u32, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(__savegprlr_21) {
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

DEFINE_REX_FUNC(sub_822D4EF4) {
	REX_FUNC_PROLOGUE();
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// mr r12,r5
	ctx.r12.u64 = ctx.r5.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(__savefpr_22) {
	REX_FUNC_PROLOGUE();
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
	// stfd f22,-80(r12)
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(sub_822D5910) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi r4,0
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x822d5934
	if (ctx.cr0.eq) goto loc_822D5934;
loc_822D591C:
	// cmpwi cr1,r6,0
	ctx.cr1.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// cmpw r6,r4
	ctx.cr0.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// beq cr1,0x822d5944
	if (ctx.cr1.eq) goto loc_822D5944;
	// beq 0x822d5948
	if (ctx.cr0.eq) goto loc_822D5948;
	// lbzu r6,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// b 0x822d591c
	goto loc_822D591C;
loc_822D5934:
	// cmpwi r6,0
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x822d5948
	if (ctx.cr0.eq) goto loc_822D5948;
	// lbzu r6,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// b 0x822d5934
	goto loc_822D5934;
loc_822D5944:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D5948:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D6EB0) {
	REX_FUNC_PROLOGUE();
	// b 0x824d49cc
	__imp__KeTlsSetValue(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822D7038) {
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
	// beq cr6,0x822d70e4
	if (ctx.cr6.eq) goto loc_822D70E4;
	// lwz r3,36(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d7064
	if (ctx.cr6.eq) goto loc_822D7064;
	// bl 0x822d98f0
	ctx.lr = 0x822D7064;
	sub_822D98F0(ctx, base);
loc_822D7064:
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d7074
	if (ctx.cr6.eq) goto loc_822D7074;
	// bl 0x822d98f0
	ctx.lr = 0x822D7074;
	sub_822D98F0(ctx, base);
loc_822D7074:
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d7084
	if (ctx.cr6.eq) goto loc_822D7084;
	// bl 0x822d98f0
	ctx.lr = 0x822D7084;
	sub_822D98F0(ctx, base);
loc_822D7084:
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d7094
	if (ctx.cr6.eq) goto loc_822D7094;
	// bl 0x822d98f0
	ctx.lr = 0x822D7094;
	sub_822D98F0(ctx, base);
loc_822D7094:
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d70a4
	if (ctx.cr6.eq) goto loc_822D70A4;
	// bl 0x822d98f0
	ctx.lr = 0x822D70A4;
	sub_822D98F0(ctx, base);
loc_822D70A4:
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d70b4
	if (ctx.cr6.eq) goto loc_822D70B4;
	// bl 0x822d98f0
	ctx.lr = 0x822D70B4;
	sub_822D98F0(ctx, base);
loc_822D70B4:
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d70c4
	if (ctx.cr6.eq) goto loc_822D70C4;
	// bl 0x822d98f0
	ctx.lr = 0x822D70C4;
	sub_822D98F0(ctx, base);
loc_822D70C4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 92);
	// addi r11,r11,29928
	ctx.r11.s64 = ctx.r11.s64 + 29928;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822d70dc
	if (ctx.cr6.eq) goto loc_822D70DC;
	// bl 0x822d98f0
	ctx.lr = 0x822D70DC;
	sub_822D98F0(ctx, base);
loc_822D70DC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d98f0
	ctx.lr = 0x822D70E4;
	sub_822D98F0(ctx, base);
loc_822D70E4:
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

DEFINE_REX_FUNC(__savevmx_86) {
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

DEFINE_REX_FUNC(__restvmx_102) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_822DA948) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822DA950;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x822e15a8
	ctx.lr = 0x822DA964;
	sub_822E15A8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// andi. r10,r11,130
	ctx.r10.u64 = ctx.r11.u64 & 130;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822da99c
	if (!ctx.cr0.eq) goto loc_822DA99C;
	// bl 0x822db6c0
	ctx.lr = 0x822DA97C;
	sub_822DB6C0(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
loc_822DA980:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_822DA988:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
loc_822DA98C:
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// b 0x822dab14
	goto loc_822DAB14;
loc_822DA99C:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822da9b0
	if (ctx.cr0.eq) goto loc_822DA9B0;
	// bl 0x822db6c0
	ctx.lr = 0x822DA9A8;
	sub_822DB6C0(ctx, base);
	// li r10,34
	ctx.r10.s64 = 34;
	// b 0x822da980
	goto loc_822DA980;
loc_822DA9B0:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x822da9d8
	if (ctx.cr0.eq) goto loc_822DA9D8;
	// rlwinm. r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// beq 0x822da98c
	if (ctx.cr0.eq) goto loc_822DA98C;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
loc_822DA9D8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// andi. r10,r11,268
	ctx.r10.u64 = ctx.r11.u64 & 268;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822daa34
	if (!ctx.cr0.eq) goto loc_822DAA34;
	// bl 0x822dcb08
	ctx.lr = 0x822DAA00;
	sub_822DCB08(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822daa1c
	if (ctx.cr6.eq) goto loc_822DAA1C;
	// bl 0x822dcb08
	ctx.lr = 0x822DAA10;
	sub_822DCB08(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822daa2c
	if (!ctx.cr6.eq) goto loc_822DAA2C;
loc_822DAA1C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82246ca8
	ctx.lr = 0x822DAA24;
	sub_82246CA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822daa34
	if (!ctx.cr0.eq) goto loc_822DAA34;
loc_822DAA2C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e1520
	ctx.lr = 0x822DAA34;
	sub_822E1520(ctx, base);
loc_822DAA34:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// andi. r11,r11,264
	ctx.r11.u64 = ctx.r11.u64 & 264;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822daaec
	if (ctx.cr0.eq) goto loc_822DAAEC;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// subf. r30,r4,r10
	r30.u64 = ctx.r10.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble 0x822daa7c
	if (!ctx.cr0.gt) goto loc_822DAA7C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e13a0
	ctx.lr = 0x822DAA74;
	sub_822E13A0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x822daadc
	goto loc_822DAADC;
loc_822DAA7C:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(r29.s32, -1, ctx.xer);
	// beq cr6,0x822daab0
	if (ctx.cr6.eq) goto loc_822DAAB0;
	// cmpwi cr6,r29,-2
	ctx.cr6.compare<int32_t>(r29.s32, -2, ctx.xer);
	// beq cr6,0x822daab0
	if (ctx.cr6.eq) goto loc_822DAAB0;
	// srawi r11,r29,5
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1F) != 0);
	ctx.r11.s64 = r29.s32 >> 5;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-11584
	ctx.r10.s64 = ctx.r10.s64 + -11584;
	// clrlwi r11,r29,27
	ctx.r11.u64 = r29.u32 & 0x1F;
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822daab8
	goto loc_822DAAB8;
loc_822DAAB0:
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
loc_822DAAB8:
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822daadc
	if (ctx.cr0.eq) goto loc_822DAADC;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e0e78
	ctx.lr = 0x822DAAD4;
	sub_822E0E78(ctx, base);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// beq cr6,0x822da988
	if (ctx.cr6.eq) goto loc_822DA988;
loc_822DAADC:
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// b 0x822dab04
	goto loc_822DAB04;
loc_822DAAEC:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r30,1
	r30.s64 = 1;
	// bl 0x822e13a0
	ctx.lr = 0x822DAB00;
	sub_822E13A0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_822DAB04:
	// cmpw cr6,r28,r30
	ctx.cr6.compare<int32_t>(r28.s32, r30.s32, ctx.xer);
	// bne cr6,0x822da988
	if (!ctx.cr6.eq) goto loc_822DA988;
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
loc_822DAB14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822E84C0) {
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
	ctx.lr = 0x822E84D8;
	sub_822EECA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e82e0
	ctx.lr = 0x822E84E0;
	sub_822E82E0(ctx, base);
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

DEFINE_REX_FUNC(sub_822E90F0) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r5,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r5.u32);
	// stw r6,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r6.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E9AF0) {
	REX_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32810
	ctx.r4.u64 = ctx.r4.u64 | 32810;
	// b 0x823cd118
	sub_823CD118(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822E9C58) {
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
	// bl 0x822e84c0
	ctx.lr = 0x822E9C70;
	sub_822E84C0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,-28440
	ctx.r10.s64 = ctx.r11.s64 + -28440;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x822e9b00
	ctx.lr = 0x822E9C84;
	sub_822E9B00(ctx, base);
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

DEFINE_REX_FUNC(sub_822EA928) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EAD28) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EB160) {
	REX_FUNC_PROLOGUE();
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// b 0x822eaf80
	sub_822EAF80(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822EB224) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EB350) {
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
	// bl 0x822f22a8
	ctx.lr = 0x822EB368;
	sub_822F22A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,672(r31)
	REX_STORE_U32(r31.u32 + 672, ctx.r11.u32);
	// stw r10,660(r31)
	REX_STORE_U32(r31.u32 + 660, ctx.r10.u32);
	// stw r11,676(r31)
	REX_STORE_U32(r31.u32 + 676, ctx.r11.u32);
	// stw r11,664(r31)
	REX_STORE_U32(r31.u32 + 664, ctx.r11.u32);
	// stw r11,668(r31)
	REX_STORE_U32(r31.u32 + 668, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_822ECB58) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,120(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822ECB88) {
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
	ctx.lr = 0x822ECBB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,316(r31)
	REX_STORE_U32(r31.u32 + 316, ctx.r9.u32);
	// std r30,304(r31)
	REX_STORE_U64(r31.u32 + 304, r30.u64);
	// lwz r7,120(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 120);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822ECBD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,20(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x822ECBE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_822ED760) {
	REX_FUNC_PROLOGUE();
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822ED7D8) {
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
	// lwz r10,56(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,-27352
	ctx.r9.s64 = ctx.r11.s64 + -27352;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x822ed814
	if (ctx.cr6.eq) goto loc_822ED814;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// ori r4,r4,32781
	ctx.r4.u64 = ctx.r4.u64 | 32781;
	// bl 0x823cd250
	ctx.lr = 0x822ED814;
	sub_823CD250(ctx, base);
loc_822ED814:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// bl 0x822eece8
	ctx.lr = 0x822ED830;
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

DEFINE_REX_FUNC(sub_822F0998) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822f09ac
	if (!ctx.cr6.eq) goto loc_822F09AC;
loc_822F09A0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_822F09AC:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822f09a0
	if (ctx.cr6.eq) goto loc_822F09A0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822f09a0
	if (ctx.cr6.eq) goto loc_822F09A0;
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x822f9b20
	sub_822F9B20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822F1CB8) {
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
	ctx.lr = 0x822F1CC0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,255
	ctx.r11.s64 = 255;
	// li r27,0
	r27.s64 = 0;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f1e18
	if (ctx.cr6.eq) goto loc_822F1E18;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822f1e18
	if (ctx.cr6.eq) goto loc_822F1E18;
	// cmpwi cr6,r6,-2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -2, ctx.xer);
	// blt cr6,0x822f1e18
	if (ctx.cr6.lt) goto loc_822F1E18;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// bgt cr6,0x822f1e18
	if (ctx.cr6.gt) goto loc_822F1E18;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822f1e18
	if (ctx.cr6.eq) goto loc_822F1E18;
	// lwz r10,528(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 528);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822f1e18
	if (ctx.cr6.eq) goto loc_822F1E18;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822ef620
	ctx.lr = 0x822F1D28;
	sub_822EF620(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822f1d54
	if (!ctx.cr6.lt) goto loc_822F1D54;
	// lis r11,-32672
	ctx.r11.s64 = -2141192192;
	// ori r10,r11,5
	ctx.r10.u64 = ctx.r11.u64 | 5;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822f1d54
	if (ctx.cr6.eq) goto loc_822F1D54;
	// lis r11,-32672
	ctx.r11.s64 = -2141192192;
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822f1dd8
	if (!ctx.cr6.eq) goto loc_822F1DD8;
loc_822F1D54:
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,255
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 255, ctx.xer);
	// stw r4,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r4.u32);
	// beq cr6,0x822f1dbc
	if (ctx.cr6.eq) goto loc_822F1DBC;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822f1dbc
	if (!ctx.cr6.gt) goto loc_822F1DBC;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x822f9900
	ctx.lr = 0x822F1D84;
	sub_822F9900(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x822f1dbc
	if (!ctx.cr6.eq) goto loc_822F1DBC;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lhz r9,14(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// lhz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// divwu r4,r10,r5
	ctx.r4.u64 = uint32_t(ctx.r5.u32 ? ctx.r10.u32 / ctx.r5.u32 : 0);
	// twllei r5,0
	if (ctx.r5.s32 == 0 || ctx.r5.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r4,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r4.u32);
loc_822F1DBC:
	// lis r11,80
	ctx.r11.s64 = 5242880;
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822f1dd8
	if (!ctx.cr6.eq) goto loc_822F1DD8;
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
loc_822F1DD8:
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822f1e04
	if (ctx.cr6.eq) goto loc_822F1E04;
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r10,r11,11
	ctx.r10.u64 = ctx.r11.u64 | 11;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822f1e04
	if (ctx.cr6.eq) goto loc_822F1E04;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822f0588
	ctx.lr = 0x822F1DFC;
	sub_822F0588(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
loc_822F1E04:
	// stw r27,0(r28)
	REX_STORE_U32(r28.u32 + 0, r27.u32);
	// li r3,35
	ctx.r3.s64 = 35;
	// stw r27,0(r29)
	REX_STORE_U32(r29.u32 + 0, r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
loc_822F1E18:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822F8D50) {
	REX_FUNC_PROLOGUE();
	// std r4,56(r3)
	REX_STORE_U64(ctx.r3.u32 + 56, ctx.r4.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F8D68) {
	REX_FUNC_PROLOGUE();
	// ld r3,64(r3)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r3.u32 + 64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F8F38) {
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
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,2040
	ctx.r3.s64 = 2040;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x823cd118
	ctx.lr = 0x822F8F60;
	sub_823CD118(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822f8f78
	if (!ctx.cr6.eq) goto loc_822F8F78;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x822f8f90
	goto loc_822F8F90;
loc_822F8F78:
	// li r5,2040
	ctx.r5.s64 = 2040;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5870
	ctx.lr = 0x822F8F88;
	sub_822D5870(ctx, base);
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822F8F90:
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

DEFINE_REX_FUNC(sub_822FA658) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,28(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822FAE50) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lhz r10,76(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 76);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// beq cr6,0x822faec4
	if (ctx.cr6.eq) goto loc_822FAEC4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ld r5,64(r3)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r3.u32 + 64);
	// bl 0x822facb8
	ctx.lr = 0x822FAE90;
	sub_822FACB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822faec4
	if (!ctx.cr6.eq) goto loc_822FAEC4;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822faec4
	if (ctx.cr6.eq) goto loc_822FAEC4;
	// lbz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822faec8
	if (ctx.cr6.eq) goto loc_822FAEC8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// stb r10,96(r31)
	REX_STORE_U8(r31.u32 + 96, ctx.r10.u8);
	// b 0x822faec8
	goto loc_822FAEC8;
loc_822FAEC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822FAEC8:
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

DEFINE_REX_FUNC(sub_822FF850) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ff874
	if (ctx.cr6.eq) goto loc_822FF874;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822ff8b8
	if (ctx.cr6.lt) goto loc_822FF8B8;
loc_822FF874:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8229a710
	ctx.lr = 0x822FF880;
	sub_8229A710(ctx, base);
	// li r3,720
	ctx.r3.s64 = 720;
	// bl 0x823143c0
	ctx.lr = 0x822FF888;
	sub_823143C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ff8b8
	if (ctx.cr6.eq) goto loc_822FF8B8;
	// li r5,720
	ctx.r5.s64 = 720;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x822FF8A0;
	sub_822D5870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ff7c0
	ctx.lr = 0x822FF8A8;
	sub_822FF7C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bge cr6,0x822ff8bc
	if (!ctx.cr6.lt) goto loc_822FF8BC;
	// bl 0x823143d0
	ctx.lr = 0x822FF8B8;
	sub_823143D0(ctx, base);
loc_822FF8B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822FF8BC:
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

DEFINE_REX_FUNC(sub_823019F8) {
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
	// bl 0x822d4e64
	ctx.lr = 0x82301A00;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x822d4f00
	ctx.lr = 0x82301A08;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// lwz r11,352(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 352);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r20,360(r3)
	r20.u64 = REX_LOAD_U32(ctx.r3.u32 + 360);
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// lwz r27,384(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 384);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r25,34(r31)
	r25.u64 = REX_LOAD_U16(r31.u32 + 34);
	// beq cr6,0x82301fd8
	if (ctx.cr6.eq) goto loc_82301FD8;
	// lwz r11,424(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82301a44
	if (ctx.cr6.eq) goto loc_82301A44;
	// li r20,6
	r20.s64 = 6;
loc_82301A44:
	// cmpwi cr6,r25,6
	ctx.cr6.compare<int32_t>(r25.s32, 6, ctx.xer);
	// bne cr6,0x82301cfc
	if (!ctx.cr6.eq) goto loc_82301CFC;
	// cmpwi cr6,r20,2
	ctx.cr6.compare<int32_t>(r20.s32, 2, ctx.xer);
	// bne cr6,0x82301cfc
	if (!ctx.cr6.eq) goto loc_82301CFC;
	// lwz r11,372(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 372);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f29,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	f29.f64 = double(temp.f32);
	// lfs f28,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	f28.f64 = double(temp.f32);
	// lfs f27,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	f27.f64 = double(temp.f32);
	// lfs f26,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	f26.f64 = double(temp.f32);
	// lfs f25,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	f25.f64 = double(temp.f32);
	// lfs f24,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	f24.f64 = double(temp.f32);
	// lfs f23,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	f23.f64 = double(temp.f32);
	// lfs f22,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	f22.f64 = double(temp.f32);
	// lfs f21,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	f21.f64 = double(temp.f32);
	// lfs f20,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	f20.f64 = double(temp.f32);
	// lfs f19,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	f19.f64 = double(temp.f32);
	// lfs f18,20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	f18.f64 = double(temp.f32);
	// ble cr6,0x82301fd8
	if (!ctx.cr6.gt) goto loc_82301FD8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f30.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82301AB0:
	// lwz r11,524(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 524);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lhz r5,110(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 110);
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82301ACC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lwz r9,524(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 524);
	// li r6,1
	ctx.r6.s64 = 1;
	// lhz r5,110(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 110);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// frsp f31,f13
	f31.f64 = double(float(ctx.f13.f64));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82301AFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// lwz r7,524(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 524);
	// li r6,2
	ctx.r6.s64 = 2;
	// lhz r5,110(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 110);
	// std r8,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f12,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// frsp f17,f11
	f17.f64 = double(float(ctx.f11.f64));
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82301B2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r4,r3
	ctx.r4.s64 = ctx.r3.s32;
	// lwz r11,524(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 524);
	// li r6,3
	ctx.r6.s64 = 3;
	// lhz r5,110(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 110);
	// std r4,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// lfd f10,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// frsp f16,f9
	f16.f64 = double(float(ctx.f9.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82301B5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lwz r9,524(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 524);
	// li r6,4
	ctx.r6.s64 = 4;
	// lhz r5,110(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 110);
	// std r10,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f8,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// frsp f15,f7
	f15.f64 = double(float(ctx.f7.f64));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82301B8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// lwz r7,524(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 524);
	// li r6,5
	ctx.r6.s64 = 5;
	// lhz r5,110(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 110);
	// std r8,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r8.u64);
	// lfd f6,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// frsp f14,f5
	f14.f64 = double(float(ctx.f5.f64));
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82301BBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r6,r3
	ctx.r6.s64 = ctx.r3.s32;
	// fmuls f4,f14,f25
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(f14.f64 * f25.f64));
	// fmuls f3,f14,f19
	ctx.f3.f64 = double(float(f14.f64 * f19.f64));
	// std r6,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// lfd f2,128(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmadds f13,f0,f24,f4
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, f24.f64, ctx.f4.f64)));
	// fmadds f12,f0,f18,f3
	ctx.f12.f64 = double(float(std::fma(ctx.f0.f64, f18.f64, ctx.f3.f64)));
	// fmadds f11,f15,f26,f13
	ctx.f11.f64 = double(float(std::fma(f15.f64, f26.f64, ctx.f13.f64)));
	// fmadds f10,f15,f20,f12
	ctx.f10.f64 = double(float(std::fma(f15.f64, f20.f64, ctx.f12.f64)));
	// fmadds f9,f16,f27,f11
	ctx.f9.f64 = double(float(std::fma(f16.f64, f27.f64, ctx.f11.f64)));
	// fmadds f8,f17,f28,f9
	ctx.f8.f64 = double(float(std::fma(f17.f64, f28.f64, ctx.f9.f64)));
	// fmadds f0,f31,f29,f8
	ctx.f0.f64 = double(float(std::fma(f31.f64, f29.f64, ctx.f8.f64)));
	// fmadds f7,f16,f21,f10
	ctx.f7.f64 = double(float(std::fma(f16.f64, f21.f64, ctx.f10.f64)));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// fmadds f6,f17,f22,f7
	ctx.f6.f64 = double(float(std::fma(f17.f64, f22.f64, ctx.f7.f64)));
	// lfs f17,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f17.f64 = double(temp.f32);
	// fmadds f31,f31,f23,f6
	f31.f64 = double(float(std::fma(f31.f64, f23.f64, ctx.f6.f64)));
	// bge cr6,0x82301c20
	if (!ctx.cr6.lt) goto loc_82301C20;
	// fsubs f0,f0,f17
	ctx.f0.f64 = double(float(ctx.f0.f64 - f17.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.f13.u64);
	// lwz r3,140(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// b 0x82301c30
	goto loc_82301C30;
loc_82301C20:
	// fadds f0,f0,f17
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f17.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.f13.u64);
	// lwz r3,140(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
loc_82301C30:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82301c48
	if (ctx.cr6.lt) goto loc_82301C48;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82301c4c
	if (!ctx.cr6.gt) goto loc_82301C4C;
loc_82301C48:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82301C4C:
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 520);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82301C64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f30.f64);
	// bge cr6,0x82301c80
	if (!ctx.cr6.lt) goto loc_82301C80;
	// fsubs f0,f31,f17
	ctx.f0.f64 = double(float(f31.f64 - f17.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.f13.u64);
	// lwz r3,140(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// b 0x82301c90
	goto loc_82301C90;
loc_82301C80:
	// fadds f0,f31,f17
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64 + f17.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.f13.u64);
	// lwz r3,140(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
loc_82301C90:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82301ca8
	if (ctx.cr6.lt) goto loc_82301CA8;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82301cac
	if (!ctx.cr6.gt) goto loc_82301CAC;
loc_82301CA8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82301CAC:
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 520);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82301CC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r23,r9,r23
	r23.u64 = ctx.r9.u64 + r23.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r26,r11,r26
	r26.u64 = ctx.r11.u64 + r26.u64;
	// bne 0x82301ab0
	if (!ctx.cr0.eq) goto loc_82301AB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x822d4f4c
	ctx.lr = 0x82301CF8;
	// b 0x822d4eb4
	return;
loc_82301CFC:
	// cmpw cr6,r25,r20
	ctx.cr6.compare<int32_t>(r25.s32, r20.s32, ctx.xer);
	// blt cr6,0x82301e6c
	if (ctx.cr6.lt) goto loc_82301E6C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82301fd8
	if (!ctx.cr6.gt) goto loc_82301FD8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r19,r20,2,0,29
	r19.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// lfs f31,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f31.f64 = double(temp.f32);
	// lfs f30,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f30.f64 = double(temp.f32);
loc_82301D24:
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822d5870
	ctx.lr = 0x82301D34;
	sub_822D5870(ctx, base);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x82301db8
	if (!ctx.cr6.gt) goto loc_82301DB8;
	// li r28,0
	r28.s64 = 0;
	// mr r24,r20
	r24.u64 = r20.u64;
loc_82301D44:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x82301dac
	if (!ctx.cr6.gt) goto loc_82301DAC;
	// li r29,0
	r29.s64 = 0;
loc_82301D54:
	// lwz r11,524(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 524);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lhz r5,110(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 110);
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82301D70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lwz r9,372(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 372);
	// lfsx f0,r28,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// std r10,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// lfd f13,136(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(r30.s32, r25.s32, ctx.xer);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lwzx r8,r28,r9
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + ctx.r9.u32);
	// lfsx f10,r8,r29
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r29.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// fmadds f9,f11,f10,f0
	ctx.f9.f64 = double(float(std::fma(ctx.f11.f64, ctx.f10.f64, ctx.f0.f64)));
	// stfsx f9,r28,r27
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r28.u32 + r27.u32, temp.u32);
	// blt cr6,0x82301d54
	if (ctx.cr6.lt) goto loc_82301D54;
loc_82301DAC:
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x82301d44
	if (!ctx.cr0.eq) goto loc_82301D44;
loc_82301DB8:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x82301e3c
	if (!ctx.cr6.gt) goto loc_82301E3C;
	// mr r29,r27
	r29.u64 = r27.u64;
loc_82301DC8:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x82301de8
	if (!ctx.cr6.lt) goto loc_82301DE8;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f13.u64);
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// b 0x82301df8
	goto loc_82301DF8;
loc_82301DE8:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f13.u64);
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_82301DF8:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82301e10
	if (ctx.cr6.lt) goto loc_82301E10;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82301e14
	if (!ctx.cr6.gt) goto loc_82301E14;
loc_82301E10:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82301E14:
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 520);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82301E2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r30,r20
	ctx.cr6.compare<int32_t>(r30.s32, r20.s32, ctx.xer);
	// blt cr6,0x82301dc8
	if (ctx.cr6.lt) goto loc_82301DC8;
loc_82301E3C:
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 88);
	// addic. r22,r22,-1
	ctx.xer.ca = r22.u32 > 0;
	r22.s64 = r22.s64 + -1;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// mullw r11,r10,r25
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(r25.s32);
	// mullw r10,r10,r20
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r20.s32);
	// add r26,r11,r26
	r26.u64 = ctx.r11.u64 + r26.u64;
	// add r23,r10,r23
	r23.u64 = ctx.r10.u64 + r23.u64;
	// bne 0x82301d24
	if (!ctx.cr0.eq) goto loc_82301D24;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x822d4f4c
	ctx.lr = 0x82301E68;
	// b 0x822d4eb4
	return;
loc_82301E6C:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// addi r22,r5,-1
	r22.s64 = ctx.r5.s64 + -1;
	// mullw r10,r22,r11
	ctx.r10.s64 = int64_t(r22.s32) * int64_t(ctx.r11.s32);
	// mullw r11,r10,r25
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(r25.s32);
	// mullw r10,r10,r20
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r20.s32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// add r26,r11,r26
	r26.u64 = ctx.r11.u64 + r26.u64;
	// add r23,r10,r23
	r23.u64 = ctx.r10.u64 + r23.u64;
	// blt cr6,0x82301fd8
	if (ctx.cr6.lt) goto loc_82301FD8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r19,r20,2,0,29
	r19.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f31,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f31.f64 = double(temp.f32);
	// lfs f30,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f30.f64 = double(temp.f32);
loc_82301EA4:
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822d5870
	ctx.lr = 0x82301EB4;
	sub_822D5870(ctx, base);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x82301f38
	if (!ctx.cr6.gt) goto loc_82301F38;
	// li r28,0
	r28.s64 = 0;
	// mr r24,r20
	r24.u64 = r20.u64;
loc_82301EC4:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x82301f2c
	if (!ctx.cr6.gt) goto loc_82301F2C;
	// li r29,0
	r29.s64 = 0;
loc_82301ED4:
	// lwz r11,524(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 524);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lhz r5,110(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 110);
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82301EF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lwz r9,372(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 372);
	// lfsx f0,r28,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// std r10,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// lfd f12,136(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(r30.s32, r25.s32, ctx.xer);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lwzx r8,r28,r9
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + ctx.r9.u32);
	// lfsx f13,r8,r29
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r29.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// fmadds f9,f10,f13,f0
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfsx f9,r28,r27
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r28.u32 + r27.u32, temp.u32);
	// blt cr6,0x82301ed4
	if (ctx.cr6.lt) goto loc_82301ED4;
loc_82301F2C:
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x82301ec4
	if (!ctx.cr0.eq) goto loc_82301EC4;
loc_82301F38:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x82301fbc
	if (!ctx.cr6.gt) goto loc_82301FBC;
	// mr r29,r27
	r29.u64 = r27.u64;
loc_82301F48:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x82301f68
	if (!ctx.cr6.lt) goto loc_82301F68;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f13.u64);
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// b 0x82301f78
	goto loc_82301F78;
loc_82301F68:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f13.u64);
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_82301F78:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82301f90
	if (ctx.cr6.lt) goto loc_82301F90;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82301f94
	if (!ctx.cr6.gt) goto loc_82301F94;
loc_82301F90:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82301F94:
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 520);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82301FAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r30,r20
	ctx.cr6.compare<int32_t>(r30.s32, r20.s32, ctx.xer);
	// blt cr6,0x82301f48
	if (ctx.cr6.lt) goto loc_82301F48;
loc_82301FBC:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// addic. r22,r22,-1
	ctx.xer.ca = r22.u32 > 0;
	r22.s64 = r22.s64 + -1;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// mullw r10,r11,r25
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r25.s32);
	// mullw r9,r11,r20
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(r20.s32);
	// subf r26,r10,r26
	r26.u64 = r26.u64 - ctx.r10.u64;
	// subf r23,r9,r23
	r23.u64 = r23.u64 - ctx.r9.u64;
	// bge 0x82301ea4
	if (!ctx.cr0.lt) goto loc_82301EA4;
loc_82301FD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x822d4f4c
	ctx.lr = 0x82301FE8;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_82320770) {
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
	// li r5,304
	ctx.r5.s64 = 304;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822d5870
	ctx.lr = 0x82320790;
	sub_822D5870(ctx, base);
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5870
	ctx.lr = 0x823207A0;
	sub_822D5870(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// stw r11,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r11.u32);
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
	// stw r11,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r11.u32);
	// stw r11,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r11.u32);
	// stw r11,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r11.u32);
	// stw r11,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r11.u32);
	// stw r11,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r11.u32);
	// stw r11,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r11.u32);
	// stw r11,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r11.u32);
	// stw r11,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r11.u32);
	// stw r11,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r11.u32);
	// stw r11,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r11.u32);
	// stw r11,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r11.u32);
	// stw r11,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r11.u32);
	// stw r11,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r11.u32);
	// stw r11,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r11.u32);
	// stw r11,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r11.u32);
	// stw r11,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r11.u32);
	// stw r11,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r11.u32);
	// stw r11,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r11.u32);
	// stw r11,236(r31)
	REX_STORE_U32(r31.u32 + 236, ctx.r11.u32);
	// stw r11,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r11.u32);
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
	// stw r11,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r11.u32);
	// stw r11,280(r31)
	REX_STORE_U32(r31.u32 + 280, ctx.r11.u32);
	// stw r11,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r11.u32);
	// stw r11,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r11.u32);
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
	// stw r11,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_823253A8) {
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
	ctx.lr = 0x823253B0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,40(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r28,36(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// lwz r27,32(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// lwz r29,28(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r23,0
	r23.s64 = 0;
	// lwz r26,48(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, ctx.xer);
	// lwz r24,44(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// bge cr6,0x823254f0
	if (!ctx.cr6.lt) goto loc_823254F0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82325420
	if (ctx.cr6.eq) goto loc_82325420;
	// subfic r11,r30,32
	ctx.xer.ca = r30.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - r30.u64;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// blt cr6,0x823253fc
	if (ctx.cr6.lt) goto loc_823253FC;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_823253FC:
	// subf r26,r11,r26
	r26.u64 = r26.u64 - ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// srw r9,r24,r26
	ctx.r9.u64 = r26.u8 & 0x20 ? 0 : (r24.u32 >> (r26.u8 & 0x3F));
	// slw r10,r10,r26
	ctx.r10.u64 = r26.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r26.u8 & 0x3F));
	// slw r8,r28,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r11.u8 & 0x3F));
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// or r28,r8,r9
	r28.u64 = ctx.r8.u64 | ctx.r9.u64;
	// and r24,r7,r24
	r24.u64 = ctx.r7.u64 & r24.u64;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
loc_82325420:
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r9,r11,-22768
	ctx.r9.s64 = ctx.r11.s64 + -22768;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82325468
	if (!ctx.cr6.eq) goto loc_82325468;
	// cmplwi cr6,r30,24
	ctx.cr6.compare<uint32_t>(r30.u32, 24, ctx.xer);
	// bgt cr6,0x823254a4
	if (ctx.cr6.gt) goto loc_823254A4;
loc_8232543C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x823254a4
	if (ctx.cr6.eq) goto loc_823254A4;
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// rlwinm r10,r28,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 8) & 0xFFFFFF00;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// or r28,r10,r11
	r28.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// cmplwi cr6,r30,24
	ctx.cr6.compare<uint32_t>(r30.u32, 24, ctx.xer);
	// ble cr6,0x8232543c
	if (!ctx.cr6.gt) goto loc_8232543C;
	// b 0x823254a4
	goto loc_823254A4;
loc_82325468:
	// cmplwi cr6,r30,24
	ctx.cr6.compare<uint32_t>(r30.u32, 24, ctx.xer);
	// bgt cr6,0x823254a4
	if (ctx.cr6.gt) goto loc_823254A4;
loc_82325470:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x823254a4
	if (ctx.cr6.eq) goto loc_823254A4;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lbz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U8(r29.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82325488;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// rlwimi r3,r28,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// cmplwi cr6,r30,24
	ctx.cr6.compare<uint32_t>(r30.u32, 24, ctx.xer);
	// ble cr6,0x82325470
	if (!ctx.cr6.gt) goto loc_82325470;
loc_823254A4:
	// stw r28,36(r31)
	REX_STORE_U32(r31.u32 + 36, r28.u32);
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(r30.u32, r25.u32, ctx.xer);
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r27,32(r31)
	REX_STORE_U32(r31.u32 + 32, r27.u32);
	// stw r29,28(r31)
	REX_STORE_U32(r31.u32 + 28, r29.u32);
	// stw r26,48(r31)
	REX_STORE_U32(r31.u32 + 48, r26.u32);
	// stw r24,44(r31)
	REX_STORE_U32(r31.u32 + 44, r24.u32);
	// bge cr6,0x823254f0
	if (!ctx.cr6.lt) goto loc_823254F0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823195f0
	ctx.lr = 0x823254D4;
	sub_823195F0(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82325510
	if (ctx.cr6.lt) goto loc_82325510;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bge cr6,0x823254f0
	if (!ctx.cr6.lt) goto loc_823254F0;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
loc_823254F0:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// subfic r10,r25,32
	ctx.xer.ca = r25.u32 <= 32;
	ctx.r10.u64 = static_cast<uint64_t>(32) - r25.u64;
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// subf r8,r25,r11
	ctx.r8.u64 = ctx.r11.u64 - r25.u64;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// srw r5,r9,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// slw r4,r5,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// stw r4,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r4.u32);
loc_82325510:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_8232B280) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// subf r8,r5,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r5.u64;
loc_8232B2A8:
	// lwzx r7,r8,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// srawi r7,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// srawi r6,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 1;
	// add r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 + ctx.r6.u64;
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// stwu r4,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r10.u32 = ea;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r7,r8,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// srawi r5,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// subf r4,r6,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r6.u64;
	// stwu r4,-4(r9)
	ea = -4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8232b2a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8232B2A8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232E7C0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232e808
	if (ctx.cr6.eq) goto loc_8232E808;
	// lwz r11,20476(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8232e808
	if (!ctx.cr6.eq) goto loc_8232E808;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82208828
	ctx.lr = 0x8232E7F0;
	sub_82208828(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// neg r9,r11
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r10,20476(r31)
	REX_STORE_U32(r31.u32 + 20476, ctx.r10.u32);
	// std r9,20456(r31)
	REX_STORE_U64(r31.u32 + 20456, ctx.r9.u64);
	// std r11,20464(r31)
	REX_STORE_U64(r31.u32 + 20464, ctx.r11.u64);
loc_8232E808:
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

DEFINE_REX_FUNC(sub_8232EE40) {
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
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e54
	ctx.lr = 0x8232EE48;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x822d4f38
	ctx.lr = 0x8232EE50;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r15,r10
	r15.u64 = ctx.r10.u64;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r17,r4
	r17.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// mr r16,r8
	r16.u64 = ctx.r8.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// li r30,2
	r30.s64 = 2;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8232eee8
	if (!ctx.cr6.lt) goto loc_8232EEE8;
loc_8232EE90:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232eee8
	if (ctx.cr6.eq) goto loc_8232EEE8;
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
	// bge 0x8232eed8
	if (!ctx.cr0.lt) goto loc_8232EED8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232EED8;
	sub_823380C8(ctx, base);
loc_8232EED8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8232ee90
	if (ctx.cr6.gt) goto loc_8232EE90;
loc_8232EEE8:
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
	// bge 0x8232ef20
	if (!ctx.cr0.lt) goto loc_8232EF20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232EF20;
	sub_823380C8(ctx, base);
loc_8232EF20:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,15428(r20)
	REX_STORE_U32(r20.u32 + 15428, r30.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// li r29,0
	r29.s64 = 0;
	// lfs f29,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f29.f64 = double(temp.f32);
	// lfs f28,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f28.f64 = double(temp.f32);
	// bne cr6,0x8232f260
	if (!ctx.cr6.eq) goto loc_8232F260;
	// stfs f28,0(r17)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r17.u32 + 0, temp.u32);
	// li r30,15
	r30.s64 = 15;
	// stfs f29,0(r22)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r22.u32 + 0, temp.u32);
	// stfs f29,0(r21)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r21.u32 + 0, temp.u32);
	// stfs f28,0(r16)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r16.u32 + 0, temp.u32);
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8232efc0
	if (!ctx.cr6.lt) goto loc_8232EFC0;
loc_8232EF68:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232efc0
	if (ctx.cr6.eq) goto loc_8232EFC0;
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
	// bge 0x8232efb0
	if (!ctx.cr0.lt) goto loc_8232EFB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232EFB0;
	sub_823380C8(ctx, base);
loc_8232EFB0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8232ef68
	if (ctx.cr6.gt) goto loc_8232EF68;
loc_8232EFC0:
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
	// bge 0x8232eff8
	if (!ctx.cr0.lt) goto loc_8232EFF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232EFF8;
	sub_823380C8(ctx, base);
loc_8232EFF8:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8232f070
	if (!ctx.cr6.lt) goto loc_8232F070;
loc_8232F018:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232f070
	if (ctx.cr6.eq) goto loc_8232F070;
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
	// bge 0x8232f060
	if (!ctx.cr0.lt) goto loc_8232F060;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232F060;
	sub_823380C8(ctx, base);
loc_8232F060:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8232f018
	if (ctx.cr6.gt) goto loc_8232F018;
loc_8232F070:
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
	// bge 0x8232f0a8
	if (!ctx.cr0.lt) goto loc_8232F0A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232F0A8;
	sub_823380C8(ctx, base);
loc_8232F0A8:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// add r27,r30,r28
	r27.u64 = r30.u64 + r28.u64;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8232f120
	if (!ctx.cr6.lt) goto loc_8232F120;
loc_8232F0C8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232f120
	if (ctx.cr6.eq) goto loc_8232F120;
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
	// bge 0x8232f110
	if (!ctx.cr0.lt) goto loc_8232F110;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232F110;
	sub_823380C8(ctx, base);
loc_8232F110:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8232f0c8
	if (ctx.cr6.gt) goto loc_8232F0C8;
loc_8232F120:
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
	// bge 0x8232f158
	if (!ctx.cr0.lt) goto loc_8232F158;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232F158;
	sub_823380C8(ctx, base);
loc_8232F158:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8232f1d0
	if (!ctx.cr6.lt) goto loc_8232F1D0;
loc_8232F178:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232f1d0
	if (ctx.cr6.eq) goto loc_8232F1D0;
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
	// bge 0x8232f1c0
	if (!ctx.cr0.lt) goto loc_8232F1C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232F1C0;
	sub_823380C8(ctx, base);
loc_8232F1C0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8232f178
	if (ctx.cr6.gt) goto loc_8232F178;
loc_8232F1D0:
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
	// bge 0x8232f208
	if (!ctx.cr0.lt) goto loc_8232F208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232F208;
	sub_823380C8(ctx, base);
loc_8232F208:
	// add r11,r30,r28
	ctx.r11.u64 = r30.u64 + r28.u64;
	// clrldi r10,r27,32
	ctx.r10.u64 = r27.u64 & 0xFFFFFFFF;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// addi r11,r11,21052
	ctx.r11.s64 = ctx.r11.s64 + 21052;
	// addi r10,r10,-30600
	ctx.r10.s64 = ctx.r10.s64 + -30600;
	// lfs f31,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// lfs f30,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	f30.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmsubs f8,f10,f31,f30
	ctx.f8.f64 = double(float(std::fma(ctx.f10.f64, f31.f64, -f30.f64)));
	// stfs f8,0(r19)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r19.u32 + 0, temp.u32);
	// fmsubs f7,f9,f31,f30
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, f31.f64, -f30.f64)));
	// stfs f7,0(r18)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r18.u32 + 0, temp.u32);
	// b 0x82330610
	goto loc_82330610;
loc_8232F260:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x8232f700
	if (!ctx.cr6.eq) goto loc_8232F700;
	// stfs f29,0(r22)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r22.u32 + 0, temp.u32);
	// li r30,15
	r30.s64 = 15;
	// stfs f29,0(r21)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r21.u32 + 0, temp.u32);
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8232f2e0
	if (!ctx.cr6.lt) goto loc_8232F2E0;
loc_8232F288:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232f2e0
	if (ctx.cr6.eq) goto loc_8232F2E0;
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
	// bge 0x8232f2d0
	if (!ctx.cr0.lt) goto loc_8232F2D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232F2D0;
	sub_823380C8(ctx, base);
loc_8232F2D0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8232f288
	if (ctx.cr6.gt) goto loc_8232F288;
loc_8232F2E0:
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
	// bge 0x8232f318
	if (!ctx.cr0.lt) goto loc_8232F318;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232F318;
	sub_823380C8(ctx, base);
loc_8232F318:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8232f390
	if (!ctx.cr6.lt) goto loc_8232F390;
loc_8232F338:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232f390
	if (ctx.cr6.eq) goto loc_8232F390;
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
	// bge 0x8232f380
	if (!ctx.cr0.lt) goto loc_8232F380;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232F380;
	sub_823380C8(ctx, base);
loc_8232F380:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8232f338
	if (ctx.cr6.gt) goto loc_8232F338;
loc_8232F390:
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
	// bge 0x8232f3c8
	if (!ctx.cr0.lt) goto loc_8232F3C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232F3C8;
	sub_823380C8(ctx, base);
loc_8232F3C8:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// add r26,r30,r28
	r26.u64 = r30.u64 + r28.u64;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8232f440
	if (!ctx.cr6.lt) goto loc_8232F440;
loc_8232F3E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232f440
	if (ctx.cr6.eq) goto loc_8232F440;
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
	// bge 0x8232f430
	if (!ctx.cr0.lt) goto loc_8232F430;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232F430;
	sub_823380C8(ctx, base);
loc_8232F430:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8232f3e8
	if (ctx.cr6.gt) goto loc_8232F3E8;
loc_8232F440:
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
	// bge 0x8232f478
	if (!ctx.cr0.lt) goto loc_8232F478;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232F478;
	sub_823380C8(ctx, base);
loc_8232F478:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8232f4f0
	if (!ctx.cr6.lt) goto loc_8232F4F0;
loc_8232F498:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232f4f0
	if (ctx.cr6.eq) goto loc_8232F4F0;
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
	// bge 0x8232f4e0
	if (!ctx.cr0.lt) goto loc_8232F4E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232F4E0;
	sub_823380C8(ctx, base);
loc_8232F4E0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8232f498
	if (ctx.cr6.gt) goto loc_8232F498;
loc_8232F4F0:
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
	// bge 0x8232f528
	if (!ctx.cr0.lt) goto loc_8232F528;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232F528;
	sub_823380C8(ctx, base);
loc_8232F528:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// add r27,r30,r28
	r27.u64 = r30.u64 + r28.u64;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8232f5a0
	if (!ctx.cr6.lt) goto loc_8232F5A0;
loc_8232F548:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232f5a0
	if (ctx.cr6.eq) goto loc_8232F5A0;
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
	// bge 0x8232f590
	if (!ctx.cr0.lt) goto loc_8232F590;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232F590;
	sub_823380C8(ctx, base);
loc_8232F590:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8232f548
	if (ctx.cr6.gt) goto loc_8232F548;
loc_8232F5A0:
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
	// bge 0x8232f5d8
	if (!ctx.cr0.lt) goto loc_8232F5D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232F5D8;
	sub_823380C8(ctx, base);
loc_8232F5D8:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8232f650
	if (!ctx.cr6.lt) goto loc_8232F650;
loc_8232F5F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232f650
	if (ctx.cr6.eq) goto loc_8232F650;
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
	// bge 0x8232f640
	if (!ctx.cr0.lt) goto loc_8232F640;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232F640;
	sub_823380C8(ctx, base);
loc_8232F640:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8232f5f8
	if (ctx.cr6.gt) goto loc_8232F5F8;
loc_8232F650:
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
	// bge 0x8232f688
	if (!ctx.cr0.lt) goto loc_8232F688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232F688;
	sub_823380C8(ctx, base);
loc_8232F688:
	// clrldi r11,r26,32
	ctx.r11.u64 = r26.u64 & 0xFFFFFFFF;
	// clrldi r9,r27,32
	ctx.r9.u64 = r27.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// add r10,r30,r28
	ctx.r10.u64 = r30.u64 + r28.u64;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,21052
	ctx.r11.s64 = ctx.r11.s64 + 21052;
	// addi r10,r10,-30600
	ctx.r10.s64 = ctx.r10.s64 + -30600;
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// lfs f30,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	f30.f64 = double(temp.f32);
	// lfd f12,88(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f7,f11
	ctx.f7.f64 = double(float(ctx.f11.f64));
	// frsp f8,f13
	ctx.f8.f64 = double(float(ctx.f13.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// fmsubs f4,f7,f31,f30
	ctx.f4.f64 = double(float(std::fma(ctx.f7.f64, f31.f64, -f30.f64)));
	// stfs f4,0(r16)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r16.u32 + 0, temp.u32);
	// stfs f4,0(r17)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r17.u32 + 0, temp.u32);
	// fmsubs f5,f8,f31,f30
	ctx.f5.f64 = double(float(std::fma(ctx.f8.f64, f31.f64, -f30.f64)));
	// stfs f5,0(r19)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(r19.u32 + 0, temp.u32);
	// fmsubs f3,f6,f31,f30
	ctx.f3.f64 = double(float(std::fma(ctx.f6.f64, f31.f64, -f30.f64)));
	// stfs f3,0(r18)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r18.u32 + 0, temp.u32);
	// b 0x82330610
	goto loc_82330610;
loc_8232F700:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// li r30,15
	r30.s64 = 15;
	// bne cr6,0x8232fd18
	if (!ctx.cr6.eq) goto loc_8232FD18;
	// stfs f29,0(r22)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r22.u32 + 0, temp.u32);
	// stfs f29,0(r21)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r21.u32 + 0, temp.u32);
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8232f780
	if (!ctx.cr6.lt) goto loc_8232F780;
loc_8232F728:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232f780
	if (ctx.cr6.eq) goto loc_8232F780;
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
	// bge 0x8232f770
	if (!ctx.cr0.lt) goto loc_8232F770;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232F770;
	sub_823380C8(ctx, base);
loc_8232F770:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8232f728
	if (ctx.cr6.gt) goto loc_8232F728;
loc_8232F780:
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
	// bge 0x8232f7b8
	if (!ctx.cr0.lt) goto loc_8232F7B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232F7B8;
	sub_823380C8(ctx, base);
loc_8232F7B8:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8232f830
	if (!ctx.cr6.lt) goto loc_8232F830;
loc_8232F7D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232f830
	if (ctx.cr6.eq) goto loc_8232F830;
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
	// bge 0x8232f820
	if (!ctx.cr0.lt) goto loc_8232F820;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232F820;
	sub_823380C8(ctx, base);
loc_8232F820:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8232f7d8
	if (ctx.cr6.gt) goto loc_8232F7D8;
loc_8232F830:
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
	// bge 0x8232f868
	if (!ctx.cr0.lt) goto loc_8232F868;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232F868;
	sub_823380C8(ctx, base);
loc_8232F868:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// add r25,r30,r28
	r25.u64 = r30.u64 + r28.u64;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8232f8e0
	if (!ctx.cr6.lt) goto loc_8232F8E0;
loc_8232F888:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232f8e0
	if (ctx.cr6.eq) goto loc_8232F8E0;
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
	// bge 0x8232f8d0
	if (!ctx.cr0.lt) goto loc_8232F8D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232F8D0;
	sub_823380C8(ctx, base);
loc_8232F8D0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8232f888
	if (ctx.cr6.gt) goto loc_8232F888;
loc_8232F8E0:
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
	// bge 0x8232f918
	if (!ctx.cr0.lt) goto loc_8232F918;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232F918;
	sub_823380C8(ctx, base);
loc_8232F918:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8232f990
	if (!ctx.cr6.lt) goto loc_8232F990;
loc_8232F938:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232f990
	if (ctx.cr6.eq) goto loc_8232F990;
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
	// bge 0x8232f980
	if (!ctx.cr0.lt) goto loc_8232F980;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232F980;
	sub_823380C8(ctx, base);
loc_8232F980:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8232f938
	if (ctx.cr6.gt) goto loc_8232F938;
loc_8232F990:
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
	// bge 0x8232f9c8
	if (!ctx.cr0.lt) goto loc_8232F9C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232F9C8;
	sub_823380C8(ctx, base);
loc_8232F9C8:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// add r26,r30,r28
	r26.u64 = r30.u64 + r28.u64;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8232fa40
	if (!ctx.cr6.lt) goto loc_8232FA40;
loc_8232F9E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232fa40
	if (ctx.cr6.eq) goto loc_8232FA40;
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
	// bge 0x8232fa30
	if (!ctx.cr0.lt) goto loc_8232FA30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232FA30;
	sub_823380C8(ctx, base);
loc_8232FA30:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8232f9e8
	if (ctx.cr6.gt) goto loc_8232F9E8;
loc_8232FA40:
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
	// bge 0x8232fa78
	if (!ctx.cr0.lt) goto loc_8232FA78;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232FA78;
	sub_823380C8(ctx, base);
loc_8232FA78:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8232faf0
	if (!ctx.cr6.lt) goto loc_8232FAF0;
loc_8232FA98:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232faf0
	if (ctx.cr6.eq) goto loc_8232FAF0;
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
	// bge 0x8232fae0
	if (!ctx.cr0.lt) goto loc_8232FAE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232FAE0;
	sub_823380C8(ctx, base);
loc_8232FAE0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8232fa98
	if (ctx.cr6.gt) goto loc_8232FA98;
loc_8232FAF0:
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
	// bge 0x8232fb28
	if (!ctx.cr0.lt) goto loc_8232FB28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232FB28;
	sub_823380C8(ctx, base);
loc_8232FB28:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// add r27,r30,r28
	r27.u64 = r30.u64 + r28.u64;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8232fba0
	if (!ctx.cr6.lt) goto loc_8232FBA0;
loc_8232FB48:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232fba0
	if (ctx.cr6.eq) goto loc_8232FBA0;
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
	// bge 0x8232fb90
	if (!ctx.cr0.lt) goto loc_8232FB90;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232FB90;
	sub_823380C8(ctx, base);
loc_8232FB90:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8232fb48
	if (ctx.cr6.gt) goto loc_8232FB48;
loc_8232FBA0:
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
	// bge 0x8232fbd8
	if (!ctx.cr0.lt) goto loc_8232FBD8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232FBD8;
	sub_823380C8(ctx, base);
loc_8232FBD8:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8232fc50
	if (!ctx.cr6.lt) goto loc_8232FC50;
loc_8232FBF8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232fc50
	if (ctx.cr6.eq) goto loc_8232FC50;
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
	// bge 0x8232fc40
	if (!ctx.cr0.lt) goto loc_8232FC40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232FC40;
	sub_823380C8(ctx, base);
loc_8232FC40:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8232fbf8
	if (ctx.cr6.gt) goto loc_8232FBF8;
loc_8232FC50:
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
	// bge 0x8232fc88
	if (!ctx.cr0.lt) goto loc_8232FC88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232FC88;
	sub_823380C8(ctx, base);
loc_8232FC88:
	// clrldi r10,r26,32
	ctx.r10.u64 = r26.u64 & 0xFFFFFFFF;
	// clrldi r9,r27,32
	ctx.r9.u64 = r27.u64 & 0xFFFFFFFF;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f11,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f9,104(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// add r8,r30,r28
	ctx.r8.u64 = r30.u64 + r28.u64;
	// clrldi r11,r25,32
	ctx.r11.u64 = r25.u64 & 0xFFFFFFFF;
	// clrldi r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// frsp f5,f10
	ctx.f5.f64 = double(float(ctx.f10.f64));
	// addi r11,r11,21052
	ctx.r11.s64 = ctx.r11.s64 + 21052;
	// addi r10,r10,-30600
	ctx.r10.s64 = ctx.r10.s64 + -30600;
	// lfs f31,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// lfs f30,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	f30.f64 = double(temp.f32);
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f6,f13
	ctx.f6.f64 = double(float(ctx.f13.f64));
	// fmsubs f1,f5,f31,f30
	ctx.f1.f64 = double(float(std::fma(ctx.f5.f64, f31.f64, -f30.f64)));
	// stfs f1,0(r17)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r17.u32 + 0, temp.u32);
	// fmsubs f0,f4,f31,f30
	ctx.f0.f64 = double(float(std::fma(ctx.f4.f64, f31.f64, -f30.f64)));
	// stfs f0,0(r19)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r19.u32 + 0, temp.u32);
	// fmsubs f13,f3,f31,f30
	ctx.f13.f64 = double(float(std::fma(ctx.f3.f64, f31.f64, -f30.f64)));
	// stfs f13,0(r16)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r16.u32 + 0, temp.u32);
	// fmsubs f2,f6,f31,f30
	ctx.f2.f64 = double(float(std::fma(ctx.f6.f64, f31.f64, -f30.f64)));
	// stfs f2,0(r18)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r18.u32 + 0, temp.u32);
	// b 0x82330610
	goto loc_82330610;
loc_8232FD18:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8232fd84
	if (!ctx.cr6.lt) goto loc_8232FD84;
loc_8232FD2C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232fd84
	if (ctx.cr6.eq) goto loc_8232FD84;
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
	// bge 0x8232fd74
	if (!ctx.cr0.lt) goto loc_8232FD74;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232FD74;
	sub_823380C8(ctx, base);
loc_8232FD74:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8232fd2c
	if (ctx.cr6.gt) goto loc_8232FD2C;
loc_8232FD84:
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
	// bge 0x8232fdbc
	if (!ctx.cr0.lt) goto loc_8232FDBC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232FDBC;
	sub_823380C8(ctx, base);
loc_8232FDBC:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8232fe34
	if (!ctx.cr6.lt) goto loc_8232FE34;
loc_8232FDDC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232fe34
	if (ctx.cr6.eq) goto loc_8232FE34;
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
	// bge 0x8232fe24
	if (!ctx.cr0.lt) goto loc_8232FE24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232FE24;
	sub_823380C8(ctx, base);
loc_8232FE24:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8232fddc
	if (ctx.cr6.gt) goto loc_8232FDDC;
loc_8232FE34:
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
	// bge 0x8232fe6c
	if (!ctx.cr0.lt) goto loc_8232FE6C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232FE6C;
	sub_823380C8(ctx, base);
loc_8232FE6C:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// add r23,r30,r28
	r23.u64 = r30.u64 + r28.u64;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8232fee4
	if (!ctx.cr6.lt) goto loc_8232FEE4;
loc_8232FE8C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232fee4
	if (ctx.cr6.eq) goto loc_8232FEE4;
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
	// bge 0x8232fed4
	if (!ctx.cr0.lt) goto loc_8232FED4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232FED4;
	sub_823380C8(ctx, base);
loc_8232FED4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8232fe8c
	if (ctx.cr6.gt) goto loc_8232FE8C;
loc_8232FEE4:
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
	// bge 0x8232ff1c
	if (!ctx.cr0.lt) goto loc_8232FF1C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232FF1C;
	sub_823380C8(ctx, base);
loc_8232FF1C:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8232ff94
	if (!ctx.cr6.lt) goto loc_8232FF94;
loc_8232FF3C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232ff94
	if (ctx.cr6.eq) goto loc_8232FF94;
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
	// bge 0x8232ff84
	if (!ctx.cr0.lt) goto loc_8232FF84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232FF84;
	sub_823380C8(ctx, base);
loc_8232FF84:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8232ff3c
	if (ctx.cr6.gt) goto loc_8232FF3C;
loc_8232FF94:
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
	// bge 0x8232ffcc
	if (!ctx.cr0.lt) goto loc_8232FFCC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8232FFCC;
	sub_823380C8(ctx, base);
loc_8232FFCC:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// add r24,r30,r28
	r24.u64 = r30.u64 + r28.u64;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x82330044
	if (!ctx.cr6.lt) goto loc_82330044;
loc_8232FFEC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82330044
	if (ctx.cr6.eq) goto loc_82330044;
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
	// bge 0x82330034
	if (!ctx.cr0.lt) goto loc_82330034;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82330034;
	sub_823380C8(ctx, base);
loc_82330034:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8232ffec
	if (ctx.cr6.gt) goto loc_8232FFEC;
loc_82330044:
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
	// bge 0x8233007c
	if (!ctx.cr0.lt) goto loc_8233007C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8233007C;
	sub_823380C8(ctx, base);
loc_8233007C:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x823300f4
	if (!ctx.cr6.lt) goto loc_823300F4;
loc_8233009C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823300f4
	if (ctx.cr6.eq) goto loc_823300F4;
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
	// bge 0x823300e4
	if (!ctx.cr0.lt) goto loc_823300E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823300E4;
	sub_823380C8(ctx, base);
loc_823300E4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8233009c
	if (ctx.cr6.gt) goto loc_8233009C;
loc_823300F4:
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
	// bge 0x8233012c
	if (!ctx.cr0.lt) goto loc_8233012C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8233012C;
	sub_823380C8(ctx, base);
loc_8233012C:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// add r25,r30,r28
	r25.u64 = r30.u64 + r28.u64;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x823301a4
	if (!ctx.cr6.lt) goto loc_823301A4;
loc_8233014C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823301a4
	if (ctx.cr6.eq) goto loc_823301A4;
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
	// bge 0x82330194
	if (!ctx.cr0.lt) goto loc_82330194;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82330194;
	sub_823380C8(ctx, base);
loc_82330194:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8233014c
	if (ctx.cr6.gt) goto loc_8233014C;
loc_823301A4:
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
	// bge 0x823301dc
	if (!ctx.cr0.lt) goto loc_823301DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823301DC;
	sub_823380C8(ctx, base);
loc_823301DC:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x82330254
	if (!ctx.cr6.lt) goto loc_82330254;
loc_823301FC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82330254
	if (ctx.cr6.eq) goto loc_82330254;
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
	// bge 0x82330244
	if (!ctx.cr0.lt) goto loc_82330244;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82330244;
	sub_823380C8(ctx, base);
loc_82330244:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823301fc
	if (ctx.cr6.gt) goto loc_823301FC;
loc_82330254:
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
	// bge 0x8233028c
	if (!ctx.cr0.lt) goto loc_8233028C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8233028C;
	sub_823380C8(ctx, base);
loc_8233028C:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// add r26,r30,r28
	r26.u64 = r30.u64 + r28.u64;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x82330304
	if (!ctx.cr6.lt) goto loc_82330304;
loc_823302AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82330304
	if (ctx.cr6.eq) goto loc_82330304;
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
	// bge 0x823302f4
	if (!ctx.cr0.lt) goto loc_823302F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823302F4;
	sub_823380C8(ctx, base);
loc_823302F4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823302ac
	if (ctx.cr6.gt) goto loc_823302AC;
loc_82330304:
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
	// bge 0x8233033c
	if (!ctx.cr0.lt) goto loc_8233033C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8233033C;
	sub_823380C8(ctx, base);
loc_8233033C:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x823303b4
	if (!ctx.cr6.lt) goto loc_823303B4;
loc_8233035C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823303b4
	if (ctx.cr6.eq) goto loc_823303B4;
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
	// bge 0x823303a4
	if (!ctx.cr0.lt) goto loc_823303A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823303A4;
	sub_823380C8(ctx, base);
loc_823303A4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8233035c
	if (ctx.cr6.gt) goto loc_8233035C;
loc_823303B4:
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
	// bge 0x823303ec
	if (!ctx.cr0.lt) goto loc_823303EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823303EC;
	sub_823380C8(ctx, base);
loc_823303EC:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// add r27,r30,r28
	r27.u64 = r30.u64 + r28.u64;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x82330464
	if (!ctx.cr6.lt) goto loc_82330464;
loc_8233040C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82330464
	if (ctx.cr6.eq) goto loc_82330464;
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
	// bge 0x82330454
	if (!ctx.cr0.lt) goto loc_82330454;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82330454;
	sub_823380C8(ctx, base);
loc_82330454:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8233040c
	if (ctx.cr6.gt) goto loc_8233040C;
loc_82330464:
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
	// bge 0x8233049c
	if (!ctx.cr0.lt) goto loc_8233049C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8233049C;
	sub_823380C8(ctx, base);
loc_8233049C:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x82330514
	if (!ctx.cr6.lt) goto loc_82330514;
loc_823304BC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82330514
	if (ctx.cr6.eq) goto loc_82330514;
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
	// bge 0x82330504
	if (!ctx.cr0.lt) goto loc_82330504;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82330504;
	sub_823380C8(ctx, base);
loc_82330504:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823304bc
	if (ctx.cr6.gt) goto loc_823304BC;
loc_82330514:
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
	// bge 0x8233054c
	if (!ctx.cr0.lt) goto loc_8233054C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8233054C;
	sub_823380C8(ctx, base);
loc_8233054C:
	// clrldi r10,r27,32
	ctx.r10.u64 = r27.u64 & 0xFFFFFFFF;
	// add r11,r30,r28
	ctx.r11.u64 = r30.u64 + r28.u64;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// clrldi r7,r24,32
	ctx.r7.u64 = r24.u64 & 0xFFFFFFFF;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r25,32
	ctx.r6.u64 = r25.u64 & 0xFFFFFFFF;
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f8,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// clrldi r5,r26,32
	ctx.r5.u64 = r26.u64 & 0xFFFFFFFF;
	// std r6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// clrldi r8,r23,32
	ctx.r8.u64 = r23.u64 & 0xFFFFFFFF;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// std r8,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f7,f10
	ctx.f7.f64 = double(ctx.f10.s64);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// fcfid f5,f8
	ctx.f5.f64 = double(ctx.f8.s64);
	// addi r11,r11,21052
	ctx.r11.s64 = ctx.r11.s64 + 21052;
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// addi r10,r10,-30600
	ctx.r10.s64 = ctx.r10.s64 + -30600;
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// frsp f0,f7
	ctx.f0.f64 = double(float(ctx.f7.f64));
	// lfs f31,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// lfs f30,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	f30.f64 = double(temp.f32);
	// frsp f1,f9
	ctx.f1.f64 = double(float(ctx.f9.f64));
	// fmsubs f8,f0,f31,f30
	ctx.f8.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, -f30.f64)));
	// stfs f8,0(r17)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r17.u32 + 0, temp.u32);
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r5,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// fcfid f3,f13
	ctx.f3.f64 = double(ctx.f13.s64);
	// frsp f13,f5
	ctx.f13.f64 = double(float(ctx.f5.f64));
	// fmsubs f9,f1,f31,f30
	ctx.f9.f64 = double(float(std::fma(ctx.f1.f64, f31.f64, -f30.f64)));
	// fmsubs f7,f13,f31,f30
	ctx.f7.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, -f30.f64)));
	// stfs f7,0(r22)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r22.u32 + 0, temp.u32);
	// lfd f12,104(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f12,f4
	ctx.f12.f64 = double(float(ctx.f4.f64));
	// frsp f2,f11
	ctx.f2.f64 = double(float(ctx.f11.f64));
	// frsp f11,f3
	ctx.f11.f64 = double(float(ctx.f3.f64));
	// fmsubs f6,f12,f31,f30
	ctx.f6.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, -f30.f64)));
	// stfs f6,0(r19)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r19.u32 + 0, temp.u32);
	// fmsubs f10,f2,f31,f30
	ctx.f10.f64 = double(float(std::fma(ctx.f2.f64, f31.f64, -f30.f64)));
	// stfs f10,0(r21)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r21.u32 + 0, temp.u32);
	// stfs f9,0(r16)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r16.u32 + 0, temp.u32);
	// fmsubs f5,f11,f31,f30
	ctx.f5.f64 = double(float(std::fma(ctx.f11.f64, f31.f64, -f30.f64)));
	// stfs f5,0(r18)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(r18.u32 + 0, temp.u32);
loc_82330610:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
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
	// bge cr6,0x82330684
	if (!ctx.cr6.lt) goto loc_82330684;
loc_8233062C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82330684
	if (ctx.cr6.eq) goto loc_82330684;
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
	// bge 0x82330674
	if (!ctx.cr0.lt) goto loc_82330674;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82330674;
	sub_823380C8(ctx, base);
loc_82330674:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8233062c
	if (ctx.cr6.gt) goto loc_8233062C;
loc_82330684:
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
	// bge 0x823306bc
	if (!ctx.cr0.lt) goto loc_823306BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823306BC;
	sub_823380C8(ctx, base);
loc_823306BC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82330844
	if (ctx.cr6.eq) goto loc_82330844;
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x82330738
	if (!ctx.cr6.lt) goto loc_82330738;
loc_823306E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82330738
	if (ctx.cr6.eq) goto loc_82330738;
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
	// bge 0x82330728
	if (!ctx.cr0.lt) goto loc_82330728;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82330728;
	sub_823380C8(ctx, base);
loc_82330728:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823306e0
	if (ctx.cr6.gt) goto loc_823306E0;
loc_82330738:
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
	// bge 0x82330770
	if (!ctx.cr0.lt) goto loc_82330770;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82330770;
	sub_823380C8(ctx, base);
loc_82330770:
	// lwz r31,84(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 84);
	// rlwinm r28,r30,15,0,16
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 15) & 0xFFFF8000;
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x823307e8
	if (!ctx.cr6.lt) goto loc_823307E8;
loc_82330790:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823307e8
	if (ctx.cr6.eq) goto loc_823307E8;
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
	// bge 0x823307d8
	if (!ctx.cr0.lt) goto loc_823307D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823307D8;
	sub_823380C8(ctx, base);
loc_823307D8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82330790
	if (ctx.cr6.gt) goto loc_82330790;
loc_823307E8:
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
	// bge 0x82330820
	if (!ctx.cr0.lt) goto loc_82330820;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82330820;
	sub_823380C8(ctx, base);
loc_82330820:
	// add r11,r30,r28
	ctx.r11.u64 = r30.u64 + r28.u64;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmsubs f11,f12,f31,f30
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, -f30.f64)));
	// stfs f11,0(r15)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r15.u32 + 0, temp.u32);
	// b 0x82330848
	goto loc_82330848;
loc_82330844:
	// stfs f28,0(r15)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r15.u32 + 0, temp.u32);
loc_82330848:
	// lwz r11,84(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82330874
	if (!ctx.cr6.eq) goto loc_82330874;
	// lfs f0,0(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r17.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// blt cr6,0x82330874
	if (ctx.cr6.lt) goto loc_82330874;
	// lfs f0,0(r16)
	temp.u32 = REX_LOAD_U32(r16.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x82330878
	if (!ctx.cr6.lt) goto loc_82330878;
loc_82330874:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82330878:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x822d4f84
	ctx.lr = 0x82330884;
	// b 0x822d4ea4
	return;
}

DEFINE_REX_FUNC(sub_823B0AA0) {
	REX_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// vspltisw v1,0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_set1_epi32(int(0x0)));
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// b 0x823b07b0
	sub_823B07B0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823B0B48) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x823b0b54
	if (!ctx.cr6.lt) goto loc_823B0B54;
	// neg r4,r4
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r4.u64);
loc_823B0B54:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x823b0b60
	if (!ctx.cr6.lt) goto loc_823B0B60;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
loc_823B0B60:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge cr6,0x823b0b6c
	if (!ctx.cr6.lt) goto loc_823B0B6C;
	// neg r6,r6
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r6.u64);
loc_823B0B6C:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x823b0b78
	if (!ctx.cr6.lt) goto loc_823B0B78;
	// neg r7,r7
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r7.u64);
loc_823B0B78:
	// stw r4,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r4.u32);
	// stw r5,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r5.u32);
	// stw r6,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r6.u32);
	// stw r7,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r7.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823B0CD8) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x823b0ce4
	if (!ctx.cr6.lt) goto loc_823B0CE4;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
loc_823B0CE4:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x823b0cf0
	if (!ctx.cr6.lt) goto loc_823B0CF0;
	// neg r7,r7
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r7.u64);
loc_823B0CF0:
	// stw r4,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// stw r5,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// stw r6,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// stw r7,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r7.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823B1488) {
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
	ctx.lr = 0x823B1490;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// li r27,0
	r27.s64 = 0;
	// lwz r7,36(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r6,32(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,56(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r25,8(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// srawi r11,r25,1
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x1) != 0);
	ctx.r11.s64 = r25.s32 >> 1;
	// addi r28,r25,-1
	r28.s64 = r25.s64 + -1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r31,r25,8,0,23
	r31.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 8) & 0xFFFFFF00;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mullw r30,r28,r7
	r30.s64 = int64_t(r28.s32) * int64_t(ctx.r7.s32);
	// mullw r26,r10,r7
	r26.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// rotlwi r11,r31,1
	ctx.r11.u64 = __builtin_rotateleft32(r31.u32, 1);
	// rotlwi r10,r30,1
	ctx.r10.u64 = __builtin_rotateleft32(r30.u32, 1);
	// rotlwi r9,r26,1
	ctx.r9.u64 = __builtin_rotateleft32(r26.u32, 1);
	// srawi r29,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	r29.s64 = ctx.r7.s32 >> 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addze r22,r29
	temp.s64 = r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r29.u32;
	r22.s64 = temp.s64;
	// andc r24,r7,r11
	r24.u64 = ctx.r7.u64 & ~ctx.r11.u64;
	// divw r29,r30,r25
	r29.u64 = uint32_t((r25.s32 && !(r30.s32 == INT32_MIN && r25.s32 == -1)) ? r30.s32 / r25.s32 : 0);
	// andc r10,r25,r10
	ctx.r10.u64 = r25.u64 & ~ctx.r10.u64;
	// andc r9,r25,r9
	ctx.r9.u64 = r25.u64 & ~ctx.r9.u64;
	// srawi r30,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	r30.s64 = ctx.r6.s32 >> 1;
	// mullw r11,r6,r4
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// twlgei r24,-1
	if (r24.s32 == -1 || r24.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twllei r25,0
	if (r25.s32 == 0 || r25.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r21,r31,r7
	r21.u64 = uint32_t((ctx.r7.s32 && !(r31.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? r31.s32 / ctx.r7.s32 : 0);
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// divw r20,r26,r25
	r20.u64 = uint32_t((r25.s32 && !(r26.s32 == INT32_MIN && r25.s32 == -1)) ? r26.s32 / r25.s32 : 0);
	// twllei r25,0
	if (r25.s32 == 0 || r25.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// addze r24,r30
	temp.s64 = r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r30.u32;
	r24.s64 = temp.s64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x823b1530
	if (!ctx.cr6.gt) goto loc_823B1530;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
loc_823B1530:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// blt cr6,0x823b1a0c
	if (ctx.cr6.lt) goto loc_823B1A0C;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b1554
	if (ctx.cr6.eq) goto loc_823B1554;
	// addi r11,r21,-256
	ctx.r11.s64 = r21.s64 + -256;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// b 0x823b1558
	goto loc_823B1558;
loc_823B1554:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B1558:
	// mullw r26,r21,r4
	r26.s64 = int64_t(r21.s32) * int64_t(ctx.r4.s32);
	// add. r30,r26,r11
	r30.u64 = r26.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x823b15d4
	if (!ctx.cr0.lt) goto loc_823B15D4;
	// subf r10,r30,r21
	ctx.r10.u64 = r21.u64 - r30.u64;
	// twllei r21,0
	if (r21.s32 == 0 || r21.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r27,r10,r21
	r27.u64 = uint32_t((r21.s32 && !(ctx.r10.s32 == INT32_MIN && r21.s32 == -1)) ? ctx.r10.s32 / r21.s32 : 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// add r11,r27,r4
	ctx.r11.u64 = r27.u64 + ctx.r4.u64;
	// andc r7,r21,r9
	ctx.r7.u64 = r21.u64 & ~ctx.r9.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bge cr6,0x823b15cc
	if (!ctx.cr6.lt) goto loc_823B15CC;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823B1598:
	// lwz r9,64(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823b15c8
	if (!ctx.cr6.gt) goto loc_823B15C8;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_823B15AC:
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r10,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823b15ac
	if (ctx.cr6.lt) goto loc_823B15AC;
loc_823B15C8:
	// bdnz 0x823b1598
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B1598;
loc_823B15CC:
	// mullw r11,r27,r21
	ctx.r11.s64 = int64_t(r27.s32) * int64_t(r21.s32);
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
loc_823B15D4:
	// add r11,r27,r4
	ctx.r11.u64 = r27.u64 + ctx.r4.u64;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bge cr6,0x823b164c
	if (!ctx.cr6.lt) goto loc_823B164C;
	// subf r11,r11,r29
	ctx.r11.u64 = r29.u64 - ctx.r11.u64;
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823B15EC:
	// clrlwi r7,r30,24
	ctx.r7.u64 = r30.u32 & 0xFF;
	// lwz r6,64(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// li r9,0
	ctx.r9.s64 = 0;
	// subfic r31,r7,256
	ctx.xer.ca = ctx.r7.u32 <= 256;
	r31.u64 = static_cast<uint64_t>(256) - ctx.r7.u64;
	// srawi r11,r30,8
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xFF) != 0);
	ctx.r11.s64 = r30.s32 >> 8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// ble cr6,0x823b1644
	if (!ctx.cr6.gt) goto loc_823B1644;
loc_823B1610:
	// lbzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// mullw r6,r6,r31
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(r31.s32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// srawi r6,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 8;
	// stb r6,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r6.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823b1610
	if (ctx.cr6.lt) goto loc_823B1610;
loc_823B1644:
	// add r30,r30,r21
	r30.u64 = r30.u64 + r21.u64;
	// bdnz 0x823b15ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B15EC;
loc_823B164C:
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x823b16f4
	if (!ctx.cr6.lt) goto loc_823B16F4;
	// subf r10,r29,r5
	ctx.r10.u64 = ctx.r5.u64 - r29.u64;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823B1664:
	// clrlwi r6,r30,24
	ctx.r6.u64 = r30.u32 & 0xFF;
	// lwz r7,64(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// subfic r31,r6,256
	ctx.xer.ca = ctx.r6.u32 <= 256;
	r31.u64 = static_cast<uint64_t>(256) - ctx.r6.u64;
	// srawi r8,r30,8
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xFF) != 0);
	ctx.r8.s64 = r30.s32 >> 8;
	// mullw r10,r8,r11
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// cmpw cr6,r8,r28
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r28.s32, ctx.xer);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// bge cr6,0x823b16c8
	if (!ctx.cr6.lt) goto loc_823B16C8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823b16ec
	if (!ctx.cr6.gt) goto loc_823B16EC;
loc_823B1690:
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// mullw r7,r7,r31
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(r31.s32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// srawi r7,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 8;
	// stb r7,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r7.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823b1690
	if (ctx.cr6.lt) goto loc_823B1690;
	// b 0x823b16ec
	goto loc_823B16EC;
loc_823B16C8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823b16ec
	if (!ctx.cr6.gt) goto loc_823B16EC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_823B16D4:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823b16d4
	if (ctx.cr6.lt) goto loc_823B16D4;
loc_823B16EC:
	// add r30,r30,r21
	r30.u64 = r30.u64 + r21.u64;
	// bdnz 0x823b1664
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B1664;
loc_823B16F4:
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// addze r23,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r23.s64 = temp.s64;
	// cmpw cr6,r20,r23
	ctx.cr6.compare<int32_t>(r20.s32, r23.s32, ctx.xer);
	// ble cr6,0x823b1708
	if (!ctx.cr6.gt) goto loc_823B1708;
	// mr r20,r23
	r20.u64 = r23.u64;
loc_823B1708:
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,36(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// addze r28,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r28.s64 = temp.s64;
	// lwz r10,56(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lwz r6,40(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r8,64(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// mullw r11,r28,r24
	ctx.r11.s64 = int64_t(r28.s32) * int64_t(r24.s32);
	// mullw r9,r9,r25
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r25.s32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r29,r9,r8
	r29.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x823b175c
	if (ctx.cr6.eq) goto loc_823B175C;
	// srawi r11,r21,1
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1) != 0);
	ctx.r11.s64 = r21.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// addi r9,r11,-256
	ctx.r9.s64 = ctx.r11.s64 + -256;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// b 0x823b1760
	goto loc_823B1760;
loc_823B175C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B1760:
	// srawi r9,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	ctx.r9.s64 = r26.s32 >> 1;
	// addze r26,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	r26.s64 = temp.s64;
	// add. r31,r26,r11
	r31.u64 = r26.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x823b17d0
	if (!ctx.cr0.lt) goto loc_823B17D0;
	// subf r9,r31,r21
	ctx.r9.u64 = r21.u64 - r31.u64;
	// twllei r21,0
	if (r21.s32 == 0 || r21.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r27,r9,r21
	r27.u64 = uint32_t((r21.s32 && !(ctx.r9.s32 == INT32_MIN && r21.s32 == -1)) ? ctx.r9.s32 / r21.s32 : 0);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// add r11,r28,r27
	ctx.r11.u64 = r28.u64 + r27.u64;
	// andc r7,r21,r8
	ctx.r7.u64 = r21.u64 & ~ctx.r8.u64;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bge cr6,0x823b17c8
	if (!ctx.cr6.lt) goto loc_823B17C8;
	// subf r9,r28,r11
	ctx.r9.u64 = ctx.r11.u64 - r28.u64;
loc_823B179C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x823b17c0
	if (!ctx.cr6.gt) goto loc_823B17C0;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
loc_823B17AC:
	// lbzx r8,r11,r29
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + r29.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r8,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x823b17ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B17AC;
loc_823B17C0:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b179c
	if (!ctx.cr0.eq) goto loc_823B179C;
loc_823B17C8:
	// mullw r11,r27,r21
	ctx.r11.s64 = int64_t(r27.s32) * int64_t(r21.s32);
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
loc_823B17D0:
	// add r27,r28,r27
	r27.u64 = r28.u64 + r27.u64;
	// cmpw cr6,r27,r20
	ctx.cr6.compare<int32_t>(r27.s32, r20.s32, ctx.xer);
	// bge cr6,0x823b1844
	if (!ctx.cr6.lt) goto loc_823B1844;
	// subf r30,r27,r20
	r30.u64 = r20.u64 - r27.u64;
loc_823B17E0:
	// clrlwi r6,r31,25
	ctx.r6.u64 = r31.u32 & 0x7F;
	// li r11,0
	ctx.r11.s64 = 0;
	// subfic r4,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r4.u64 = static_cast<uint64_t>(128) - ctx.r6.u64;
	// srawi r9,r31,7
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7F) != 0);
	ctx.r9.s64 = r31.s32 >> 7;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// mullw r9,r9,r24
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r24.s32);
	// add r5,r9,r29
	ctx.r5.u64 = ctx.r9.u64 + r29.u64;
	// ble cr6,0x823b1838
	if (!ctx.cr6.gt) goto loc_823B1838;
	// add r9,r5,r24
	ctx.r9.u64 = ctx.r5.u64 + r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_823B180C:
	// lbzx r7,r5,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzu r19,1(r9)
	ea = 1 + ctx.r9.u32;
	r19.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// mullw r8,r7,r4
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// mullw r7,r19,r6
	ctx.r7.s64 = int64_t(r19.s32) * int64_t(ctx.r6.s32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r7,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 7;
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// stb r8,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x823b180c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B180C;
loc_823B1838:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r31,r31,r21
	r31.u64 = r31.u64 + r21.u64;
	// bne 0x823b17e0
	if (!ctx.cr0.eq) goto loc_823B17E0;
loc_823B1844:
	// cmpw cr6,r20,r23
	ctx.cr6.compare<int32_t>(r20.s32, r23.s32, ctx.xer);
	// bge cr6,0x823b188c
	if (!ctx.cr6.lt) goto loc_823B188C;
	// subf r8,r20,r23
	ctx.r8.u64 = r23.u64 - r20.u64;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
loc_823B1854:
	// srawi r10,r31,7
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7F) != 0);
	ctx.r10.s64 = r31.s32 >> 7;
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw r10,r10,r24
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r24.s32);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x823b1880
	if (!ctx.cr6.gt) goto loc_823B1880;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
loc_823B1870:
	// lbzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r7,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x823b1870
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B1870;
loc_823B1880:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r31,r31,r21
	r31.u64 = r31.u64 + r21.u64;
	// bne 0x823b1854
	if (!ctx.cr0.eq) goto loc_823B1854;
loc_823B188C:
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// add r6,r28,r22
	ctx.r6.u64 = r28.u64 + r22.u64;
	// lwz r5,36(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mullw r11,r9,r25
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(r25.s32);
	// lwz r7,64(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r8,56(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r4,40(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// srawi r3,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 1;
	// mullw r10,r6,r24
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(r24.s32);
	// mullw r6,r9,r5
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// addze r9,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r9.s64 = temp.s64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r30,r9,r11
	r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823b18e8
	if (ctx.cr6.eq) goto loc_823B18E8;
	// srawi r11,r21,1
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1) != 0);
	ctx.r11.s64 = r21.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// addi r9,r11,-256
	ctx.r9.s64 = ctx.r11.s64 + -256;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// b 0x823b18ec
	goto loc_823B18EC;
loc_823B18E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B18EC:
	// add. r3,r26,r11
	ctx.r3.u64 = r26.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823b1954
	if (!ctx.cr0.lt) goto loc_823B1954;
	// subf r9,r3,r21
	ctx.r9.u64 = r21.u64 - ctx.r3.u64;
	// twllei r21,0
	if (r21.s32 == 0 || r21.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r9,r9,r21
	ctx.r9.u64 = uint32_t((r21.s32 && !(ctx.r9.s32 == INT32_MIN && r21.s32 == -1)) ? ctx.r9.s32 / r21.s32 : 0);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// add r27,r28,r9
	r27.u64 = r28.u64 + ctx.r9.u64;
	// andc r7,r21,r8
	ctx.r7.u64 = r21.u64 & ~ctx.r8.u64;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(r28.s32, r27.s32, ctx.xer);
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bge cr6,0x823b194c
	if (!ctx.cr6.lt) goto loc_823B194C;
	// subf r8,r28,r27
	ctx.r8.u64 = r27.u64 - r28.u64;
loc_823B1920:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x823b1944
	if (!ctx.cr6.gt) goto loc_823B1944;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
loc_823B1930:
	// lbzx r7,r11,r30
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r7,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x823b1930
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B1930;
loc_823B1944:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x823b1920
	if (!ctx.cr0.eq) goto loc_823B1920;
loc_823B194C:
	// mullw r11,r9,r21
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(r21.s32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823B1954:
	// cmpw cr6,r27,r20
	ctx.cr6.compare<int32_t>(r27.s32, r20.s32, ctx.xer);
	// bge cr6,0x823b19c4
	if (!ctx.cr6.lt) goto loc_823B19C4;
	// subf r31,r27,r20
	r31.u64 = r20.u64 - r27.u64;
loc_823B1960:
	// clrlwi r6,r3,25
	ctx.r6.u64 = ctx.r3.u32 & 0x7F;
	// li r11,0
	ctx.r11.s64 = 0;
	// subfic r4,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r4.u64 = static_cast<uint64_t>(128) - ctx.r6.u64;
	// srawi r9,r3,7
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 7;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// mullw r9,r9,r24
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r24.s32);
	// add r5,r9,r30
	ctx.r5.u64 = ctx.r9.u64 + r30.u64;
	// ble cr6,0x823b19b8
	if (!ctx.cr6.gt) goto loc_823B19B8;
	// add r9,r5,r24
	ctx.r9.u64 = ctx.r5.u64 + r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_823B198C:
	// lbzx r7,r5,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzu r29,1(r9)
	ea = 1 + ctx.r9.u32;
	r29.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// mullw r8,r7,r4
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// mullw r7,r29,r6
	ctx.r7.s64 = int64_t(r29.s32) * int64_t(ctx.r6.s32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r7,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 7;
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// stb r8,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x823b198c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B198C;
loc_823B19B8:
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r3,r3,r21
	ctx.r3.u64 = ctx.r3.u64 + r21.u64;
	// bne 0x823b1960
	if (!ctx.cr0.eq) goto loc_823B1960;
loc_823B19C4:
	// cmpw cr6,r20,r23
	ctx.cr6.compare<int32_t>(r20.s32, r23.s32, ctx.xer);
	// bge cr6,0x823b1a0c
	if (!ctx.cr6.lt) goto loc_823B1A0C;
	// subf r8,r20,r23
	ctx.r8.u64 = r23.u64 - r20.u64;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
loc_823B19D4:
	// srawi r10,r3,7
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 7;
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw r10,r10,r24
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r24.s32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x823b1a00
	if (!ctx.cr6.gt) goto loc_823B1A00;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
loc_823B19F0:
	// lbzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r7,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x823b19f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B19F0;
loc_823B1A00:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r3,r3,r21
	ctx.r3.u64 = ctx.r3.u64 + r21.u64;
	// bne 0x823b19d4
	if (!ctx.cr0.eq) goto loc_823B19D4;
loc_823B1A0C:
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_823CBCA8) {
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
	ctx.lr = 0x823CBCB0;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f28
	ctx.lr = 0x823CBCB8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f28,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f28.f64 = double(temp.f32);
	// lfs f24,1980(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1980);
	f24.f64 = double(temp.f32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// fmr f27,f28
	f27.f64 = f28.f64;
	// fmr f26,f28
	f26.f64 = f28.f64;
	// fmr f25,f28
	f25.f64 = f28.f64;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// bne cr6,0x823cbd50
	if (!ctx.cr6.eq) goto loc_823CBD50;
	// clrlwi r10,r6,31
	ctx.r10.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823cbd1c
	if (ctx.cr6.eq) goto loc_823CBD1C;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f27,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f27.f64 = double(temp.f32);
loc_823CBD1C:
	// rlwinm r9,r28,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823cbd34
	if (ctx.cr6.eq) goto loc_823CBD34;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f26,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f26.f64 = double(temp.f32);
loc_823CBD34:
	// rlwinm r7,r28,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823cbf90
	if (ctx.cr6.eq) goto loc_823CBF90;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f25,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f25.f64 = double(temp.f32);
	// b 0x823cbf90
	goto loc_823CBF90;
loc_823CBD50:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, f24.f64);
	// beq cr6,0x823cbf48
	if (ctx.cr6.eq) goto loc_823CBF48;
	// lwz r10,36(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,21056(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 21056);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x823cbf48
	if (!ctx.cr6.gt) goto loc_823CBF48;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
	// addi r3,r29,28
	ctx.r3.s64 = r29.s64 + 28;
	// bl 0x823cd088
	ctx.lr = 0x823CBD90;
	sub_823CD088(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823cd060
	ctx.lr = 0x823CBD9C;
	sub_823CD060(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r10,36(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f29,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	f29.f64 = double(temp.f32);
	// fdivs f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f29
	ctx.f1.f64 = double(float(ctx.f13.f64 * f29.f64));
	// bl 0x822d4d68
	ctx.lr = 0x823CBDCC;
	sub_822D4D68(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(f31.f64, f30.f64);
	// blt cr6,0x823cbe30
	if (ctx.cr6.lt) goto loc_823CBE30;
	// clrlwi r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823cbdf4
	if (ctx.cr6.eq) goto loc_823CBDF4;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f27,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f27.f64 = double(temp.f32);
loc_823CBDF4:
	// rlwinm r11,r28,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cbe10
	if (ctx.cr6.eq) goto loc_823CBE10;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f26,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f26.f64 = double(temp.f32);
loc_823CBE10:
	// rlwinm r7,r28,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823cbf90
	if (ctx.cr6.eq) goto loc_823CBF90;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f25,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f25.f64 = double(temp.f32);
	// b 0x823cbf90
	goto loc_823CBF90;
loc_823CBE30:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * f29.f64));
	// bl 0x822d4d68
	ctx.lr = 0x823CBE48;
	sub_822D4D68(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// clrlwi r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bgt cr6,0x823cbeac
	if (ctx.cr6.gt) goto loc_823CBEAC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823cbe70
	if (ctx.cr6.eq) goto loc_823CBE70;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f27,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f27.f64 = double(temp.f32);
loc_823CBE70:
	// rlwinm r11,r28,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cbe8c
	if (ctx.cr6.eq) goto loc_823CBE8C;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f26,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f26.f64 = double(temp.f32);
loc_823CBE8C:
	// rlwinm r7,r28,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823cbf90
	if (ctx.cr6.eq) goto loc_823CBF90;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f25,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f25.f64 = double(temp.f32);
	// b 0x823cbf90
	goto loc_823CBF90;
loc_823CBEAC:
	// fsubs f13,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f31.f64 - f30.f64));
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fsubs f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 - f30.f64));
	// fdivs f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// beq cr6,0x823cbee4
	if (ctx.cr6.eq) goto loc_823CBEE4;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f12,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f27,f11,f0,f13
	f27.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f13.f64)));
loc_823CBEE4:
	// rlwinm r11,r28,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cbf14
	if (ctx.cr6.eq) goto loc_823CBF14;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f26,f11,f0,f13
	f26.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f13.f64)));
loc_823CBF14:
	// rlwinm r7,r28,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823cbf90
	if (ctx.cr6.eq) goto loc_823CBF90;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r8,28(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f25,f11,f0,f13
	f25.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f13.f64)));
	// b 0x823cbf90
	goto loc_823CBF90;
loc_823CBF48:
	// clrlwi r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823cbf60
	if (ctx.cr6.eq) goto loc_823CBF60;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f27,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	f27.f64 = double(temp.f32);
loc_823CBF60:
	// rlwinm r9,r28,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823cbf78
	if (ctx.cr6.eq) goto loc_823CBF78;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f26,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	f26.f64 = double(temp.f32);
loc_823CBF78:
	// rlwinm r7,r28,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823cbf90
	if (ctx.cr6.eq) goto loc_823CBF90;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f25,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	f25.f64 = double(temp.f32);
loc_823CBF90:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823cc05c
	if (ctx.cr6.eq) goto loc_823CC05C;
	// lwz r9,60(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 60);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823cbfd4
	if (ctx.cr6.eq) goto loc_823CBFD4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_823CBFAC:
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 * f27.f64));
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lwz r9,60(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 60);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823cbfac
	if (ctx.cr6.lt) goto loc_823CBFAC;
loc_823CBFD4:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823cc05c
	if (ctx.cr6.eq) goto loc_823CC05C;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x823cc004
	if (!ctx.cr6.eq) goto loc_823CC004;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f27,f0
	ctx.f13.f64 = double(float(f27.f64 * ctx.f0.f64));
	// stfsx f13,r10,r11
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// b 0x823cc05c
	goto loc_823CC05C;
loc_823CC004:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823cc05c
	if (ctx.cr6.eq) goto loc_823CC05C;
	// li r9,0
	ctx.r9.s64 = 0;
loc_823CC014:
	// lwz r11,68(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 68);
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, f24.f64);
	// bne cr6,0x823cc048
	if (!ctx.cr6.eq) goto loc_823CC048;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r6,8(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 8);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 * f27.f64));
	// stfsx f13,r10,r11
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
loc_823CC048:
	// lwz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 60);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823cc014
	if (ctx.cr6.lt) goto loc_823CC014;
loc_823CC05C:
	// rlwinm r11,r28,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cc098
	if (ctx.cr6.eq) goto loc_823CC098;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f26
	ctx.f13.f64 = double(float(ctx.f0.f64 - f26.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f13,f28
	ctx.cr6.compare(ctx.f13.f64, f28.f64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// bge cr6,0x823cc098
	if (!ctx.cr6.lt) goto loc_823CC098;
	// stfs f28,84(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
loc_823CC098:
	// rlwinm r11,r28,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cc0d4
	if (ctx.cr6.eq) goto loc_823CC0D4;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f26
	ctx.f13.f64 = double(float(ctx.f0.f64 - f26.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f13,f28
	ctx.cr6.compare(ctx.f13.f64, f28.f64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// bge cr6,0x823cc0d4
	if (!ctx.cr6.lt) goto loc_823CC0D4;
	// stfs f28,84(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
loc_823CC0D4:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823cc0f8
	if (ctx.cr6.eq) goto loc_823CC0F8;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f25
	ctx.f13.f64 = double(float(ctx.f0.f64 * f25.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r10.u32);
loc_823CC0F8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f74
	ctx.lr = 0x823CC104;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_823DB1E0) {
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
	// beq cr6,0x823db21c
	if (ctx.cr6.eq) goto loc_823DB21C;
	// bl 0x822213d8
	ctx.lr = 0x823DB204;
	sub_822213D8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823db21c
	if (ctx.cr6.eq) goto loc_823DB21C;
	// bl 0x82216cc8
	ctx.lr = 0x823DB214;
	sub_82216CC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_823DB21C:
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

DEFINE_REX_FUNC(sub_823DBE48) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x823cd118
	ctx.lr = 0x823DBE70;
	sub_823CD118(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// bne 0x823dbe88
	if (!ctx.cr0.eq) goto loc_823DBE88;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823dbfac
	goto loc_823DBFAC;
loc_823DBE88:
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x823dbf64
	if (ctx.cr6.eq) goto loc_823DBF64;
	// li r9,256
	ctx.r9.s64 = 256;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,-13044(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -13044);
	ctx.f0.f64 = double(temp.f32);
loc_823DBEAC:
	// lwz r9,80(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 80);
	// lwz r8,56(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lbzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
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
	// stfsx f13,r10,r8
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// lwz r9,80(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 80);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r9,1(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r8,56(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 56);
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lwz r8,80(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 80);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r8,2(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// std r8,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r8,80(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 80);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r8,3(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 3);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r8,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,12(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// bdnz 0x823dbeac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DBEAC;
	// b 0x823dbfa8
	goto loc_823DBFA8;
loc_823DBF64:
	// li r10,256
	ctx.r10.s64 = 256;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
loc_823DBF74:
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// stfsx f0,r11,r10
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x823dbf74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DBF74;
loc_823DBFA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823DBFAC:
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

DEFINE_REX_FUNC(sub_823E0780) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e78
	ctx.lr = 0x823E0788;
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f29.u64);
	// stfd f30,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
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
	// beq cr6,0x823e07c0
	if (ctx.cr6.eq) goto loc_823E07C0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82413040
	ctx.lr = 0x823E07BC;
	sub_82413040(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_823E07C0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e07dc
	if (ctx.cr6.eq) goto loc_823E07DC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc0b0
	ctx.lr = 0x823E07D8;
	sub_823DC0B0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_823E07DC:
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
	// fmr f29,f31
	f29.f64 = f31.f64;
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
	// bne 0x823e0848
	if (!ctx.cr0.eq) goto loc_823E0848;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x823e0850
	goto loc_823E0850;
loc_823E0848:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_823E0850:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e0868
	if (ctx.cr6.eq) goto loc_823E0868;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc658
	ctx.lr = 0x823E0868;
	sub_823DC658(ctx, base);
loc_823E0868:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823e0b38
	if (!ctx.cr6.gt) goto loc_823E0B38;
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// rlwinm r25,r30,1,0,30
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lfd f11,-9120(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r7.u32 + -9120);
	// subf r30,r25,r28
	r30.u64 = r28.u64 - r25.u64;
	// lfs f5,-7220(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -7220);
	ctx.f5.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r28,-32255
	r28.s64 = -2113863680;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f12,16288(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16288);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,-7224(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -7224);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,17176(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 17176);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f7,-30112(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + -30112);
	ctx.f7.f64 = double(temp.f32);
	// addi r29,r27,12
	r29.s64 = r27.s64 + 12;
	// lfs f4,25732(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 25732);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,29356(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 29356);
	ctx.f6.f64 = double(temp.f32);
loc_823E08DC:
	// add r11,r29,r10
	ctx.r11.u64 = r29.u64 + ctx.r10.u64;
	// lfsx f10,r29,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// fadds f10,f29,f10
	ctx.f10.f64 = double(float(f29.f64 + ctx.f10.f64));
	// rlwinm r7,r26,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xC;
	// lwz r6,92(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f9,-12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 + f31.f64));
	// fadds f8,f8,f30
	ctx.f8.f64 = double(float(ctx.f8.f64 + f30.f64));
	// lfsx f3,r7,r24
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + r24.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f10,f10,f4
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// fmuls f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fadds f2,f10,f3
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f3.f64));
	// fadds f1,f9,f3
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// fadds f3,f8,f3
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f3.f64));
	// fctiwz f2,f2
	ctx.f2.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f2,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f2,f1
	ctx.f2.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f2,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// fctiwz f3,f3
	ctx.f3.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f3,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f3.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// beq cr6,0x823e0a8c
	if (ctx.cr6.eq) goto loc_823E0A8C;
	// extsw r28,r4
	r28.s64 = ctx.r4.s32;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// extsw r7,r5
	ctx.r7.s64 = ctx.r5.s32;
	// std r28,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r28.u64);
	// extsw r28,r6
	r28.s64 = ctx.r6.s32;
	// std r7,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f3,96(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r28,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, r28.u64);
	// lfd f31,112(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f3,f3
	ctx.f3.f64 = double(ctx.f3.s64);
	// lfd f2,104(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// frsp f3,f3
	ctx.f3.f64 = double(float(ctx.f3.f64));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// fcfid f31,f31
	f31.f64 = double(f31.s64);
	// fcfid f2,f2
	ctx.f2.f64 = double(ctx.f2.s64);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lfs f1,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f9,f9,f3
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// frsp f3,f31
	ctx.f3.f64 = double(float(f31.f64));
	// fmuls f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fsubs f8,f8,f3
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f3.f64));
	// frsp f3,f2
	ctx.f3.f64 = double(float(ctx.f2.f64));
	// fmadds f2,f9,f0,f1
	ctx.f2.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f1.f64)));
	// stfs f2,16(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fmuls f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fsubs f10,f10,f3
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// fmul f2,f8,f11
	ctx.f2.f64 = ctx.f8.f64 * ctx.f11.f64;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// fmul f3,f9,f11
	ctx.f3.f64 = ctx.f9.f64 * ctx.f11.f64;
	// fmuls f10,f10,f5
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// frsp f30,f2
	f30.f64 = double(float(ctx.f2.f64));
	// lfs f2,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f2,f9,f13,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f2.f64)));
	// stfs f2,16(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f2,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f9,f9,f12,f2
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f2.f64)));
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f9,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f9,f8,f0,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f9.f64)));
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f9,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f9,f8,f13,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f9.f64)));
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f9,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f9,f8,f12,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f9.f64)));
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f9,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f9,f10,f0,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f9.f64)));
	// stfs f9,28(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f9,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// frsp f31,f3
	f31.f64 = double(float(ctx.f3.f64));
	// fmadds f9,f10,f13,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f9.f64)));
	// stfs f9,28(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fmul f3,f10,f11
	ctx.f3.f64 = ctx.f10.f64 * ctx.f11.f64;
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f9,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f10,f10,f12,f9
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f9.f64)));
	// stfs f10,28(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// frsp f29,f3
	f29.f64 = double(float(ctx.f3.f64));
loc_823E0A8C:
	// cmpwi cr6,r5,15
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 15, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x823e0a9c
	if (ctx.cr6.lt) goto loc_823E0A9C;
	// li r11,15
	ctx.r11.s64 = 15;
loc_823E0A9C:
	// cmpwi cr6,r11,-15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -15, ctx.xer);
	// ble cr6,0x823e0ab4
	if (!ctx.cr6.gt) goto loc_823E0AB4;
	// cmpwi cr6,r5,15
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 15, ctx.xer);
	// blt cr6,0x823e0ab8
	if (ctx.cr6.lt) goto loc_823E0AB8;
	// li r5,15
	ctx.r5.s64 = 15;
	// b 0x823e0ab8
	goto loc_823E0AB8;
loc_823E0AB4:
	// li r5,-15
	ctx.r5.s64 = -15;
loc_823E0AB8:
	// cmpwi cr6,r6,15
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 15, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x823e0ac8
	if (ctx.cr6.lt) goto loc_823E0AC8;
	// li r11,15
	ctx.r11.s64 = 15;
loc_823E0AC8:
	// cmpwi cr6,r11,-15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -15, ctx.xer);
	// ble cr6,0x823e0ae0
	if (!ctx.cr6.gt) goto loc_823E0AE0;
	// cmpwi cr6,r6,15
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 15, ctx.xer);
	// blt cr6,0x823e0ae4
	if (ctx.cr6.lt) goto loc_823E0AE4;
	// li r6,15
	ctx.r6.s64 = 15;
	// b 0x823e0ae4
	goto loc_823E0AE4;
loc_823E0AE0:
	// li r6,-15
	ctx.r6.s64 = -15;
loc_823E0AE4:
	// cmpwi cr6,r4,63
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 63, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x823e0af4
	if (ctx.cr6.lt) goto loc_823E0AF4;
	// li r11,63
	ctx.r11.s64 = 63;
loc_823E0AF4:
	// cmpwi cr6,r11,-63
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -63, ctx.xer);
	// ble cr6,0x823e0b0c
	if (!ctx.cr6.gt) goto loc_823E0B0C;
	// cmpwi cr6,r4,63
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 63, ctx.xer);
	// blt cr6,0x823e0b10
	if (ctx.cr6.lt) goto loc_823E0B10;
	// li r4,63
	ctx.r4.s64 = 63;
	// b 0x823e0b10
	goto loc_823E0B10;
loc_823E0B0C:
	// li r4,-63
	ctx.r4.s64 = -63;
loc_823E0B10:
	// rlwimi r6,r4,5,0,26
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0) | (ctx.r6.u64 & 0xFFFFFFFF0000001F);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// rlwimi r5,r6,5,0,26
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0) | (ctx.r5.u64 & 0xFFFFFFFF0000001F);
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// sthux r5,r30,r25
	ea = r30.u32 + r25.u32;
	REX_STORE_U16(ea, ctx.r5.u16);
	r30.u32 = ea;
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823e08dc
	if (ctx.cr6.lt) goto loc_823E08DC;
loc_823E0B38:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_823E7C20) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823e7c68
	if (ctx.cr6.eq) goto loc_823E7C68;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// subf r9,r6,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r6.u64;
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
loc_823E7C48:
	// lfsx f13,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x823e7c5c
	if (!ctx.cr6.eq) goto loc_823E7C5C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_823E7C5C:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823e7c48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E7C48;
loc_823E7C68:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x82226530
	ctx.lr = 0x823E7C70;
	sub_82226530(ctx, base);
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

DEFINE_REX_FUNC(sub_823EAB18) {
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
	// bl 0x823e7960
	ctx.lr = 0x823EAB38;
	sub_823E7960(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823eab4c
	if (ctx.cr0.eq) goto loc_823EAB4C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cd250
	ctx.lr = 0x823EAB4C;
	sub_823CD250(ctx, base);
loc_823EAB4C:
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

DEFINE_REX_FUNC(sub_823EB988) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,9288
	ctx.r10.s64 = ctx.r10.s64 + 9288;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EC7D8) {
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
	ctx.lr = 0x823EC7E0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// li r28,1
	r28.s64 = 1;
	// li r27,2
	r27.s64 = 2;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823ec9a4
	if (ctx.cr6.eq) goto loc_823EC9A4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823ec89c
	if (ctx.cr6.eq) goto loc_823EC89C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x823ec81c
	if (ctx.cr6.eq) goto loc_823EC81C;
	// stw r29,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, r29.u32);
	// stw r29,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, r29.u32);
	// b 0x823ec9ac
	goto loc_823EC9AC;
loc_823EC81C:
	// lwz r11,296(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 296);
	// li r30,4
	r30.s64 = 4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823ec890
	if (ctx.cr6.eq) goto loc_823EC890;
	// lbz r11,300(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 300);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ec890
	if (ctx.cr6.eq) goto loc_823EC890;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x823ec880
	if (ctx.cr6.eq) goto loc_823EC880;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,114
	ctx.r10.s64 = 114;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lbz r9,300(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 300);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r9,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823EC870;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r5,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r5.u32);
	// b 0x823ec9ac
	goto loc_823EC9AC;
loc_823EC880:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// b 0x823ec9ac
	goto loc_823EC9AC;
loc_823EC890:
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
	// b 0x823ec9ac
	goto loc_823EC9AC;
loc_823EC89C:
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823ec92c
	if (!ctx.cr6.eq) goto loc_823EC92C;
	// lwz r11,296(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 296);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823ec904
	if (ctx.cr6.eq) goto loc_823EC904;
	// lbz r11,300(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 300);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823ec954
	if (ctx.cr6.lt) goto loc_823EC954;
	// beq cr6,0x823ec92c
	if (ctx.cr6.eq) goto loc_823EC92C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,114
	ctx.r10.s64 = 114;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lbz r9,300(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 300);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r9,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823EC8F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r27,44(r31)
	REX_STORE_U32(r31.u32 + 44, r27.u32);
	// stw r5,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r5.u32);
	// b 0x823ec9ac
	goto loc_823EC9AC;
loc_823EC904:
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,84(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r8,168(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x823ec93c
	if (!ctx.cr6.eq) goto loc_823EC93C;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x823ec960
	if (!ctx.cr6.eq) goto loc_823EC960;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x823ec960
	if (!ctx.cr6.eq) goto loc_823EC960;
loc_823EC92C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r27,44(r31)
	REX_STORE_U32(r31.u32 + 44, r27.u32);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// b 0x823ec9ac
	goto loc_823EC9AC;
loc_823EC93C:
	// cmpwi cr6,r10,82
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 82, ctx.xer);
	// bne cr6,0x823ec960
	if (!ctx.cr6.eq) goto loc_823EC960;
	// cmpwi cr6,r9,71
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 71, ctx.xer);
	// bne cr6,0x823ec960
	if (!ctx.cr6.eq) goto loc_823EC960;
	// cmpwi cr6,r8,66
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 66, ctx.xer);
	// bne cr6,0x823ec960
	if (!ctx.cr6.eq) goto loc_823EC960;
loc_823EC954:
	// stw r27,40(r31)
	REX_STORE_U32(r31.u32 + 40, r27.u32);
	// stw r27,44(r31)
	REX_STORE_U32(r31.u32 + 44, r27.u32);
	// b 0x823ec9ac
	goto loc_823EC9AC;
loc_823EC960:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r7,111
	ctx.r7.s64 = 111;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r8,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r7,20(r6)
	REX_STORE_U32(ctx.r6.u32 + 20, ctx.r7.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EC994;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r27,44(r31)
	REX_STORE_U32(r31.u32 + 44, r27.u32);
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// b 0x823ec9ac
	goto loc_823EC9AC;
loc_823EC9A4:
	// stw r28,40(r31)
	REX_STORE_U32(r31.u32 + 40, r28.u32);
	// stw r28,44(r31)
	REX_STORE_U32(r31.u32 + 44, r28.u32);
loc_823EC9AC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r28,48(r31)
	REX_STORE_U32(r31.u32 + 48, r28.u32);
	// li r10,256
	ctx.r10.s64 = 256;
	// stw r28,52(r31)
	REX_STORE_U32(r31.u32 + 52, r28.u32);
	// stw r29,64(r31)
	REX_STORE_U32(r31.u32 + 64, r29.u32);
	// stw r29,68(r31)
	REX_STORE_U32(r31.u32 + 68, r29.u32);
	// stw r29,72(r31)
	REX_STORE_U32(r31.u32 + 72, r29.u32);
	// lfd f0,26664(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 26664);
	// stw r28,76(r31)
	REX_STORE_U32(r31.u32 + 76, r28.u32);
	// stfd f0,56(r31)
	REX_STORE_U64(r31.u32 + 56, ctx.f0.u64);
	// stw r28,80(r31)
	REX_STORE_U32(r31.u32 + 80, r28.u32);
	// stw r29,84(r31)
	REX_STORE_U32(r31.u32 + 84, r29.u32);
	// stw r27,88(r31)
	REX_STORE_U32(r31.u32 + 88, r27.u32);
	// stw r29,92(r31)
	REX_STORE_U32(r31.u32 + 92, r29.u32);
	// stw r10,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// stw r29,136(r31)
	REX_STORE_U32(r31.u32 + 136, r29.u32);
	// stw r29,100(r31)
	REX_STORE_U32(r31.u32 + 100, r29.u32);
	// stw r29,104(r31)
	REX_STORE_U32(r31.u32 + 104, r29.u32);
	// stw r29,108(r31)
	REX_STORE_U32(r31.u32 + 108, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_823F45D8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// b 0x823cd250
	sub_823CD250(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823F4680) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F4688) {
	REX_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x822d4fa0
	sub_822D4FA0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823F46A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823f46bc
	if (!ctx.cr6.eq) goto loc_823F46BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823f47d4
	goto loc_823F47D4;
loc_823F46BC:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// not r10,r3
	ctx.r10.u64 = ~ctx.r3.u64;
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// addi r11,r11,728
	ctx.r11.s64 = ctx.r11.s64 + 728;
	// blt cr6,0x823f47a4
	if (ctx.cr6.lt) goto loc_823F47A4;
	// rlwinm r9,r5,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823F46D8:
	// lbz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// rlwinm r8,r10,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// lbzu r7,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// addi r5,r5,-8
	ctx.r5.s64 = ctx.r5.s64 + -8;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// rlwinm r10,r10,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// lbzu r9,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// lbzu r8,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// xor r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r7,r7,2,22,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FC;
	// lbzu r6,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// lwzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lbzu r3,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// xor r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r9,r9,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FC;
	// lbzu r7,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lbzu r31,1(r4)
	ea = 1 + ctx.r4.u32;
	r31.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// xor r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r9,r9,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 ^ ctx.r10.u64;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r9,r9,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r10.u64;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r9,r9,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r9,r9,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r9,r31,r10
	ctx.r9.u64 = r31.u64 ^ ctx.r10.u64;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r9,r9,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// bdnz 0x823f46d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F46D8;
loc_823F47A4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f47d0
	if (ctx.cr6.eq) goto loc_823F47D0;
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
loc_823F47B0:
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// rlwinm r7,r10,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// xor r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// rlwinm r10,r10,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// xor r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// bne 0x823f47b0
	if (!ctx.cr0.eq) goto loc_823F47B0;
loc_823F47D0:
	// not r3,r10
	ctx.r3.u64 = ~ctx.r10.u64;
loc_823F47D4:
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F95A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x823F95A8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1368(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1368);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823f95e8
	if (!ctx.cr0.eq) goto loc_823F95E8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,3252
	ctx.r4.s64 = ctx.r11.s64 + 3252;
	// bl 0x823ec3e0
	ctx.lr = 0x823F95D0;
	sub_823EC3E0(ctx, base);
loc_823F95D0:
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x823f9654
	if (ctx.cr6.eq) goto loc_823F9654;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// b 0x823f95fc
	goto loc_823F95FC;
loc_823F95E8:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823f9610
	if (ctx.cr0.eq) goto loc_823F9610;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,3200
	ctx.r4.s64 = ctx.r11.s64 + 3200;
loc_823F95F8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823F95FC:
	// bl 0x823ec418
	ctx.lr = 0x823F9600;
	sub_823EC418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f8fa8
	ctx.lr = 0x823F960C;
	sub_823F8FA8(ctx, base);
	// b 0x823f9734
	goto loc_823F9734;
loc_823F9610:
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f962c
	if (ctx.cr0.eq) goto loc_823F962C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,3176
	ctx.r4.s64 = ctx.r11.s64 + 3176;
	// bl 0x823ec418
	ctx.lr = 0x823F9628;
	sub_823EC418(ctx, base);
	// b 0x823f95d0
	goto loc_823F95D0;
loc_823F962C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823f95d0
	if (ctx.cr6.eq) goto loc_823F95D0;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823f95d0
	if (ctx.cr0.eq) goto loc_823F95D0;
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f95d0
	if (!ctx.cr0.eq) goto loc_823F95D0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,3152
	ctx.r4.s64 = ctx.r11.s64 + 3152;
	// b 0x823f95f8
	goto loc_823F95F8;
loc_823F9654:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823f2248
	ctx.lr = 0x823F9660;
	sub_823F2248(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ec5f8
	ctx.lr = 0x823F9670;
	sub_823EC5F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f8fa8
	ctx.lr = 0x823F967C;
	sub_823F8FA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823f9734
	if (!ctx.cr0.eq) goto loc_823F9734;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r9,81(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,83(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add. r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f9734
	if (ctx.cr0.eq) goto loc_823F9734;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm. r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823f9704
	if (ctx.cr0.eq) goto loc_823F9704;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfd f0,3144(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 3144);
	// lfd f13,3136(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 3136);
	// fsub f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 - ctx.f0.f64;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823f9704
	if (!ctx.cr6.gt) goto loc_823F9704;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,3080
	ctx.r4.s64 = ctx.r11.s64 + 3080;
	// bl 0x823ec418
	ctx.lr = 0x823F9700;
	sub_823EC418(ctx, base);
	// b 0x823f9734
	goto loc_823F9734;
loc_823F9704:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-24724(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24724);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f1,1584(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 1584, temp.u32);
	// bl 0x823ef3c8
	ctx.lr = 0x823F9734;
	sub_823EF3C8(ctx, base);
loc_823F9734:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_823FE280) {
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
	ctx.lr = 0x823FE288;
	// lwz r11,316(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// li r28,0
	r28.s64 = 0;
	// lwz r24,0(r6)
	r24.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823fe3ec
	if (!ctx.cr6.gt) goto loc_823FE3EC;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
loc_823FE2A0:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r26,0
	r26.s64 = 0;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// addi r27,r11,-4
	r27.s64 = ctx.r11.s64 + -4;
loc_823FE2B0:
	// lwz r8,0(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x823fe2c4
	if (!ctx.cr6.eq) goto loc_823FE2C4;
	// lwz r11,-4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + -4);
	// b 0x823fe2c8
	goto loc_823FE2C8;
loc_823FE2C4:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
loc_823FE2C8:
	// lbz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lbzu r10,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// rotlwi r7,r9,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzu r6,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r6,r9,2
	ctx.r6.s64 = ctx.r9.s64 + 2;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r31,r11,1
	r31.s64 = ctx.r11.s64 + 1;
	// lwzu r11,4(r27)
	ea = 4 + r27.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r27.u32 = ea;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,7
	ctx.r7.s64 = ctx.r7.s64 + 7;
	// srawi r6,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 4;
	// srawi r5,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 4;
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stbu r5,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// lwz r9,40(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// addic. r8,r9,-2
	ctx.xer.ca = ctx.r9.u32 > 1;
	ctx.r8.s64 = ctx.r9.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// beq 0x823fe3a0
	if (ctx.cr0.eq) goto loc_823FE3A0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r5,r31,-1
	ctx.r5.s64 = r31.s64 + -1;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
loc_823FE34C:
	// lbzu r10,1(r6)
	ea = 1 + ctx.r6.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r6.u32 = ea;
	// rlwinm r30,r9,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzu r31,1(r5)
	ea = 1 + ctx.r5.u32;
	r31.u64 = REX_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 + r30.u64;
	// add r10,r29,r10
	ctx.r10.u64 = r29.u64 + ctx.r10.u64;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// srawi r7,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 4;
	// addi r8,r8,7
	ctx.r8.s64 = ctx.r8.s64 + 7;
	// stb r7,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// srawi r8,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stbu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823fe34c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FE34C;
loc_823FE3A0:
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r9,r9,7
	ctx.r9.s64 = ctx.r9.s64 + 7;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(r26.s32, 2, ctx.xer);
	// srawi r7,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// srawi r6,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 4;
	// clrlwi r5,r7,24
	ctx.r5.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// stb r5,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// blt cr6,0x823fe2b0
	if (ctx.cr6.lt) goto loc_823FE2B0;
	// lwz r11,316(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823fe2a0
	if (ctx.cr6.lt) goto loc_823FE2A0;
loc_823FE3EC:
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82405310) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// vspltisw128 v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x4)));
	// vspltisw128 v59,2
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_set1_epi32(int(0x2)));
	// vor128 v61,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// addi r11,r11,16288
	ctx.r11.s64 = ctx.r11.s64 + 16288;
	// vspltisw128 v62,8
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0x8)));
	// vspltisw128 v60,1
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_set1_epi32(int(0x1)));
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// vcsxwfp128 v7,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v7.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vcsxwfp128 v13,v59,0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// addi r10,r10,16272
	ctx.r10.s64 = ctx.r10.s64 + 16272;
	// vcsxwfp128 v5,v62,0
	simde_mm_store_ps(ctx.v5.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v58,v60,8
	simde_mm_store_ps(ctx.v58.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3B800000)))));
	// vcsxwfp128 v60,v60,7
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3C000000)))));
	// vspltw128 v59,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v10,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// lvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v6,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vspltw128 v11,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vmulfp128 v0,v61,v59
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v59.f32)));
	// vspltw128 v63,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// vspltw128 v59,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// vspltw128 v57,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// vspltw128 v62,v62,3
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x0));
	// vcmpgtfp128 v12,v63,v61
	simde_mm_store_ps(ctx.v12.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vcmpgtfp128 v8,v59,v61
	simde_mm_store_ps(ctx.v8.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vcmpgtfp128 v9,v57,v61
	simde_mm_store_ps(ctx.v9.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vmaddfp v7,v0,v7,v10
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vmaddfp v6,v0,v5,v6
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v10,v0,v13,v11
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v63,v7,v58
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v58.f32)));
	// vmulfp128 v60,v6,v60
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vrfiz128 v63,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v63.f32), SIMDE_MM_FROUND_TO_ZERO | SIMDE_MM_FROUND_NO_EXC));
	// vrfiz128 v60,v60
	simde_mm_store_ps(ctx.v60.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v60.f32), SIMDE_MM_FROUND_TO_ZERO | SIMDE_MM_FROUND_NO_EXC));
	// vaddfp128 v13,v7,v63
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vaddfp128 v11,v6,v60
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vsel v12,v11,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vsel v13,v12,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// vsel v12,v13,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmulfp128 v1,v12,v62
	simde_mm_store_ps(ctx.v1.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vrlimi128 v1,v61,1,0
	simde_mm_store_ps(ctx.v1.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 228), 1));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8240B5B0) {
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
	ctx.lr = 0x8240B5B8;
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r10,588(r1)
	REX_STORE_U32(ctx.r1.u32 + 588, ctx.r10.u32);
	// addi r10,r1,180
	ctx.r10.s64 = ctx.r1.s64 + 180;
	// li r19,0
	r19.s64 = 0;
	// lwz r11,32(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// stw r6,556(r1)
	REX_STORE_U32(ctx.r1.u32 + 556, ctx.r6.u32);
	// stw r19,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r19.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// clrlwi r18,r11,26
	r18.u64 = ctx.r11.u32 & 0x3F;
	// stw r19,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r19.u32);
	// stw r19,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r19.u32);
	// addi r11,r8,27512
	ctx.r11.s64 = ctx.r8.s64 + 27512;
	// stw r19,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r19.u32);
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// lwz r9,40(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// lwz r8,28(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// rlwinm r6,r18,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r18,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, r18.u32);
	// rlwinm r17,r9,1,31,31
	r17.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lwz r7,48(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// stw r19,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, r19.u32);
	// rlwinm r15,r8,1,31,31
	r15.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lbzx r11,r6,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// rlwinm r22,r7,23,30,31
	r22.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 23) & 0x3;
	// stw r9,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// rlwinm r16,r7,21,31,31
	r16.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 21) & 0x1;
	// stw r15,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, r15.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r22,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, r22.u32);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// stw r16,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r16.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stw r8,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// stw r19,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r19.u32);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// rlwinm r31,r17,1,0,30
	r31.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r14,r11,1
	r14.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// bl 0x82221288
	ctx.lr = 0x8240B678;
	sub_82221288(ctx, base);
	// lwz r9,48(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 48);
	// rlwinm r9,r9,0,21,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x600;
	// cmplwi cr6,r9,1536
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1536, ctx.xer);
	// lwz r28,148(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r29,144(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// subf r11,r31,r28
	ctx.r11.u64 = r28.u64 - r31.u64;
	// subf r10,r31,r29
	ctx.r10.u64 = r29.u64 - r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r17
	ctx.r11.u64 = r17.u64 - ctx.r11.u64;
	// subf r10,r10,r17
	ctx.r10.u64 = r17.u64 - ctx.r10.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// beq cr6,0x8240b6cc
	if (ctx.cr6.eq) goto loc_8240B6CC;
	// lwz r9,32(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 32);
	// rlwinm. r9,r9,0,21,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8240b6cc
	if (!ctx.cr0.eq) goto loc_8240B6CC;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x8240b6d8
	goto loc_8240B6D8;
loc_8240B6CC:
	// lwz r9,36(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 36);
	// rlwinm r9,r9,6,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3F;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8240B6D8:
	// addi r8,r24,1
	ctx.r8.s64 = r24.s64 + 1;
	// stw r9,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// stw r8,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// beq cr6,0x8240b760
	if (ctx.cr6.eq) goto loc_8240B760;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// blt cr6,0x8240b700
	if (ctx.cr6.lt) goto loc_8240B700;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8240B700:
	// subf. r9,r30,r9
	ctx.r9.u64 = ctx.r9.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x8240b720
	if (!ctx.cr0.gt) goto loc_8240B720;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// blt cr6,0x8240b718
	if (ctx.cr6.lt) goto loc_8240B718;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8240B718:
	// subf r9,r30,r9
	ctx.r9.u64 = ctx.r9.u64 - r30.u64;
	// b 0x8240b724
	goto loc_8240B724;
loc_8240B720:
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
loc_8240B724:
	// cmplw cr6,r9,r21
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r21.u32, ctx.xer);
	// bge cr6,0x8240b768
	if (!ctx.cr6.lt) goto loc_8240B768;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// blt cr6,0x8240b73c
	if (ctx.cr6.lt) goto loc_8240B73C;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8240B73C:
	// subf. r9,r30,r9
	ctx.r9.u64 = ctx.r9.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x8240b758
	if (!ctx.cr0.gt) goto loc_8240B758;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8240b750
	if (ctx.cr6.lt) goto loc_8240B750;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8240B750:
	// subf r21,r30,r11
	r21.u64 = ctx.r11.u64 - r30.u64;
	// b 0x8240b764
	goto loc_8240B764;
loc_8240B758:
	// mr r21,r19
	r21.u64 = r19.u64;
	// b 0x8240b764
	goto loc_8240B764;
loc_8240B760:
	// mr r21,r27
	r21.u64 = r27.u64;
loc_8240B764:
	// stw r21,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r21.u32);
loc_8240B768:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// stw r8,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// beq cr6,0x8240b810
	if (ctx.cr6.eq) goto loc_8240B810;
	// subf r11,r31,r28
	ctx.r11.u64 = r28.u64 - r31.u64;
	// subf r10,r31,r29
	ctx.r10.u64 = r29.u64 - r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r17
	ctx.r11.u64 = r17.u64 - ctx.r11.u64;
	// subf r10,r10,r17
	ctx.r10.u64 = r17.u64 - ctx.r10.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8240b7a8
	if (ctx.cr6.lt) goto loc_8240B7A8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8240B7A8:
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r10,r10
	temp.u8 = (ctx.r10.u32 + 0xFFFFFFFFu < ctx.r10.u32) | (ctx.r10.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r10.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8240b810
	if (!ctx.cr6.lt) goto loc_8240B810;
	// subf r11,r31,r28
	ctx.r11.u64 = r28.u64 - r31.u64;
	// subf r10,r31,r29
	ctx.r10.u64 = r29.u64 - r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r17
	ctx.r11.u64 = r17.u64 - ctx.r11.u64;
	// subf r10,r10,r17
	ctx.r10.u64 = r17.u64 - ctx.r10.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8240b7f8
	if (ctx.cr6.lt) goto loc_8240B7F8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8240B7F8:
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r10,r10
	temp.u8 = (ctx.r10.u32 + 0xFFFFFFFFu < ctx.r10.u32) | (ctx.r10.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r10.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
loc_8240B810:
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lwz r10,208(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// stw r25,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r25.u32);
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// stw r17,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8240a7d0
	ctx.lr = 0x8240B844;
	sub_8240A7D0(ctx, base);
	// lwz r23,604(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 604);
	// mr r31,r27
	r31.u64 = r27.u64;
	// stw r27,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r27.u32);
	// cmplw cr6,r27,r24
	ctx.cr6.compare<uint32_t>(r27.u32, r24.u32, ctx.xer);
	// bgt cr6,0x8240be04
	if (ctx.cr6.gt) goto loc_8240BE04;
	// lwz r24,612(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 612);
	// b 0x8240b87c
	goto loc_8240B87C;
loc_8240B860:
	// lwz r21,124(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// li r19,0
	r19.s64 = 0;
	// lwz r16,224(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r15,204(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r22,188(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r18,216(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r31,136(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
loc_8240B87C:
	// subfc r11,r21,r31
	ctx.xer.ca = r31.u32 >= r21.u32;
	ctx.r11.u64 = r31.u64 - r21.u64;
	// stw r17,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r17.u32);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// addi r7,r1,320
	ctx.r7.s64 = ctx.r1.s64 + 320;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8240a9d0
	ctx.lr = 0x8240B8B4;
	sub_8240A9D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8240bde4
	if (ctx.cr0.eq) goto loc_8240BDE4;
	// lwz r21,240(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// lwz r22,248(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// subf r11,r21,r22
	ctx.r11.u64 = r22.u64 - r21.u64;
	// stw r11,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// rlwinm r16,r11,31,1,30
	r16.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFE;
	// beq cr6,0x8240b904
	if (ctx.cr6.eq) goto loc_8240B904;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lwz r5,208(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82408568
	ctx.lr = 0x8240B8FC;
	sub_82408568(ctx, base);
	// lwz r29,144(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r28,148(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
loc_8240B904:
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// stw r19,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, r19.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240bdcc
	if (ctx.cr6.eq) goto loc_8240BDCC;
	// lwz r15,256(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r18,252(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r19,244(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r25,116(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
loc_8240B924:
	// addi r9,r1,264
	ctx.r9.s64 = ctx.r1.s64 + 264;
	// lwz r31,136(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// addi r8,r1,212
	ctx.r8.s64 = ctx.r1.s64 + 212;
	// lwz r4,168(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// addi r11,r1,232
	ctx.r11.s64 = ctx.r1.s64 + 232;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,220
	ctx.r10.s64 = ctx.r1.s64 + 220;
	// addi r9,r1,228
	ctx.r9.s64 = ctx.r1.s64 + 228;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r8,r1,268
	ctx.r8.s64 = ctx.r1.s64 + 268;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82222148
	ctx.lr = 0x8240B964;
	sub_82222148(ctx, base);
	// lwz r11,220(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// lwz r9,228(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r7,232(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r8,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// subf r27,r9,r7
	r27.u64 = ctx.r7.u64 - ctx.r9.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x8240b994
	if (ctx.cr6.gt) goto loc_8240B994;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8240B994:
	// lwz r10,212(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x8240b9ac
	if (ctx.cr6.gt) goto loc_8240B9AC;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8240B9AC:
	// lwz r9,196(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8240b9d0
	if (ctx.cr6.gt) goto loc_8240B9D0;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r10,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
loc_8240B9D0:
	// lwz r6,188(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r9,160(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r7,260(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// beq cr6,0x8240ba00
	if (ctx.cr6.eq) goto loc_8240BA00;
	// rlwinm r11,r18,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r19,30,2,26
	ctx.r10.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 30) & 0x3FFFFFE0;
	// addi r5,r11,31
	ctx.r5.s64 = ctx.r11.s64 + 31;
	// mullw r11,r10,r8
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// rlwinm r10,r5,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFE0;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// b 0x8240ba14
	goto loc_8240BA14;
loc_8240BA00:
	// addi r10,r7,3
	ctx.r10.s64 = ctx.r7.s64 + 3;
	// rlwinm r11,r15,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
loc_8240BA14:
	// lwz r5,156(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8240ba2c
	if (!ctx.cr6.lt) goto loc_8240BA2C;
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
loc_8240BA2C:
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8240ba3c
	if (!ctx.cr6.gt) goto loc_8240BA3C;
	// stw r10,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
loc_8240BA3C:
	// lwz r11,204(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240bccc
	if (ctx.cr6.eq) goto loc_8240BCCC;
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8240bb54
	if (!ctx.cr6.lt) goto loc_8240BB54;
	// mullw r11,r15,r9
	ctx.r11.s64 = int64_t(r15.s32) * int64_t(ctx.r9.s32);
	// add r26,r11,r27
	r26.u64 = ctx.r11.u64 + r27.u64;
	// cmplw cr6,r15,r7
	ctx.cr6.compare<uint32_t>(r15.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8240bdac
	if (!ctx.cr6.lt) goto loc_8240BDAC;
	// lwz r11,260(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r25,r19,30,2,31
	r25.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r24,r15,r11
	r24.u64 = ctx.r11.u64 - r15.u64;
loc_8240BA70:
	// mullw r10,r25,r8
	ctx.r10.s64 = int64_t(r25.s32) * int64_t(ctx.r8.s32);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// add r28,r10,r26
	r28.u64 = ctx.r10.u64 + r26.u64;
	// cmplw cr6,r19,r18
	ctx.cr6.compare<uint32_t>(r19.u32, r18.u32, ctx.xer);
	// bge cr6,0x8240bb40
	if (!ctx.cr6.lt) goto loc_8240BB40;
	// rlwinm r10,r21,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r9,612(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 612);
	// mullw r10,r10,r14
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r14.s32);
	// add r27,r10,r9
	r27.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8240BA94:
	// addi r31,r11,128
	r31.s64 = ctx.r11.s64 + 128;
	// add r10,r27,r28
	ctx.r10.u64 = r27.u64 + r28.u64;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bge cr6,0x8240bb28
	if (!ctx.cr6.lt) goto loc_8240BB28;
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// subf r30,r14,r10
	r30.u64 = ctx.r10.u64 - r14.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
loc_8240BAB8:
	// lwz r11,596(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r16,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r16.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// subf r11,r23,r11
	ctx.r11.u64 = ctx.r11.u64 - r23.u64;
	// lwz r10,588(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 588);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + r23.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x823ce080
	ctx.lr = 0x8240BAE4;
	sub_823CE080(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r21,r22
	ctx.cr6.compare<uint32_t>(r21.u32, r22.u32, ctx.xer);
	// add r23,r11,r23
	r23.u64 = ctx.r11.u64 + r23.u64;
	// bge cr6,0x8240bb1c
	if (!ctx.cr6.lt) goto loc_8240BB1C;
	// lwz r11,200(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// rlwinm r10,r9,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8240BB10:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthux r10,r30,r14
	ea = r30.u32 + r14.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	r30.u32 = ea;
	// bdnz 0x8240bb10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8240BB10;
loc_8240BB1C:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8240bab8
	if (!ctx.cr0.eq) goto loc_8240BAB8;
	// lwz r8,128(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
loc_8240BB28:
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// add r28,r10,r28
	r28.u64 = ctx.r10.u64 + r28.u64;
	// cmplw cr6,r31,r18
	ctx.cr6.compare<uint32_t>(r31.u32, r18.u32, ctx.xer);
	// blt cr6,0x8240ba94
	if (ctx.cr6.lt) goto loc_8240BA94;
	// lwz r9,160(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
loc_8240BB40:
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// add r26,r26,r9
	r26.u64 = r26.u64 + ctx.r9.u64;
	// bne 0x8240ba70
	if (!ctx.cr0.eq) goto loc_8240BA70;
	// lwz r24,612(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 612);
	// b 0x8240bcc4
	goto loc_8240BCC4;
loc_8240BB54:
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// beq cr6,0x8240bbfc
	if (ctx.cr6.eq) goto loc_8240BBFC;
	// mr r26,r19
	r26.u64 = r19.u64;
	// cmplw cr6,r19,r18
	ctx.cr6.compare<uint32_t>(r19.u32, r18.u32, ctx.xer);
	// bge cr6,0x8240bdac
	if (!ctx.cr6.lt) goto loc_8240BDAC;
loc_8240BB68:
	// lwz r11,596(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r16,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r16.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// subf r11,r23,r11
	ctx.r11.u64 = ctx.r11.u64 - r23.u64;
	// lwz r10,588(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 588);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + r23.u64;
	// bl 0x823ce080
	ctx.lr = 0x8240BB94;
	sub_823CE080(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r31,r21
	r31.u64 = r21.u64;
	// cmplw cr6,r21,r22
	ctx.cr6.compare<uint32_t>(r21.u32, r22.u32, ctx.xer);
	// add r23,r11,r23
	r23.u64 = ctx.r11.u64 + r23.u64;
	// bge cr6,0x8240bbec
	if (!ctx.cr6.lt) goto loc_8240BBEC;
	// rlwinm r28,r26,30,2,31
	r28.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r30,r25,-2
	r30.s64 = r25.s64 + -2;
loc_8240BBB0:
	// lwz r9,180(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r11,r31,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// add r4,r28,r9
	ctx.r4.u64 = r28.u64 + ctx.r9.u64;
	// lwz r5,140(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhzu r29,2(r30)
	ea = 2 + r30.u32;
	r29.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// bl 0x82409228
	ctx.lr = 0x8240BBD4;
	sub_82409228(ctx, base);
	// mullw r11,r3,r14
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(r14.s32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(r31.u32, r22.u32, ctx.xer);
	// sthx r29,r11,r24
	REX_STORE_U16(ctx.r11.u32 + r24.u32, r29.u16);
	// blt cr6,0x8240bbb0
	if (ctx.cr6.lt) goto loc_8240BBB0;
loc_8240BBEC:
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplw cr6,r26,r18
	ctx.cr6.compare<uint32_t>(r26.u32, r18.u32, ctx.xer);
	// blt cr6,0x8240bb68
	if (ctx.cr6.lt) goto loc_8240BB68;
	// b 0x8240bdac
	goto loc_8240BDAC;
loc_8240BBFC:
	// mr r26,r15
	r26.u64 = r15.u64;
	// cmplw cr6,r15,r7
	ctx.cr6.compare<uint32_t>(r15.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8240bdac
	if (!ctx.cr6.lt) goto loc_8240BDAC;
loc_8240BC08:
	// mr r25,r19
	r25.u64 = r19.u64;
	// cmplw cr6,r19,r18
	ctx.cr6.compare<uint32_t>(r19.u32, r18.u32, ctx.xer);
	// bge cr6,0x8240bcb4
	if (!ctx.cr6.lt) goto loc_8240BCB4;
loc_8240BC14:
	// lwz r11,596(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r16,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r16.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// subf r11,r23,r11
	ctx.r11.u64 = ctx.r11.u64 - r23.u64;
	// lwz r10,588(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 588);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + r23.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x823ce080
	ctx.lr = 0x8240BC40;
	sub_823CE080(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r31,r21
	r31.u64 = r21.u64;
	// cmplw cr6,r21,r22
	ctx.cr6.compare<uint32_t>(r21.u32, r22.u32, ctx.xer);
	// add r23,r11,r23
	r23.u64 = ctx.r11.u64 + r23.u64;
	// bge cr6,0x8240bca8
	if (!ctx.cr6.lt) goto loc_8240BCA8;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r28,r25,30,2,31
	r28.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r30,r11,-2
	r30.s64 = ctx.r11.s64 + -2;
loc_8240BC60:
	// lwz r9,180(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r11,r31,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// lwz r5,184(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// add r4,r28,r9
	ctx.r4.u64 = r28.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,192(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + r26.u64;
	// lwz r6,140(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lhzu r29,2(r30)
	ea = 2 + r30.u32;
	r29.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// bl 0x824087a8
	ctx.lr = 0x8240BC90;
	sub_824087A8(ctx, base);
	// mullw r11,r3,r14
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(r14.s32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(r31.u32, r22.u32, ctx.xer);
	// sthx r29,r11,r24
	REX_STORE_U16(ctx.r11.u32 + r24.u32, r29.u16);
	// blt cr6,0x8240bc60
	if (ctx.cr6.lt) goto loc_8240BC60;
loc_8240BCA8:
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmplw cr6,r25,r18
	ctx.cr6.compare<uint32_t>(r25.u32, r18.u32, ctx.xer);
	// blt cr6,0x8240bc14
	if (ctx.cr6.lt) goto loc_8240BC14;
loc_8240BCB4:
	// lwz r11,260(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8240bc08
	if (ctx.cr6.lt) goto loc_8240BC08;
loc_8240BCC4:
	// lwz r25,116(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x8240bdac
	goto loc_8240BDAC;
loc_8240BCCC:
	// mullw r11,r15,r9
	ctx.r11.s64 = int64_t(r15.s32) * int64_t(ctx.r9.s32);
	// add r28,r11,r27
	r28.u64 = ctx.r11.u64 + r27.u64;
	// cmplw cr6,r15,r7
	ctx.cr6.compare<uint32_t>(r15.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8240bdac
	if (!ctx.cr6.lt) goto loc_8240BDAC;
	// lwz r11,260(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r27,r19,30,2,31
	r27.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r26,r15,r11
	r26.u64 = ctx.r11.u64 - r15.u64;
loc_8240BCE8:
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r19,r18
	ctx.cr6.compare<uint32_t>(r19.u32, r18.u32, ctx.xer);
	// add r11,r27,r11
	ctx.r11.u64 = r27.u64 + ctx.r11.u64;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r31,r11,r28
	r31.u64 = ctx.r11.u64 + r28.u64;
	// bge cr6,0x8240bda0
	if (!ctx.cr6.lt) goto loc_8240BDA0;
	// subf r11,r19,r18
	ctx.r11.u64 = r18.u64 - r19.u64;
	// rlwinm r30,r21,30,2,31
	r30.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
loc_8240BD14:
	// lwz r11,596(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r16,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r16.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// subf r11,r23,r11
	ctx.r11.u64 = ctx.r11.u64 - r23.u64;
	// lwz r10,588(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 588);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + r23.u64;
	// bl 0x823ce080
	ctx.lr = 0x8240BD40;
	sub_823CE080(ctx, base);
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r21,r22
	ctx.cr6.compare<uint32_t>(r21.u32, r22.u32, ctx.xer);
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// add r23,r11,r23
	r23.u64 = ctx.r11.u64 + r23.u64;
	// mullw r11,r10,r14
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(r14.s32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// bge cr6,0x8240bd8c
	if (!ctx.cr6.lt) goto loc_8240BD8C;
	// lwz r9,200(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// addi r10,r25,-2
	ctx.r10.s64 = r25.s64 + -2;
	// subf r11,r14,r11
	ctx.r11.u64 = ctx.r11.u64 - r14.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8240BD80:
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthux r9,r11,r14
	ea = ctx.r11.u32 + r14.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8240bd80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8240BD80;
loc_8240BD8C:
	// lwz r8,128(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r31,r31,r8
	r31.u64 = r31.u64 + ctx.r8.u64;
	// bne 0x8240bd14
	if (!ctx.cr0.eq) goto loc_8240BD14;
	// lwz r9,160(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
loc_8240BDA0:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// add r28,r28,r9
	r28.u64 = r28.u64 + ctx.r9.u64;
	// bne 0x8240bce8
	if (!ctx.cr0.eq) goto loc_8240BCE8;
loc_8240BDAC:
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r10,152(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8240b924
	if (ctx.cr6.lt) goto loc_8240B924;
	// lwz r29,144(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r28,148(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
loc_8240BDCC:
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,556(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 556);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8240b860
	if (!ctx.cr6.gt) goto loc_8240B860;
loc_8240BDE4:
	// lwz r4,156(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8240be04
	if (!ctx.cr6.lt) goto loc_8240BE04;
	// subf r5,r4,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82216d48
	ctx.lr = 0x8240BE04;
	sub_82216D48(ctx, base);
loc_8240BE04:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8242A460) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8242a4e4
	if (ctx.cr6.eq) goto loc_8242A4E4;
	// lis r31,-32256
	r31.s64 = -2113929216;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f0,1992(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// beq cr6,0x8242a49c
	if (ctx.cr6.eq) goto loc_8242A49C;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8242A49C:
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mullw r6,r6,r7
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// lwz r31,20(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// stw r5,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// stw r31,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// stw r6,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// stw r7,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// stw r8,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242A4E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242A4E4:
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

DEFINE_REX_FUNC(sub_8242D770) {
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
	// bl 0x8242d020
	ctx.lr = 0x8242D790;
	sub_8242D020(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8242d7d4
	if (ctx.cr0.eq) goto loc_8242D7D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242d7c0
	if (ctx.cr6.eq) goto loc_8242D7C0;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// b 0x8242d7c4
	goto loc_8242D7C4;
loc_8242D7C0:
	// stw r3,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r3.u32);
loc_8242D7C4:
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// stw r3,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r11.u32);
loc_8242D7D4:
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

DEFINE_REX_FUNC(sub_8242FA18) {
	REX_FUNC_PROLOGUE();
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
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x822d4f00
	ctx.lr = 0x8242FA28;
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,32(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f12,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,16(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,20(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,24(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,28(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,32(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,36(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,40(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,44(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// bne cr6,0x8242fb8c
	if (!ctx.cr6.eq) goto loc_8242FB8C;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8242fcec
	if (ctx.cr6.eq) goto loc_8242FCEC;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// li r8,48
	ctx.r8.s64 = 48;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,216
	ctx.r9.s64 = 216;
loc_8242FA98:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// dcbt r10,r8
	// dcbt r11,r9
	// fmuls f31,f0,f12
	f31.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// fmadds f31,f13,f11,f31
	f31.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, f31.f64)));
	// beq cr6,0x8242fb30
	if (ctx.cr6.eq) goto loc_8242FB30;
	// fmuls f29,f0,f10
	f29.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f30,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f30.f64 = double(temp.f32);
	// fmuls f28,f0,f8
	f28.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f27,f0,f6
	f27.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmuls f26,f0,f4
	f26.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmadds f29,f13,f9,f29
	f29.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, f29.f64)));
	// fmadds f28,f13,f7,f28
	f28.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, f28.f64)));
	// fmadds f27,f13,f5,f27
	f27.f64 = double(float(std::fma(ctx.f13.f64, ctx.f5.f64, f27.f64)));
	// fmadds f26,f13,f3,f26
	f26.f64 = double(float(std::fma(ctx.f13.f64, ctx.f3.f64, f26.f64)));
	// fmadds f13,f13,f1,f0
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f1.f64, ctx.f0.f64)));
	// fadds f0,f31,f30
	ctx.f0.f64 = double(float(f31.f64 + f30.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fadds f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 + ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fadds f0,f28,f0
	ctx.f0.f64 = double(float(f28.f64 + ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fadds f0,f27,f0
	ctx.f0.f64 = double(float(f27.f64 + ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fadds f0,f26,f0
	ctx.f0.f64 = double(float(f26.f64 + ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x8242fb70
	goto loc_8242FB70;
loc_8242FB30:
	// fmuls f30,f0,f10
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f31,0(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f29,f0,f8
	f29.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f28,f0,f6
	f28.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmuls f27,f0,f4
	f27.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmadds f31,f13,f9,f30
	f31.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, f30.f64)));
	// stfsu f31,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmadds f31,f13,f7,f29
	f31.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, f29.f64)));
	// stfsu f31,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmadds f31,f13,f5,f28
	f31.f64 = double(float(std::fma(ctx.f13.f64, ctx.f5.f64, f28.f64)));
	// stfsu f31,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmadds f31,f13,f3,f27
	f31.f64 = double(float(std::fma(ctx.f13.f64, ctx.f3.f64, f27.f64)));
	// stfsu f31,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmadds f13,f13,f1,f0
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f1.f64, ctx.f0.f64)));
	// stfsu f13,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
loc_8242FB70:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8242fa98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242FA98;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x822d4f4c
	ctx.lr = 0x8242FB80;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8242FB8C:
	// lfs f31,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	f31.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f30,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	f30.f64 = double(temp.f32);
	// lfs f29,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	f29.f64 = double(temp.f32);
	// lfs f28,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	f28.f64 = double(temp.f32);
	// lfs f27,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	f27.f64 = double(temp.f32);
	// lfs f26,20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	f26.f64 = double(temp.f32);
	// lfs f25,24(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 24);
	f25.f64 = double(temp.f32);
	// lfs f24,28(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28);
	f24.f64 = double(temp.f32);
	// lfs f23,32(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 32);
	f23.f64 = double(temp.f32);
	// lfs f22,36(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 36);
	f22.f64 = double(temp.f32);
	// lfs f21,40(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 40);
	f21.f64 = double(temp.f32);
	// lfs f20,44(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 44);
	f20.f64 = double(temp.f32);
	// beq cr6,0x8242fcec
	if (ctx.cr6.eq) goto loc_8242FCEC;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// li r8,48
	ctx.r8.s64 = 48;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,216
	ctx.r9.s64 = 216;
loc_8242FBDC:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// dcbt r10,r8
	// dcbt r11,r9
	// fmuls f19,f0,f12
	f19.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// fmadds f19,f13,f11,f19
	f19.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, f19.f64)));
	// beq cr6,0x8242fc74
	if (ctx.cr6.eq) goto loc_8242FC74;
	// fmuls f17,f0,f10
	f17.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f18,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f18.f64 = double(temp.f32);
	// fmuls f16,f0,f8
	f16.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f15,f0,f6
	f15.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmuls f14,f0,f4
	f14.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmadds f17,f13,f9,f17
	f17.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, f17.f64)));
	// fmadds f16,f13,f7,f16
	f16.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, f16.f64)));
	// fmadds f15,f13,f5,f15
	f15.f64 = double(float(std::fma(ctx.f13.f64, ctx.f5.f64, f15.f64)));
	// fmadds f14,f13,f3,f14
	f14.f64 = double(float(std::fma(ctx.f13.f64, ctx.f3.f64, f14.f64)));
	// fmadds f13,f13,f1,f0
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f1.f64, ctx.f0.f64)));
	// fadds f0,f19,f18
	ctx.f0.f64 = double(float(f19.f64 + f18.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fadds f0,f17,f0
	ctx.f0.f64 = double(float(f17.f64 + ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fadds f0,f16,f0
	ctx.f0.f64 = double(float(f16.f64 + ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fadds f0,f15,f0
	ctx.f0.f64 = double(float(f15.f64 + ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fadds f0,f14,f0
	ctx.f0.f64 = double(float(f14.f64 + ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x8242fcb4
	goto loc_8242FCB4;
loc_8242FC74:
	// fmuls f18,f0,f10
	ctx.fpscr.disableFlushMode();
	f18.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f19,0(r11)
	temp.f32 = float(f19.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f17,f0,f8
	f17.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f16,f0,f6
	f16.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmuls f15,f0,f4
	f15.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmadds f19,f13,f9,f18
	f19.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, f18.f64)));
	// stfsu f19,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(f19.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmadds f19,f13,f7,f17
	f19.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, f17.f64)));
	// stfsu f19,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(f19.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmadds f19,f13,f5,f16
	f19.f64 = double(float(std::fma(ctx.f13.f64, ctx.f5.f64, f16.f64)));
	// stfsu f19,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(f19.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmadds f19,f13,f3,f15
	f19.f64 = double(float(std::fma(ctx.f13.f64, ctx.f3.f64, f15.f64)));
	// stfsu f19,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(f19.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmadds f13,f13,f1,f0
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f1.f64, ctx.f0.f64)));
	// stfsu f13,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
loc_8242FCB4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fadds f12,f31,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(f31.f64 + ctx.f12.f64));
	// fadds f11,f30,f11
	ctx.f11.f64 = double(float(f30.f64 + ctx.f11.f64));
	// fadds f10,f29,f10
	ctx.f10.f64 = double(float(f29.f64 + ctx.f10.f64));
	// fadds f9,f28,f9
	ctx.f9.f64 = double(float(f28.f64 + ctx.f9.f64));
	// fadds f8,f27,f8
	ctx.f8.f64 = double(float(f27.f64 + ctx.f8.f64));
	// fadds f7,f26,f7
	ctx.f7.f64 = double(float(f26.f64 + ctx.f7.f64));
	// fadds f6,f25,f6
	ctx.f6.f64 = double(float(f25.f64 + ctx.f6.f64));
	// fadds f5,f24,f5
	ctx.f5.f64 = double(float(f24.f64 + ctx.f5.f64));
	// fadds f4,f23,f4
	ctx.f4.f64 = double(float(f23.f64 + ctx.f4.f64));
	// fadds f3,f22,f3
	ctx.f3.f64 = double(float(f22.f64 + ctx.f3.f64));
	// fadds f2,f21,f2
	ctx.f2.f64 = double(float(f21.f64 + ctx.f2.f64));
	// fadds f1,f20,f1
	ctx.f1.f64 = double(float(f20.f64 + ctx.f1.f64));
	// bdnz 0x8242fbdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242FBDC;
loc_8242FCEC:
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x822d4f4c
	ctx.lr = 0x8242FCF4;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8243DFC0) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r5,12
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 12, ctx.xer);
	// beq cr6,0x8243dfdc
	if (ctx.cr6.eq) goto loc_8243DFDC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_8243DFDC:
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,260(r11)
	REX_STORE_U32(ctx.r11.u32 + 260, ctx.r10.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,264(r11)
	REX_STORE_U32(ctx.r11.u32 + 264, ctx.r10.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,268(r11)
	REX_STORE_U32(ctx.r11.u32 + 268, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8243F638) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e54
	ctx.lr = 0x8243F640;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,184(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// li r17,0
	r17.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243f67c
	if (ctx.cr6.eq) goto loc_8243F67C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8243fb38
	goto loc_8243FB38;
loc_8243F67C:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// lis r9,16383
	ctx.r9.s64 = 1073676288;
	// lis r8,8343
	ctx.r8.s64 = 546766848;
	// ori r15,r10,14
	r15.u64 = ctx.r10.u64 | 14;
	// ori r19,r9,65535
	r19.u64 = ctx.r9.u64 | 65535;
	// li r16,-1
	r16.s64 = -1;
	// ori r18,r8,10
	r18.u64 = ctx.r8.u64 | 10;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// addi r20,r11,7712
	r20.s64 = ctx.r11.s64 + 7712;
	// blt cr6,0x8243f6d4
	if (ctx.cr6.lt) goto loc_8243F6D4;
	// cmplwi cr6,r30,64
	ctx.cr6.compare<uint32_t>(r30.u32, 64, ctx.xer);
	// bgt cr6,0x8243f6d4
	if (ctx.cr6.gt) goto loc_8243F6D4;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(r27.u32, 1, ctx.xer);
	// blt cr6,0x8243f6d4
	if (ctx.cr6.lt) goto loc_8243F6D4;
	// cmplwi cr6,r27,64
	ctx.cr6.compare<uint32_t>(r27.u32, 64, ctx.xer);
	// bgt cr6,0x8243f6d4
	if (ctx.cr6.gt) goto loc_8243F6D4;
	// lwz r11,268(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8243f6e0
	if (ctx.cr6.eq) goto loc_8243F6E0;
	// cmpwi cr6,r21,3
	ctx.cr6.compare<int32_t>(r21.s32, 3, ctx.xer);
	// beq cr6,0x8243f6e0
	if (ctx.cr6.eq) goto loc_8243F6E0;
loc_8243F6D4:
	// lis r17,-30569
	r17.s64 = -2003369984;
	// ori r17,r17,1
	r17.u64 = r17.u64 | 1;
	// b 0x8243f7cc
	goto loc_8243F7CC;
loc_8243F6E0:
	// mullw r29,r30,r27
	r29.s64 = int64_t(r30.s32) * int64_t(r27.s32);
	// stw r24,196(r31)
	REX_STORE_U32(r31.u32 + 196, r24.u32);
	// stw r23,200(r31)
	REX_STORE_U32(r31.u32 + 200, r23.u32);
	// cmplw cr6,r29,r19
	ctx.cr6.compare<uint32_t>(r29.u32, r19.u32, ctx.xer);
	// rlwinm r4,r29,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8243f6fc
	if (!ctx.cr6.gt) goto loc_8243F6FC;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
loc_8243F6FC:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// bl 0x8242c3b0
	ctx.lr = 0x8243F70C;
	sub_8242C3B0(ctx, base);
	// stw r3,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8243f7c8
	if (ctx.cr0.eq) goto loc_8243F7C8;
	// cmplw cr6,r29,r19
	ctx.cr6.compare<uint32_t>(r29.u32, r19.u32, ctx.xer);
	// rlwinm r4,r29,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8243f728
	if (!ctx.cr6.gt) goto loc_8243F728;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
loc_8243F728:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// bl 0x8242c3b0
	ctx.lr = 0x8243F738;
	sub_8242C3B0(ctx, base);
	// stw r3,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8243f7c8
	if (ctx.cr0.eq) goto loc_8243F7C8;
	// cmplw cr6,r29,r19
	ctx.cr6.compare<uint32_t>(r29.u32, r19.u32, ctx.xer);
	// rlwinm r4,r29,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8243f754
	if (!ctx.cr6.gt) goto loc_8243F754;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
loc_8243F754:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// bl 0x8242c3b0
	ctx.lr = 0x8243F764;
	sub_8242C3B0(ctx, base);
	// stw r3,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8243f7c8
	if (ctx.cr0.eq) goto loc_8243F7C8;
	// cmplw cr6,r29,r19
	ctx.cr6.compare<uint32_t>(r29.u32, r19.u32, ctx.xer);
	// rlwinm r4,r29,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8243f780
	if (!ctx.cr6.gt) goto loc_8243F780;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
loc_8243F780:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// bl 0x8242c3b0
	ctx.lr = 0x8243F790;
	sub_8242C3B0(ctx, base);
	// stw r3,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8243f7c8
	if (ctx.cr0.eq) goto loc_8243F7C8;
	// cmplw cr6,r29,r19
	ctx.cr6.compare<uint32_t>(r29.u32, r19.u32, ctx.xer);
	// rlwinm r4,r29,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8243f7ac
	if (!ctx.cr6.gt) goto loc_8243F7AC;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
loc_8243F7AC:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// bl 0x8242c3b0
	ctx.lr = 0x8243F7BC;
	sub_8242C3B0(ctx, base);
	// stw r3,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8243f7cc
	if (!ctx.cr0.eq) goto loc_8243F7CC;
loc_8243F7C8:
	// mr r17,r15
	r17.u64 = r15.u64;
loc_8243F7CC:
	// li r28,0
	r28.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// blt cr6,0x8243fb2c
	if (ctx.cr6.lt) goto loc_8243FB2C;
	// addi r22,r31,112
	r22.s64 = r31.s64 + 112;
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// stw r27,64(r31)
	REX_STORE_U32(r31.u32 + 64, r27.u32);
	// stw r22,184(r31)
	REX_STORE_U32(r31.u32 + 184, r22.u32);
	// bne cr6,0x8243f800
	if (!ctx.cr6.eq) goto loc_8243F800;
	// clrlwi r3,r30,16
	ctx.r3.u64 = r30.u32 & 0xFFFF;
	// bl 0x8243a368
	ctx.lr = 0x8243F7FC;
	sub_8243A368(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_8243F800:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x8243f814
	if (!ctx.cr6.eq) goto loc_8243F814;
	// clrlwi r3,r27,16
	ctx.r3.u64 = r27.u32 & 0xFFFF;
	// bl 0x8243a368
	ctx.lr = 0x8243F810;
	sub_8243A368(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_8243F814:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// lwz r7,128(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 128);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8243ee58
	ctx.lr = 0x8243F82C;
	sub_8243EE58(ctx, base);
	// mr. r17,r3
	r17.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r17.s32, 0, ctx.xer);
	// blt 0x8243fb2c
	if (ctx.cr0.lt) goto loc_8243FB2C;
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// li r26,4
	r26.s64 = 4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8243f84c
	if (ctx.cr6.eq) goto loc_8243F84C;
	// mr r28,r26
	r28.u64 = r26.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_8243F84C:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// bne cr6,0x8243f8d4
	if (!ctx.cr6.eq) goto loc_8243F8D4;
	// ori r28,r28,3
	r28.u64 = r28.u64 | 3;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8243f8d4
	if (ctx.cr6.eq) goto loc_8243F8D4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
loc_8243F870:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8243f8c4
	if (ctx.cr6.eq) goto loc_8243F8C4;
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 128);
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8243F884:
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x8243f8a8
	if (ctx.cr6.eq) goto loc_8243F8A8;
	// lfsx f13,r7,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8243f8bc
	if (ctx.cr6.eq) goto loc_8243F8BC;
	// rlwinm r28,r28,0,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFC;
	// b 0x8243f8bc
	goto loc_8243F8BC;
loc_8243F8A8:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r7,r10
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// beq cr6,0x8243f8bc
	if (ctx.cr6.eq) goto loc_8243F8BC;
	// rlwinm r28,r28,0,0,30
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
loc_8243F8BC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8243f884
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243F884;
loc_8243F8C4:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// cmplw cr6,r8,r27
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r27.u32, ctx.xer);
	// blt cr6,0x8243f870
	if (ctx.cr6.lt) goto loc_8243F870;
loc_8243F8D4:
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(r21.s32, 1, ctx.xer);
	// stw r28,132(r31)
	REX_STORE_U32(r31.u32 + 132, r28.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bne cr6,0x8243fa40
	if (!ctx.cr6.eq) goto loc_8243FA40;
	// cmplwi cr6,r24,4
	ctx.cr6.compare<uint32_t>(r24.u32, 4, ctx.xer);
	// bne cr6,0x8243f97c
	if (!ctx.cr6.eq) goto loc_8243F97C;
	// cmplwi cr6,r23,32
	ctx.cr6.compare<uint32_t>(r23.u32, 32, ctx.xer);
	// bne cr6,0x8243f924
	if (!ctx.cr6.eq) goto loc_8243F924;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x82434088
	ctx.lr = 0x8243F904;
	sub_82434088(ctx, base);
	// stw r3,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r3.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x82434088
	ctx.lr = 0x8243F91C;
	sub_82434088(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8243fa34
	goto loc_8243FA34;
loc_8243F924:
	// cmplwi cr6,r23,24
	ctx.cr6.compare<uint32_t>(r23.u32, 24, ctx.xer);
	// bne cr6,0x8243f954
	if (!ctx.cr6.eq) goto loc_8243F954;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x82434088
	ctx.lr = 0x8243F934;
	sub_82434088(ctx, base);
	// stw r3,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r3.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x82434088
	ctx.lr = 0x8243F94C;
	sub_82434088(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8243fa34
	goto loc_8243FA34;
loc_8243F954:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82434088
	ctx.lr = 0x8243F95C;
	sub_82434088(ctx, base);
	// stw r3,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r3.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82434088
	ctx.lr = 0x8243F974;
	sub_82434088(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8243fa34
	goto loc_8243FA34;
loc_8243F97C:
	// cmplwi cr6,r24,3
	ctx.cr6.compare<uint32_t>(r24.u32, 3, ctx.xer);
	// bne cr6,0x8243f9e0
	if (!ctx.cr6.eq) goto loc_8243F9E0;
	// cmplwi cr6,r23,24
	ctx.cr6.compare<uint32_t>(r23.u32, 24, ctx.xer);
	// bne cr6,0x8243f9b8
	if (!ctx.cr6.eq) goto loc_8243F9B8;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82434088
	ctx.lr = 0x8243F994;
	sub_82434088(ctx, base);
	// stw r3,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r3.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82434088
	ctx.lr = 0x8243F9AC;
	sub_82434088(ctx, base);
	// stw r3,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r3.u32);
	// stw r26,52(r31)
	REX_STORE_U32(r31.u32 + 52, r26.u32);
	// b 0x8243faa4
	goto loc_8243FAA4;
loc_8243F9B8:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82434088
	ctx.lr = 0x8243F9C0;
	sub_82434088(ctx, base);
	// stw r3,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r3.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82434088
	ctx.lr = 0x8243F9D8;
	sub_82434088(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8243fa34
	goto loc_8243FA34;
loc_8243F9E0:
	// cmplwi cr6,r24,2
	ctx.cr6.compare<uint32_t>(r24.u32, 2, ctx.xer);
	// bne cr6,0x8243fa10
	if (!ctx.cr6.eq) goto loc_8243FA10;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82434088
	ctx.lr = 0x8243F9F0;
	sub_82434088(ctx, base);
	// stw r3,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r3.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82434088
	ctx.lr = 0x8243FA08;
	sub_82434088(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8243fa34
	goto loc_8243FA34;
loc_8243FA10:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82434088
	ctx.lr = 0x8243FA18;
	sub_82434088(ctx, base);
	// stw r3,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r3.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82434088
	ctx.lr = 0x8243FA30;
	sub_82434088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8243FA34:
	// stw r3,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r3.u32);
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// b 0x8243faa4
	goto loc_8243FAA4;
loc_8243FA40:
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x82434088
	ctx.lr = 0x8243FA48;
	sub_82434088(ctx, base);
	// stw r3,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r3.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x82434088
	ctx.lr = 0x8243FA60;
	sub_82434088(ctx, base);
	// lwz r11,268(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 268);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r3,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// beq cr6,0x8243fa9c
	if (ctx.cr6.eq) goto loc_8243FA9C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824535f0
	ctx.lr = 0x8243FA88;
	sub_824535F0(ctx, base);
	// stw r3,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824525e8
	ctx.lr = 0x8243FA94;
	sub_824525E8(ctx, base);
	// stw r3,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r3.u32);
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
loc_8243FA9C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r11.u32);
loc_8243FAA4:
	// lwz r11,268(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8243fae8
	if (ctx.cr6.eq) goto loc_8243FAE8;
	// lwz r11,324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// mullw r11,r30,r11
	ctx.r11.s64 = int64_t(r30.s32) * int64_t(ctx.r11.s32);
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r19.u32, ctx.xer);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8243fac8
	if (!ctx.cr6.gt) goto loc_8243FAC8;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
loc_8243FAC8:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// bl 0x8242c3b0
	ctx.lr = 0x8243FAD8;
	sub_8242C3B0(ctx, base);
	// stw r3,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8243fae8
	if (!ctx.cr0.eq) goto loc_8243FAE8;
	// mr r17,r15
	r17.u64 = r15.u64;
loc_8243FAE8:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// blt cr6,0x8243fb2c
	if (ctx.cr6.lt) goto loc_8243FB2C;
	// lwz r11,268(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8243fb4c
	if (ctx.cr6.eq) goto loc_8243FB4C;
	// cmplw cr6,r30,r19
	ctx.cr6.compare<uint32_t>(r30.u32, r19.u32, ctx.xer);
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8243fb0c
	if (!ctx.cr6.gt) goto loc_8243FB0C;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
loc_8243FB0C:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// bl 0x8242c3b0
	ctx.lr = 0x8243FB1C;
	sub_8242C3B0(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8243fb40
	if (!ctx.cr0.eq) goto loc_8243FB40;
loc_8243FB28:
	// mr r17,r15
	r17.u64 = r15.u64;
loc_8243FB2C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243f378
	ctx.lr = 0x8243FB34;
	sub_8243F378(ctx, base);
loc_8243FB34:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
loc_8243FB38:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea4
	return;
loc_8243FB40:
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x8243FB4C;
	sub_822D5870(ctx, base);
loc_8243FB4C:
	// lwz r11,268(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8243fb90
	if (ctx.cr6.eq) goto loc_8243FB90;
	// cmplw cr6,r30,r19
	ctx.cr6.compare<uint32_t>(r30.u32, r19.u32, ctx.xer);
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8243fb68
	if (!ctx.cr6.gt) goto loc_8243FB68;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
loc_8243FB68:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// bl 0x8242c3b0
	ctx.lr = 0x8243FB78;
	sub_8242C3B0(ctx, base);
	// stw r3,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8243fb28
	if (ctx.cr0.eq) goto loc_8243FB28;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x8243FB90;
	sub_822D5870(ctx, base);
loc_8243FB90:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,124(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 124);
	// stw r28,240(r31)
	REX_STORE_U32(r31.u32 + 240, r28.u32);
	// mullw r9,r30,r27
	ctx.r9.s64 = int64_t(r30.s32) * int64_t(r27.s32);
	// stw r26,0(r22)
	REX_STORE_U32(r22.u32 + 0, r26.u32);
	// stw r26,100(r31)
	REX_STORE_U32(r31.u32 + 100, r26.u32);
	// lwz r4,128(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r10.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 116, temp.u32);
	// stw r10,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// rlwinm r30,r9,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,152(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 152);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x822091c8
	ctx.lr = 0x8243FBE4;
	sub_822091C8(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// lwz r10,132(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 132);
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,0(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 0);
	// lfs f13,120(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stfs f13,144(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// lwz r4,128(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 128);
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
	// stw r10,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r10.u32);
	// stw r9,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r9.u32);
	// lwz r3,176(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 176);
	// bl 0x822091c8
	ctx.lr = 0x8243FC1C;
	sub_822091C8(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// lwz r10,132(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 132);
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,0(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 0);
	// lfs f13,120(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 164, temp.u32);
	// stfs f13,168(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
	// stw r11,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r11.u32);
	// stw r10,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r10.u32);
	// stw r9,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r9.u32);
	// b 0x8243fb34
	goto loc_8243FB34;
}

DEFINE_REX_FUNC(sub_8245D8F0) {
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
	// bl 0x8245d5c0
	ctx.lr = 0x8245D910;
	sub_8245D5C0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8245d920
	if (ctx.cr0.eq) goto loc_8245D920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x8245D920;
	sub_82473600(ctx, base);
loc_8245D920:
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

DEFINE_REX_FUNC(sub_8245E1B0) {
	REX_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x8245f278
	sub_8245F278(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8245E250) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8245e2c8
	sub_8245E2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8245E2C8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,30944
	ctx.r11.s64 = ctx.r11.s64 + 30944;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8245f480
	ctx.lr = 0x8245E300;
	sub_8245F480(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8245e310
	if (ctx.cr0.eq) goto loc_8245E310;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x8245E310;
	sub_82473600(ctx, base);
loc_8245E310:
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

DEFINE_REX_FUNC(sub_8245EDA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8245EDA8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245EDC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8245ede0
	if (!ctx.cr6.eq) goto loc_8245EDE0;
	// lwz r3,148(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 148);
	// bl 0x824745d8
	ctx.lr = 0x8245EDDC;
	sub_824745D8(ctx, base);
	// b 0x8245ee44
	goto loc_8245EE44;
loc_8245EDE0:
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
	ctx.lr = 0x8245EDFC;
	sub_8242C3B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8245ee10
	if (!ctx.cr0.eq) goto loc_8245EE10;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x8245ee44
	goto loc_8245EE44;
loc_8245EE10:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// bl 0x8245f9d8
	ctx.lr = 0x8245EE34;
	sub_8245F9D8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x8245ee44
	if (!ctx.cr0.lt) goto loc_8245EE44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x8245EE44;
	sub_82473600(ctx, base);
loc_8245EE44:
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245EE58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_824601D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x824601D8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// bl 0x82473900
	ctx.lr = 0x82460210;
	sub_82473900(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8246024c
	if (ctx.cr0.lt) goto loc_8246024C;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lwz r8,228(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,220(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824600f0
	ctx.lr = 0x82460238;
	sub_824600F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8246024c
	if (ctx.cr0.lt) goto loc_8246024C;
	// lwz r11,212(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8246024C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82463148) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r5,78
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 78, ctx.xer);
	// bgt cr6,0x824631b8
	if (ctx.cr6.gt) goto loc_824631B8;
	// beq cr6,0x8246319c
	if (ctx.cr6.eq) goto loc_8246319C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82463180
	if (ctx.cr6.eq) goto loc_82463180;
	// cmpwi cr6,r5,61
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 61, ctx.xer);
	// bne cr6,0x824631c0
	if (!ctx.cr6.eq) goto loc_824631C0;
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// addi r9,r11,23600
	ctx.r9.s64 = ctx.r11.s64 + 23600;
	// addi r8,r10,23544
	ctx.r8.s64 = ctx.r10.s64 + 23544;
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_82463180:
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// addi r9,r11,23656
	ctx.r9.s64 = ctx.r11.s64 + 23656;
	// addi r8,r10,10416
	ctx.r8.s64 = ctx.r10.s64 + 10416;
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_8246319C:
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// addi r9,r11,23616
	ctx.r9.s64 = ctx.r11.s64 + 23616;
	// addi r8,r10,23560
	ctx.r8.s64 = ctx.r10.s64 + 23560;
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_824631B8:
	// cmpwi cr6,r5,94
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 94, ctx.xer);
	// beq cr6,0x824631dc
	if (ctx.cr6.eq) goto loc_824631DC;
loc_824631C0:
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// addi r9,r11,10288
	ctx.r9.s64 = ctx.r11.s64 + 10288;
	// addi r8,r10,23224
	ctx.r8.s64 = ctx.r10.s64 + 23224;
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_824631DC:
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// addi r9,r11,10376
	ctx.r9.s64 = ctx.r11.s64 + 10376;
	// addi r8,r10,10264
	ctx.r8.s64 = ctx.r10.s64 + 10264;
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824650D8) {
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
	ctx.lr = 0x824650E0;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r17,r6
	r17.u64 = ctx.r6.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// ble cr6,0x82465230
	if (!ctx.cr6.gt) goto loc_82465230;
	// addic. r15,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	r15.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(r15.s32, 0, ctx.xer);
	// li r23,0
	r23.s64 = 0;
	// ble 0x82465230
	if (!ctx.cr0.gt) goto loc_82465230;
	// mullw r27,r15,r6
	r27.s64 = int64_t(r15.s32) * int64_t(ctx.r6.s32);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// add r20,r11,r4
	r20.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// rlwinm r22,r5,2,0,29
	r22.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r28,0
	r28.s64 = 0;
	// rlwinm r14,r6,2,0,29
	r14.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// addi r19,r10,6328
	r19.s64 = ctx.r10.s64 + 6328;
	// addi r18,r11,6072
	r18.s64 = ctx.r11.s64 + 6072;
loc_8246513C:
	// lbzx r11,r23,r16
	ctx.r11.u64 = REX_LOAD_U8(r23.u32 + r16.u32);
	// addi r10,r18,128
	ctx.r10.s64 = r18.s64 + 128;
	// addi r9,r19,128
	ctx.r9.s64 = r19.s64 + 128;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwzx r29,r7,r10
	r29.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwzx r31,r7,r9
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x82465168;
	sub_822D4FA0(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82465178;
	sub_822D4FA0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x8246521c
	if (!ctx.cr6.gt) goto loc_8246521C;
	// neg r11,r31
	ctx.r11.s64 = static_cast<int64_t>(-r31.u64);
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// extsw r5,r31
	ctx.r5.s64 = r31.s32;
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// extsw r9,r29
	ctx.r9.s64 = r29.s32;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// subf r8,r25,r21
	ctx.r8.u64 = r21.u64 - r25.u64;
loc_824651A0:
	// lwzx r7,r8,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r3,r28,r10
	ctx.r3.u64 = r28.u64 + ctx.r10.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r31,r27,r10
	r31.u64 = r27.u64 + ctx.r10.u64;
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// mulld r7,r7,r9
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r9.u64);
	// mulld r6,r6,r5
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r5.u64);
	// sradi r7,r7,30
	ctx.xer.ca = (ctx.r7.s64 < 0) & ((ctx.r7.u64 & 0x3FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s64 >> 30;
	// sradi r6,r6,30
	ctx.xer.ca = (ctx.r6.s64 < 0) & ((ctx.r6.u64 & 0x3FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s64 >> 30;
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r7,r3,r30
	REX_STORE_U32(ctx.r3.u32 + r30.u32, ctx.r7.u32);
	// lwzx r6,r8,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// mulld r3,r7,r9
	ctx.r3.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r9.u64);
	// mulld r7,r6,r4
	ctx.r7.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r4.u64);
	// sradi r6,r3,30
	ctx.xer.ca = (ctx.r3.s64 < 0) & ((ctx.r3.u64 & 0x3FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r3.s64 >> 30;
	// sradi r3,r7,30
	ctx.xer.ca = (ctx.r7.s64 < 0) & ((ctx.r7.u64 & 0x3FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r7.s64 >> 30;
	// extsw r7,r6
	ctx.r7.s64 = ctx.r6.s32;
	// extsw r6,r3
	ctx.r6.s64 = ctx.r3.s32;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stwx r7,r31,r30
	REX_STORE_U32(r31.u32 + r30.u32, ctx.r7.u32);
	// bdnz 0x824651a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824651A0;
loc_8246521C:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// add r28,r28,r17
	r28.u64 = r28.u64 + r17.u64;
	// add r24,r14,r24
	r24.u64 = r14.u64 + r24.u64;
	// cmpw cr6,r23,r15
	ctx.cr6.compare<int32_t>(r23.s32, r15.s32, ctx.xer);
	// blt cr6,0x8246513c
	if (ctx.cr6.lt) goto loc_8246513C;
loc_82465230:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8246CB88) {
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
	ctx.lr = 0x8246CB90;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,0(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r25,r29
	r25.u64 = r29.u64;
	// lhz r11,34(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 34);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8246cc58
	if (!ctx.cr6.eq) goto loc_8246CC58;
	// lwz r11,744(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 744);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8246cc58
	if (ctx.cr6.eq) goto loc_8246CC58;
	// li r24,1
	r24.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r24,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, r24.u32);
	// stw r24,572(r26)
	REX_STORE_U32(r26.u32 + 572, r24.u32);
	// lwz r30,120(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// stw r24,0(r30)
	REX_STORE_U32(r30.u32 + 0, r24.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lhz r11,34(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 34);
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x822d5870
	ctx.lr = 0x8246CBE8;
	sub_822D5870(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// stw r24,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r24.u32);
	// stw r29,8(r30)
	REX_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r24,12(r30)
	REX_STORE_U32(r30.u32 + 12, r24.u32);
	// stw r29,16(r30)
	REX_STORE_U32(r30.u32 + 16, r29.u32);
	// stw r24,20(r30)
	REX_STORE_U32(r30.u32 + 20, r24.u32);
	// bl 0x822d5870
	ctx.lr = 0x8246CC10;
	sub_822D5870(ctx, base);
	// lhz r9,34(r26)
	ctx.r9.u64 = REX_LOAD_U16(r26.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,148(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 148);
	// mullw r8,r9,r9
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x8246CC28;
	sub_822D5870(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r4,148(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 148);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r24,12(r30)
	REX_STORE_U32(r30.u32 + 12, r24.u32);
	// stw r6,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r6.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,1992(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stw r5,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r5.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eb4
	return;
loc_8246CC58:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x8246d054
	if (ctx.cr6.eq) goto loc_8246D054;
	// li r24,1
	r24.s64 = 1;
	// li r23,2
	r23.s64 = 2;
	// li r22,3
	r22.s64 = 3;
	// li r19,4
	r19.s64 = 4;
	// li r20,5
	r20.s64 = 5;
	// li r21,8
	r21.s64 = 8;
loc_8246CC7C:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x8246d048
	if (ctx.cr6.gt) goto loc_8246D048;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8246cd94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8246CD94;
	// bdzf 4*cr6+eq,0x8246cdc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8246CDC8;
	// bdzf 4*cr6+eq,0x8246ce6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8246CE6C;
	// bdzf 4*cr6+eq,0x8246cef8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8246CEF8;
	// bdzf 4*cr6+eq,0x8246cf80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8246CF80;
	// bdzf 4*cr6+eq,0x8246cf80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8246CF80;
	// bdzf 4*cr6+eq,0x8246d048
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8246D048;
	// bne cr6,0x8246cfcc
	if (!ctx.cr6.eq) goto loc_8246CFCC;
	// stw r29,96(r31)
	REX_STORE_U32(r31.u32 + 96, r29.u32);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// lhz r10,580(r26)
	ctx.r10.u64 = REX_LOAD_U16(r26.u32 + 580);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stw r29,116(r31)
	REX_STORE_U32(r31.u32 + 116, r29.u32);
	// stw r29,100(r31)
	REX_STORE_U32(r31.u32 + 100, r29.u32);
	// stw r29,108(r31)
	REX_STORE_U32(r31.u32 + 108, r29.u32);
	// stw r29,104(r31)
	REX_STORE_U32(r31.u32 + 104, r29.u32);
	// stw r9,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r9.u32);
	// stw r29,112(r31)
	REX_STORE_U32(r31.u32 + 112, r29.u32);
	// lhz r8,34(r26)
	ctx.r8.u64 = REX_LOAD_U16(r26.u32 + 34);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8246cd04
	if (ctx.cr6.eq) goto loc_8246CD04;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8246CCE8:
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r29,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r29.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lhz r8,34(r26)
	ctx.r8.u64 = REX_LOAD_U16(r26.u32 + 34);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8246cce8
	if (ctx.cr6.lt) goto loc_8246CCE8;
loc_8246CD04:
	// lhz r11,580(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 580);
	// mr r27,r29
	r27.u64 = r29.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8246cd8c
	if (!ctx.cr6.gt) goto loc_8246CD8C;
	// mr r28,r29
	r28.u64 = r29.u64;
loc_8246CD1C:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// stwx r29,r11,r28
	REX_STORE_U32(ctx.r11.u32 + r28.u32, r29.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lhz r11,34(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 34);
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x822d5870
	ctx.lr = 0x8246CD3C;
	sub_822D5870(ctx, base);
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,8(r30)
	REX_STORE_U32(r30.u32 + 8, r29.u32);
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// stw r29,12(r30)
	REX_STORE_U32(r30.u32 + 12, r29.u32);
	// stw r29,16(r30)
	REX_STORE_U32(r30.u32 + 16, r29.u32);
	// stw r29,20(r30)
	REX_STORE_U32(r30.u32 + 20, r29.u32);
	// bl 0x822d5870
	ctx.lr = 0x8246CD5C;
	sub_822D5870(ctx, base);
	// lhz r10,34(r26)
	ctx.r10.u64 = REX_LOAD_U16(r26.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,148(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 148);
	// mullw r9,r10,r10
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x8246CD74;
	sub_822D5870(ctx, base);
	// lhz r8,580(r26)
	ctx.r8.u64 = REX_LOAD_U16(r26.u32 + 580);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// addi r28,r28,152
	r28.s64 = r28.s64 + 152;
	// cmpw cr6,r27,r7
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8246cd1c
	if (ctx.cr6.lt) goto loc_8246CD1C;
loc_8246CD8C:
	// stw r24,88(r31)
	REX_STORE_U32(r31.u32 + 88, r24.u32);
	// b 0x8246d048
	goto loc_8246D048;
loc_8246CD94:
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x824658f8
	ctx.lr = 0x8246CDA8;
	sub_824658F8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246d054
	if (ctx.cr6.lt) goto loc_8246D054;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r9.u32);
	// b 0x8246d044
	goto loc_8246D044;
loc_8246CDC8:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8246cdf4
	if (!ctx.cr6.eq) goto loc_8246CDF4;
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8246d060
	if (ctx.cr6.eq) goto loc_8246D060;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8246cdf4
	if (!ctx.cr6.eq) goto loc_8246CDF4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8246d07c
	if (ctx.cr6.eq) goto loc_8246D07C;
loc_8246CDF4:
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x8246e538
	ctx.lr = 0x8246CE00;
	sub_8246E538(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246d054
	if (ctx.cr6.lt) goto loc_8246D054;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246c820
	ctx.lr = 0x8246CE14;
	sub_8246C820(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246d054
	if (ctx.cr6.lt) goto loc_8246D054;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246c240
	ctx.lr = 0x8246CE28;
	sub_8246C240(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246d054
	if (ctx.cr6.lt) goto loc_8246D054;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mulli r9,r11,152
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(152));
	// lwzx r11,r9,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r29,108(r31)
	REX_STORE_U32(r31.u32 + 108, r29.u32);
	// stw r29,112(r31)
	REX_STORE_U32(r31.u32 + 112, r29.u32);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r22,88(r31)
	REX_STORE_U32(r31.u32 + 88, r22.u32);
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// stw r5,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r5.u32);
	// b 0x8246d048
	goto loc_8246D048;
loc_8246CE6C:
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mulli r10,r10,152
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(152));
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8246cef0
	if (!ctx.cr6.eq) goto loc_8246CEF0;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8246cef0
	if (!ctx.cr6.lt) goto loc_8246CEF0;
	// addi r28,r31,224
	r28.s64 = r31.s64 + 224;
loc_8246CE9C:
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824658f8
	ctx.lr = 0x8246CEB0;
	sub_824658F8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246d054
	if (ctx.cr6.lt) goto loc_8246D054;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,136(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 136);
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 108);
	// addi r8,r11,-32
	ctx.r8.s64 = ctx.r11.s64 + -32;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// stbx r7,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u8);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r6.u32);
	// lwz r5,100(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8246ce9c
	if (ctx.cr6.lt) goto loc_8246CE9C;
loc_8246CEF0:
	// stw r19,88(r31)
	REX_STORE_U32(r31.u32 + 88, r19.u32);
	// b 0x8246d048
	goto loc_8246D048;
loc_8246CEF8:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mulli r11,r11,152
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(152));
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8246cf78
	if (!ctx.cr6.eq) goto loc_8246CF78;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8246cf78
	if (!ctx.cr6.lt) goto loc_8246CF78;
	// addi r28,r31,224
	r28.s64 = r31.s64 + 224;
loc_8246CF28:
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824658f8
	ctx.lr = 0x8246CF3C;
	sub_824658F8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246d054
	if (ctx.cr6.lt) goto loc_8246D054;
	// lwz r11,140(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 140);
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// stbx r8,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r7.u32);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,104(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8246cf28
	if (ctx.cr6.lt) goto loc_8246CF28;
loc_8246CF78:
	// stw r20,88(r31)
	REX_STORE_U32(r31.u32 + 88, r20.u32);
	// b 0x8246d048
	goto loc_8246D048;
loc_8246CF80:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246c5b0
	ctx.lr = 0x8246CF88;
	sub_8246C5B0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246d054
	if (ctx.cr6.lt) goto loc_8246D054;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8246d048
	if (!ctx.cr6.eq) goto loc_8246D048;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mulli r9,r11,152
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(152));
	// lwz r8,92(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lwzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r21,88(r31)
	REX_STORE_U32(r31.u32 + 88, r21.u32);
	// subf r6,r7,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r7.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r6,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r6.u32);
	// stw r5,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r5.u32);
	// b 0x8246d048
	goto loc_8246D048;
loc_8246CFCC:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8246d044
	if (ctx.cr6.eq) goto loc_8246D044;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x824658f8
	ctx.lr = 0x8246CFEC;
	sub_824658F8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246d054
	if (ctx.cr6.lt) goto loc_8246D054;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8246d044
	if (!ctx.cr6.eq) goto loc_8246D044;
	// stw r29,96(r31)
	REX_STORE_U32(r31.u32 + 96, r29.u32);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// lhz r10,580(r26)
	ctx.r10.u64 = REX_LOAD_U16(r26.u32 + 580);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stw r9,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r9.u32);
	// lhz r8,34(r26)
	ctx.r8.u64 = REX_LOAD_U16(r26.u32 + 34);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8246d044
	if (ctx.cr6.eq) goto loc_8246D044;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8246D028:
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r29,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r29.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lhz r8,34(r26)
	ctx.r8.u64 = REX_LOAD_U16(r26.u32 + 34);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8246d028
	if (ctx.cr6.lt) goto loc_8246D028;
loc_8246D044:
	// stw r23,88(r31)
	REX_STORE_U32(r31.u32 + 88, r23.u32);
loc_8246D048:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8246cc7c
	if (!ctx.cr6.eq) goto loc_8246CC7C;
loc_8246D054:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eb4
	return;
loc_8246D060:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// li r10,9
	ctx.r10.s64 = 9;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r10,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// stw r11,572(r26)
	REX_STORE_U32(r26.u32 + 572, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eb4
	return;
loc_8246D07C:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_824801B8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82482F78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82482F80;
	// lhz r11,52(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 52);
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r10,50(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 50);
	// rlwinm r31,r11,31,1,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r11,1316(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 1316);
	// rlwinm r6,r10,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82483058
	if (ctx.cr6.eq) goto loc_82483058;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,5560
	ctx.r7.s64 = ctx.r10.s64 + 5560;
loc_82482FB0:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82482fcc
	if (ctx.cr6.eq) goto loc_82482FCC;
	// lwz r10,21968(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 21968);
	// lwzx r9,r10,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq cr6,0x82482fd0
	if (ctx.cr6.eq) goto loc_82482FD0;
loc_82482FCC:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82482FD0:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82483048
	if (ctx.cr6.eq) goto loc_82483048;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82482FE4:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r12,3855
	ctx.r12.s64 = 3855;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// oris r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 252641280;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 3855;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ldx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r7.u32);
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// rldicl r30,r9,56,8
	r30.u64 = __builtin_rotateleft64(ctx.r9.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r9,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// rldicl r29,r30,56,8
	r29.u64 = __builtin_rotateleft64(r30.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r30,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, r30.u8);
	// rldicl r9,r29,56,8
	ctx.r9.u64 = __builtin_rotateleft64(r29.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r29,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, r29.u8);
	// rldicl r30,r9,56,8
	r30.u64 = __builtin_rotateleft64(ctx.r9.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r9,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// rldicl r29,r30,56,8
	r29.u64 = __builtin_rotateleft64(r30.u64, 56) & 0xFFFFFFFFFFFFFF;
	// clrlwi r30,r30,24
	r30.u64 = r30.u32 & 0xFF;
	// clrlwi r9,r29,24
	ctx.r9.u64 = r29.u32 & 0xFF;
	// stb r30,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, r30.u8);
	// stbu r9,6(r11)
	ea = 6 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82482fe4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82482FE4;
loc_82483048:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmplw cr6,r5,r31
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r31.u32, ctx.xer);
	// blt cr6,0x82482fb0
	if (ctx.cr6.lt) goto loc_82482FB0;
loc_82483058:
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_824907B0) {
	REX_FUNC_PROLOGUE();
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// lwz r10,1456(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1456);
	// lwz r8,1368(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 1368);
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// rlwinm r7,r11,0,0,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// rlwinm r3,r8,17,0,14
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0xFFFE0000;
	// mullw r5,r7,r10
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// mullw r11,r6,r10
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// rlwinm r4,r5,0,0,14
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFE0000;
	// srawi r8,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 8;
	// subf r10,r3,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r3.u64;
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// addis r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 65536;
	// or r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 | ctx.r6.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82492D88) {
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
	ctx.lr = 0x82492D90;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r25,50(r3)
	r25.u64 = REX_LOAD_U16(ctx.r3.u32 + 50);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// lwz r26,0(r7)
	r26.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r17,r4
	r17.u64 = ctx.r4.u64;
	// lwz r27,348(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// mr r15,r5
	r15.u64 = ctx.r5.u64;
	// stw r5,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r5.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r20,0
	r20.s64 = 0;
	// srawi r22,r25,1
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x1) != 0);
	r22.s64 = r25.s32 >> 1;
	// beq cr6,0x82492dd8
	if (ctx.cr6.eq) goto loc_82492DD8;
	// lwz r11,1304(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1304);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r16,r20
	r16.u64 = r20.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82492ddc
	if (ctx.cr6.eq) goto loc_82492DDC;
loc_82492DD8:
	// li r16,1
	r16.s64 = 1;
loc_82492DDC:
	// lwz r11,340(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 340);
	// lhz r24,62(r21)
	r24.u64 = REX_LOAD_U16(r21.u32 + 62);
	// lhz r19,66(r21)
	r19.u64 = REX_LOAD_U16(r21.u32 + 66);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lhz r23,64(r21)
	r23.u64 = REX_LOAD_U16(r21.u32 + 64);
	// lhz r18,68(r21)
	r18.u64 = REX_LOAD_U16(r21.u32 + 68);
	// lwz r31,0(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 0);
	// bne cr6,0x82492e0c
	if (!ctx.cr6.eq) goto loc_82492E0C;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r30,r20
	r30.u64 = r20.u64;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// b 0x82492f38
	goto loc_82492F38;
loc_82492E0C:
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
	// blt cr6,0x82492ef8
	if (ctx.cr6.lt) goto loc_82492EF8;
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
	// bge cr6,0x82492ef0
	if (!ctx.cr6.lt) goto loc_82492EF0;
loc_82492E58:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82492e84
	if (ctx.cr6.lt) goto loc_82492E84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x82492E74;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82492e58
	if (ctx.cr6.eq) goto loc_82492E58;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82492f38
	goto loc_82492F38;
loc_82492E84:
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
loc_82492EF0:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82492f38
	goto loc_82492F38;
loc_82492EF8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337f50
	ctx.lr = 0x82492F00;
	sub_82337F50(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,32768
	r29.u64 = ctx.r11.u64 | 32768;
loc_82492F08:
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
	ctx.lr = 0x82492F20;
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
	// blt cr6,0x82492f08
	if (ctx.cr6.lt) goto loc_82492F08;
loc_82492F38:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82492f54
	if (ctx.cr6.eq) goto loc_82492F54;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822d4ea0
	return;
loc_82492F54:
	// rlwinm r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82492f70
	if (ctx.cr6.eq) goto loc_82492F70;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r4,336(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 336);
	// bl 0x82490da8
	ctx.lr = 0x82492F70;
	sub_82490DA8(ctx, base);
loc_82492F70:
	// stw r20,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r20.u32);
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// stw r20,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r20.u32);
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// stw r20,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r20.u32);
	// beq cr6,0x82492fac
	if (ctx.cr6.eq) goto loc_82492FAC;
	// lwz r11,-24(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + -24);
	// rlwinm r9,r11,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82492fac
	if (ctx.cr6.eq) goto loc_82492FAC;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
loc_82492FAC:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// bne cr6,0x82493088
	if (!ctx.cr6.eq) goto loc_82493088;
	// rlwinm r9,r22,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r25,r26
	ctx.r11.u64 = r26.u64 - r25.u64;
	// add r9,r22,r9
	ctx.r9.u64 = r22.u64 + ctx.r9.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r8,r8,r17
	ctx.r8.u64 = r17.u64 - ctx.r8.u64;
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r7,r9,0,14,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82493014
	if (ctx.cr6.eq) goto loc_82493014;
	// rlwinm r9,r9,0,21,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x700;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r9,512
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 512, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bge cr6,0x82493000
	if (!ctx.cr6.lt) goto loc_82493000;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lwzx r5,r9,r27
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + r27.u32);
	// stwx r5,r7,r6
	REX_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r5.u32);
	// b 0x82493014
	goto loc_82493014;
loc_82493000:
	// subf r9,r25,r11
	ctx.r9.u64 = ctx.r11.u64 - r25.u64;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r6,r27
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + r27.u32);
	// stwx r4,r7,r5
	REX_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r4.u32);
loc_82493014:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(r22.s32, 1, ctx.xer);
	// beq cr6,0x82493088
	if (ctx.cr6.eq) goto loc_82493088;
	// addi r9,r22,-1
	ctx.r9.s64 = r22.s64 + -1;
	// cmpw cr6,r15,r9
	ctx.cr6.compare<int32_t>(r15.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82493034
	if (ctx.cr6.eq) goto loc_82493034;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r9,r8,24
	ctx.r9.s64 = ctx.r8.s64 + 24;
	// b 0x8249303c
	goto loc_8249303C;
loc_82493034:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r8,-24
	ctx.r9.s64 = ctx.r8.s64 + -24;
loc_8249303C:
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r9,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82493088
	if (ctx.cr6.eq) goto loc_82493088;
	// rlwinm r9,r9,0,21,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r9,512
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 512, ctx.xer);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bge cr6,0x82493074
	if (!ctx.cr6.lt) goto loc_82493074;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// lwzx r7,r11,r27
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// stwx r7,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
	// b 0x82493088
	goto loc_82493088;
loc_82493074:
	// subf r11,r25,r11
	ctx.r11.u64 = ctx.r11.u64 - r25.u64;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r27
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + r27.u32);
	// stwx r6,r9,r7
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r6.u32);
loc_82493088:
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x824931b8
	if (!ctx.cr6.gt) goto loc_824931B8;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
loc_824930AC:
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r4,r5,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x824930cc
	if (ctx.cr6.eq) goto loc_824930CC;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stwu r5,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
	// b 0x824930d4
	goto loc_824930D4;
loc_824930CC:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwu r5,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r8.u32 = ea;
loc_824930D4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824930ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824930AC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x824931b8
	if (!ctx.cr6.gt) goto loc_824931B8;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x82493114
	if (ctx.cr6.eq) goto loc_82493114;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x82493114
	if (ctx.cr6.eq) goto loc_82493114;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82493108
	if (ctx.cr6.lt) goto loc_82493108;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x824931bc
	goto loc_824931BC;
loc_82493108:
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x824931bc
	goto loc_824931BC;
loc_82493114:
	// lhz r11,114(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 114);
	// lhz r10,110(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// lhz r9,106(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 106);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lhz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lhz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// extsh r31,r9
	r31.s64 = ctx.r9.s16;
	// lhz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 108);
	// extsh r29,r11
	r29.s64 = ctx.r11.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// subf r11,r31,r5
	ctx.r11.u64 = ctx.r5.u64 - r31.u64;
	// subf r10,r7,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r9,r31,r7
	ctx.r9.u64 = ctx.r7.u64 - r31.u64;
	// subf r8,r29,r4
	ctx.r8.u64 = ctx.r4.u64 - r29.u64;
	// subf r28,r6,r4
	r28.u64 = ctx.r4.u64 - ctx.r6.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r14,r29,r6
	r14.u64 = ctx.r6.u64 - r29.u64;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r28,r28,r8
	r28.u64 = r28.u64 ^ ctx.r8.u64;
	// srawi r11,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// xor r8,r14,r8
	ctx.r8.u64 = r14.u64 ^ ctx.r8.u64;
	// srawi r10,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// srawi r9,r28,31
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = r28.s32 >> 31;
	// srawi r8,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 31;
	// or r28,r11,r10
	r28.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r14,r9,r8
	r14.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 & r31.u64;
	// andc r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 & ~r28.u64;
	// and r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 & r29.u64;
	// andc r6,r6,r14
	ctx.r6.u64 = ctx.r6.u64 & ~r14.u64;
	// or r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 | ctx.r10.u64;
	// and r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 & ctx.r5.u64;
	// and r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 & ctx.r4.u64;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r9,r7,r5
	ctx.r9.u64 = ctx.r7.u64 | ctx.r5.u64;
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r9,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// sth r8,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// b 0x824931bc
	goto loc_824931BC;
loc_824931B8:
	// stw r20,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r20.u32);
loc_824931BC:
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// srawi r9,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 16;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// rlwinm r8,r30,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r7,r11,r24
	ctx.r7.u64 = ctx.r11.u64 + r24.u64;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + r23.u64;
	// and r5,r7,r19
	ctx.r5.u64 = ctx.r7.u64 & r19.u64;
	// add r31,r11,r27
	r31.u64 = ctx.r11.u64 + r27.u64;
	// and r4,r6,r18
	ctx.r4.u64 = ctx.r6.u64 & r18.u64;
	// subf r3,r24,r5
	ctx.r3.u64 = ctx.r5.u64 - r24.u64;
	// subf r10,r23,r4
	ctx.r10.u64 = ctx.r4.u64 - r23.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sth r3,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r3.u16);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// sthx r10,r11,r27
	REX_STORE_U16(ctx.r11.u32 + r27.u32, ctx.r10.u16);
	// beq cr6,0x8249321c
	if (ctx.cr6.eq) goto loc_8249321C;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r4,336(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 336);
	// bl 0x82490da8
	ctx.lr = 0x8249321C;
	sub_82490DA8(ctx, base);
loc_8249321C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r20,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r20.u32);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// stw r20,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r20.u32);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bne cr6,0x82493304
	if (!ctx.cr6.eq) goto loc_82493304;
	// rlwinm r11,r22,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r25,r26
	ctx.r10.u64 = r26.u64 - r25.u64;
	// add r9,r22,r11
	ctx.r9.u64 = r22.u64 + ctx.r11.u64;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r7,r17
	ctx.r9.u64 = r17.u64 - ctx.r7.u64;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r6,r10,0,14,14
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82493290
	if (ctx.cr6.eq) goto loc_82493290;
	// rlwinm r10,r10,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x700;
	// li r8,2
	ctx.r8.s64 = 2;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bge cr6,0x82493280
	if (!ctx.cr6.lt) goto loc_82493280;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r27
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// b 0x82493290
	goto loc_82493290;
loc_82493280:
	// subf r10,r25,r11
	ctx.r10.u64 = ctx.r11.u64 - r25.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r27
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + r27.u32);
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
loc_82493290:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(r22.s32, 1, ctx.xer);
	// beq cr6,0x82493304
	if (ctx.cr6.eq) goto loc_82493304;
	// addi r10,r22,-1
	ctx.r10.s64 = r22.s64 + -1;
	// cmpw cr6,r15,r10
	ctx.cr6.compare<int32_t>(r15.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x824932b0
	if (ctx.cr6.eq) goto loc_824932B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r9,24
	ctx.r10.s64 = ctx.r9.s64 + 24;
	// b 0x824932b8
	goto loc_824932B8;
loc_824932B0:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r10,r9,-24
	ctx.r10.s64 = ctx.r9.s64 + -24;
loc_824932B8:
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r10,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82493304
	if (ctx.cr6.eq) goto loc_82493304;
	// rlwinm r10,r10,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bge cr6,0x824932f0
	if (!ctx.cr6.lt) goto loc_824932F0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// lwzx r7,r11,r27
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// stwx r7,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u32);
	// b 0x82493304
	goto loc_82493304;
loc_824932F0:
	// subf r11,r25,r11
	ctx.r11.u64 = ctx.r11.u64 - r25.u64;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r27
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + r27.u32);
	// stwx r6,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r6.u32);
loc_82493304:
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82493440
	if (!ctx.cr6.gt) goto loc_82493440;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
loc_82493328:
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r4,r5,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82493348
	if (ctx.cr6.eq) goto loc_82493348;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// b 0x82493350
	goto loc_82493350;
loc_82493348:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwu r5,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
loc_82493350:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82493328
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82493328;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82493440
	if (!ctx.cr6.gt) goto loc_82493440;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x82493390
	if (ctx.cr6.eq) goto loc_82493390;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x82493390
	if (ctx.cr6.eq) goto loc_82493390;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82493384
	if (ctx.cr6.lt) goto loc_82493384;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82493444
	goto loc_82493444;
loc_82493384:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82493444
	goto loc_82493444;
loc_82493390:
	// lhz r11,114(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 114);
	// lhz r10,110(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// lhz r9,106(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 106);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lhz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lhz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// extsh r29,r9
	r29.s64 = ctx.r9.s16;
	// lhz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 108);
	// extsh r28,r11
	r28.s64 = ctx.r11.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// std r3,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lwz r15,324(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// subf r11,r29,r5
	ctx.r11.u64 = ctx.r5.u64 - r29.u64;
	// subf r10,r7,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r9,r29,r7
	ctx.r9.u64 = ctx.r7.u64 - r29.u64;
	// subf r8,r28,r4
	ctx.r8.u64 = ctx.r4.u64 - r28.u64;
	// subf r14,r6,r4
	r14.u64 = ctx.r4.u64 - ctx.r6.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r3,r28,r6
	ctx.r3.u64 = ctx.r6.u64 - r28.u64;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r14,r14,r8
	r14.u64 = r14.u64 ^ ctx.r8.u64;
	// srawi r11,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// xor r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 ^ ctx.r8.u64;
	// srawi r10,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// srawi r9,r14,31
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = r14.s32 >> 31;
	// srawi r8,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 31;
	// or r14,r11,r10
	r14.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 & r29.u64;
	// andc r7,r7,r14
	ctx.r7.u64 = ctx.r7.u64 & ~r14.u64;
	// andc r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r3.u64;
	// ld r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// and r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 & r28.u64;
	// or r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 | ctx.r10.u64;
	// and r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 & ctx.r5.u64;
	// and r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 & ctx.r4.u64;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r9,r7,r5
	ctx.r9.u64 = ctx.r7.u64 | ctx.r5.u64;
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r9,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// sth r8,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// b 0x82493444
	goto loc_82493444;
loc_82493440:
	// stw r20,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r20.u32);
loc_82493444:
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// srawi r9,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 16;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// rlwinm r8,r30,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r7,r11,r24
	ctx.r7.u64 = ctx.r11.u64 + r24.u64;
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + r23.u64;
	// and r5,r7,r19
	ctx.r5.u64 = ctx.r7.u64 & r19.u64;
	// and r4,r6,r18
	ctx.r4.u64 = ctx.r6.u64 & r18.u64;
	// subf r3,r24,r5
	ctx.r3.u64 = ctx.r5.u64 - r24.u64;
	// subf r11,r23,r4
	ctx.r11.u64 = ctx.r4.u64 - r23.u64;
	// sth r3,6(r31)
	REX_STORE_U16(r31.u32 + 6, ctx.r3.u16);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// sth r11,4(r31)
	REX_STORE_U16(r31.u32 + 4, ctx.r11.u16);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8249349c
	if (ctx.cr6.eq) goto loc_8249349C;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r4,336(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 336);
	// bl 0x82490da8
	ctx.lr = 0x8249349C;
	sub_82490DA8(ctx, base);
loc_8249349C:
	// stw r20,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r20.u32);
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// stw r20,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r20.u32);
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// stw r20,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r20.u32);
	// beq cr6,0x824934dc
	if (ctx.cr6.eq) goto loc_824934DC;
	// lwz r11,-24(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + -24);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824934dc
	if (ctx.cr6.eq) goto loc_824934DC;
	// add r11,r26,r25
	ctx.r11.u64 = r26.u64 + r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + r27.u64;
	// lwz r9,-4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
loc_824934DC:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// bne cr6,0x82493570
	if (!ctx.cr6.eq) goto loc_82493570;
	// rlwinm r11,r22,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r25,r26
	ctx.r10.u64 = r26.u64 - r25.u64;
	// add r11,r22,r11
	ctx.r11.u64 = r22.u64 + ctx.r11.u64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r9,r17
	ctx.r11.u64 = r17.u64 - ctx.r9.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r8,0,14,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82493520
	if (ctx.cr6.eq) goto loc_82493520;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwzx r5,r9,r27
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + r27.u32);
	// stwx r5,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r5.u32);
loc_82493520:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(r22.s32, 1, ctx.xer);
	// beq cr6,0x82493570
	if (ctx.cr6.eq) goto loc_82493570;
	// addi r9,r22,-1
	ctx.r9.s64 = r22.s64 + -1;
	// cmpw cr6,r15,r9
	ctx.cr6.compare<int32_t>(r15.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82493540
	if (ctx.cr6.eq) goto loc_82493540;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// b 0x82493548
	goto loc_82493548;
loc_82493540:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
loc_82493548:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r11,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82493570
	if (ctx.cr6.eq) goto loc_82493570;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwzx r8,r11,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
loc_82493570:
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x824936a0
	if (!ctx.cr6.gt) goto loc_824936A0;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
loc_82493594:
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r4,r5,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x824935b4
	if (ctx.cr6.eq) goto loc_824935B4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// b 0x824935bc
	goto loc_824935BC;
loc_824935B4:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwu r5,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
loc_824935BC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82493594
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82493594;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x824936a0
	if (!ctx.cr6.gt) goto loc_824936A0;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x824935fc
	if (ctx.cr6.eq) goto loc_824935FC;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x824935fc
	if (ctx.cr6.eq) goto loc_824935FC;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x824935f0
	if (ctx.cr6.lt) goto loc_824935F0;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x824936a4
	goto loc_824936A4;
loc_824935F0:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x824936a4
	goto loc_824936A4;
loc_824935FC:
	// lhz r11,114(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 114);
	// lhz r10,110(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// lhz r9,106(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 106);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lhz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lhz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// extsh r31,r9
	r31.s64 = ctx.r9.s16;
	// lhz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 108);
	// extsh r29,r11
	r29.s64 = ctx.r11.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// subf r11,r31,r5
	ctx.r11.u64 = ctx.r5.u64 - r31.u64;
	// subf r10,r7,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r9,r31,r7
	ctx.r9.u64 = ctx.r7.u64 - r31.u64;
	// subf r8,r29,r4
	ctx.r8.u64 = ctx.r4.u64 - r29.u64;
	// subf r28,r6,r4
	r28.u64 = ctx.r4.u64 - ctx.r6.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r14,r29,r6
	r14.u64 = ctx.r6.u64 - r29.u64;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r28,r28,r8
	r28.u64 = r28.u64 ^ ctx.r8.u64;
	// srawi r11,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// xor r8,r14,r8
	ctx.r8.u64 = r14.u64 ^ ctx.r8.u64;
	// srawi r10,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// srawi r9,r28,31
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = r28.s32 >> 31;
	// srawi r8,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 31;
	// or r28,r11,r10
	r28.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r14,r9,r8
	r14.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 & r31.u64;
	// andc r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 & ~r28.u64;
	// and r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 & r29.u64;
	// andc r6,r6,r14
	ctx.r6.u64 = ctx.r6.u64 & ~r14.u64;
	// or r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 | ctx.r10.u64;
	// and r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 & ctx.r5.u64;
	// and r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 & ctx.r4.u64;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r9,r7,r5
	ctx.r9.u64 = ctx.r7.u64 | ctx.r5.u64;
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r9,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// sth r8,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// b 0x824936a4
	goto loc_824936A4;
loc_824936A0:
	// stw r20,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r20.u32);
loc_824936A4:
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// srawi r9,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 16;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// add r31,r26,r25
	r31.u64 = r26.u64 + r25.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r11,r24
	ctx.r9.u64 = ctx.r11.u64 + r24.u64;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r23
	ctx.r8.u64 = ctx.r10.u64 + r23.u64;
	// and r7,r9,r19
	ctx.r7.u64 = ctx.r9.u64 & r19.u64;
	// and r6,r8,r18
	ctx.r6.u64 = ctx.r8.u64 & r18.u64;
	// add r29,r11,r27
	r29.u64 = ctx.r11.u64 + r27.u64;
	// subf r5,r24,r7
	ctx.r5.u64 = ctx.r7.u64 - r24.u64;
	// subf r4,r23,r6
	ctx.r4.u64 = ctx.r6.u64 - r23.u64;
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// sthx r4,r11,r27
	REX_STORE_U16(ctx.r11.u32 + r27.u32, ctx.r4.u16);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// sth r5,2(r29)
	REX_STORE_U16(r29.u32 + 2, ctx.r5.u16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82493708
	if (ctx.cr6.eq) goto loc_82493708;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r4,336(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 336);
	// bl 0x82490da8
	ctx.lr = 0x82493708;
	sub_82490DA8(ctx, base);
loc_82493708:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r20,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r20.u32);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// stw r20,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r20.u32);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bne cr6,0x824937b0
	if (!ctx.cr6.eq) goto loc_824937B0;
	// rlwinm r11,r22,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r22,r11
	ctx.r9.u64 = r22.u64 + ctx.r11.u64;
	// subf r11,r10,r31
	ctx.r11.u64 = r31.u64 - ctx.r10.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// subf r11,r8,r17
	ctx.r11.u64 = r17.u64 - ctx.r8.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r7,0,14,14
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82493760
	if (ctx.cr6.eq) goto loc_82493760;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwzx r8,r9,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + r27.u32);
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
loc_82493760:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(r22.s32, 1, ctx.xer);
	// beq cr6,0x824937b0
	if (ctx.cr6.eq) goto loc_824937B0;
	// addi r9,r22,-1
	ctx.r9.s64 = r22.s64 + -1;
	// cmpw cr6,r15,r9
	ctx.cr6.compare<int32_t>(r15.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82493780
	if (ctx.cr6.eq) goto loc_82493780;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// b 0x82493788
	goto loc_82493788;
loc_82493780:
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
loc_82493788:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r11,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824937b0
	if (ctx.cr6.eq) goto loc_824937B0;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwzx r8,r11,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
loc_824937B0:
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x824938e0
	if (!ctx.cr6.gt) goto loc_824938E0;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
loc_824937D4:
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r4,r5,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x824937f4
	if (ctx.cr6.eq) goto loc_824937F4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// b 0x824937fc
	goto loc_824937FC;
loc_824937F4:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwu r5,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
loc_824937FC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824937d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824937D4;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x824938e0
	if (!ctx.cr6.gt) goto loc_824938E0;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x8249383c
	if (ctx.cr6.eq) goto loc_8249383C;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x8249383c
	if (ctx.cr6.eq) goto loc_8249383C;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82493830
	if (ctx.cr6.lt) goto loc_82493830;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x824938e4
	goto loc_824938E4;
loc_82493830:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x824938e4
	goto loc_824938E4;
loc_8249383C:
	// lhz r11,114(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 114);
	// lhz r10,110(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// lhz r9,106(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 106);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lhz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lhz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// extsh r31,r9
	r31.s64 = ctx.r9.s16;
	// lhz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 108);
	// extsh r30,r11
	r30.s64 = ctx.r11.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// subf r11,r31,r5
	ctx.r11.u64 = ctx.r5.u64 - r31.u64;
	// subf r10,r7,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r9,r31,r7
	ctx.r9.u64 = ctx.r7.u64 - r31.u64;
	// subf r8,r30,r4
	ctx.r8.u64 = ctx.r4.u64 - r30.u64;
	// subf r28,r6,r4
	r28.u64 = ctx.r4.u64 - ctx.r6.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r27,r30,r6
	r27.u64 = ctx.r6.u64 - r30.u64;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r28,r28,r8
	r28.u64 = r28.u64 ^ ctx.r8.u64;
	// srawi r11,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// xor r8,r27,r8
	ctx.r8.u64 = r27.u64 ^ ctx.r8.u64;
	// srawi r10,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// srawi r9,r28,31
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = r28.s32 >> 31;
	// srawi r8,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 31;
	// or r28,r11,r10
	r28.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r27,r9,r8
	r27.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 & r31.u64;
	// andc r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 & ~r28.u64;
	// and r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 & r30.u64;
	// andc r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 & ~r27.u64;
	// or r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 | ctx.r10.u64;
	// and r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 & ctx.r5.u64;
	// and r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 & ctx.r4.u64;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r9,r7,r5
	ctx.r9.u64 = ctx.r7.u64 | ctx.r5.u64;
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r9,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// sth r8,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// b 0x824938e4
	goto loc_824938E4;
loc_824938E0:
	// stw r20,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r20.u32);
loc_824938E4:
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// srawi r9,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 16;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r11,r24
	ctx.r9.u64 = ctx.r11.u64 + r24.u64;
	// add r8,r10,r23
	ctx.r8.u64 = ctx.r10.u64 + r23.u64;
	// and r7,r9,r19
	ctx.r7.u64 = ctx.r9.u64 & r19.u64;
	// and r6,r8,r18
	ctx.r6.u64 = ctx.r8.u64 & r18.u64;
	// subf r5,r24,r7
	ctx.r5.u64 = ctx.r7.u64 - r24.u64;
	// subf r4,r23,r6
	ctx.r4.u64 = ctx.r6.u64 - r23.u64;
	// sth r5,6(r29)
	REX_STORE_U16(r29.u32 + 6, ctx.r5.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r4,4(r29)
	REX_STORE_U16(r29.u32 + 4, ctx.r4.u16);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_824B67B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
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
	// bl 0x822d4e7c
	ctx.lr = 0x824B67B8;
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
	// lbz r8,35(r7)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + 35);
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
	// vspltish v1,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x1)));
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
	ctx.lr = 0x824B6830;
	sub_824A6EB0(ctx, base);
	// cntlzw r5,r28
	ctx.r5.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// vspltish v10,8
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x8)));
	// vspltish v8,-1
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// vspltisb v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// vspltish v9,3
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x3)));
	// and r9,r3,r27
	ctx.r9.u64 = ctx.r3.u64 & r27.u64;
	// vspltish v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x0)));
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// vslh v8,v8,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// slw r9,r4,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r9.u8 & 0x3F));
	// bne cr6,0x824b68e8
	if (!ctx.cr6.eq) goto loc_824B68E8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824b6994
	if (!ctx.cr6.gt) goto loc_824B6994;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,4
	ctx.r8.s64 = 4;
loc_824B6884:
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lvx128 v63,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v13,v0,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// vsldoi128 v10,v0,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// vsldoi128 v7,v0,v63,6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 10));
	// lvx128 v6,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v13,v10,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v4,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vslh v3,v13,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
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
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// bdnz 0x824b6884
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B6884;
	// b 0x824b6994
	goto loc_824B6994;
loc_824B68E8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824b6994
	if (!ctx.cr6.gt) goto loc_824B6994;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_824B6900:
	// lvx128 v0,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lvx128 v13,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v10,v0,v61,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 12));
	// vsldoi128 v7,v0,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// vsldoi128 v6,v0,v61,6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 10));
	// vsldoi v5,v13,v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 12));
	// vsldoi v4,v13,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 14));
	// vadduhm v3,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsldoi v2,v13,v0,6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 10));
	// vadduhm v1,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v10,v4,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vor v0,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vadduhm v31,v13,v2
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsubshs v30,v11,v1
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v10,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v0,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v27,v11,v31
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vadduhm v26,v10,v29
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// lvx128 v10,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v25,v0,v28
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// lvx128 v0,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v24,v26,v10
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v23,v25,v10
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
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
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// bdnz 0x824b6900
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B6900;
loc_824B6994:
	// vand v0,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// vcmpgtuh. v13,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
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

DEFINE_REX_FUNC(sub_824D3458) {
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
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r5,498
	ctx.r5.s64 = 498;
	// addi r31,r11,23448
	r31.s64 = ctx.r11.s64 + 23448;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,30
	ctx.r3.s64 = r31.s64 + 30;
	// bl 0x822d5870
	ctx.lr = 0x824D3480;
	sub_822D5870(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,528
	ctx.r3.s64 = r31.s64 + 528;
	// addi r4,r11,-6448
	ctx.r4.s64 = ctx.r11.s64 + -6448;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x822d4fa0
	ctx.lr = 0x824D3494;
	sub_822D4FA0(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = r31.s64 + 600;
	// bl 0x822d5870
	ctx.lr = 0x824D34A4;
	sub_822D5870(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,63
	ctx.r9.s64 = 63;
	// stw r10,1044(r31)
	REX_STORE_U32(r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	REX_STORE_U32(r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	REX_STORE_U32(r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	REX_STORE_U32(r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	REX_STORE_U32(r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	REX_STORE_U32(r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	REX_STORE_U32(r31.u32 + 1064, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824D3C98) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,26396
	ctx.r3.s64 = ctx.r11.s64 + 26396;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3E00) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,29840
	ctx.r3.s64 = ctx.r11.s64 + 29840;
	// b 0x8225da00
	sub_8225DA00(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3F80) {
	REX_FUNC_PROLOGUE();
	// .long 0x20002d5
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D40D0) {
	REX_FUNC_PROLOGUE();
	// .long 0x20003cb
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4240) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101a5
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D43C0) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100cc
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4540) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101c7
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D46C0) {
	REX_FUNC_PROLOGUE();
	// .long 0x201026a
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4840) {
	REX_FUNC_PROLOGUE();
	// .long 0x200000f
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D49C0) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010152
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4B40) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010142
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

