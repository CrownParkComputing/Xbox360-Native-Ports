#include "soulcalibur2_funcs.46.h"

DEFINE_REX_FUNC(sub_820E1EC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lfs f12,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f13,f8,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f12.f64)));
	// lfs f2,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,-4(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// fmadds f12,f7,f9,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f7.f64, ctx.f9.f64, ctx.f11.f64)));
	// fmadds f11,f6,f9,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f6.f64, ctx.f9.f64, ctx.f10.f64)));
	// fmadds f13,f5,f9,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f5.f64, ctx.f9.f64, ctx.f13.f64)));
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fmadds f13,f4,f0,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmadds f0,f3,f0,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, ctx.f11.f64)));
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820EAAD8) {
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
	ctx.lr = 0x820EAAE0;
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
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820eaccc
	if (ctx.cr6.eq) goto loc_820EACCC;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,-28236(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -28236);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820EAB1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r31,r11,-7072
	r31.s64 = ctx.r11.s64 + -7072;
	// ori r11,r10,14228
	ctx.r11.u64 = ctx.r10.u64 | 14228;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r9,r9,14232
	ctx.r9.u64 = ctx.r9.u64 | 14232;
	// lfs f13,10532(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 10532);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfsx f0,r31,r11
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// ori r11,r8,14236
	ctx.r11.u64 = ctx.r8.u64 | 14236;
	// fadds f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,10536(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10536);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,10540(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10540);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfsx f13,r31,r9
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fadds f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f30,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	f30.f64 = double(temp.f32);
	// lfsx f13,r31,r11
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// lfs f0,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,16308(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16308);
	ctx.f11.f64 = double(temp.f32);
	// lfs f31,16260(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16260);
	f31.f64 = double(temp.f32);
	// fmuls f9,f10,f30
	ctx.f9.f64 = double(float(ctx.f10.f64 * f30.f64));
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * f30.f64));
	// fmuls f10,f13,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 * f30.f64));
	// fsubs f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fabs f9,f13
	ctx.f9.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f9,f31
	ctx.cr6.compare(ctx.f9.f64, f31.f64);
	// ble cr6,0x820eaba4
	if (!ctx.cr6.gt) goto loc_820EABA4;
	// fmadds f0,f13,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f0.f64)));
	// stfs f0,32(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 32, temp.u32);
loc_820EABA4:
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// ble cr6,0x820eabc0
	if (!ctx.cr6.gt) goto loc_820EABC0;
	// fmadds f0,f13,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f0.f64)));
	// stfs f0,36(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 36, temp.u32);
loc_820EABC0:
	// lfs f0,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// ble cr6,0x820eabdc
	if (!ctx.cr6.gt) goto loc_820EABDC;
	// fmadds f0,f13,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f0.f64)));
	// stfs f0,40(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 40, temp.u32);
loc_820EABDC:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820eac4c
	if (ctx.cr6.eq) goto loc_820EAC4C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822009c8
	ctx.lr = 0x820EABF0;
	sub_822009C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16588(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16588);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x820eac04
	if (ctx.cr6.gt) goto loc_820EAC04;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_820EAC04:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16372(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16372);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x820eac18
	if (ctx.cr6.lt) goto loc_820EAC18;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_820EAC18:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822006f8
	ctx.lr = 0x820EAC20;
	sub_822006F8(ctx, base);
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x820eac30
	if (!ctx.cr6.gt) goto loc_820EAC30;
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
loc_820EAC30:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 36, temp.u32);
	// lfs f0,16172(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16172);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bge cr6,0x820eac48
	if (!ctx.cr6.lt) goto loc_820EAC48;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_820EAC48:
	// stfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 36, temp.u32);
loc_820EAC4C:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820eacac
	if (ctx.cr6.eq) goto loc_820EACAC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5732(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5732);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f13,16204(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16204);
	ctx.f13.f64 = double(temp.f32);
	// lfs f29,16352(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16352);
	f29.f64 = double(temp.f32);
	// fmadds f31,f0,f30,f13
	f31.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, ctx.f13.f64)));
	// fmr f30,f29
	f30.f64 = f29.f64;
	// bl 0x82200a38
	ctx.lr = 0x820EAC7C;
	sub_82200A38(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, ctx.f1.f64);
	// ble cr6,0x820eac88
	if (!ctx.cr6.gt) goto loc_820EAC88;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
loc_820EAC88:
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f29.f64);
	// ble cr6,0x820eac94
	if (!ctx.cr6.gt) goto loc_820EAC94;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
loc_820EAC94:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200800
	ctx.lr = 0x820EACA0;
	sub_82200800(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82200808
	ctx.lr = 0x820EACAC;
	sub_82200808(ctx, base);
loc_820EACAC:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
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
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820EACCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820EACCC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

DEFINE_REX_FUNC(sub_820FA0E0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,4228(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4228);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FA120) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820fa1c0
	if (ctx.cr6.eq) goto loc_820FA1C0;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r4,16(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x820f8db8
	ctx.lr = 0x820FA14C;
	sub_820F8DB8(ctx, base);
	// lwz r11,4240(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4240);
	// li r5,14
	ctx.r5.s64 = 14;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// or r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 | ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,4240(r31)
	REX_STORE_U32(r31.u32 + 4240, ctx.r11.u32);
	// bl 0x820f8db8
	ctx.lr = 0x820FA168;
	sub_820F8DB8(ctx, base);
	// stw r3,4244(r31)
	REX_STORE_U32(r31.u32 + 4244, ctx.r3.u32);
	// li r5,17
	ctx.r5.s64 = 17;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FA17C;
	sub_820F8DB8(ctx, base);
	// stw r3,4252(r31)
	REX_STORE_U32(r31.u32 + 4252, ctx.r3.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FA190;
	sub_820F8DB8(ctx, base);
	// stw r3,4248(r31)
	REX_STORE_U32(r31.u32 + 4248, ctx.r3.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FA1A4;
	sub_820F8DB8(ctx, base);
	// stw r3,4268(r31)
	REX_STORE_U32(r31.u32 + 4268, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820f9278
	ctx.lr = 0x820FA1B0;
	sub_820F9278(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r3,4272(r31)
	REX_STORE_U32(r31.u32 + 4272, ctx.r3.u32);
	// lfs f0,5732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5732);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4276(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4276, temp.u32);
loc_820FA1C0:
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

DEFINE_REX_FUNC(sub_820FD160) {
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
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820fd22c
	if (ctx.cr6.lt) goto loc_820FD22C;
	// beq cr6,0x820fd1c4
	if (ctx.cr6.eq) goto loc_820FD1C4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x820fd280
	if (!ctx.cr6.lt) goto loc_820FD280;
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FD1A4;
	sub_820F8D58(ctx, base);
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x820f8db8
	ctx.lr = 0x820FD1B4;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820fd280
	if (!ctx.cr0.eq) goto loc_820FD280;
loc_820FD1BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820fd27c
	goto loc_820FD27C;
loc_820FD1C4:
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FD1D8;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne 0x820fd1f4
	if (!ctx.cr0.eq) goto loc_820FD1F4;
	// bl 0x820f8d58
	ctx.lr = 0x820FD1F0;
	sub_820F8D58(ctx, base);
	// b 0x820fd200
	goto loc_820FD200;
loc_820FD1F4:
	// bl 0x820f8d58
	ctx.lr = 0x820FD1F8;
	sub_820F8D58(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_820FD200:
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FD210;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820fd280
	if (ctx.cr0.eq) goto loc_820FD280;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FD228;
	sub_820F8D58(ctx, base);
	// b 0x820fd1bc
	goto loc_820FD1BC;
loc_820FD22C:
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FD240;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820fd268
	if (!ctx.cr0.eq) goto loc_820FD268;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lhz r11,586(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 586);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820fd268
	if (ctx.cr0.eq) goto loc_820FD268;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FD264;
	sub_820F8D58(ctx, base);
	// b 0x820fd280
	goto loc_820FD280;
loc_820FD268:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FD278;
	sub_820F8D58(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FD27C:
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_820FD280:
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lbz r11,176(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 176);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820fd2c0
	if (!ctx.cr0.eq) goto loc_820FD2C0;
	// lbz r11,177(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 177);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820fd2c0
	if (!ctx.cr0.eq) goto loc_820FD2C0;
	// lbz r11,178(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 178);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820fd2c0
	if (!ctx.cr0.eq) goto loc_820FD2C0;
	// lbz r11,179(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 179);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820fd2c0
	if (!ctx.cr0.eq) goto loc_820FD2C0;
	// lbz r11,180(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 180);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820fd2dc
	if (ctx.cr0.eq) goto loc_820FD2DC;
loc_820FD2C0:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lhz r11,588(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 588);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820fd2dc
	if (ctx.cr6.eq) goto loc_820FD2DC;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x820f8d58
	ctx.lr = 0x820FD2DC;
	sub_820F8D58(ctx, base);
loc_820FD2DC:
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

DEFINE_REX_FUNC(sub_821066D8) {
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
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,22960
	ctx.r11.s64 = ctx.r11.s64 + 22960;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82106714
	if (ctx.cr6.eq) goto loc_82106714;
loc_82106700:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// b 0x821067c8
	goto loc_821067C8;
loc_82106714:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// addi r3,r11,84
	ctx.r3.s64 = ctx.r11.s64 + 84;
	// bl 0x821d6398
	ctx.lr = 0x82106724;
	sub_821D6398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821067c8
	if (!ctx.cr0.eq) goto loc_821067C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,19796(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 19796);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82106700
	if (ctx.cr6.gt) goto loc_82106700;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,15968(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15968);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821067a4
	if (!ctx.cr6.gt) goto loc_821067A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,260(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,264(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 264);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f11,268(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 268);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,2384(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2384);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,16260(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16260);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f13,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,268(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 268, temp.u32);
	// stfs f10,260(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 260, temp.u32);
	// stfs f12,264(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 264, temp.u32);
	// fsel f0,f10,f10,f13
	ctx.f0.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f13.f64;
	// stfs f0,260(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 260, temp.u32);
loc_821067A4:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lfs f0,260(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lfs f0,264(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lfs f0,268(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
loc_821067C8:
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

DEFINE_REX_FUNC(sub_8210DED0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// mulli r7,r4,80
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(80));
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmplwi cr6,r8,21
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 21, ctx.xer);
	// bge cr6,0x8210def4
	if (!ctx.cr6.lt) goto loc_8210DEF4;
	// lis r7,-32173
	ctx.r7.s64 = -2108489728;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r7,-4224
	ctx.r7.s64 = ctx.r7.s64 + -4224;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
loc_8210DEF4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8210df1c
	if (ctx.cr6.eq) goto loc_8210DF1C;
	// lwz r7,0(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,4(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r7,8(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r7,12(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
loc_8210DF1C:
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// stw r7,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r7,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// lwz r7,8(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stw r7,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r7.u32);
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// stfs f1,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f2,52(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stw r8,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// stfs f3,64(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stb r6,74(r11)
	REX_STORE_U8(ctx.r11.u32 + 74, ctx.r6.u8);
	// stfs f4,68(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stb r9,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, ctx.r9.u8);
	// stfs f5,56(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// sth r10,72(r11)
	REX_STORE_U16(ctx.r11.u32 + 72, ctx.r10.u16);
	// stb r5,75(r11)
	REX_STORE_U8(ctx.r11.u32 + 75, ctx.r5.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821104B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f2,100(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// fsubs f0,f3,f4
	ctx.f0.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// addi r10,r11,29176
	ctx.r10.s64 = ctx.r11.s64 + 29176;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r10,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// fdivs f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f5.f64));
	// stw r10,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// lwz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stw r10,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// lwz r10,12(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f3,124(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// sth r11,18(r3)
	REX_STORE_U16(ctx.r3.u32 + 18, ctx.r11.u16);
	// stfs f4,128(r3)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stb r11,132(r3)
	REX_STORE_U8(ctx.r3.u32 + 132, ctx.r11.u8);
	// stw r10,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82110FB8) {
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
	// bl 0x822d4e60
	ctx.lr = 0x82110FC0;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x822d4f30
	ctx.lr = 0x82110FC8;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r6,132(r3)
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r6.u32);
	// li r29,1
	r29.s64 = 1;
	// stw r4,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r4.u32);
	// addi r11,r11,29380
	ctx.r11.s64 = ctx.r11.s64 + 29380;
	// stw r29,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r29.u32);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r10,-8304
	ctx.r10.s64 = ctx.r10.s64 + -8304;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// addi r5,r11,29368
	ctx.r5.s64 = ctx.r11.s64 + 29368;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,324(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 324);
	// bl 0x821af9d8
	ctx.lr = 0x82111018;
	sub_821AF9D8(ctx, base);
	// bl 0x820e4bb0
	ctx.lr = 0x8211101C;
	sub_820E4BB0(ctx, base);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,128(r30)
	REX_STORE_U32(r30.u32 + 128, ctx.r3.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r28,0
	r28.s64 = 0;
	// li r8,60
	ctx.r8.s64 = 60;
	// lwz r11,-5012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -5012);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lfs f26,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f26.f64 = double(temp.f32);
	// stb r29,110(r30)
	REX_STORE_U8(r30.u32 + 110, r29.u8);
	// stfs f26,120(r30)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(r30.u32 + 120, temp.u32);
	// std r29,80(r30)
	REX_STORE_U64(r30.u32 + 80, r29.u64);
	// sth r8,88(r30)
	REX_STORE_U16(r30.u32 + 88, ctx.r8.u16);
	// stb r29,90(r30)
	REX_STORE_U8(r30.u32 + 90, r29.u8);
	// stb r28,91(r30)
	REX_STORE_U8(r30.u32 + 91, r28.u8);
	// beq cr6,0x82111068
	if (ctx.cr6.eq) goto loc_82111068;
	// stw r31,92(r30)
	REX_STORE_U32(r30.u32 + 92, r31.u32);
loc_82111068:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r28,109(r30)
	REX_STORE_U8(r30.u32 + 109, r28.u8);
	// beq cr6,0x8211107c
	if (ctx.cr6.eq) goto loc_8211107C;
	// stw r3,100(r30)
	REX_STORE_U32(r30.u32 + 100, ctx.r3.u32);
	// stb r11,104(r30)
	REX_STORE_U8(r30.u32 + 104, ctx.r11.u8);
loc_8211107C:
	// li r5,3840
	ctx.r5.s64 = 3840;
	// stb r29,105(r30)
	REX_STORE_U8(r30.u32 + 105, r29.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r28,106(r30)
	REX_STORE_U8(r30.u32 + 106, r28.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r28,107(r30)
	REX_STORE_U8(r30.u32 + 107, r28.u8);
	// sth r29,18(r30)
	REX_STORE_U16(r30.u32 + 18, r29.u16);
	// bl 0x822d5870
	ctx.lr = 0x8211109C;
	sub_822D5870(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f26,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// lfs f31,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,29364(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 29364);
	f30.f64 = double(temp.f32);
	// lfs f29,26632(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 26632);
	f29.f64 = double(temp.f32);
	// lfs f27,2012(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2012);
	f27.f64 = double(temp.f32);
	// stfs f31,160(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfs f28,29360(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 29360);
	f28.f64 = double(temp.f32);
	// stfs f31,164(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// b 0x821110e4
	goto loc_821110E4;
loc_821110E0:
	// lwz r26,396(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
loc_821110E4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821dcf68
	ctx.lr = 0x821110F0;
	sub_821DCF68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// bne 0x82111134
	if (!ctx.cr0.eq) goto loc_82111134;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stfs f27,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f27,132(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f27,136(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f27,140(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r8,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// b 0x82111168
	goto loc_82111168;
loc_82111134:
	// stfs f26,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stfs f26,148(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f26,152(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f26,156(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
loc_82111168:
	// stfs f29,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82204c48
	ctx.lr = 0x82111180;
	sub_82204C48(ctx, base);
	// lfs f13,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,180(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f0,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f10,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lwz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// fadds f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// lwz r3,8(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r26,0(r9)
	r26.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// fadds f11,f12,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 + f29.f64));
	// lwz r25,4(r9)
	r25.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stfs f31,-16(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + -16, temp.u32);
	// lwz r24,8(r9)
	r24.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stfs f31,-12(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + -12, temp.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stfs f30,48(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// stfs f31,52(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// stw r5,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r5.u32);
	// stfs f31,112(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// stw r4,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r4.u32);
	// stfs f30,116(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 116, temp.u32);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// addi r23,r1,96
	r23.s64 = ctx.r1.s64 + 96;
	// stw r10,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// addi r22,r1,112
	r22.s64 = ctx.r1.s64 + 112;
	// stw r9,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r9.u32);
	// addi r20,r1,160
	r20.s64 = ctx.r1.s64 + 160;
	// stw r26,80(r31)
	REX_STORE_U32(r31.u32 + 80, r26.u32);
	// stw r25,84(r31)
	REX_STORE_U32(r31.u32 + 84, r25.u32);
	// stw r24,88(r31)
	REX_STORE_U32(r31.u32 + 88, r24.u32);
	// lwz r21,0(r6)
	r21.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r4,0(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r3,4(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r26,8(r8)
	r26.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r19,4(r6)
	r19.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r25,4(r7)
	r25.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r24,8(r7)
	r24.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r7,12(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r5,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r5.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r4,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r4.u32);
	// stw r3,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r3.u32);
	// stw r26,72(r31)
	REX_STORE_U32(r31.u32 + 72, r26.u32);
	// stw r8,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r8.u32);
	// stw r10,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r10.u32);
	// stw r25,132(r31)
	REX_STORE_U32(r31.u32 + 132, r25.u32);
	// stw r24,136(r31)
	REX_STORE_U32(r31.u32 + 136, r24.u32);
	// stw r7,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r7.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// fadds f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 + f28.f64));
	// lwz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 4);
	// stfs f30,176(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 176, temp.u32);
	// lwz r8,8(r23)
	ctx.r8.u64 = REX_LOAD_U32(r23.u32 + 8);
	// stfs f30,180(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 180, temp.u32);
	// lwz r5,12(r23)
	ctx.r5.u64 = REX_LOAD_U32(r23.u32 + 12);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r4,8(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r3,0(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 0);
	// lwz r25,4(r22)
	r25.u64 = REX_LOAD_U32(r22.u32 + 4);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r6,12(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// addi r7,r31,256
	ctx.r7.s64 = r31.s64 + 256;
	// lwz r24,12(r22)
	r24.u64 = REX_LOAD_U32(r22.u32 + 12);
	// addi r26,r31,272
	r26.s64 = r31.s64 + 272;
	// stw r4,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r4.u32);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stw r3,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r3.u32);
	// stw r25,212(r31)
	REX_STORE_U32(r31.u32 + 212, r25.u32);
	// cmpwi cr6,r28,12
	ctx.cr6.compare<int32_t>(r28.s32, 12, ctx.xer);
	// stw r6,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r6.u32);
	// stw r11,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r11.u32);
	// stw r29,252(r31)
	REX_STORE_U32(r31.u32 + 252, r29.u32);
	// stw r24,220(r31)
	REX_STORE_U32(r31.u32 + 220, r24.u32);
	// lwz r23,8(r22)
	r23.u64 = REX_LOAD_U32(r22.u32 + 8);
	// lwz r22,4(r20)
	r22.u64 = REX_LOAD_U32(r20.u32 + 4);
	// lwz r18,8(r20)
	r18.u64 = REX_LOAD_U32(r20.u32 + 8);
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// lwz r4,12(r20)
	ctx.r4.u64 = REX_LOAD_U32(r20.u32 + 12);
	// stw r21,144(r31)
	REX_STORE_U32(r31.u32 + 144, r21.u32);
	// stw r19,148(r31)
	REX_STORE_U32(r31.u32 + 148, r19.u32);
	// stw r23,216(r31)
	REX_STORE_U32(r31.u32 + 216, r23.u32);
	// stw r10,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r10.u32);
	// lwz r6,12(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r25,4(r9)
	r25.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r8,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r8.u32);
	// stw r5,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r5.u32);
	// stw r11,272(r31)
	REX_STORE_U32(r31.u32 + 272, ctx.r11.u32);
	// addi r31,r31,320
	r31.s64 = r31.s64 + 320;
	// stw r22,4(r26)
	REX_STORE_U32(r26.u32 + 4, r22.u32);
	// stw r18,8(r26)
	REX_STORE_U32(r26.u32 + 8, r18.u32);
	// stw r6,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r6.u32);
	// stw r4,12(r26)
	REX_STORE_U32(r26.u32 + 12, ctx.r4.u32);
	// stw r3,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// stw r25,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, r25.u32);
	// stw r9,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// lfs f0,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + f28.f64));
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 0, temp.u32);
	// blt cr6,0x821110e0
	if (ctx.cr6.lt) goto loc_821110E0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x822d4f7c
	ctx.lr = 0x82111398;
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_821200E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821200E8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r29,r11,-8304
	r29.s64 = ctx.r11.s64 + -8304;
	// lwz r11,-32480(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
	// addi r31,r11,80
	r31.s64 = ctx.r11.s64 + 80;
	// addi r5,r31,12
	ctx.r5.s64 = r31.s64 + 12;
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// lhz r30,88(r11)
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82120120
	if (ctx.cr6.eq) goto loc_82120120;
	// mulli r4,r30,80
	ctx.r4.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(80));
	// lwz r3,496(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 496);
	// bl 0x82190670
	ctx.lr = 0x82120120;
	sub_82190670(ctx, base);
loc_82120120:
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// addi r5,r31,160
	ctx.r5.s64 = r31.s64 + 160;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212013c
	if (ctx.cr6.eq) goto loc_8212013C;
	// rlwinm r4,r30,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,496(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 496);
	// bl 0x82190670
	ctx.lr = 0x8212013C;
	sub_82190670(ctx, base);
loc_8212013C:
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,29820
	ctx.r8.s64 = ctx.r11.s64 + 29820;
	// lwz r11,29816(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 29816);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,16(r8)
	REX_STORE_U32(ctx.r8.u32 + 16, ctx.r10.u32);
	// stw r11,29816(r9)
	REX_STORE_U32(ctx.r9.u32 + 29816, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82121EB0) {
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
	ctx.lr = 0x82121EB8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// addi r30,r4,1
	r30.s64 = ctx.r4.s64 + 1;
	// bl 0x82121c98
	ctx.lr = 0x82121ED4;
	sub_82121C98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82121f64
	if (ctx.cr0.eq) goto loc_82121F64;
	// lhz r11,98(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 98);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// beq cr6,0x82121f64
	if (ctx.cr6.eq) goto loc_82121F64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x82121f64
	if (!ctx.cr6.gt) goto loc_82121F64;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,344(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// bl 0x820e6930
	ctx.lr = 0x82121F08;
	sub_820E6930(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// beq cr6,0x82121f64
	if (ctx.cr6.eq) goto loc_82121F64;
	// extsw r11,r29
	ctx.r11.s64 = r29.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,2388(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2388);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f13,1836(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1836);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82121d38
	ctx.lr = 0x82121F64;
	sub_82121D38(ctx, base);
loc_82121F64:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821245A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821245A8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// lfs f2,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r11,r11,742
	ctx.r11.s64 = ctx.r11.s64 + 742;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x820e0130
	ctx.lr = 0x821245D0;
	sub_820E0130(ctx, base);
	// lfs f0,10312(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 10312);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,15628(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15628);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,27892(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 27892);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfsx f0,r30,r31
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + r31.u32, temp.u32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82124600
	if (!ctx.cr6.gt) goto loc_82124600;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x82124614
	goto loc_82124614;
loc_82124600:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,-30144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30144);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82124618
	if (!ctx.cr6.lt) goto loc_82124618;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_82124614:
	// stfsx f0,r30,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + r31.u32, temp.u32);
loc_82124618:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82126988) {
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
	ctx.lr = 0x82126990;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,116(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lwz r28,116(r4)
	r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 116);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r10,-27648
	r31.s64 = ctx.r10.s64 + -27648;
	// beq cr6,0x821269c0
	if (ctx.cr6.eq) goto loc_821269C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82126498
	ctx.lr = 0x821269C0;
	sub_82126498(ctx, base);
loc_821269C0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x821269d4
	if (ctx.cr6.eq) goto loc_821269D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82126498
	ctx.lr = 0x821269D4;
	sub_82126498(ctx, base);
loc_821269D4:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r11,320(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 320);
	// cmpwi cr6,r11,782
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 782, ctx.xer);
	// beq cr6,0x82126a64
	if (ctx.cr6.eq) goto loc_82126A64;
	// cmpwi cr6,r11,269
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 269, ctx.xer);
	// beq cr6,0x82126a64
	if (ctx.cr6.eq) goto loc_82126A64;
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// lwz r10,424(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 424);
	// lwz r11,488(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 488);
	// addi r9,r9,-24048
	ctx.r9.s64 = ctx.r9.s64 + -24048;
	// lwz r8,428(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 428);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// lbz r9,1(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// beq cr6,0x82126a14
	if (ctx.cr6.eq) goto loc_82126A14;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x82126a30
	if (!ctx.cr6.eq) goto loc_82126A30;
loc_82126A14:
	// lwz r11,492(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 492);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82126b1c
	if (ctx.cr6.eq) goto loc_82126B1C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82126b1c
	if (ctx.cr6.eq) goto loc_82126B1C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x82126a44
	if (ctx.cr6.eq) goto loc_82126A44;
loc_82126A30:
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x82126a48
	goto loc_82126A48;
loc_82126A44:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82126A48:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82126ae4
	if (ctx.cr6.eq) goto loc_82126AE4;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// b 0x82126ae8
	goto loc_82126AE8;
loc_82126A64:
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// lwz r10,432(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 432);
	// lwz r11,504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 504);
	// addi r9,r9,-24048
	ctx.r9.s64 = ctx.r9.s64 + -24048;
	// lwz r8,436(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 436);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// lbz r9,1(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// beq cr6,0x82126a8c
	if (ctx.cr6.eq) goto loc_82126A8C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x82126aa8
	if (!ctx.cr6.eq) goto loc_82126AA8;
loc_82126A8C:
	// lwz r11,508(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 508);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82126b1c
	if (ctx.cr6.eq) goto loc_82126B1C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82126b1c
	if (ctx.cr6.eq) goto loc_82126B1C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x82126ac0
	if (ctx.cr6.eq) goto loc_82126AC0;
loc_82126AA8:
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// subfic r10,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r10.u64 = static_cast<uint64_t>(3) - ctx.r11.u64;
	// b 0x82126ac4
	goto loc_82126AC4;
loc_82126AC0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82126AC4:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82126ae4
	if (ctx.cr6.eq) goto loc_82126AE4;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.u64 = static_cast<uint64_t>(3) - ctx.r11.u64;
	// b 0x82126ae8
	goto loc_82126AE8;
loc_82126AE4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82126AE8:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82126af4
	if (ctx.cr6.lt) goto loc_82126AF4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82126AF4:
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,13696
	ctx.r10.s64 = ctx.r10.s64 + 13696;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,70
	ctx.r6.s64 = 70;
	// li r3,24
	ctx.r3.s64 = 24;
	// lfsx f2,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2024(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2024);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212b468
	ctx.lr = 0x82126B1C;
	sub_8212B468(ctx, base);
loc_82126B1C:
	// lwz r10,432(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 432);
	// addi r11,r31,432
	ctx.r11.s64 = r31.s64 + 432;
	// lwz r9,436(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 436);
	// addi r11,r31,504
	ctx.r11.s64 = r31.s64 + 504;
	// addi r11,r31,424
	ctx.r11.s64 = r31.s64 + 424;
	// addi r11,r31,488
	ctx.r11.s64 = r31.s64 + 488;
	// stw r10,504(r31)
	REX_STORE_U32(r31.u32 + 504, ctx.r10.u32);
	// stw r9,508(r31)
	REX_STORE_U32(r31.u32 + 508, ctx.r9.u32);
	// lwz r10,424(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 424);
	// lwz r11,428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 428);
	// stw r11,492(r31)
	REX_STORE_U32(r31.u32 + 492, ctx.r11.u32);
	// stw r10,488(r31)
	REX_STORE_U32(r31.u32 + 488, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8212CF78) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e5c
	ctx.lr = 0x8212CF80;
	// stfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -136, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// lha r31,98(r3)
	r31.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 98));
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r18,r5
	r18.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// extsb r17,r11
	r17.s64 = ctx.r11.s8;
	// blt cr6,0x8212cfc8
	if (ctx.cr6.lt) goto loc_8212CFC8;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// ble cr6,0x8212cfb8
	if (!ctx.cr6.gt) goto loc_8212CFB8;
	// cmpwi cr6,r4,4106
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4106, ctx.xer);
	// bne cr6,0x8212cfc8
	if (!ctx.cr6.eq) goto loc_8212CFC8;
loc_8212CFB8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8218efb0
	ctx.lr = 0x8212CFC8;
	sub_8218EFB0(ctx, base);
loc_8212CFC8:
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// rlwinm r28,r31,2,0,29
	r28.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-9760
	ctx.r11.s64 = ctx.r11.s64 + -9760;
	// clrlwi r22,r24,20
	r22.u64 = r24.u32 & 0xFFF;
	// li r21,0
	r21.s64 = 0;
	// mulli r26,r22,50
	r26.s64 = static_cast<int64_t>(r22.u64 * static_cast<uint64_t>(50));
	// lwzx r25,r28,r11
	r25.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// add r30,r26,r25
	r30.u64 = r26.u64 + r25.u64;
	// addi r27,r17,1
	r27.s64 = r17.s64 + 1;
	// li r29,-1
	r29.s64 = -1;
	// mr r23,r21
	r23.u64 = r21.u64;
	// lbz r11,49(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 49);
	// extsb r31,r11
	r31.s64 = ctx.r11.s8;
	// mr r19,r31
	r19.u64 = r31.u64;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(r31.s32, 32, ctx.xer);
	// bne cr6,0x8212d048
	if (!ctx.cr6.eq) goto loc_8212D048;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,348(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 348);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8212d02c
	if (!ctx.cr6.eq) goto loc_8212D02C;
	// lha r3,98(r20)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r20.u32 + 98));
	// bl 0x821c9150
	ctx.lr = 0x8212D024;
	sub_821C9150(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8212d038
	if (!ctx.cr0.eq) goto loc_8212D038;
loc_8212D02C:
	// li r19,2
	r19.s64 = 2;
	// li r31,2
	r31.s64 = 2;
	// b 0x8212d048
	goto loc_8212D048;
loc_8212D038:
	// lbz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 48);
	// li r19,1
	r19.s64 = 1;
	// li r31,1
	r31.s64 = 1;
	// extsb r23,r11
	r23.s64 = ctx.r11.s8;
loc_8212D048:
	// lwz r11,19428(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 19428);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r10,-29156
	ctx.r5.s64 = ctx.r10.s64 + -29156;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x821af9d8
	ctx.lr = 0x8212D064;
	sub_821AF9D8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-20688
	ctx.r6.s64 = ctx.r11.s64 + -20688;
	// bl 0x82129d78
	ctx.lr = 0x8212D07C;
	sub_82129D78(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// lbz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 48);
	// divw r11,r18,r11
	ctx.r11.u64 = uint32_t((ctx.r11.s32 && !(r18.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? r18.s32 / ctx.r11.s32 : 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// mulli r11,r11,48
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(48));
	// subf r11,r11,r18
	ctx.r11.u64 = r18.u64 - ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8212d23c
	if (!ctx.cr6.lt) goto loc_8212D23C;
	// cmpwi cr6,r18,47
	ctx.cr6.compare<int32_t>(r18.s32, 47, ctx.xer);
	// bgt cr6,0x8212d14c
	if (ctx.cr6.gt) goto loc_8212D14C;
	// cmpwi cr6,r24,4106
	ctx.cr6.compare<int32_t>(r24.s32, 4106, ctx.xer);
	// ble cr6,0x8212d138
	if (!ctx.cr6.gt) goto loc_8212D138;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r10,r11,-23696
	ctx.r10.s64 = ctx.r11.s64 + -23696;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8212D0B8:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8212d130
	if (ctx.cr6.eq) goto loc_8212D130;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 + 12;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8212d0b8
	if (ctx.cr6.lt) goto loc_8212D0B8;
	// addi r11,r24,-8203
	ctx.r11.s64 = r24.s64 + -8203;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r21,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r21.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r3,9
	ctx.r3.s64 = 9;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r6,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r3,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwzx r27,r11,r9
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r6,r7,-20688
	ctx.r6.s64 = ctx.r7.s64 + -20688;
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r31,r11,r8
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// mr r29,r18
	r29.u64 = r18.u64;
	// bl 0x82129d78
	ctx.lr = 0x8212D12C;
	sub_82129D78(ctx, base);
	// b 0x8212d19c
	goto loc_8212D19C;
loc_8212D130:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8212d244
	goto loc_8212D244;
loc_8212D138:
	// add r11,r26,r23
	ctx.r11.u64 = r26.u64 + r23.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// lbzx r11,r11,r18
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r18.u32);
	// extsb r29,r11
	r29.s64 = ctx.r11.s8;
	// b 0x8212d19c
	goto loc_8212D19C;
loc_8212D14C:
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r11,r11,-9584
	ctx.r11.s64 = ctx.r11.s64 + -9584;
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8212d23c
	if (ctx.cr0.eq) goto loc_8212D23C;
loc_8212D164:
	// cmpw cr6,r10,r18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r18.s32, ctx.xer);
	// bne cr6,0x8212d190
	if (!ctx.cr6.eq) goto loc_8212D190;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r22.s32, ctx.xer);
	// bne cr6,0x8212d190
	if (!ctx.cr6.eq) goto loc_8212D190;
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// lbzx r10,r10,r25
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + r25.u32);
	// extsb r29,r10
	r29.s64 = ctx.r10.s8;
loc_8212D190:
	// lbzu r10,3(r11)
	ea = 3 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8212d164
	if (!ctx.cr0.eq) goto loc_8212D164;
loc_8212D19C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x8212d23c
	if (ctx.cr6.lt) goto loc_8212D23C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8212a348
	ctx.lr = 0x8212D1B0;
	sub_8212A348(ctx, base);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x8212d23c
	if (!ctx.cr6.lt) goto loc_8212D23C;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x82203138
	ctx.lr = 0x8212D1C0;
	sub_82203138(ctx, base);
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x82203138
	ctx.lr = 0x8212D1C8;
	sub_82203138(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r19,-1
	ctx.r10.s64 = r19.s64 + -1;
	// stw r20,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r20.u32);
	// stw r29,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r29.u32);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lfs f31,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x8212c610
	ctx.lr = 0x8212D1EC;
	sub_8212C610(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// sth r3,152(r1)
	REX_STORE_U16(ctx.r1.u32 + 152, ctx.r3.u16);
	// stfs f31,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r27,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r27.u32);
	// stw r31,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// stw r29,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r21,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r21.u32);
	// addi r3,r10,15284
	ctx.r3.s64 = ctx.r10.s64 + 15284;
	// sth r21,154(r1)
	REX_STORE_U16(ctx.r1.u32 + 154, r21.u16);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// bl 0x82203fe0
	ctx.lr = 0x8212D228;
	sub_82203FE0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8212d240
	if (!ctx.cr0.eq) goto loc_8212D240;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8217a600
	ctx.lr = 0x8212D238;
	sub_8217A600(ctx, base);
	// b 0x8212d240
	goto loc_8212D240;
loc_8212D23C:
	// li r31,-1
	r31.s64 = -1;
loc_8212D240:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8212D244:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822d4eac
	return;
}

DEFINE_REX_FUNC(sub_82136640) {
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// addi r31,r11,21264
	r31.s64 = ctx.r11.s64 + 21264;
	// addi r3,r10,23232
	ctx.r3.s64 = ctx.r10.s64 + 23232;
	// addi r5,r31,52
	ctx.r5.s64 = r31.s64 + 52;
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// bl 0x82132f78
	ctx.lr = 0x8213666C;
	sub_82132F78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d6450
	ctx.lr = 0x8213667C;
	sub_822D6450(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,560
	ctx.r5.s64 = 560;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x8213668C;
	sub_822D5870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822d6450
	ctx.lr = 0x8213669C;
	sub_822D6450(ctx, base);
	// li r10,29
	ctx.r10.s64 = 29;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r31,527
	ctx.r11.s64 = r31.s64 + 527;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821366AC:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x821366ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821366AC;
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

DEFINE_REX_FUNC(sub_8213C5E8) {
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
	// bl 0x822d4e54
	ctx.lr = 0x8213C5F0;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x822d4f00
	ctx.lr = 0x8213C5F8;
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82137568
	ctx.lr = 0x8213C60C;
	sub_82137568(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// addi r31,r11,23912
	r31.s64 = ctx.r11.s64 + 23912;
	// addi r17,r10,20556
	r17.s64 = ctx.r10.s64 + 20556;
	// li r18,0
	r18.s64 = 0;
	// li r16,1
	r16.s64 = 1;
	// lwz r9,120(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 120);
	// addi r30,r9,1
	r30.s64 = ctx.r9.s64 + 1;
	// lwz r11,23912(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 23912);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// lhz r11,524(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 524);
	// clrlwi r29,r11,24
	r29.u64 = ctx.r11.u32 & 0xFF;
	// blt cr6,0x8213c66c
	if (ctx.cr6.lt) goto loc_8213C66C;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bge cr6,0x8213c6ec
	if (!ctx.cr6.lt) goto loc_8213C6EC;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// rlwinm r4,r11,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821356e0
	ctx.lr = 0x8213C660;
	sub_821356E0(ctx, base);
	// lwz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// li r3,9
	ctx.r3.s64 = 9;
	// b 0x8213c6e0
	goto loc_8213C6E0;
loc_8213C66C:
	// mr r27,r18
	r27.u64 = r18.u64;
	// mr r28,r18
	r28.u64 = r18.u64;
loc_8213C674:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821dcf68
	ctx.lr = 0x8213C680;
	sub_821DCF68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8213c6cc
	if (ctx.cr0.eq) goto loc_8213C6CC;
	// extsb r9,r27
	ctx.r9.s64 = r27.s8;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// bge cr6,0x8213c6cc
	if (!ctx.cr6.lt) goto loc_8213C6CC;
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// slw r8,r16,r28
	ctx.r8.u64 = r28.u8 & 0x20 ? 0 : (r16.u32 << (r28.u8 & 0x3F));
	// lbzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r29.u32);
	// lwz r10,8(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 8);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// and. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213c6cc
	if (ctx.cr0.eq) goto loc_8213C6CC;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// extsb r27,r11
	r27.s64 = ctx.r11.s8;
loc_8213C6CC:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpwi cr6,r28,31
	ctx.cr6.compare<int32_t>(r28.s32, 31, ctx.xer);
	// blt cr6,0x8213c674
	if (ctx.cr6.lt) goto loc_8213C674;
	// extsb r6,r27
	ctx.r6.s64 = r27.s8;
	// li r3,8
	ctx.r3.s64 = 8;
loc_8213C6E0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821379b0
	ctx.lr = 0x8213C6EC;
	sub_821379B0(ctx, base);
loc_8213C6EC:
	// mr r15,r18
	r15.u64 = r18.u64;
	// mr r28,r18
	r28.u64 = r18.u64;
	// bl 0x820e6960
	ctx.lr = 0x8213C6F8;
	sub_820E6960(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f14,f1
	ctx.fpscr.disableFlushMode();
	f14.f64 = ctx.f1.f64;
	// lfs f15,26840(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26840);
	f15.f64 = double(temp.f32);
	// fmr f1,f15
	ctx.f1.f64 = f15.f64;
	// bl 0x820e6950
	ctx.lr = 0x8213C70C;
	sub_820E6950(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x8213d1f0
	if (ctx.cr6.lt) goto loc_8213D1F0;
	// bl 0x8212fe30
	ctx.lr = 0x8213C71C;
	sub_8212FE30(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r20,r11,432
	r20.s64 = ctx.r11.s64 + 432;
	// addi r21,r10,13128
	r21.s64 = ctx.r10.s64 + 13128;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213c774
	if (!ctx.cr6.eq) goto loc_8213C774;
	// bl 0x821307d0
	ctx.lr = 0x8213C73C;
	sub_821307D0(ctx, base);
	// lwz r10,76(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 76);
	// lwz r11,220(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 220);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8213c770
	if (!ctx.cr6.eq) goto loc_8213C770;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213c770
	if (ctx.cr6.eq) goto loc_8213C770;
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// addi r10,r21,12
	ctx.r10.s64 = r21.s64 + 12;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// lwzx r28,r11,r10
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x8213c774
	goto loc_8213C774;
loc_8213C770:
	// mr r28,r18
	r28.u64 = r18.u64;
loc_8213C774:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8213ccd8
	if (ctx.cr6.lt) goto loc_8213CCD8;
	// beq cr6,0x8213cce0
	if (ctx.cr6.eq) goto loc_8213CCE0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8213c794
	if (ctx.cr6.lt) goto loc_8213C794;
	// beq cr6,0x8213c79c
	if (ctx.cr6.eq) goto loc_8213C79C;
	// b 0x8213d1f0
	goto loc_8213D1F0;
loc_8213C794:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
loc_8213C79C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mr r30,r18
	r30.u64 = r18.u64;
	// mr r29,r18
	r29.u64 = r18.u64;
	// addi r23,r10,1
	r23.s64 = ctx.r10.s64 + 1;
	// lhz r11,524(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 524);
	// lfs f16,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f16.f64 = double(temp.f32);
	// fmr f31,f16
	f31.f64 = f16.f64;
	// clrlwi r22,r11,24
	r22.u64 = ctx.r11.u32 & 0xFF;
	// lis r11,768
	ctx.r11.s64 = 50331648;
	// ori r21,r11,535
	r21.u64 = ctx.r11.u64 | 535;
loc_8213C7CC:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x821dcf68
	ctx.lr = 0x8213C7D8;
	sub_821DCF68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8213c874
	if (ctx.cr0.eq) goto loc_8213C874;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(r29.s32, 8, ctx.xer);
	// bge cr6,0x8213c874
	if (!ctx.cr6.lt) goto loc_8213C874;
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// slw r9,r16,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (r16.u32 << (r30.u8 & 0x3F));
	// lbzx r11,r22,r11
	ctx.r11.u64 = REX_LOAD_U8(r22.u32 + ctx.r11.u32);
	// lwz r10,8(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 8);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213c874
	if (ctx.cr0.eq) goto loc_8213C874;
	// add r3,r30,r21
	ctx.r3.u64 = r30.u64 + r21.u64;
	// lwz r4,344(r20)
	ctx.r4.u64 = REX_LOAD_U32(r20.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x8213C824;
	sub_820E68B8(ctx, base);
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
	// b 0x8213c848
	goto loc_8213C848;
loc_8213C82C:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne cr6,0x8213c848
	if (!ctx.cr6.eq) goto loc_8213C848;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213c848
	if (ctx.cr0.eq) goto loc_8213C848;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8213C848:
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8213c82c
	if (!ctx.cr0.eq) goto loc_8213C82C;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmadds f31,f0,f15,f31
	f31.f64 = double(float(std::fma(ctx.f0.f64, f15.f64, f31.f64)));
loc_8213C874:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,31
	ctx.cr6.compare<int32_t>(r30.s32, 31, ctx.xer);
	// blt cr6,0x8213c7cc
	if (ctx.cr6.lt) goto loc_8213C7CC;
	// fsubs f31,f31,f15
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f31.f64 - f15.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f30,-24028(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24028);
	f30.f64 = double(temp.f32);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lfs f17,-24032(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24032);
	f17.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(f31.f64, f30.f64);
	// ble cr6,0x8213c96c
	if (!ctx.cr6.gt) goto loc_8213C96C;
	// rlwinm. r10,r28,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8213c8cc
	if (ctx.cr0.eq) goto loc_8213C8CC;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f16
	ctx.cr6.compare(ctx.f0.f64, f16.f64);
	// bge cr6,0x8213c8cc
	if (!ctx.cr6.lt) goto loc_8213C8CC;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// b 0x8213c8f8
	goto loc_8213C8F8;
loc_8213C8CC:
	// rlwinm. r10,r28,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8213c8fc
	if (ctx.cr0.eq) goto loc_8213C8FC;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x8213c8fc
	if (!ctx.cr6.gt) goto loc_8213C8FC;
	// addi r11,r11,-36
	ctx.r11.s64 = ctx.r11.s64 + -36;
loc_8213C8F8:
	// stw r11,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r11.u32);
loc_8213C8FC:
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// std r10,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfs f29,-24036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -24036);
	f29.f64 = double(temp.f32);
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f16
	ctx.cr6.compare(ctx.f0.f64, f16.f64);
	// bge cr6,0x8213c938
	if (!ctx.cr6.lt) goto loc_8213C938;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f2,28312(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28312);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82130b98
	ctx.lr = 0x8213C934;
	sub_82130B98(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
loc_8213C938:
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x8213c96c
	if (!ctx.cr6.gt) goto loc_8213C96C;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f2,f17
	ctx.f2.f64 = f17.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x82130b98
	ctx.lr = 0x8213C968;
	sub_82130B98(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
loc_8213C96C:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f13,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f0,-24040(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24040);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f26,2348(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2348);
	f26.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f18,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	f18.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f19,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	f19.f64 = double(temp.f32);
	// lfs f27,-8492(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -8492);
	f27.f64 = double(temp.f32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lfs f23,28264(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28264);
	f23.f64 = double(temp.f32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lfs f29,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f29.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f30,-24044(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -24044);
	f30.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f22,2000(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2000);
	f22.f64 = double(temp.f32);
	// lis r29,85
	r29.s64 = 5570560;
	// lfs f20,-24048(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -24048);
	f20.f64 = double(temp.f32);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lfs f21,-24052(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -24052);
	f21.f64 = double(temp.f32);
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lfs f24,-24056(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + -24056);
	f24.f64 = double(temp.f32);
	// lis r9,-32175
	ctx.r9.s64 = -2108620800;
	// lfs f28,29404(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 29404);
	f28.f64 = double(temp.f32);
	// lfs f25,-24060(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -24060);
	f25.f64 = double(temp.f32);
	// mr r27,r18
	r27.u64 = r18.u64;
	// mr r24,r18
	r24.u64 = r18.u64;
	// fadds f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// ori r29,r29,9052
	r29.u64 = r29.u64 | 9052;
	// li r19,-10
	r19.s64 = -10;
	// addi r30,r11,-8304
	r30.s64 = ctx.r11.s64 + -8304;
	// addi r26,r10,23928
	r26.s64 = ctx.r10.s64 + 23928;
	// addi r25,r9,23864
	r25.s64 = ctx.r9.s64 + 23864;
loc_8213CA18:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x821dcf68
	ctx.lr = 0x8213CA24;
	sub_821DCF68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8213cc18
	if (ctx.cr0.eq) goto loc_8213CC18;
	// cmpwi cr6,r24,8
	ctx.cr6.compare<int32_t>(r24.s32, 8, ctx.xer);
	// bge cr6,0x8213cc18
	if (!ctx.cr6.lt) goto loc_8213CC18;
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// slw r9,r16,r27
	ctx.r9.u64 = r27.u8 & 0x20 ? 0 : (r16.u32 << (r27.u8 & 0x3F));
	// lbzx r11,r22,r11
	ctx.r11.u64 = REX_LOAD_U8(r22.u32 + ctx.r11.u32);
	// lwz r10,8(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 8);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213cc18
	if (ctx.cr0.eq) goto loc_8213CC18;
	// add r3,r27,r21
	ctx.r3.u64 = r27.u64 + r21.u64;
	// lwz r4,344(r20)
	ctx.r4.u64 = REX_LOAD_U32(r20.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x8213CA70;
	sub_820E68B8(ctx, base);
	// stfs f24,44(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 44, temp.u32);
	// stfs f28,36(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 36, temp.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stfs f31,28(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stfs f25,20(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r6,44(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 44);
	// ld r5,36(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 36);
	// fmr f4,f24
	ctx.f4.f64 = f24.f64;
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// fmr f3,f28
	ctx.f3.f64 = f28.f64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f25
	ctx.f1.f64 = f25.f64;
	// bl 0x820e7188
	ctx.lr = 0x8213CAAC;
	sub_820E7188(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// add r10,r29,r11
	ctx.r10.u64 = r29.u64 + ctx.r11.u64;
	// lwz r10,-32(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8213cac8
	if (ctx.cr6.eq) goto loc_8213CAC8;
	// stw r18,68(r10)
	REX_STORE_U32(ctx.r10.u32 + 68, r18.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
loc_8213CAC8:
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8213cadc
	if (ctx.cr6.eq) goto loc_8213CADC;
	// stb r27,104(r10)
	REX_STORE_U8(ctx.r10.u32 + 104, r27.u8);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
loc_8213CADC:
	// fcmpu cr6,f31,f21
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f21.f64);
	// ble cr6,0x8213cba0
	if (!ctx.cr6.gt) goto loc_8213CBA0;
	// fcmpu cr6,f31,f20
	ctx.cr6.compare(f31.f64, f20.f64);
	// bge cr6,0x8213cba0
	if (!ctx.cr6.lt) goto loc_8213CBA0;
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8213cb10
	if (ctx.cr0.eq) goto loc_8213CB10;
	// lfs f18,164(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 164);
	f18.f64 = double(temp.f32);
	// lfs f19,160(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 160);
	f19.f64 = double(temp.f32);
	// fmuls f0,f18,f22
	ctx.f0.f64 = double(float(f18.f64 * f22.f64));
	// stfs f0,164(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 164, temp.u32);
	// stfs f19,160(r10)
	temp.f32 = float(f19.f64);
	REX_STORE_U32(ctx.r10.u32 + 160, temp.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
loc_8213CB10:
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// fcmpu cr6,f31,f17
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f17.f64);
	// ble cr6,0x8213cb3c
	if (!ctx.cr6.gt) goto loc_8213CB3C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8213cb30
	if (ctx.cr6.eq) goto loc_8213CB30;
	// stw r25,96(r10)
	REX_STORE_U32(ctx.r10.u32 + 96, r25.u32);
	// stb r18,91(r10)
	REX_STORE_U8(ctx.r10.u32 + 91, r18.u8);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
loc_8213CB30:
	// fadds f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64 + f27.f64));
	// fsubs f2,f0,f26
	ctx.f2.f64 = double(float(ctx.f0.f64 - f26.f64));
	// b 0x8213cb78
	goto loc_8213CB78;
loc_8213CB3C:
	// fcmpu cr6,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f28.f64);
	// bge cr6,0x8213cb60
	if (!ctx.cr6.lt) goto loc_8213CB60;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8213cb58
	if (ctx.cr6.eq) goto loc_8213CB58;
	// stb r18,91(r10)
	REX_STORE_U8(ctx.r10.u32 + 91, r18.u8);
	// stw r26,96(r10)
	REX_STORE_U32(ctx.r10.u32 + 96, r26.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
loc_8213CB58:
	// fadds f2,f31,f23
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(f31.f64 + f23.f64));
	// b 0x8213cb78
	goto loc_8213CB78;
loc_8213CB60:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8213cb74
	if (ctx.cr6.eq) goto loc_8213CB74;
	// stfs f19,160(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f19.f64);
	REX_STORE_U32(ctx.r10.u32 + 160, temp.u32);
	// stfs f18,164(r10)
	temp.f32 = float(f18.f64);
	REX_STORE_U32(ctx.r10.u32 + 164, temp.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
loc_8213CB74:
	// fadds f2,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(f31.f64 + f27.f64));
loc_8213CB78:
	// lwzx r3,r29,r11
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82130ec0
	ctx.lr = 0x8213CB88;
	sub_82130EC0(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8213cbb4
	if (ctx.cr6.eq) goto loc_8213CBB4;
	// stw r18,68(r10)
	REX_STORE_U32(ctx.r10.u32 + 68, r18.u32);
	// b 0x8213cbb0
	goto loc_8213CBB0;
loc_8213CBA0:
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8213cbb4
	if (ctx.cr6.eq) goto loc_8213CBB4;
	// stw r19,68(r10)
	REX_STORE_U32(ctx.r10.u32 + 68, r19.u32);
loc_8213CBB0:
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
loc_8213CBB4:
	// lbz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 0);
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8213cbf0
	if (ctx.cr0.eq) goto loc_8213CBF0;
	// addi r10,r28,-1
	ctx.r10.s64 = r28.s64 + -1;
loc_8213CBC8:
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// bne cr6,0x8213cbe4
	if (!ctx.cr6.eq) goto loc_8213CBE4;
	// lbz r9,1(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8213cbe4
	if (ctx.cr0.eq) goto loc_8213CBE4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_8213CBE4:
	// lbz r9,1(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8213cbc8
	if (!ctx.cr0.eq) goto loc_8213CBC8;
loc_8213CBF0:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// std r10,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmadds f31,f0,f15,f31
	f31.f64 = double(float(std::fma(ctx.f0.f64, f15.f64, f31.f64)));
	// b 0x8213cc1c
	goto loc_8213CC1C;
loc_8213CC18:
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
loc_8213CC1C:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpwi cr6,r27,31
	ctx.cr6.compare<int32_t>(r27.s32, 31, ctx.xer);
	// blt cr6,0x8213ca18
	if (ctx.cr6.lt) goto loc_8213CA18;
	// andi. r10,r15,16416
	ctx.r10.u64 = r15.u64 & 16416;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8213d1f0
	if (ctx.cr0.eq) goto loc_8213D1F0;
	// li r10,8
	ctx.r10.s64 = 8;
	// lis r9,85
	ctx.r9.s64 = 5570560;
	// ori r9,r9,9052
	ctx.r9.u64 = ctx.r9.u64 | 9052;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8213CC44:
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8213cc58
	if (ctx.cr6.eq) goto loc_8213CC58;
	// stw r19,68(r10)
	REX_STORE_U32(ctx.r10.u32 + 68, r19.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
loc_8213CC58:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8213cc44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8213CC44;
	// li r3,14
	ctx.r3.s64 = 14;
	// fmr f1,f16
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f16.f64;
	// bl 0x8212bc38
	ctx.lr = 0x8213CC6C;
	sub_8212BC38(ctx, base);
	// lwz r3,164(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 164);
	// bl 0x82101d68
	ctx.lr = 0x8213CC74;
	sub_82101D68(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f28.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r18,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r18.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r16,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r16.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r18,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r18.u32);
	// lfs f7,2332(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2332);
	ctx.f7.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,-32480(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
	// fmr f6,f7
	ctx.f6.f64 = ctx.f7.f64;
	// lfs f5,-24172(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -24172);
	ctx.f5.f64 = double(temp.f32);
	// stw r18,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r18.u32);
	// lfs f4,-24952(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -24952);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,26856(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 26856);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,-24176(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24176);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82104548
	ctx.lr = 0x8213CCC0;
	sub_82104548(ctx, base);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// stw r3,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r3.u32);
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// stw r18,128(r31)
	REX_STORE_U32(r31.u32 + 128, r18.u32);
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
	// b 0x8213d1e8
	goto loc_8213D1E8;
loc_8213CCD8:
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// stw r16,116(r31)
	REX_STORE_U32(r31.u32 + 116, r16.u32);
loc_8213CCE0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm. r10,r28,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f23,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f23.f64 = double(temp.f32);
	// beq 0x8213cd2c
	if (ctx.cr0.eq) goto loc_8213CD2C;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8213cd2c
	if (!ctx.cr6.gt) goto loc_8213CD2C;
	// li r3,18
	ctx.r3.s64 = 18;
	// fmr f1,f23
	ctx.f1.f64 = f23.f64;
	// bl 0x8212bc38
	ctx.lr = 0x8213CD08;
	sub_8212BC38(ctx, base);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8213cd78
	if (!ctx.cr6.lt) goto loc_8213CD78;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8213cd74
	goto loc_8213CD74;
loc_8213CD2C:
	// rlwinm. r11,r28,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213cd90
	if (ctx.cr0.eq) goto loc_8213CD90;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bge cr6,0x8213cd90
	if (!ctx.cr6.lt) goto loc_8213CD90;
	// li r3,18
	ctx.r3.s64 = 18;
	// fmr f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f23.f64;
	// bl 0x8212bc38
	ctx.lr = 0x8213CD4C;
	sub_8212BC38(ctx, base);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// ble cr6,0x8213cd78
	if (!ctx.cr6.gt) goto loc_8213CD78;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8213CD74:
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
loc_8213CD78:
	// lwz r3,184(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213cd94
	if (ctx.cr6.eq) goto loc_8213CD94;
	// bl 0x821c5800
	ctx.lr = 0x8213CD88;
	sub_821C5800(ctx, base);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// stw r18,184(r31)
	REX_STORE_U32(r31.u32 + 184, r18.u32);
loc_8213CD90:
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
loc_8213CD94:
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r9,85
	ctx.r9.s64 = 5570560;
	// addi r23,r10,-8304
	r23.s64 = ctx.r10.s64 + -8304;
	// ori r22,r9,9016
	r22.u64 = ctx.r9.u64 | 9016;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r19,-10
	r19.s64 = -10;
	// li r26,22
	r26.s64 = 22;
	// lwz r10,48(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 48);
	// mr r28,r18
	r28.u64 = r18.u64;
	// lfs f31,-24064(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -24064);
	f31.f64 = double(temp.f32);
	// lwzx r10,r10,r22
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r22.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8213cdd0
	if (ctx.cr6.eq) goto loc_8213CDD0;
	// stw r19,68(r10)
	REX_STORE_U32(ctx.r10.u32 + 68, r19.u32);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
loc_8213CDD0:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// lfs f24,-24952(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24952);
	f24.f64 = double(temp.f32);
	// lfs f25,-24176(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -24176);
	f25.f64 = double(temp.f32);
	// bge cr6,0x8213cf68
	if (!ctx.cr6.lt) goto loc_8213CF68;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f26,-24068(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24068);
	f26.f64 = double(temp.f32);
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f29,-24904(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -24904);
	f29.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f30,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	f30.f64 = double(temp.f32);
	// lfs f27,-24044(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -24044);
	f27.f64 = double(temp.f32);
	// addi r27,r11,26976
	r27.s64 = ctx.r11.s64 + 26976;
	// lfs f28,2348(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2348);
	f28.f64 = double(temp.f32);
	// addi r24,r10,-24076
	r24.s64 = ctx.r10.s64 + -24076;
loc_8213CE28:
	// cmpwi cr6,r28,7
	ctx.cr6.compare<int32_t>(r28.s32, 7, ctx.xer);
	// bge cr6,0x8213cf54
	if (!ctx.cr6.lt) goto loc_8213CF54;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// li r30,-1
	r30.s64 = -1;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8213ce88
	if (!ctx.cr6.eq) goto loc_8213CE88;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213ce54
	if (ctx.cr6.eq) goto loc_8213CE54;
	// lis r30,-256
	r30.s64 = -16777216;
	// ori r30,r30,255
	r30.u64 = r30.u64 | 255;
loc_8213CE54:
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f5,f15
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = f15.f64;
	// li r8,2
	ctx.r8.s64 = 2;
	// fmr f4,f24
	ctx.f4.f64 = f24.f64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// fadds f2,f31,f30
	ctx.f2.f64 = double(float(f31.f64 + f30.f64));
	// fmr f1,f25
	ctx.f1.f64 = f25.f64;
	// bl 0x82102518
	ctx.lr = 0x8213CE74;
	sub_82102518(ctx, base);
	// lwz r11,1856(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 1856);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213ce88
	if (ctx.cr0.eq) goto loc_8213CE88;
	// lis r30,-1
	r30.s64 = -65536;
	// ori r30,r30,255
	r30.u64 = r30.u64 | 255;
loc_8213CE88:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lhz r11,524(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 524);
	// clrlwi r26,r11,24
	r26.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821dcf68
	ctx.lr = 0x8213CEA0;
	sub_821DCF68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8213ceb8
	if (!ctx.cr0.eq) goto loc_8213CEB8;
	// lis r30,-26215
	r30.s64 = -1718026240;
	// stw r24,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// ori r30,r30,39423
	r30.u64 = r30.u64 | 39423;
	// b 0x8213ced0
	goto loc_8213CED0;
loc_8213CEB8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lbz r4,524(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 524);
	// bl 0x821356e0
	ctx.lr = 0x8213CED0;
	sub_821356E0(ctx, base);
loc_8213CED0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821eacb0
	ctx.lr = 0x8213CEDC;
	sub_821EACB0(ctx, base);
	// stfs f26,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// stfs f31,28(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x820e6d50
	ctx.lr = 0x8213CEFC;
	sub_820E6D50(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// fadds f31,f31,f15
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f31.f64 + f15.f64));
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lhz r10,524(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 524);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,528(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 528);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bne cr6,0x8213cf54
	if (!ctx.cr6.eq) goto loc_8213CF54;
	// lwz r11,48(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 48);
	// lwzx r10,r11,r22
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8213cf40
	if (ctx.cr6.eq) goto loc_8213CF40;
	// stw r18,68(r10)
	REX_STORE_U32(ctx.r10.u32 + 68, r18.u32);
	// lwz r11,48(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 48);
loc_8213CF40:
	// lwzx r3,r11,r22
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f30.f64;
	// fsubs f2,f31,f28
	ctx.f2.f64 = double(float(f31.f64 - f28.f64));
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// bl 0x82130ec0
	ctx.lr = 0x8213CF54;
	sub_82130EC0(ctx, base);
loc_8213CF54:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmpwi cr6,r29,12
	ctx.cr6.compare<int32_t>(r29.s32, 12, ctx.xer);
	// blt cr6,0x8213ce28
	if (ctx.cr6.lt) goto loc_8213CE28;
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
loc_8213CF68:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f31,-24036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24036);
	f31.f64 = double(temp.f32);
	// ble cr6,0x8213cf90
	if (!ctx.cr6.gt) goto loc_8213CF90;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f2,28312(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28312);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82130b98
	ctx.lr = 0x8213CF8C;
	sub_82130B98(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
loc_8213CF90:
	// subfic r11,r11,11
	ctx.xer.ca = ctx.r11.u32 <= 11;
	ctx.r11.u64 = static_cast<uint64_t>(11) - ctx.r11.u64;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x8213cfb0
	if (!ctx.cr6.gt) goto loc_8213CFB0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f2,-24032(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24032);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82130b98
	ctx.lr = 0x8213CFB0;
	sub_82130B98(ctx, base);
loc_8213CFB0:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821dcf68
	ctx.lr = 0x8213CFC4;
	sub_821DCF68(ctx, base);
	// lis r25,-32165
	r25.s64 = -2107965440;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8213d01c
	if (ctx.cr0.eq) goto loc_8213D01C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lbz r4,524(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 524);
	// bl 0x82135830
	ctx.lr = 0x8213CFE8;
	sub_82135830(ctx, base);
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213d01c
	if (!ctx.cr6.eq) goto loc_8213D01C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,-32480(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + -32480);
	// lbz r5,524(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 524);
	// bl 0x821ca270
	ctx.lr = 0x8213D00C;
	sub_821CA270(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r3.u32);
	// lfs f0,16360(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16360);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 72, temp.u32);
loc_8213D01C:
	// lis r10,85
	ctx.r10.s64 = 5570560;
	// li r11,8
	ctx.r11.s64 = 8;
	// ori r28,r10,9020
	r28.u64 = ctx.r10.u64 | 9020;
	// mr r27,r18
	r27.u64 = r18.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8213D034:
	// lwz r11,48(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 48);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213d048
	if (ctx.cr6.eq) goto loc_8213D048;
	// stw r19,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, r19.u32);
loc_8213D048:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8213d034
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8213D034;
	// mr r29,r18
	r29.u64 = r18.u64;
loc_8213D054:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821dcf68
	ctx.lr = 0x8213D060;
	sub_821DCF68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8213d0d0
	if (ctx.cr0.eq) goto loc_8213D0D0;
	// cmpwi cr6,r27,8
	ctx.cr6.compare<int32_t>(r27.s32, 8, ctx.xer);
	// bge cr6,0x8213d0d0
	if (!ctx.cr6.lt) goto loc_8213D0D0;
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// slw r9,r16,r29
	ctx.r9.u64 = r29.u8 & 0x20 ? 0 : (r16.u32 << (r29.u8 & 0x3F));
	// lbzx r11,r11,r26
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r26.u32);
	// lwz r10,8(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 8);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213d0d0
	if (ctx.cr0.eq) goto loc_8213D0D0;
	// lwz r11,48(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 48);
	// lwzx r10,r28,r11
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8213d0b8
	if (ctx.cr6.eq) goto loc_8213D0B8;
	// stw r18,68(r10)
	REX_STORE_U32(ctx.r10.u32 + 68, r18.u32);
	// lwz r11,48(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 48);
loc_8213D0B8:
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213d0c8
	if (ctx.cr6.eq) goto loc_8213D0C8;
	// stb r29,104(r11)
	REX_STORE_U8(ctx.r11.u32 + 104, r29.u8);
loc_8213D0C8:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
loc_8213D0D0:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,31
	ctx.cr6.compare<int32_t>(r29.s32, 31, ctx.xer);
	// blt cr6,0x8213d054
	if (ctx.cr6.lt) goto loc_8213D054;
	// andi. r11,r15,32832
	ctx.r11.u64 = r15.u64 & 32832;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213d134
	if (ctx.cr0.eq) goto loc_8213D134;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821dcf68
	ctx.lr = 0x8213D0F4;
	sub_821DCF68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// fmr f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f23.f64;
	// bne 0x8213d10c
	if (!ctx.cr0.eq) goto loc_8213D10C;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x8212bc38
	ctx.lr = 0x8213D108;
	sub_8212BC38(ctx, base);
	// b 0x8213d1f0
	goto loc_8213D1F0;
loc_8213D10C:
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x8212bc38
	ctx.lr = 0x8213D114;
	sub_8212BC38(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
	// lhz r9,524(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 524);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stb r30,528(r11)
	REX_STORE_U8(ctx.r11.u32 + 528, r30.u8);
	// stw r16,56(r31)
	REX_STORE_U32(r31.u32 + 56, r16.u32);
	// b 0x8213d1f0
	goto loc_8213D1F0;
loc_8213D134:
	// andi. r11,r15,16416
	ctx.r11.u64 = r15.u64 & 16416;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213d160
	if (ctx.cr0.eq) goto loc_8213D160;
	// li r3,27
	ctx.r3.s64 = 27;
	// fmr f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f23.f64;
	// bl 0x8212bc38
	ctx.lr = 0x8213D14C;
	sub_8212BC38(ctx, base);
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// stw r16,56(r31)
	REX_STORE_U32(r31.u32 + 56, r16.u32);
	// stw r18,60(r31)
	REX_STORE_U32(r31.u32 + 60, r18.u32);
	// b 0x8213d1f0
	goto loc_8213D1F0;
loc_8213D160:
	// rlwinm. r11,r15,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213d1f0
	if (ctx.cr0.eq) goto loc_8213D1F0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x8213d1f0
	if (!ctx.cr6.gt) goto loc_8213D1F0;
	// li r3,14
	ctx.r3.s64 = 14;
	// fmr f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f23.f64;
	// bl 0x8212bc38
	ctx.lr = 0x8213D17C;
	sub_8212BC38(ctx, base);
	// lwz r3,164(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 164);
	// bl 0x82101d68
	ctx.lr = 0x8213D184;
	sub_82101D68(ctx, base);
	// stw r18,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r18.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,-32480(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + -32480);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r16,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r16.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r18,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r18.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r18,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r18.u32);
	// fmr f4,f24
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f24.f64;
	// lfs f7,2332(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2332);
	ctx.f7.f64 = double(temp.f32);
	// fmr f1,f25
	ctx.f1.f64 = f25.f64;
	// lfs f5,-24172(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24172);
	ctx.f5.f64 = double(temp.f32);
	// fmr f6,f7
	ctx.f6.f64 = ctx.f7.f64;
	// lfs f3,26856(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 26856);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,29404(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 29404);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82104548
	ctx.lr = 0x8213D1C8;
	sub_82104548(ctx, base);
	// stw r3,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r3.u32);
	// lwz r11,48(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 48);
	// lwzx r11,r11,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213d1e0
	if (ctx.cr6.eq) goto loc_8213D1E0;
	// stw r19,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, r19.u32);
loc_8213D1E0:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
loc_8213D1E8:
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
loc_8213D1F0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f2,-24080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24080);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-24084(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24084);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821c5850
	ctx.lr = 0x8213D204;
	sub_821C5850(ctx, base);
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213d278
	if (ctx.cr6.eq) goto loc_8213D278;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,80
	ctx.r10.s64 = ctx.r11.s64 + 80;
	// lfs f0,16172(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16172);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8213d234
	if (ctx.cr6.lt) goto loc_8213D234;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-24088(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24088);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8213d274
	goto loc_8213D274;
loc_8213D234:
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,72(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,-24092(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -24092);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,72(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lfs f0,16620(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16620);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lfs f13,72(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8213d268
	if (!ctx.cr6.lt) goto loc_8213D268;
	// stfs f0,72(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
loc_8213D268:
	// lfs f0,72(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_8213D274:
	// stfs f0,52(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 52, temp.u32);
loc_8213D278:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213d290
	if (ctx.cr6.eq) goto loc_8213D290;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
loc_8213D290:
	// fmr f1,f14
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f14.f64;
	// bl 0x820e6950
	ctx.lr = 0x8213D298;
	sub_820E6950(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x822d4f4c
	ctx.lr = 0x8213D2A4;
	// b 0x822d4ea4
	return;
}

DEFINE_REX_FUNC(sub_8217ABE8) {
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
	ctx.lr = 0x8217ABF0;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f34
	ctx.lr = 0x8217ABF8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r11,-5060
	ctx.r11.s64 = ctx.r11.s64 + -5060;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// stw r4,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f27,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f27.f64 = double(temp.f32);
	// lfs f31,1996(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	f31.f64 = double(temp.f32);
	// addi r30,r10,7808
	r30.s64 = ctx.r10.s64 + 7808;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217ac58
	if (ctx.cr6.eq) goto loc_8217AC58;
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217ac58
	if (ctx.cr0.eq) goto loc_8217AC58;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821188f0
	ctx.lr = 0x8217AC54;
	sub_821188F0(ctx, base);
	// b 0x8217ac70
	goto loc_8217AC70;
loc_8217AC58:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f27,108(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f0,2344(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2344);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_8217AC70:
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// addi r29,r11,25776
	r29.s64 = ctx.r11.s64 + 25776;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82119280
	ctx.lr = 0x8217AC80;
	sub_82119280(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f0,-5128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -5128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,296(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 296, temp.u32);
	// bl 0x821192a0
	ctx.lr = 0x8217AC98;
	sub_821192A0(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// stfs f31,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// addi r26,r31,84
	r26.s64 = r31.s64 + 84;
	// stfs f31,84(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217acbc
	if (ctx.cr6.eq) goto loc_8217ACBC;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
loc_8217ACBC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r6,r30,8
	ctx.r6.s64 = r30.s64 + 8;
	// addi r5,r30,4
	ctx.r5.s64 = r30.s64 + 4;
	// bl 0x820e0e38
	ctx.lr = 0x8217ACCC;
	sub_820E0E38(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x8217ace4
	if (!ctx.cr6.eq) goto loc_8217ACE4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
loc_8217ACE4:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,16032(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16032);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217ad0c
	if (ctx.cr6.eq) goto loc_8217AD0C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8217AD0C:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lbz r11,1827(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1827);
	// bne cr6,0x8217ad3c
	if (!ctx.cr6.eq) goto loc_8217AD3C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f0,16260(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16260);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8217ad44
	goto loc_8217AD44;
loc_8217AD3C:
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
loc_8217AD44:
	// fcfid f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, f27.f64);
	// bge cr6,0x8217ad60
	if (!ctx.cr6.lt) goto loc_8217AD60;
	// stfs f27,92(r31)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
loc_8217AD60:
	// lfs f0,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// li r28,1
	r28.s64 = 1;
	// fdivs f0,f27,f0
	ctx.f0.f64 = double(float(f27.f64 / ctx.f0.f64));
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// stb r28,61(r31)
	REX_STORE_U8(r31.u32 + 61, r28.u8);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-5068
	ctx.r6.s64 = ctx.r11.s64 + -5068;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,774
	ctx.r4.s64 = 774;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7d50
	ctx.lr = 0x8217AD98;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217adb4
	if (ctx.cr0.eq) goto loc_8217ADB4;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lwz r4,112(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// bl 0x8217a8d8
	ctx.lr = 0x8217ADB4;
	sub_8217A8D8(ctx, base);
loc_8217ADB4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r27,r11,-5076
	r27.s64 = ctx.r11.s64 + -5076;
	// lfs f31,15628(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15628);
	f31.f64 = double(temp.f32);
loc_8217ADC4:
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217add8
	if (ctx.cr6.eq) goto loc_8217ADD8;
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
loc_8217ADD8:
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8217ae74
	if (!ctx.cr6.lt) goto loc_8217AE74;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r30,16
	ctx.r6.s64 = r30.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821188f0
	ctx.lr = 0x8217ADF0;
	sub_821188F0(ctx, base);
	// addi r5,r30,16
	ctx.r5.s64 = r30.s64 + 16;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x820e1cc0
	ctx.lr = 0x8217AE00;
	sub_820E1CC0(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lfs f13,16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r8,0
	ctx.r8.s64 = 0;
	// fsubs f28,f27,f13
	f28.f64 = double(float(f27.f64 - ctx.f13.f64));
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,770
	ctx.r4.s64 = 770;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	f30.f64 = double(temp.f32);
	// fmuls f29,f0,f31
	f29.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bl 0x821f7d50
	ctx.lr = 0x8217AE44;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217ae6c
	if (ctx.cr0.eq) goto loc_8217AE6C;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// lwz r4,112(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r9,r31,96
	ctx.r9.s64 = r31.s64 + 96;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f28.f64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x8217a620
	ctx.lr = 0x8217AE6C;
	sub_8217A620(ctx, base);
loc_8217AE6C:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x8217adc4
	goto loc_8217ADC4;
loc_8217AE74:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f80
	ctx.lr = 0x8217AE84;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82182DB8) {
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
	// lis r11,4
	ctx.r11.s64 = 262144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,4448
	ctx.r11.u64 = ctx.r11.u64 | 4448;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x82182e00
	if (ctx.cr6.gt) goto loc_82182E00;
	// li r11,2
	ctx.r11.s64 = 2;
	// addis r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 262144;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,2624
	ctx.r3.s64 = ctx.r3.s64 + 2624;
	// bl 0x82182a60
	ctx.lr = 0x82182DF8;
	sub_82182A60(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_82182E00:
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

DEFINE_REX_FUNC(sub_82184168) {
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
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r30,0
	r30.s64 = 0;
	// std r5,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r5.u64);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// stb r30,4(r31)
	REX_STORE_U8(r31.u32 + 4, r30.u8);
	// ld r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// stw r8,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r8.u32);
	// stb r30,44(r31)
	REX_STORE_U8(r31.u32 + 44, r30.u8);
	// stb r30,45(r31)
	REX_STORE_U8(r31.u32 + 45, r30.u8);
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x821841B8;
	sub_822D4FA0(ctx, base);
	// stb r30,40(r31)
	REX_STORE_U8(r31.u32 + 40, r30.u8);
	// bl 0x822094c8
	ctx.lr = 0x821841C0;
	sub_822094C8(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_821855A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x821855A8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,14
	ctx.r5.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x822d5870
	ctx.lr = 0x821855CC;
	sub_822D5870(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// sth r10,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// bne cr6,0x821855f0
	if (!ctx.cr6.eq) goto loc_821855F0;
	// lis r11,32512
	ctx.r11.s64 = 2130706432;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x821855f4
	goto loc_821855F4;
loc_821855F0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_821855F4:
	// addi r4,r30,102
	ctx.r4.s64 = r30.s64 + 102;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x822d4fa0
	ctx.lr = 0x82185608;
	sub_822D4FA0(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// lhz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 2);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// bne cr6,0x82185630
	if (!ctx.cr6.eq) goto loc_82185630;
	// lhz r10,1288(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 1288);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_82185630:
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r3,80(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 80);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822cb948
	ctx.lr = 0x82185648;
	sub_822CB948(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// lhz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 2);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// bne cr6,0x82185670
	if (!ctx.cr6.eq) goto loc_82185670;
	// lhz r10,1288(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 1288);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_82185670:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8218569c
	if (ctx.cr6.eq) goto loc_8218569C;
	// clrlwi r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82185694
	if (!ctx.cr6.eq) goto loc_82185694;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82184f28
	ctx.lr = 0x82185694;
	sub_82184F28(ctx, base);
loc_82185694:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821856a0
	goto loc_821856A0;
loc_8218569C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821856A0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82188810) {
	REX_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// b 0x82189398
	sub_82189398(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82188E08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,10
	ctx.r11.s64 = 10;
	// li r10,115
	ctx.r10.s64 = 115;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r9,99
	ctx.r9.s64 = 99;
	// li r11,50
	ctx.r11.s64 = 50;
	// stb r10,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stb r9,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// bl 0x822d4fa0
	ctx.lr = 0x82188E44;
	sub_822D4FA0(ctx, base);
	// bl 0x82187b58
	ctx.lr = 0x82188E48;
	sub_82187B58(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// bl 0x82188698
	ctx.lr = 0x82188E54;
	sub_82188698(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82189CE8) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82189D08;
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

DEFINE_REX_FUNC(sub_8218AB50) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8218AB58;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8218abd4
	if (ctx.cr6.eq) goto loc_8218ABD4;
	// addi r29,r11,-4
	r29.s64 = ctx.r11.s64 + -4;
loc_8218AB78:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d6ae8
	ctx.lr = 0x8218AB84;
	sub_822D6AE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8218abc0
	if (ctx.cr0.eq) goto loc_8218ABC0;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// bne cr6,0x8218abc0
	if (!ctx.cr6.eq) goto loc_8218ABC0;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_8218AB98:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8218ab98
	if (!ctx.cr6.eq) goto loc_8218AB98;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lbzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8218abd0
	if (ctx.cr0.eq) goto loc_8218ABD0;
loc_8218ABC0:
	// lwzu r31,4(r29)
	ea = 4 + r29.u32;
	r31.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8218ab78
	if (!ctx.cr6.eq) goto loc_8218AB78;
	// b 0x8218abd4
	goto loc_8218ABD4;
loc_8218ABD0:
	// li r28,1
	r28.s64 = 1;
loc_8218ABD4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8218E108) {
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// addi r3,r11,84
	ctx.r3.s64 = ctx.r11.s64 + 84;
	// lwz r31,-32480(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
	// bl 0x821d63a0
	ctx.lr = 0x8218E134;
	sub_821D63A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8218e14c
	if (ctx.cr0.eq) goto loc_8218E14C;
	// lhz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// sth r11,16(r31)
	REX_STORE_U16(r31.u32 + 16, ctx.r11.u16);
	// b 0x8218e174
	goto loc_8218E174;
loc_8218E14C:
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// lha r10,16(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 16));
	// addi r8,r9,30488
	ctx.r8.s64 = ctx.r9.s64 + 30488;
	// rlwinm r10,r10,0,22,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r10,16(r31)
	REX_STORE_U16(r31.u32 + 16, ctx.r10.u16);
	// std r11,30488(r9)
	REX_STORE_U64(ctx.r9.u32 + 30488, ctx.r11.u64);
	// std r11,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// std r11,16(r8)
	REX_STORE_U64(ctx.r8.u32 + 16, ctx.r11.u64);
	// std r11,24(r8)
	REX_STORE_U64(ctx.r8.u32 + 24, ctx.r11.u64);
loc_8218E174:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r31,2
	r31.s64 = 2;
	// addi r30,r11,-7072
	r30.s64 = ctx.r11.s64 + -7072;
loc_8218E180:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218c2a8
	ctx.lr = 0x8218E188;
	sub_8218C2A8(ctx, base);
	// addis r30,r30,1
	r30.s64 = r30.s64 + 65536;
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,3696
	r30.s64 = r30.s64 + 3696;
	// bne 0x8218e180
	if (!ctx.cr0.eq) goto loc_8218E180;
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

DEFINE_REX_FUNC(sub_82190670) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82190694
	if (!ctx.cr6.eq) goto loc_82190694;
loc_8219068C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82190754
	goto loc_82190754;
loc_82190694:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8219068c
	if (ctx.cr6.eq) goto loc_8219068C;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r7,12(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// divwu r10,r4,r11
	ctx.r10.u64 = uint32_t(ctx.r11.u32 ? ctx.r4.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// divwu r9,r4,r11
	ctx.r9.u64 = uint32_t(ctx.r11.u32 ? ctx.r4.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// subf. r10,r10,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821906c4
	if (ctx.cr0.eq) goto loc_821906C4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_821906C4:
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// bgt cr6,0x8219068c
	if (ctx.cr6.gt) goto loc_8219068C;
	// lwz r4,16(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r31,1
	r31.s64 = 1;
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// divwu r10,r10,r11
	ctx.r10.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// rlwinm r4,r10,27,5,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
	// mulli r10,r4,136
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(136));
	// addi r30,r11,2
	r30.s64 = ctx.r11.s64 + 2;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r7,r30,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r11,r31,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r11.u8 & 0x3F));
	// stwx r6,r7,r10
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r6.u32);
	// beq cr6,0x82190724
	if (ctx.cr6.eq) goto loc_82190724;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82190718:
	// or r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bdnz 0x82190718
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82190718;
loc_82190724:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// andc r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r6,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r6.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82190748
	if (ctx.cr0.eq) goto loc_82190748;
	// bl 0x821903d0
	ctx.lr = 0x82190744;
	sub_821903D0(ctx, base);
	// b 0x82190750
	goto loc_82190750;
loc_82190748:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82190340
	ctx.lr = 0x82190750;
	sub_82190340(ctx, base);
loc_82190750:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82190754:
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

DEFINE_REX_FUNC(sub_821968C0) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// neg r11,r4
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r4.u64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x821968f8
	if (ctx.cr0.lt) goto loc_821968F8;
	// li r10,300
	ctx.r10.s64 = 300;
	// divw r10,r11,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// mulli r10,r10,300
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(300));
	// subf r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
	// b 0x82196914
	goto loc_82196914;
loc_821968F8:
	// addic. r4,r11,300
	ctx.xer.ca = ctx.r11.u32 > 4294966995;
	ctx.r4.s64 = ctx.r11.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x82196910
	if (!ctx.cr0.lt) goto loc_82196910;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82196748
	ctx.lr = 0x8219690C;
	sub_82196748(ctx, base);
	// b 0x82196914
	goto loc_82196914;
loc_82196910:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_82196914:
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

DEFINE_REX_FUNC(sub_82199820) {
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
	// bl 0x82199678
	ctx.lr = 0x82199838;
	sub_82199678(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,3840
	ctx.r10.s64 = 251658240;
	// addi r11,r11,4540
	ctx.r11.s64 = ctx.r11.s64 + 4540;
	// ori r10,r10,20
	ctx.r10.u64 = ctx.r10.u64 | 20;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_8219A020) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219A048) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,32032(r10)
	REX_STORE_U32(ctx.r10.u32 + 32032, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219A110) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8219a13c
	if (ctx.cr6.eq) goto loc_8219A13C;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// addi r4,r10,-10040
	ctx.r4.s64 = ctx.r10.s64 + -10040;
	// lwz r11,-10044(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -10044);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821ff240
	ctx.lr = 0x8219A13C;
	sub_821FF240(ctx, base);
loc_8219A13C:
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

DEFINE_REX_FUNC(sub_8219B1E8) {
	REX_FUNC_PROLOGUE();
	// b 0x82100998
	sub_82100998(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8219B300) {
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
	// bl 0x821affa8
	ctx.lr = 0x8219B318;
	sub_821AFFA8(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// addi r6,r11,-28744
	ctx.r6.s64 = ctx.r11.s64 + -28744;
	// addi r3,r10,-13224
	ctx.r3.s64 = ctx.r10.s64 + -13224;
	// li r5,23
	ctx.r5.s64 = 23;
	// li r4,23
	ctx.r4.s64 = 23;
	// bl 0x8219a0b8
	ctx.lr = 0x8219B334;
	sub_8219A0B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8219b340
	if (ctx.cr0.eq) goto loc_8219B340;
	// bl 0x8219a048
	ctx.lr = 0x8219B340;
	sub_8219A048(ctx, base);
loc_8219B340:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219b354
	if (ctx.cr6.eq) goto loc_8219B354;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8219B354:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219b368
	if (ctx.cr6.eq) goto loc_8219B368;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8219B368:
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

DEFINE_REX_FUNC(sub_8219C0D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// beq cr6,0x8219c1a8
	if (ctx.cr6.eq) goto loc_8219C1A8;
	// lfs f0,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f11,f1,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f11.f64, ctx.f1.f64, ctx.f0.f64)));
	// lfs f12,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x8219c110
	if (!ctx.cr6.lt) goto loc_8219C110;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x8219c114
	goto loc_8219C114;
loc_8219C110:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_8219C114:
	// clrlwi. r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq 0x8219c15c
	if (ctx.cr0.eq) goto loc_8219C15C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,2024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	ctx.f12.f64 = double(temp.f32);
	// bgt cr6,0x8219c13c
	if (ctx.cr6.gt) goto loc_8219C13C;
	// fsubs f10,f0,f1
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f11,4(r4)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fadds f1,f10,f0
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
loc_8219C13C:
	// fcmpu cr6,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// blt cr6,0x8219c1a0
	if (ctx.cr6.lt) goto loc_8219C1A0;
	// fsubs f0,f1,f13
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// lfs f11,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f12,4(r4)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// b 0x8219c1a0
	goto loc_8219C1A0;
loc_8219C15C:
	// clrlwi. r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219c184
	if (ctx.cr0.eq) goto loc_8219C184;
	// bgt cr6,0x8219c170
	if (ctx.cr6.gt) goto loc_8219C170;
	// fsubs f12,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fsubs f1,f13,f12
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
loc_8219C170:
	// fcmpu cr6,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// blt cr6,0x8219c1a0
	if (ctx.cr6.lt) goto loc_8219C1A0;
	// fsubs f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x8219c1a0
	goto loc_8219C1A0;
loc_8219C184:
	// bgt cr6,0x8219c190
	if (ctx.cr6.gt) goto loc_8219C190;
	// stfs f10,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_8219C190:
	// fcmpu cr6,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// blt cr6,0x8219c1a0
	if (ctx.cr6.lt) goto loc_8219C1A0;
	// stfs f10,4(r4)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
loc_8219C1A0:
	// stfs f1,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_8219C1A8:
	// lfs f1,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A0E20) {
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
	ctx.lr = 0x821A0E40;
	sub_8218CB30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821a0e50
	if (!ctx.cr0.eq) goto loc_821A0E50;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821a0c10
	ctx.lr = 0x821A0E50;
	sub_821A0C10(ctx, base);
loc_821A0E50:
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

DEFINE_REX_FUNC(sub_821A1A30) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e88
	ctx.lr = 0x821A1A38;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f2c
	ctx.lr = 0x821A1A40;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f2,16(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f3,20(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// lwz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// lfs f0,-24480(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24480);
	ctx.f0.f64 = double(temp.f32);
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// lfs f13,15632(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15632);
	ctx.f13.f64 = double(temp.f32);
	// fadds f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// fadds f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// bl 0x821a3a08
	ctx.lr = 0x821A1A80;
	sub_821A3A08(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r29,r31,24
	r29.s64 = r31.s64 + 24;
	// li r28,4
	r28.s64 = 4;
	// lfs f0,-5892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -5892);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f31,f31,f0
	f31.f64 = double(float(f31.f64 + ctx.f0.f64));
	// lfs f13,6792(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6792);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16588(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16588);
	ctx.f0.f64 = double(temp.f32);
	// fadds f25,f30,f13
	f25.f64 = double(float(f30.f64 + ctx.f13.f64));
	// fsubs f28,f29,f0
	f28.f64 = double(float(f29.f64 - ctx.f0.f64));
	// lfs f30,20472(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20472);
	f30.f64 = double(temp.f32);
	// fmr f26,f31
	f26.f64 = f31.f64;
loc_821A1AB8:
	// fmr f27,f25
	ctx.fpscr.disableFlushMode();
	f27.f64 = f25.f64;
	// li r30,11
	r30.s64 = 11;
loc_821A1AC0:
	// lwzu r3,4(r29)
	ea = 4 + r29.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f28.f64;
	// fmr f2,f26
	ctx.f2.f64 = f26.f64;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// bl 0x821a3a08
	ctx.lr = 0x821A1AD4;
	sub_821A3A08(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// fadds f27,f27,f30
	ctx.fpscr.disableFlushMode();
	f27.f64 = double(float(f27.f64 + f30.f64));
	// bne 0x821a1ac0
	if (!ctx.cr0.eq) goto loc_821A1AC0;
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// fadds f26,f26,f30
	f26.f64 = double(float(f26.f64 + f30.f64));
	// bne 0x821a1ab8
	if (!ctx.cr0.eq) goto loc_821A1AB8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,204(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 204);
	// addi r30,r31,204
	r30.s64 = r31.s64 + 204;
	// fmr f3,f28
	ctx.f3.f64 = f28.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// lfs f0,29244(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 29244);
	ctx.f0.f64 = double(temp.f32);
	// fadds f27,f27,f0
	f27.f64 = double(float(f27.f64 + ctx.f0.f64));
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// bl 0x821a3a08
	ctx.lr = 0x821A1B10;
	sub_821A3A08(ctx, base);
	// fadds f26,f31,f30
	ctx.fpscr.disableFlushMode();
	f26.f64 = double(float(f31.f64 + f30.f64));
	// lwzu r3,4(r30)
	ea = 4 + r30.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// fmr f3,f28
	ctx.f3.f64 = f28.f64;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// fmr f2,f26
	ctx.f2.f64 = f26.f64;
	// bl 0x821a3a08
	ctx.lr = 0x821A1B28;
	sub_821A3A08(ctx, base);
	// fadds f0,f26,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f26.f64 + f30.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f28
	ctx.f3.f64 = f28.f64;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// lfs f28,28552(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28552);
	f28.f64 = double(temp.f32);
	// fadds f2,f0,f28
	ctx.f2.f64 = double(float(ctx.f0.f64 + f28.f64));
	// bl 0x821a3a08
	ctx.lr = 0x821A1B48;
	sub_821A3A08(ctx, base);
	// fadds f12,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(f31.f64 + f30.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,216(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 216);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,16172(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16172);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f27,f13
	ctx.f1.f64 = double(float(f27.f64 - ctx.f13.f64));
	// lfs f0,2392(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2392);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f3,f29,f0
	ctx.f3.f64 = double(float(f29.f64 - ctx.f0.f64));
	// lfs f0,6788(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6788);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f12,f30
	ctx.f13.f64 = double(float(ctx.f12.f64 + f30.f64));
	// fadds f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 + f28.f64));
	// fadds f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x821a3a08
	ctx.lr = 0x821A1B80;
	sub_821A3A08(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f78
	ctx.lr = 0x821A1B8C;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821A7060) {
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
	ctx.lr = 0x821A7068;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x821a70b0
	if (!ctx.cr6.gt) goto loc_821A70B0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
loc_821A7088:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lfs f31,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	f31.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e1df8
	ctx.lr = 0x821A709C;
	sub_820E1DF8(ctx, base);
	// stfs f31,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// bgt 0x821a7088
	if (ctx.cr0.gt) goto loc_821A7088;
loc_821A70B0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821A86E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821A86F0;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,328
	ctx.r3.s64 = 328;
	// bl 0x822c80d0
	ctx.lr = 0x821A8700;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a8710
	if (ctx.cr0.eq) goto loc_821A8710;
	// bl 0x821aa210
	ctx.lr = 0x821A870C;
	sub_821AA210(ctx, base);
	// b 0x821a8714
	goto loc_821A8714;
loc_821A8710:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A8714:
	// stw r3,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// addi r30,r11,432
	r30.s64 = ctx.r11.s64 + 432;
	// ori r3,r3,173
	ctx.r3.u64 = ctx.r3.u64 | 173;
	// lwz r4,344(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x821A8730;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r8,128
	ctx.r8.s64 = 128;
	// bl 0x82208750
	ctx.lr = 0x821A874C;
	sub_82208750(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,100(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 100);
	// bl 0x821aa200
	ctx.lr = 0x821A8758;
	sub_821AA200(ctx, base);
	// addi r5,r30,3000
	ctx.r5.s64 = r30.s64 + 3000;
	// addi r4,r30,2980
	ctx.r4.s64 = r30.s64 + 2980;
	// lwz r3,100(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 100);
	// bl 0x821aa298
	ctx.lr = 0x821A8768;
	sub_821AA298(ctx, base);
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-10312
	ctx.r11.s64 = ctx.r11.s64 + -10312;
	// stw r10,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821a87ac
	if (ctx.cr6.eq) goto loc_821A87AC;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
loc_821A8788:
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwzu r10,24(r11)
	ea = 24 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 148);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r10.u32);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821a8788
	if (!ctx.cr6.eq) goto loc_821A8788;
loc_821A87AC:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// li r29,1
	r29.s64 = 1;
	// stw r29,28(r31)
	REX_STORE_U32(r31.u32 + 28, r29.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821a87f8
	if (ctx.cr6.lt) goto loc_821A87F8;
	// beq cr6,0x821a87f0
	if (ctx.cr6.eq) goto loc_821A87F0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x821a8820
	if (!ctx.cr6.lt) goto loc_821A8820;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,30
	ctx.r4.s64 = 30;
	// li r3,2
	ctx.r3.s64 = 2;
	// lfs f3,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x821afa50
	ctx.lr = 0x821A87E8;
	sub_821AFA50(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x821a8824
	goto loc_821A8824;
loc_821A87F0:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x821a8824
	goto loc_821A8824;
loc_821A87F8:
	// lbz r11,2971(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 2971);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821a8818
	if (!ctx.cr0.eq) goto loc_821A8818;
	// lbz r11,3394(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 3394);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821a8818
	if (!ctx.cr0.eq) goto loc_821A8818;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// b 0x821a8824
	goto loc_821A8824;
loc_821A8818:
	// li r11,20
	ctx.r11.s64 = 20;
	// b 0x821a8824
	goto loc_821A8824;
loc_821A8820:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_821A8824:
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// stb r29,88(r31)
	REX_STORE_U8(r31.u32 + 88, r29.u8);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821AE2B0) {
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
	// addi r11,r11,8716
	ctx.r11.s64 = ctx.r11.s64 + 8716;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x821AE2DC;
	sub_821E2FD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ae2ec
	if (ctx.cr0.eq) goto loc_821AE2EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x821AE2EC;
	sub_822C80A8(ctx, base);
loc_821AE2EC:
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

DEFINE_REX_FUNC(sub_821AFFC0) {
	REX_FUNC_PROLOGUE();
	// addi r11,r5,15
	ctx.r11.s64 = ctx.r5.s64 + 15;
	// lwz r9,36(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// subf r10,r11,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r11.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// add r8,r10,r6
	ctx.r8.u64 = ctx.r10.u64 + ctx.r6.u64;
	// bne cr6,0x821affe8
	if (!ctx.cr6.eq) goto loc_821AFFE8;
	// lwz r10,44(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_821AFFE8:
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// sth r10,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// subf r9,r4,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r4.u64;
loc_821AFFFC:
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb. r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stbx r7,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x821afffc
	if (!ctx.cr0.eq) goto loc_821AFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r8,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// stw r8,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r8.u32);
	// stw r10,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B1C28) {
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
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r31,r11,-7072
	r31.s64 = ctx.r11.s64 + -7072;
	// lbz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 6);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821b1c60
	if (!ctx.cr0.eq) goto loc_821B1C60;
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821b1bc0
	ctx.lr = 0x821B1C58;
	sub_821B1BC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x821b1c70
	goto loc_821B1C70;
loc_821B1C60:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821b1bc0
	ctx.lr = 0x821B1C68;
	sub_821B1BC0(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
loc_821B1C70:
	// bl 0x821b1bc0
	ctx.lr = 0x821B1C74;
	sub_821B1BC0(ctx, base);
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

DEFINE_REX_FUNC(sub_821B3168) {
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lhz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821b31c4
	if (!ctx.cr0.eq) goto loc_821B31C4;
	// lha r11,30(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 30));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821b31c4
	if (!ctx.cr0.gt) goto loc_821B31C4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x821b31b4
	if (!ctx.cr6.gt) goto loc_821B31B4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821b31ac
	if (ctx.cr6.eq) goto loc_821B31AC;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x821b31c4
	if (!ctx.cr6.eq) goto loc_821B31C4;
loc_821B31AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821b31c8
	goto loc_821B31C8;
loc_821B31B4:
	// bl 0x821b0d38
	ctx.lr = 0x821B31B8;
	sub_821B0D38(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x821b31c8
	goto loc_821B31C8;
loc_821B31C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B31C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B7A98) {
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
	ctx.lr = 0x821B7AA0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// sth r3,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r3.u16);
	// sth r11,424(r31)
	REX_STORE_U16(r31.u32 + 424, ctx.r11.u16);
	// beq cr6,0x821b7d14
	if (ctx.cr6.eq) goto loc_821B7D14;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x821b7d24
	if (!ctx.cr6.eq) goto loc_821B7D24;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r27,0
	r27.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// stw r27,40(r31)
	REX_STORE_U32(r31.u32 + 40, r27.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,504(r31)
	REX_STORE_U32(r31.u32 + 504, ctx.r9.u32);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// stw r27,508(r31)
	REX_STORE_U32(r31.u32 + 508, r27.u32);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// stw r11,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r11.u32);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// sth r27,308(r31)
	REX_STORE_U16(r31.u32 + 308, r27.u16);
	// bl 0x8218e510
	ctx.lr = 0x821B7B08;
	sub_8218E510(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212c708
	ctx.lr = 0x821B7B14;
	sub_8212C708(ctx, base);
	// bl 0x8212b430
	ctx.lr = 0x821B7B18;
	sub_8212B430(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r10,516(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 516);
	// addi r30,r11,-7072
	r30.s64 = ctx.r11.s64 + -7072;
	// lha r9,30(r31)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r31.u32 + 30));
	// addi r29,r30,8120
	r29.s64 = r30.s64 + 8120;
	// sth r10,32(r31)
	REX_STORE_U16(r31.u32 + 32, ctx.r10.u16);
	// stw r9,356(r31)
	REX_STORE_U32(r31.u32 + 356, ctx.r9.u32);
	// lwz r11,496(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 496);
	// sth r11,34(r31)
	REX_STORE_U16(r31.u32 + 34, ctx.r11.u16);
loc_821B7B3C:
	// addi r28,r29,-8120
	r28.s64 = r29.s64 + -8120;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8218e510
	ctx.lr = 0x821B7B48;
	sub_8218E510(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821c9e88
	ctx.lr = 0x821B7B5C;
	sub_821C9E88(ctx, base);
	// addi r3,r29,-896
	ctx.r3.s64 = r29.s64 + -896;
	// bl 0x821be4f8
	ctx.lr = 0x821B7B64;
	sub_821BE4F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821be4f8
	ctx.lr = 0x821B7B6C;
	sub_821BE4F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821dae18
	ctx.lr = 0x821B7B74;
	sub_821DAE18(ctx, base);
	// lha r28,30(r31)
	r28.s64 = int16_t(REX_LOAD_U16(r31.u32 + 30));
	// cmpwi cr6,r28,9
	ctx.cr6.compare<int32_t>(r28.s32, 9, ctx.xer);
	// beq cr6,0x821b7b88
	if (ctx.cr6.eq) goto loc_821B7B88;
	// cmpwi cr6,r28,15
	ctx.cr6.compare<int32_t>(r28.s32, 15, ctx.xer);
	// bne cr6,0x821b7b98
	if (!ctx.cr6.eq) goto loc_821B7B98;
loc_821B7B88:
	// lbz r11,-8114(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + -8114);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821b7b98
	if (ctx.cr0.eq) goto loc_821B7B98;
	// stw r27,-8004(r29)
	REX_STORE_U32(r29.u32 + -8004, r27.u32);
loc_821B7B98:
	// addis r11,r30,2
	ctx.r11.s64 = r30.s64 + 131072;
	// addis r29,r29,1
	r29.s64 = r29.s64 + 65536;
	// addi r11,r11,15512
	ctx.r11.s64 = ctx.r11.s64 + 15512;
	// addi r29,r29,3696
	r29.s64 = r29.s64 + 3696;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821b7b3c
	if (ctx.cr6.lt) goto loc_821B7B3C;
	// bl 0x821b0d38
	ctx.lr = 0x821B7BB4;
	sub_821B0D38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821b7bc4
	if (ctx.cr0.eq) goto loc_821B7BC4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821b7ce0
	goto loc_821B7CE0;
loc_821B7BC4:
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(r28.s32, 4, ctx.xer);
	// blt cr6,0x821b7cdc
	if (ctx.cr6.lt) goto loc_821B7CDC;
	// cmpwi cr6,r28,5
	ctx.cr6.compare<int32_t>(r28.s32, 5, ctx.xer);
	// ble cr6,0x821b7c48
	if (!ctx.cr6.gt) goto loc_821B7C48;
	// cmpwi cr6,r28,9
	ctx.cr6.compare<int32_t>(r28.s32, 9, ctx.xer);
	// beq cr6,0x821b7c40
	if (ctx.cr6.eq) goto loc_821B7C40;
	// cmpwi cr6,r28,14
	ctx.cr6.compare<int32_t>(r28.s32, 14, ctx.xer);
	// beq cr6,0x821b7bfc
	if (ctx.cr6.eq) goto loc_821B7BFC;
	// cmpwi cr6,r28,15
	ctx.cr6.compare<int32_t>(r28.s32, 15, ctx.xer);
	// beq cr6,0x821b7c40
	if (ctx.cr6.eq) goto loc_821B7C40;
	// cmpwi cr6,r28,17
	ctx.cr6.compare<int32_t>(r28.s32, 17, ctx.xer);
	// bne cr6,0x821b7cdc
	if (!ctx.cr6.eq) goto loc_821B7CDC;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x821b7ce0
	goto loc_821B7CE0;
loc_821B7BFC:
	// bl 0x82135998
	ctx.lr = 0x821B7C00;
	sub_82135998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821b7c28
	if (ctx.cr0.eq) goto loc_821B7C28;
	// bl 0x82135c90
	ctx.lr = 0x821B7C0C;
	sub_82135C90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,-1
	ctx.r4.s64 = -1;
	// beq 0x821b7c20
	if (ctx.cr0.eq) goto loc_821B7C20;
loc_821B7C18:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821b7ce4
	goto loc_821B7CE4;
loc_821B7C20:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821b7ce4
	goto loc_821B7CE4;
loc_821B7C28:
	// bl 0x821d56d0
	ctx.lr = 0x821B7C2C;
	sub_821D56D0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r4,-1
	ctx.r4.s64 = -1;
	// bne cr6,0x821b7c18
	if (!ctx.cr6.eq) goto loc_821B7C18;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x821b7ce4
	goto loc_821B7CE4;
loc_821B7C40:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x821b7ce0
	goto loc_821B7CE0;
loc_821B7C48:
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821e1860
	ctx.lr = 0x821B7C54;
	sub_821E1860(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821b7ce8
	if (ctx.cr0.eq) goto loc_821B7CE8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r7,16468(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 16468);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r29,r1,92
	r29.s64 = ctx.r1.s64 + 92;
	// addi r8,r30,16472
	ctx.r8.s64 = r30.s64 + 16472;
	// lfs f0,28724(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28724);
	ctx.f0.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f13,-18872(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -18872);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,30024(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 30024);
	ctx.f12.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r27,0(r29)
	REX_STORE_U32(r29.u32 + 0, r27.u32);
	// bl 0x821b0f58
	ctx.lr = 0x821B7CA4;
	sub_821B0F58(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addis r11,r30,1
	ctx.r11.s64 = r30.s64 + 65536;
	// ori r9,r9,20164
	ctx.r9.u64 = ctx.r9.u64 | 20164;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f0,30176(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 30176);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r11,20168
	ctx.r8.s64 = ctx.r11.s64 + 20168;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r7,r30,r9
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + ctx.r9.u32);
	// bl 0x821b0f58
	ctx.lr = 0x821B7CD8;
	sub_821B0F58(ctx, base);
	// b 0x821b7ce8
	goto loc_821B7CE8;
loc_821B7CDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B7CE0:
	// li r4,-1
	ctx.r4.s64 = -1;
loc_821B7CE4:
	// bl 0x821e1860
	ctx.lr = 0x821B7CE8;
	sub_821E1860(ctx, base);
loc_821B7CE8:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// addi r8,r11,-7176
	ctx.r8.s64 = ctx.r11.s64 + -7176;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,-9816(r9)
	REX_STORE_U32(ctx.r9.u32 + -9816, ctx.r10.u32);
	// stw r11,88(r8)
	REX_STORE_U32(ctx.r8.u32 + 88, ctx.r11.u32);
	// bl 0x821c3f68
	ctx.lr = 0x821B7D08;
	sub_821C3F68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821d7b50
	ctx.lr = 0x821B7D10;
	sub_821D7B50(ctx, base);
	// b 0x821b7d24
	goto loc_821B7D24;
loc_821B7D14:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8212b388
	ctx.lr = 0x821B7D24;
	sub_8212B388(ctx, base);
loc_821B7D24:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821C2DC8) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// bge cr6,0x821c2dd8
	if (!ctx.cr6.lt) goto loc_821C2DD8;
	// li r10,1
	ctx.r10.s64 = 1;
loc_821C2DD8:
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-17520
	ctx.r11.s64 = ctx.r11.s64 + -17520;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lhax r8,r10,r11
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32));
	// lwz r10,-7176(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + -7176);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// addi r10,r8,28
	ctx.r10.s64 = ctx.r8.s64 + 28;
	// beq cr6,0x821c2e24
	if (ctx.cr6.eq) goto loc_821C2E24;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r9,r9,432
	ctx.r9.s64 = ctx.r9.s64 + 432;
	// lhz r9,30(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 30);
	// cmplwi cr6,r9,9
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 9, ctx.xer);
	// bne cr6,0x821c2e28
	if (!ctx.cr6.eq) goto loc_821C2E28;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r10,r11
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32));
	// addi r10,r11,29
	ctx.r10.s64 = ctx.r11.s64 + 29;
	// b 0x821c2e28
	goto loc_821C2E28;
loc_821C2E24:
	// li r10,1
	ctx.r10.s64 = 1;
loc_821C2E28:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C4280) {
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
	ctx.lr = 0x821C4288;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x822d4f2c
	ctx.lr = 0x821C4290;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,6192(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 6192);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c4544
	if (ctx.cr6.eq) goto loc_821C4544;
	// lbz r11,178(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 178);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c42f8
	if (ctx.cr0.eq) goto loc_821C42F8;
	// addi r11,r3,15404
	ctx.r11.s64 = ctx.r3.s64 + 15404;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821c4544
	if (!ctx.cr6.gt) goto loc_821C4544;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,12204(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12204);
	ctx.f0.f64 = double(temp.f32);
loc_821C42E0:
	// lfs f13,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfsu f13,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c42e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C42E0;
	// b 0x821c4544
	goto loc_821C4544;
loc_821C42F8:
	// lwz r11,10140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10140);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r31,10820
	ctx.r4.s64 = r31.s64 + 10820;
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r30,r11,r31
	r30.u64 = ctx.r11.u64 + r31.u64;
	// lfs f25,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f25.f64 = double(temp.f32);
	// lfs f0,21164(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 21164);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,21168(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 21168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,21172(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 21172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f25,108(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x820e2358
	ctx.lr = 0x821C4334;
	sub_820E2358(ctx, base);
	// lfs f0,21420(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 21420);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r31,10836
	ctx.r4.s64 = r31.s64 + 10836;
	// lfs f0,21424(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 21424);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lfs f0,21428(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 21428);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f25,124(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x820e2358
	ctx.lr = 0x821C4360;
	sub_820E2358(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, ctx.f1.f64);
	// li r23,6
	r23.s64 = 6;
	// bgt cr6,0x821c4370
	if (ctx.cr6.gt) goto loc_821C4370;
	// li r23,7
	r23.s64 = 7;
loc_821C4370:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,2024(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2024);
	f30.f64 = double(temp.f32);
	// li r24,0
	r24.s64 = 0;
	// lfs f27,16908(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16908);
	f27.f64 = double(temp.f32);
	// addi r25,r31,12320
	r25.s64 = r31.s64 + 12320;
	// lfs f28,-17400(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -17400);
	f28.f64 = double(temp.f32);
	// lfs f26,27124(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 27124);
	f26.f64 = double(temp.f32);
	// lfs f29,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f29.f64 = double(temp.f32);
	// stfs f31,15464(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 15464, temp.u32);
	// stfs f31,15432(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 15432, temp.u32);
loc_821C43B0:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x821c43c8
	if (!ctx.cr6.eq) goto loc_821C43C8;
	// li r29,6
	r29.s64 = 6;
	// li r8,17
	ctx.r8.s64 = 17;
	// li r5,18
	ctx.r5.s64 = 18;
	// b 0x821c43d4
	goto loc_821C43D4;
loc_821C43C8:
	// li r29,7
	r29.s64 = 7;
	// li r8,21
	ctx.r8.s64 = 21;
	// li r5,22
	ctx.r5.s64 = 22;
loc_821C43D4:
	// lwz r10,10140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10140);
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r9,r29,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,10148(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 10148);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r28,r11,r31
	r28.u64 = ctx.r11.u64 + r31.u64;
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r26,r9,r31
	r26.u64 = ctx.r9.u64 + r31.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r30,r11,20028
	r30.s64 = ctx.r11.s64 + 20028;
	// addi r27,r26,10852
	r27.s64 = r26.s64 + 10852;
	// bl 0x82161de0
	ctx.lr = 0x821C4410;
	sub_82161DE0(ctx, base);
	// stfs f25,15304(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f25.f64);
	REX_STORE_U32(r28.u32 + 15304, temp.u32);
	// lbz r11,166(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 166);
	// fneg f0,f1
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c446c
	if (ctx.cr0.eq) goto loc_821C446C;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x821c443c
	if (ctx.cr6.lt) goto loc_821C443C;
	// cmpw cr6,r23,r29
	ctx.cr6.compare<int32_t>(r23.s32, r29.s32, ctx.xer);
	// beq cr6,0x821c443c
	if (ctx.cr6.eq) goto loc_821C443C;
	// stfs f26,12(r27)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(r27.u32 + 12, temp.u32);
	// b 0x821c4470
	goto loc_821C4470;
loc_821C443C:
	// lfs f0,12(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x821c4450
	if (!ctx.cr6.gt) goto loc_821C4450;
	// fsubs f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 - f28.f64));
	// b 0x821c4454
	goto loc_821C4454;
loc_821C4450:
	// fsubs f0,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - f27.f64));
loc_821C4454:
	// stfs f0,12(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 12, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bgt cr6,0x821c4464
	if (ctx.cr6.gt) goto loc_821C4464;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
loc_821C4464:
	// stfs f0,12(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 12, temp.u32);
	// b 0x821c4470
	goto loc_821C4470;
loc_821C446C:
	// stfs f31,12(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r27.u32 + 12, temp.u32);
loc_821C4470:
	// lfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 0, temp.u32);
	// lfs f0,56(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 8, temp.u32);
	// lfs f13,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,15292(r28)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r28.u32 + 15292, temp.u32);
	// lfs f0,12(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,4(r27)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r27.u32 + 4, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x821c44c4
	if (ctx.cr6.lt) goto loc_821C44C4;
	// lfs f13,15288(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 15288);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f25,f0
	ctx.f0.f64 = double(float(f25.f64 - ctx.f0.f64));
	// lfs f12,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,15296(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 15296);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f13,15288(r28)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r28.u32 + 15288, temp.u32);
	// lfs f13,8(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fmadds f0,f13,f0,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f11.f64)));
	// b 0x821c44f8
	goto loc_821C44F8;
loc_821C44C4:
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f13,10612(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10612);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,48(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,56(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmadds f13,f13,f29,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f29.f64, ctx.f12.f64)));
	// stfs f13,48(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 48, temp.u32);
	// lfs f12,10620(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10620);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmadds f0,f0,f29,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, ctx.f11.f64)));
	// stfs f0,56(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 56, temp.u32);
	// stfs f13,15288(r28)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r28.u32 + 15288, temp.u32);
	// lfs f0,56(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
loc_821C44F8:
	// stfs f0,15296(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 15296, temp.u32);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// lfs f0,48(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10724(r26)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r26.u32 + 10724, temp.u32);
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(r24.s32, 2, ctx.xer);
	// lfs f0,56(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10732(r26)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r26.u32 + 10732, temp.u32);
	// lfs f0,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10728(r26)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r26.u32 + 10728, temp.u32);
	// blt cr6,0x821c43b0
	if (ctx.cr6.lt) goto loc_821C43B0;
	// lbz r11,210(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 210);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c4544
	if (ctx.cr0.eq) goto loc_821C4544;
	// addi r3,r31,15532
	ctx.r3.s64 = r31.s64 + 15532;
	// bl 0x82161fc8
	ctx.lr = 0x821C4534;
	sub_82161FC8(ctx, base);
	// stfs f31,15528(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 15528, temp.u32);
	// stfs f31,15496(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 15496, temp.u32);
	// stfs f31,15464(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 15464, temp.u32);
	// stfs f31,15432(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 15432, temp.u32);
loc_821C4544:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x822d4f78
	ctx.lr = 0x821C4550;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_821D1778) {
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
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821b42c0
	ctx.lr = 0x821D1790;
	sub_821B42C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821b7a98
	ctx.lr = 0x821D1798;
	sub_821B7A98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D1ED0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// bl 0x822097f0
	ctx.lr = 0x821D1EF8;
	sub_822097F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821d1f08
	if (!ctx.cr0.eq) goto loc_821D1F08;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r31,r11,31
	r31.u64 = ctx.r11.u32 & 0x1;
loc_821D1F08:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// clrlwi r10,r31,24
	ctx.r10.u64 = r31.u32 & 0xFF;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lbz r9,2972(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 2972);
	// stb r8,2971(r11)
	REX_STORE_U8(ctx.r11.u32 + 2971, ctx.r8.u8);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x821d1f3c
	if (ctx.cr0.eq) goto loc_821D1F3C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,2970(r11)
	REX_STORE_U8(ctx.r11.u32 + 2970, ctx.r10.u8);
	// b 0x821d1f58
	goto loc_821D1F58;
loc_821D1F3C:
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// stb r10,2970(r11)
	REX_STORE_U8(ctx.r11.u32 + 2970, ctx.r10.u8);
	// cntlzw r10,r9
	ctx.r10.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r10,2972(r11)
	REX_STORE_U8(ctx.r11.u32 + 2972, ctx.r10.u8);
loc_821D1F58:
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

DEFINE_REX_FUNC(sub_821D4968) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-8892(r10)
	REX_STORE_U32(ctx.r10.u32 + -8892, ctx.r11.u32);
	// b 0x82100c80
	sub_82100C80(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821D4E38) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821D4E40;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,10984
	ctx.r3.s64 = ctx.r3.s64 + 10984;
	// bl 0x821d4dc8
	ctx.lr = 0x821D4E50;
	sub_821D4DC8(ctx, base);
	// addi r3,r31,12320
	ctx.r3.s64 = r31.s64 + 12320;
	// bl 0x82165d48
	ctx.lr = 0x821D4E58;
	sub_82165D48(ctx, base);
	// addi r3,r31,19496
	ctx.r3.s64 = r31.s64 + 19496;
	// bl 0x821f2e90
	ctx.lr = 0x821D4E60;
	sub_821F2E90(ctx, base);
	// addi r29,r31,19552
	r29.s64 = r31.s64 + 19552;
	// li r30,1
	r30.s64 = 1;
loc_821D4E68:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821f2e90
	ctx.lr = 0x821D4E70;
	sub_821F2E90(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r29,56
	r29.s64 = r29.s64 + 56;
	// bge 0x821d4e68
	if (!ctx.cr0.lt) goto loc_821D4E68;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821D6B50) {
	REX_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D6FF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821D6FF8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r30,r11,-27144
	r30.s64 = ctx.r11.s64 + -27144;
	// mulli r11,r10,9504
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(9504));
	// add r29,r11,r30
	r29.u64 = ctx.r11.u64 + r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820f81f8
	ctx.lr = 0x821D7020;
	sub_820F81F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820f45b8
	ctx.lr = 0x821D7028;
	sub_820F45B8(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r29,r11,432
	r29.s64 = ctx.r11.s64 + 432;
	// lhz r11,30(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 30);
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bne cr6,0x821d7168
	if (!ctx.cr6.eq) goto loc_821D7168;
	// lwz r11,216(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 216);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d7168
	if (!ctx.cr6.eq) goto loc_821D7168;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lha r3,5452(r11)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 5452));
	// bl 0x821361d0
	ctx.lr = 0x821D7060;
	sub_821361D0(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lwz r7,220(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 220);
	// addi r11,r11,23240
	ctx.r11.s64 = ctx.r11.s64 + 23240;
	// lwz r10,260(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// and. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// bne 0x821d7090
	if (!ctx.cr0.eq) goto loc_821D7090;
	// lwz r8,544(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 544);
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// and. r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x821d70b0
	if (ctx.cr0.eq) goto loc_821D70B0;
loc_821D7090:
	// lwz r8,124(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 124);
	// lhz r8,126(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 126);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne 0x821d70b0
	if (!ctx.cr0.eq) goto loc_821D70B0;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r8,-2
	ctx.r4.s64 = ctx.r8.s64 + -2;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// b 0x821d70b4
	goto loc_821D70B4;
loc_821D70B0:
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_821D70B4:
	// lwz r8,264(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// and. r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821d70d0
	if (!ctx.cr0.eq) goto loc_821D70D0;
	// lwz r11,548(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 548);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d70e8
	if (ctx.cr0.eq) goto loc_821D70E8;
loc_821D70D0:
	// lwz r11,124(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 124);
	// lhz r11,126(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 126);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821d70e8
	if (!ctx.cr6.eq) goto loc_821D70E8;
	// addi r4,r4,-2
	ctx.r4.s64 = ctx.r4.s64 + -2;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
loc_821D70E8:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,9504
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9504));
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x820f34a8
	ctx.lr = 0x821D70FC;
	sub_820F34A8(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,9504
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9504));
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x820f3560
	ctx.lr = 0x821D7114;
	sub_820F3560(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,9504
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9504));
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x820f3610
	ctx.lr = 0x821D712C;
	sub_820F3610(ctx, base);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82135d28
	ctx.lr = 0x821D7138;
	sub_82135D28(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mulli r11,r11,9504
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9504));
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x820f3838
	ctx.lr = 0x821D7154;
	sub_820F3838(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,9504
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9504));
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x820f62d0
	ctx.lr = 0x821D7168;
	sub_820F62D0(ctx, base);
loc_821D7168:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821DD358) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x821dd398
	if (ctx.cr6.eq) goto loc_821DD398;
	// cmpwi cr6,r6,11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 11, ctx.xer);
	// beq cr6,0x821dd390
	if (ctx.cr6.eq) goto loc_821DD390;
	// cmpwi cr6,r6,30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 30, ctx.xer);
	// beq cr6,0x821dd388
	if (ctx.cr6.eq) goto loc_821DD388;
	// cmpwi cr6,r6,31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 31, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,77
	ctx.r3.s64 = 77;
	// blr 
	return;
loc_821DD388:
	// li r3,73
	ctx.r3.s64 = 73;
	// blr 
	return;
loc_821DD390:
	// li r3,80
	ctx.r3.s64 = 80;
	// blr 
	return;
loc_821DD398:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,15096
	ctx.r12.s64 = ctx.r12.s64 + 15096;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32226
	ctx.r12.s64 = -2111963136;
	// nop 
	// addi r12,r12,-11316
	ctx.r12.s64 = ctx.r12.s64 + -11316;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_821DD3CC;
	case 1:
		goto loc_821DD3EC;
	case 2:
		goto loc_821DD3DC;
	case 3:
		goto loc_821DD454;
	case 4:
		goto loc_821DD464;
	case 5:
		goto loc_821DD424;
	case 6:
		goto loc_821DD474;
	case 7:
		goto loc_821DD488;
	case 8:
		goto loc_821DD488;
	case 9:
		goto loc_821DD484;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_821DD3CC:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,62
	ctx.r3.s64 = 62;
	// blr 
	return;
loc_821DD3DC:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,63
	ctx.r3.s64 = 63;
	// blr 
	return;
loc_821DD3EC:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x821dd41c
	if (ctx.cr6.eq) goto loc_821DD41C;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// beq cr6,0x821dd414
	if (ctx.cr6.eq) goto loc_821DD414;
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,66
	ctx.r3.s64 = 66;
	// blr 
	return;
loc_821DD414:
	// li r3,65
	ctx.r3.s64 = 65;
	// blr 
	return;
loc_821DD41C:
	// li r3,64
	ctx.r3.s64 = 64;
	// blr 
	return;
loc_821DD424:
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// beq cr6,0x821dd44c
	if (ctx.cr6.eq) goto loc_821DD44C;
	// cmpwi cr6,r4,9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 9, ctx.xer);
	// beq cr6,0x821dd444
	if (ctx.cr6.eq) goto loc_821DD444;
	// cmpwi cr6,r4,10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,69
	ctx.r3.s64 = 69;
	// blr 
	return;
loc_821DD444:
	// li r3,68
	ctx.r3.s64 = 68;
	// blr 
	return;
loc_821DD44C:
	// li r3,67
	ctx.r3.s64 = 67;
	// blr 
	return;
loc_821DD454:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,70
	ctx.r3.s64 = 70;
	// blr 
	return;
loc_821DD464:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,71
	ctx.r3.s64 = 71;
	// blr 
	return;
loc_821DD474:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,72
	ctx.r3.s64 = 72;
	// blr 
	return;
loc_821DD484:
	// li r3,76
	ctx.r3.s64 = 76;
loc_821DD488:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E1C10) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821e2fb8
	ctx.lr = 0x821E1C2C;
	sub_821E2FB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,15108
	ctx.r11.s64 = ctx.r11.s64 + 15108;
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

DEFINE_REX_FUNC(sub_821E1FE8) {
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
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821e2fb8
	ctx.lr = 0x821E2004;
	sub_821E2FB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,8236
	ctx.r11.s64 = ctx.r11.s64 + 8236;
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

DEFINE_REX_FUNC(sub_821E24A8) {
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
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821e2fb8
	ctx.lr = 0x821E24C4;
	sub_821E2FB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,9820
	ctx.r11.s64 = ctx.r11.s64 + 9820;
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

DEFINE_REX_FUNC(sub_821E2B80) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lbz r10,2971(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2971);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821e2bcc
	if (!ctx.cr0.eq) goto loc_821E2BCC;
	// lbz r11,2973(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2973);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821e2bcc
	if (!ctx.cr0.eq) goto loc_821E2BCC;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r11,88
	ctx.r11.s64 = 88;
	// addi r10,r10,5128
	ctx.r10.s64 = ctx.r10.s64 + 5128;
loc_821E2BAC:
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x821e2bcc
	if (ctx.cr0.eq) goto loc_821E2BCC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,288
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 288, ctx.xer);
	// blt cr6,0x821e2bac
	if (ctx.cr6.lt) goto loc_821E2BAC;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_821E2BCC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E4110) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r10,256(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r31,92(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f31,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f31.f64 = double(temp.f32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lfs f0,1840(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f12,f31,f0
	ctx.f12.f64 = double(float(f31.f64 / ctx.f0.f64));
	// lfs f11,2340(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2340);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,1996(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f13,16232(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16232);
	ctx.f13.f64 = double(temp.f32);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fctiwz f0,f11
	ctx.f0.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf. r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x821e424c
	if (ctx.cr0.gt) goto loc_821E424C;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// neg r9,r11
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lfs f0,-8496(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8496);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f0,2012(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2012);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// fctidz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// divw r8,r9,r10
	ctx.r8.u64 = uint32_t((ctx.r10.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r9.s32 / ctx.r10.s32 : 0);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// bl 0x820e0028
	ctx.lr = 0x821E4234;
	sub_820E0028(ctx, base);
	// fadds f13,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x821e42ac
	goto loc_821E42AC;
loc_821E424C:
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bge cr6,0x821e4280
	if (!ctx.cr6.lt) goto loc_821E4280;
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,2012(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2012);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x821e42b0
	goto loc_821E42B0;
loc_821E4280:
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_821E42AC:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_821E42B0:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820e2028
	ctx.lr = 0x821E42B8;
	sub_820E2028(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// lfs f13,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// lwz r11,260(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 260);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e4304
	if (ctx.cr6.eq) goto loc_821E4304;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,26932(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26932);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821e430c
	goto loc_821E430C;
loc_821E4304:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-18492(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -18492);
	ctx.f0.f64 = double(temp.f32);
loc_821E430C:
	// fdivs f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f13,64(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// lwa r11,256(r30)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r30.u32 + 256));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f0,2384(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2384);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x821e4348
	if (!ctx.cr6.gt) goto loc_821E4348;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_821E4348:
	// fnmsubs f0,f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f0.f64, -f31.f64)));
	// lfs f13,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// lwz r11,256(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 256);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,256(r30)
	REX_STORE_U32(r30.u32 + 256, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

DEFINE_REX_FUNC(sub_821F0C00) {
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
	// lis r4,-26215
	ctx.r4.s64 = -1718026240;
	// li r5,2
	ctx.r5.s64 = 2;
	// ori r4,r4,39423
	ctx.r4.u64 = ctx.r4.u64 | 39423;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821197d0
	ctx.lr = 0x821F0C24;
	sub_821197D0(ctx, base);
	// lwz r11,3144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3144);
	// stw r11,3148(r31)
	REX_STORE_U32(r31.u32 + 3148, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821F1A48) {
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
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lbz r11,1823(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1823);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821f1c18
	if (!ctx.cr0.eq) goto loc_821F1C18;
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r6,0,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF00;
	// bne 0x821f1abc
	if (!ctx.cr0.eq) goto loc_821F1ABC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,32916
	ctx.r11.u64 = ctx.r11.u64 | 32916;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 19, ctx.xer);
	// bge cr6,0x821f1c18
	if (!ctx.cr6.lt) goto loc_821F1C18;
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,224
	ctx.r9.s64 = ctx.r9.s64 + 224;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// lwzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F1AB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821f1c18
	goto loc_821F1C18;
loc_821F1ABC:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,16908(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16908);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821f1c18
	if (ctx.cr6.lt) goto loc_821F1C18;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f3,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f3.f64 = double(temp.f32);
	// bne cr6,0x821f1af0
	if (!ctx.cr6.eq) goto loc_821F1AF0;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x821f1aec
	if (ctx.cr6.eq) goto loc_821F1AEC;
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// b 0x821f1af0
	goto loc_821F1AF0;
loc_821F1AEC:
	// fdivs f0,f3,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f3.f64 / ctx.f0.f64));
loc_821F1AF0:
	// addi r10,r4,15
	ctx.r10.s64 = ctx.r4.s64 + 15;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// rlwinm r30,r10,0,0,27
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// beq cr6,0x821f1b50
	if (ctx.cr6.eq) goto loc_821F1B50;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r9,0
	ctx.r9.s64 = 0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// ori r9,r9,32924
	ctx.r9.u64 = ctx.r9.u64 | 32924;
	// addi r11,r11,4115
	ctx.r11.s64 = ctx.r11.s64 + 4115;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfsx f13,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fctidz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x821f1bdc
	goto loc_821F1BDC;
loc_821F1B50:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821f1b98
	if (!ctx.cr6.lt) goto loc_821F1B98;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,32940
	ctx.r10.u64 = ctx.r10.u64 | 32940;
	// ori r9,r9,32936
	ctx.r9.u64 = ctx.r9.u64 | 32936;
	// lfs f13,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfsx f13,r31,r10
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r9.u32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x821f1bdc
	goto loc_821F1BDC;
loc_821F1B98:
	// fsubs f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2008(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82204ae0
	ctx.lr = 0x821F1BB4;
	sub_82204AE0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,32956
	ctx.r11.u64 = ctx.r11.u64 | 32956;
	// ori r10,r10,32952
	ctx.r10.u64 = ctx.r10.u64 | 32952;
	// lfsx f0,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_821F1BDC:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// ori r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 32768;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addis r7,r31,1
	ctx.r7.s64 = r31.s64 + 65536;
	// stbx r8,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u8);
	// addi r7,r7,-32620
	ctx.r7.s64 = ctx.r7.s64 + -32620;
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stwx r9,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r9.u32);
	// stw r30,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, r30.u32);
loc_821F1C18:
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

DEFINE_REX_FUNC(sub_821FADC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x821FADC8;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821faddc
	if (!ctx.cr6.eq) goto loc_821FADDC;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821faf44
	if (ctx.cr6.eq) goto loc_821FAF44;
loc_821FADDC:
	// li r27,1
	r27.s64 = 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821fadf0
	if (ctx.cr6.eq) goto loc_821FADF0;
	// lbz r11,1(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 1);
	// b 0x821fadfc
	goto loc_821FADFC;
loc_821FADF0:
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821fae04
	if (!ctx.cr0.eq) goto loc_821FAE04;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
loc_821FADFC:
	// slw r11,r27,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r11.u8 & 0x3F));
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
loc_821FAE04:
	// li r28,0
	r28.s64 = 0;
	// clrlwi r29,r11,1
	r29.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// mr r31,r28
	r31.u64 = r28.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_821FAE14:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x821faf44
	if (ctx.cr6.eq) goto loc_821FAF44;
	// slw r10,r27,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (r27.u32 << (r31.u8 & 0x3F));
	// clrlwi. r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// oris r30,r10,32768
	r30.u64 = ctx.r10.u64 | 2147483648;
	// beq 0x821faf30
	if (ctx.cr0.eq) goto loc_821FAF30;
	// lwz r7,0(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821faf4c
	if (ctx.cr6.eq) goto loc_821FAF4C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821fae68
	if (!ctx.cr6.eq) goto loc_821FAE68;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_821FAE48:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821faf4c
	if (ctx.cr6.eq) goto loc_821FAF4C;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x821fae70
	if (ctx.cr6.eq) goto loc_821FAE70;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x821fae48
	goto loc_821FAE48;
loc_821FAE68:
	// lwz r4,48(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 48);
	// addi r8,r6,48
	ctx.r8.s64 = ctx.r6.s64 + 48;
loc_821FAE70:
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821fae84
	if (ctx.cr6.eq) goto loc_821FAE84;
	// stw r9,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
loc_821FAE84:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821fae90
	if (ctx.cr6.eq) goto loc_821FAE90;
	// stw r10,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r10.u32);
loc_821FAE90:
	// stw r28,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r28.u32);
	// lwz r10,72(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r10,72(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821faeac
	if (ctx.cr6.eq) goto loc_821FAEAC;
	// stw r11,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
loc_821FAEAC:
	// lwz r10,80(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// bne cr6,0x821faec8
	if (!ctx.cr6.eq) goto loc_821FAEC8;
	// stw r9,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
loc_821FAEC8:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821faee4
	if (ctx.cr6.eq) goto loc_821FAEE4;
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// stw r11,52(r10)
	REX_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// stw r10,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
loc_821FAEE4:
	// lhz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 8);
	// andc r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ~r30.u64;
	// clrlwi. r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r11,8(r4)
	REX_STORE_U16(ctx.r4.u32 + 8, ctx.r11.u16);
	// bne 0x821faf30
	if (!ctx.cr0.eq) goto loc_821FAF30;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821faf10
	if (ctx.cr6.eq) goto loc_821FAF10;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x821faf14
	goto loc_821FAF14;
loc_821FAF10:
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
loc_821FAF14:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821faf20
	if (ctx.cr6.eq) goto loc_821FAF20;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_821FAF20:
	// stw r28,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r28.u32);
	// stw r28,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, r28.u32);
	// sth r28,8(r4)
	REX_STORE_U16(ctx.r4.u32 + 8, r28.u16);
	// stw r28,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, r28.u32);
loc_821FAF30:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// rlwinm r29,r29,31,1,31
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplwi cr6,r31,15
	ctx.cr6.compare<uint32_t>(r31.u32, 15, ctx.xer);
	// ble cr6,0x821fae14
	if (!ctx.cr6.gt) goto loc_821FAE14;
loc_821FAF44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821FAF48:
	// b 0x822d4ed4
	return;
loc_821FAF4C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x821faf48
	goto loc_821FAF48;
}

DEFINE_REX_FUNC(sub_82203038) {
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
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r30,-32480(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// addi r31,r30,80
	r31.s64 = r30.s64 + 80;
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 68);
	// lwz r10,88(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 88);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lbz r3,96(r30)
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + 96);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r9,68(r30)
	REX_STORE_U32(r30.u32 + 68, ctx.r9.u32);
	// blt cr6,0x822030a0
	if (ctx.cr6.lt) goto loc_822030A0;
	// lfs f1,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82202fd8
	ctx.lr = 0x82203080;
	sub_82202FD8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82203094
	if (ctx.cr6.eq) goto loc_82203094;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_82203094:
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,40(r30)
	REX_STORE_U16(r30.u32 + 40, ctx.r11.u16);
	// b 0x822030f0
	goto loc_822030F0;
loc_822030A0:
	// extsb. r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822030c4
	if (ctx.cr0.lt) goto loc_822030C4;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x822030c4
	if (!ctx.cr6.lt) goto loc_822030C4;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,15024
	ctx.r10.s64 = ctx.r10.s64 + 15024;
	// lfsx f31,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	f31.f64 = double(temp.f32);
	// b 0x822030cc
	goto loc_822030CC;
loc_822030C4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
loc_822030CC:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 + ctx.f0.f64));
	// bl 0x82202fd8
	ctx.lr = 0x822030D8;
	sub_82202FD8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822030f0
	if (ctx.cr6.eq) goto loc_822030F0;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 + ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_822030F0:
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

DEFINE_REX_FUNC(sub_82206770) {
	REX_FUNC_PROLOGUE();
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r11,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822067b8
	if (!ctx.cr6.eq) goto loc_822067B8;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r11,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r10,36(r3)
	REX_STORE_U8(ctx.r3.u32 + 36, ctx.r10.u8);
	// stw r9,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r9.u32);
	// blr 
	return;
loc_822067B8:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822065c8
	sub_822065C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82208448) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r7,7
	ctx.r7.s64 = 7;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r6,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stwx r4,r8,r9
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r4.u32);
	// stb r7,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// stb r10,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
	// stb r10,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r10.u8);
	// stb r10,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82208A78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82208A80;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x824d3f1c
	ctx.lr = 0x82208A94;
	__imp__XamGetSystemVersion(ctx, base);
	// lis r11,8201
	ctx.r11.s64 = 537460736;
	// ori r11,r11,27392
	ctx.r11.u64 = ctx.r11.u64 | 27392;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82208af0
	if (!ctx.cr6.lt) goto loc_82208AF0;
	// cmplwi cr6,r30,255
	ctx.cr6.compare<uint32_t>(r30.u32, 255, ctx.xer);
	// bne cr6,0x82208ae0
	if (!ctx.cr6.eq) goto loc_82208AE0;
	// li r31,0
	r31.s64 = 0;
loc_82208AB0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d3eec
	ctx.lr = 0x82208AB8;
	__imp__XamUserGetSigninState(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82208ad0
	if (ctx.cr6.eq) goto loc_82208AD0;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(r31.u32, 4, ctx.xer);
	// blt cr6,0x82208ab0
	if (ctx.cr6.lt) goto loc_82208AB0;
	// b 0x82208af0
	goto loc_82208AF0;
loc_82208AD0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1245
	ctx.r3.s64 = 1245;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// b 0x82208b00
	goto loc_82208B00;
loc_82208AE0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d3eec
	ctx.lr = 0x82208AE8;
	__imp__XamUserGetSigninState(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82208ad0
	if (ctx.cr6.eq) goto loc_82208AD0;
loc_82208AF0:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d3f0c
	ctx.lr = 0x82208B00;
	__imp__XamUserCheckPrivilege(ctx, base);
loc_82208B00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8220AA00) {
	REX_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8220c398
	sub_8220C398(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8220AD34) {
	REX_FUNC_PROLOGUE();
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
	PPCVRegister v64{};
	PPCVRegister v65{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// li r6,-32
	ctx.r6.s64 = -32;
	// li r7,-48
	ctx.r7.s64 = -48;
	// stvlx128 v64,r1,r6
	ea = ctx.r1.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v64.u8[15 - i]);
	// stvlx128 v65,r1,r7
	ea = ctx.r1.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v65.u8[15 - i]);
	// li r0,0
	ctx.r0.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r10,80
	ctx.r10.s64 = 80;
	// li r11,96
	ctx.r11.s64 = 96;
	// li r12,112
	ctx.r12.s64 = 112;
	// dcbt r4,r0
	// lvx128 v65,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v65.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// lvsl v0,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// blt cr6,0x8220b168
	if (ctx.cr6.lt) goto loc_8220B168;
	// li r0,128
	ctx.r0.s64 = 128;
	// dcbt r4,r0
	// li r0,256
	ctx.r0.s64 = 256;
	// dcbt r4,r0
	// li r0,384
	ctx.r0.s64 = 384;
	// dcbt r4,r0
	// li r0,512
	ctx.r0.s64 = 512;
	// dcbt r4,r0
	// li r0,640
	ctx.r0.s64 = 640;
	// dcbt r4,r0
	// li r0,768
	ctx.r0.s64 = 768;
	// dcbt r4,r0
	// li r0,896
	ctx.r0.s64 = 896;
	// dcbt r4,r0
loc_8220ADBC:
	// addi r0,r5,-1024
	ctx.r0.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r0,1024
	ctx.cr6.compare<uint32_t>(ctx.r0.u32, 1024, ctx.xer);
	// blt cr6,0x8220adcc
	if (ctx.cr6.lt) goto loc_8220ADCC;
	// li r0,1024
	ctx.r0.s64 = 1024;
loc_8220ADCC:
	// lvx128 v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v9,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v14,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v15,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v16,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v17,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v18,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v19,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v20,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v21,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v22,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v23,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v24,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v25,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v26,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v27,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v28,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v29,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v30,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v31,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v32,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v33,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v34,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v35,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v36,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v37,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v39,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v40,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v41,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v42,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v43,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v44,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v45,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v47,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v48,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v49,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v51,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v57,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v64,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v64.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// vperm128 v65,v65,v1,v0
	simde_mm_store_si128((simde__m128i*)v65.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v65.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v1,v1,v2,v0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v2,v2,v3,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v3,v3,v4,v0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v4,v4,v5,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v5,v5,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v6,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v7,v7,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v65,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v65.u8[15 - i]);
	// stvlx128 v1,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v8,v8,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v9,v9,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v10,v10,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v11,v11,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v12,v12,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v13,v13,v14,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v14,v14,v15,v0
	simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v15,v15,v16,v0
	simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v8,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// stvlx128 v9,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx128 v10,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// stvlx128 v11,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v11.u8[15 - i]);
	// stvlx128 v12,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvlx128 v13,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvlx128 v14,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v14.u8[15 - i]);
	// stvlx128 v15,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v15.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v16,v16,v17,v0
	simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v17,v17,v18,v0
	simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v18,v18,v19,v0
	simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v19,v19,v20,v0
	simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v20,v20,v21,v0
	simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v21,v21,v22,v0
	simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v22,v22,v23,v0
	simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v23,v23,v24,v0
	simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v16,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v16.u8[15 - i]);
	// stvlx128 v17,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v17.u8[15 - i]);
	// stvlx128 v18,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v18.u8[15 - i]);
	// stvlx128 v19,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v19.u8[15 - i]);
	// stvlx128 v20,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v20.u8[15 - i]);
	// stvlx128 v21,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v21.u8[15 - i]);
	// stvlx128 v22,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v22.u8[15 - i]);
	// stvlx128 v23,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v23.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v24,v24,v25,v0
	simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v25,v25,v26,v0
	simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v26,v26,v27,v0
	simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v27,v27,v28,v0
	simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v28,v28,v29,v0
	simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v29,v29,v30,v0
	simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v30,v30,v31,v0
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v31,v31,v32,v0
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v24,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v24.u8[15 - i]);
	// stvlx128 v25,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v25.u8[15 - i]);
	// stvlx128 v26,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v26.u8[15 - i]);
	// stvlx128 v27,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v27.u8[15 - i]);
	// stvlx128 v28,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v28.u8[15 - i]);
	// stvlx128 v29,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v29.u8[15 - i]);
	// stvlx128 v30,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v30.u8[15 - i]);
	// stvlx128 v31,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v31.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v32,v32,v33,v0
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v33,v33,v34,v0
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v34,v34,v35,v0
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v35,v35,v36,v0
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v36,v36,v37,v0
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v37,v37,v38,v0
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v38,v38,v39,v0
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v39,v39,v40,v0
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v32,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v32.u8[15 - i]);
	// stvlx128 v33,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v33.u8[15 - i]);
	// stvlx128 v34,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v34.u8[15 - i]);
	// stvlx128 v35,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v35.u8[15 - i]);
	// stvlx128 v36,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v36.u8[15 - i]);
	// stvlx128 v37,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v37.u8[15 - i]);
	// stvlx128 v38,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v38.u8[15 - i]);
	// stvlx128 v39,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v39.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v40,v40,v41,v0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v41,v41,v42,v0
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v42,v42,v43,v0
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v43,v43,v44,v0
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v44,v44,v45,v0
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v45,v45,v46,v0
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v46,v46,v47,v0
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v47,v47,v48,v0
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v40,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v40.u8[15 - i]);
	// stvlx128 v41,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v41.u8[15 - i]);
	// stvlx128 v42,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v42.u8[15 - i]);
	// stvlx128 v43,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v43.u8[15 - i]);
	// stvlx128 v44,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v44.u8[15 - i]);
	// stvlx128 v45,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v45.u8[15 - i]);
	// stvlx128 v46,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v46.u8[15 - i]);
	// stvlx128 v47,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v47.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v48,v48,v49,v0
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v49,v49,v50,v0
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v50,v50,v51,v0
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v51,v51,v52,v0
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v52,v52,v53,v0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v53,v53,v54,v0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v54,v54,v55,v0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v55,v55,v56,v0
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v48,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// stvlx128 v49,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v49.u8[15 - i]);
	// stvlx128 v50,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v50.u8[15 - i]);
	// stvlx128 v51,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// stvlx128 v52,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// stvlx128 v53,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v53.u8[15 - i]);
	// stvlx128 v54,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// stvlx128 v55,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v56,v56,v57,v0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v57,v57,v58,v0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v58,v58,v59,v0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v59,v59,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v60,v60,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v61,v61,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v62,v62,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v63,v63,v64,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)v64.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v56,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v56.u8[15 - i]);
	// stvlx128 v57,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v57.u8[15 - i]);
	// stvlx128 v58,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// stvlx128 v59,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvlx128 v60,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvlx128 v61,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvlx128 v62,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvlx128 v63,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// vor128 v65,v64,v64
	simde_mm_store_si128((simde__m128i*)v65.u8, simde_mm_load_si128((simde__m128i*)v64.u8));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-1024
	ctx.r5.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// bge cr6,0x8220adbc
	if (!ctx.cr6.lt) goto loc_8220ADBC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8220b168
	if (!ctx.cr6.eq) goto loc_8220B168;
	// b 0x8220b1e4
	goto loc_8220B1E4;
loc_8220B168:
	// lvx128 v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// vperm128 v65,v65,v1,v0
	simde_mm_store_si128((simde__m128i*)v65.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v65.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v1,v1,v2,v0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v2,v2,v3,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v3,v3,v4,v0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v4,v4,v5,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v5,v5,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v6,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v7,v7,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v65,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v65.u8[15 - i]);
	// stvlx128 v1,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// vor128 v65,v8,v8
	simde_mm_store_si128((simde__m128i*)v65.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bgt cr6,0x8220b168
	if (ctx.cr6.gt) goto loc_8220B168;
loc_8220B1E4:
	// li r6,-32
	ctx.r6.s64 = -32;
	// li r7,-48
	ctx.r7.s64 = -48;
	// lvx128 v64,r1,r6
	ea = (ctx.r1.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v64.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v65,r1,r7
	ea = (ctx.r1.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v65.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8223D498) {
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
	ctx.lr = 0x8223D4A0;
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r23,0
	r23.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// stw r23,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r23.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r23.u32);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lfs f30,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f30.f64 = double(temp.f32);
	// li r26,1
	r26.s64 = 1;
	// stfs f30,96(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// bl 0x822d5870
	ctx.lr = 0x8223D4F8;
	sub_822D5870(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r3,80(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 80);
	// addi r24,r30,80
	r24.s64 = r30.s64 + 80;
	// stw r23,76(r30)
	REX_STORE_U32(r30.u32 + 76, r23.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r29,64(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r27,60(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// bne cr6,0x8223d550
	if (!ctx.cr6.eq) goto loc_8223D550;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16125
	ctx.r6.s64 = 16125;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223D54C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8223d564
	goto loc_8223D564;
loc_8223D550:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223D564;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8223D564:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8223d758
	if (ctx.cr6.lt) goto loc_8223D758;
	// lwz r3,0(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223D588;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8223d758
	if (ctx.cr0.lt) goto loc_8223D758;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
loc_8223D5A4:
	// stfsu f31,20(r10)
	ctx.fpscr.disableFlushMode();
	ea = 20 + ctx.r10.u32;
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8223d5a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223D5A4;
	// lwz r3,0(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223D5D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8223d758
	if (ctx.cr0.lt) goto loc_8223D758;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r30,36
	ctx.r8.s64 = r30.s64 + 36;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8223D5F0:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bgt cr6,0x8223d614
	if (ctx.cr6.gt) goto loc_8223D614;
	// lbz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 64);
	// slw r7,r26,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r10.u8 & 0x3F));
	// and. r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8223d614
	if (!ctx.cr0.eq) goto loc_8223D614;
	// stfs f31,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// b 0x8223d618
	goto loc_8223D618;
loc_8223D614:
	// stfs f30,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_8223D618:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8223d5f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223D5F0;
	// stw r25,76(r30)
	REX_STORE_U32(r30.u32 + 76, r25.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x8223d63c
	if (!ctx.cr6.eq) goto loc_8223D63C;
	// lwz r25,0(r24)
	r25.u64 = REX_LOAD_U32(r24.u32 + 0);
	// b 0x8223d640
	goto loc_8223D640;
loc_8223D63C:
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_8223D640:
	// lwz r3,72(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 72);
	// addi r28,r30,72
	r28.s64 = r30.s64 + 72;
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8223d688
	if (!ctx.cr6.eq) goto loc_8223D688;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16125
	ctx.r6.s64 = 16125;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223D684;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8223d69c
	goto loc_8223D69C;
loc_8223D688:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223D69C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8223D69C:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8223d758
	if (ctx.cr6.lt) goto loc_8223D758;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223D6C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8223d758
	if (ctx.cr0.lt) goto loc_8223D758;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223D6F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8223d758
	if (ctx.cr0.lt) goto loc_8223D758;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// mr r27,r23
	r27.u64 = r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8223d750
	if (!ctx.cr6.gt) goto loc_8223D750;
	// addi r29,r30,12
	r29.s64 = r30.s64 + 12;
loc_8223D70C:
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223D724;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x8223d73c
	if (!ctx.cr0.lt) goto loc_8223D73C;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16385
	ctx.r11.u64 = ctx.r11.u64 | 16385;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8223d750
	if (!ctx.cr6.eq) goto loc_8223D750;
loc_8223D73C:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223d70c
	if (ctx.cr6.lt) goto loc_8223D70C;
loc_8223D750:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge cr6,0x8223d798
	if (!ctx.cr6.lt) goto loc_8223D798;
loc_8223D758:
	// lwz r3,72(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223d778
	if (ctx.cr6.eq) goto loc_8223D778;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223D774;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r23,72(r30)
	REX_STORE_U32(r30.u32 + 72, r23.u32);
loc_8223D778:
	// lwz r3,0(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223d798
	if (ctx.cr6.eq) goto loc_8223D798;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223D794;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r23,0(r24)
	REX_STORE_U32(r24.u32 + 0, r23.u32);
loc_8223D798:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82249D18) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82249e64
	if (ctx.cr6.eq) goto loc_82249E64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82249e64
	if (ctx.cr6.eq) goto loc_82249E64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82249e64
	if (ctx.cr6.eq) goto loc_82249E64;
	// lwz r9,8(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r11,32(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 32);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82249d74
	if (ctx.cr6.eq) goto loc_82249D74;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82249D70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82249e6c
	goto loc_82249E6C;
loc_82249D74:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82249d8c
	if (ctx.cr0.eq) goto loc_82249D8C;
loc_82249D80:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// b 0x82249e6c
	goto loc_82249E6C;
loc_82249D8C:
	// lwz r11,20(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x82249d80
	if (ctx.cr6.gt) goto loc_82249D80;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,-4392
	ctx.r12.s64 = ctx.r12.s64 + -4392;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32219
	ctx.r12.s64 = -2111504384;
	// nop 
	// addi r12,r12,-25216
	ctx.r12.s64 = ctx.r12.s64 + -25216;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82249DC4;
	case 1:
		goto loc_82249DF8;
	case 2:
		goto loc_82249E04;
	case 3:
		goto loc_82249E10;
	case 4:
		goto loc_82249E28;
	case 5:
		goto loc_82249E1C;
	case 6:
		goto loc_82249E3C;
	case 7:
		goto loc_82249E44;
	case 8:
		goto loc_82249E4C;
	case 9:
		goto loc_82249E54;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82249DC4:
	// lwz r11,12(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82249dd8
	if (!ctx.cr6.eq) goto loc_82249DD8;
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x82249df0
	goto loc_82249DF0;
loc_82249DD8:
	// lwz r11,12(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82249DF0:
	// bl 0x8227adb0
	ctx.lr = 0x82249DF4;
	sub_8227ADB0(ctx, base);
	// b 0x82249e5c
	goto loc_82249E5C;
loc_82249DF8:
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8227adf8
	ctx.lr = 0x82249E00;
	sub_8227ADF8(ctx, base);
	// b 0x82249e5c
	goto loc_82249E5C;
loc_82249E04:
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8227ae40
	ctx.lr = 0x82249E0C;
	sub_8227AE40(ctx, base);
	// b 0x82249e5c
	goto loc_82249E5C;
loc_82249E10:
	// lfs f1,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8227ae88
	ctx.lr = 0x82249E18;
	sub_8227AE88(ctx, base);
	// b 0x82249e5c
	goto loc_82249E5C;
loc_82249E1C:
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8227aed0
	ctx.lr = 0x82249E24;
	sub_8227AED0(ctx, base);
	// b 0x82249e5c
	goto loc_82249E5C;
loc_82249E28:
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8227af18
	ctx.lr = 0x82249E30;
	sub_8227AF18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82249e5c
	if (!ctx.cr0.lt) goto loc_82249E5C;
	// b 0x82249e6c
	goto loc_82249E6C;
loc_82249E3C:
	// bl 0x8227afa8
	ctx.lr = 0x82249E40;
	sub_8227AFA8(ctx, base);
	// b 0x82249e5c
	goto loc_82249E5C;
loc_82249E44:
	// bl 0x8227b300
	ctx.lr = 0x82249E48;
	sub_8227B300(ctx, base);
	// b 0x82249e5c
	goto loc_82249E5C;
loc_82249E4C:
	// bl 0x8227b060
	ctx.lr = 0x82249E50;
	sub_8227B060(ctx, base);
	// b 0x82249e5c
	goto loc_82249E5C;
loc_82249E54:
	// lwz r5,28(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// bl 0x8227b0a8
	ctx.lr = 0x82249E5C;
	sub_8227B0A8(ctx, base);
loc_82249E5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82249e6c
	goto loc_82249E6C;
loc_82249E64:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82249E6C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8224F4B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8224F4B8;
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
	// addi r31,r11,-8704
	r31.s64 = ctx.r11.s64 + -8704;
	// lwz r11,26776(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 26776);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8224f61c
	if (!ctx.cr0.eq) goto loc_8224F61C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r10,-3384
	ctx.r9.s64 = ctx.r10.s64 + -3384;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r11,26776(r8)
	REX_STORE_U32(ctx.r8.u32 + 26776, ctx.r11.u32);
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
	ctx.lr = 0x8224F514;
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
	// addi r9,r11,-3408
	ctx.r9.s64 = ctx.r11.s64 + -3408;
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r9,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// addi r11,r31,28
	ctx.r11.s64 = r31.s64 + 28;
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r9,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// stw r10,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// bl 0x8224dca0
	ctx.lr = 0x8224F564;
	sub_8224DCA0(ctx, base);
	// stw r3,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// stw r30,76(r31)
	REX_STORE_U32(r31.u32 + 76, r30.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// addi r9,r11,-3436
	ctx.r9.s64 = ctx.r11.s64 + -3436;
	// stw r30,88(r31)
	REX_STORE_U32(r31.u32 + 88, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,92(r31)
	REX_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r9,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r10,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
	// addi r11,r31,76
	ctx.r11.s64 = r31.s64 + 76;
	// stw r30,108(r31)
	REX_STORE_U32(r31.u32 + 108, r30.u32);
	// stw r9,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r9.u32);
	// stw r10,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// bl 0x8225a078
	ctx.lr = 0x8224F5B4;
	sub_8225A078(ctx, base);
	// stw r3,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// addi r11,r31,124
	ctx.r11.s64 = r31.s64 + 124;
	// stw r30,124(r31)
	REX_STORE_U32(r31.u32 + 124, r30.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,128(r31)
	REX_STORE_U32(r31.u32 + 128, r30.u32);
	// stw r30,132(r31)
	REX_STORE_U32(r31.u32 + 132, r30.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r30,136(r31)
	REX_STORE_U32(r31.u32 + 136, r30.u32);
	// addi r8,r11,-3468
	ctx.r8.s64 = ctx.r11.s64 + -3468;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r30,140(r31)
	REX_STORE_U32(r31.u32 + 140, r30.u32);
	// stw r30,144(r31)
	REX_STORE_U32(r31.u32 + 144, r30.u32);
	// stw r10,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r10.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r9,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r9.u32);
	// stw r30,156(r31)
	REX_STORE_U32(r31.u32 + 156, r30.u32);
	// stw r8,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r8.u32);
	// stw r10,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r10.u32);
	// bl 0x8225a078
	ctx.lr = 0x8224F600;
	sub_8225A078(ctx, base);
	// stw r3,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r3.u32);
	// stw r30,172(r31)
	REX_STORE_U32(r31.u32 + 172, r30.u32);
	// addi r11,r31,172
	ctx.r11.s64 = r31.s64 + 172;
	// stw r30,176(r31)
	REX_STORE_U32(r31.u32 + 176, r30.u32);
	// stw r30,180(r31)
	REX_STORE_U32(r31.u32 + 180, r30.u32);
	// stw r30,184(r31)
	REX_STORE_U32(r31.u32 + 184, r30.u32);
	// stw r30,188(r31)
	REX_STORE_U32(r31.u32 + 188, r30.u32);
loc_8224F61C:
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822556B8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,29456
	r30.s64 = ctx.r11.s64 + 29456;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d438c
	ctx.lr = 0x822556E0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r31,r11,29488
	r31.s64 = ctx.r11.s64 + 29488;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822555b8
	ctx.lr = 0x822556F4;
	sub_822555B8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82255704
	if (!ctx.cr6.eq) goto loc_82255704;
	// li r31,0
	r31.s64 = 0;
	// b 0x82255710
	goto loc_82255710;
loc_82255704:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82255710:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d437c
	ctx.lr = 0x82255718;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

DEFINE_REX_FUNC(sub_822568D0) {
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
	// lwz r4,23544(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 23544);
	// bl 0x82255c88
	ctx.lr = 0x822568E8;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822568fc
	if (!ctx.cr0.eq) goto loc_822568FC;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x82256904
	goto loc_82256904;
loc_822568FC:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8226d438
	ctx.lr = 0x82256904;
	sub_8226D438(ctx, base);
loc_82256904:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82257460) {
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
	// li r31,0
	r31.s64 = 0;
	// lwz r4,23544(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 23544);
	// bl 0x82255c88
	ctx.lr = 0x82257480;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225749c
	if (ctx.cr0.eq) goto loc_8225749C;
	// lwz r11,240(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 240);
	// rlwinm r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x8225749c
	if (!ctx.cr6.eq) goto loc_8225749C;
	// li r31,1
	r31.s64 = 1;
loc_8225749C:
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

DEFINE_REX_FUNC(sub_82258C78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82258C80;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82258cd8
	if (ctx.cr0.eq) goto loc_82258CD8;
	// lwz r10,-4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// addi r29,r3,-4
	r29.s64 = ctx.r3.s64 + -4;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// blt 0x82258cc0
	if (ctx.cr0.lt) goto loc_82258CC0;
loc_82258CAC:
	// addi r30,r30,-16
	r30.s64 = r30.s64 + -16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227cd18
	ctx.lr = 0x82258CB8;
	sub_8227CD18(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x82258cac
	if (!ctx.cr0.lt) goto loc_82258CAC;
loc_82258CC0:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82258cd0
	if (ctx.cr0.eq) goto loc_82258CD0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82255b70
	ctx.lr = 0x82258CD0;
	sub_82255B70(ctx, base);
loc_82258CD0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x82258cf4
	goto loc_82258CF4;
loc_82258CD8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227cd18
	ctx.lr = 0x82258CE0;
	sub_8227CD18(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82258cf0
	if (ctx.cr0.eq) goto loc_82258CF0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82255b70
	ctx.lr = 0x82258CF0;
	sub_82255B70(ctx, base);
loc_82258CF0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82258CF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8225C5E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8225C5F0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r31,44(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// b 0x8225c62c
	goto loc_8225C62C;
loc_8225C60C:
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8225c628
	if (ctx.cr6.eq) goto loc_8225C628;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d7938
	ctx.lr = 0x8225C620;
	sub_822D7938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225c644
	if (ctx.cr0.eq) goto loc_8225C644;
loc_8225C628:
	// lwz r31,32(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 32);
loc_8225C62C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8225c60c
	if (!ctx.cr6.eq) goto loc_8225C60C;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,23
	ctx.r3.u64 = ctx.r3.u64 | 23;
loc_8225C63C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
loc_8225C644:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x8225C64C;
	sub_822469C0(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8225c63c
	goto loc_8225C63C;
}

DEFINE_REX_FUNC(sub_8225D7E0) {
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
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8225d858
	if (ctx.cr6.lt) goto loc_8225D858;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8225d858
	if (ctx.cr6.lt) goto loc_8225D858;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8225d858
	if (ctx.cr6.lt) goto loc_8225D858;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x8225d858
	if (ctx.cr6.gt) goto loc_8225D858;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822d6840
	ctx.lr = 0x8225D844;
	sub_822D6840(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// b 0x8225d85c
	goto loc_8225D85C;
loc_8225D858:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225D85C:
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

DEFINE_REX_FUNC(sub_8225EFA8) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x8225e1b0
	ctx.lr = 0x8225EFD4;
	sub_8225E1B0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8224da00
	ctx.lr = 0x8225EFE0;
	sub_8224DA00(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x822d7b58
	ctx.lr = 0x8225EFEC;
	sub_822D7B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_82261D68) {
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
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82261da8
	if (!ctx.cr6.eq) goto loc_82261DA8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82257270
	ctx.lr = 0x82261DA0;
	sub_82257270(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82261d10
	ctx.lr = 0x82261DA8;
	sub_82261D10(ctx, base);
loc_82261DA8:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82261e04
	if (!ctx.cr6.eq) goto loc_82261E04;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82256918
	ctx.lr = 0x82261DC4;
	sub_82256918(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82261e04
	if (ctx.cr6.eq) goto loc_82261E04;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r4,23604(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 23604);
	// bl 0x82246920
	ctx.lr = 0x82261DDC;
	sub_82246920(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82261e04
	if (ctx.cr0.eq) goto loc_82261E04;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82257270
	ctx.lr = 0x82261DF0;
	sub_82257270(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82261d10
	ctx.lr = 0x82261DF8;
	sub_82261D10(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822572c8
	ctx.lr = 0x82261E04;
	sub_822572C8(ctx, base);
loc_82261E04:
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

DEFINE_REX_FUNC(sub_82265D78) {
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
	ctx.lr = 0x82265D80;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bne cr6,0x82265e5c
	if (!ctx.cr6.eq) goto loc_82265E5C;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82265e5c
	if (!ctx.cr6.eq) goto loc_82265E5C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82256e40
	ctx.lr = 0x82265DB4;
	sub_82256E40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82265e5c
	if (ctx.cr0.lt) goto loc_82265E5C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r11,648
	r31.s64 = ctx.r11.s64 + 648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d6a10
	ctx.lr = 0x82265DCC;
	sub_822D6A10(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822d6a10
	ctx.lr = 0x82265DD8;
	sub_822D6A10(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x82265e5c
	if (!ctx.cr6.eq) goto loc_82265E5C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x822d7bb0
	ctx.lr = 0x82265DF8;
	sub_822D7BB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82265e5c
	if (!ctx.cr0.eq) goto loc_82265E5C;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r11,-2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// addic. r31,r11,-48
	ctx.xer.ca = ctx.r11.u32 > 47;
	r31.s64 = ctx.r11.s64 + -48;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82265e5c
	if (ctx.cr0.lt) goto loc_82265E5C;
	// cmpwi cr6,r31,9
	ctx.cr6.compare<int32_t>(r31.s32, 9, ctx.xer);
	// bgt cr6,0x82265e5c
	if (ctx.cr6.gt) goto loc_82265E5C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r27)
	REX_STORE_U32(r27.u32 + 8, ctx.r11.u32);
	// lwz r30,4(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x822516b0
	ctx.lr = 0x82265E34;
	sub_822516B0(ctx, base);
	// lbz r4,12(r28)
	ctx.r4.u64 = REX_LOAD_U8(r28.u32 + 12);
	// lwz r3,8(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 8);
	// bl 0x82259da0
	ctx.lr = 0x82265E40;
	sub_82259DA0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8225e858
	ctx.lr = 0x82265E50;
	sub_8225E858(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8224da00
	ctx.lr = 0x82265E5C;
	sub_8224DA00(ctx, base);
loc_82265E5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8226B6F8) {
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
	ctx.lr = 0x8226B700;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,88(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// beq cr6,0x8226ba18
	if (ctx.cr6.eq) goto loc_8226BA18;
	// bl 0x82256380
	ctx.lr = 0x8226B728;
	sub_82256380(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8226ba18
	if (ctx.cr0.eq) goto loc_8226BA18;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8226b748
	if (!ctx.cr6.eq) goto loc_8226B748;
	// mr r30,r28
	r30.u64 = r28.u64;
	// b 0x8226b754
	goto loc_8226B754;
loc_8226B748:
	// lwz r10,140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 140);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8226B754:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// beq cr6,0x8226b7e0
	if (ctx.cr6.eq) goto loc_8226B7E0;
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8226b7e0
	if (ctx.cr6.eq) goto loc_8226B7E0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8225ee88
	ctx.lr = 0x8226B780;
	sub_8225EE88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8226b7e0
	if (ctx.cr0.eq) goto loc_8226B7E0;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// bl 0x82256c10
	ctx.lr = 0x8226B794;
	sub_82256C10(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// bl 0x82256c10
	ctx.lr = 0x8226B7A0;
	sub_82256C10(ctx, base);
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r7,128(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lwz r6,96(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r5,108(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 108);
	// bl 0x82284870
	ctx.lr = 0x8226B7CC;
	sub_82284870(ctx, base);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// bl 0x82256c60
	ctx.lr = 0x8226B7E0;
	sub_82256C60(ctx, base);
loc_8226B7E0:
	// lfs f0,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 148);
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// divwu r10,r10,r11
	ctx.r10.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r10,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8226b83c
	if (!ctx.cr6.eq) goto loc_8226B83C;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226b83c
	if (ctx.cr6.eq) goto loc_8226B83C;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,116(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8226b83c
	if (ctx.cr6.eq) goto loc_8226B83C;
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225d318
	ctx.lr = 0x8226B83C;
	sub_8225D318(ctx, base);
loc_8226B83C:
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8226b920
	if (ctx.cr6.eq) goto loc_8226B920;
	// lfs f0,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f13,192(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r7,128(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 128);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r6,96(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 96);
	// bl 0x82284870
	ctx.lr = 0x8226B880;
	sub_82284870(ctx, base);
	// lfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8226b8a0
	if (ctx.cr6.gt) goto loc_8226B8A0;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8226b8a4
	if (!ctx.cr6.gt) goto loc_8226B8A4;
loc_8226B8A0:
	// li r30,1
	r30.s64 = 1;
loc_8226B8A4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// bl 0x8225e9f8
	ctx.lr = 0x8226B8B4;
	sub_8225E9F8(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// bl 0x822650b0
	ctx.lr = 0x8226B8D0;
	sub_822650B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r29,r31,20
	r29.s64 = r31.s64 + 20;
	// bl 0x8225e9f8
	ctx.lr = 0x8226B8E0;
	sub_8225E9F8(ctx, base);
	// lfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8226b8f8
	if (ctx.cr6.gt) goto loc_8226B8F8;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_8226B8F8:
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822650b0
	ctx.lr = 0x8226B908;
	sub_822650B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// bl 0x8225e9f8
	ctx.lr = 0x8226B914;
	sub_8225E9F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// bl 0x8225e9f8
	ctx.lr = 0x8226B920;
	sub_8225E9F8(ctx, base);
loc_8226B920:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226ba00
	if (ctx.cr6.eq) goto loc_8226BA00;
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8226b970
	if (!ctx.cr6.gt) goto loc_8226B970;
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,76(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 76);
	// bl 0x82255b88
	ctx.lr = 0x8226B948;
	sub_82255B88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8226b964
	if (!ctx.cr0.eq) goto loc_8226B964;
	// lwz r3,148(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x822d7b58
	ctx.lr = 0x8226B958;
	sub_822D7B58(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8226ba24
	goto loc_8226BA24;
loc_8226B964:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// stw r3,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r3.u32);
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
loc_8226B970:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8226ba18
	if (!ctx.cr6.gt) goto loc_8226BA18;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_8226B980:
	// lwz r9,68(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,76(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 76);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// stw r9,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
	// lwz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r8,68(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 68);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stw r8,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// lwz r9,68(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r8,76(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r7,116(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// stwx r9,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r7,116(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r8,68(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 68);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8226b980
	if (ctx.cr6.lt) goto loc_8226B980;
	// b 0x8226ba18
	goto loc_8226BA18;
loc_8226BA00:
	// lwz r3,76(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226ba18
	if (ctx.cr6.eq) goto loc_8226BA18;
	// bl 0x82255b70
	ctx.lr = 0x8226BA10;
	sub_82255B70(ctx, base);
	// stw r28,76(r31)
	REX_STORE_U32(r31.u32 + 76, r28.u32);
	// stw r28,80(r31)
	REX_STORE_U32(r31.u32 + 80, r28.u32);
loc_8226BA18:
	// lwz r3,148(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x822d7b58
	ctx.lr = 0x8226BA20;
	sub_822D7B58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226BA24:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8227ACF8) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8227ADB0) {
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
	// bl 0x8227ad60
	ctx.lr = 0x8227ADD0;
	sub_8227AD60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8227B848) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8227B850;
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
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8227b8dc
	if (!ctx.cr0.eq) goto loc_8227B8DC;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227b880
	if (ctx.cr6.eq) goto loc_8227B880;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r11,-18360
	ctx.r4.s64 = ctx.r11.s64 + -18360;
	// bl 0x8227fe50
	ctx.lr = 0x8227B880;
	sub_8227FE50(ctx, base);
loc_8227B880:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8227b92c
	if (ctx.cr0.eq) goto loc_8227B92C;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8227b92c
	if (!ctx.cr0.eq) goto loc_8227B92C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227b944
	if (ctx.cr6.eq) goto loc_8227B944;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8227b944
	if (!ctx.cr6.gt) goto loc_8227B944;
loc_8227B8B0:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8227cf00
	ctx.lr = 0x8227B8C4;
	sub_8227CF00(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8227b8b0
	if (ctx.cr6.lt) goto loc_8227B8B0;
	// b 0x8227b944
	goto loc_8227B944;
loc_8227B8DC:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8227B8E0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227b8f4
	if (ctx.cr6.eq) goto loc_8227B8F4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8227B8F4:
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8227b880
	if (!ctx.cr6.lt) goto loc_8227B880;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm. r10,r9,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bne 0x8227b920
	if (!ctx.cr0.eq) goto loc_8227B920;
	// bl 0x8227b848
	ctx.lr = 0x8227B91C;
	sub_8227B848(ctx, base);
	// b 0x8227b924
	goto loc_8227B924;
loc_8227B920:
	// bl 0x8227b7c0
	ctx.lr = 0x8227B924;
	sub_8227B7C0(ctx, base);
loc_8227B924:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x8227b8e0
	goto loc_8227B8E0;
loc_8227B92C:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227b944
	if (ctx.cr6.eq) goto loc_8227B944;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r11,-12544
	ctx.r4.s64 = ctx.r11.s64 + -12544;
	// bl 0x8227fe50
	ctx.lr = 0x8227B944;
	sub_8227FE50(ctx, base);
loc_8227B944:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227b958
	if (ctx.cr6.eq) goto loc_8227B958;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82258c78
	ctx.lr = 0x8227B958;
	sub_82258C78(ctx, base);
loc_8227B958:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227b9f8
	if (ctx.cr6.eq) goto loc_8227B9F8;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8227b9a0
	if (!ctx.cr6.gt) goto loc_8227B9A0;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_8227B978:
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r29,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r29.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r29,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, r29.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8227b978
	if (ctx.cr6.lt) goto loc_8227B978;
loc_8227B9A0:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8227b9d4
	if (!ctx.cr6.gt) goto loc_8227B9D4;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_8227B9B4:
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r29,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, r29.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8227b9b4
	if (ctx.cr6.lt) goto loc_8227B9B4;
loc_8227B9D4:
	// lwz r30,40(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
	// bne 0x8227ba00
	if (!ctx.cr0.eq) goto loc_8227BA00;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82278a70
	ctx.lr = 0x8227B9F0;
	sub_82278A70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8227b9fc
	goto loc_8227B9FC;
loc_8227B9F8:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_8227B9FC:
	// bl 0x82255b70
	ctx.lr = 0x8227BA00;
	sub_82255B70(ctx, base);
loc_8227BA00:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8227ba38
	if (!ctx.cr0.eq) goto loc_8227BA38;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227ba20
	if (ctx.cr6.eq) goto loc_8227BA20;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8227b6b0
	ctx.lr = 0x8227BA20;
	sub_8227B6B0(ctx, base);
loc_8227BA20:
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227ba9c
	if (ctx.cr6.eq) goto loc_8227BA9C;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8227b738
	ctx.lr = 0x8227BA34;
	sub_8227B738(ctx, base);
	// b 0x8227ba9c
	goto loc_8227BA9C;
loc_8227BA38:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r28,r29
	r28.u64 = r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8227ba6c
	if (!ctx.cr6.gt) goto loc_8227BA6C;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8227BA4C:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x8227fdf0
	ctx.lr = 0x8227BA58;
	sub_8227FDF0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8227ba4c
	if (ctx.cr6.lt) goto loc_8227BA4C;
loc_8227BA6C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8227ba9c
	if (!ctx.cr6.gt) goto loc_8227BA9C;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8227BA7C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x8227fe48
	ctx.lr = 0x8227BA88;
	sub_8227FE48(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8227ba7c
	if (ctx.cr6.lt) goto loc_8227BA7C;
loc_8227BA9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82285300) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r31,0
	r31.s64 = 0;
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// bl 0x82255b70
	ctx.lr = 0x82285328;
	sub_82255B70(ctx, base);
	// stw r31,4(r30)
	REX_STORE_U32(r30.u32 + 4, r31.u32);
	// stw r31,8(r30)
	REX_STORE_U32(r30.u32 + 8, r31.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x82255b70
	ctx.lr = 0x82285338;
	sub_82255B70(ctx, base);
	// stw r31,12(r30)
	REX_STORE_U32(r30.u32 + 12, r31.u32);
	// stw r31,16(r30)
	REX_STORE_U32(r30.u32 + 16, r31.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// bl 0x82255b70
	ctx.lr = 0x82285348;
	sub_82255B70(ctx, base);
	// stw r31,20(r30)
	REX_STORE_U32(r30.u32 + 20, r31.u32);
	// stw r31,24(r30)
	REX_STORE_U32(r30.u32 + 24, r31.u32);
	// stw r31,28(r30)
	REX_STORE_U32(r30.u32 + 28, r31.u32);
	// stw r31,36(r30)
	REX_STORE_U32(r30.u32 + 36, r31.u32);
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

DEFINE_REX_FUNC(sub_82286408) {
	REX_FUNC_PROLOGUE();
	// lwz r10,188(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// lwz r9,192(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 192);
	// lwz r11,196(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 196);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,188(r3)
	REX_STORE_U32(ctx.r3.u32 + 188, ctx.r10.u32);
	// stw r9,192(r3)
	REX_STORE_U32(ctx.r3.u32 + 192, ctx.r9.u32);
	// stw r11,196(r3)
	REX_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82286BC8) {
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
	// lwz r3,332(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 332);
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r6,r11,28,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// lwz r11,52(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82286C04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,332(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 332);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// li r4,0
	ctx.r4.s64 = 0;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r11,52(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82286C2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,332(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 332);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82286C4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,332(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 332);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82286C6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,332(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 332);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82286C8C;
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

DEFINE_REX_FUNC(sub_82288E08) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82288e1c
	if (!ctx.cr6.eq) goto loc_82288E1C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82288E1C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822893D8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82289800) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e84
	ctx.lr = 0x82289808;
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
	// addi r9,r9,7976
	ctx.r9.s64 = ctx.r9.s64 + 7976;
	// lvsr v0,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// li r7,3
	ctx.r7.s64 = 3;
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
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// vpermwi128 v60,v60,171
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x54));
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stw r7,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// vperm128 v62,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r10,20
	ctx.r10.s64 = 20;
	// vperm128 v61,v61,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r9,24
	ctx.r9.s64 = 24;
	// li r7,28
	ctx.r7.s64 = 28;
	// vperm128 v60,v60,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r31,32
	r31.s64 = 32;
	// li r30,36
	r30.s64 = 36;
	// li r29,40
	r29.s64 = 40;
	// stvewx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r28,44
	r28.s64 = 44;
	// stvewx128 v63,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r27,48
	r27.s64 = 48;
	// stvewx128 v63,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r8,52
	ctx.r8.s64 = 52;
	// stvewx128 v63,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r6,56
	ctx.r6.s64 = 56;
	// stvewx128 v62,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// li r5,60
	ctx.r5.s64 = 60;
	// stvewx128 v62,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
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
	// stvewx128 v61,r11,r28
	ea = (ctx.r11.u32 + r28.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r11,r27
	ea = (ctx.r11.u32 + r27.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82290638) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// stw r10,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8229066C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8229066c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8229066C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r9,r9,12808
	ctx.r9.s64 = ctx.r9.s64 + 12808;
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stfs f0,164(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stfs f13,168(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// stb r11,172(r3)
	REX_STORE_U8(ctx.r3.u32 + 172, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82291E38) {
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
	ctx.lr = 0x82291E40;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r22,388(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// lwz r3,4(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 4);
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// stw r11,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// bl 0x82295430
	ctx.lr = 0x82291E80;
	sub_82295430(ctx, base);
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// stw r27,0(r22)
	REX_STORE_U32(r22.u32 + 0, r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82291ea8
	if (ctx.cr6.eq) goto loc_82291EA8;
loc_82291E94:
	// lwz r3,176(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x822d7b58
	ctx.lr = 0x82291E9C;
	sub_822D7B58(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82292088
	goto loc_82292088;
loc_82291EA8:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,108(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mullw r5,r10,r11
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// bl 0x822d5870
	ctx.lr = 0x82291EC0;
	sub_822D5870(ctx, base);
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// lwz r31,396(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82291f08
	if (ctx.cr6.eq) goto loc_82291F08;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82295758
	ctx.lr = 0x82291EE8;
	sub_82295758(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82291ef4
	if (ctx.cr0.eq) goto loc_82291EF4;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_82291EF4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82291f08
	if (ctx.cr6.eq) goto loc_82291F08;
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// b 0x82291f0c
	goto loc_82291F0C;
loc_82291F08:
	// lwz r11,44(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 44);
loc_82291F0C:
	// lwz r29,372(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r6,r29,3,16,28
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFF8;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x822955b8
	ctx.lr = 0x82291F24;
	sub_822955B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82291f30
	if (ctx.cr0.eq) goto loc_82291F30;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_82291F30:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82291e94
	if (!ctx.cr6.eq) goto loc_82291E94;
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r11,r25,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r27,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r27.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r27,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r27.u32);
	// stw r9,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// blt cr6,0x82291f64
	if (ctx.cr6.lt) goto loc_82291F64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82291F64:
	// lwz r10,380(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// sth r11,128(r1)
	REX_STORE_U16(ctx.r1.u32 + 128, ctx.r11.u16);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subf r11,r8,r26
	ctx.r11.u64 = r26.u64 - ctx.r8.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82291f88
	if (ctx.cr6.lt) goto loc_82291F88;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82291F88:
	// clrlwi r9,r30,16
	ctx.r9.u64 = r30.u32 & 0xFFFF;
	// stw r29,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r29.u32);
	// stw r10,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// stw r26,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r26.u32);
	// cmplwi cr6,r9,9472
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 9472, ctx.xer);
	// sth r11,130(r1)
	REX_STORE_U16(ctx.r1.u32 + 130, ctx.r11.u16);
	// stw r25,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r25.u32);
	// bge cr6,0x82291fd0
	if (!ctx.cr6.lt) goto loc_82291FD0;
	// lwz r10,16(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r11,20
	ctx.r11.s64 = 20;
	// sth r27,132(r1)
	REX_STORE_U16(ctx.r1.u32 + 132, r27.u16);
	// subfc r9,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// eqv r11,r11,r10
	ctx.r11.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stb r11,134(r1)
	REX_STORE_U8(ctx.r1.u32 + 134, ctx.r11.u8);
	// b 0x82291fdc
	goto loc_82291FDC;
loc_82291FD0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r27,134(r1)
	REX_STORE_U8(ctx.r1.u32 + 134, r27.u8);
	// sth r11,132(r1)
	REX_STORE_U16(ctx.r1.u32 + 132, ctx.r11.u16);
loc_82291FDC:
	// add r11,r24,r25
	ctx.r11.u64 = r24.u64 + r25.u64;
	// stw r24,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r24.u32);
	// add r10,r23,r26
	ctx.r10.u64 = r23.u64 + r26.u64;
	// stw r23,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r23.u32);
	// stw r11,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// stw r10,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// bl 0x8229a710
	ctx.lr = 0x82291FFC;
	sub_8229A710(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,236(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 236);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229201C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x82292034
	if (!ctx.cr0.lt) goto loc_82292034;
	// lwz r3,176(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x822d7b58
	ctx.lr = 0x8229202C;
	sub_822D7B58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82292088
	goto loc_82292088;
loc_82292034:
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,156(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r8,152(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r8,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// bl 0x822919b0
	ctx.lr = 0x8229205C;
	sub_822919B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,240(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 240);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82292074;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 4);
	// bl 0x82246ca8
	ctx.lr = 0x8229207C;
	sub_82246CA8(ctx, base);
	// lwz r3,176(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x822d7b58
	ctx.lr = 0x82292084;
	sub_822D7B58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82292088:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_8229D680) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8229D688;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r4,72(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r30,31456(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 31456);
	// beq cr6,0x8229d6c8
	if (ctx.cr6.eq) goto loc_8229D6C8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8229ee28
	ctx.lr = 0x8229D6B0;
	sub_8229EE28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229d6c8
	if (ctx.cr0.eq) goto loc_8229D6C8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 72);
	// bl 0x8229ed18
	ctx.lr = 0x8229D6C4;
	sub_8229ED18(ctx, base);
	// stw r29,72(r31)
	REX_STORE_U32(r31.u32 + 72, r29.u32);
loc_8229D6C8:
	// stb r29,120(r31)
	REX_STORE_U8(r31.u32 + 120, r29.u8);
	// stb r29,16(r31)
	REX_STORE_U8(r31.u32 + 16, r29.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8229E7C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8229E7D0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12016(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12016);
	// addi r30,r3,12004
	r30.s64 = ctx.r3.s64 + 12004;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x8229e870
	if (ctx.cr6.eq) goto loc_8229E870;
loc_8229E7F0:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// bne cr6,0x8229e7f0
	if (!ctx.cr6.eq) goto loc_8229E7F0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8229e870
	if (ctx.cr6.eq) goto loc_8229E870;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// lwz r11,31492(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 31492);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r28,16(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// beq cr6,0x8229e870
	if (ctx.cr6.eq) goto loc_8229E870;
loc_8229E824:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822160f0
	ctx.lr = 0x8229E830;
	sub_822160F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8229e864
	if (!ctx.cr0.eq) goto loc_8229E864;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229e850
	if (ctx.cr6.eq) goto loc_8229E850;
	// bl 0x822c80a8
	ctx.lr = 0x8229E848;
	sub_822C80A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8229E850:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8229e6d0
	ctx.lr = 0x8229E85C;
	sub_8229E6D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8229e868
	goto loc_8229E868;
loc_8229E864:
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_8229E868:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x8229e824
	if (!ctx.cr6.eq) goto loc_8229E824;
loc_8229E870:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822A0200) {
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
	ctx.lr = 0x822A0208;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// addi r27,r3,16
	r27.s64 = ctx.r3.s64 + 16;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// addi r28,r3,48
	r28.s64 = ctx.r3.s64 + 48;
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// li r29,4
	r29.s64 = 4;
	// stw r30,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// stw r30,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r30.u32);
	// stw r30,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r30.u32);
	// stw r30,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r30.u32);
	// stw r30,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, r30.u32);
	// stw r30,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, r30.u32);
loc_822A0244:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8229d5f8
	ctx.lr = 0x822A024C;
	sub_8229D5F8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r28,r28,144
	r28.s64 = r28.s64 + 144;
	// bge 0x822a0244
	if (!ctx.cr0.lt) goto loc_822A0244;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r30,768(r31)
	REX_STORE_U32(r31.u32 + 768, r30.u32);
	// addi r11,r31,776
	ctx.r11.s64 = r31.s64 + 776;
	// stw r30,772(r31)
	REX_STORE_U32(r31.u32 + 772, r30.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822A0274:
	// stwu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x822a0274
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A0274;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r30,128(r11)
	REX_STORE_U32(ctx.r11.u32 + 128, r30.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r30,132(r11)
	REX_STORE_U32(ctx.r11.u32 + 132, r30.u32);
	// stw r9,136(r11)
	REX_STORE_U32(ctx.r11.u32 + 136, ctx.r9.u32);
	// addi r11,r31,924
	ctx.r11.s64 = r31.s64 + 924;
	// stw r30,916(r31)
	REX_STORE_U32(r31.u32 + 916, r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r30,920(r31)
	REX_STORE_U32(r31.u32 + 920, r30.u32);
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
loc_822A02A4:
	// stwu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822a02a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A02A4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,128(r11)
	REX_STORE_U32(ctx.r11.u32 + 128, r30.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r30,132(r11)
	REX_STORE_U32(ctx.r11.u32 + 132, r30.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r9,136(r11)
	REX_STORE_U32(ctx.r11.u32 + 136, ctx.r9.u32);
	// std r30,1072(r31)
	REX_STORE_U64(r31.u32 + 1072, r30.u64);
	// addi r3,r31,1104
	ctx.r3.s64 = r31.s64 + 1104;
	// std r30,1064(r31)
	REX_STORE_U64(r31.u32 + 1064, r30.u64);
	// addi r11,r31,1064
	ctx.r11.s64 = r31.s64 + 1064;
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,1084(r31)
	REX_STORE_U32(r31.u32 + 1084, r30.u32);
	// lfs f13,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,1088(r31)
	REX_STORE_U32(r31.u32 + 1088, r30.u32);
	// lfs f12,2352(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2352);
	ctx.f12.f64 = double(temp.f32);
	// stw r30,1092(r31)
	REX_STORE_U32(r31.u32 + 1092, r30.u32);
	// stfs f0,1080(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 1080, temp.u32);
	// stfs f13,1096(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 1096, temp.u32);
	// stfs f12,1100(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 1100, temp.u32);
	// bl 0x8229d5f8
	ctx.lr = 0x822A02FC;
	sub_8229D5F8(ctx, base);
	// addi r3,r31,1248
	ctx.r3.s64 = r31.s64 + 1248;
	// bl 0x8229d5f8
	ctx.lr = 0x822A0304;
	sub_8229D5F8(ctx, base);
	// addi r3,r31,1392
	ctx.r3.s64 = r31.s64 + 1392;
	// bl 0x8229d5f8
	ctx.lr = 0x822A030C;
	sub_8229D5F8(ctx, base);
	// li r4,2048
	ctx.r4.s64 = 2048;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ad068
	ctx.lr = 0x822A0318;
	sub_822AD068(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822ad068
	ctx.lr = 0x822A0324;
	sub_822AD068(ctx, base);
	// lis r11,257
	ctx.r11.s64 = 16842752;
	// li r10,-1
	ctx.r10.s64 = -1;
	// ori r11,r11,257
	ctx.r11.u64 = ctx.r11.u64 | 257;
	// stw r10,1064(r31)
	REX_STORE_U32(r31.u32 + 1064, ctx.r10.u32);
	// addi r3,r31,1548
	ctx.r3.s64 = r31.s64 + 1548;
	// stw r10,1068(r31)
	REX_STORE_U32(r31.u32 + 1068, ctx.r10.u32);
	// li r5,44
	ctx.r5.s64 = 44;
	// stw r10,1072(r31)
	REX_STORE_U32(r31.u32 + 1072, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,1076(r31)
	REX_STORE_U32(r31.u32 + 1076, ctx.r10.u32);
	// stw r11,1536(r31)
	REX_STORE_U32(r31.u32 + 1536, ctx.r11.u32);
	// stw r11,1540(r31)
	REX_STORE_U32(r31.u32 + 1540, ctx.r11.u32);
	// sth r11,1544(r31)
	REX_STORE_U16(r31.u32 + 1544, ctx.r11.u16);
	// stb r11,1546(r31)
	REX_STORE_U8(r31.u32 + 1546, ctx.r11.u8);
	// bl 0x822d5870
	ctx.lr = 0x822A0360;
	sub_822D5870(ctx, base);
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// lis r8,-32214
	ctx.r8.s64 = -2111176704;
	// addi r11,r11,-2688
	ctx.r11.s64 = ctx.r11.s64 + -2688;
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// lis r9,-32214
	ctx.r9.s64 = -2111176704;
	// stw r11,1548(r31)
	REX_STORE_U32(r31.u32 + 1548, ctx.r11.u32);
	// addi r11,r8,-2432
	ctx.r11.s64 = ctx.r8.s64 + -2432;
	// addi r10,r10,-2624
	ctx.r10.s64 = ctx.r10.s64 + -2624;
	// addi r9,r9,-2560
	ctx.r9.s64 = ctx.r9.s64 + -2560;
	// stw r11,1560(r31)
	REX_STORE_U32(r31.u32 + 1560, ctx.r11.u32);
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// stw r10,1552(r31)
	REX_STORE_U32(r31.u32 + 1552, ctx.r10.u32);
	// lis r7,-32214
	ctx.r7.s64 = -2111176704;
	// stw r9,1556(r31)
	REX_STORE_U32(r31.u32 + 1556, ctx.r9.u32);
	// lis r6,-32214
	ctx.r6.s64 = -2111176704;
	// addi r11,r5,-2344
	ctx.r11.s64 = ctx.r5.s64 + -2344;
	// addi r10,r7,-1088
	ctx.r10.s64 = ctx.r7.s64 + -1088;
	// addi r9,r6,-2368
	ctx.r9.s64 = ctx.r6.s64 + -2368;
	// stw r11,1572(r31)
	REX_STORE_U32(r31.u32 + 1572, ctx.r11.u32);
	// lis r4,-32214
	ctx.r4.s64 = -2111176704;
	// stw r10,1564(r31)
	REX_STORE_U32(r31.u32 + 1564, ctx.r10.u32);
	// stw r9,1568(r31)
	REX_STORE_U32(r31.u32 + 1568, ctx.r9.u32);
	// lis r3,-32214
	ctx.r3.s64 = -2111176704;
	// addi r11,r4,-2256
	ctx.r11.s64 = ctx.r4.s64 + -2256;
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// lis r9,-32214
	ctx.r9.s64 = -2111176704;
	// stw r11,1576(r31)
	REX_STORE_U32(r31.u32 + 1576, ctx.r11.u32);
	// addi r8,r3,-2864
	ctx.r8.s64 = ctx.r3.s64 + -2864;
	// addi r10,r10,-2832
	ctx.r10.s64 = ctx.r10.s64 + -2832;
	// addi r11,r9,-2720
	ctx.r11.s64 = ctx.r9.s64 + -2720;
	// stw r8,1580(r31)
	REX_STORE_U32(r31.u32 + 1580, ctx.r8.u32);
	// stw r10,1584(r31)
	REX_STORE_U32(r31.u32 + 1584, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,1588(r31)
	REX_STORE_U32(r31.u32 + 1588, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822A9500) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r6,4(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// subf r11,r10,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r10.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x822a954c
	if (!ctx.cr6.gt) goto loc_822A954C;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822a9288
	ctx.lr = 0x822A9548;
	sub_822A9288(ctx, base);
	// b 0x822a95a4
	goto loc_822A95A4;
loc_822A954C:
	// bge cr6,0x822a95a4
	if (!ctx.cr6.lt) goto loc_822A95A4;
	// subf r4,r11,r30
	ctx.r4.u64 = r30.u64 - ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a9440
	ctx.lr = 0x822A955C;
	sub_822A9440(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r31,12
	ctx.r6.s64 = r31.s64 + 12;
	// lbz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// subf r4,r11,r30
	ctx.r4.u64 = r30.u64 - ctx.r11.u64;
	// bl 0x822a9220
	ctx.lr = 0x822A9584;
	sub_822A9220(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// subf r10,r10,r30
	ctx.r10.u64 = r30.u64 - ctx.r10.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_822A95A4:
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

DEFINE_REX_FUNC(sub_822AADF0) {
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
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// stw r4,264(r3)
	REX_STORE_U32(ctx.r3.u32 + 264, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822aae20
	if (!ctx.cr6.gt) goto loc_822AAE20;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822AAE20:
	// bl 0x822c80d0
	ctx.lr = 0x822AAE24;
	sub_822C80D0(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r3.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x822AAE38;
	sub_822D5870(ctx, base);
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

DEFINE_REX_FUNC(sub_822AC540) {
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
	ctx.lr = 0x822AC548;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r27,r3,4
	r27.s64 = ctx.r3.s64 + 4;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822ac5b0
	if (ctx.cr6.eq) goto loc_822AC5B0;
loc_822AC564:
	// lwz r11,176(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 176);
	// lwz r28,12(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// beq cr6,0x822ac5a4
	if (ctx.cr6.eq) goto loc_822AC5A4;
	// stw r29,536(r31)
	REX_STORE_U32(r31.u32 + 536, r29.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r29,528(r31)
	REX_STORE_U32(r31.u32 + 528, r29.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r29,532(r31)
	REX_STORE_U32(r31.u32 + 532, r29.u32);
	// bl 0x822abf40
	ctx.lr = 0x822AC58C;
	sub_822ABF40(ctx, base);
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
	ctx.lr = 0x822AC5A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822AC5A4:
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x822ac564
	if (!ctx.cr6.eq) goto loc_822AC564;
loc_822AC5B0:
	// lwz r11,176(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ac5f4
	if (ctx.cr6.eq) goto loc_822AC5F4;
	// stw r29,536(r11)
	REX_STORE_U32(ctx.r11.u32 + 536, r29.u32);
	// lwz r11,176(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 176);
	// stw r29,528(r11)
	REX_STORE_U32(ctx.r11.u32 + 528, r29.u32);
	// lwz r11,176(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 176);
	// stw r29,532(r11)
	REX_STORE_U32(ctx.r11.u32 + 532, r29.u32);
	// lwz r3,176(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ac5f4
	if (ctx.cr6.eq) goto loc_822AC5F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822AC5F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,176(r30)
	REX_STORE_U32(r30.u32 + 176, r29.u32);
loc_822AC5F4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822ac340
	ctx.lr = 0x822AC5FC;
	sub_822AC340(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822ac4d8
	ctx.lr = 0x822AC604;
	sub_822AC4D8(ctx, base);
	// stw r3,176(r30)
	REX_STORE_U32(r30.u32 + 176, ctx.r3.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x822b11e8
	ctx.lr = 0x822AC610;
	sub_822B11E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822AEC50) {
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
	// bl 0x822ae3d8
	ctx.lr = 0x822AEC68;
	sub_822AE3D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ae170
	ctx.lr = 0x822AEC70;
	sub_822AE170(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ae4b0
	ctx.lr = 0x822AEC78;
	sub_822AE4B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ae710
	ctx.lr = 0x822AEC80;
	sub_822AE710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ac540
	ctx.lr = 0x822AEC88;
	sub_822AC540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ae238
	ctx.lr = 0x822AEC90;
	sub_822AE238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ae300
	ctx.lr = 0x822AEC98;
	sub_822AE300(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ae578
	ctx.lr = 0x822AECA0;
	sub_822AE578(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ae7f0
	ctx.lr = 0x822AECA8;
	sub_822AE7F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ae8b8
	ctx.lr = 0x822AECB0;
	sub_822AE8B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ae980
	ctx.lr = 0x822AECB8;
	sub_822AE980(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,472(r31)
	REX_STORE_U32(r31.u32 + 472, ctx.r11.u32);
	// stw r11,476(r31)
	REX_STORE_U32(r31.u32 + 476, ctx.r11.u32);
	// stw r11,480(r31)
	REX_STORE_U32(r31.u32 + 480, ctx.r11.u32);
	// stw r11,484(r31)
	REX_STORE_U32(r31.u32 + 484, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_822B26B8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822b26d4
	if (ctx.cr6.lt) goto loc_822B26D4;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,31464(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31464);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// blr 
	return;
loc_822B26D4:
	// addi r11,r4,10
	ctx.r11.s64 = ctx.r4.s64 + 10;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b26f8
	if (!ctx.cr6.eq) goto loc_822B26F8;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,31464(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31464);
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
loc_822B26F8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B3C20) {
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
	// bl 0x822d4e80
	ctx.lr = 0x822B3C28;
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,112(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x822c4cf0
	ctx.lr = 0x822B3C50;
	sub_822C4CF0(ctx, base);
	// lwz r11,68(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 68);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822b3f08
	if (!ctx.cr6.gt) goto loc_822B3F08;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f30,23268(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 23268);
	f30.f64 = double(temp.f32);
	// lfs f31,-6656(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -6656);
	f31.f64 = double(temp.f32);
loc_822B3C74:
	// lwz r11,64(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 64);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b3ca8
	if (ctx.cr0.eq) goto loc_822B3CA8;
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
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
loc_822B3CA8:
	// lwz r11,64(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 64);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b3d1c
	if (ctx.cr0.eq) goto loc_822B3D1C;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b8668
	ctx.lr = 0x822B3CC8;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b3ce8
	if (ctx.cr0.eq) goto loc_822B3CE8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// b 0x822b3d18
	goto loc_822B3D18;
loc_822B3CE8:
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r9,r31,-2
	ctx.r9.s64 = r31.s64 + -2;
	// addi r10,r30,-4
	ctx.r10.s64 = r30.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822B3CF8:
	// lfsu f0,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r11,86(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// sthu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x822b3cf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822B3CF8;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
loc_822B3D18:
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_822B3D1C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822B3D20:
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r9,64(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 64);
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// and. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822b3d5c
	if (ctx.cr0.eq) goto loc_822B3D5C;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// blt cr6,0x822b3d20
	if (ctx.cr6.lt) goto loc_822B3D20;
loc_822B3D5C:
	// lwz r11,64(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 64);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b3d90
	if (ctx.cr0.eq) goto loc_822B3D90;
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
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
loc_822B3D90:
	// lwz r11,64(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 64);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b3e18
	if (ctx.cr0.eq) goto loc_822B3E18;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b8668
	ctx.lr = 0x822B3DB0;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b3df0
	if (ctx.cr0.eq) goto loc_822B3DF0;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r31,-4
	ctx.r10.s64 = r31.s64 + -4;
	// addi r11,r30,-2
	ctx.r11.s64 = r30.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822B3DC8:
	// lhau r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ea));
	ctx.r11.u32 = ea;
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// stfsu f0,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822b3dc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822B3DC8;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// b 0x822b3e14
	goto loc_822B3E14;
loc_822B3DF0:
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
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_822B3E14:
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
loc_822B3E18:
	// lwz r11,64(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 64);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b3e84
	if (ctx.cr0.eq) goto loc_822B3E84;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b8668
	ctx.lr = 0x822B3E38;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b3e50
	if (ctx.cr0.eq) goto loc_822B3E50;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x822b3e80
	goto loc_822B3E80;
loc_822B3E50:
	// li r9,4
	ctx.r9.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r30,-4
	ctx.r10.s64 = r30.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822B3E60:
	// lfsu f0,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lbz r9,87(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 87);
	// stbx r9,r31,r11
	REX_STORE_U8(r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x822b3e60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822B3E60;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
loc_822B3E80:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_822B3E84:
	// lwz r11,64(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 64);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b3ef8
	if (ctx.cr0.eq) goto loc_822B3EF8;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b8668
	ctx.lr = 0x822B3EA4;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b3ec4
	if (ctx.cr0.eq) goto loc_822B3EC4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// b 0x822b3ef4
	goto loc_822B3EF4;
loc_822B3EC4:
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r9,r31,-2
	ctx.r9.s64 = r31.s64 + -2;
	// addi r10,r30,-4
	ctx.r10.s64 = r30.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822B3ED4:
	// lfsu f0,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r11,86(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// sthu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x822b3ed4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822B3ED4;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
loc_822B3EF4:
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_822B3EF8:
	// lwz r11,68(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 68);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822b3c74
	if (ctx.cr6.lt) goto loc_822B3C74;
loc_822B3F08:
	// lwz r3,112(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 112);
	// bl 0x822c4da0
	ctx.lr = 0x822B3F10;
	sub_822C4DA0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_822C5A08) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,24504
	ctx.r10.s64 = ctx.r10.s64 + 24504;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r9,16(r3)
	REX_STORE_U8(ctx.r3.u32 + 16, ctx.r9.u8);
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
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C5B88) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,31464(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31464);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lfs f1,1080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1080);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822C5D70) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r10,28(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r4,r11,2896
	ctx.r4.s64 = ctx.r11.s64 + 2896;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822C6168) {
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
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,2956(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 2956);
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r3,2956(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 2956);
	// bl 0x822a5240
	ctx.lr = 0x822C61B4;
	sub_822A5240(ctx, base);
	// stfs f1,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C61D0;
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

DEFINE_REX_FUNC(sub_822C7070) {
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
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822a9aa8
	ctx.lr = 0x822C70A0;
	sub_822A9AA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f3f40
	ctx.lr = 0x822C70AC;
	sub_821F3F40(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822a9aa8
	ctx.lr = 0x822C70B8;
	sub_822A9AA8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8229f270
	ctx.lr = 0x822C70C8;
	sub_8229F270(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821f3f40
	ctx.lr = 0x822C70D4;
	sub_821F3F40(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ca328
	ctx.lr = 0x822C70E0;
	sub_822CA328(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C70F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_822C96B8) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r30,r3,28
	r30.s64 = ctx.r3.s64 + 28;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C96E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,13(r31)
	REX_STORE_U8(r31.u32 + 13, ctx.r11.u8);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C9704;
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

DEFINE_REX_FUNC(sub_822CA188) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f0,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f0,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f0,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f0,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,56(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CCC90) {
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
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822cccb0
	if (!ctx.cr6.eq) goto loc_822CCCB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822cccf4
	goto loc_822CCCF4;
loc_822CCCB0:
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r9,6
	ctx.r9.s64 = 6;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stb r9,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// lfs f0,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stb r8,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// lfs f13,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// sth r7,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r7.u16);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822cdf98
	ctx.lr = 0x822CCCF0;
	sub_822CDF98(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_822CCCF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CE0D0) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822cdcf0
	ctx.lr = 0x822CE0EC;
	sub_822CDCF0(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x822c88c0
	ctx.lr = 0x822CE0F4;
	sub_822C88C0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stb r11,60(r31)
	REX_STORE_U8(r31.u32 + 60, ctx.r11.u8);
	// lfs f0,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,61(r31)
	REX_STORE_U8(r31.u32 + 61, ctx.r11.u8);
	// lfs f13,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// sth r8,62(r31)
	REX_STORE_U16(r31.u32 + 62, ctx.r8.u16);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// stw r7,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r7.u32);
	// stfs f13,72(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
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

DEFINE_REX_FUNC(sub_822D0668) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822D0670;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// addi r30,r3,68
	r30.s64 = ctx.r3.s64 + 68;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,-1
	r29.s64 = -1;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D0698;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_822D069C:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r28.s32, ctx.xer);
	// beq cr6,0x822d06bc
	if (ctx.cr6.eq) goto loc_822D06BC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x822d069c
	if (ctx.cr6.lt) goto loc_822D069C;
	// b 0x822d06c0
	goto loc_822D06C0;
loc_822D06BC:
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
loc_822D06C0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D06D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822D18B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822D18C0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// addi r31,r3,48
	r31.s64 = ctx.r3.s64 + 48;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D18E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d1900
	if (ctx.cr6.eq) goto loc_822D1900;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d1900
	if (ctx.cr6.eq) goto loc_822D1900;
	// li r29,1
	r29.s64 = 1;
loc_822D1900:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D1914;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822D2780) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822D2788;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,44
	r30.s64 = ctx.r3.s64 + 44;
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x822D27A4;
	sub_822D4FA0(ctx, base);
	// lbz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 44);
	// cmplwi cr6,r11,80
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 80, ctx.xer);
	// bne cr6,0x822d27d8
	if (!ctx.cr6.eq) goto loc_822D27D8;
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1);
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// bne cr6,0x822d27d8
	if (!ctx.cr6.eq) goto loc_822D27D8;
	// lbz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 2);
	// cmplwi cr6,r11,83
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 83, ctx.xer);
	// bne cr6,0x822d27d8
	if (!ctx.cr6.eq) goto loc_822D27D8;
	// lbz r11,3(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 3);
	// cmplwi cr6,r11,88
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 88, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x822d27dc
	if (ctx.cr6.eq) goto loc_822D27DC;
loc_822D27D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822D27DC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d27f4
	if (!ctx.cr0.eq) goto loc_822D27F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822D27E8:
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822d0d90
	ctx.lr = 0x822D27F0;
	sub_822D0D90(ctx, base);
	// b 0x822d28d4
	goto loc_822D28D4;
loc_822D27F4:
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// lwz r8,68(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 68);
	// li r5,40
	ctx.r5.s64 = 40;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r30,52(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 52);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x822D2820;
	sub_822D4FA0(ctx, base);
	// lhz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 124);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822d2878
	if (ctx.cr6.eq) goto loc_822D2878;
	// cmpwi cr6,r11,358
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 358, ctx.xer);
	// beq cr6,0x822d2848
	if (ctx.cr6.eq) goto loc_822D2848;
	// cmplwi cr6,r11,65534
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65534, ctx.xer);
	// bne cr6,0x822d28d4
	if (!ctx.cr6.eq) goto loc_822D28D4;
	// cmplwi cr6,r30,40
	ctx.cr6.compare<uint32_t>(r30.u32, 40, ctx.xer);
	// b 0x822d287c
	goto loc_822D287C;
loc_822D2848:
	// cmplwi cr6,r30,52
	ctx.cr6.compare<uint32_t>(r30.u32, 52, ctx.xer);
	// bge cr6,0x822d2854
	if (!ctx.cr6.lt) goto loc_822D2854;
	// li r29,-1
	r29.s64 = -1;
loc_822D2854:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r3,r31,164
	ctx.r3.s64 = r31.s64 + 164;
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// li r5,52
	ctx.r5.s64 = 52;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x822D286C;
	sub_822D4FA0(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// li r5,32
	ctx.r5.s64 = 32;
	// b 0x822d288c
	goto loc_822D288C;
loc_822D2878:
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(r30.u32, 16, ctx.xer);
loc_822D287C:
	// bge cr6,0x822d2884
	if (!ctx.cr6.lt) goto loc_822D2884;
	// li r29,-1
	r29.s64 = -1;
loc_822D2884:
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
loc_822D288C:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x822D289C;
	sub_822D4FA0(ctx, base);
	// extsb r11,r29
	ctx.r11.s64 = r29.s8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822d27e8
	if (ctx.cr6.eq) goto loc_822D27E8;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// bl 0x822d0d90
	ctx.lr = 0x822D28CC;
	sub_822D0D90(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,256(r31)
	REX_STORE_U8(r31.u32 + 256, ctx.r11.u8);
loc_822D28D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822D6A10) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822D6A14:
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x822d6a14
	if (!ctx.cr0.eq) goto loc_822D6A14;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D7648) {
	REX_FUNC_PROLOGUE();
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822dd3d0
	sub_822DD3D0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822D7A38) {
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
	ctx.lr = 0x822D7A40;
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
	ctx.lr = 0x822D7A70;
	sub_822D5870(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x822d7a90
	if (!ctx.cr6.eq) goto loc_822D7A90;
loc_822D7A78:
	// bl 0x822db6c0
	ctx.lr = 0x822D7A7C;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822D7A88;
	sub_822D6910(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822d7aec
	goto loc_822D7AEC;
loc_822D7A90:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822d7a78
	if (ctx.cr6.eq) goto loc_822D7A78;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d6a10
	ctx.lr = 0x822D7AA0;
	sub_822D6A10(ctx, base);
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// li r10,73
	ctx.r10.s64 = 73;
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822d7acc
	if (!ctx.cr6.gt) goto loc_822D7ACC;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// b 0x822d7ad0
	goto loc_822D7AD0;
loc_822D7ACC:
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
loc_822D7AD0:
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x822D7AEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822D7AEC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(__savevmx_81) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_108) {
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

DEFINE_REX_FUNC(sub_822D9B88) {
	REX_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822d9a48
	sub_822D9A48(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822DA568) {
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
	ctx.lr = 0x822DA570;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// ld r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r6,22
	ctx.r6.s64 = 22;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// bl 0x822e0d00
	ctx.lr = 0x822DA598;
	sub_822E0D00(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x822da5b8
	if (!ctx.cr6.eq) goto loc_822DA5B8;
loc_822DA5A0:
	// bl 0x822db6c0
	ctx.lr = 0x822DA5A4;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822DA5B0;
	sub_822D6910(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x822da690
	goto loc_822DA690;
loc_822DA5B8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822da5a0
	if (ctx.cr6.eq) goto loc_822DA5A0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(r31.s32, -1, ctx.xer);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r11,r11,-45
	ctx.r11.s64 = ctx.r11.s64 + -45;
	// addi r30,r10,-1
	r30.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// add r28,r11,r29
	r28.u64 = ctx.r11.u64 + r29.u64;
	// beq cr6,0x822da5ec
	if (ctx.cr6.eq) goto loc_822DA5EC;
	// subf r4,r11,r31
	ctx.r4.u64 = r31.u64 - ctx.r11.u64;
loc_822DA5EC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822e0ac0
	ctx.lr = 0x822DA5FC;
	sub_822E0AC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822da610
	if (ctx.cr0.eq) goto loc_822DA610;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r29)
	REX_STORE_U8(r29.u32 + 0, ctx.r11.u8);
	// b 0x822da690
	goto loc_822DA690;
loc_822DA610:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfc r10,r11,r30
	ctx.xer.ca = r30.u32 >= ctx.r11.u32;
	ctx.r10.u64 = r30.u64 - ctx.r11.u64;
	// eqv r9,r11,r30
	ctx.r9.u64 = ~(ctx.r11.u64 ^ r30.u64);
	// cmpwi cr6,r11,-4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -4, ctx.xer);
	// rlwinm r10,r9,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// blt cr6,0x822da674
	if (ctx.cr6.lt) goto loc_822DA674;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r27.s32, ctx.xer);
	// bge cr6,0x822da674
	if (!ctx.cr6.lt) goto loc_822DA674;
	// extsb. r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822da658
	if (ctx.cr0.eq) goto loc_822DA658;
loc_822DA644:
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822da644
	if (!ctx.cr0.eq) goto loc_822DA644;
	// stb r11,-2(r28)
	REX_STORE_U8(r28.u32 + -2, ctx.r11.u8);
loc_822DA658:
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822da2e0
	ctx.lr = 0x822DA670;
	sub_822DA2E0(ctx, base);
	// b 0x822da690
	goto loc_822DA690;
loc_822DA674:
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d9b90
	ctx.lr = 0x822DA690;
	sub_822D9B90(ctx, base);
loc_822DA690:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_822E1520) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// lwz r11,32272(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32272);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32272(r10)
	REX_STORE_U32(ctx.r10.u32 + 32272, ctx.r11.u32);
	// bl 0x822d9828
	ctx.lr = 0x822E154C;
	sub_822D9828(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// beq 0x822e156c
	if (ctx.cr0.eq) goto loc_822E156C;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// b 0x822e1580
	goto loc_822E1580;
loc_822E156C:
	// addi r10,r31,20
	ctx.r10.s64 = r31.s64 + 20;
	// li r9,2
	ctx.r9.s64 = 2;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r9.u32);
loc_822E1580:
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_822E5F4C) {
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
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x822dbb00
	ctx.lr = 0x822E5F60;
	sub_822DBB00(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r25,84(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r28,92(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// li r24,-1
	ctx.r24.s64 = -1;
	// lwz r30,88(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// addi r29,r11,-11584
	ctx.r29.s64 = ctx.r11.s64 + -11584;
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E6DF8) {
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
	ctx.lr = 0x822E6E00;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r18,-2
	r18.s64 = -2;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x822e6e44
	if (!ctx.cr6.eq) goto loc_822E6E44;
	// bl 0x822db6f8
	ctx.lr = 0x822E6E24;
	sub_822DB6F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822db6c0
	ctx.lr = 0x822E6E30;
	sub_822DB6C0(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
loc_822E6E34:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x822e7408
	goto loc_822E7408;
loc_822E6E44:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// blt cr6,0x822e6e5c
	if (ctx.cr6.lt) goto loc_822E6E5C;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r11,-11596(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11596);
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822e6e80
	if (ctx.cr6.lt) goto loc_822E6E80;
loc_822E6E5C:
	// bl 0x822db6f8
	ctx.lr = 0x822E6E60;
	sub_822DB6F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822db6c0
	ctx.lr = 0x822E6E6C;
	sub_822DB6C0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
loc_822E6E70:
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822E6E78;
	sub_822D6910(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822e7408
	goto loc_822E7408;
loc_822E6E80:
	// srawi r11,r21,5
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1F) != 0);
	ctx.r11.s64 = r21.s32 >> 5;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,-11584
	r28.s64 = ctx.r10.s64 + -11584;
	// clrlwi r11,r21,27
	ctx.r11.u64 = r21.u32 & 0x1F;
	// mulli r29,r11,72
	r29.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r11,r27,r28
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + r28.u32);
	// add r10,r29,r11
	ctx.r10.u64 = r29.u64 + ctx.r11.u64;
	// lbz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822e6e5c
	if (ctx.cr0.eq) goto loc_822E6E5C;
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x822e6ed8
	if (!ctx.cr6.gt) goto loc_822E6ED8;
	// bl 0x822db6f8
	ctx.lr = 0x822E6EC4;
	sub_822DB6F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_822E6ECC:
	// bl 0x822db6c0
	ctx.lr = 0x822E6ED0;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// b 0x822e6e70
	goto loc_822E6E70;
loc_822E6ED8:
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// mr r30,r26
	r30.u64 = r26.u64;
	// beq cr6,0x822e7404
	if (ctx.cr6.eq) goto loc_822E7404;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e7404
	if (!ctx.cr0.eq) goto loc_822E7404;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// bne cr6,0x822e6f04
	if (!ctx.cr6.eq) goto loc_822E6F04;
loc_822E6EF8:
	// bl 0x822db6f8
	ctx.lr = 0x822E6EFC;
	sub_822DB6F8(ctx, base);
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// b 0x822e6ecc
	goto loc_822E6ECC;
loc_822E6F04:
	// lbz r11,40(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 40);
	// rotlwi r11,r11,24
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 24);
	// srawi r11,r11,25
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 25;
	// extsb r22,r11
	r22.s64 = ctx.r11.s8;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(r22.s32, 1, ctx.xer);
	// beq cr6,0x822e6f3c
	if (ctx.cr6.eq) goto loc_822E6F3C;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(r22.s32, 2, ctx.xer);
	// bne cr6,0x822e6f34
	if (!ctx.cr6.eq) goto loc_822E6F34;
	// not r11,r31
	ctx.r11.u64 = ~r31.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e6ef8
	if (ctx.cr0.eq) goto loc_822E6EF8;
	// rlwinm r31,r31,0,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
loc_822E6F34:
	// mr r23,r19
	r23.u64 = r19.u64;
	// b 0x822e6f9c
	goto loc_822E6F9C;
loc_822E6F3C:
	// not r11,r31
	ctx.r11.u64 = ~r31.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e6ef8
	if (ctx.cr0.eq) goto loc_822E6EF8;
	// rlwinm r31,r31,31,1,31
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(r31.u32, 4, ctx.xer);
	// bge cr6,0x822e6f58
	if (!ctx.cr6.lt) goto loc_822E6F58;
	// li r31,4
	r31.s64 = 4;
loc_822E6F58:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d9828
	ctx.lr = 0x822E6F60;
	sub_822D9828(ctx, base);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bne 0x822e6f80
	if (!ctx.cr0.eq) goto loc_822E6F80;
	// bl 0x822db6c0
	ctx.lr = 0x822E6F6C;
	sub_822DB6C0(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822db6f8
	ctx.lr = 0x822E6F78;
	sub_822DB6F8(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x822e6e34
	goto loc_822E6E34;
loc_822E6F80:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x822e0da8
	ctx.lr = 0x822E6F90;
	sub_822E0DA8(ctx, base);
	// lwzx r11,r27,r28
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// std r3,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r3.u64);
loc_822E6F9C:
	// lwzx r11,r27,r28
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + r28.u32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r24,10
	r24.s64 = 10;
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// andi. r10,r10,72
	ctx.r10.u64 = ctx.r10.u64 & 72;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822e706c
	if (ctx.cr0.eq) goto loc_822E706C;
	// lbz r11,5(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x822e706c
	if (ctx.cr6.eq) goto loc_822E706C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822e706c
	if (ctx.cr6.eq) goto loc_822E706C;
	// stb r11,0(r23)
	REX_STORE_U8(r23.u32 + 0, ctx.r11.u8);
	// addi r4,r23,1
	ctx.r4.s64 = r23.s64 + 1;
	// lwzx r11,r27,r28
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// li r30,1
	r30.s64 = 1;
	// stb r24,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, r24.u8);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x822e706c
	if (ctx.cr6.eq) goto loc_822E706C;
	// lwzx r11,r27,r28
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// lbz r11,41(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x822e706c
	if (ctx.cr6.eq) goto loc_822E706C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822e706c
	if (ctx.cr6.eq) goto loc_822E706C;
	// stb r11,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwzx r11,r27,r28
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// li r30,2
	r30.s64 = 2;
	// stb r24,41(r11)
	REX_STORE_U8(ctx.r11.u32 + 41, r24.u8);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(r22.s32, 1, ctx.xer);
	// bne cr6,0x822e706c
	if (!ctx.cr6.eq) goto loc_822E706C;
	// lwzx r11,r27,r28
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// lbz r11,42(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 42);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x822e706c
	if (ctx.cr6.eq) goto loc_822E706C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822e706c
	if (ctx.cr6.eq) goto loc_822E706C;
	// stb r11,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwzx r11,r27,r28
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// li r30,3
	r30.s64 = 3;
	// stb r24,42(r11)
	REX_STORE_U8(ctx.r11.u32 + 42, r24.u8);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_822E706C:
	// lwzx r11,r27,r28
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + r28.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// bl 0x82209bf0
	ctx.lr = 0x822E7084;
	sub_82209BF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822e73d0
	if (ctx.cr0.eq) goto loc_822E73D0;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x822e73d0
	if (ctx.cr6.lt) goto loc_822E73D0;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bgt cr6,0x822e73d0
	if (ctx.cr6.gt) goto loc_822E73D0;
	// lwzx r11,r27,r28
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + r28.u32);
	// add r30,r10,r30
	r30.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// lbz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm. r9,r9,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822e738c
	if (ctx.cr0.eq) goto loc_822E738C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822e70d8
	if (ctx.cr6.eq) goto loc_822E70D8;
	// lbz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U8(r23.u32 + 0);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x822e70d8
	if (!ctx.cr6.eq) goto loc_822E70D8;
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// b 0x822e70e4
	goto loc_822E70E4;
loc_822E70D8:
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_822E70E4:
	// add r25,r23,r30
	r25.u64 = r23.u64 + r30.u64;
	// stb r10,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// mr r31,r23
	r31.u64 = r23.u64;
	// mr r30,r23
	r30.u64 = r23.u64;
	// cmplw cr6,r23,r25
	ctx.cr6.compare<uint32_t>(r23.u32, r25.u32, ctx.xer);
	// bge cr6,0x822e724c
	if (!ctx.cr6.lt) goto loc_822E724C;
	// li r26,13
	r26.s64 = 13;
loc_822E7100:
	// lbz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 0);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// beq cr6,0x822e7220
	if (ctx.cr6.eq) goto loc_822E7220;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x822e7124
	if (ctx.cr6.eq) goto loc_822E7124;
	// stb r10,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x822e7210
	goto loc_822E7210;
loc_822E7124:
	// addi r11,r25,-1
	ctx.r11.s64 = r25.s64 + -1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822e7158
	if (!ctx.cr6.lt) goto loc_822E7158;
	// lbz r9,1(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 1);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// bne cr6,0x822e714c
	if (!ctx.cr6.eq) goto loc_822E714C;
	// stb r24,0(r31)
	REX_STORE_U8(r31.u32 + 0, r24.u8);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// b 0x822e7210
	goto loc_822E7210;
loc_822E714C:
	// stb r10,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// b 0x822e7210
	goto loc_822E7210;
loc_822E7158:
	// lwzx r11,r27,r28
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + r28.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwzx r3,r29,r11
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// bl 0x82209bf0
	ctx.lr = 0x822E7178;
	sub_82209BF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822e718c
	if (!ctx.cr0.eq) goto loc_822E718C;
	// bl 0x822098c8
	ctx.lr = 0x822E7184;
	sub_822098C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822e720c
	if (!ctx.cr0.eq) goto loc_822E720C;
loc_822E718C:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e720c
	if (ctx.cr6.eq) goto loc_822E720C;
	// lwzx r11,r27,r28
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// andi. r11,r11,72
	ctx.r11.u64 = ctx.r11.u64 & 72;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e71dc
	if (ctx.cr0.eq) goto loc_822E71DC;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x822e71c4
	if (!ctx.cr6.eq) goto loc_822E71C4;
loc_822E71BC:
	// stb r24,0(r31)
	REX_STORE_U8(r31.u32 + 0, r24.u8);
	// b 0x822e7210
	goto loc_822E7210;
loc_822E71C4:
	// stb r26,0(r31)
	REX_STORE_U8(r31.u32 + 0, r26.u8);
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lwzx r11,r27,r28
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// stb r10,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
	// b 0x822e7210
	goto loc_822E7210;
loc_822E71DC:
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(r31.u32, r23.u32, ctx.xer);
	// bne cr6,0x822e71f0
	if (!ctx.cr6.eq) goto loc_822E71F0;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x822e71bc
	if (ctx.cr6.eq) goto loc_822E71BC;
loc_822E71F0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x822e0da8
	ctx.lr = 0x822E7200;
	sub_822E0DA8(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x822e7214
	if (ctx.cr6.eq) goto loc_822E7214;
loc_822E720C:
	// stb r26,0(r31)
	REX_STORE_U8(r31.u32 + 0, r26.u8);
loc_822E7210:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_822E7214:
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(r30.u32, r25.u32, ctx.xer);
	// blt cr6,0x822e7100
	if (ctx.cr6.lt) goto loc_822E7100;
	// b 0x822e724c
	goto loc_822E724C;
loc_822E7220:
	// lwzx r11,r27,r28
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// lbz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm. r9,r9,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822e7244
	if (!ctx.cr0.eq) goto loc_822E7244;
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stb r10,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// b 0x822e724c
	goto loc_822E724C;
loc_822E7244:
	// stb r10,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_822E724C:
	// subf r30,r23,r31
	r30.u64 = r31.u64 - r23.u64;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(r22.s32, 1, ctx.xer);
	// bne cr6,0x822e738c
	if (!ctx.cr6.eq) goto loc_822E738C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x822e738c
	if (ctx.cr6.eq) goto loc_822E738C;
	// lbzu r7,-1(r31)
	ea = -1 + r31.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	r31.u32 = ea;
	// rlwinm. r11,r7,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// bne 0x822e7278
	if (!ctx.cr0.eq) goto loc_822E7278;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x822e7354
	goto loc_822E7354;
loc_822E7278:
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,1584
	ctx.r9.s64 = ctx.r11.s64 + 1584;
	// lbzx r11,r8,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// b 0x822e72ac
	goto loc_822E72AC;
loc_822E728C:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bgt cr6,0x822e72b4
	if (ctx.cr6.gt) goto loc_822E72B4;
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(r31.u32, r23.u32, ctx.xer);
	// blt cr6,0x822e72b4
	if (ctx.cr6.lt) goto loc_822E72B4;
	// lbzu r7,-1(r31)
	ea = -1 + r31.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	r31.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lbzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
loc_822E72AC:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e728c
	if (ctx.cr0.eq) goto loc_822E728C;
loc_822E72B4:
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e72cc
	if (!ctx.cr0.eq) goto loc_822E72CC;
	// bl 0x822db6c0
	ctx.lr = 0x822E72C0;
	sub_822DB6C0(ctx, base);
	// li r11,42
	ctx.r11.s64 = 42;
loc_822E72C4:
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x822e7388
	goto loc_822E7388;
loc_822E72CC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822e72e0
	if (!ctx.cr6.eq) goto loc_822E72E0;
	// add r31,r10,r31
	r31.u64 = ctx.r10.u64 + r31.u64;
	// b 0x822e7354
	goto loc_822E7354;
loc_822E72E0:
	// lwzx r11,r27,r28
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// lbz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// andi. r9,r9,72
	ctx.r9.u64 = ctx.r9.u64 & 72;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822e7340
	if (ctx.cr0.eq) goto loc_822E7340;
	// stb r7,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x822e731c
	if (ctx.cr6.lt) goto loc_822E731C;
	// lwzx r9,r27,r28
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + r28.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r29,r9
	ctx.r9.u64 = r29.u64 + ctx.r9.u64;
	// stb r8,41(r9)
	REX_STORE_U8(ctx.r9.u32 + 41, ctx.r8.u8);
loc_822E731C:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x822e7338
	if (!ctx.cr6.eq) goto loc_822E7338;
	// lwzx r9,r27,r28
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + r28.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r29,r9
	ctx.r9.u64 = r29.u64 + ctx.r9.u64;
	// stb r8,42(r9)
	REX_STORE_U8(ctx.r9.u32 + 42, ctx.r8.u8);
loc_822E7338:
	// subf r31,r10,r11
	r31.u64 = ctx.r11.u64 - ctx.r10.u64;
	// b 0x822e7354
	goto loc_822E7354;
loc_822E7340:
	// neg r11,r10
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// li r5,1
	ctx.r5.s64 = 1;
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x822e0da8
	ctx.lr = 0x822E7354;
	sub_822E0DA8(ctx, base);
loc_822E7354:
	// subf r31,r23,r31
	r31.u64 = r31.u64 - r23.u64;
	// lis r3,0
	ctx.r3.s64 = 0;
	// rlwinm r8,r20,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x82208750
	ctx.lr = 0x822E7378;
	sub_82208750(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x822e73b0
	if (!ctx.cr0.eq) goto loc_822E73B0;
	// bl 0x822098c8
	ctx.lr = 0x822E7384;
	sub_822098C8(ctx, base);
loc_822E7384:
	// bl 0x822db730
	ctx.lr = 0x822E7388;
	sub_822DB730(ctx, base);
loc_822E7388:
	// li r18,-1
	r18.s64 = -1;
loc_822E738C:
	// cmplw cr6,r23,r19
	ctx.cr6.compare<uint32_t>(r23.u32, r19.u32, ctx.xer);
	// beq cr6,0x822e739c
	if (ctx.cr6.eq) goto loc_822E739C;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x822d98f0
	ctx.lr = 0x822E739C;
	sub_822D98F0(ctx, base);
loc_822E739C:
	// cmpwi cr6,r18,-2
	ctx.cr6.compare<int32_t>(r18.s32, -2, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x822e7408
	if (ctx.cr6.eq) goto loc_822E7408;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// b 0x822e7408
	goto loc_822E7408;
loc_822E73B0:
	// lwzx r11,r27,r28
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + r28.u32);
	// subf r10,r30,r31
	ctx.r10.u64 = r31.u64 - r30.u64;
	// rlwinm r30,r30,1,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// b 0x822e738c
	goto loc_822E738C;
loc_822E73D0:
	// bl 0x822098c8
	ctx.lr = 0x822E73D4;
	sub_822098C8(ctx, base);
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// bne cr6,0x822e73f4
	if (!ctx.cr6.eq) goto loc_822E73F4;
	// bl 0x822db6c0
	ctx.lr = 0x822E73E0;
	sub_822DB6C0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822db6f8
	ctx.lr = 0x822E73EC;
	sub_822DB6F8(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x822e72c4
	goto loc_822E72C4;
loc_822E73F4:
	// cmplwi cr6,r3,109
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 109, ctx.xer);
	// bne cr6,0x822e7384
	if (!ctx.cr6.eq) goto loc_822E7384;
	// mr r18,r26
	r18.u64 = r26.u64;
	// b 0x822e738c
	goto loc_822E738C;
loc_822E7404:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822E7408:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_82306738) {
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
	ctx.lr = 0x82306740;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823067fc
	if (ctx.cr6.eq) goto loc_823067FC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823067fc
	if (ctx.cr6.eq) goto loc_823067FC;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823067fc
	if (ctx.cr6.eq) goto loc_823067FC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823067fc
	if (ctx.cr6.eq) goto loc_823067FC;
	// ld r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// beq cr6,0x823067f4
	if (ctx.cr6.eq) goto loc_823067F4;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// subf r28,r4,r11
	r28.u64 = ctx.r11.u64 - ctx.r4.u64;
loc_8230678C:
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(r30.u32, 16, ctx.xer);
	// mr r31,r30
	r31.u64 = r30.u64;
	// blt cr6,0x8230679c
	if (ctx.cr6.lt) goto loc_8230679C;
	// li r31,16
	r31.s64 = 16;
loc_8230679C:
	// li r6,1
	ctx.r6.s64 = 1;
	// std r27,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r27.u64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82325fd8
	ctx.lr = 0x823067B4;
	sub_82325FD8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823067e0
	if (ctx.cr6.eq) goto loc_823067E0;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_823067C4:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r9,r28,r11
	ctx.r9.u64 = REX_LOAD_U8(r28.u32 + ctx.r11.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823067c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823067C4;
loc_823067E0:
	// subf. r30,r31,r30
	r30.u64 = r30.u64 - r31.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// addi r28,r28,-16
	r28.s64 = r28.s64 + -16;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// bne 0x8230678c
	if (!ctx.cr0.eq) goto loc_8230678C;
loc_823067F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82306804
	goto loc_82306804;
loc_823067FC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82306804:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8230B010) {
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
	ctx.lr = 0x8230B018;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lwz r24,28(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r22,r4,-24
	r22.s64 = ctx.r4.s64 + -24;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r22,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r22.u32);
	// sth r30,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r30.u16);
	// bctrl 
	ctx.lr = 0x8230B058;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230b410
	if (ctx.cr6.lt) goto loc_8230B410;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// lhz r10,54(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 54);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8230b08c
	if (!ctx.cr6.gt) goto loc_8230B08C;
loc_8230B078:
	// lis r31,-32688
	r31.s64 = -2142240768;
	// ori r31,r31,12
	r31.u64 = r31.u64 | 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eb8
	return;
loc_8230B08C:
	// cmplwi cr6,r22,2
	ctx.cr6.compare<uint32_t>(r22.u32, 2, ctx.xer);
	// blt cr6,0x8230b078
	if (ctx.cr6.lt) goto loc_8230B078;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82307770
	ctx.lr = 0x8230B0AC;
	sub_82307770(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230b410
	if (ctx.cr6.lt) goto loc_8230B410;
	// lhz r28,80(r1)
	r28.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// li r27,2
	r27.s64 = 2;
	// mr r21,r28
	r21.u64 = r28.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8230b118
	if (!ctx.cr6.eq) goto loc_8230B118;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r10,r11,r22
	ctx.r10.u64 = r22.u64 - ctx.r11.u64;
	// addic. r30,r10,-2
	ctx.xer.ca = ctx.r10.u32 > 1;
	r30.s64 = ctx.r10.s64 + -2;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8230b410
	if (ctx.cr0.eq) goto loc_8230B410;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230B0F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230b410
	if (ctx.cr6.lt) goto loc_8230B410;
	// ld r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U64(r24.u32 + 8);
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r24)
	REX_STORE_U64(r24.u32 + 8, ctx.r11.u64);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eb8
	return;
loc_8230B118:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r3,224(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 224);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f9490
	ctx.lr = 0x8230B12C;
	sub_822F9490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230b410
	if (ctx.cr6.lt) goto loc_8230B410;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r30.u32);
	// add r9,r21,r11
	ctx.r9.u64 = r21.u64 + ctx.r11.u64;
	// rlwinm r29,r9,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r8,4(r24)
	ctx.r8.u64 = REX_LOAD_U32(r24.u32 + 4);
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r7,96(r8)
	REX_STORE_U32(ctx.r8.u32 + 96, ctx.r7.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// sth r28,0(r6)
	REX_STORE_U16(ctx.r6.u32 + 0, r28.u16);
	// lwz r3,224(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 224);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// bl 0x822f9490
	ctx.lr = 0x8230B180;
	sub_822F9490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230b410
	if (ctx.cr6.lt) goto loc_8230B410;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822d5870
	ctx.lr = 0x8230B1A0;
	sub_822D5870(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r20,r30
	r20.u64 = r30.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// lwz r26,4(r10)
	r26.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// beq cr6,0x8230b3bc
	if (ctx.cr6.eq) goto loc_8230B3BC;
loc_8230B1B4:
	// addi r27,r27,12
	r27.s64 = r27.s64 + 12;
	// cmplw cr6,r27,r22
	ctx.cr6.compare<uint32_t>(r27.u32, r22.u32, ctx.xer);
	// bgt cr6,0x8230b078
	if (ctx.cr6.gt) goto loc_8230B078;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82307770
	ctx.lr = 0x8230B1D8;
	sub_82307770(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230b410
	if (ctx.cr6.lt) goto loc_8230B410;
	// addi r30,r26,6
	r30.s64 = r26.s64 + 6;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r30,-4
	ctx.r4.s64 = r30.s64 + -4;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82307770
	ctx.lr = 0x8230B200;
	sub_82307770(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230b410
	if (ctx.cr6.lt) goto loc_8230B410;
	// addi r28,r26,4
	r28.s64 = r26.s64 + 4;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82307770
	ctx.lr = 0x8230B228;
	sub_82307770(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230b410
	if (ctx.cr6.lt) goto loc_8230B410;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82307770
	ctx.lr = 0x8230B24C;
	sub_82307770(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230b410
	if (ctx.cr6.lt) goto loc_8230B410;
	// addi r25,r26,8
	r25.s64 = r26.s64 + 8;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823078f0
	ctx.lr = 0x8230B274;
	sub_823078F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230b410
	if (ctx.cr6.lt) goto loc_8230B410;
	// lhz r5,0(r28)
	ctx.r5.u64 = REX_LOAD_U16(r28.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8230b330
	if (ctx.cr6.eq) goto loc_8230B330;
	// addi r30,r26,12
	r30.s64 = r26.s64 + 12;
	// lwz r3,224(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x822f9490
	ctx.lr = 0x8230B2A0;
	sub_822F9490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230b410
	if (ctx.cr6.lt) goto loc_8230B410;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r5,0(r28)
	ctx.r5.u64 = REX_LOAD_U16(r28.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x822d5870
	ctx.lr = 0x8230B2BC;
	sub_822D5870(ctx, base);
	// lhz r5,0(r28)
	ctx.r5.u64 = REX_LOAD_U16(r28.u32 + 0);
	// add r29,r27,r5
	r29.u64 = r27.u64 + ctx.r5.u64;
	// cmplw cr6,r29,r22
	ctx.cr6.compare<uint32_t>(r29.u32, r22.u32, ctx.xer);
	// bgt cr6,0x8230b078
	if (ctx.cr6.gt) goto loc_8230B078;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82307e08
	ctx.lr = 0x8230B2E4;
	sub_82307E08(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230b410
	if (ctx.cr6.lt) goto loc_8230B410;
	// lwz r11,76(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 76);
	// mr r27,r29
	r27.u64 = r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8230b330
	if (ctx.cr6.eq) goto loc_8230B330;
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8230b330
	if (!ctx.cr6.gt) goto loc_8230B330;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_8230B31C:
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stbu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8230b31c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230B31C;
loc_8230B330:
	// lwz r5,0(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8230b3a4
	if (ctx.cr6.eq) goto loc_8230B3A4;
	// addi r30,r26,16
	r30.s64 = r26.s64 + 16;
	// lwz r3,224(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x822f9490
	ctx.lr = 0x8230B350;
	sub_822F9490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230b410
	if (ctx.cr6.lt) goto loc_8230B410;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x822d5870
	ctx.lr = 0x8230B36C;
	sub_822D5870(ctx, base);
	// lwz r5,0(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 0);
	// add r29,r27,r5
	r29.u64 = r27.u64 + ctx.r5.u64;
	// cmplw cr6,r29,r22
	ctx.cr6.compare<uint32_t>(r29.u32, r22.u32, ctx.xer);
	// bgt cr6,0x8230b078
	if (ctx.cr6.gt) goto loc_8230B078;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82307e08
	ctx.lr = 0x8230B394;
	sub_82307E08(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230b410
	if (ctx.cr6.lt) goto loc_8230B410;
	// mr r27,r29
	r27.u64 = r29.u64;
loc_8230B3A4:
	// clrlwi r11,r20,16
	ctx.r11.u64 = r20.u32 & 0xFFFF;
	// addi r26,r26,20
	r26.s64 = r26.s64 + 20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r20,r11,16
	r20.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r20,r21
	ctx.cr6.compare<uint32_t>(r20.u32, r21.u32, ctx.xer);
	// blt cr6,0x8230b1b4
	if (ctx.cr6.lt) goto loc_8230B1B4;
loc_8230B3BC:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// lhz r10,54(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 54);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,54(r11)
	REX_STORE_U16(ctx.r11.u32 + 54, ctx.r9.u16);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r6,r7,r22
	ctx.r6.u64 = r22.u64 - ctx.r7.u64;
	// subf. r30,r27,r6
	r30.u64 = ctx.r6.u64 - r27.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8230b410
	if (ctx.cr0.eq) goto loc_8230B410;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230B3F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230b410
	if (ctx.cr6.lt) goto loc_8230B410;
	// ld r10,8(r24)
	ctx.r10.u64 = REX_LOAD_U64(r24.u32 + 8);
	// clrldi r11,r30,32
	ctx.r11.u64 = r30.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,8(r24)
	REX_STORE_U64(r24.u32 + 8, ctx.r11.u64);
loc_8230B410:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_823165D8) {
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
	ctx.lr = 0x823165E0;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,356(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r29,348(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lhz r28,342(r1)
	r28.u64 = REX_LOAD_U16(ctx.r1.u32 + 342);
	// lhz r27,334(r1)
	r27.u64 = REX_LOAD_U16(ctx.r1.u32 + 334);
	// lwz r26,324(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r25,316(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r24,308(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r30,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// stw r29,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r29.u32);
	// sth r28,118(r1)
	REX_STORE_U16(ctx.r1.u32 + 118, r28.u16);
	// sth r27,110(r1)
	REX_STORE_U16(ctx.r1.u32 + 110, r27.u16);
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// bl 0x82314770
	ctx.lr = 0x8231662C;
	sub_82314770(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231667c
	if (ctx.cr6.lt) goto loc_8231667C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82315f98
	ctx.lr = 0x8231663C;
	sub_82315F98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231667c
	if (ctx.cr6.lt) goto loc_8231667C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823164e8
	ctx.lr = 0x8231664C;
	sub_823164E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231667c
	if (ctx.cr6.lt) goto loc_8231667C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82314b00
	ctx.lr = 0x8231665C;
	sub_82314B00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231667c
	if (ctx.cr6.lt) goto loc_8231667C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823150f0
	ctx.lr = 0x8231666C;
	sub_823150F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231667c
	if (ctx.cr6.lt) goto loc_8231667C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82461c60
	ctx.lr = 0x8231667C;
	sub_82461C60(ctx, base);
loc_8231667C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8231C018) {
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
	ctx.lr = 0x8231C020;
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
	// lwz r20,256(r31)
	r20.u64 = REX_LOAD_U32(r31.u32 + 256);
	// beq cr6,0x8231d934
	if (ctx.cr6.eq) goto loc_8231D934;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// li r23,1
	r23.s64 = 1;
	// addi r19,r11,24680
	r19.s64 = ctx.r11.s64 + 24680;
	// li r14,8
	r14.s64 = 8;
	// addi r18,r10,-15728
	r18.s64 = ctx.r10.s64 + -15728;
	// ori r15,r9,65535
	r15.u64 = ctx.r9.u64 | 65535;
	// li r17,36
	r17.s64 = 36;
	// li r21,45
	r21.s64 = 45;
	// li r16,2
	r16.s64 = 2;
loc_8231C074:
	// lwz r11,40(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 40);
	// li r29,12
	r29.s64 = 12;
	// li r28,14
	r28.s64 = 14;
	// li r27,4
	r27.s64 = 4;
	// cmplwi cr6,r11,52
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 52, ctx.xer);
	// bgt cr6,0x8231d834
	if (ctx.cr6.gt) goto loc_8231D834;
	// lis r12,-32206
	ctx.r12.s64 = -2110652416;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-16220
	ctx.r12.s64 = ctx.r12.s64 + -16220;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8231C178;
	case 1:
		goto loc_8231D834;
	case 2:
		goto loc_8231D834;
	case 3:
		goto loc_8231CC4C;
	case 4:
		goto loc_8231D230;
	case 5:
		goto loc_8231D2DC;
	case 6:
		goto loc_8231D304;
	case 7:
		goto loc_8231D304;
	case 8:
		goto loc_8231D328;
	case 9:
		goto loc_8231D4F8;
	case 10:
		goto loc_8231D834;
	case 11:
		goto loc_8231C50C;
	case 12:
		goto loc_8231C654;
	case 13:
		goto loc_8231C5DC;
	case 14:
		goto loc_8231C6B0;
	case 15:
		goto loc_8231C734;
	case 16:
		goto loc_8231D834;
	case 17:
		goto loc_8231D834;
	case 18:
		goto loc_8231C9E0;
	case 19:
		goto loc_8231CCBC;
	case 20:
		goto loc_8231D834;
	case 21:
		goto loc_8231D834;
	case 22:
		goto loc_8231D834;
	case 23:
		goto loc_8231D834;
	case 24:
		goto loc_8231D834;
	case 25:
		goto loc_8231D834;
	case 26:
		goto loc_8231D834;
	case 27:
		goto loc_8231D834;
	case 28:
		goto loc_8231D834;
	case 29:
		goto loc_8231CD2C;
	case 30:
		goto loc_8231D114;
	case 31:
		goto loc_8231D15C;
	case 32:
		goto loc_8231C750;
	case 33:
		goto loc_8231CDA4;
	case 34:
		goto loc_8231D834;
	case 35:
		goto loc_8231D834;
	case 36:
		goto loc_8231C900;
	case 37:
		goto loc_8231CA9C;
	case 38:
		goto loc_8231CA64;
	case 39:
		goto loc_8231C8D8;
	case 40:
		goto loc_8231C838;
	case 41:
		goto loc_8231C880;
	case 42:
		goto loc_8231C8AC;
	case 43:
		goto loc_8231D834;
	case 44:
		goto loc_8231CB38;
	case 45:
		goto loc_8231CBF0;
	case 46:
		goto loc_8231CB94;
	case 47:
		goto loc_8231D834;
	case 48:
		goto loc_8231C92C;
	case 49:
		goto loc_8231D834;
	case 50:
		goto loc_8231D834;
	case 51:
		goto loc_8231D834;
	case 52:
		goto loc_8231CFD0;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8231C178:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x8231c280
	if (ctx.cr6.gt) goto loc_8231C280;
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231c224
	if (ctx.cr6.eq) goto loc_8231C224;
	// lwz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 228);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8231c1b4
	if (!ctx.cr6.gt) goto loc_8231C1B4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_8231C1A4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x8231c1a4
	if (ctx.cr6.gt) goto loc_8231C1A4;
loc_8231C1B4:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8231c1d0
	if (!ctx.cr6.gt) goto loc_8231C1D0;
loc_8231C1C0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x8231c1c0
	if (ctx.cr6.gt) goto loc_8231C1C0;
loc_8231C1D0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// addi r3,r26,224
	ctx.r3.s64 = r26.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231C1E0;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r8,236(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 236);
	// slw r7,r23,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r9.u8 & 0x3F));
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// divw r20,r11,r7
	r20.u64 = uint32_t((ctx.r7.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r11.s32 / ctx.r7.s32 : 0);
	// andc r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ~ctx.r6.u64;
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmpw cr6,r20,r8
	ctx.cr6.compare<int32_t>(r20.s32, ctx.r8.s32, ctx.xer);
	// twlgei r5,-1
	if (ctx.r5.s32 == -1 || ctx.r5.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// blt cr6,0x8231d84c
	if (ctx.cr6.lt) goto loc_8231D84C;
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(r20.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8231d84c
	if (ctx.cr6.gt) goto loc_8231D84C;
loc_8231C224:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,580(r31)
	REX_STORE_U16(r31.u32 + 580, ctx.r11.u16);
	// beq cr6,0x8231c264
	if (ctx.cr6.eq) goto loc_8231C264;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// rlwinm r9,r24,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
loc_8231C240:
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
	// blt cr6,0x8231c240
	if (ctx.cr6.lt) goto loc_8231C240;
loc_8231C264:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82302810
	ctx.lr = 0x8231C270;
	sub_82302810(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// b 0x8231c430
	goto loc_8231C430;
loc_8231C280:
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
	// ble cr6,0x8231c2fc
	if (!ctx.cr6.gt) goto loc_8231C2FC;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// addi r11,r3,424
	ctx.r11.s64 = ctx.r3.s64 + 424;
loc_8231C2B0:
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
	// ble cr6,0x8231c2e4
	if (!ctx.cr6.gt) goto loc_8231C2E4;
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
loc_8231C2E4:
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
	// blt cr6,0x8231c2b0
	if (ctx.cr6.lt) goto loc_8231C2B0;
loc_8231C2FC:
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// sth r24,580(r31)
	REX_STORE_U16(r31.u32 + 580, r24.u16);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8231c400
	if (!ctx.cr6.gt) goto loc_8231C400;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// addi r11,r3,114
	ctx.r11.s64 = ctx.r3.s64 + 114;
loc_8231C318:
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
	// bne cr6,0x8231c3e4
	if (!ctx.cr6.eq) goto loc_8231C3E4;
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
	// bne cr6,0x8231c3e4
	if (!ctx.cr6.eq) goto loc_8231C3E4;
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
	// add r10,r8,r3
	ctx.r10.u64 = ctx.r8.u64 + ctx.r3.u64;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// sth r10,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r10.u16);
	// subf r7,r8,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r8.u64;
loc_8231C3E4:
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
	// blt cr6,0x8231c318
	if (ctx.cr6.lt) goto loc_8231C318;
loc_8231C400:
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8231d92c
	if (ctx.cr6.gt) goto loc_8231D92C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8231d92c
	if (!ctx.cr6.gt) goto loc_8231D92C;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt cr6,0x8231d92c
	if (ctx.cr6.lt) goto loc_8231D92C;
	// cntlzw r11,r7
	ctx.r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r10,216(r26)
	REX_STORE_U32(r26.u32 + 216, ctx.r10.u32);
loc_8231C430:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823156a8
	ctx.lr = 0x8231C438;
	sub_823156A8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82303b78
	ctx.lr = 0x8231C44C;
	sub_82303B78(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x8231c46c
	if (ctx.cr6.gt) goto loc_8231C46C;
	// li r11,52
	ctx.r11.s64 = 52;
	// b 0x8231d830
	goto loc_8231D830;
loc_8231C46C:
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8231c504
	if (!ctx.cr6.gt) goto loc_8231C504;
	// mr r29,r24
	r29.u64 = r24.u64;
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
loc_8231C484:
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
	// bne cr6,0x8231c4d4
	if (!ctx.cr6.eq) goto loc_8231C4D4;
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
	ctx.lr = 0x8231C4C0;
	sub_822D5870(ctx, base);
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x822d5870
	ctx.lr = 0x8231C4D0;
	sub_822D5870(ctx, base);
	// stw r24,64(r30)
	REX_STORE_U32(r30.u32 + 64, r24.u32);
loc_8231C4D4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82322750
	ctx.lr = 0x8231C4E4;
	sub_82322750(ctx, base);
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
	// blt cr6,0x8231c484
	if (ctx.cr6.lt) goto loc_8231C484;
loc_8231C504:
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x8231d830
	goto loc_8231D830;
loc_8231C50C:
	// addi r30,r26,224
	r30.s64 = r26.s64 + 224;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8246e538
	ctx.lr = 0x8231C51C;
	sub_8246E538(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// stw r24,60(r26)
	REX_STORE_U32(r26.u32 + 60, r24.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82319780
	ctx.lr = 0x8231C53C;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231c55c
	if (!ctx.cr6.eq) goto loc_8231C55C;
	// stw r28,40(r26)
	REX_STORE_U32(r26.u32 + 40, r28.u32);
	// b 0x8231d834
	goto loc_8231D834;
loc_8231C55C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82319780
	ctx.lr = 0x8231C56C;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231c590
	if (ctx.cr6.eq) goto loc_8231C590;
	// stw r11,60(r26)
	REX_STORE_U32(r26.u32 + 60, ctx.r11.u32);
	// stw r29,40(r26)
	REX_STORE_U32(r26.u32 + 40, r29.u32);
	// b 0x8231d834
	goto loc_8231D834;
loc_8231C590:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82319780
	ctx.lr = 0x8231C5A0;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82319780
	ctx.lr = 0x8231C5BC;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,40(r26)
	REX_STORE_U32(r26.u32 + 40, r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,60(r26)
	REX_STORE_U32(r26.u32 + 60, ctx.r10.u32);
	// b 0x8231d834
	goto loc_8231D834;
loc_8231C5DC:
	// lwz r11,60(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8231c64c
	if (!ctx.cr6.gt) goto loc_8231C64C;
	// addi r29,r26,224
	r29.s64 = r26.s64 + 224;
loc_8231C5EC:
	// lwz r30,60(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 60);
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// ble cr6,0x8231c5fc
	if (!ctx.cr6.gt) goto loc_8231C5FC;
	// mr r30,r14
	r30.u64 = r14.u64;
loc_8231C5FC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82319780
	ctx.lr = 0x8231C60C;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// bge cr6,0x8231c634
	if (!ctx.cr6.lt) goto loc_8231C634;
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
loc_8231C634:
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
	// bgt cr6,0x8231c5ec
	if (ctx.cr6.gt) goto loc_8231C5EC;
loc_8231C64C:
	// stw r28,40(r26)
	REX_STORE_U32(r26.u32 + 40, r28.u32);
	// b 0x8231d834
	goto loc_8231D834;
loc_8231C654:
	// lwz r11,60(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8231c6a8
	if (!ctx.cr6.gt) goto loc_8231C6A8;
	// addi r29,r26,224
	r29.s64 = r26.s64 + 224;
loc_8231C664:
	// lwz r30,60(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 60);
	// cmpwi cr6,r30,24
	ctx.cr6.compare<int32_t>(r30.s32, 24, ctx.xer);
	// ble cr6,0x8231c674
	if (!ctx.cr6.gt) goto loc_8231C674;
	// li r30,24
	r30.s64 = 24;
loc_8231C674:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82319780
	ctx.lr = 0x8231C684;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
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
	// bgt cr6,0x8231c664
	if (ctx.cr6.gt) goto loc_8231C664;
loc_8231C6A8:
	// stw r28,40(r26)
	REX_STORE_U32(r26.u32 + 40, r28.u32);
	// b 0x8231d834
	goto loc_8231D834;
loc_8231C6B0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r26,224
	ctx.r3.s64 = r26.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231C6C0;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
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
	// ble cr6,0x8231c708
	if (!ctx.cr6.gt) goto loc_8231C708;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
loc_8231C6F4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8231c6f4
	if (ctx.cr6.lt) goto loc_8231C6F4;
loc_8231C708:
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8231c728
	if (!ctx.cr6.eq) goto loc_8231C728;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r24,88(r26)
	REX_STORE_U32(r26.u32 + 88, r24.u32);
	// stw r11,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r11.u32);
	// stw r23,192(r31)
	REX_STORE_U32(r31.u32 + 192, r23.u32);
	// b 0x8231d834
	goto loc_8231D834;
loc_8231C728:
	// li r11,40
	ctx.r11.s64 = 40;
	// stw r23,192(r31)
	REX_STORE_U32(r31.u32 + 192, r23.u32);
	// b 0x8231d830
	goto loc_8231D830;
loc_8231C734:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82323a68
	ctx.lr = 0x8231C73C;
	sub_82323A68(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r11.u32);
loc_8231C750:
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
	ctx.lr = 0x8231C768;
	sub_8246E538(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8231c810
	if (!ctx.cr6.gt) goto loc_8231C810;
	// mr r29,r24
	r29.u64 = r24.u64;
	// rlwinm r10,r24,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
loc_8231C78C:
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
	// bl 0x82319780
	ctx.lr = 0x8231C7B4;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
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
	// bl 0x82305250
	ctx.lr = 0x8231C7E4;
	sub_82305250(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
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
	// blt cr6,0x8231c78c
	if (ctx.cr6.lt) goto loc_8231C78C;
loc_8231C810:
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
	// stw r15,136(r26)
	REX_STORE_U32(r26.u32 + 136, r15.u32);
	// bne cr6,0x8231d85c
	if (!ctx.cr6.eq) goto loc_8231D85C;
	// li r11,30
	ctx.r11.s64 = 30;
	// b 0x8231d830
	goto loc_8231D830;
loc_8231C838:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r26,224
	ctx.r3.s64 = r26.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231C848;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r11.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8231c878
	if (!ctx.cr6.eq) goto loc_8231C878;
	// li r11,41
	ctx.r11.s64 = 41;
	// stw r11,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r11.u32);
	// stw r23,124(r31)
	REX_STORE_U32(r31.u32 + 124, r23.u32);
	// b 0x8231d834
	goto loc_8231D834;
loc_8231C878:
	// stw r17,40(r26)
	REX_STORE_U32(r26.u32 + 40, r17.u32);
	// b 0x8231d834
	goto loc_8231D834;
loc_8231C880:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r26,224
	ctx.r3.s64 = r26.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231C890;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,42
	ctx.r10.s64 = 42;
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
	// stw r10,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r10.u32);
loc_8231C8AC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r26,224
	ctx.r3.s64 = r26.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231C8BC;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,39
	ctx.r10.s64 = 39;
	// stw r11,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r11.u32);
	// stw r10,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r10.u32);
loc_8231C8D8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r26,224
	ctx.r3.s64 = r26.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231C8E8;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r11.u32);
	// stw r17,40(r26)
	REX_STORE_U32(r26.u32 + 40, r17.u32);
loc_8231C900:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r26,224
	ctx.r3.s64 = r26.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231C910;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,48
	ctx.r10.s64 = 48;
	// stw r11,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r11.u32);
	// stw r10,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r10.u32);
loc_8231C92C:
	// addi r28,r26,224
	r28.s64 = r26.s64 + 224;
	// lhz r4,34(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 34);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8246e538
	ctx.lr = 0x8231C93C;
	sub_8246E538(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8231c9d4
	if (!ctx.cr6.gt) goto loc_8231C9D4;
	// mr r29,r24
	r29.u64 = r24.u64;
	// rlwinm r10,r24,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
loc_8231C960:
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
	// bl 0x82319780
	ctx.lr = 0x8231C988;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
	// bl 0x82305250
	ctx.lr = 0x8231C9A8;
	sub_82305250(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
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
	// blt cr6,0x8231c960
	if (ctx.cr6.lt) goto loc_8231C960;
loc_8231C9D4:
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r24,40(r31)
	REX_STORE_U32(r31.u32 + 40, r24.u32);
	// stw r11,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r11.u32);
loc_8231C9E0:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231ca5c
	if (!ctx.cr6.eq) goto loc_8231CA5C;
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231ca5c
	if (!ctx.cr6.eq) goto loc_8231CA5C;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231ca5c
	if (ctx.cr6.eq) goto loc_8231CA5C;
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231ca5c
	if (ctx.cr6.eq) goto loc_8231CA5C;
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231ca5c
	if (ctx.cr6.eq) goto loc_8231CA5C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r26,224
	ctx.r3.s64 = r26.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231CA2C;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8231d92c
	if (ctx.cr6.eq) goto loc_8231D92C;
	// lhz r10,580(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 580);
	// lhz r9,34(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 34);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r11,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r11.u32);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8231d92c
	if (!ctx.cr6.eq) goto loc_8231D92C;
loc_8231CA5C:
	// li r11,38
	ctx.r11.s64 = 38;
	// stw r11,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r11.u32);
loc_8231CA64:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231ca94
	if (!ctx.cr6.eq) goto loc_8231CA94;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r26,224
	ctx.r3.s64 = r26.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231CA80;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r11.u32);
loc_8231CA94:
	// li r11,37
	ctx.r11.s64 = 37;
	// stw r11,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r11.u32);
loc_8231CA9C:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231cae0
	if (!ctx.cr6.eq) goto loc_8231CAE0;
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231cb30
	if (!ctx.cr6.eq) goto loc_8231CB30;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r26,224
	ctx.r3.s64 = r26.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231CAC4;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,168(r31)
	REX_STORE_U16(r31.u32 + 168, ctx.r10.u16);
	// b 0x8231cb30
	goto loc_8231CB30;
loc_8231CAE0:
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231cb30
	if (!ctx.cr6.eq) goto loc_8231CB30;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231cb30
	if (ctx.cr6.eq) goto loc_8231CB30;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r26,224
	ctx.r3.s64 = r26.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231CB08;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x8231d92c
	if (!ctx.cr6.lt) goto loc_8231D92C;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8231d92c
	if (ctx.cr6.lt) goto loc_8231D92C;
	// stw r11,632(r31)
	REX_STORE_U32(r31.u32 + 632, ctx.r11.u32);
loc_8231CB30:
	// li r11,44
	ctx.r11.s64 = 44;
	// stw r11,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r11.u32);
loc_8231CB38:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231cb8c
	if (!ctx.cr6.eq) goto loc_8231CB8C;
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231cb8c
	if (!ctx.cr6.eq) goto loc_8231CB8C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r26,224
	ctx.r3.s64 = r26.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231CB60;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// bgt cr6,0x8231d92c
	if (ctx.cr6.gt) goto loc_8231D92C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8231d92c
	if (ctx.cr6.lt) goto loc_8231D92C;
	// sth r11,170(r31)
	REX_STORE_U16(r31.u32 + 170, ctx.r11.u16);
loc_8231CB8C:
	// li r11,46
	ctx.r11.s64 = 46;
	// stw r11,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r11.u32);
loc_8231CB94:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231cbec
	if (!ctx.cr6.eq) goto loc_8231CBEC;
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231cbec
	if (!ctx.cr6.eq) goto loc_8231CBEC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r26,224
	ctx.r3.s64 = r26.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231CBBC;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x8231d92c
	if (ctx.cr6.lt) goto loc_8231D92C;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x8231d92c
	if (ctx.cr6.gt) goto loc_8231D92C;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// sth r11,172(r31)
	REX_STORE_U16(r31.u32 + 172, ctx.r11.u16);
loc_8231CBEC:
	// stw r21,40(r26)
	REX_STORE_U32(r26.u32 + 40, r21.u32);
loc_8231CBF0:
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231cc30
	if (ctx.cr6.eq) goto loc_8231CC30;
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231cc30
	if (!ctx.cr6.eq) goto loc_8231CC30;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r26,224
	ctx.r3.s64 = r26.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231CC18;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,174(r31)
	REX_STORE_U16(r31.u32 + 174, ctx.r10.u16);
loc_8231CC30:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231cc44
	if (!ctx.cr6.eq) goto loc_8231CC44;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8231d830
	goto loc_8231D830;
loc_8231CC44:
	// stw r14,40(r26)
	REX_STORE_U32(r26.u32 + 40, r14.u32);
	// b 0x8231d834
	goto loc_8231D834;
loc_8231CC4C:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231ccb4
	if (!ctx.cr6.eq) goto loc_8231CCB4;
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231ccb4
	if (!ctx.cr6.eq) goto loc_8231CCB4;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231ccb4
	if (ctx.cr6.eq) goto loc_8231CCB4;
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231ccb4
	if (ctx.cr6.eq) goto loc_8231CCB4;
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231ccb4
	if (ctx.cr6.eq) goto loc_8231CCB4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r26,224
	ctx.r3.s64 = r26.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231CC98;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8231d92c
	if (ctx.cr6.eq) goto loc_8231D92C;
	// stw r11,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r11.u32);
loc_8231CCB4:
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r11,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r11.u32);
loc_8231CCBC:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231cd24
	if (!ctx.cr6.eq) goto loc_8231CD24;
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231cd24
	if (!ctx.cr6.eq) goto loc_8231CD24;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231cd24
	if (ctx.cr6.eq) goto loc_8231CD24;
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231cd24
	if (ctx.cr6.eq) goto loc_8231CD24;
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231cd24
	if (ctx.cr6.eq) goto loc_8231CD24;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r26,224
	ctx.r3.s64 = r26.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231CD08;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8231d92c
	if (ctx.cr6.eq) goto loc_8231D92C;
	// stw r11,656(r31)
	REX_STORE_U32(r31.u32 + 656, ctx.r11.u32);
loc_8231CD24:
	// li r11,29
	ctx.r11.s64 = 29;
	// stw r11,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r11.u32);
loc_8231CD2C:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231cd94
	if (!ctx.cr6.eq) goto loc_8231CD94;
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231cd94
	if (!ctx.cr6.eq) goto loc_8231CD94;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231cd94
	if (ctx.cr6.eq) goto loc_8231CD94;
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231cd94
	if (ctx.cr6.eq) goto loc_8231CD94;
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231cd94
	if (ctx.cr6.eq) goto loc_8231CD94;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r26,224
	ctx.r3.s64 = r26.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231CD78;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8231d92c
	if (ctx.cr6.eq) goto loc_8231D92C;
	// stw r11,716(r31)
	REX_STORE_U32(r31.u32 + 716, ctx.r11.u32);
loc_8231CD94:
	// li r11,33
	ctx.r11.s64 = 33;
	// sth r24,150(r26)
	REX_STORE_U16(r26.u32 + 150, r24.u16);
	// stw r24,44(r26)
	REX_STORE_U32(r26.u32 + 44, r24.u32);
	// stw r11,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r11.u32);
loc_8231CDA4:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231d82c
	if (!ctx.cr6.eq) goto loc_8231D82C;
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231d82c
	if (!ctx.cr6.eq) goto loc_8231D82C;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231d82c
	if (ctx.cr6.eq) goto loc_8231D82C;
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231d82c
	if (ctx.cr6.eq) goto loc_8231D82C;
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231d82c
	if (ctx.cr6.eq) goto loc_8231D82C;
	// lhz r11,150(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 150);
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8231cfc8
	if (!ctx.cr6.lt) goto loc_8231CFC8;
loc_8231CDF4:
	// lhz r11,150(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 150);
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 320);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lwz r11,44(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 44);
	// mulli r9,r9,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(1776));
	// add r30,r9,r10
	r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8231ce24
	if (ctx.cr6.lt) goto loc_8231CE24;
	// beq cr6,0x8231ce6c
	if (ctx.cr6.eq) goto loc_8231CE6C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8231cf08
	if (ctx.cr6.lt) goto loc_8231CF08;
	// b 0x8231cfa0
	goto loc_8231CFA0;
loc_8231CE24:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r26,224
	ctx.r3.s64 = r26.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231CE34;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x8231d92c
	if (ctx.cr6.gt) goto loc_8231D92C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x8231d92c
	if (ctx.cr6.lt) goto loc_8231D92C;
	// sth r11,182(r30)
	REX_STORE_U16(r30.u32 + 182, ctx.r11.u16);
	// sth r24,184(r30)
	REX_STORE_U16(r30.u32 + 184, r24.u16);
	// stw r23,44(r26)
	REX_STORE_U32(r26.u32 + 44, r23.u32);
loc_8231CE6C:
	// lhz r11,184(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 184);
	// lhz r10,182(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 182);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8231cf00
	if (!ctx.cr6.lt) goto loc_8231CF00;
	// addi r29,r26,224
	r29.s64 = r26.s64 + 224;
loc_8231CE88:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82319780
	ctx.lr = 0x8231CE98;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bgt cr6,0x8231d92c
	if (ctx.cr6.gt) goto loc_8231D92C;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8231d92c
	if (ctx.cr6.lt) goto loc_8231D92C;
	// lhz r10,184(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 184);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mulli r10,r9,56
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(56));
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + r30.u64;
	// stw r11,200(r8)
	REX_STORE_U32(ctx.r8.u32 + 200, ctx.r11.u32);
	// lhz r7,184(r30)
	ctx.r7.u64 = REX_LOAD_U16(r30.u32 + 184);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r5,184(r30)
	REX_STORE_U16(r30.u32 + 184, ctx.r5.u16);
	// lhz r3,182(r30)
	ctx.r3.u64 = REX_LOAD_U16(r30.u32 + 182);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8231ce88
	if (ctx.cr6.lt) goto loc_8231CE88;
loc_8231CF00:
	// sth r24,184(r30)
	REX_STORE_U16(r30.u32 + 184, r24.u16);
	// stw r16,44(r26)
	REX_STORE_U32(r26.u32 + 44, r16.u32);
loc_8231CF08:
	// lhz r11,184(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 184);
	// lhz r10,182(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 182);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8231cf98
	if (!ctx.cr6.lt) goto loc_8231CF98;
	// addi r29,r26,224
	r29.s64 = r26.s64 + 224;
loc_8231CF24:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82319780
	ctx.lr = 0x8231CF34;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bgt cr6,0x8231d92c
	if (ctx.cr6.gt) goto loc_8231D92C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8231d92c
	if (ctx.cr6.lt) goto loc_8231D92C;
	// lhz r11,184(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 184);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mulli r11,r9,56
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(56));
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + r30.u64;
	// stw r10,220(r8)
	REX_STORE_U32(ctx.r8.u32 + 220, ctx.r10.u32);
	// lhz r7,184(r30)
	ctx.r7.u64 = REX_LOAD_U16(r30.u32 + 184);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sth r5,184(r30)
	REX_STORE_U16(r30.u32 + 184, ctx.r5.u16);
	// clrlwi r3,r5,16
	ctx.r3.u64 = ctx.r5.u32 & 0xFFFF;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// lhz r4,182(r30)
	ctx.r4.u64 = REX_LOAD_U16(r30.u32 + 182);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8231cf24
	if (ctx.cr6.lt) goto loc_8231CF24;
loc_8231CF98:
	// sth r24,184(r30)
	REX_STORE_U16(r30.u32 + 184, r24.u16);
	// stw r24,44(r26)
	REX_STORE_U32(r26.u32 + 44, r24.u32);
loc_8231CFA0:
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
	// lhz r7,34(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8231cdf4
	if (ctx.cr6.lt) goto loc_8231CDF4;
loc_8231CFC8:
	// stw r23,20(r26)
	REX_STORE_U32(r26.u32 + 20, r23.u32);
	// b 0x8231d82c
	goto loc_8231D82C;
loc_8231CFD0:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// addi r30,r26,224
	r30.s64 = r26.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8246e538
	ctx.lr = 0x8231CFE4;
	sub_8246E538(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
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
	// bne cr6,0x8231d040
	if (!ctx.cr6.eq) goto loc_8231D040;
	// bl 0x82319780
	ctx.lr = 0x8231D00C;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
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
	// stw r24,68(r9)
	REX_STORE_U32(ctx.r9.u32 + 68, r24.u32);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// stw r24,284(r31)
	REX_STORE_U32(r31.u32 + 284, r24.u32);
	// rlwinm r30,r7,27,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// b 0x8231d100
	goto loc_8231D100;
loc_8231D040:
	// bl 0x82319780
	ctx.lr = 0x8231D044;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
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
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,320(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 320);
	// stw r9,1844(r8)
	REX_STORE_U32(ctx.r8.u32 + 1844, ctx.r9.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r7,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r7.u32);
	// bl 0x82319780
	ctx.lr = 0x8231D080;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
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
	// bl 0x82319780
	ctx.lr = 0x8231D0A8;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,1816(r11)
	REX_STORE_U32(ctx.r11.u32 + 1816, ctx.r10.u32);
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lwz r8,40(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r7,1816(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 1816);
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r9,68(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// rlwinm r4,r6,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// and r30,r4,r3
	r30.u64 = ctx.r4.u64 & ctx.r3.u64;
	// addi r4,r11,1776
	ctx.r4.s64 = ctx.r11.s64 + 1776;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// beq cr6,0x8231d0fc
	if (ctx.cr6.eq) goto loc_8231D0FC;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8231D0FC:
	// bl 0x82322750
	ctx.lr = 0x8231D100;
	sub_82322750(ctx, base);
loc_8231D100:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r23,296(r31)
	REX_STORE_U32(r31.u32 + 296, r23.u32);
	// bne cr6,0x8231d86c
	if (!ctx.cr6.eq) goto loc_8231D86C;
	// stw r27,40(r26)
	REX_STORE_U32(r26.u32 + 40, r27.u32);
	// b 0x8231d834
	goto loc_8231D834;
loc_8231D114:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// stw r24,592(r31)
	REX_STORE_U32(r31.u32 + 592, r24.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8231d150
	if (ctx.cr6.lt) goto loc_8231D150;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r26,224
	ctx.r3.s64 = r26.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231D134;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231d150
	if (ctx.cr6.eq) goto loc_8231D150;
	// stw r23,592(r31)
	REX_STORE_U32(r31.u32 + 592, r23.u32);
loc_8231D150:
	// li r11,31
	ctx.r11.s64 = 31;
	// sth r24,150(r26)
	REX_STORE_U16(r26.u32 + 150, r24.u16);
	// stw r11,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r11.u32);
loc_8231D15C:
	// lwz r11,592(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 592);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231d22c
	if (!ctx.cr6.eq) goto loc_8231D22C;
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
	// bge cr6,0x8231d22c
	if (!ctx.cr6.lt) goto loc_8231D22C;
	// addi r29,r26,224
	r29.s64 = r26.s64 + 224;
loc_8231D184:
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
	// ble cr6,0x8231d1dc
	if (!ctx.cr6.gt) goto loc_8231D1DC;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
loc_8231D1CC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x8231d1cc
	if (ctx.cr6.gt) goto loc_8231D1CC;
loc_8231D1DC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82319780
	ctx.lr = 0x8231D1EC;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
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
	// blt cr6,0x8231d184
	if (ctx.cr6.lt) goto loc_8231D184;
loc_8231D22C:
	// stw r27,40(r26)
	REX_STORE_U32(r26.u32 + 40, r27.u32);
loc_8231D230:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x8231d248
	if (ctx.cr6.gt) goto loc_8231D248;
	// bl 0x82322580
	ctx.lr = 0x8231D244;
	sub_82322580(ctx, base);
	// b 0x8231d24c
	goto loc_8231D24C;
loc_8231D248:
	// bl 0x82324350
	ctx.lr = 0x8231D24C;
	sub_82324350(ctx, base);
loc_8231D24C:
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,296(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 296);
	// bl 0x82466b70
	ctx.lr = 0x8231D264;
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
	// ble cr6,0x8231d2d0
	if (!ctx.cr6.gt) goto loc_8231D2D0;
	// mr r30,r24
	r30.u64 = r24.u64;
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
loc_8231D284:
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
	// bl 0x82316ff0
	ctx.lr = 0x8231D2AC;
	sub_82316FF0(ctx, base);
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
	// blt cr6,0x8231d284
	if (ctx.cr6.lt) goto loc_8231D284;
loc_8231D2D0:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r24,132(r26)
	REX_STORE_U32(r26.u32 + 132, r24.u32);
	// stw r11,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r11.u32);
loc_8231D2DC:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82323888
	ctx.lr = 0x8231D2E4;
	sub_82323888(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
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
loc_8231D304:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231d324
	if (!ctx.cr6.eq) goto loc_8231D324;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82322a98
	ctx.lr = 0x8231D318;
	sub_82322A98(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
loc_8231D324:
	// stw r14,40(r26)
	REX_STORE_U32(r26.u32 + 40, r14.u32);
loc_8231D328:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x8231d3b4
	if (ctx.cr6.gt) goto loc_8231D3B4;
	// addi r30,r26,224
	r30.s64 = r26.s64 + 224;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r22,r23
	r22.u64 = r23.u64;
	// bl 0x8246e538
	ctx.lr = 0x8231D348;
	sub_8246E538(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231d3b4
	if (ctx.cr6.eq) goto loc_8231D3B4;
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
	// ble cr6,0x8231d3b4
	if (!ctx.cr6.gt) goto loc_8231D3B4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82319780
	ctx.lr = 0x8231D388;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
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
	// bne cr6,0x8231d3b4
	if (!ctx.cr6.eq) goto loc_8231D3B4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231d92c
	if (!ctx.cr6.eq) goto loc_8231D92C;
loc_8231D3B4:
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8231d4e8
	if (!ctx.cr6.gt) goto loc_8231D4E8;
	// mr r29,r24
	r29.u64 = r24.u64;
	// clrlwi r27,r22,24
	r27.u64 = r22.u32 & 0xFF;
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
loc_8231D3D0:
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// lwz r8,320(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 8);
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
	// add r30,r9,r8
	r30.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r28,r11,r10
	r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x8231d418
	if (ctx.cr6.eq) goto loc_8231D418;
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
	// b 0x8231d434
	goto loc_8231D434;
loc_8231D418:
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r11,118(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 118);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// beq cr6,0x8231d434
	if (ctx.cr6.eq) goto loc_8231D434;
	// lwz r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 456);
	// slw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
loc_8231D434:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8231d44c
	if (ctx.cr6.eq) goto loc_8231D44C;
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lwz r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 456);
	// sraw r10,r11,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r10.s64 = ctx.r11.s32 >> temp.u32;
	// b 0x8231d46c
	goto loc_8231D46C;
loc_8231D44C:
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// beq cr6,0x8231d468
	if (ctx.cr6.eq) goto loc_8231D468;
	// lwz r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 456);
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// b 0x8231d46c
	goto loc_8231D46C;
loc_8231D468:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8231D46C:
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
	// beq cr6,0x8231d498
	if (ctx.cr6.eq) goto loc_8231D498;
	// lwz r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 456);
	// sraw r11,r11,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r11.s64 = ctx.r11.s32 >> temp.u32;
	// b 0x8231d4ac
	goto loc_8231D4AC;
loc_8231D498:
	// lwz r10,448(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 448);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8231d4ac
	if (ctx.cr6.eq) goto loc_8231D4AC;
	// lwz r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 456);
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
loc_8231D4AC:
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x8231D4B8;
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
	// blt cr6,0x8231d3d0
	if (ctx.cr6.lt) goto loc_8231D3D0;
loc_8231D4E8:
	// li r11,9
	ctx.r11.s64 = 9;
	// sth r24,150(r26)
	REX_STORE_U16(r26.u32 + 150, r24.u16);
	// sth r24,152(r26)
	REX_STORE_U16(r26.u32 + 152, r24.u16);
	// stw r11,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r11.u32);
loc_8231D4F8:
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 280);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231d804
	if (!ctx.cr6.eq) goto loc_8231D804;
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
	// bge cr6,0x8231d82c
	if (!ctx.cr6.lt) goto loc_8231D82C;
loc_8231D51C:
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
	// ble cr6,0x8231d570
	if (!ctx.cr6.gt) goto loc_8231D570;
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
	// bne cr6,0x8231d570
	if (!ctx.cr6.eq) goto loc_8231D570;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823241f0
	ctx.lr = 0x8231D56C;
	sub_823241F0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_8231D570:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
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
	// bne cr6,0x8231d5c0
	if (!ctx.cr6.eq) goto loc_8231D5C0;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x8231d5c0
	if (ctx.cr6.gt) goto loc_8231D5C0;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(r22.s32, 1, ctx.xer);
	// bne cr6,0x8231d7ac
	if (!ctx.cr6.eq) goto loc_8231D7AC;
	// lwz r11,304(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 304);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 4);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x8231D5B8;
	sub_822D5870(ctx, base);
	// stw r24,64(r27)
	REX_STORE_U32(r27.u32 + 64, r24.u32);
	// b 0x8231d7ac
	goto loc_8231D7AC;
loc_8231D5C0:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// mr r28,r18
	r28.u64 = r18.u64;
	// lwz r30,4(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8231d5d8
	if (!ctx.cr6.gt) goto loc_8231D5D8;
	// mr r28,r19
	r28.u64 = r19.u64;
loc_8231D5D8:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(r22.s32, 1, ctx.xer);
	// bne cr6,0x8231d75c
	if (!ctx.cr6.eq) goto loc_8231D75C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8231d614
	if (!ctx.cr6.gt) goto loc_8231D614;
	// lwz r10,444(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 444);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8231d614
	if (!ctx.cr6.eq) goto loc_8231D614;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r5,304(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 304);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82324938
	ctx.lr = 0x8231D604;
	sub_82324938(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// b 0x8231d734
	goto loc_8231D734;
loc_8231D614:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231d650
	if (!ctx.cr6.eq) goto loc_8231D650;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r26,224
	ctx.r3.s64 = r26.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231D62C;
	sub_82319780(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
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
loc_8231D650:
	// lhz r11,152(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 152);
	// lwz r10,304(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 304);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8231d734
	if (!ctx.cr6.lt) goto loc_8231D734;
	// addi r29,r26,224
	r29.s64 = r26.s64 + 224;
loc_8231D668:
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
	ctx.lr = 0x8231D680;
	sub_82325C30(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82319a70
	ctx.lr = 0x8231D698;
	sub_82319A70(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
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
	// ble cr6,0x8231d6dc
	if (!ctx.cr6.gt) goto loc_8231D6DC;
	// lhz r11,152(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 152);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8231d6dc
	if (!ctx.cr6.eq) goto loc_8231D6DC;
	// lwz r11,436(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 436);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r11,r21,r11
	ctx.r11.u64 = uint32_t((ctx.r11.s32 && !(r21.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? r21.s32 / ctx.r11.s32 : 0);
	// b 0x8231d700
	goto loc_8231D700;
loc_8231D6DC:
	// lhz r11,152(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 152);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8231d6f4
	if (!ctx.cr6.eq) goto loc_8231D6F4;
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// b 0x8231d700
	goto loc_8231D700;
loc_8231D6F4:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
loc_8231D700:
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
	// sth r6,152(r26)
	REX_STORE_U16(r26.u32 + 152, ctx.r6.u16);
	// clrlwi r4,r6,16
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFF;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// lwz r5,304(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 304);
	// cmpw cr6,r3,r5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8231d668
	if (ctx.cr6.lt) goto loc_8231D668;
loc_8231D734:
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
	// b 0x8231d764
	goto loc_8231D764;
loc_8231D75C:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x8231d7ac
	if (ctx.cr6.eq) goto loc_8231D7AC;
loc_8231D764:
	// lwz r11,304(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 304);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8231d7a4
	if (!ctx.cr6.gt) goto loc_8231D7A4;
	// lwz r8,304(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 304);
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// rlwinm r10,r23,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
loc_8231D780:
	// lwzx r10,r10,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8231d790
	if (!ctx.cr6.gt) goto loc_8231D790;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8231D790:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x8231d780
	if (ctx.cr6.lt) goto loc_8231D780;
loc_8231D7A4:
	// stw r9,64(r27)
	REX_STORE_U32(r27.u32 + 64, ctx.r9.u32);
	// stw r23,444(r27)
	REX_STORE_U32(r27.u32 + 444, r23.u32);
loc_8231D7AC:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8231d7d4
	if (!ctx.cr6.gt) goto loc_8231D7D4;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(r22.s32, 1, ctx.xer);
	// bne cr6,0x8231d7d4
	if (!ctx.cr6.eq) goto loc_8231D7D4;
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
loc_8231D7D4:
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
	// blt cr6,0x8231d51c
	if (ctx.cr6.lt) goto loc_8231D51C;
	// b 0x8231d82c
	goto loc_8231D82C;
loc_8231D804:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823228b8
	ctx.lr = 0x8231D80C;
	sub_823228B8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231d82c
	if (!ctx.cr6.eq) goto loc_8231D82C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82322e30
	ctx.lr = 0x8231D82C;
	sub_82322E30(ctx, base);
loc_8231D82C:
	// li r11,10
	ctx.r11.s64 = 10;
loc_8231D830:
	// stw r11,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r11.u32);
loc_8231D834:
	// lwz r11,40(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 40);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x8231c074
	if (!ctx.cr6.eq) goto loc_8231C074;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4ea0
	return;
loc_8231D84C:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4ea0
	return;
loc_8231D85C:
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8231d910
	if (!ctx.cr6.eq) goto loc_8231D910;
	// b 0x8231d904
	goto loc_8231D904;
loc_8231D86C:
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8231d918
	if (!ctx.cr6.eq) goto loc_8231D918;
	// sth r24,150(r26)
	REX_STORE_U16(r26.u32 + 150, r24.u16);
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8231d900
	if (!ctx.cr6.gt) goto loc_8231D900;
loc_8231D88C:
	// lhz r11,150(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 150);
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 320);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mulli r11,r5,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1776));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r4,114(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 114);
	// lwz r11,424(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// ble cr6,0x8231d8d0
	if (!ctx.cr6.gt) goto loc_8231D8D0;
	// stb r24,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, r24.u8);
	// b 0x8231d8d4
	goto loc_8231D8D4;
loc_8231D8D0:
	// stb r23,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, r23.u8);
loc_8231D8D4:
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
	// blt cr6,0x8231d88c
	if (ctx.cr6.lt) goto loc_8231D88C;
loc_8231D900:
	// sth r24,150(r26)
	REX_STORE_U16(r26.u32 + 150, r24.u16);
loc_8231D904:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823228b8
	ctx.lr = 0x8231D90C;
	sub_823228B8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_8231D910:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// blt cr6,0x8231d934
	if (ctx.cr6.lt) goto loc_8231D934;
loc_8231D918:
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
loc_8231D92C:
	// lis r25,-32764
	r25.s64 = -2147221504;
	// ori r25,r25,2
	r25.u64 = r25.u64 | 2;
loc_8231D934:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8238FE48) {
	REX_FUNC_PROLOGUE();
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e7c
	ctx.lr = 0x8238FE50;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8238fe6c
	if (ctx.cr6.eq) goto loc_8238FE6C;
	// stb r10,-79(r1)
	REX_STORE_U8(ctx.r1.u32 + -79, ctx.r10.u8);
	// stb r10,-80(r1)
	REX_STORE_U8(ctx.r1.u32 + -80, ctx.r10.u8);
	// lhz r31,-80(r1)
	r31.u64 = REX_LOAD_U16(ctx.r1.u32 + -80);
	// b 0x8238fe74
	goto loc_8238FE74;
loc_8238FE6C:
	// lhz r31,-2(r5)
	r31.u64 = REX_LOAD_U16(ctx.r5.u32 + -2);
	// sth r31,-80(r1)
	REX_STORE_U16(ctx.r1.u32 + -80, r31.u16);
loc_8238FE74:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8238fe84
	if (ctx.cr6.eq) goto loc_8238FE84;
	// sth r31,0(r4)
	REX_STORE_U16(ctx.r4.u32 + 0, r31.u16);
	// b 0x822d4ecc
	return;
loc_8238FE84:
	// lwz r11,344(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 344);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r9,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r9.u64;
	// lhz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// sth r7,-76(r1)
	REX_STORE_U16(ctx.r1.u32 + -76, ctx.r7.u16);
	// beq cr6,0x8238fea8
	if (ctx.cr6.eq) goto loc_8238FEA8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8238feb8
	goto loc_8238FEB8;
loc_8238FEA8:
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// sth r11,-78(r1)
	REX_STORE_U16(ctx.r1.u32 + -78, ctx.r11.u16);
	// lbz r11,-77(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + -77);
	// lbz r10,-78(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + -78);
loc_8238FEB8:
	// lbz r9,-76(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + -76);
	// extsb r30,r11
	r30.s64 = ctx.r11.s8;
	// lbz r3,-80(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + -80);
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// lbz r11,-75(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + -75);
	// extsb r29,r9
	r29.s64 = ctx.r9.s8;
	// lbz r10,-79(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + -79);
	// extsb r3,r3
	ctx.r3.s64 = ctx.r3.s8;
	// extsb r28,r11
	r28.s64 = ctx.r11.s8;
	// extsb r27,r10
	r27.s64 = ctx.r10.s8;
	// subf r11,r3,r29
	ctx.r11.u64 = r29.u64 - ctx.r3.u64;
	// subf r10,r5,r29
	ctx.r10.u64 = r29.u64 - ctx.r5.u64;
	// subf r9,r3,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r3.u64;
	// subf r8,r27,r28
	ctx.r8.u64 = r28.u64 - r27.u64;
	// subf r26,r30,r28
	r26.u64 = r28.u64 - r30.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r25,r27,r30
	r25.u64 = r30.u64 - r27.u64;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r26,r26,r8
	r26.u64 = r26.u64 ^ ctx.r8.u64;
	// srawi r11,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// xor r8,r25,r8
	ctx.r8.u64 = r25.u64 ^ ctx.r8.u64;
	// srawi r10,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// srawi r9,r26,31
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = r26.s32 >> 31;
	// srawi r8,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 31;
	// or r26,r11,r10
	r26.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r25,r9,r8
	r25.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 & ctx.r3.u64;
	// andc r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 & ~r26.u64;
	// andc r10,r30,r25
	ctx.r10.u64 = r30.u64 & ~r25.u64;
	// and r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 & r28.u64;
	// or r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 | ctx.r3.u64;
	// or r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 | ctx.r9.u64;
	// and r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & r29.u64;
	// and r10,r8,r27
	ctx.r10.u64 = ctx.r8.u64 & r27.u64;
	// or r9,r5,r11
	ctx.r9.u64 = ctx.r5.u64 | ctx.r11.u64;
	// or r8,r3,r10
	ctx.r8.u64 = ctx.r3.u64 | ctx.r10.u64;
	// stb r9,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r9.u8);
	// stb r8,1(r4)
	REX_STORE_U8(ctx.r4.u32 + 1, ctx.r8.u8);
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r11,r11,14,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8238ff74
	if (ctx.cr6.eq) goto loc_8238FF74;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// beq cr6,0x8238ff70
	if (ctx.cr6.eq) goto loc_8238FF70;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8238FF70:
	// sth r11,0(r4)
	REX_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
loc_8238FF74:
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_823938F8) {
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
	ctx.lr = 0x82393900;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,268(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82393aa0
	if (!ctx.cr6.gt) goto loc_82393AA0;
	// addi r9,r7,-2
	ctx.r9.s64 = ctx.r7.s64 + -2;
	// addi r5,r25,4
	ctx.r5.s64 = r25.s64 + 4;
	// rlwinm r28,r9,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r7,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r7,1
	r29.s64 = ctx.r7.s64 + 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// li r24,255
	r24.s64 = 255;
loc_82393940:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82393978
	if (!ctx.cr6.gt) goto loc_82393978;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r5,-8
	ctx.r9.s64 = ctx.r5.s64 + -8;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// subf r11,r8,r30
	ctx.r11.u64 = r30.u64 - ctx.r8.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82393964:
	// lbzux r6,r11,r8
	ea = ctx.r11.u32 + ctx.r8.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mulli r3,r6,315
	ctx.r3.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(315));
	// srawi r6,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 4;
	// stwu r6,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82393964
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82393964;
loc_82393978:
	// lwzx r11,r28,r5
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r5.u32);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// stwx r11,r27,r5
	REX_STORE_U32(r27.u32 + ctx.r5.u32, ctx.r11.u32);
	// ble cr6,0x823939b8
	if (!ctx.cr6.gt) goto loc_823939B8;
	// addi r9,r29,-2
	ctx.r9.s64 = r29.s64 + -2;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8239399C:
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mulli r8,r9,226
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(226));
	// srawi r9,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 8;
	// stwu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8239399c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239399C;
loc_823939B8:
	// lwz r9,4(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r9,-4(r5)
	REX_STORE_U32(ctx.r5.u32 + -4, ctx.r9.u32);
	// ble cr6,0x82393a08
	if (!ctx.cr6.gt) goto loc_82393A08;
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823939E0:
	// lwz r6,-4(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// mulli r6,r8,217
	ctx.r6.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(217));
	// srawi r8,r6,12
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 12;
	// subf r6,r8,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r8.u64;
	// stw r6,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x823939e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823939E0;
loc_82393A08:
	// lwzx r9,r28,r5
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + ctx.r5.u32);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// stwx r9,r27,r5
	REX_STORE_U32(r27.u32 + ctx.r5.u32, ctx.r9.u32);
	// ble cr6,0x82393a50
	if (!ctx.cr6.gt) goto loc_82393A50;
	// addi r9,r29,-2
	ctx.r9.s64 = r29.s64 + -2;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82393A28:
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulli r9,r3,406
	ctx.r9.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(406));
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// subf r6,r6,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r6.u64;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82393a28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82393A28;
loc_82393A50:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82393a94
	if (!ctx.cr6.gt) goto loc_82393A94;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// subf r8,r10,r30
	ctx.r8.u64 = r30.u64 - ctx.r10.u64;
loc_82393A64:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// ble cr6,0x82393a84
	if (!ctx.cr6.gt) goto loc_82393A84;
	// subfic r6,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r6.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r11,r3
	temp.u8 = (ctx.r3.u32 + 0xFFFFFFFFu < ctx.r3.u32) | (ctx.r3.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r3.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 & r24.u64;
loc_82393A84:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stbux r11,r8,r10
	ea = ctx.r8.u32 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r8.u32 = ea;
	// bdnz 0x82393a64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82393A64;
loc_82393A94:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bne 0x82393940
	if (!ctx.cr0.eq) goto loc_82393940;
loc_82393AA0:
	// lwz r7,260(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x82393af8
	if (!ctx.cr6.gt) goto loc_82393AF8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_82393AB4:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// bl 0x823932d0
	ctx.lr = 0x82393AC4;
	sub_823932D0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne 0x82393ab4
	if (!ctx.cr0.eq) goto loc_82393AB4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x82393af8
	if (!ctx.cr6.gt) goto loc_82393AF8;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82393ADC:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// bl 0x823932d0
	ctx.lr = 0x82393AEC;
	sub_823932D0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne 0x82393adc
	if (!ctx.cr0.eq) goto loc_82393ADC;
loc_82393AF8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_823966E8) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// ble cr6,0x8239670c
	if (!ctx.cr6.gt) goto loc_8239670C;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// ble cr6,0x82396718
	if (!ctx.cr6.gt) goto loc_82396718;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// clrlwi r3,r10,30
	ctx.r3.u64 = ctx.r10.u32 & 0x3;
	// blr 
	return;
loc_8239670C:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgtlr cr6
	if (ctx.cr6.gt) return;
loc_82396718:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82397360) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82397368;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823973c0
	if (!ctx.cr6.eq) goto loc_823973C0;
	// bl 0x82396bd0
	ctx.lr = 0x82397394;
	sub_82396BD0(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823973ac
	if (ctx.cr6.eq) goto loc_823973AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_823973AC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_823973C0:
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823973e0
	if (!ctx.cr6.eq) goto loc_823973E0;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_823973E0:
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
	// blt cr6,0x823974dc
	if (ctx.cr6.lt) goto loc_823974DC;
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
	// bge cr6,0x823974cc
	if (!ctx.cr6.lt) goto loc_823974CC;
loc_8239742C:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82397460
	if (ctx.cr6.lt) goto loc_82397460;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x82397448;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8239742c
	if (ctx.cr6.eq) goto loc_8239742C;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_82397460:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
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
loc_823974CC:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_823974DC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337f50
	ctx.lr = 0x823974E4;
	sub_82337F50(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,32768
	r29.u64 = ctx.r11.u64 | 32768;
loc_823974EC:
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
	ctx.lr = 0x82397504;
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
	// blt cr6,0x823974ec
	if (ctx.cr6.lt) goto loc_823974EC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_823A4C80) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r9,136(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// lwz r8,140(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r31,r9,3,0,28
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r30,r8,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// beq cr6,0x823a4d38
	if (ctx.cr6.eq) goto loc_823A4D38;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r9,-8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -8, ctx.xer);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// bge cr6,0x823a4cd8
	if (!ctx.cr6.lt) goto loc_823A4CD8;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// b 0x823a4cec
	goto loc_823A4CEC;
loc_823A4CD8:
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r31.s32, ctx.xer);
	// ble cr6,0x823a4cec
	if (!ctx.cr6.gt) goto loc_823A4CEC;
	// subf r9,r9,r31
	ctx.r9.u64 = r31.u64 - ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_823A4CEC:
	// cmpwi cr6,r8,-8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -8, ctx.xer);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// bge cr6,0x823a4d14
	if (!ctx.cr6.lt) goto loc_823A4D14;
	// addi r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 8;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r8,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r8.u64;
	// stw r6,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_823A4D14:
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r30.s32, ctx.xer);
	// ble cr6,0x823a4d3c
	if (!ctx.cr6.gt) goto loc_823A4D3C;
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
loc_823A4D38:
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_823A4D3C:
	// stw r10,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823A5EC0) {
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
	ctx.lr = 0x823A5EC8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// bl 0x823a4d50
	ctx.lr = 0x823A5EF0;
	sub_823A4D50(ctx, base);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r6,r31,8
	ctx.r6.s64 = r31.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823a4d50
	ctx.lr = 0x823A5F18;
	sub_823A4D50(ctx, base);
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r27,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// add r31,r10,r31
	r31.u64 = ctx.r10.u64 + r31.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r6,r31,8
	ctx.r6.s64 = r31.s64 + 8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823a4d50
	ctx.lr = 0x823A5F4C;
	sub_823A4D50(ctx, base);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r30,-8
	ctx.r4.s64 = r30.s64 + -8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823a4d50
	ctx.lr = 0x823A5F70;
	sub_823A4D50(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_823A7620) {
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
	ctx.lr = 0x823A7628;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lwz r30,0(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r27,4(r4)
	r27.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// lwz r25,28(r4)
	r25.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// mr r17,r6
	r17.u64 = ctx.r6.u64;
	// lwz r24,32(r4)
	r24.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// mr r16,r8
	r16.u64 = ctx.r8.u64;
	// lwz r31,84(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r19,316(r3)
	r19.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// addi r23,r11,1
	r23.s64 = ctx.r11.s64 + 1;
	// lwz r18,320(r3)
	r18.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// beq cr6,0x823a782c
	if (ctx.cr6.eq) goto loc_823A782C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x823a7680
	if (!ctx.cr6.eq) goto loc_823A7680;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// b 0x823a77b0
	goto loc_823A77B0;
loc_823A7680:
	// lbz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U8(r30.u32 + 8);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r28
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + r28.u32);
	// extsh r29,r6
	r29.s64 = ctx.r6.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x823a776c
	if (ctx.cr6.lt) goto loc_823A776C;
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
	// bge cr6,0x823a7764
	if (!ctx.cr6.lt) goto loc_823A7764;
loc_823A76CC:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823a76f8
	if (ctx.cr6.lt) goto loc_823A76F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x823A76E8;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x823a76cc
	if (ctx.cr6.eq) goto loc_823A76CC;
	// srawi r29,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	r29.s64 = r29.s32 >> 4;
	// b 0x823a77ac
	goto loc_823A77AC;
loc_823A76F8:
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
loc_823A7764:
	// srawi r29,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	r29.s64 = r29.s32 >> 4;
	// b 0x823a77ac
	goto loc_823A77AC;
loc_823A776C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337f50
	ctx.lr = 0x823A7774;
	sub_82337F50(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r30,r11,32768
	r30.u64 = ctx.r11.u64 | 32768;
loc_823A777C:
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
	ctx.lr = 0x823A7794;
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
	// blt cr6,0x823a777c
	if (ctx.cr6.lt) goto loc_823A777C;
loc_823A77AC:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_823A77B0:
	// mr r21,r30
	r21.u64 = r30.u64;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// bne cr6,0x823a77c8
	if (!ctx.cr6.eq) goto loc_823A77C8;
loc_823A77BC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ea8
	return;
loc_823A77C8:
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
	// bge 0x823a77f0
	if (!ctx.cr0.lt) goto loc_823A77F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A77F0;
	sub_823380C8(ctx, base);
loc_823A77F0:
	// lbzx r11,r30,r25
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + r25.u32);
	// neg r9,r29
	ctx.r9.s64 = static_cast<int64_t>(-r29.u64);
	// lbzx r27,r30,r24
	r27.u64 = REX_LOAD_U8(r30.u32 + r24.u32);
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(r30.u32, r23.u32, ctx.xer);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// blt cr6,0x823a7810
	if (ctx.cr6.lt) goto loc_823A7810;
	// lwz r10,16(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 16);
	// b 0x823a7814
	goto loc_823A7814;
loc_823A7810:
	// lwz r10,12(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 12);
loc_823A7814:
	// lbzx r8,r10,r27
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + r27.u32);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// xor r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r10,r9,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r9.u64;
	// b 0x823a7e68
	goto loc_823A7E68;
loc_823A782C:
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
	// bge 0x823a7854
	if (!ctx.cr0.lt) goto loc_823A7854;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A7854;
	sub_823380C8(ctx, base);
loc_823A7854:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823a7a14
	if (ctx.cr6.eq) goto loc_823A7A14;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x823a7870
	if (!ctx.cr6.eq) goto loc_823A7870;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// b 0x823a79a0
	goto loc_823A79A0;
loc_823A7870:
	// lbz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U8(r30.u32 + 8);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r28
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + r28.u32);
	// extsh r29,r6
	r29.s64 = ctx.r6.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x823a795c
	if (ctx.cr6.lt) goto loc_823A795C;
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
	// bge cr6,0x823a7954
	if (!ctx.cr6.lt) goto loc_823A7954;
loc_823A78BC:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823a78e8
	if (ctx.cr6.lt) goto loc_823A78E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x823A78D8;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x823a78bc
	if (ctx.cr6.eq) goto loc_823A78BC;
	// srawi r29,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	r29.s64 = r29.s32 >> 4;
	// b 0x823a799c
	goto loc_823A799C;
loc_823A78E8:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
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
loc_823A7954:
	// srawi r29,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	r29.s64 = r29.s32 >> 4;
	// b 0x823a799c
	goto loc_823A799C;
loc_823A795C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337f50
	ctx.lr = 0x823A7964;
	sub_82337F50(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r30,r11,32768
	r30.u64 = ctx.r11.u64 | 32768;
loc_823A796C:
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
	ctx.lr = 0x823A7984;
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
	// blt cr6,0x823a796c
	if (ctx.cr6.lt) goto loc_823A796C;
loc_823A799C:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_823A79A0:
	// mr r21,r30
	r21.u64 = r30.u64;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// beq cr6,0x823a77bc
	if (ctx.cr6.eq) goto loc_823A77BC;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lbzx r8,r30,r25
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + r25.u32);
	// rldicr r7,r10,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbzx r28,r30,r24
	r28.u64 = REX_LOAD_U8(r30.u32 + r24.u32);
	// extsb r29,r8
	r29.s64 = ctx.r8.s8;
	// std r7,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r7.u64);
	// rldicl r27,r10,1,63
	r27.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bge 0x823a79e0
	if (!ctx.cr0.lt) goto loc_823A79E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A79E0;
	sub_823380C8(ctx, base);
loc_823A79E0:
	// lwz r10,1936(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 1936);
	// neg r9,r27
	ctx.r9.s64 = static_cast<int64_t>(-r27.u64);
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(r30.u32, r23.u32, ctx.xer);
	// blt cr6,0x823a79f8
	if (ctx.cr6.lt) goto loc_823A79F8;
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 24);
	// b 0x823a79fc
	goto loc_823A79FC;
loc_823A79F8:
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
loc_823A79FC:
	// lbzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r29.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r27,r11,r28
	r27.u64 = ctx.r11.u64 + r28.u64;
	// xor r11,r29,r9
	ctx.r11.u64 = r29.u64 ^ ctx.r9.u64;
	// subf r10,r9,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r9.u64;
	// b 0x823a7e68
	goto loc_823A7E68;
loc_823A7A14:
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
	// bge 0x823a7a3c
	if (!ctx.cr0.lt) goto loc_823A7A3C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A7A3C;
	sub_823380C8(ctx, base);
loc_823A7A3C:
	// subfic r11,r30,0
	ctx.xer.ca = r30.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r30.u64;
	// lwz r9,15536(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 15536);
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// and r21,r8,r23
	r21.u64 = ctx.r8.u64 & r23.u64;
	// blt cr6,0x823a7d10
	if (ctx.cr6.lt) goto loc_823A7D10;
	// lwz r11,1948(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 1948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a7a70
	if (ctx.cr6.eq) goto loc_823A7A70;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8239a188
	ctx.lr = 0x823A7A68;
	sub_8239A188(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1948(r22)
	REX_STORE_U32(r22.u32 + 1948, ctx.r11.u32);
loc_823A7A70:
	// lwz r29,84(r22)
	r29.u64 = REX_LOAD_U32(r22.u32 + 84);
	// li r28,0
	r28.s64 = 0;
	// lwz r30,1956(r22)
	r30.u64 = REX_LOAD_U32(r22.u32 + 1956);
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x823a7a94
	if (!ctx.cr6.gt) goto loc_823A7A94;
	// li r27,0
	r27.s64 = 0;
	// b 0x823a7b40
	goto loc_823A7B40;
loc_823A7A94:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x823a7aa4
	if (!ctx.cr6.eq) goto loc_823A7AA4;
	// li r27,0
	r27.s64 = 0;
	// b 0x823a7b40
	goto loc_823A7B40;
loc_823A7AA4:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823a7b04
	if (!ctx.cr6.gt) goto loc_823A7B04;
loc_823A7AAC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a7b04
	if (ctx.cr6.eq) goto loc_823A7B04;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r10.u64);
	// bge 0x823a7af4
	if (!ctx.cr0.lt) goto loc_823A7AF4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A7AF4;
	sub_823380C8(ctx, base);
loc_823A7AF4:
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a7aac
	if (ctx.cr6.gt) goto loc_823A7AAC;
loc_823A7B04:
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
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r4.u64);
	// bge 0x823a7b3c
	if (!ctx.cr0.lt) goto loc_823A7B3C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A7B3C;
	sub_823380C8(ctx, base);
loc_823A7B3C:
	// mr r27,r30
	r27.u64 = r30.u64;
loc_823A7B40:
	// lwz r3,84(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 84);
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
	// bge 0x823a7b68
	if (!ctx.cr0.lt) goto loc_823A7B68;
	// bl 0x823380c8
	ctx.lr = 0x823A7B68;
	sub_823380C8(ctx, base);
loc_823A7B68:
	// lwz r29,84(r22)
	r29.u64 = REX_LOAD_U32(r22.u32 + 84);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// lwz r30,1952(r22)
	r30.u64 = REX_LOAD_U32(r22.u32 + 1952);
	// li r28,0
	r28.s64 = 0;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x823a7c50
	if (ctx.cr6.eq) goto loc_823A7C50;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// ble cr6,0x823a7b98
	if (!ctx.cr6.gt) goto loc_823A7B98;
	// li r11,0
	ctx.r11.s64 = 0;
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// b 0x823a7e68
	goto loc_823A7E68;
loc_823A7B98:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x823a7bac
	if (!ctx.cr6.eq) goto loc_823A7BAC;
	// li r11,0
	ctx.r11.s64 = 0;
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// b 0x823a7e68
	goto loc_823A7E68;
loc_823A7BAC:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823a7c0c
	if (!ctx.cr6.gt) goto loc_823A7C0C;
loc_823A7BB4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a7c0c
	if (ctx.cr6.eq) goto loc_823A7C0C;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r10.u64);
	// bge 0x823a7bfc
	if (!ctx.cr0.lt) goto loc_823A7BFC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A7BFC;
	sub_823380C8(ctx, base);
loc_823A7BFC:
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a7bb4
	if (ctx.cr6.gt) goto loc_823A7BB4;
loc_823A7C0C:
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
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r4.u64);
	// bge 0x823a7c44
	if (!ctx.cr0.lt) goto loc_823A7C44;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A7C44;
	sub_823380C8(ctx, base);
loc_823A7C44:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// neg r10,r30
	ctx.r10.s64 = static_cast<int64_t>(-r30.u64);
	// b 0x823a7e68
	goto loc_823A7E68;
loc_823A7C50:
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// ble cr6,0x823a7c60
	if (!ctx.cr6.gt) goto loc_823A7C60;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x823a7e68
	goto loc_823A7E68;
loc_823A7C60:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x823a7c70
	if (!ctx.cr6.eq) goto loc_823A7C70;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x823a7e68
	goto loc_823A7E68;
loc_823A7C70:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823a7cd0
	if (!ctx.cr6.gt) goto loc_823A7CD0;
loc_823A7C78:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a7cd0
	if (ctx.cr6.eq) goto loc_823A7CD0;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r10.u64);
	// bge 0x823a7cc0
	if (!ctx.cr0.lt) goto loc_823A7CC0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A7CC0;
	sub_823380C8(ctx, base);
loc_823A7CC0:
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a7c78
	if (ctx.cr6.gt) goto loc_823A7C78;
loc_823A7CD0:
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
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r4.u64);
	// bge 0x823a7d08
	if (!ctx.cr0.lt) goto loc_823A7D08;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A7D08;
	sub_823380C8(ctx, base);
loc_823A7D08:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// b 0x823a7e68
	goto loc_823A7E68;
loc_823A7D10:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r30,6
	r30.s64 = 6;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x823a7d80
	if (!ctx.cr6.lt) goto loc_823A7D80;
loc_823A7D28:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a7d80
	if (ctx.cr6.eq) goto loc_823A7D80;
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
	// bge 0x823a7d70
	if (!ctx.cr0.lt) goto loc_823A7D70;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A7D70;
	sub_823380C8(ctx, base);
loc_823A7D70:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a7d28
	if (ctx.cr6.gt) goto loc_823A7D28;
loc_823A7D80:
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
	// bge 0x823a7db8
	if (!ctx.cr0.lt) goto loc_823A7DB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A7DB8;
	sub_823380C8(ctx, base);
loc_823A7DB8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r27,r30
	r27.u64 = r30.u64;
	// li r30,8
	r30.s64 = 8;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x823a7e2c
	if (!ctx.cr6.lt) goto loc_823A7E2C;
loc_823A7DD4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a7e2c
	if (ctx.cr6.eq) goto loc_823A7E2C;
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
	// bge 0x823a7e1c
	if (!ctx.cr0.lt) goto loc_823A7E1C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A7E1C;
	sub_823380C8(ctx, base);
loc_823A7E1C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823a7dd4
	if (ctx.cr6.gt) goto loc_823A7DD4;
loc_823A7E2C:
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
	// bge 0x823a7e64
	if (!ctx.cr0.lt) goto loc_823A7E64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823A7E64;
	sub_823380C8(ctx, base);
loc_823A7E64:
	// extsb r10,r30
	ctx.r10.s64 = r30.s8;
loc_823A7E68:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823a77bc
	if (!ctx.cr6.eq) goto loc_823A77BC;
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// stw r11,0(r16)
	REX_STORE_U32(r16.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// bge cr6,0x823a77bc
	if (!ctx.cr6.lt) goto loc_823A77BC;
	// lbzx r11,r11,r17
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r17.u32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x823a7ea8
	if (ctx.cr6.lt) goto loc_823A7EA8;
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823a7ebc
	if (!ctx.cr6.eq) goto loc_823A7EBC;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_823A7EA8:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r11,r20
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + r20.u32);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sthx r8,r11,r20
	REX_STORE_U16(ctx.r11.u32 + r20.u32, ctx.r8.u16);
	// b 0x823a7eec
	goto loc_823A7EEC;
loc_823A7EBC:
	// lwz r9,1764(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 1764);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823a7edc
	if (!ctx.cr6.gt) goto loc_823A7EDC;
	// mullw r10,r10,r19
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r19.s32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r18
	ctx.r7.u64 = ctx.r10.u64 + r18.u64;
	// stwx r7,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
	// b 0x823a7eec
	goto loc_823A7EEC;
loc_823A7EDC:
	// mullw r8,r10,r19
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(r19.s32);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r18,r8
	ctx.r6.u64 = ctx.r8.u64 - r18.u64;
	// stwx r6,r9,r7
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r6.u32);
loc_823A7EEC:
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r16)
	REX_STORE_U32(r16.u32 + 0, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ea8
	return;
}

DEFINE_REX_FUNC(sub_823CD720) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x823CD728;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823cd750
	if (ctx.cr6.eq) goto loc_823CD750;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r30,80(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x823cd754
	goto loc_823CD754;
loc_823CD750:
	// extsw r30,r4
	r30.s64 = ctx.r4.s32;
loc_823CD754:
	// lis r31,-32173
	r31.s64 = -2108489728;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// blt cr6,0x823cd7e0
	if (ctx.cr6.lt) goto loc_823CD7E0;
	// beq cr6,0x823cd7ac
	if (ctx.cr6.eq) goto loc_823CD7AC;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// bge cr6,0x823cd7ac
	if (!ctx.cr6.lt) goto loc_823CD7AC;
	// lwz r11,4384(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4384);
	// li r7,34
	ctx.r7.s64 = 34;
	// li r6,56
	ctx.r6.s64 = 56;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CD790;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823cd7a0
	if (!ctx.cr0.lt) goto loc_823CD7A0;
loc_823CD798:
	// bl 0x8220a840
	ctx.lr = 0x823CD79C;
	sub_8220A840(ctx, base);
	// b 0x823cd884
	goto loc_823CD884;
loc_823CD7A0:
	// ld r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
loc_823CD7A4:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// b 0x823cd7e4
	goto loc_823CD7E4;
loc_823CD7AC:
	// lwz r11,4384(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4384);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CD7D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823cd798
	if (ctx.cr0.lt) goto loc_823CD798;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x823cd7a4
	goto loc_823CD7A4;
loc_823CD7E0:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_823CD7E4:
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bge cr6,0x823cd7fc
	if (!ctx.cr6.lt) goto loc_823CD7FC;
	// li r3,131
	ctx.r3.s64 = 131;
loc_823CD7F4:
	// bl 0x8220a828
	ctx.lr = 0x823CD7F8;
	sub_8220A828(ctx, base);
	// b 0x823cd884
	goto loc_823CD884;
loc_823CD7FC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x823cd818
	if (!ctx.cr6.eq) goto loc_823CD818;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi. r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823cd818
	if (ctx.cr0.eq) goto loc_823CD818;
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x823cd7f4
	goto loc_823CD7F4;
loc_823CD818:
	// lwz r11,4384(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4384);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CD83C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823cd870
	if (ctx.cr0.lt) goto loc_823CD870;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x823cd854
	if (ctx.cr6.eq) goto loc_823CD854;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_823CD854:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823cd868
	if (!ctx.cr6.eq) goto loc_823CD868;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8220a618
	ctx.lr = 0x823CD868;
	sub_8220A618(ctx, base);
loc_823CD868:
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x823cd888
	goto loc_823CD888;
loc_823CD870:
	// bl 0x8220a840
	ctx.lr = 0x823CD874;
	sub_8220A840(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x823cd884
	if (ctx.cr6.eq) goto loc_823CD884;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_823CD884:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_823CD888:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_823D0ED8) {
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
	// addi r30,r3,2584
	r30.s64 = ctx.r3.s64 + 2584;
	// addi r5,r3,11028
	ctx.r5.s64 = ctx.r3.s64 + 11028;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823d0998
	ctx.lr = 0x823D0F04;
	sub_823D0998(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823d0f14
	if (!ctx.cr0.eq) goto loc_823D0F14;
loc_823D0F0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823d0fac
	goto loc_823D0FAC;
loc_823D0F14:
	// lbz r11,11957(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11957);
	// addi r6,r31,2840
	ctx.r6.s64 = r31.s64 + 2840;
	// addi r5,r31,11284
	ctx.r5.s64 = r31.s64 + 11284;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rotlwi r4,r11,3
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// bl 0x823d0998
	ctx.lr = 0x823D0F2C;
	sub_823D0998(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823d0f0c
	if (ctx.cr0.eq) goto loc_823D0F0C;
	// lbz r11,11957(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11957);
	// addi r8,r31,3644
	ctx.r8.s64 = r31.s64 + 3644;
	// addi r7,r31,24
	ctx.r7.s64 = r31.s64 + 24;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// li r6,10
	ctx.r6.s64 = 10;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d1040
	ctx.lr = 0x823D0F58;
	sub_823D1040(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823d0f0c
	if (ctx.cr0.eq) goto loc_823D0F0C;
	// addi r30,r31,3256
	r30.s64 = r31.s64 + 3256;
	// addi r5,r31,11700
	ctx.r5.s64 = r31.s64 + 11700;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d0998
	ctx.lr = 0x823D0F78;
	sub_823D0998(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823d0f0c
	if (ctx.cr0.eq) goto loc_823D0F0C;
	// addi r8,r31,9020
	ctx.r8.s64 = r31.s64 + 9020;
	// addi r7,r31,2072
	ctx.r7.s64 = r31.s64 + 2072;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d1040
	ctx.lr = 0x823D0F9C;
	sub_823D1040(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_823D0FAC:
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

DEFINE_REX_FUNC(sub_823D42A0) {
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
	ctx.lr = 0x823D42A8;
	// stfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -144, f29.u64);
	// stfd f30,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, f30.u64);
	// stfd f31,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// stwu r1,-864(r1)
	ea = -864 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 10, ctx.xer);
	// ble cr6,0x823d4c8c
	if (!ctx.cr6.gt) goto loc_823D4C8C;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,-9320
	ctx.r10.s64 = ctx.r10.s64 + -9320;
	// addi r8,r4,10
	ctx.r8.s64 = ctx.r4.s64 + 10;
loc_823D42DC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823d42fc
	if (!ctx.cr0.eq) goto loc_823D42FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823d42dc
	if (!ctx.cr6.eq) goto loc_823D42DC;
loc_823D42FC:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823d4c8c
	if (!ctx.cr0.eq) goto loc_823D4C8C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// mr r26,r29
	r26.u64 = r29.u64;
	// lfs f29,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f29.f64 = double(temp.f32);
	// fmr f31,f29
	f31.f64 = f29.f64;
	// ble cr6,0x823d4c8c
	if (!ctx.cr6.gt) goto loc_823D4C8C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// li r18,1
	r18.s64 = 1;
	// addi r22,r11,-9400
	r22.s64 = ctx.r11.s64 + -9400;
	// addi r21,r10,-9336
	r21.s64 = ctx.r10.s64 + -9336;
	// addi r20,r9,-9352
	r20.s64 = ctx.r9.s64 + -9352;
	// addi r25,r8,-9364
	r25.s64 = ctx.r8.s64 + -9364;
	// addi r23,r7,-9372
	r23.s64 = ctx.r7.s64 + -9372;
loc_823D434C:
	// lbz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 0);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x823d459c
	if (ctx.cr6.eq) goto loc_823D459C;
	// cmpwi cr6,r24,7
	ctx.cr6.compare<int32_t>(r24.s32, 7, ctx.xer);
	// ble cr6,0x823d4464
	if (!ctx.cr6.gt) goto loc_823D4464;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// addi r8,r27,7
	ctx.r8.s64 = r27.s64 + 7;
loc_823D436C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823d438c
	if (!ctx.cr0.eq) goto loc_823D438C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823d436c
	if (!ctx.cr6.eq) goto loc_823D436C;
loc_823D438C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823d4464
	if (!ctx.cr0.eq) goto loc_823D4464;
	// addi r31,r27,7
	r31.s64 = r27.s64 + 7;
	// addi r30,r24,-7
	r30.s64 = r24.s64 + -7;
loc_823D439C:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x823d43b4
	if (ctx.cr6.eq) goto loc_823D43B4;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x823d43c4
	if (!ctx.cr6.eq) goto loc_823D43C4;
loc_823D43B4:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x823d4c8c
	if (ctx.cr0.eq) goto loc_823D4C8C;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x823d439c
	goto loc_823D439C;
loc_823D43C4:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x822d4fa0
	ctx.lr = 0x823D43D4;
	sub_822D4FA0(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x822d4fa0
	ctx.lr = 0x823D43E4;
	sub_822D4FA0(ctx, base);
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(r30.s32, 16, ctx.xer);
	// blt cr6,0x823d4c8c
	if (ctx.cr6.lt) goto loc_823D4C8C;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r8,r31,15
	ctx.r8.s64 = r31.s64 + 15;
loc_823D43F8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823d4418
	if (!ctx.cr0.eq) goto loc_823D4418;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823d43f8
	if (!ctx.cr6.eq) goto loc_823D43F8;
loc_823D4418:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x823d4454
	if (ctx.cr0.eq) goto loc_823D4454;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r8,r31,15
	ctx.r8.s64 = r31.s64 + 15;
loc_823D442C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823d444c
	if (!ctx.cr0.eq) goto loc_823D444C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823d442c
	if (!ctx.cr6.eq) goto loc_823D442C;
loc_823D444C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823d4c8c
	if (!ctx.cr0.eq) goto loc_823D4C8C;
loc_823D4454:
	// addi r27,r31,16
	r27.s64 = r31.s64 + 16;
	// addi r24,r30,-16
	r24.s64 = r30.s64 + -16;
	// mr r26,r18
	r26.u64 = r18.u64;
	// b 0x823d4590
	goto loc_823D4590;
loc_823D4464:
	// cmpwi cr6,r24,9
	ctx.cr6.compare<int32_t>(r24.s32, 9, ctx.xer);
	// ble cr6,0x823d4558
	if (!ctx.cr6.gt) goto loc_823D4558;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// addi r8,r27,9
	ctx.r8.s64 = r27.s64 + 9;
loc_823D4478:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823d4498
	if (!ctx.cr0.eq) goto loc_823D4498;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823d4478
	if (!ctx.cr6.eq) goto loc_823D4478;
loc_823D4498:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823d4558
	if (!ctx.cr0.eq) goto loc_823D4558;
	// addi r30,r27,9
	r30.s64 = r27.s64 + 9;
	// addi r28,r24,-9
	r28.s64 = r24.s64 + -9;
loc_823D44A8:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x823d44c0
	if (ctx.cr6.eq) goto loc_823D44C0;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x823d44d0
	if (!ctx.cr6.eq) goto loc_823D44D0;
loc_823D44C0:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x823d4c8c
	if (ctx.cr0.eq) goto loc_823D4C8C;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x823d44a8
	goto loc_823D44A8;
loc_823D44D0:
	// cmpwi cr6,r28,256
	ctx.cr6.compare<int32_t>(r28.s32, 256, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// blt cr6,0x823d44e0
	if (ctx.cr6.lt) goto loc_823D44E0;
	// li r11,256
	ctx.r11.s64 = 256;
loc_823D44E0:
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d4504
	if (ctx.cr6.eq) goto loc_823D4504;
loc_823D44EC:
	// lbzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + r30.u32);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// beq cr6,0x823d4508
	if (ctx.cr6.eq) goto loc_823D4508;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823d44ec
	if (ctx.cr6.lt) goto loc_823D44EC;
loc_823D4504:
	// mr r31,r29
	r31.u64 = r29.u64;
loc_823D4508:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823d4c8c
	if (ctx.cr6.eq) goto loc_823D4C8C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r31,1
	ctx.r4.s64 = r31.s64 + 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823d39f8
	ctx.lr = 0x823D4520;
	sub_823D39F8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r6,r1,464
	ctx.r6.s64 = ctx.r1.s64 + 464;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8247cd90
	ctx.lr = 0x823D4534;
	sub_8247CD90(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x823d4c8c
	if (!ctx.cr6.eq) goto loc_823D4C8C;
	// add r11,r31,r30
	ctx.r11.u64 = r31.u64 + r30.u64;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// subf r10,r31,r28
	ctx.r10.u64 = r28.u64 - r31.u64;
	// fmuls f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 * f31.f64));
	// addi r27,r11,1
	r27.s64 = ctx.r11.s64 + 1;
	// addi r24,r10,-1
	r24.s64 = ctx.r10.s64 + -1;
	// b 0x823d4590
	goto loc_823D4590;
loc_823D4558:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x823d457c
	if (ctx.cr6.eq) goto loc_823D457C;
loc_823D4564:
	// lbzx r10,r11,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r27.u32);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// beq cr6,0x823d4580
	if (ctx.cr6.eq) goto loc_823D4580;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// blt cr6,0x823d4564
	if (ctx.cr6.lt) goto loc_823D4564;
loc_823D457C:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_823D4580:
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + r27.u64;
	// subf r11,r11,r24
	ctx.r11.u64 = r24.u64 - ctx.r11.u64;
	// addi r27,r10,1
	r27.s64 = ctx.r10.s64 + 1;
	// addi r24,r11,-1
	r24.s64 = ctx.r11.s64 + -1;
loc_823D4590:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bgt cr6,0x823d434c
	if (ctx.cr6.gt) goto loc_823D434C;
	// b 0x823d45a4
	goto loc_823D45A4;
loc_823D459C:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
loc_823D45A4:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x823d4c8c
	if (ctx.cr6.eq) goto loc_823D4C8C;
	// cmpwi cr6,r24,256
	ctx.cr6.compare<int32_t>(r24.s32, 256, ctx.xer);
	// li r10,256
	ctx.r10.s64 = 256;
	// bgt cr6,0x823d45bc
	if (ctx.cr6.gt) goto loc_823D45BC;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_823D45BC:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d45e0
	if (ctx.cr6.eq) goto loc_823D45E0;
loc_823D45C8:
	// lbzx r9,r11,r27
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + r27.u32);
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// beq cr6,0x823d4630
	if (ctx.cr6.eq) goto loc_823D4630;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823d45c8
	if (ctx.cr6.lt) goto loc_823D45C8;
loc_823D45E0:
	// mr r28,r29
	r28.u64 = r29.u64;
loc_823D45E4:
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(r28.u32, 2, ctx.xer);
	// ble cr6,0x823d4c8c
	if (!ctx.cr6.gt) goto loc_823D4C8C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r28,1
	ctx.r4.s64 = r28.s64 + 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823d39f8
	ctx.lr = 0x823D45FC;
	sub_823D39F8(ctx, base);
	// lbz r11,209(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 209);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,89
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 89, ctx.xer);
	// bne cr6,0x823d464c
	if (!ctx.cr6.eq) goto loc_823D464C;
	// lbz r11,208(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 208);
	// mr r30,r18
	r30.u64 = r18.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x823d4638
	if (!ctx.cr6.eq) goto loc_823D4638;
	// lbz r26,80(r1)
	r26.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// mr r25,r29
	r25.u64 = r29.u64;
	// b 0x823d4684
	goto loc_823D4684;
loc_823D4630:
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// b 0x823d45e4
	goto loc_823D45E4;
loc_823D4638:
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// bne cr6,0x823d4c8c
	if (!ctx.cr6.eq) goto loc_823D4C8C;
	// lbz r26,80(r1)
	r26.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// mr r25,r18
	r25.u64 = r18.u64;
	// b 0x823d4684
	goto loc_823D4684;
loc_823D464C:
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// bne cr6,0x823d4c8c
	if (!ctx.cr6.eq) goto loc_823D4C8C;
	// lbz r11,208(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 208);
	// mr r30,r29
	r30.u64 = r29.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x823d4674
	if (!ctx.cr6.eq) goto loc_823D4674;
	// mr r26,r29
	r26.u64 = r29.u64;
	// b 0x823d4680
	goto loc_823D4680;
loc_823D4674:
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// bne cr6,0x823d4c8c
	if (!ctx.cr6.eq) goto loc_823D4C8C;
	// mr r26,r18
	r26.u64 = r18.u64;
loc_823D4680:
	// lbz r25,80(r1)
	r25.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
loc_823D4684:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r1,210
	ctx.r3.s64 = ctx.r1.s64 + 210;
	// addi r31,r11,-9376
	r31.s64 = ctx.r11.s64 + -9376;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8247cd90
	ctx.lr = 0x823D4698;
	sub_8247CD90(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x823d4c8c
	if (!ctx.cr6.eq) goto loc_823D4C8C;
	// lbz r11,210(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 210);
	// addi r10,r1,210
	ctx.r10.s64 = ctx.r1.s64 + 210;
	// b 0x823d46c0
	goto loc_823D46C0;
loc_823D46AC:
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x823d46c8
	if (ctx.cr6.eq) goto loc_823D46C8;
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x823d46c8
	if (ctx.cr6.eq) goto loc_823D46C8;
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_823D46C0:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823d46ac
	if (!ctx.cr0.eq) goto loc_823D46AC;
loc_823D46C8:
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823d4c8c
	if (ctx.cr0.eq) goto loc_823D4C8C;
	// addi r11,r11,-43
	ctx.r11.s64 = ctx.r11.s64 + -43;
	// clrlwi. r30,r30,24
	r30.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// beq 0x823d46f0
	if (ctx.cr0.eq) goto loc_823D46F0;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// rlwinm r26,r11,27,31,31
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x823d46f8
	goto loc_823D46F8;
loc_823D46F0:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// rlwinm r25,r11,27,31,31
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_823D46F8:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823d4c8c
	if (ctx.cr0.eq) goto loc_823D4C8C;
	// cmpwi cr6,r11,89
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 89, ctx.xer);
	// beq cr6,0x823d4714
	if (ctx.cr6.eq) goto loc_823D4714;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// bne cr6,0x823d4c8c
	if (!ctx.cr6.eq) goto loc_823D4C8C;
loc_823D4714:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// bl 0x8247cd90
	ctx.lr = 0x823D4720;
	sub_8247CD90(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x823d4c8c
	if (!ctx.cr6.eq) goto loc_823D4C8C;
	// lis r9,6690
	ctx.r9.s64 = 438435840;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// add r8,r28,r27
	ctx.r8.u64 = r28.u64 + r27.u64;
	// ori r6,r9,43686
	ctx.r6.u64 = ctx.r9.u64 | 43686;
	// stw r29,52(r19)
	REX_STORE_U32(r19.u32 + 52, r29.u32);
	// subf r7,r28,r24
	ctx.r7.u64 = r24.u64 - r28.u64;
	// stw r18,20(r19)
	REX_STORE_U32(r19.u32 + 20, r18.u32);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r6,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r6.u32);
	// mullw. r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r11,12(r19)
	REX_STORE_U32(r19.u32 + 12, ctx.r11.u32);
	// stw r10,16(r19)
	REX_STORE_U32(r19.u32 + 16, ctx.r10.u32);
	// addi r31,r8,1
	r31.s64 = ctx.r8.s64 + 1;
	// stw r9,48(r19)
	REX_STORE_U32(r19.u32 + 48, ctx.r9.u32);
	// addi r24,r7,-1
	r24.s64 = ctx.r7.s64 + -1;
	// beq 0x823d4c8c
	if (ctx.cr0.eq) goto loc_823D4C8C;
	// stw r18,56(r19)
	REX_STORE_U32(r19.u32 + 56, r18.u32);
	// mullw r3,r9,r10
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x823cd118
	ctx.lr = 0x823D477C;
	sub_823CD118(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r19)
	REX_STORE_U32(r19.u32 + 4, ctx.r11.u32);
	// bne 0x823d4794
	if (!ctx.cr0.eq) goto loc_823D4794;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823d4c94
	goto loc_823D4C94;
loc_823D4794:
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// lwz r7,92(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// bne cr6,0x823d47b0
	if (!ctx.cr6.eq) goto loc_823D47B0;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// beq cr6,0x823d47b8
	if (ctx.cr6.eq) goto loc_823D47B8;
loc_823D47B0:
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// b 0x823d47bc
	goto loc_823D47BC;
loc_823D47B8:
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
loc_823D47BC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// clrlwi. r10,r26,24
	ctx.r10.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823d4854
	if (ctx.cr6.eq) goto loc_823D4854;
	// beq 0x823d47e0
	if (ctx.cr0.eq) goto loc_823D47E0;
	// clrlwi. r9,r25,24
	ctx.r9.u64 = r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823d47e0
	if (!ctx.cr0.eq) goto loc_823D47E0;
	// lwz r10,48(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 48);
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x823d482c
	goto loc_823D482C;
loc_823D47E0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823d4834
	if (!ctx.cr6.eq) goto loc_823D4834;
	// clrlwi. r9,r25,24
	ctx.r9.u64 = r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823d4804
	if (!ctx.cr0.eq) goto loc_823D4804;
	// lwz r10,48(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 48);
	// li r4,-4
	ctx.r4.s64 = -4;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x823d48cc
	goto loc_823D48CC;
loc_823D4804:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823d4834
	if (!ctx.cr6.eq) goto loc_823D4834;
	// clrlwi. r10,r25,24
	ctx.r10.u64 = r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823d4834
	if (ctx.cr0.eq) goto loc_823D4834;
	// lwz r9,48(r19)
	ctx.r9.u64 = REX_LOAD_U32(r19.u32 + 48);
	// li r4,-4
	ctx.r4.s64 = -4;
	// mullw r10,r9,r8
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// neg r10,r9
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
loc_823D482C:
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x823d48e0
	goto loc_823D48E0;
loc_823D4834:
	// lwz r9,48(r19)
	ctx.r9.u64 = REX_LOAD_U32(r19.u32 + 48);
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// li r4,4
	ctx.r4.s64 = 4;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r9,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x823d48e0
	goto loc_823D48E0;
loc_823D4854:
	// beq 0x823d487c
	if (ctx.cr0.eq) goto loc_823D487C;
	// clrlwi. r9,r25,24
	ctx.r9.u64 = r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x823d487c
	if (ctx.cr0.eq) goto loc_823D487C;
	// lwz r9,48(r19)
	ctx.r9.u64 = REX_LOAD_U32(r19.u32 + 48);
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// neg r5,r9
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r4,r5,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x823d48dc
	goto loc_823D48DC;
loc_823D487C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823d48d4
	if (!ctx.cr6.eq) goto loc_823D48D4;
	// clrlwi. r9,r25,24
	ctx.r9.u64 = r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x823d48ac
	if (ctx.cr0.eq) goto loc_823D48AC;
	// lwz r6,48(r19)
	ctx.r6.u64 = REX_LOAD_U32(r19.u32 + 48);
	// li r10,-4
	ctx.r10.s64 = -4;
	// mullw r9,r6,r8
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// neg r9,r6
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// rlwinm r4,r9,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x823d48e0
	goto loc_823D48E0;
loc_823D48AC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823d48d4
	if (!ctx.cr6.eq) goto loc_823D48D4;
	// clrlwi. r10,r25,24
	ctx.r10.u64 = r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823d48d4
	if (!ctx.cr0.eq) goto loc_823D48D4;
	// lwz r9,48(r19)
	ctx.r9.u64 = REX_LOAD_U32(r19.u32 + 48);
	// li r10,-4
	ctx.r10.s64 = -4;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r4,r9,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
loc_823D48CC:
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// b 0x823d48e0
	goto loc_823D48E0;
loc_823D48D4:
	// lwz r9,48(r19)
	ctx.r9.u64 = REX_LOAD_U32(r19.u32 + 48);
	// rlwinm r4,r9,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
loc_823D48DC:
	// li r10,4
	ctx.r10.s64 = 4;
loc_823D48E0:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x823d4bd4
	if (!ctx.cr6.gt) goto loc_823D4BD4;
	// rlwinm r28,r10,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_823D48F8:
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(r24.s32, 4, ctx.xer);
	// blt cr6,0x823d4c7c
	if (ctx.cr6.lt) goto loc_823D4C7C;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r24,r24,-4
	r24.s64 = r24.s64 + -4;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lbz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// lbz r10,86(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 86);
	// beq cr6,0x823d4aa4
	if (ctx.cr6.eq) goto loc_823D4AA4;
	// lbz r9,85(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 85);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x823d4938
	if (!ctx.cr6.eq) goto loc_823D4938;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x823d4aa4
	if (ctx.cr6.lt) goto loc_823D4AA4;
loc_823D4938:
	// lbz r8,87(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 87);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r10,184(r1)
	REX_STORE_U64(ctx.r1.u32 + 184, ctx.r10.u64);
	// lfd f13,184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// std r9,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r9.u64);
	// lfd f0,152(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r8,200(r1)
	REX_STORE_U64(ctx.r1.u32 + 200, ctx.r8.u64);
	// lfd f12,200(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 200);
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f11,128(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// frsp f0,f11
	ctx.f0.f64 = double(float(ctx.f11.f64));
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(r27.s32, 1, ctx.xer);
	// frsp f12,f10
	ctx.f12.f64 = double(float(ctx.f10.f64));
	// frsp f11,f9
	ctx.f11.f64 = double(float(ctx.f9.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// ble cr6,0x823d4bbc
	if (!ctx.cr6.gt) goto loc_823D4BBC;
loc_823D49A0:
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(r24.s32, 4, ctx.xer);
	// blt cr6,0x823d4c7c
	if (ctx.cr6.lt) goto loc_823D4C7C;
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r24,r24,-4
	r24.s64 = r24.s64 + -4;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lbz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r7,86(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 86);
	// lbz r6,85(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 85);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x823d4a28
	if (!ctx.cr6.eq) goto loc_823D4A28;
	// clrlwi r3,r6,24
	ctx.r3.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x823d4a28
	if (!ctx.cr6.eq) goto loc_823D4A28;
	// clrlwi r3,r7,24
	ctx.r3.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x823d4a28
	if (!ctx.cr6.eq) goto loc_823D4A28;
	// lbz r9,87(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 87);
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r27.s32, ctx.xer);
	// bgt cr6,0x823d4c7c
	if (ctx.cr6.gt) goto loc_823D4C7C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823d4a20
	if (!ctx.cr6.gt) goto loc_823D4A20;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823D4A08:
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// bdnz 0x823d4a08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D4A08;
loc_823D4A20:
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// b 0x823d4a98
	goto loc_823D4A98;
loc_823D4A28:
	// lbz r8,87(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 87);
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// std r6,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// std r7,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r7.u64);
	// std r8,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r8.u64);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// std r8,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r8.u64);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// lfd f12,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f0,192(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lfd f0,144(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// lfd f13,176(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// frsp f13,f10
	ctx.f13.f64 = double(float(ctx.f10.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_823D4A98:
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r27.s32, ctx.xer);
	// blt cr6,0x823d49a0
	if (ctx.cr6.lt) goto loc_823D49A0;
	// b 0x823d4bbc
	goto loc_823D4BBC;
loc_823D4AA4:
	// lbz r11,87(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 87);
	// rlwinm r10,r10,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF00;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r27.s32, ctx.xer);
	// bne cr6,0x823d4c7c
	if (!ctx.cr6.eq) goto loc_823D4C7C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_823D4AC0:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x823d4bac
	if (!ctx.cr6.gt) goto loc_823D4BAC;
loc_823D4AD0:
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(r24.s32, 2, ctx.xer);
	// blt cr6,0x823d4c7c
	if (ctx.cr6.lt) goto loc_823D4C7C;
	// lbz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// ble cr6,0x823d4b3c
	if (!ctx.cr6.gt) goto loc_823D4B3C;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r27.s32, ctx.xer);
	// bgt cr6,0x823d4c7c
	if (ctx.cr6.gt) goto loc_823D4C7C;
	// lbz r9,1(r5)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r9,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r9.u64);
	// lfd f0,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// beq cr6,0x823d4b30
	if (ctx.cr6.eq) goto loc_823D4B30;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_823D4B18:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823d4b18
	if (ctx.cr6.lt) goto loc_823D4B18;
loc_823D4B30:
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// addi r24,r24,-2
	r24.s64 = r24.s64 + -2;
	// b 0x823d4ba4
	goto loc_823D4BA4;
loc_823D4B3C:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r24,r9
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823d4c7c
	if (ctx.cr6.lt) goto loc_823D4C7C;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r27.s32, ctx.xer);
	// bgt cr6,0x823d4c7c
	if (ctx.cr6.gt) goto loc_823D4C7C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d4b94
	if (ctx.cr6.eq) goto loc_823D4B94;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_823D4B64:
	// add r26,r9,r5
	r26.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// lbz r26,1(r26)
	r26.u64 = REX_LOAD_U8(r26.u32 + 1);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// std r26,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, r26.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// blt cr6,0x823d4b64
	if (ctx.cr6.lt) goto loc_823D4B64;
loc_823D4B94:
	// subf r9,r11,r24
	ctx.r9.u64 = r24.u64 - ctx.r11.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r24,r9,-1
	r24.s64 = ctx.r9.s64 + -1;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
loc_823D4BA4:
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r27.s32, ctx.xer);
	// blt cr6,0x823d4ad0
	if (ctx.cr6.lt) goto loc_823D4AD0;
loc_823D4BAC:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// blt cr6,0x823d4ac0
	if (ctx.cr6.lt) goto loc_823D4AC0;
loc_823D4BBC:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// add r31,r28,r31
	r31.u64 = r28.u64 + r31.u64;
	// cmpw cr6,r30,r23
	ctx.cr6.compare<int32_t>(r30.s32, r23.s32, ctx.xer);
	// blt cr6,0x823d48f8
	if (ctx.cr6.lt) goto loc_823D48F8;
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,92(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_823D4BD4:
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// mullw. r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823d4c74
	if (ctx.cr0.eq) goto loc_823D4C74;
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// fdivs f31,f29,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f29.f64 / f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f30.f64 = double(temp.f32);
loc_823D4BF0:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r30,r11,-136
	r30.s64 = ctx.r11.s64 + -136;
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fadds f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 + f30.f64));
	// bl 0x822d7658
	ctx.lr = 0x823D4C14;
	sub_822D7658(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fadds f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 + f30.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// bl 0x822d7658
	ctx.lr = 0x823D4C30;
	sub_822D7658(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fadds f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 + f30.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// bl 0x822d7658
	ctx.lr = 0x823D4C4C;
	sub_822D7658(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// stfsu f29,16(r31)
	ea = 16 + r31.u32;
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ea, temp.u32);
	r31.u32 = ea;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823d4bf0
	if (ctx.cr6.lt) goto loc_823D4BF0;
loc_823D4C74:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823d4c94
	goto loc_823D4C94;
loc_823D4C7C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,4(r19)
	ctx.r3.u64 = REX_LOAD_U32(r19.u32 + 4);
	// bl 0x823cd250
	ctx.lr = 0x823D4C88;
	sub_823CD250(ctx, base);
	// stw r29,4(r19)
	REX_STORE_U32(r19.u32 + 4, r29.u32);
loc_823D4C8C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_823D4C94:
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
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

DEFINE_REX_FUNC(sub_823F03A8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,1376(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1376);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,1376(r3)
	REX_STORE_U32(ctx.r3.u32 + 1376, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F0498) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r11,9(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lbz r11,10(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 10);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mullw. r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
loc_823F04BC:
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stbu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x823f04bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F04BC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F2088) {
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
	// lwz r11,1500(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1500);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823f20b4
	if (!ctx.cr6.eq) goto loc_823F20B4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,15396
	ctx.r4.s64 = ctx.r11.s64 + 15396;
	// bl 0x823ec3e0
	ctx.lr = 0x823F20B4;
	sub_823EC3E0(ctx, base);
loc_823F20B4:
	// lwz r11,1376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1376);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f210c
	if (ctx.cr0.eq) goto loc_823F210C;
	// lbz r11,1528(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1528);
	// addi r3,r31,1520
	ctx.r3.s64 = r31.s64 + 1520;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x823f20ec
	if (!ctx.cr6.eq) goto loc_823F20EC;
	// lwz r11,1500(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1500);
	// lhz r7,1546(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 1546);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lwz r6,1628(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1628);
	// lwz r5,1540(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1540);
	// bl 0x823f1300
	ctx.lr = 0x823F20E8;
	sub_823F1300(ctx, base);
	// b 0x823f210c
	goto loc_823F210C;
loc_823F20EC:
	// lhz r11,1546(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 1546);
	// addi r5,r31,1632
	ctx.r5.s64 = r31.s64 + 1632;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,1500(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1500);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bne 0x823f2108
	if (!ctx.cr0.eq) goto loc_823F2108;
	// li r5,0
	ctx.r5.s64 = 0;
loc_823F2108:
	// bl 0x823f15a0
	ctx.lr = 0x823F210C;
	sub_823F15A0(ctx, base);
loc_823F210C:
	// lwz r11,1376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1376);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f2140
	if (ctx.cr0.eq) goto loc_823F2140;
	// lbz r11,1558(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1558);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x823f2140
	if (ctx.cr6.eq) goto loc_823F2140;
	// lwz r11,1500(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1500);
	// addi r3,r31,1520
	ctx.r3.s64 = r31.s64 + 1520;
	// lwz r7,1580(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1580);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lwz r6,1604(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1604);
	// lwz r5,1592(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1592);
	// bl 0x823f0e88
	ctx.lr = 0x823F2140;
	sub_823F0E88(ctx, base);
loc_823F2140:
	// lwz r11,1376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1376);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f215c
	if (ctx.cr0.eq) goto loc_823F215C;
	// lwz r11,1500(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1500);
	// addi r3,r31,1520
	ctx.r3.s64 = r31.s64 + 1520;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x823f0b68
	ctx.lr = 0x823F215C;
	sub_823F0B68(ctx, base);
loc_823F215C:
	// lwz r11,1376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1376);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f219c
	if (ctx.cr0.eq) goto loc_823F219C;
	// lwz r11,1500(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1500);
	// addi r3,r31,1520
	ctx.r3.s64 = r31.s64 + 1520;
	// lwz r6,1656(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1656);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lwz r5,1652(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1652);
	// bl 0x823f1a48
	ctx.lr = 0x823F2180;
	sub_823F1A48(ctx, base);
	// lwz r11,1524(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1524);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823f219c
	if (!ctx.cr6.eq) goto loc_823F219C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,15360
	ctx.r4.s64 = ctx.r11.s64 + 15360;
	// bl 0x823ec3e0
	ctx.lr = 0x823F219C;
	sub_823EC3E0(ctx, base);
loc_823F219C:
	// lwz r11,1376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1376);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f21bc
	if (ctx.cr0.eq) goto loc_823F21BC;
	// lwz r11,1500(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1500);
	// addi r5,r31,1621
	ctx.r5.s64 = r31.s64 + 1621;
	// addi r3,r31,1520
	ctx.r3.s64 = r31.s64 + 1520;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x823f0928
	ctx.lr = 0x823F21BC;
	sub_823F0928(ctx, base);
loc_823F21BC:
	// lwz r11,1376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1376);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f21d8
	if (ctx.cr0.eq) goto loc_823F21D8;
	// lwz r11,1500(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1500);
	// addi r3,r31,1520
	ctx.r3.s64 = r31.s64 + 1520;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x823f07b8
	ctx.lr = 0x823F21D8;
	sub_823F07B8(ctx, base);
loc_823F21D8:
	// lwz r11,1376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1376);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f21f4
	if (ctx.cr0.eq) goto loc_823F21F4;
	// lwz r11,1500(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1500);
	// addi r3,r31,1520
	ctx.r3.s64 = r31.s64 + 1520;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x823f04d8
	ctx.lr = 0x823F21F4;
	sub_823F04D8(ctx, base);
loc_823F21F4:
	// lwz r11,1376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1376);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f2218
	if (ctx.cr0.eq) goto loc_823F2218;
	// lwz r11,1500(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1500);
	// addi r3,r31,1520
	ctx.r3.s64 = r31.s64 + 1520;
	// lwz r6,1372(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1372);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lhz r5,1566(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 1566);
	// bl 0x823f0bc0
	ctx.lr = 0x823F2218;
	sub_823F0BC0(ctx, base);
loc_823F2218:
	// lwz r11,1376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1376);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f2234
	if (ctx.cr0.eq) goto loc_823F2234;
	// lwz r11,1500(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1500);
	// addi r3,r31,1520
	ctx.r3.s64 = r31.s64 + 1520;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x823f0498
	ctx.lr = 0x823F2234;
	sub_823F0498(ctx, base);
loc_823F2234:
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

DEFINE_REX_FUNC(sub_823F7E60) {
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
	// bl 0x822d4e6c
	ctx.lr = 0x823F7E68;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f8204
	if (ctx.cr6.eq) goto loc_823F8204;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f8204
	if (ctx.cr6.eq) goto loc_823F8204;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823f8204
	if (ctx.cr6.eq) goto loc_823F8204;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r30,-5
	r30.s64 = -5;
	// addic r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r7,13
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 13, ctx.xer);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r11,r30
	r29.u64 = ctx.r11.u64 & r30.u64;
	// bgt cr6,0x823f8204
	if (ctx.cr6.gt) goto loc_823F8204;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r28,13
	r28.s64 = 13;
	// li r27,5
	r27.s64 = 5;
	// li r22,0
	r22.s64 = 0;
	// li r21,12
	r21.s64 = 12;
	// addi r26,r11,14228
	r26.s64 = ctx.r11.s64 + 14228;
	// addi r25,r10,14204
	r25.s64 = ctx.r10.s64 + 14204;
	// addi r24,r9,14184
	r24.s64 = ctx.r9.s64 + 14184;
	// addi r23,r8,14156
	r23.s64 = ctx.r8.s64 + 14156;
loc_823F7EE0:
	// lis r12,-32247
	ctx.r12.s64 = -2113339392;
	// rlwinm r0,r7,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,2360
	ctx.r12.s64 = ctx.r12.s64 + 2360;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32193
	ctx.r12.s64 = -2109800448;
	// addi r12,r12,32520
	ctx.r12.s64 = ctx.r12.s64 + 32520;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r7.u32) {
	case 0:
		goto loc_823F7F08;
	case 1:
		goto loc_823F7F90;
	case 2:
		goto loc_823F8220;
	case 3:
		goto loc_823F8270;
	case 4:
		goto loc_823F82C8;
	case 5:
		goto loc_823F831C;
	case 6:
		goto loc_823F837C;
	case 7:
		goto loc_823F8008;
	case 8:
		goto loc_823F8088;
	case 9:
		goto loc_823F80D8;
	case 10:
		goto loc_823F8130;
	case 11:
		goto loc_823F8188;
	case 12:
		goto loc_823F83A0;
	case 13:
		goto loc_823F83A8;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823F7F08:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f8210
	if (ctx.cr6.eq) goto loc_823F8210;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r30,r29
	r30.u64 = r29.u64;
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lbz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// beq cr6,0x823f7f64
	if (ctx.cr6.eq) goto loc_823F7F64;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// stw r23,24(r31)
	REX_STORE_U32(r31.u32 + 24, r23.u32);
	// b 0x823f81ec
	goto loc_823F81EC;
loc_823F7F64:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x823f7f88
	if (!ctx.cr6.gt) goto loc_823F7F88;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// stw r24,24(r31)
	REX_STORE_U32(r31.u32 + 24, r24.u32);
	// b 0x823f81ec
	goto loc_823F81EC;
loc_823F7F88:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_823F7F90:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823f8210
	if (ctx.cr6.eq) goto loc_823F8210;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r8,31
	ctx.r8.s64 = 31;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// mr r30,r29
	r30.u64 = r29.u64;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r7,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// divwu r8,r9,r8
	ctx.r8.u64 = uint32_t(ctx.r8.u32 ? ctx.r9.u32 / ctx.r8.u32 : 0);
	// mulli r8,r8,31
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(31));
	// subf. r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x823f7ff4
	if (ctx.cr0.eq) goto loc_823F7FF4;
	// stw r28,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r28.u32);
	// stw r25,24(r31)
	REX_STORE_U32(r31.u32 + 24, r25.u32);
	// b 0x823f81ec
	goto loc_823F81EC;
loc_823F7FF4:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f8218
	if (!ctx.cr0.eq) goto loc_823F8218;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x823f81f4
	goto loc_823F81F4;
loc_823F8008:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82401558
	ctx.lr = 0x823F801C;
	sub_82401558(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -3, ctx.xer);
	// bne cr6,0x823f803c
	if (!ctx.cr6.eq) goto loc_823F803C;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r22,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r22.u32);
	// b 0x823f81f4
	goto loc_823F81F4;
loc_823F803C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x823f8048
	if (!ctx.cr6.eq) goto loc_823F8048;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_823F8048:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x823f8210
	if (!ctx.cr6.eq) goto loc_823F8210;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x824013a8
	ctx.lr = 0x823F8068;
	sub_824013A8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823f8080
	if (ctx.cr6.eq) goto loc_823F8080;
	// stw r21,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r21.u32);
	// b 0x823f81f4
	goto loc_823F81F4;
loc_823F8080:
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_823F8088:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f8210
	if (ctx.cr6.eq) goto loc_823F8210;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r8,9
	ctx.r8.s64 = 9;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// mr r30,r29
	r30.u64 = r29.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lbz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r11,r11,24
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 24);
	// stw r11,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_823F80D8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f8210
	if (ctx.cr6.eq) goto loc_823F8210;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r8,10
	ctx.r8.s64 = 10;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r30,r29
	r30.u64 = r29.u64;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lbz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_823F8130:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f8210
	if (ctx.cr6.eq) goto loc_823F8210;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r8,11
	ctx.r8.s64 = 11;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r30,r29
	r30.u64 = r29.u64;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lbz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_823F8188:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823f8210
	if (ctx.cr6.eq) goto loc_823F8210;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r30,r29
	r30.u64 = r29.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lbz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823f839c
	if (ctx.cr6.eq) goto loc_823F839C;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// stw r26,24(r31)
	REX_STORE_U32(r31.u32 + 24, r26.u32);
loc_823F81EC:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r27.u32);
loc_823F81F4:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,13
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 13, ctx.xer);
	// ble cr6,0x823f7ee0
	if (!ctx.cr6.gt) goto loc_823F7EE0;
loc_823F8204:
	// li r3,-2
	ctx.r3.s64 = -2;
loc_823F8208:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ebc
	return;
loc_823F8210:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x823f8208
	goto loc_823F8208;
loc_823F8218:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_823F8220:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f8210
	if (ctx.cr6.eq) goto loc_823F8210;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r30,r29
	r30.u64 = r29.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lbz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r11,r11,24
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 24);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_823F8270:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f8210
	if (ctx.cr6.eq) goto loc_823F8210;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r30,r29
	r30.u64 = r29.u64;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lbz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_823F82C8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f8210
	if (ctx.cr6.eq) goto loc_823F8210;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r30,r29
	r30.u64 = r29.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lbz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r27,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r27.u32);
loc_823F831C:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823f8210
	if (ctx.cr6.eq) goto loc_823F8210;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// b 0x823f8208
	goto loc_823F8208;
loc_823F837C:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r10,r10,14140
	ctx.r10.s64 = ctx.r10.s64 + 14140;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// stw r22,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r22.u32);
	// b 0x823f8204
	goto loc_823F8204;
loc_823F839C:
	// stw r21,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r21.u32);
loc_823F83A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823f8208
	goto loc_823F8208;
loc_823F83A8:
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x823f8208
	goto loc_823F8208;
}

DEFINE_REX_FUNC(sub_8240E558) {
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
	// bl 0x82412af0
	ctx.lr = 0x8240E574;
	sub_82412AF0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8240e5a0
	if (!ctx.cr0.eq) goto loc_8240E5A0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,28368
	ctx.r6.s64 = ctx.r11.s64 + 28368;
	// addi r5,r10,28352
	ctx.r5.s64 = ctx.r10.s64 + 28352;
	// addi r4,r9,16880
	ctx.r4.s64 = ctx.r9.s64 + 16880;
	// li r7,73
	ctx.r7.s64 = 73;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x8240E5A0;
	sub_8240E308(ctx, base);
loc_8240E5A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8240F8C8) {
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
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// lis r11,-32195
	ctx.r11.s64 = -2109931520;
	// lis r10,-32195
	ctx.r10.s64 = -2109931520;
	// lis r31,-32172
	r31.s64 = -2108424192;
	// addi r11,r11,30976
	ctx.r11.s64 = ctx.r11.s64 + 30976;
	// addi r10,r10,31224
	ctx.r10.s64 = ctx.r10.s64 + 31224;
	// stw r11,22596(r9)
	REX_STORE_U32(ctx.r9.u32 + 22596, ctx.r11.u32);
	// stw r10,22600(r31)
	REX_STORE_U32(r31.u32 + 22600, ctx.r10.u32);
	// bl 0x823d7900
	ctx.lr = 0x8240F8FC;
	sub_823D7900(ctx, base);
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

DEFINE_REX_FUNC(sub_8240FBE8) {
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
	ctx.lr = 0x8240FBF0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,104(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r9,104(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8240fd20
	if (!ctx.cr6.eq) goto loc_8240FD20;
	// lwz r8,108(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// lwz r7,108(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8240fd20
	if (!ctx.cr6.eq) goto loc_8240FD20;
	// lwz r10,112(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8240fd20
	if (!ctx.cr6.eq) goto loc_8240FD20;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// rlwinm r3,r9,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8240fc48
	if (!ctx.cr6.gt) goto loc_8240FC48;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8240FC48:
	// bl 0x822c80d0
	ctx.lr = 0x8240FC4C;
	sub_822C80D0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8240fd20
	if (ctx.cr6.eq) goto loc_8240FD20;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r27,0
	r27.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8240fc88
	if (ctx.cr6.eq) goto loc_8240FC88;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8240fc88
	if (ctx.cr6.eq) goto loc_8240FC88;
	// stw r27,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r27.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r27,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r27.u32);
loc_8240FC88:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r29,r27
	r29.u64 = r27.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8240fd10
	if (!ctx.cr6.gt) goto loc_8240FD10;
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
loc_8240FCA0:
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8240fd00
	if (ctx.cr6.eq) goto loc_8240FD00;
loc_8240FCAC:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240FCCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240FCEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8240fcac
	if (ctx.cr6.lt) goto loc_8240FCAC;
loc_8240FD00:
	// lwz r9,112(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8240fca0
	if (ctx.cr6.lt) goto loc_8240FCA0;
loc_8240FD10:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822c80a8
	ctx.lr = 0x8240FD18;
	sub_822C80A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8240fd28
	goto loc_8240FD28;
loc_8240FD20:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_8240FD28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82413DD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82413DD8;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// beq cr6,0x82413ee8
	if (ctx.cr6.eq) goto loc_82413EE8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82413e6c
	if (ctx.cr6.eq) goto loc_82413E6C;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82413e6c
	if (ctx.cr6.eq) goto loc_82413E6C;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82414104
	if (!ctx.cr6.gt) goto loc_82414104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r4,8
	ctx.r8.s64 = ctx.r4.s64 + 8;
loc_82413E10:
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r7,88(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r7
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, temp.u32);
	// lwz r7,88(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// lfs f0,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lwz r7,88(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// lfsx f0,r8,r11
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stfs f0,8(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lwz r7,88(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// lfs f0,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,104(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82413e10
	if (ctx.cr6.lt) goto loc_82413E10;
	// b 0x82414104
	goto loc_82414104;
loc_82413E6C:
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82414104
	if (!ctx.cr6.gt) goto loc_82414104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r4,8
	ctx.r8.s64 = ctx.r4.s64 + 8;
loc_82413E84:
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r7,88(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfsx f0,r11,r7
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, temp.u32);
	// lwz r7,88(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// lfs f0,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lwz r7,88(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// lfsx f0,r11,r8
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,8(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lwz r7,88(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// lfs f0,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r10,104(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82413e84
	if (ctx.cr6.lt) goto loc_82413E84;
	// b 0x82414104
	goto loc_82414104;
loc_82413EE8:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82413fbc
	if (ctx.cr6.eq) goto loc_82413FBC;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82413fbc
	if (ctx.cr6.eq) goto loc_82413FBC;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82414104
	if (!ctx.cr6.gt) goto loc_82414104;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r4,8
	ctx.r7.s64 = ctx.r4.s64 + 8;
	// addi r8,r10,-25976
	ctx.r8.s64 = ctx.r10.s64 + -25976;
	// lfs f0,-23528(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -23528);
	ctx.f0.f64 = double(temp.f32);
loc_82413F20:
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r6,88(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r5,r8,4
	ctx.r5.s64 = ctx.r8.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lfs f13,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r6,r11
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// lwz r6,88(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// lfs f13,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lwz r6,88(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// lfsx f13,r7,r11
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// stfs f13,8(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f12.u64);
	// lwz r6,-60(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// std r6,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.r6.u64);
	// lfd f12,-56(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfsx f11,r6,r8
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r6,r5
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmadds f13,f10,f13,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f11.f64)));
	// stfs f13,12(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r10,104(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82413f20
	if (ctx.cr6.lt) goto loc_82413F20;
	// b 0x82414104
	goto loc_82414104;
loc_82413FBC:
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82414104
	if (!ctx.cr6.gt) goto loc_82414104;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r4,8
	ctx.r7.s64 = ctx.r4.s64 + 8;
	// addi r10,r10,-25976
	ctx.r10.s64 = ctx.r10.s64 + -25976;
	// lfs f0,-23528(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -23528);
	ctx.f0.f64 = double(temp.f32);
loc_82413FE4:
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r6,88(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// addi r31,r10,4
	r31.s64 = ctx.r10.s64 + 4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lfs f13,-8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f12.u64);
	// lwz r30,-52(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// mr r29,r30
	r29.u64 = r30.u64;
	// std r30,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, r30.u64);
	// lfd f10,-64(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// lfsx f11,r30,r5
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f12,r30,r10
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fmadds f13,f11,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f12.f64)));
	// stfsx f13,r6,r11
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// lwz r6,88(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lfs f13,-4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f12.u64);
	// lwz r5,-52(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// std r5,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.r5.u64);
	// lfd f12,-48(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r5,r10
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r5,r4
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmadds f13,f10,f13,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f11.f64)));
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfsx f13,r7,r11
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lwz r6,88(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f12.u64);
	// lwz r5,-52(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// std r5,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r5.u64);
	// lfd f12,-40(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lfsx f11,r5,r10
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r5,r31
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + r31.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmadds f13,f10,f13,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f11.f64)));
	// stfs f13,8(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lfs f13,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,88(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// add r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 + ctx.r11.u64;
	// stfs f13,12(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lwz r9,104(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82413fe4
	if (ctx.cr6.lt) goto loc_82413FE4;
loc_82414104:
	// lwz r3,88(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8241F610) {
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
	ctx.lr = 0x8241F618;
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
	// bne cr6,0x8241f658
	if (!ctx.cr6.eq) goto loc_8241F658;
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
	// li r7,1676
	ctx.r7.s64 = 1676;
	// bl 0x8240e308
	ctx.lr = 0x8241F658;
	sub_8240E308(ctx, base);
loc_8241F658:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8240e880
	ctx.lr = 0x8241F668;
	sub_8240E880(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8241f6d0
	if (!ctx.cr6.eq) goto loc_8241F6D0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8241f68c
	if (ctx.cr6.eq) goto loc_8241F68C;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8240e930
	ctx.lr = 0x8241F68C;
	sub_8240E930(ctx, base);
loc_8241F68C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8241f6c8
	if (ctx.cr6.eq) goto loc_8241F6C8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8241f6c8
	if (ctx.cr6.eq) goto loc_8241F6C8;
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
	// li r6,33
	ctx.r6.s64 = 33;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,132(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// bctrl 
	ctx.lr = 0x8241F6C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8241F6C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8241f72c
	goto loc_8241F72C;
loc_8241F6D0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8241f6ec
	if (ctx.cr6.eq) goto loc_8241F6EC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8240e930
	ctx.lr = 0x8241F6EC;
	sub_8240E930(ctx, base);
loc_8241F6EC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8241f728
	if (ctx.cr6.eq) goto loc_8241F728;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8241f728
	if (ctx.cr6.eq) goto loc_8241F728;
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
	// li r6,33
	ctx.r6.s64 = 33;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,132(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// bctrl 
	ctx.lr = 0x8241F728;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8241F728:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241F72C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82421810) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-28240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -28240);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82421968) {
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
	ctx.lr = 0x82421970;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824219b0
	if (!ctx.cr6.eq) goto loc_824219B0;
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
	// li r7,4133
	ctx.r7.s64 = 4133;
	// bl 0x8240e308
	ctx.lr = 0x824219B0;
	sub_8240E308(ctx, base);
loc_824219B0:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240e880
	ctx.lr = 0x824219C0;
	sub_8240E880(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// stfs f1,0(r28)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// beq cr6,0x82421a18
	if (ctx.cr6.eq) goto loc_82421A18;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82421a18
	if (ctx.cr6.eq) goto loc_82421A18;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8241e418
	ctx.lr = 0x824219F0;
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
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,54
	ctx.r6.s64 = 54;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,216(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// bctrl 
	ctx.lr = 0x82421A18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82421A18:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82426A58) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82426A60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82426A68;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82426a94
	if (!ctx.cr6.gt) goto loc_82426A94;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x82426a94
	goto loc_82426A94;
loc_82426A8C:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82426A94:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82426a8c
	if (!ctx.cr6.lt) goto loc_82426A8C;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,8(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x82412d18
	ctx.lr = 0x82426AB0;
	sub_82412D18(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d4fa0
	ctx.lr = 0x82426AC4;
	sub_822D4FA0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x82412de0
	ctx.lr = 0x82426AD0;
	sub_82412DE0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82428770) {
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
	ctx.lr = 0x82428778;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-4200
	ctx.r9.s64 = ctx.r10.s64 + -4200;
	// li r31,-1
	r31.s64 = -1;
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// li r4,48
	ctx.r4.s64 = 48;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r7,12
	ctx.r7.s64 = 12;
	// stw r31,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r31.u32);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// stw r4,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r4.u32);
	// addi r6,r3,152
	ctx.r6.s64 = ctx.r3.s64 + 152;
	// lwz r10,-8(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + -8);
	// addi r5,r3,158
	ctx.r5.s64 = ctx.r3.s64 + 158;
	// stw r10,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,-16(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + -16);
	// stw r8,944(r3)
	REX_STORE_U32(ctx.r3.u32 + 944, ctx.r8.u32);
	// lis r8,-32171
	ctx.r8.s64 = -2108358656;
	// lwz r28,4(r9)
	r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addi r30,r8,13408
	r30.s64 = ctx.r8.s64 + 13408;
	// lwz r29,0(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stb r11,152(r3)
	REX_STORE_U8(ctx.r3.u32 + 152, ctx.r11.u8);
	// stb r11,158(r3)
	REX_STORE_U8(ctx.r3.u32 + 158, ctx.r11.u8);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stwbrx r11,r3,r7
	REX_STORE_U32(ctx.r3.u32 + ctx.r7.u32, __builtin_bswap32(ctx.r11.u32));
	// stw r11,200(r3)
	REX_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
loc_824287E8:
	// addi r8,r10,14
	ctx.r8.s64 = ctx.r10.s64 + 14;
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// rlwinm r27,r8,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,32
	ctx.r8.s64 = ctx.r10.s64 + 32;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r27,r3
	REX_STORE_U32(r27.u32 + ctx.r3.u32, r31.u32);
	// stwx r4,r7,r3
	REX_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r4.u32);
	// lwz r7,-16(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + -16);
	// stwx r7,r8,r3
	REX_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r7.u32);
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mulli r7,r7,52
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(52));
	// lwzx r7,r7,r30
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + r30.u32);
	// rlwinm. r7,r7,30,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82428838
	if (ctx.cr0.eq) goto loc_82428838;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82428834
	if (!ctx.cr6.eq) goto loc_82428834;
	// stw r28,132(r3)
	REX_STORE_U32(ctx.r3.u32 + 132, r28.u32);
	// b 0x82428838
	goto loc_82428838;
loc_82428834:
	// stwx r29,r8,r3
	REX_STORE_U32(ctx.r8.u32 + ctx.r3.u32, r29.u32);
loc_82428838:
	// addi r8,r10,7
	ctx.r8.s64 = ctx.r10.s64 + 7;
	// stbx r11,r6,r10
	REX_STORE_U8(ctx.r6.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r7,r10,50
	ctx.r7.s64 = ctx.r10.s64 + 50;
	// stbx r11,r5,r10
	REX_STORE_U8(ctx.r5.u32 + ctx.r10.u32, ctx.r11.u8);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// stwx r11,r8,r3
	REX_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r11.u32);
	// stwx r11,r7,r3
	REX_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r11.u32);
	// blt cr6,0x824287e8
	if (ctx.cr6.lt) goto loc_824287E8;
	// li r10,91
	ctx.r10.s64 = 91;
	// stb r11,164(r3)
	REX_STORE_U8(ctx.r3.u32 + 164, ctx.r11.u8);
	// addi r7,r3,141
	ctx.r7.s64 = ctx.r3.s64 + 141;
loc_82428870:
	// li r8,4
	ctx.r8.s64 = 4;
	// stwx r11,r7,r10
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r11.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82428880:
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r6,r8,r3
	REX_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r6.u32);
	// bdnz 0x82428880
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82428880;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r10,219
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 219, ctx.xer);
	// blt cr6,0x82428870
	if (ctx.cr6.lt) goto loc_82428870;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r9,r3,924
	ctx.r9.s64 = ctx.r3.s64 + 924;
	// addi r10,r3,892
	ctx.r10.s64 = ctx.r3.s64 + 892;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_824288B4:
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stwu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x824288b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824288B4;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8242D6F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8242D6F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r30,r3,44
	r30.s64 = ctx.r3.s64 + 44;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242D71C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242ce40
	ctx.lr = 0x8242D728;
	sub_8242CE40(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 180);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242D740;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242D758;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82443000
	ctx.lr = 0x8242D760;
	sub_82443000(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8242F460) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8242F468;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,7712
	r30.s64 = ctx.r11.s64 + 7712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8242c298
	ctx.lr = 0x8242F480;
	sub_8242C298(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8242f494
	if (!ctx.cr6.eq) goto loc_8242F494;
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16387
	r31.u64 = r31.u64 | 16387;
	// b 0x8242f4d0
	goto loc_8242F4D0;
loc_8242F494:
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,10
	ctx.r5.u64 = ctx.r5.u64 | 10;
	// li r4,60
	ctx.r4.s64 = 60;
	// bl 0x8242c3b0
	ctx.lr = 0x8242F4AC;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8242f4bc
	if (ctx.cr0.eq) goto loc_8242F4BC;
	// bl 0x82440178
	ctx.lr = 0x8242F4B8;
	sub_82440178(ctx, base);
	// b 0x8242f4c0
	goto loc_8242F4C0;
loc_8242F4BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8242F4C0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242f4e4
	if (ctx.cr6.eq) goto loc_8242F4E4;
	// li r31,0
	r31.s64 = 0;
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
loc_8242F4D0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8242c330
	ctx.lr = 0x8242F4D8;
	sub_8242C330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
loc_8242F4E4:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x8242f4d0
	goto loc_8242F4D0;
}

DEFINE_REX_FUNC(sub_82434AC8) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82434AF8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82434D68) {
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
	ctx.lr = 0x82434D70;
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r29,r3,8
	r29.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82434DA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,0
	r30.s64 = 0;
	// lfs f30,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(f31.f64, f30.f64);
	// beq cr6,0x82434df4
	if (ctx.cr6.eq) goto loc_82434DF4;
	// stfs f31,116(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 116, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lwz r5,120(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 120);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82434dd0
	if (ctx.cr6.eq) goto loc_82434DD0;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82434dd4
	goto loc_82434DD4;
loc_82434DD0:
	// lwz r4,100(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
loc_82434DD4:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82434DE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x82434df4
	if (!ctx.cr0.lt) goto loc_82434DF4;
	// stfs f30,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 116, temp.u32);
loc_82434DF4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82434E08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82435E58) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8243b510
	sub_8243B510(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82435EF8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82434d68
	sub_82434D68(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82436A00) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82436A08;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82436A2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r29,0
	r29.s64 = 0;
	// bl 0x82435b40
	ctx.lr = 0x82436A38;
	sub_82435B40(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// rlwinm r11,r11,28,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82436ac8
	if (ctx.cr6.eq) goto loc_82436AC8;
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// beq cr6,0x82436a60
	if (ctx.cr6.eq) goto loc_82436A60;
	// bl 0x8242cc00
	ctx.lr = 0x82436A5C;
	sub_8242CC00(ctx, base);
	// b 0x82436a64
	goto loc_82436A64;
loc_82436A60:
	// bl 0x8242ccb0
	ctx.lr = 0x82436A64;
	sub_8242CCB0(ctx, base);
loc_82436A64:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82436A80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lwz r5,120(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82436a9c
	if (ctx.cr6.eq) goto loc_82436A9C;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82436aa0
	goto loc_82436AA0;
loc_82436A9C:
	// lwz r4,100(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
loc_82436AA0:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82436AB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82436AC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82436AC8:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82436AE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82438E10) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82438E98) {
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
	// bl 0x824386d0
	ctx.lr = 0x82438EB8;
	sub_824386D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82438efc
	if (ctx.cr0.eq) goto loc_82438EFC;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82438ee8
	if (ctx.cr6.eq) goto loc_82438EE8;
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// b 0x82438eec
	goto loc_82438EEC;
loc_82438EE8:
	// stw r3,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r3.u32);
loc_82438EEC:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// stw r3,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
loc_82438EFC:
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

DEFINE_REX_FUNC(sub_8243A468) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r9,2(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x8243a48c
	if (ctx.cr6.eq) goto loc_8243A48C;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
loc_8243A48C:
	// lhz r9,14(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// lhz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r8,r8,-32
	ctx.r8.s64 = ctx.r8.s64 + -32;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// subfe r9,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lhz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// beq cr6,0x8243a4d0
	if (ctx.cr6.eq) goto loc_8243A4D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8243a52c
	goto loc_8243A52C;
loc_8243A4D0:
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r8,r8,10688
	ctx.r8.s64 = ctx.r8.s64 + 10688;
loc_8243A4E8:
	// addi r6,r8,16
	ctx.r6.s64 = ctx.r8.s64 + 16;
	// lhzx r5,r9,r8
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// lhz r7,-2(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// lhz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// subf r7,r7,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r7.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lhzx r6,r9,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r6.u32);
	// addic r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// subf r6,r4,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r4.u64;
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// and r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 & ctx.r3.u64;
	// subfe r6,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 & ctx.r7.u64;
	// bdnz 0x8243a4e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243A4E8;
loc_8243A52C:
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// mulli r8,r10,7
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(7));
	// lhz r7,18(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// subf r11,r8,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r8.u64;
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r11,r10,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r10,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r7.u64;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8243FE20) {
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
	// li r31,0
	r31.s64 = 0;
	// addi r10,r11,11036
	ctx.r10.s64 = ctx.r11.s64 + 11036;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
loc_8243FE44:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8243fe64
	if (!ctx.cr0.eq) goto loc_8243FE64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8243fe44
	if (!ctx.cr6.eq) goto loc_8243FE44;
loc_8243FE64:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8243fe94
	if (!ctx.cr0.eq) goto loc_8243FE94;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// bne cr6,0x8243fe7c
	if (!ctx.cr6.eq) goto loc_8243FE7C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8243FE7C:
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243FE90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8243fe9c
	goto loc_8243FE9C;
loc_8243FE94:
	// bl 0x8223c758
	ctx.lr = 0x8243FE98;
	sub_8223C758(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8243FE9C:
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

DEFINE_REX_FUNC(sub_82441B60) {
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
	ctx.lr = 0x82441B68;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r29,r3,28
	r29.s64 = ctx.r3.s64 + 28;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82441B94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r5,384(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 384);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8245dcc8
	ctx.lr = 0x82441BAC;
	sub_8245DCC8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82441bd4
	if (ctx.cr0.lt) goto loc_82441BD4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,72(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82441598
	ctx.lr = 0x82441BC4;
	sub_82441598(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82441bd4
	if (ctx.cr0.lt) goto loc_82441BD4;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// bl 0x82441268
	ctx.lr = 0x82441BD4;
	sub_82441268(ctx, base);
loc_82441BD4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82441BE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82443090) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x822d4fa0
	ctx.lr = 0x824430B8;
	sub_822D4FA0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824430EC;
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

DEFINE_REX_FUNC(sub_82444D90) {
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
	ctx.lr = 0x82444D98;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r4.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r4,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r4.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82444DC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82444fe0
	if (ctx.cr0.lt) goto loc_82444FE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824447b8
	ctx.lr = 0x82444DD8;
	sub_824447B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82444fe0
	if (ctx.cr0.lt) goto loc_82444FE0;
	// rlwinm. r11,r29,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82444e60
	if (ctx.cr0.eq) goto loc_82444E60;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8242f340
	ctx.lr = 0x82444DF8;
	sub_8242F340(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82444fe0
	if (ctx.cr0.lt) goto loc_82444FE0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// addi r30,r31,172
	r30.s64 = r31.s64 + 172;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r29,4(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mr r26,r29
	r26.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82444E24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r8,32
	ctx.r8.s64 = 32;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// bl 0x82443700
	ctx.lr = 0x82444E44;
	sub_82443700(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82444E60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82444E60:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82444fe0
	if (ctx.cr6.lt) goto loc_82444FE0;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// addi r29,r11,7712
	r29.s64 = ctx.r11.s64 + 7712;
	// beq cr6,0x82444ec0
	if (ctx.cr6.eq) goto loc_82444EC0;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,4
	ctx.r5.u64 = ctx.r5.u64 | 4;
	// li r4,60
	ctx.r4.s64 = 60;
	// bl 0x8242c3b0
	ctx.lr = 0x82444E90;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82444ea4
	if (ctx.cr0.eq) goto loc_82444EA4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82442bb8
	ctx.lr = 0x82444EA0;
	sub_82442BB8(ctx, base);
	// b 0x82444ea8
	goto loc_82444EA8;
loc_82444EA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82444EA8:
	// stw r3,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82444f18
	if (ctx.cr6.eq) goto loc_82444F18;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82442cb0
	ctx.lr = 0x82444EBC;
	sub_82442CB0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82444EC0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82444fe0
	if (ctx.cr6.lt) goto loc_82444FE0;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82444edc
	if (ctx.cr6.eq) goto loc_82444EDC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82444ee0
	goto loc_82444EE0;
loc_82444EDC:
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
loc_82444EE0:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82444ef8
	if (!ctx.cr6.gt) goto loc_82444EF8;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_82444EF8:
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// bl 0x8242c3b0
	ctx.lr = 0x82444F0C;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r3.u32);
	// bne 0x82444f24
	if (!ctx.cr0.eq) goto loc_82444F24;
loc_82444F18:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x82444fe0
	goto loc_82444FE0;
loc_82444F24:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
loc_82444F34:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82444f48
	if (ctx.cr6.eq) goto loc_82444F48;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82444f4c
	goto loc_82444F4C;
loc_82444F48:
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
loc_82444F4C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82444f68
	if (!ctx.cr6.lt) goto loc_82444F68;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x82444f34
	goto loc_82444F34;
loc_82444F68:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82444fac
	if (ctx.cr6.eq) goto loc_82444FAC;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82444f84
	if (!ctx.cr6.eq) goto loc_82444F84;
	// lwz r4,104(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 104);
	// b 0x82444f90
	goto loc_82444F90;
loc_82444F84:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,108(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
loc_82444F90:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82444FA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82444fe0
	if (ctx.cr0.lt) goto loc_82444FE0;
loc_82444FAC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82444FC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82444fe0
	if (ctx.cr0.lt) goto loc_82444FE0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82444fe0
	if (ctx.cr6.eq) goto loc_82444FE0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82444aa8
	ctx.lr = 0x82444FDC;
	sub_82444AA8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82444FE0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_824537A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f12,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lfs f0,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f0,f10,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// blt cr6,0x82453878
	if (ctx.cr6.lt) goto loc_82453878;
	// addi r10,r5,-3
	ctx.r10.s64 = ctx.r5.s64 + -3;
loc_824537D4:
	// lfs f11,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f5,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lfs f4,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f2,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmadds f12,f9,f13,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f10.f64)));
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fmadds f10,f13,f5,f8
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f5.f64, ctx.f8.f64)));
	// stfs f10,20(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f10,4(r4)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmadds f8,f12,f13,f6
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f6.f64)));
	// stfs f8,16(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// fmadds f4,f8,f13,f3
	ctx.f4.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f3.f64)));
	// stfs f4,16(r3)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fmadds f6,f13,f10,f9
	ctx.f6.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f9.f64)));
	// stfs f6,20(r3)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f6,8(r4)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// fmuls f12,f4,f0
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmadds f11,f4,f13,f1
	ctx.f11.f64 = double(float(std::fma(ctx.f4.f64, ctx.f13.f64, ctx.f1.f64)));
	// stfs f11,16(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fmadds f2,f13,f6,f5
	ctx.f2.f64 = double(float(std::fma(ctx.f13.f64, ctx.f6.f64, ctx.f5.f64)));
	// stfs f2,20(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f2,12(r4)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// fmadds f12,f13,f2,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, ctx.f2.f64, ctx.f12.f64)));
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// ble cr6,0x824537d4
	if (!ctx.cr6.gt) goto loc_824537D4;
loc_82453878:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// subf r11,r11,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r11.u64;
	// lfs f13,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82453894:
	// lfs f11,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// stfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmadds f12,f13,f7,f9
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, ctx.f9.f64)));
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fmadds f6,f13,f11,f8
	ctx.f6.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f8.f64)));
	// stfs f6,16(r3)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// bdnz 0x82453894
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82453894;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8245C6A8) {
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
	ctx.lr = 0x8245C6B0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r3,40
	r30.s64 = ctx.r3.s64 + 40;
	// li r29,13
	r29.s64 = 13;
loc_8245C6C0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245c6f4
	if (ctx.cr6.eq) goto loc_8245C6F4;
	// addi r28,r30,-40
	r28.s64 = r30.s64 + -40;
loc_8245C6D0:
	// addi r3,r28,8
	ctx.r3.s64 = r28.s64 + 8;
	// bl 0x824344e8
	ctx.lr = 0x8245C6D8;
	sub_824344E8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x82473028
	ctx.lr = 0x8245C6E0;
	sub_82473028(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82473600
	ctx.lr = 0x8245C6E8;
	sub_82473600(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8245c6d0
	if (!ctx.cr6.eq) goto loc_8245C6D0;
loc_8245C6F4:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// bne 0x8245c6c0
	if (!ctx.cr0.eq) goto loc_8245C6C0;
	// lwz r3,532(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 532);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8245c718
	if (ctx.cr6.eq) goto loc_8245C718;
	// bl 0x82473600
	ctx.lr = 0x8245C714;
	sub_82473600(ctx, base);
	// stw r30,532(r31)
	REX_STORE_U32(r31.u32 + 532, r30.u32);
loc_8245C718:
	// lwz r3,544(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 544);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8245c72c
	if (ctx.cr6.eq) goto loc_8245C72C;
	// bl 0x82473600
	ctx.lr = 0x8245C728;
	sub_82473600(ctx, base);
	// stw r30,544(r31)
	REX_STORE_U32(r31.u32 + 544, r30.u32);
loc_8245C72C:
	// addi r31,r31,528
	r31.s64 = r31.s64 + 528;
	// li r30,12
	r30.s64 = 12;
loc_8245C734:
	// addi r31,r31,-40
	r31.s64 = r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242d868
	ctx.lr = 0x8245C740;
	sub_8242D868(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x8245c734
	if (!ctx.cr0.lt) goto loc_8245C734;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8245DCC8) {
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
	ctx.lr = 0x8245DCD0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,156(r3)
	REX_STORE_U32(ctx.r3.u32 + 156, ctx.r5.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,128(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 128);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lwz r26,164(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245DD00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// li r29,0
	r29.s64 = 0;
	// beq 0x8245dd28
	if (ctx.cr0.eq) goto loc_8245DD28;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8245dd28
	if (ctx.cr6.eq) goto loc_8245DD28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245d218
	ctx.lr = 0x8245DD1C;
	sub_8245D218(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r11.u32);
	// b 0x8245dd2c
	goto loc_8245DD2C;
loc_8245DD28:
	// stw r29,160(r31)
	REX_STORE_U32(r31.u32 + 160, r29.u32);
loc_8245DD2C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r11.u32);
	// stw r11,640(r31)
	REX_STORE_U32(r31.u32 + 640, ctx.r11.u32);
	// mftb r11
	ctx.r11.u64 = REX_QUERY_TIMEBASE();
	// li r5,80
	ctx.r5.s64 = 80;
	// std r11,744(r31)
	REX_STORE_U64(r31.u32 + 744, ctx.r11.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,752(r31)
	REX_STORE_U64(r31.u32 + 752, ctx.r11.u64);
	// addi r3,r31,648
	ctx.r3.s64 = r31.s64 + 648;
	// bl 0x822d5870
	ctx.lr = 0x8245DD54;
	sub_822D5870(ctx, base);
	// stw r29,736(r31)
	REX_STORE_U32(r31.u32 + 736, r29.u32);
	// stw r29,636(r31)
	REX_STORE_U32(r31.u32 + 636, r29.u32);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// stw r29,628(r31)
	REX_STORE_U32(r31.u32 + 628, r29.u32);
	// ble cr6,0x8245ddb4
	if (!ctx.cr6.gt) goto loc_8245DDB4;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r30,-1
	ctx.r5.s64 = r30.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823ce370
	ctx.lr = 0x8245DD7C;
	sub_823CE370(ctx, base);
	// stw r3,608(r31)
	REX_STORE_U32(r31.u32 + 608, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8245dda8
	if (ctx.cr0.eq) goto loc_8245DDA8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822095c0
	ctx.lr = 0x8245DD9C;
	sub_822095C0(ctx, base);
	// stw r3,612(r31)
	REX_STORE_U32(r31.u32 + 612, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8245ddb4
	if (!ctx.cr0.eq) goto loc_8245DDB4;
loc_8245DDA8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8245ddd0
	goto loc_8245DDD0;
loc_8245DDB4:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245d620
	ctx.lr = 0x8245DDC8;
	sub_8245D620(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8245ddd4
	if (!ctx.cr0.lt) goto loc_8245DDD4;
loc_8245DDD0:
	// stw r26,164(r31)
	REX_STORE_U32(r31.u32 + 164, r26.u32);
loc_8245DDD4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8245FBC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8245FBC8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8245fbfc
	goto loc_8245FBFC;
loc_8245FBDC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x8245fc34
	if (ctx.cr6.lt) goto loc_8245FC34;
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8245fad8
	ctx.lr = 0x8245FBF4;
	sub_8245FAD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8245fc04
	if (ctx.cr0.eq) goto loc_8245FC04;
loc_8245FBFC:
	// li r31,0
	r31.s64 = 0;
	// b 0x8245fc20
	goto loc_8245FC20;
loc_8245FC04:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x8245fc20
	if (ctx.cr6.eq) goto loc_8245FC20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82473600
	ctx.lr = 0x8245FC20;
	sub_82473600(ctx, base);
loc_8245FC20:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8242bbb8
	ctx.lr = 0x8245FC2C;
	sub_8242BBB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8245fbdc
	if (!ctx.cr0.eq) goto loc_8245FBDC;
loc_8245FC34:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_824607D0) {
	REX_FUNC_PROLOGUE();
	// li r3,256
	ctx.r3.s64 = 256;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824609E0) {
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
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// bl 0x82460620
	ctx.lr = 0x824609F4;
	sub_82460620(ctx, base);
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

DEFINE_REX_FUNC(sub_82461C08) {
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
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82461c2c
	if (!ctx.cr6.gt) goto loc_82461C2C;
	// bl 0x823177f8
	ctx.lr = 0x82461C2C;
	sub_823177F8(ctx, base);
loc_82461C2C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82464510
	ctx.lr = 0x82461C34;
	sub_82464510(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82464a70
	ctx.lr = 0x82461C3C;
	sub_82464A70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82461c4c
	if (ctx.cr6.lt) goto loc_82461C4C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824763f8
	ctx.lr = 0x82461C4C;
	sub_824763F8(ctx, base);
loc_82461C4C:
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

DEFINE_REX_FUNC(sub_82463940) {
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
	ctx.lr = 0x82463948;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8247a080
	ctx.lr = 0x82463954;
	sub_8247A080(ctx, base);
	// addi r30,r31,24
	r30.s64 = r31.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8247a4b0
	ctx.lr = 0x82463960;
	sub_8247A4B0(ctx, base);
	// addi r29,r31,44
	r29.s64 = r31.s64 + 44;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8247a4b0
	ctx.lr = 0x8246396C;
	sub_8247A4B0(ctx, base);
	// addi r28,r31,64
	r28.s64 = r31.s64 + 64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8247a4b0
	ctx.lr = 0x82463978;
	sub_8247A4B0(ctx, base);
	// addi r27,r31,84
	r27.s64 = r31.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8247a4b0
	ctx.lr = 0x82463984;
	sub_8247A4B0(ctx, base);
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8246399c
	if (ctx.cr6.eq) goto loc_8246399C;
	// bl 0x82460ee8
	ctx.lr = 0x82463998;
	sub_82460EE8(ctx, base);
	// stw r26,148(r31)
	REX_STORE_U32(r31.u32 + 148, r26.u32);
loc_8246399C:
	// lwz r3,160(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824639b0
	if (ctx.cr6.eq) goto loc_824639B0;
	// bl 0x82460ee8
	ctx.lr = 0x824639AC;
	sub_82460EE8(ctx, base);
	// stw r26,160(r31)
	REX_STORE_U32(r31.u32 + 160, r26.u32);
loc_824639B0:
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5870
	ctx.lr = 0x824639C0;
	sub_822D5870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8247a060
	ctx.lr = 0x824639C8;
	sub_8247A060(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823dafc8
	ctx.lr = 0x824639D0;
	sub_823DAFC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823dafc8
	ctx.lr = 0x824639D8;
	sub_823DAFC8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823dafc8
	ctx.lr = 0x824639E0;
	sub_823DAFC8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823dafc8
	ctx.lr = 0x824639E8;
	sub_823DAFC8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82465B08) {
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
	ctx.lr = 0x82465B10;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,0(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r20,0
	r20.s64 = 0;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// stw r3,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// mr r16,r4
	r16.u64 = ctx.r4.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mr r15,r20
	r15.u64 = r20.u64;
	// lhz r29,34(r25)
	r29.u64 = REX_LOAD_U16(r25.u32 + 34);
	// mr r14,r20
	r14.u64 = r20.u64;
	// lwz r26,256(r25)
	r26.u64 = REX_LOAD_U32(r25.u32 + 256);
	// lwz r11,228(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 228);
	// mullw r23,r26,r29
	r23.s64 = int64_t(r26.s32) * int64_t(r29.s32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82465bb4
	if (!ctx.cr6.eq) goto loc_82465BB4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x82465ba8
	if (!ctx.cr6.gt) goto loc_82465BA8;
	// mulli r8,r4,28
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(28));
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// li r17,1
	r17.s64 = 1;
loc_82465B60:
	// lwz r10,320(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 320);
	// mulli r9,r11,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// lwz r7,256(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 256);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// lwz r10,424(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 424);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// sth r4,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r4.u16);
	// lwz r7,12(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// sth r20,0(r7)
	REX_STORE_U16(ctx.r7.u32 + 0, r20.u16);
	// sth r17,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, r17.u16);
	// lhz r6,34(r25)
	ctx.r6.u64 = REX_LOAD_U16(r25.u32 + 34);
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82465b60
	if (ctx.cr6.lt) goto loc_82465B60;
loc_82465BA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4ea0
	return;
loc_82465BB4:
	// lwz r10,176(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 176);
	// li r17,1
	r17.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82465c48
	if (!ctx.cr6.eq) goto loc_82465C48;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82465bdc
	if (!ctx.cr6.eq) goto loc_82465BDC;
	// mr r15,r17
	r15.u64 = r17.u64;
	// mr r14,r17
	r14.u64 = r17.u64;
	// add r18,r17,r17
	r18.u64 = r17.u64 + r17.u64;
	// b 0x82465c6c
	goto loc_82465C6C;
loc_82465BDC:
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x82465bf4
	if (!ctx.cr6.eq) goto loc_82465BF4;
	// li r14,2
	r14.s64 = 2;
	// mr r15,r17
	r15.u64 = r17.u64;
	// add r18,r14,r17
	r18.u64 = r14.u64 + r17.u64;
	// b 0x82465c6c
	goto loc_82465C6C;
loc_82465BF4:
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82465c10
	if (!ctx.cr6.gt) goto loc_82465C10;
loc_82465C00:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x82465c00
	if (ctx.cr6.gt) goto loc_82465C00;
loc_82465C10:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82465c38
	if (!ctx.cr6.gt) goto loc_82465C38;
loc_82465C28:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x82465c28
	if (ctx.cr6.gt) goto loc_82465C28;
loc_82465C38:
	// addi r14,r11,1
	r14.s64 = ctx.r11.s64 + 1;
	// mr r15,r20
	r15.u64 = r20.u64;
	// add r18,r14,r20
	r18.u64 = r14.u64 + r20.u64;
	// b 0x82465c6c
	goto loc_82465C6C;
loc_82465C48:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82465c68
	if (!ctx.cr6.gt) goto loc_82465C68;
loc_82465C58:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x82465c58
	if (ctx.cr6.gt) goto loc_82465C58;
loc_82465C68:
	// addi r18,r11,1
	r18.s64 = ctx.r11.s64 + 1;
loc_82465C6C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x82465d1c
	if (!ctx.cr6.gt) goto loc_82465D1C;
	// lwz r28,320(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + 320);
	// mulli r27,r16,28
	r27.s64 = static_cast<int64_t>(r16.u64 * static_cast<uint64_t>(28));
	// mr r30,r20
	r30.u64 = r20.u64;
loc_82465C80:
	// mulli r11,r30,1776
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(1776));
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// lwz r11,424(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// add r31,r11,r27
	r31.u64 = ctx.r11.u64 + r27.u64;
	// lhzx r7,r11,r27
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + r27.u32);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// blt cr6,0x82465ce4
	if (ctx.cr6.lt) goto loc_82465CE4;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r5,r4,-1
	ctx.r5.s64 = ctx.r4.s64 + -1;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_82465CB8:
	// add r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lhzx r24,r7,r11
	r24.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// extsh r24,r24
	r24.s64 = r24.s16;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// subf r9,r24,r9
	ctx.r9.u64 = ctx.r9.u64 - r24.u64;
	// lhz r6,2(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// subf r8,r6,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r6.u64;
	// blt cr6,0x82465cb8
	if (ctx.cr6.lt) goto loc_82465CB8;
loc_82465CE4:
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x82465d00
	if (!ctx.cr6.lt) goto loc_82465D00;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// subf r23,r6,r23
	r23.u64 = r23.u64 - ctx.r6.u64;
loc_82465D00:
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// add r23,r11,r23
	r23.u64 = ctx.r11.u64 + r23.u64;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r29.s32, ctx.xer);
	// blt cr6,0x82465c80
	if (ctx.cr6.lt) goto loc_82465C80;
loc_82465D1C:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x824660bc
	if (!ctx.cr6.gt) goto loc_824660BC;
	// addi r21,r22,224
	r21.s64 = r22.s64 + 224;
loc_82465D28:
	// stw r20,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r20.u32);
	// add r11,r29,r18
	ctx.r11.u64 = r29.u64 + r18.u64;
	// stw r20,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r20.u32);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r10,228(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 228);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r31,r20
	r31.u64 = r20.u64;
	// divw r9,r26,r10
	ctx.r9.u64 = uint32_t((ctx.r10.s32 && !(r26.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? r26.s32 / ctx.r10.s32 : 0);
	// mr r29,r20
	r29.u64 = r20.u64;
	// extsh r27,r9
	r27.s64 = ctx.r9.s16;
	// mr r24,r20
	r24.u64 = r20.u64;
	// mr r19,r23
	r19.u64 = r23.u64;
	// bl 0x8246e538
	ctx.lr = 0x82465D5C;
	sub_8246E538(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82466100
	if (ctx.cr6.lt) goto loc_82466100;
	// lhz r11,34(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 34);
	// lwz r10,256(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 256);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmpw cr6,r23,r9
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82465da8
	if (!ctx.cr6.eq) goto loc_82465DA8;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824658f8
	ctx.lr = 0x82465D88;
	sub_824658F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82466100
	if (ctx.cr6.lt) goto loc_82466100;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82465da4
	if (ctx.cr6.eq) goto loc_82465DA4;
	// stw r17,128(r22)
	REX_STORE_U32(r22.u32 + 128, r17.u32);
	// b 0x82465da8
	goto loc_82465DA8;
loc_82465DA4:
	// stw r20,128(r22)
	REX_STORE_U32(r22.u32 + 128, r20.u32);
loc_82465DA8:
	// lhz r5,34(r25)
	ctx.r5.u64 = REX_LOAD_U16(r25.u32 + 34);
	// lwz r11,256(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 256);
	// lwz r6,320(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 320);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// extsh r22,r11
	r22.s64 = ctx.r11.s16;
	// ble cr6,0x82465e04
	if (!ctx.cr6.gt) goto loc_82465E04;
	// mulli r8,r16,28
	ctx.r8.s64 = static_cast<int64_t>(r16.u64 * static_cast<uint64_t>(28));
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// addi r11,r6,424
	ctx.r11.s64 = ctx.r6.s64 + 424;
loc_82465DCC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsh r7,r22
	ctx.r7.s64 = r22.s16;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lhz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x82465df0
	if (!ctx.cr6.gt) goto loc_82465DF0;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
loc_82465DF0:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1776
	ctx.r11.s64 = ctx.r11.s64 + 1776;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82465dcc
	if (ctx.cr6.lt) goto loc_82465DCC;
loc_82465E04:
	// lwz r11,276(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r10,128(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82465e74
	if (!ctx.cr6.eq) goto loc_82465E74;
	// stw r20,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r20.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82465e78
	if (!ctx.cr6.gt) goto loc_82465E78;
	// mulli r8,r16,28
	ctx.r8.s64 = static_cast<int64_t>(r16.u64 * static_cast<uint64_t>(28));
	// extsh r7,r22
	ctx.r7.s64 = r22.s16;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// addi r11,r6,424
	ctx.r11.s64 = ctx.r6.s64 + 424;
loc_82465E30:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r6,12(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lhz r4,0(r6)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82465e54
	if (!ctx.cr6.eq) goto loc_82465E54;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// stw r17,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r17.u32);
loc_82465E54:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1776
	ctx.r11.s64 = ctx.r11.s64 + 1776;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82465e30
	if (ctx.cr6.lt) goto loc_82465E30;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(r24.s32, 1, ctx.xer);
	// bgt cr6,0x82465e7c
	if (ctx.cr6.gt) goto loc_82465E7C;
	// b 0x82465e78
	goto loc_82465E78;
loc_82465E74:
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
loc_82465E78:
	// mr r31,r17
	r31.u64 = r17.u64;
loc_82465E7C:
	// divw r11,r23,r24
	ctx.r11.u64 = uint32_t((r24.s32 && !(r23.s32 == INT32_MIN && r24.s32 == -1)) ? r23.s32 / r24.s32 : 0);
	// extsh r10,r27
	ctx.r10.s64 = r27.s16;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82465e94
	if (!ctx.cr6.eq) goto loc_82465E94;
	// mr r31,r17
	r31.u64 = r17.u64;
	// mr r29,r17
	r29.u64 = r17.u64;
loc_82465E94:
	// li r28,-1
	r28.s64 = -1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x82465f04
	if (!ctx.cr6.eq) goto loc_82465F04;
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmpwi cr6,r24,24
	ctx.cr6.compare<int32_t>(r24.s32, 24, ctx.xer);
	// li r31,24
	r31.s64 = 24;
	// bgt cr6,0x82465eb4
	if (ctx.cr6.gt) goto loc_82465EB4;
	// mr r31,r24
	r31.u64 = r24.u64;
loc_82465EB4:
	// mr r28,r20
	r28.u64 = r20.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x82465f04
	if (ctx.cr6.eq) goto loc_82465F04;
loc_82465EC0:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824658f8
	ctx.lr = 0x82465ED0;
	sub_824658F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82466100
	if (ctx.cr6.lt) goto loc_82466100;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// subf r30,r31,r30
	r30.u64 = r30.u64 - r31.u64;
	// li r31,24
	r31.s64 = 24;
	// cmpwi cr6,r30,24
	ctx.cr6.compare<int32_t>(r30.s32, 24, ctx.xer);
	// or r11,r10,r28
	ctx.r11.u64 = ctx.r10.u64 | r28.u64;
	// bgt cr6,0x82465ef4
	if (ctx.cr6.gt) goto loc_82465EF4;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82465EF4:
	// extsw r10,r31
	ctx.r10.s64 = r31.s32;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// sld r28,r11,r10
	r28.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r10.u8 & 0x7F));
	// bne cr6,0x82465ec0
	if (!ctx.cr6.eq) goto loc_82465EC0;
loc_82465F04:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x82465fac
	if (!ctx.cr6.eq) goto loc_82465FAC;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bne cr6,0x82465f34
	if (!ctx.cr6.eq) goto loc_82465F34;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x824658f8
	ctx.lr = 0x82465F24;
	sub_824658F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82466100
	if (ctx.cr6.lt) goto loc_82466100;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82465f78
	goto loc_82465F78;
loc_82465F34:
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// bl 0x824658f8
	ctx.lr = 0x82465F3C;
	sub_824658F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82466100
	if (ctx.cr6.lt) goto loc_82466100;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r15,16
	ctx.r10.u64 = r15.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82465f78
	if (ctx.cr6.lt) goto loc_82465F78;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824658f8
	ctx.lr = 0x82465F64;
	sub_824658F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82466100
	if (ctx.cr6.lt) goto loc_82466100;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + r15.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82465F78:
	// lwz r10,176(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 176);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,256(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 256);
	// bne cr6,0x82465f98
	if (!ctx.cr6.eq) goto loc_82465F98;
	// slw r9,r17,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r17.u32 << (ctx.r11.u8 & 0x3F));
	// divw r8,r10,r9
	ctx.r8.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// extsh r27,r8
	r27.s64 = ctx.r8.s16;
	// b 0x82465fac
	goto loc_82465FAC;
loc_82465F98:
	// lwz r8,228(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 228);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// divw r7,r10,r8
	ctx.r7.u64 = uint32_t((ctx.r8.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r10.s32 / ctx.r8.s32 : 0);
	// mullw r6,r7,r9
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// extsh r27,r6
	r27.s64 = ctx.r6.s16;
loc_82465FAC:
	// lwz r11,236(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 236);
	// extsh r6,r27
	ctx.r6.s64 = r27.s16;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824660ac
	if (ctx.cr6.lt) goto loc_824660AC;
	// lwz r26,256(r25)
	r26.u64 = REX_LOAD_U32(r25.u32 + 256);
	// cmpw cr6,r6,r26
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r26.s32, ctx.xer);
	// bgt cr6,0x824660ac
	if (ctx.cr6.gt) goto loc_824660AC;
	// lhz r10,34(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 34);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// lwz r11,320(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 320);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824660ac
	if (ctx.cr6.eq) goto loc_824660AC;
	// mulli r4,r16,28
	ctx.r4.s64 = static_cast<int64_t>(r16.u64 * static_cast<uint64_t>(28));
	// addi r7,r11,424
	ctx.r7.s64 = ctx.r11.s64 + 424;
loc_82465FE4:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// bgt cr6,0x824660ac
	if (ctx.cr6.gt) goto loc_824660AC;
	// lhz r31,0(r10)
	r31.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r30,r22
	r30.s64 = r22.s16;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(r30.s32, r31.s32, ctx.xer);
	// bne cr6,0x82466074
	if (!ctx.cr6.eq) goto loc_82466074;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// extsw r31,r24
	r31.s64 = r24.s32;
	// sld r31,r17,r31
	r31.u64 = r31.u8 & 0x40 ? 0 : (r17.u64 << (r31.u8 & 0x7F));
	// and r31,r31,r28
	r31.u64 = r31.u64 & r28.u64;
	// cmpldi cr6,r31,0
	ctx.cr6.compare<uint64_t>(r31.u64, 0, ctx.xer);
	// beq cr6,0x82466074
	if (ctx.cr6.eq) goto loc_82466074;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// bge cr6,0x824660ac
	if (!ctx.cr6.lt) goto loc_824660AC;
	// rlwinm r31,r9,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r23,r6,r23
	r23.u64 = r23.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// sthx r27,r31,r8
	REX_STORE_U16(r31.u32 + ctx.r8.u32, r27.u16);
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// sth r8,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// lhz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + r27.u64;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// blt 0x824660ac
	if (ctx.cr0.lt) goto loc_824660AC;
	// lwz r26,256(r25)
	r26.u64 = REX_LOAD_U32(r25.u32 + 256);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r26.s32, ctx.xer);
	// bgt cr6,0x824660ac
	if (ctx.cr6.gt) goto loc_824660AC;
loc_82466074:
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// lhz r29,34(r25)
	r29.u64 = REX_LOAD_U16(r25.u32 + 34);
	// addi r7,r7,1776
	ctx.r7.s64 = ctx.r7.s64 + 1776;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpw cr6,r5,r29
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r29.s32, ctx.xer);
	// blt cr6,0x82465fe4
	if (ctx.cr6.lt) goto loc_82465FE4;
	// cmpw cr6,r23,r19
	ctx.cr6.compare<int32_t>(r23.s32, r19.s32, ctx.xer);
	// bge cr6,0x824660ac
	if (!ctx.cr6.lt) goto loc_824660AC;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x824660bc
	if (!ctx.cr6.gt) goto loc_824660BC;
	// lwz r22,276(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// b 0x82465d28
	goto loc_82465D28;
loc_824660AC:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4ea0
	return;
loc_824660BC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x82466100
	if (!ctx.cr6.gt) goto loc_82466100;
	// mulli r8,r16,28
	ctx.r8.s64 = static_cast<int64_t>(r16.u64 * static_cast<uint64_t>(28));
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_824660CC:
	// lwz r9,320(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 320);
	// mulli r10,r11,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// lwz r10,424(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 424);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r5,12(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// sth r20,0(r5)
	REX_STORE_U16(ctx.r5.u32 + 0, r20.u16);
	// lhz r4,34(r25)
	ctx.r4.u64 = REX_LOAD_U16(r25.u32 + 34);
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x824660cc
	if (ctx.cr6.lt) goto loc_824660CC;
loc_82466100:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8247F638) {
	REX_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x8247f4e8
	sub_8247F4E8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8247F640) {
	REX_FUNC_PROLOGUE();
	// b 0x822d7240
	sub_822D7240(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8247F72C) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822dbb00
	ctx.lr = 0x8247F740;
	sub_822DBB00(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8247FF20) {
	REX_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8247fd98
	sub_8247FD98(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82480168) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82480198
	if (!ctx.cr6.eq) goto loc_82480198;
	// bl 0x822db6c0
	ctx.lr = 0x82480184;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x82480190;
	sub_822D6910(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x824801a8
	goto loc_824801A8;
loc_82480198:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-12960(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -12960);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_824801A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82487190) {
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
	// lwz r11,20680(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20680);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824871e8
	if (ctx.cr6.eq) goto loc_824871E8;
	// lwz r11,20684(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824871e8
	if (ctx.cr6.eq) goto loc_824871E8;
	// lwz r11,21704(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21704);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824871e8
	if (!ctx.cr6.eq) goto loc_824871E8;
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// lwz r11,21972(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21972);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,21968(r3)
	REX_STORE_U32(ctx.r3.u32 + 21968, ctx.r9.u32);
	// b 0x824871f0
	goto loc_824871F0;
loc_824871E8:
	// lwz r11,21972(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21972);
	// stw r11,21968(r31)
	REX_STORE_U32(r31.u32 + 21968, ctx.r11.u32);
loc_824871F0:
	// lwz r10,2964(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2964);
	// lwz r11,2976(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2976);
	// addi r8,r10,735
	ctx.r8.s64 = ctx.r10.s64 + 735;
	// lwz r9,2980(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 2980);
	// addi r7,r11,738
	ctx.r7.s64 = ctx.r11.s64 + 738;
	// lwz r10,2984(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2984);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,2092(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2092);
	// addi r5,r9,738
	ctx.r5.s64 = ctx.r9.s64 + 738;
	// lwz r4,4016(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4016);
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,738
	ctx.r10.s64 = ctx.r10.s64 + 738;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r6,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// addi r7,r11,263
	ctx.r7.s64 = ctx.r11.s64 + 263;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// stw r8,2924(r31)
	REX_STORE_U32(r31.u32 + 2924, ctx.r8.u32);
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// stw r8,2920(r31)
	REX_STORE_U32(r31.u32 + 2920, ctx.r8.u32);
	// stw r8,2916(r31)
	REX_STORE_U32(r31.u32 + 2916, ctx.r8.u32);
	// lwzx r10,r3,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + r31.u32);
	// stw r10,2928(r31)
	REX_STORE_U32(r31.u32 + 2928, ctx.r10.u32);
	// lwzx r9,r9,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// stw r9,2932(r31)
	REX_STORE_U32(r31.u32 + 2932, ctx.r9.u32);
	// lwzx r8,r6,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// stw r8,2936(r31)
	REX_STORE_U32(r31.u32 + 2936, ctx.r8.u32);
	// lwzx r7,r5,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + r31.u32);
	// stw r7,2096(r31)
	REX_STORE_U32(r31.u32 + 2096, ctx.r7.u32);
	// lwz r6,2108(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 2108);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,2100(r31)
	REX_STORE_U32(r31.u32 + 2100, ctx.r6.u32);
	// beq cr6,0x82487280
	if (ctx.cr6.eq) goto loc_82487280;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82487280:
	// stw r11,460(r31)
	REX_STORE_U32(r31.u32 + 460, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,248(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 248);
	// bl 0x82340178
	ctx.lr = 0x82487290;
	sub_82340178(ctx, base);
	// lwz r11,4016(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4016);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x824872a8
	if (ctx.cr6.eq) goto loc_824872A8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x824872ac
	if (!ctx.cr6.eq) goto loc_824872AC;
loc_824872A8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_824872AC:
	// lwz r10,1976(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1976);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,76(r10)
	REX_STORE_U32(ctx.r10.u32 + 76, ctx.r11.u32);
	// lwz r4,248(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 248);
	// lwz r3,1976(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1976);
	// bl 0x82397a10
	ctx.lr = 0x824872C4;
	sub_82397A10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,248(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 248);
	// bl 0x8237d2c0
	ctx.lr = 0x824872D0;
	sub_8237D2C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8235f838
	ctx.lr = 0x824872D8;
	sub_8235F838(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82362b28
	ctx.lr = 0x824872E4;
	sub_82362B28(ctx, base);
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

DEFINE_REX_FUNC(sub_824A2CD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x824A2CD8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r9,r11,-10
	ctx.r9.s64 = ctx.r11.s64 + -10;
	// rldicr r8,r10,10,53
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 10) & 0xFFFFFFFFFFFFFC00;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// bge cr6,0x824a2d9c
	if (!ctx.cr6.lt) goto loc_824A2D9C;
loc_824A2D08:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824a2d30
	if (ctx.cr6.lt) goto loc_824A2D30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x824A2D24;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x824a2d08
	if (ctx.cr6.eq) goto loc_824A2D08;
	// b 0x824a2d9c
	goto loc_824A2D9C;
loc_824A2D30:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
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
loc_824A2D9C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,32768
	r29.u64 = ctx.r11.u64 | 32768;
loc_824A2DA4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rldicl r10,r9,1,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0x1;
	// rldicr r7,r9,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// add r30,r10,r30
	r30.u64 = ctx.r10.u64 + r30.u64;
	// std r7,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r7.u64);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x824a2e60
	if (!ctx.cr6.lt) goto loc_824A2E60;
loc_824A2DCC:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824a2df4
	if (ctx.cr6.lt) goto loc_824A2DF4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x824A2DE8;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x824a2dcc
	if (ctx.cr6.eq) goto loc_824A2DCC;
	// b 0x824a2e60
	goto loc_824A2E60;
loc_824A2DF4:
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
loc_824A2E60:
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r28
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + r28.u32);
	// extsh r30,r9
	r30.s64 = ctx.r9.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x824a2da4
	if (ctx.cr6.lt) goto loc_824A2DA4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_824A7860) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v127{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x824A7868;
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltish v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x2)));
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// li r10,1120
	ctx.r10.s64 = 1120;
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// vslh v12,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r7,0
	ctx.r7.s64 = 0;
	// lvx128 v11,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// vsubshs v0,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvx128 v0,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x824a6648
	ctx.lr = 0x824A78B0;
	sub_824A6648(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lvx128 v2,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// vspltish v1,6
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x6)));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a7160
	ctx.lr = 0x824A78C8;
	sub_824A7160(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	ea = (ctx.r1.u32 + ctx.r0.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_824A8D48) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x824A8D50;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltish v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x4)));
	// li r9,1120
	ctx.r9.s64 = 1120;
	// vspltish v1,3
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x3)));
	// addi r29,r1,112
	r29.s64 = ctx.r1.s64 + 112;
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vrlh v0,v0,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, result);
	}
	// li r8,0
	ctx.r8.s64 = 0;
	// lvx128 v13,r6,r9
	ea = (ctx.r6.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// vaddshs v2,v1,v13
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// vsubshs v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// stvx128 v0,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x824a6eb0
	ctx.lr = 0x824A8D98;
	sub_824A6EB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lvx128 v2,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// vspltish v1,7
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x7)));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a7450
	ctx.lr = 0x824A8DB0;
	sub_824A7450(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_824AA2F0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e7c
	ctx.lr = 0x824AA2F8;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v63,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// vspltish v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x1)));
	// li r11,16
	ctx.r11.s64 = 16;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// add r5,r3,r4
	ctx.r5.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v62,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lvsl v3,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r31,r9,r4
	r31.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvx128 v46,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v57,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,1104
	r28.s64 = 1104;
	// lvsl v2,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v58,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lvx128 v60,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v6,v63,v57,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvsl v1,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r30,r7,r4
	r30.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lvx128 v55,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v4,v60,v58,v1
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// lvsl v5,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v10,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v59,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r27,48
	r27.s64 = 48;
	// vperm128 v1,v61,v55,v5
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v56,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v9,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v51,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v31,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v2,v59,v56,v7
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v50,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v49,r30,r11
	ea = (r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v7,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v47,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-80
	ctx.r11.s64 = ctx.r1.s64 + -80;
	// lvx128 v54,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r26,96
	r26.s64 = 96;
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v8,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v53,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r25,144
	r25.s64 = 144;
	// lvsl v1,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v54,v51,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v52,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,192
	ctx.r9.s64 = 192;
	// lvsl v5,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v1,v53,v50,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// lvsl v6,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v2,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v29,v52,v49,v5
	simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v48,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v6,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v6,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v4,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v5,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v1,v48,v47,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v27,r6,r28
	ea = (ctx.r6.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v4,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsrah v11,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vperm128 v29,v62,v46,v3
	simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vslh v30,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r8,240
	ctx.r8.s64 = 240;
	// vslh v27,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r7,288
	ctx.r7.s64 = 288;
	// vslh v26,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v3,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v25,v31,v10
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// li r6,336
	ctx.r6.s64 = 336;
	// vslh v24,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v23,v0,v29
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v22,v2,v9
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v21,v30,v8
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v20,v28,v7
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v18,v27,v6
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v17,v26,v5
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v16,v24,v4
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v15,v19,v3
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v0,v22,v10
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v12,v21,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v10,v20,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v9,v18,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v8,v17,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v14,v25,v23
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vaddshs v7,v16,v5
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v6,v15,v4
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v4,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v5,v14,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v3,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v2,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v1,v9,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v31,v8,v11
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v30,v7,v11
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v29,v6,v11
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v28,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v27,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v28,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v23,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v27,r29,r27
	ea = (r29.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v22,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v26,r29,r26
	ea = (r29.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v21,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v25,r29,r25
	ea = (r29.u32 + r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r29,r9
	ea = (r29.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v23,r29,r8
	ea = (r29.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v22,r29,r7
	ea = (r29.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v21,r29,r6
	ea = (r29.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_824B2B00) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x824B2B08;
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// rlwinm r28,r11,3,0,28
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x824a9408
	ctx.lr = 0x824B2B30;
	sub_824A9408(ctx, base);
	// li r10,1104
	ctx.r10.s64 = 1104;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v1,r29,r10
	ea = (r29.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x824b0fd8
	ctx.lr = 0x824B2B50;
	sub_824B0FD8(ctx, base);
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_824B30B8) {
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
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r8,196(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// subfic r9,r11,8
	ctx.xer.ca = ctx.r11.u32 <= 8;
	ctx.r9.u64 = static_cast<uint64_t>(8) - ctx.r11.u64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r8,r7,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// li r7,4
	ctx.r7.s64 = 4;
	// and r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 & ctx.r10.u64;
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// slw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// vsplth v1,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xD0C))));
	// bl 0x824afae8
	ctx.lr = 0x824B3108;
	sub_824AFAE8(ctx, base);
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

DEFINE_REX_FUNC(sub_824B31F0) {
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
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r8,196(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// subfic r9,r11,8
	ctx.xer.ca = ctx.r11.u32 <= 8;
	ctx.r9.u64 = static_cast<uint64_t>(8) - ctx.r11.u64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r8,r7,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// li r7,4
	ctx.r7.s64 = 4;
	// and r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 & ctx.r10.u64;
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// slw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// vsplth v1,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xD0C))));
	// bl 0x824b0290
	ctx.lr = 0x824B3240;
	sub_824B0290(ctx, base);
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

DEFINE_REX_FUNC(sub_824B3B68) {
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
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r8,196(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// subfic r9,r11,8
	ctx.xer.ca = ctx.r11.u32 <= 8;
	ctx.r9.u64 = static_cast<uint64_t>(8) - ctx.r11.u64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r8,r7,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// li r7,4
	ctx.r7.s64 = 4;
	// and r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 & ctx.r10.u64;
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// slw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// vsplth v1,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xD0C))));
	// bl 0x824b0530
	ctx.lr = 0x824B3BB8;
	sub_824B0530(ctx, base);
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

DEFINE_REX_FUNC(sub_824B4E58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x824b4ebc
	if (!ctx.cr6.eq) goto loc_824B4EBC;
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// ldx r10,r3,r4
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + ctx.r4.u32);
	// stdx r10,r5,r6
	REX_STORE_U64(ctx.r5.u32 + ctx.r6.u32, ctx.r10.u64);
	// ldux r11,r7,r9
	ea = ctx.r7.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r7.u32 = ea;
	// stdux r11,r5,r8
	ea = ctx.r5.u32 + ctx.r8.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r5.u32 = ea;
	// ldx r10,r7,r4
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + ctx.r4.u32);
	// stdx r10,r5,r6
	REX_STORE_U64(ctx.r5.u32 + ctx.r6.u32, ctx.r10.u64);
	// ldux r11,r7,r9
	ea = ctx.r7.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r7.u32 = ea;
	// stdux r11,r5,r8
	ea = ctx.r5.u32 + ctx.r8.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r5.u32 = ea;
	// ldx r10,r7,r4
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + ctx.r4.u32);
	// stdx r10,r5,r6
	REX_STORE_U64(ctx.r5.u32 + ctx.r6.u32, ctx.r10.u64);
	// ldux r9,r7,r9
	ea = ctx.r7.u32 + ctx.r9.u32;
	ctx.r9.u64 = REX_LOAD_U64(ea);
	ctx.r7.u32 = ea;
	// stdux r9,r5,r8
	ea = ctx.r5.u32 + ctx.r8.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r5.u32 = ea;
	// ldx r8,r7,r4
	ctx.r8.u64 = REX_LOAD_U64(ctx.r7.u32 + ctx.r4.u32);
	// stdx r8,r5,r6
	REX_STORE_U64(ctx.r5.u32 + ctx.r6.u32, ctx.r8.u64);
loc_824B4EB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_824B4EBC:
	// li r11,16
	ctx.r11.s64 = 16;
	// lvlx128 v63,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r3,r7,r4
	ctx.r3.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lvlx128 v62,r7,r4
	temp.u32 = ctx.r7.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// lvrx128 v61,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lvrx128 v60,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v59,v63,v61
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// add r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v58,v62,v60
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// stvx128 v59,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v58,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvrx128 v57,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v56,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v55,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v54,v56,v55
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// lvlx128 v53,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// vor128 v52,v53,v57
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// stvx128 v54,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stvx128 v52,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lvlx128 v51,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v47,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v50,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v49,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// vor128 v48,v49,v50
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// add r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v46,v51,v47
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// stvx128 v48,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v46,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lvlx128 v45,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v44,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v43,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v42,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v41,v42,v43
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8)));
	// vor128 v40,v45,v44
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8)));
	// stvx128 v41,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stvx128 v40,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// bne cr6,0x824b4eb0
	if (!ctx.cr6.eq) goto loc_824B4EB0;
	// add r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvlx128 v39,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v38,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// vor128 v37,v39,v38
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// li r3,0
	ctx.r3.s64 = 0;
	// lvlx128 v36,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v35,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v34,v36,v35
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8)));
	// stvx128 v37,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v34,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lvrx128 v32,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lvrx128 v33,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v60,v62,v33
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// add r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v61,v63,v32
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8)));
	// stvx128 v61,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lvlx128 v58,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v56,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v55,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v54,v56,v55
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// lvrx128 v59,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// vor128 v57,v58,v59
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// stvx128 v54,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stvx128 v57,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v53,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v52,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v51,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v50,v51,v52
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// lvrx128 v49,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v48,v53,v49
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// stvx128 v48,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v50,r8,r6
	ea = (ctx.r8.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D30C8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,15792
	ctx.r3.s64 = ctx.r11.s64 + 15792;
	// b 0x822d5848
	sub_822D5848(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D30F8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,15872
	ctx.r3.s64 = ctx.r11.s64 + 15872;
	// b 0x822d5848
	sub_822D5848(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D31D0) {
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
	// addi r3,r11,30524
	ctx.r3.s64 = ctx.r11.s64 + 30524;
	// bl 0x82292100
	ctx.lr = 0x824D31E8;
	sub_82292100(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,15968
	ctx.r3.s64 = ctx.r11.s64 + 15968;
	// bl 0x822d5848
	ctx.lr = 0x824D31F4;
	sub_822D5848(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D3758) {
	REX_FUNC_PROLOGUE();
	// lis r8,-32175
	ctx.r8.s64 = -2108620800;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r7,r8,10792
	ctx.r7.s64 = ctx.r8.s64 + 10792;
	// addi r10,r11,-29256
	ctx.r10.s64 = ctx.r11.s64 + -29256;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,10792(r8)
	REX_STORE_U32(ctx.r8.u32 + 10792, ctx.r10.u32);
	// stw r11,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// stw r9,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D3940) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,5
	ctx.r10.s64 = 5;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r11,7856
	ctx.r11.s64 = ctx.r11.s64 + 7856;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,29664
	ctx.r11.s64 = ctx.r11.s64 + 29664;
	// addi r8,r8,17240
	ctx.r8.s64 = ctx.r8.s64 + 17240;
	// addi r9,r9,17632
	ctx.r9.s64 = ctx.r9.s64 + 17632;
	// addi r10,r10,17472
	ctx.r10.s64 = ctx.r10.s64 + 17472;
loc_824D396C:
	// stwu r10,-5040(r11)
	ea = -5040 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stw r9,-2764(r11)
	REX_STORE_U32(ctx.r11.u32 + -2764, ctx.r9.u32);
	// stw r8,-2488(r11)
	REX_STORE_U32(ctx.r11.u32 + -2488, ctx.r8.u32);
	// bdnz 0x824d396c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824D396C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D3BA8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,25932
	ctx.r3.s64 = ctx.r11.s64 + 25932;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3CA8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,26372
	ctx.r3.s64 = ctx.r11.s64 + 26372;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3E10) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,29988
	ctx.r3.s64 = ctx.r11.s64 + 29988;
	// b 0x8225da00
	sub_8225DA00(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3F90) {
	REX_FUNC_PROLOGUE();
	// .long 0x20002c5
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D40E0) {
	REX_FUNC_PROLOGUE();
	// .long 0x20001a9
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4250) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100e7
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D43D0) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010126
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4550) {
	REX_FUNC_PROLOGUE();
	// .long 0x201025b
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D46D0) {
	REX_FUNC_PROLOGUE();
	// .long 0x201005f
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4850) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000012
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D49D0) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010155
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4B50) {
	REX_FUNC_PROLOGUE();
	// .long 0x201012d
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

