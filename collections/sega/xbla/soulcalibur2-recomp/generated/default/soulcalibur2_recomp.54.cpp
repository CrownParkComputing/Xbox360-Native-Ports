#include "soulcalibur2_funcs.54.h"

DEFINE_REX_FUNC(sub_820E2208) {
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
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x820e00c0
	ctx.lr = 0x820E2230;
	sub_820E00C0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x820e00c0
	ctx.lr = 0x820E2240;
	sub_820E00C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fneg f0,f13
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
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

DEFINE_REX_FUNC(sub_820E8240) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,32
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32, ctx.xer);
	// blt cr6,0x820e8250
	if (ctx.cr6.lt) goto loc_820E8250;
	// li r11,31
	ctx.r11.s64 = 31;
	// stw r11,392(r3)
	REX_STORE_U32(ctx.r3.u32 + 392, ctx.r11.u32);
loc_820E8250:
	// stw r4,392(r3)
	REX_STORE_U32(ctx.r3.u32 + 392, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E9AF0) {
	REX_FUNC_PROLOGUE();
	// stw r4,388(r3)
	REX_STORE_U32(ctx.r3.u32 + 388, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E9CF8) {
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
	ctx.lr = 0x820E9D00;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r31,0
	r31.s64 = 0;
	// addi r29,r11,-7072
	r29.s64 = ctx.r11.s64 + -7072;
	// stw r31,280(r3)
	REX_STORE_U32(ctx.r3.u32 + 280, r31.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addis r11,r29,1
	ctx.r11.s64 = r29.s64 + 65536;
	// stw r29,632(r3)
	REX_STORE_U32(ctx.r3.u32 + 632, r29.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,3696
	ctx.r11.s64 = ctx.r11.s64 + 3696;
	// stw r11,636(r3)
	REX_STORE_U32(ctx.r3.u32 + 636, ctx.r11.u32);
	// lfs f31,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x822007f0
	ctx.lr = 0x820E9D40;
	sub_822007F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,16172(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16172);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200800
	ctx.lr = 0x820E9D50;
	sub_82200800(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,16184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16184);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200808
	ctx.lr = 0x820E9D60;
	sub_82200808(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200750
	ctx.lr = 0x820E9D6C;
	sub_82200750(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,2336(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2336);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200758
	ctx.lr = 0x820E9D7C;
	sub_82200758(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x821a3a28
	ctx.lr = 0x820E9D88;
	sub_821A3A28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200790
	ctx.lr = 0x820E9D94;
	sub_82200790(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200798
	ctx.lr = 0x820E9DA0;
	sub_82200798(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822007a0
	ctx.lr = 0x820E9DAC;
	sub_822007A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,16200(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16200);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200818
	ctx.lr = 0x820E9DBC;
	sub_82200818(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f30,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f30.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82200838
	ctx.lr = 0x820E9DD0;
	sub_82200838(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82200848
	ctx.lr = 0x820E9DDC;
	sub_82200848(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82200850
	ctx.lr = 0x820E9DE8;
	sub_82200850(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,10312(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 10312);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f13,2012(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// bl 0x82200700
	ctx.lr = 0x820E9E00;
	sub_82200700(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,16380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16380);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822006f8
	ctx.lr = 0x820E9E10;
	sub_822006F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200708
	ctx.lr = 0x820E9E1C;
	sub_82200708(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,16168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16168);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820E9E38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820E9E50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822009c8
	ctx.lr = 0x820E9E58;
	sub_822009C8(ctx, base);
	// stfs f1,396(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 396, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822009d0
	ctx.lr = 0x820E9E64;
	sub_822009D0(ctx, base);
	// stfs f1,400(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 400, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822009d8
	ctx.lr = 0x820E9E70;
	sub_822009D8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f1,404(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 404, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f31,496(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 496, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f31,508(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 508, temp.u32);
	// stfs f31,524(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 524, temp.u32);
	// stw r31,484(r30)
	REX_STORE_U32(r30.u32 + 484, r31.u32);
	// lfs f11,2364(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2364);
	ctx.f11.f64 = double(temp.f32);
	// stw r31,488(r30)
	REX_STORE_U32(r30.u32 + 488, r31.u32);
	// lfs f12,16232(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16232);
	ctx.f12.f64 = double(temp.f32);
	// stw r31,388(r30)
	REX_STORE_U32(r30.u32 + 388, r31.u32);
	// lfs f0,16364(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16364);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,392(r30)
	REX_STORE_U32(r30.u32 + 392, r31.u32);
	// lfs f13,2360(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2360);
	ctx.f13.f64 = double(temp.f32);
	// stw r31,512(r30)
	REX_STORE_U32(r30.u32 + 512, r31.u32);
	// stfs f11,504(r30)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r30.u32 + 504, temp.u32);
	// stw r31,492(r30)
	REX_STORE_U32(r30.u32 + 492, r31.u32);
	// stfs f12,572(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r30.u32 + 572, temp.u32);
	// stw r31,564(r30)
	REX_STORE_U32(r30.u32 + 564, r31.u32);
	// stfs f31,532(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 532, temp.u32);
	// stfs f31,520(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 520, temp.u32);
	// stfs f31,528(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 528, temp.u32);
	// stfs f31,548(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 548, temp.u32);
	// stfs f31,552(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 552, temp.u32);
	// stfs f31,500(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 500, temp.u32);
	// stfs f31,556(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 556, temp.u32);
	// stfs f31,560(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 560, temp.u32);
	// stfs f0,412(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 412, temp.u32);
	// stfs f0,416(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 416, temp.u32);
	// stfs f0,420(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 420, temp.u32);
	// stfs f13,428(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 428, temp.u32);
	// stfs f13,432(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 432, temp.u32);
	// stfs f13,436(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 436, temp.u32);
	// stfs f31,468(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 468, temp.u32);
	// stfs f31,464(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 464, temp.u32);
	// stfs f31,460(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 460, temp.u32);
	// stfs f31,452(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 452, temp.u32);
	// stfs f31,448(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 448, temp.u32);
	// stfs f31,444(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 444, temp.u32);
	// stfs f31,620(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 620, temp.u32);
	// stfs f31,616(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 616, temp.u32);
	// stfs f31,624(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 624, temp.u32);
	// stfs f31,612(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 612, temp.u32);
	// stfs f31,608(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 608, temp.u32);
	// stfs f31,480(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 480, temp.u32);
	// stfs f12,576(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r30.u32 + 576, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_820FBEB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r9,r11,8584
	ctx.r9.s64 = ctx.r11.s64 + 8584;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r9,-112
	ctx.r11.s64 = ctx.r9.s64 + -112;
	// stw r10,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_820FBED4:
	// lbz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// sth r8,40(r10)
	REX_STORE_U16(ctx.r10.u32 + 40, ctx.r8.u16);
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// sth r8,42(r10)
	REX_STORE_U16(ctx.r10.u32 + 42, ctx.r8.u16);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,44(r10)
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r8.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r8.u32);
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r8,52(r10)
	REX_STORE_U32(ctx.r10.u32 + 52, ctx.r8.u32);
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 56, temp.u32);
	// lwz r8,24(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r8,60(r10)
	REX_STORE_U32(ctx.r10.u32 + 60, ctx.r8.u32);
	// lbzu r8,28(r11)
	ea = 28 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r8,64(r10)
	ea = 64 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x820fbed4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FBED4;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_820FBF28:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,52(r10)
	REX_STORE_U32(ctx.r10.u32 + 52, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,56(r10)
	REX_STORE_U32(ctx.r10.u32 + 56, ctx.r9.u32);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 60, temp.u32);
	// lwzu r9,16(r11)
	ea = 16 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,64(r10)
	ea = 64 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820fbf28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FBF28;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stb r11,40(r3)
	REX_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FE4C4) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FE4E4) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FE504) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FE758) {
	REX_FUNC_PROLOGUE();
	// lwz r11,592(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 592);
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stw r4,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FEFC8) {
	REX_FUNC_PROLOGUE();
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwa r11,-12(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + -12));
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FF450) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x820ff464
	if (ctx.cr6.lt) goto loc_820FF464;
	// bne cr6,0x820ff464
	if (!ctx.cr6.eq) goto loc_820FF464;
	// lwz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
loc_820FF464:
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FFB98) {
	REX_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x820ffa18
	sub_820FFA18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820FFBD8) {
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
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r31,504(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 504);
	// bl 0x821fa860
	ctx.lr = 0x820FFC00;
	sub_821FA860(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// stw r11,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82100DE8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r11,22576
	ctx.r9.s64 = ctx.r11.s64 + 22576;
	// lwz r10,22576(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 22576);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,88(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82102A80) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r6,80(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 80);
	// stw r4,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,120(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lwz r11,136(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 136);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82102ac4
	if (ctx.cr0.eq) goto loc_82102AC4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,26632(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26632);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82102acc
	goto loc_82102ACC;
loc_82102AC4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,26636(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26636);
	ctx.f0.f64 = double(temp.f32);
loc_82102ACC:
	// lwz r8,112(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 112);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82102AD8:
	// lwzx r5,r11,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r5,15
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 15, ctx.xer);
	// bne cr6,0x82102ae8
	if (!ctx.cr6.eq) goto loc_82102AE8;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82102AE8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82102ad8
	if (ctx.cr6.eq) goto loc_82102AD8;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lwz r11,22576(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 22576);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82102b80
	if (ctx.cr6.eq) goto loc_82102B80;
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82102b60
	if (ctx.cr6.eq) goto loc_82102B60;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// ble cr6,0x82102b80
	if (!ctx.cr6.gt) goto loc_82102B80;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// ble cr6,0x82102b60
	if (!ctx.cr6.gt) goto loc_82102B60;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x82102b80
	if (!ctx.cr6.eq) goto loc_82102B80;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// lfs f12,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,116(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f13,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fnmsubs f0,f12,f0,f13
	ctx.f0.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f0.f64, -ctx.f13.f64)));
	// b 0x82102b8c
	goto loc_82102B8C;
loc_82102B60:
	// lfs f13,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,116(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f0,120(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82102b8c
	goto loc_82102B8C;
loc_82102B80:
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f0,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
loc_82102B8C:
	// stfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// lfs f0,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f0,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82102bf8
	if (ctx.cr6.eq) goto loc_82102BF8;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82102be8
	if (ctx.cr6.eq) goto loc_82102BE8;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x82102c14
	if (!ctx.cr6.eq) goto loc_82102C14;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82100e10
	ctx.lr = 0x82102BC8;
	sub_82100E10(ctx, base);
	// lfs f13,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f12,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// b 0x82102c10
	goto loc_82102C10;
loc_82102BE8:
	// lfs f0,132(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82102c10
	goto loc_82102C10;
loc_82102BF8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82100e10
	ctx.lr = 0x82102C04;
	sub_82100E10(ctx, base);
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82102C10:
	// stfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
loc_82102C14:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
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

DEFINE_REX_FUNC(sub_8210FFE0) {
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
	ctx.lr = 0x8210FFE8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r10,128(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r27,r3,128
	r27.s64 = ctx.r3.s64 + 128;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r26,-32480(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// beq cr6,0x8211029c
	if (ctx.cr6.eq) goto loc_8211029C;
	// lwz r11,132(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211029c
	if (ctx.cr6.eq) goto loc_8211029C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r3,80(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// li r28,0
	r28.s64 = 0;
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r28,0(r27)
	REX_STORE_U32(r27.u32 + 0, r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r10,15387
	ctx.r5.s64 = ctx.r10.s64 + 15387;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821af9d8
	ctx.lr = 0x8211003C;
	sub_821AF9D8(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lwz r9,116(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// addi r29,r11,-17768
	r29.s64 = ctx.r11.s64 + -17768;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r29,4
	ctx.r9.s64 = r29.s64 + 4;
	// addi r30,r10,432
	r30.s64 = ctx.r10.s64 + 432;
	// lwzx r3,r11,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r5,344(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 344);
	// bl 0x821103c0
	ctx.lr = 0x8211006C;
	sub_821103C0(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821100b8
	if (ctx.cr0.eq) goto loc_821100B8;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_82110088:
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x821100a8
	if (!ctx.cr6.eq) goto loc_821100A8;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stb r28,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, r28.u8);
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x821100ac
	goto loc_821100AC;
loc_821100A8:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_821100AC:
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82110088
	if (!ctx.cr0.eq) goto loc_82110088;
loc_821100B8:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r10,r29,4
	ctx.r10.s64 = r29.s64 + 4;
	// lwz r5,344(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 344);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x821103c0
	ctx.lr = 0x821100D8;
	sub_821103C0(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82110128
	if (ctx.cr0.eq) goto loc_82110128;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
loc_821100F8:
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x82110118
	if (!ctx.cr6.eq) goto loc_82110118;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stb r28,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, r28.u8);
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8211011c
	goto loc_8211011C;
loc_82110118:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8211011C:
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821100f8
	if (!ctx.cr0.eq) goto loc_821100F8;
loc_82110128:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r10,r29,4
	ctx.r10.s64 = r29.s64 + 4;
	// lwz r5,344(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 344);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// bl 0x821103c0
	ctx.lr = 0x82110148;
	sub_821103C0(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82110198
	if (ctx.cr0.eq) goto loc_82110198;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
loc_82110168:
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x82110188
	if (!ctx.cr6.eq) goto loc_82110188;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stb r28,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, r28.u8);
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8211018c
	goto loc_8211018C;
loc_82110188:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8211018C:
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82110168
	if (!ctx.cr0.eq) goto loc_82110168;
loc_82110198:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r10,r29,4
	ctx.r10.s64 = r29.s64 + 4;
	// lwz r5,344(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 344);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// bl 0x821103c0
	ctx.lr = 0x821101B8;
	sub_821103C0(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82110208
	if (ctx.cr0.eq) goto loc_82110208;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
loc_821101D8:
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x821101f8
	if (!ctx.cr6.eq) goto loc_821101F8;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stb r28,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, r28.u8);
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x821101fc
	goto loc_821101FC;
loc_821101F8:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_821101FC:
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821101d8
	if (!ctx.cr0.eq) goto loc_821101D8;
loc_82110208:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r10,r29,2
	ctx.r10.s64 = r29.s64 + 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhax r3,r11,r10
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32));
	// bl 0x8212eb40
	ctx.lr = 0x82110228;
	sub_8212EB40(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r30,r31,152
	r30.s64 = r31.s64 + 152;
	// bl 0x820e4bb0
	ctx.lr = 0x82110234;
	sub_820E4BB0(ctx, base);
	// stw r3,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,28908
	ctx.r6.s64 = ctx.r11.s64 + 28908;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821f7d50
	ctx.lr = 0x8211025C;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82110284
	if (ctx.cr0.eq) goto loc_82110284;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lwz r7,92(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 92);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// addi r4,r11,-18736
	ctx.r4.s64 = ctx.r11.s64 + -18736;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// bl 0x82112610
	ctx.lr = 0x82110280;
	sub_82112610(ctx, base);
	// b 0x82110288
	goto loc_82110288;
loc_82110284:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82110288:
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// stw r3,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,68(r31)
	REX_STORE_U32(r31.u32 + 68, r28.u32);
	// stb r11,23881(r10)
	REX_STORE_U8(ctx.r10.u32 + 23881, ctx.r11.u8);
loc_8211029C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82118FD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,296(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 296);
	// lwz r10,304(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 304);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82119010
	if (!ctx.cr6.eq) goto loc_82119010;
	// lwz r11,292(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 292);
	// addi r10,r11,132
	ctx.r10.s64 = ctx.r11.s64 + 132;
	// lwz r10,132(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// stw r10,212(r3)
	REX_STORE_U32(ctx.r3.u32 + 212, ctx.r10.u32);
	// lwz r10,136(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// stw r10,216(r3)
	REX_STORE_U32(ctx.r3.u32 + 216, ctx.r10.u32);
	// lwz r10,140(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// stw r10,220(r3)
	REX_STORE_U32(ctx.r3.u32 + 220, ctx.r10.u32);
	// lwz r11,144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// stw r11,224(r3)
	REX_STORE_U32(ctx.r3.u32 + 224, ctx.r11.u32);
	// blr 
	return;
loc_82119010:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,144(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16224(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16224);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82119038
	if (!ctx.cr6.lt) goto loc_82119038;
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
loc_82119038:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,148(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16268(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16268);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8211AFC8) {
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
	// lwz r9,256(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r7,r10,6904
	ctx.r7.s64 = ctx.r10.s64 + 6904;
	// li r30,1
	r30.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,100(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 100);
	// li r6,3
	ctx.r6.s64 = 3;
	// lbz r9,104(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 104);
	// lfs f0,16304(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16304);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r30,110(r3)
	REX_STORE_U8(ctx.r3.u32 + 110, r30.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// std r30,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, r30.u64);
	// sth r6,88(r3)
	REX_STORE_U16(ctx.r3.u32 + 88, ctx.r6.u16);
	// stb r30,90(r3)
	REX_STORE_U8(ctx.r3.u32 + 90, r30.u8);
	// stb r11,91(r3)
	REX_STORE_U8(ctx.r3.u32 + 91, ctx.r11.u8);
	// stw r7,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r7.u32);
	// stb r11,109(r3)
	REX_STORE_U8(ctx.r3.u32 + 109, ctx.r11.u8);
	// beq cr6,0x8211b038
	if (ctx.cr6.eq) goto loc_8211B038;
	// stw r10,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r10.u32);
	// stb r9,104(r3)
	REX_STORE_U8(ctx.r3.u32 + 104, ctx.r9.u8);
loc_8211B038:
	// stb r11,105(r31)
	REX_STORE_U8(r31.u32 + 105, ctx.r11.u8);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// stb r11,106(r31)
	REX_STORE_U8(r31.u32 + 106, ctx.r11.u8);
	// stb r11,107(r31)
	REX_STORE_U8(r31.u32 + 107, ctx.r11.u8);
	// stb r30,108(r31)
	REX_STORE_U8(r31.u32 + 108, r30.u8);
	// bl 0x820e01b0
	ctx.lr = 0x8211B050;
	sub_820E01B0(ctx, base);
	// stb r30,61(r31)
	REX_STORE_U8(r31.u32 + 61, r30.u8);
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

DEFINE_REX_FUNC(sub_8211E1A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r3,136
	ctx.r11.s64 = ctx.r3.s64 + 136;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x8211e1d0
	if (!ctx.cr6.eq) goto loc_8211E1D0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// b 0x8211e1f0
	goto loc_8211E1F0;
loc_8211E1D0:
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_8211E1F0:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8211e208
	if (!ctx.cr6.lt) goto loc_8211E208;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,2332(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2332);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// b 0x8211e20c
	goto loc_8211E20C;
loc_8211E208:
	// stfs f1,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
loc_8211E20C:
	// fcmpu cr6,f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bge cr6,0x8211e224
	if (!ctx.cr6.lt) goto loc_8211E224;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,16788(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16788);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// b 0x8211e228
	goto loc_8211E228;
loc_8211E224:
	// stfs f2,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
loc_8211E228:
	// fcmpu cr6,f3,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bge cr6,0x8211e240
	if (!ctx.cr6.lt) goto loc_8211E240;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,16200(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16200);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// blr 
	return;
loc_8211E240:
	// stfs f3,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8211FD90) {
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
	ctx.lr = 0x8211FD98;
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lis r30,-32165
	r30.s64 = -2107965440;
	// addi r11,r11,7104
	ctx.r11.s64 = ctx.r11.s64 + 7104;
	// li r5,192
	ctx.r5.s64 = 192;
	// addi r4,r11,768
	ctx.r4.s64 = ctx.r11.s64 + 768;
	// lwz r11,-32480(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -32480);
	// addi r31,r11,80
	r31.s64 = ctx.r11.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821ff870
	ctx.lr = 0x8211FDC4;
	sub_821FF870(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,30520
	ctx.r11.s64 = ctx.r11.s64 + 30520;
	// li r26,0
	r26.s64 = 0;
	// sth r10,8(r31)
	REX_STORE_U16(r31.u32 + 8, ctx.r10.u16);
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// stb r26,123(r31)
	REX_STORE_U8(r31.u32 + 123, r26.u8);
	// addi r29,r31,12
	r29.s64 = r31.s64 + 12;
	// addi r28,r9,-8304
	r28.s64 = ctx.r9.s64 + -8304;
	// li r4,1280
	ctx.r4.s64 = 1280;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// lwz r3,496(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 496);
	// bl 0x82190558
	ctx.lr = 0x8211FE00;
	sub_82190558(ctx, base);
	// lwz r3,496(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 496);
	// addi r28,r31,160
	r28.s64 = r31.s64 + 160;
	// lhz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rotlwi r4,r11,4
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// bl 0x82190558
	ctx.lr = 0x8211FE18;
	sub_82190558(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211fefc
	if (ctx.cr6.eq) goto loc_8211FEFC;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211fefc
	if (ctx.cr6.eq) goto loc_8211FEFC;
	// lhz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 8);
	// mr r27,r26
	r27.u64 = r26.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8211fef0
	if (ctx.cr0.eq) goto loc_8211FEF0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// mr r28,r26
	r28.u64 = r26.u64;
	// addi r25,r11,9600
	r25.s64 = ctx.r11.s64 + 9600;
	// lfs f31,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
loc_8211FE54:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r9,r25,-8
	ctx.r9.s64 = r25.s64 + -8;
	// add r30,r10,r28
	r30.u64 = ctx.r10.u64 + r28.u64;
	// addi r10,r30,-8
	ctx.r10.s64 = r30.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8211FE6C:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8211fe6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211FE6C;
	// lfs f0,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 56, temp.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// stw r11,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r11.u32);
	// bl 0x821fec88
	ctx.lr = 0x8211FE8C;
	sub_821FEC88(ctx, base);
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// stb r11,77(r30)
	REX_STORE_U8(r30.u32 + 77, ctx.r11.u8);
	// bl 0x822d6060
	ctx.lr = 0x8211FE98;
	sub_822D6060(ctx, base);
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// addi r28,r28,80
	r28.s64 = r28.s64 + 80;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r11,72(r30)
	REX_STORE_U16(r30.u32 + 72, ctx.r11.u16);
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 52, temp.u32);
	// stfs f0,48(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 48, temp.u32);
	// lfs f0,88(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stb r26,76(r30)
	REX_STORE_U8(r30.u32 + 76, r26.u8);
	// stfs f0,68(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 68, temp.u32);
	// stfs f0,64(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 64, temp.u32);
	// stfs f31,16(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 16, temp.u32);
	// stfs f31,20(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 20, temp.u32);
	// stfs f31,24(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 24, temp.u32);
	// stfs f31,28(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 28, temp.u32);
	// lhz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 8);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8211fe54
	if (ctx.cr6.lt) goto loc_8211FE54;
loc_8211FEF0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,123(r31)
	REX_STORE_U8(r31.u32 + 123, ctx.r11.u8);
	// b 0x8211ff0c
	goto loc_8211FF0C;
loc_8211FEFC:
	// stb r26,123(r31)
	REX_STORE_U8(r31.u32 + 123, r26.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-32480(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -32480);
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
loc_8211FF0C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_821254E0) {
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
	// bl 0x822d4e78
	ctx.lr = 0x821254E8;
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r11,r11,-24048
	ctx.r11.s64 = ctx.r11.s64 + -24048;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821256ac
	if (ctx.cr0.eq) goto loc_821256AC;
	// lbz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821256ac
	if (ctx.cr0.eq) goto loc_821256AC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f1,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// li r30,-1
	r30.s64 = -1;
	// addi r29,r11,-27676
	r29.s64 = ctx.r11.s64 + -27676;
	// lfs f31,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f31.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82128648
	ctx.lr = 0x82125544;
	sub_82128648(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f1,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82128648
	ctx.lr = 0x82125554;
	sub_82128648(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// bgt cr6,0x821255a4
	if (ctx.cr6.gt) goto loc_821255A4;
loc_82125560:
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(r31.s32, r27.s32, ctx.xer);
	// bgt cr6,0x821255d4
	if (ctx.cr6.gt) goto loc_821255D4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82128aa8
	ctx.lr = 0x8212558C;
	sub_82128AA8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// blt 0x82125560
	if (ctx.cr0.lt) goto loc_82125560;
	// b 0x821255d4
	goto loc_821255D4;
loc_8212559C:
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(r31.s32, r27.s32, ctx.xer);
	// blt cr6,0x821255d4
	if (ctx.cr6.lt) goto loc_821255D4;
loc_821255A4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82128aa8
	ctx.lr = 0x821255C8;
	sub_82128AA8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// blt 0x8212559c
	if (ctx.cr0.lt) goto loc_8212559C;
loc_821255D4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge cr6,0x821255e4
	if (!ctx.cr6.lt) goto loc_821255E4;
loc_821255DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821256b0
	goto loc_821256B0;
loc_821255E4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lha r9,30(r11)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 30));
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8212560c
	if (!ctx.cr6.lt) goto loc_8212560C;
	// rlwinm r11,r30,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r11,r11,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// b 0x82125610
	goto loc_82125610;
loc_8212560C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82125610:
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x821255dc
	if (ctx.cr6.eq) goto loc_821255DC;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82125634
	if (!ctx.cr6.lt) goto loc_82125634;
	// rlwinm r11,r30,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r11,r11,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// b 0x82125638
	goto loc_82125638;
loc_82125634:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82125638:
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x821255dc
	if (ctx.cr6.eq) goto loc_821255DC;
	// rlwinm r11,r30,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r11,48
	r31.s64 = ctx.r11.s64 + 48;
	// bl 0x820e1ba8
	ctx.lr = 0x8212565C;
	sub_820E1BA8(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82129500
	ctx.lr = 0x82125670;
	sub_82129500(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// stw r9,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r9.u32);
	// stw r8,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r8.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r28)
	REX_STORE_U32(r28.u32 + 12, ctx.r11.u32);
	// bl 0x820e1b28
	ctx.lr = 0x821256A4;
	sub_820E1B28(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821256b0
	goto loc_821256B0;
loc_821256AC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821256B0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8212BC38) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8212bcf4
	if (ctx.cr6.lt) goto loc_8212BCF4;
	// cmpwi cr6,r3,35
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 35, ctx.xer);
	// bge cr6,0x8212bcf4
	if (!ctx.cr6.lt) goto loc_8212BCF4;
	// cmpwi cr6,r3,33
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 33, ctx.xer);
	// beq cr6,0x8212bc68
	if (ctx.cr6.eq) goto loc_8212BC68;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x8212bc84
	goto loc_8212BC84;
loc_8212BC68:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lwz r11,-23072(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -23072);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212bcf4
	if (ctx.cr6.eq) goto loc_8212BCF4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,3
	ctx.r9.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8212BC84:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-29160(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -29160);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r10,86(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpwi cr6,r8,-127
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -127, ctx.xer);
	// bge cr6,0x8212bcb0
	if (!ctx.cr6.lt) goto loc_8212BCB0;
	// addi r10,r8,256
	ctx.r10.s64 = ctx.r8.s64 + 256;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
loc_8212BCB0:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r3,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// sth r10,120(r1)
	REX_STORE_U16(ctx.r1.u32 + 120, ctx.r10.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r9,15284
	ctx.r3.s64 = ctx.r9.s64 + 15284;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f0,1992(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// sth r11,122(r1)
	REX_STORE_U16(ctx.r1.u32 + 122, ctx.r11.u16);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x82203fe0
	ctx.lr = 0x8212BCF0;
	sub_82203FE0(ctx, base);
	// b 0x8212bcf8
	goto loc_8212BCF8;
loc_8212BCF4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8212BCF8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212F828) {
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
	// lwz r11,20140(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212f8b4
	if (ctx.cr6.eq) goto loc_8212F8B4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212f8b4
	if (ctx.cr6.eq) goto loc_8212F8B4;
	// bl 0x8212f090
	ctx.lr = 0x8212F854;
	sub_8212F090(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r3,r11,20172
	ctx.r3.s64 = ctx.r11.s64 + 20172;
	// bl 0x8212a858
	ctx.lr = 0x8212F860;
	sub_8212A858(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r11,r11,-23016
	ctx.r11.s64 = ctx.r11.s64 + -23016;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8212f87c
	if (!ctx.cr6.gt) goto loc_8212F87C;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8212F87C:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8212f890
	if (!ctx.cr6.gt) goto loc_8212F890;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8212F890:
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lwz r11,-23036(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -23036);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8212f8a8
	if (!ctx.cr6.gt) goto loc_8212F8A8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-23036(r10)
	REX_STORE_U32(ctx.r10.u32 + -23036, ctx.r11.u32);
loc_8212F8A8:
	// bl 0x8212b028
	ctx.lr = 0x8212F8AC;
	sub_8212B028(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8229a710
	ctx.lr = 0x8212F8B4;
	sub_8229A710(ctx, base);
loc_8212F8B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821308E8) {
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
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r31,-32170
	r31.s64 = -2108293120;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lfs f31,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// addi r8,r11,408
	ctx.r8.s64 = ctx.r11.s64 + 408;
	// lfs f1,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,-28236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -28236);
	// bl 0x820f3460
	ctx.lr = 0x82130934;
	sub_820F3460(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-28236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -28236);
	// bl 0x820f2d80
	ctx.lr = 0x82130940;
	sub_820F2D80(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-28236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -28236);
	// bl 0x82202540
	ctx.lr = 0x8213094C;
	sub_82202540(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f31,28564(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28564);
	f31.f64 = double(temp.f32);
	// lwz r11,68(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 68);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// lfs f30,28664(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28664);
	f30.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213097C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lfs f3,28660(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28660);
	ctx.f3.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821309A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_821334F8) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,142
	ctx.r9.s64 = ctx.r9.s64 + 142;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r9,r9,r8
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32));
	// mulli r8,r9,24
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(24));
	// b 0x8213352c
	goto loc_8213352C;
loc_82133520:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mulli r8,r8,24
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(24));
loc_8213352C:
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r8,9(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 9);
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// bne cr6,0x82133520
	if (!ctx.cr6.eq) goto loc_82133520;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8213355c
	if (!ctx.cr6.lt) goto loc_8213355C;
	// add r11,r9,r6
	ctx.r11.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,23(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 23);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// blr 
	return;
loc_8213355C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82135280) {
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
	// li r10,71
	ctx.r10.s64 = 71;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,23240
	r31.s64 = ctx.r11.s64 + 23240;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_821352B8:
	// stw r10,288(r11)
	REX_STORE_U32(ctx.r11.u32 + 288, ctx.r10.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821352b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821352B8;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r11,23208
	ctx.r3.s64 = ctx.r11.s64 + 23208;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x821352D8;
	sub_822D5870(ctx, base);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r31,288
	ctx.r8.s64 = r31.s64 + 288;
	// addi r7,r31,4
	ctx.r7.s64 = r31.s64 + 4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stwx r10,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
	// stwx r10,r9,r7
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r10.u32);
	// stfs f31,608(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 608, temp.u32);
	// stfs f31,576(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 576, temp.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82137308) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r8,r11,60
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(60));
loc_82137318:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8213731C:
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r11,r6
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r6.u32));
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82137350
	if (ctx.cr6.eq) goto loc_82137350;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,18(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 18);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r11,r11,0,26,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// b 0x82137354
	goto loc_82137354;
loc_82137350:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82137354:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213737c
	if (ctx.cr6.eq) goto loc_8213737C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// blt cr6,0x8213731c
	if (ctx.cr6.lt) goto loc_8213731C;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,6
	ctx.r8.s64 = ctx.r8.s64 + 6;
	// cmpwi cr6,r7,10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 10, ctx.xer);
	// blt cr6,0x82137318
	if (ctx.cr6.lt) goto loc_82137318;
	// blr 
	return;
loc_8213737C:
	// stw r7,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// stw r9,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8213E850) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e8c
	ctx.lr = 0x8213E858;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x822d4f38
	ctx.lr = 0x8213E860;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subfic r11,r5,5
	ctx.xer.ca = ctx.r5.u32 <= 5;
	ctx.r11.u64 = static_cast<uint64_t>(5) - ctx.r5.u64;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// std r11,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// std r10,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f13,144(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// lfs f0,27552(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 27552);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-8496(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -8496);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r30,-32169
	r30.s64 = -2108227584;
	// lfs f11,26932(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26932);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lfs f10,15968(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15968);
	ctx.f10.f64 = double(temp.f32);
	// li r31,0
	r31.s64 = 0;
	// lfs f31,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	f31.f64 = double(temp.f32);
	// addi r29,r11,20320
	r29.s64 = ctx.r11.s64 + 20320;
	// frsp f8,f13
	ctx.f8.f64 = double(float(ctx.f13.f64));
	// lfs f13,16896(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16896);
	ctx.f13.f64 = double(temp.f32);
	// lfs f30,29244(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 29244);
	f30.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,23876(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 23876);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r31,135(r1)
	REX_STORE_U8(ctx.r1.u32 + 135, r31.u8);
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r31,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// fmr f4,f30
	ctx.f4.f64 = f30.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// fmadds f13,f8,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f13.f64)));
	// fmadds f0,f9,f0,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f12.f64)));
	// fadds f29,f13,f11
	f29.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fadds f28,f0,f10
	f28.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// bl 0x82138e60
	ctx.lr = 0x8213E928;
	sub_82138E60(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,23876(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 23876);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r3,688(r29)
	REX_STORE_U32(r29.u32 + 688, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f30.f64;
	// li r6,9
	ctx.r6.s64 = 9;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fsubs f2,f28,f31
	ctx.f2.f64 = double(float(f28.f64 - f31.f64));
	// stb r31,135(r1)
	REX_STORE_U8(ctx.r1.u32 + 135, r31.u8);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// stw r31,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// bl 0x82138e60
	ctx.lr = 0x8213E96C;
	sub_82138E60(ctx, base);
	// stw r3,692(r29)
	REX_STORE_U32(r29.u32 + 692, ctx.r3.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x822d4f84
	ctx.lr = 0x8213E97C;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82149690) {
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-23132
	ctx.r10.s64 = ctx.r10.s64 + -23132;
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lbz r10,62(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 62);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// lbz r11,60(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 60);
	// rotlwi r11,r11,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 6);
	// sth r10,20(r31)
	REX_STORE_U16(r31.u32 + 20, ctx.r10.u16);
	// add r30,r11,r5
	r30.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbz r11,61(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 61);
	// lfs f13,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// sth r11,22(r31)
	REX_STORE_U16(r31.u32 + 22, ctx.r11.u16);
	// lfs f12,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f12,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f12,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// lbz r11,60(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 60);
	// sth r11,76(r31)
	REX_STORE_U16(r31.u32 + 76, ctx.r11.u16);
	// lfs f0,1996(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lbz r11,61(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 61);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// sth r11,78(r31)
	REX_STORE_U16(r31.u32 + 78, ctx.r11.u16);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// lbz r11,59(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 59);
	// lfs f0,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r11,r31
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + r31.u32, temp.u32);
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
	ctx.lr = 0x8214974C;
	sub_820E1850(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
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
	ctx.lr = 0x82149760;
	sub_820E1850(ctx, base);
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

DEFINE_REX_FUNC(sub_8214C110) {
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
	ctx.lr = 0x8214C118;
	// stwu r1,-1168(r1)
	ea = -1168 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r11,255
	ctx.r11.s64 = 255;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r11,1100(r1)
	REX_STORE_U32(ctx.r1.u32 + 1100, ctx.r11.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x8214c1a8
	if (!ctx.cr6.gt) goto loc_8214C1A8;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// addi r9,r4,63
	ctx.r9.s64 = ctx.r4.s64 + 63;
loc_8214C150:
	// lbz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r11,-1(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + -1);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8214c168
	if (!ctx.cr6.eq) goto loc_8214C168;
	// addi r11,r11,-21
	ctx.r11.s64 = ctx.r11.s64 + -21;
	// stb r11,-1(r9)
	REX_STORE_U8(ctx.r9.u32 + -1, ctx.r11.u8);
loc_8214C168:
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// blt cr6,0x8214c19c
	if (ctx.cr6.lt) goto loc_8214C19C;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// ble cr6,0x8214c198
	if (!ctx.cr6.gt) goto loc_8214C198;
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// ble cr6,0x8214c1c8
	if (!ctx.cr6.gt) goto loc_8214C1C8;
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// ble cr6,0x8214c19c
	if (!ctx.cr6.gt) goto loc_8214C19C;
	// cmplwi cr6,r10,17
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 17, ctx.xer);
	// bgt cr6,0x8214c19c
	if (ctx.cr6.gt) goto loc_8214C19C;
loc_8214C198:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_8214C19C:
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x8214c150
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8214C150;
loc_8214C1A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bgt cr6,0x8214c1d0
	if (ctx.cr6.gt) goto loc_8214C1D0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8214c428
	if (!ctx.cr6.gt) goto loc_8214C428;
	// b 0x8214c1d4
	goto loc_8214C1D4;
loc_8214C1C8:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// b 0x8214c19c
	goto loc_8214C19C;
loc_8214C1D0:
	// stw r30,0(r25)
	REX_STORE_U32(r25.u32 + 0, r30.u32);
loc_8214C1D4:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x8214c428
	if (!ctx.cr6.gt) goto loc_8214C428;
	// mr r31,r29
	r31.u64 = r29.u64;
	// mr r28,r26
	r28.u64 = r26.u64;
loc_8214C1E4:
	// lbz r11,62(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 62);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lbz r8,61(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 61);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rotlwi r6,r11,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lbz r10,63(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 63);
	// rotlwi r8,r8,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r11,r31,61
	ctx.r11.s64 = r31.s64 + 61;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r9,r6,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stb r9,62(r31)
	REX_STORE_U8(r31.u32 + 62, ctx.r9.u8);
	// stb r8,61(r31)
	REX_STORE_U8(r31.u32 + 61, ctx.r8.u8);
	// bgt cr6,0x8214c41c
	if (ctx.cr6.gt) goto loc_8214C41C;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,-22752
	ctx.r12.s64 = ctx.r12.s64 + -22752;
	// lbzx r0,r12,r10
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r10.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32235
	ctx.r12.s64 = -2112552960;
	// nop 
	// addi r12,r12,-15796
	ctx.r12.s64 = ctx.r12.s64 + -15796;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8214C24C;
	case 1:
		goto loc_8214C2B4;
	case 2:
		goto loc_8214C274;
	case 3:
		goto loc_8214C298;
	case 4:
		goto loc_8214C2D0;
	case 5:
		goto loc_8214C2F8;
	case 6:
		goto loc_8214C320;
	case 7:
		goto loc_8214C38C;
	case 8:
		goto loc_8214C41C;
	case 9:
		goto loc_8214C41C;
	case 10:
		goto loc_8214C41C;
	case 11:
		goto loc_8214C338;
	case 12:
		goto loc_8214C350;
	case 13:
		goto loc_8214C368;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8214C24C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8214c268
	if (ctx.cr6.eq) goto loc_8214C268;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82149690
	ctx.lr = 0x8214C264;
	sub_82149690(ctx, base);
	// b 0x8214c26c
	goto loc_8214C26C;
loc_8214C268:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214C26C:
	// addi r30,r30,92
	r30.s64 = r30.s64 + 92;
	// b 0x8214c3fc
	goto loc_8214C3FC;
loc_8214C274:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8214c28c
	if (ctx.cr6.eq) goto loc_8214C28C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82149370
	ctx.lr = 0x8214C288;
	sub_82149370(ctx, base);
	// b 0x8214c290
	goto loc_8214C290;
loc_8214C28C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214C290:
	// addi r30,r30,68
	r30.s64 = r30.s64 + 68;
	// b 0x8214c3fc
	goto loc_8214C3FC;
loc_8214C298:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8214c314
	if (ctx.cr6.eq) goto loc_8214C314;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821495a8
	ctx.lr = 0x8214C2B0;
	sub_821495A8(ctx, base);
	// b 0x8214c318
	goto loc_8214C318;
loc_8214C2B4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8214c2ec
	if (ctx.cr6.eq) goto loc_8214C2EC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82149a00
	ctx.lr = 0x8214C2CC;
	sub_82149A00(ctx, base);
	// b 0x8214c2f0
	goto loc_8214C2F0;
loc_8214C2D0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8214c2ec
	if (ctx.cr6.eq) goto loc_8214C2EC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82149ac8
	ctx.lr = 0x8214C2E8;
	sub_82149AC8(ctx, base);
	// b 0x8214c2f0
	goto loc_8214C2F0;
loc_8214C2EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214C2F0:
	// addi r30,r30,76
	r30.s64 = r30.s64 + 76;
	// b 0x8214c3fc
	goto loc_8214C3FC;
loc_8214C2F8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8214c314
	if (ctx.cr6.eq) goto loc_8214C314;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82149c98
	ctx.lr = 0x8214C310;
	sub_82149C98(ctx, base);
	// b 0x8214c318
	goto loc_8214C318;
loc_8214C314:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214C318:
	// addi r30,r30,108
	r30.s64 = r30.s64 + 108;
	// b 0x8214c3fc
	goto loc_8214C3FC;
loc_8214C320:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8214c380
	if (ctx.cr6.eq) goto loc_8214C380;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82149898
	ctx.lr = 0x8214C334;
	sub_82149898(ctx, base);
	// b 0x8214c384
	goto loc_8214C384;
loc_8214C338:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8214c380
	if (ctx.cr6.eq) goto loc_8214C380;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8214a1d0
	ctx.lr = 0x8214C34C;
	sub_8214A1D0(ctx, base);
	// b 0x8214c384
	goto loc_8214C384;
loc_8214C350:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8214c380
	if (ctx.cr6.eq) goto loc_8214C380;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8214a3c8
	ctx.lr = 0x8214C364;
	sub_8214A3C8(ctx, base);
	// b 0x8214c384
	goto loc_8214C384;
loc_8214C368:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8214c380
	if (ctx.cr6.eq) goto loc_8214C380;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8214a640
	ctx.lr = 0x8214C37C;
	sub_8214A640(ctx, base);
	// b 0x8214c384
	goto loc_8214C384;
loc_8214C380:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214C384:
	// addi r30,r30,60
	r30.s64 = r30.s64 + 60;
	// b 0x8214c3fc
	goto loc_8214C3FC;
loc_8214C38C:
	// lbz r9,-3(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -3);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8214c3c4
	if (ctx.cr0.eq) goto loc_8214C3C4;
	// addi r9,r11,-53
	ctx.r9.s64 = ctx.r11.s64 + -53;
loc_8214C3A0:
	// lbzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rotlwi r8,r8,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stbx r8,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r8,-3(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + -3);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8214c3a0
	if (ctx.cr6.lt) goto loc_8214C3A0;
loc_8214C3C4:
	// lbz r10,57(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 57);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8214c41c
	if (ctx.cr0.eq) goto loc_8214C41C;
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
loc_8214C3D8:
	// lbzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r9,57(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 57);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8214c3d8
	if (ctx.cr6.lt) goto loc_8214C3D8;
loc_8214C3FC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214c41c
	if (ctx.cr6.eq) goto loc_8214C41C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8214c418
	if (ctx.cr6.eq) goto loc_8214C418;
	// subf r11,r27,r3
	ctx.r11.u64 = ctx.r3.u64 - r27.u64;
	// stw r3,24(r27)
	REX_STORE_U32(r27.u32 + 24, ctx.r3.u32);
	// stw r11,28(r27)
	REX_STORE_U32(r27.u32 + 28, ctx.r11.u32);
loc_8214C418:
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8214C41C:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// bne 0x8214c1e4
	if (!ctx.cr0.eq) goto loc_8214C1E4;
loc_8214C428:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r25,4
	ctx.r3.s64 = r25.s64 + 4;
	// bl 0x8216b998
	ctx.lr = 0x8214C440;
	sub_8216B998(ctx, base);
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8215C428) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8215C430;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,128(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// addi r10,r3,80
	ctx.r10.s64 = ctx.r3.s64 + 80;
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// add r29,r9,r4
	r29.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subf r28,r11,r10
	r28.u64 = ctx.r10.u64 - ctx.r11.u64;
	// li r30,3
	r30.s64 = 3;
loc_8215C454:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r28,r31
	ctx.r3.u64 = r28.u64 + r31.u64;
	// bl 0x820e1df8
	ctx.lr = 0x8215C464;
	sub_820E1DF8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x8215c454
	if (!ctx.cr0.eq) goto loc_8215C454;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8215D1D8) {
	REX_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x821dd680
	sub_821DD680(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8215D360) {
	REX_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x821dd680
	sub_821DD680(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8215D448) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x821dd680
	ctx.lr = 0x8215D46C;
	sub_821DD680(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8215d480
	if (!ctx.cr6.eq) goto loc_8215D480;
loc_8215D478:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8215d4d4
	goto loc_8215D4D4;
loc_8215D480:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,9
	ctx.r4.s64 = 9;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x821dd680
	ctx.lr = 0x8215D494;
	sub_821DD680(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8215d478
	if (ctx.cr6.eq) goto loc_8215D478;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8215d4a8
	if (!ctx.cr6.eq) goto loc_8215D4A8;
	// li r31,2
	r31.s64 = 2;
loc_8215D4A8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,10
	ctx.r4.s64 = 10;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x821dd680
	ctx.lr = 0x8215D4BC;
	sub_821DD680(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8215d478
	if (ctx.cr6.eq) goto loc_8215D478;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8215d4d0
	if (!ctx.cr6.eq) goto loc_8215D4D0;
	// li r31,2
	r31.s64 = 2;
loc_8215D4D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8215D4D4:
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

DEFINE_REX_FUNC(sub_8215F2F8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// b 0x8215e210
	sub_8215E210(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8215F3C8) {
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
	// bl 0x822d4e78
	ctx.lr = 0x8215F3D0;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f38
	ctx.lr = 0x8215F3D8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,12(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,184(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// bl 0x820e4bb0
	ctx.lr = 0x8215F3EC;
	sub_820E4BB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r3.u32);
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f29,16200(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16200);
	f29.f64 = double(temp.f32);
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// lfs f30,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f30.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,-12800(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -12800);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lfs f28,16032(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16032);
	f28.f64 = double(temp.f32);
	// addi r7,r11,-12808
	ctx.r7.s64 = ctx.r11.s64 + -12808;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r8,10
	ctx.r8.s64 = 10;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stfs f29,88(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f28,100(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x821675c0
	ctx.lr = 0x8215F460;
	sub_821675C0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f29,88(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r9,-12820
	ctx.r7.s64 = ctx.r9.s64 + -12820;
	// lwz r3,188(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 188);
	// lfs f0,-12812(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12812);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r8,10
	ctx.r8.s64 = 10;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821675c0
	ctx.lr = 0x8215F4A4;
	sub_821675C0(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r3,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r28,r10,-13496
	r28.s64 = ctx.r10.s64 + -13496;
	// beq cr6,0x8215f4c4
	if (ctx.cr6.eq) goto loc_8215F4C4;
	// addi r10,r28,-192
	ctx.r10.s64 = r28.s64 + -192;
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
loc_8215F4C4:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215f4d8
	if (ctx.cr6.eq) goto loc_8215F4D8;
	// addi r10,r28,-192
	ctx.r10.s64 = r28.s64 + -192;
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
loc_8215F4D8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f28,100(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r7,r9,-12828
	ctx.r7.s64 = ctx.r9.s64 + -12828;
	// lfs f0,16264(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16264);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r25,140
	ctx.r9.s64 = r25.s64 + 140;
	// lfs f13,28252(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 28252);
	ctx.f13.f64 = double(temp.f32);
	// li r8,6
	ctx.r8.s64 = 6;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,188(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 188);
	// bl 0x821675c0
	ctx.lr = 0x8215F530;
	sub_821675C0(ctx, base);
	// li r24,6
	r24.s64 = 6;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// beq 0x8215f55c
	if (ctx.cr0.eq) goto loc_8215F55C;
	// li r11,204
	ctx.r11.s64 = 204;
	// addi r10,r28,-128
	ctx.r10.s64 = r28.s64 + -128;
	// stb r11,147(r3)
	REX_STORE_U8(ctx.r3.u32 + 147, ctx.r11.u8);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// stw r24,192(r11)
	REX_STORE_U32(ctx.r11.u32 + 192, r24.u32);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
loc_8215F55C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r29,r31,124
	r29.s64 = r31.s64 + 124;
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// li r26,10
	r26.s64 = 10;
	// lfs f0,16188(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16188);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,28856(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28856);
	ctx.f13.f64 = double(temp.f32);
	// li r30,1
	r30.s64 = 1;
	// lfs f12,20484(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20484);
	ctx.f12.f64 = double(temp.f32);
	// addi r27,r11,-12836
	r27.s64 = ctx.r11.s64 + -12836;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_8215F5A8:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r3,188(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 188);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821675c0
	ctx.lr = 0x8215F5CC;
	sub_821675C0(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8215f5f4
	if (ctx.cr0.eq) goto loc_8215F5F4;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r10,r28,64
	ctx.r10.s64 = r28.s64 + 64;
	// std r11,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, ctx.r11.u64);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r30,192(r11)
	REX_STORE_U32(ctx.r11.u32 + 192, r30.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
loc_8215F5F4:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x8215f5a8
	if (!ctx.cr0.eq) goto loc_8215F5A8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r29,r25,172
	r29.s64 = r25.s64 + 172;
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f29,16172(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16172);
	f29.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f28,15632(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15632);
	f28.f64 = double(temp.f32);
	// addi r7,r7,-12848
	ctx.r7.s64 = ctx.r7.s64 + -12848;
	// lfs f0,-12840(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -12840);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// stfs f29,88(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stfs f28,96(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,188(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 188);
	// bl 0x821675c0
	ctx.lr = 0x8215F664;
	sub_821675C0(ctx, base);
	// stw r3,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8215f678
	if (ctx.cr0.eq) goto loc_8215F678;
	// addi r11,r28,-64
	ctx.r11.s64 = r28.s64 + -64;
	// stw r11,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
loc_8215F678:
	// stfs f28,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f29,88(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r7,r11,-12856
	ctx.r7.s64 = ctx.r11.s64 + -12856;
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// li r8,3
	ctx.r8.s64 = 3;
	// lwz r3,188(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 188);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821675c0
	ctx.lr = 0x8215F6B0;
	sub_821675C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r3.u32);
	// beq 0x8215f6cc
	if (ctx.cr0.eq) goto loc_8215F6CC;
	// stb r30,189(r3)
	REX_STORE_U8(ctx.r3.u32 + 189, r30.u8);
	// addi r11,r28,-64
	ctx.r11.s64 = r28.s64 + -64;
	// lwz r10,168(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 168);
	// stw r11,96(r10)
	REX_STORE_U32(ctx.r10.u32 + 96, ctx.r11.u32);
loc_8215F6CC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r27,r31,96
	r27.s64 = r31.s64 + 96;
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f29,28548(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28548);
	f29.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f28,-24024(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -24024);
	f28.f64 = double(temp.f32);
	// addi r7,r7,-12864
	ctx.r7.s64 = ctx.r7.s64 + -12864;
	// lfs f0,28228(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 28228);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// stfs f29,88(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r8,9
	ctx.r8.s64 = 9;
	// stfs f28,96(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,188(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 188);
	// bl 0x821675c0
	ctx.lr = 0x8215F730;
	sub_821675C0(ctx, base);
	// li r29,191
	r29.s64 = 191;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r3.u32);
	// beq 0x8215f75c
	if (ctx.cr0.eq) goto loc_8215F75C;
	// std r30,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, r30.u64);
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// stb r29,147(r11)
	REX_STORE_U8(ctx.r11.u32 + 147, r29.u8);
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// stw r24,192(r11)
	REX_STORE_U32(ctx.r11.u32 + 192, r24.u32);
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// stw r28,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, r28.u32);
loc_8215F75C:
	// stfs f28,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f29,88(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r7,r11,-12872
	ctx.r7.s64 = ctx.r11.s64 + -12872;
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// li r8,9
	ctx.r8.s64 = 9;
	// lwz r3,188(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 188);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x821675c0
	ctx.lr = 0x8215F794;
	sub_821675C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r3.u32);
	// beq 0x8215f7bc
	if (ctx.cr0.eq) goto loc_8215F7BC;
	// std r30,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, r30.u64);
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// stb r29,147(r11)
	REX_STORE_U8(ctx.r11.u32 + 147, r29.u8);
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// stw r24,192(r11)
	REX_STORE_U32(ctx.r11.u32 + 192, r24.u32);
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// stw r28,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, r28.u32);
loc_8215F7BC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f29,88(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r9,-12880
	ctx.r7.s64 = ctx.r9.s64 + -12880;
	// lwz r3,188(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 188);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// lfs f0,32100(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32100);
	ctx.f0.f64 = double(temp.f32);
	// li r8,9
	ctx.r8.s64 = 9;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x821675c0
	ctx.lr = 0x8215F7FC;
	sub_821675C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r3.u32);
	// beq 0x8215f824
	if (ctx.cr0.eq) goto loc_8215F824;
	// std r30,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, r30.u64);
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// stb r29,147(r11)
	REX_STORE_U8(ctx.r11.u32 + 147, r29.u8);
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// stw r24,192(r11)
	REX_STORE_U32(ctx.r11.u32 + 192, r24.u32);
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// stw r28,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, r28.u32);
loc_8215F824:
	// lis r29,-32165
	r29.s64 = -2107965440;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-17596
	ctx.r6.s64 = ctx.r11.s64 + -17596;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-32480(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -32480);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x821f7d50
	ctx.lr = 0x8215F84C;
	sub_821F7D50(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r27,0
	r27.s64 = 0;
	// addi r28,r10,31764
	r28.s64 = ctx.r10.s64 + 31764;
	// beq 0x8215f868
	if (ctx.cr0.eq) goto loc_8215F868;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// b 0x8215f86c
	goto loc_8215F86C;
loc_8215F868:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_8215F86C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215f8a0
	if (ctx.cr6.eq) goto loc_8215F8A0;
	// lwz r10,184(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stb r27,104(r11)
	REX_STORE_U8(ctx.r11.u32 + 104, r27.u8);
	// stb r30,105(r11)
	REX_STORE_U8(ctx.r11.u32 + 105, r30.u8);
	// stb r30,106(r11)
	REX_STORE_U8(ctx.r11.u32 + 106, r30.u8);
	// stb r27,108(r11)
	REX_STORE_U8(ctx.r11.u32 + 108, r27.u8);
	// lfs f0,16352(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16352);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// stfs f0,92(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// stb r30,90(r11)
	REX_STORE_U8(ctx.r11.u32 + 90, r30.u8);
	// stb r30,91(r11)
	REX_STORE_U8(ctx.r11.u32 + 91, r30.u8);
loc_8215F8A0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,-32480(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -32480);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-12888
	ctx.r6.s64 = ctx.r11.s64 + -12888;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x821f7d50
	ctx.lr = 0x8215F8C4;
	sub_821F7D50(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215f8d4
	if (ctx.cr0.eq) goto loc_8215F8D4;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// b 0x8215f8d8
	goto loc_8215F8D8;
loc_8215F8D4:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_8215F8D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215f910
	if (ctx.cr6.eq) goto loc_8215F910;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stb r30,90(r11)
	REX_STORE_U8(ctx.r11.u32 + 90, r30.u8);
	// stb r30,91(r11)
	REX_STORE_U8(ctx.r11.u32 + 91, r30.u8);
	// lfs f0,-12892(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -12892);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// lwz r10,184(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 184);
	// stb r30,104(r11)
	REX_STORE_U8(ctx.r11.u32 + 104, r30.u8);
	// stb r30,105(r11)
	REX_STORE_U8(ctx.r11.u32 + 105, r30.u8);
	// stb r30,106(r11)
	REX_STORE_U8(ctx.r11.u32 + 106, r30.u8);
	// stb r30,107(r11)
	REX_STORE_U8(ctx.r11.u32 + 107, r30.u8);
	// stw r10,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// stb r30,109(r11)
	REX_STORE_U8(ctx.r11.u32 + 109, r30.u8);
loc_8215F910:
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f84
	ctx.lr = 0x8215F920;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82177C90) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-5404
	ctx.r11.s64 = ctx.r11.s64 + -5404;
	// addi r30,r3,208
	r30.s64 = ctx.r3.s64 + 208;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,208(r3)
	REX_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,212(r3)
	REX_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,216(r3)
	REX_STORE_U32(ctx.r3.u32 + 216, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,220(r3)
	REX_STORE_U32(ctx.r3.u32 + 220, ctx.r11.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,224(r3)
	REX_STORE_U32(ctx.r3.u32 + 224, ctx.r11.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,232(r3)
	REX_STORE_U32(ctx.r3.u32 + 232, ctx.r11.u32);
	// lwz r11,12(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// stw r11,236(r3)
	REX_STORE_U32(ctx.r3.u32 + 236, ctx.r11.u32);
	// stw r6,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, ctx.r6.u32);
	// bl 0x82177b70
	ctx.lr = 0x82177D00;
	sub_82177B70(ctx, base);
	// bl 0x821fee88
	ctx.lr = 0x82177D04;
	sub_821FEE88(ctx, base);
	// lwa r11,192(r31)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r31.u32 + 192));
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r10,196
	ctx.r10.s64 = 196;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,204(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 204);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r31,r10
	REX_STORE_U32(r31.u32 + ctx.r10.u32, ctx.f0.u32);
	// bl 0x821e7888
	ctx.lr = 0x82177D38;
	sub_821E7888(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// addic. r10,r31,112
	ctx.xer.ca = r31.u32 > 4294967183;
	ctx.r10.s64 = r31.s64 + 112;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r9,88(r31)
	REX_STORE_U16(r31.u32 + 88, ctx.r9.u16);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r9,90(r31)
	REX_STORE_U8(r31.u32 + 90, ctx.r9.u8);
	// std r8,80(r31)
	REX_STORE_U64(r31.u32 + 80, ctx.r8.u64);
	// beq 0x82177d60
	if (ctx.cr0.eq) goto loc_82177D60;
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// b 0x82177d64
	goto loc_82177D64;
loc_82177D60:
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
loc_82177D64:
	// stb r11,106(r31)
	REX_STORE_U8(r31.u32 + 106, ctx.r11.u8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r11,107(r31)
	REX_STORE_U8(r31.u32 + 107, ctx.r11.u8);
	// lfs f13,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,109(r31)
	REX_STORE_U8(r31.u32 + 109, ctx.r11.u8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stb r11,105(r31)
	REX_STORE_U8(r31.u32 + 105, ctx.r11.u8);
	// lis r8,-32173
	ctx.r8.s64 = -2108489728;
	// lis r7,-32174
	ctx.r7.s64 = -2108555264;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lfs f0,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r8,-4224
	ctx.r8.s64 = ctx.r8.s64 + -4224;
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// addi r11,r7,-28432
	ctx.r11.s64 = ctx.r7.s64 + -28432;
	// lfs f5,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f5.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// addi r8,r8,112
	ctx.r8.s64 = ctx.r8.s64 + 112;
	// fmr f4,f5
	ctx.f4.f64 = ctx.f5.f64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmr f3,f5
	ctx.f3.f64 = ctx.f5.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// bl 0x8210ded0
	ctx.lr = 0x82177DCC;
	sub_8210DED0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_8217AF58) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-5040
	ctx.r6.s64 = ctx.r11.s64 + -5040;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,768
	ctx.r4.s64 = 768;
	// bl 0x821f7d50
	ctx.lr = 0x8217AF90;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217afa0
	if (ctx.cr0.eq) goto loc_8217AFA0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8217abe8
	ctx.lr = 0x8217AFA0;
	sub_8217ABE8(ctx, base);
loc_8217AFA0:
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

DEFINE_REX_FUNC(sub_8217C3D0) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e80
	ctx.lr = 0x8217C3D8;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f1c
	ctx.lr = 0x8217C3E0;
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32166
	r29.s64 = -2108030976;
	// lfs f28,136(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 136);
	f28.f64 = double(temp.f32);
	// lfs f27,140(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 140);
	f27.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r27,0
	r27.s64 = 0;
	// lwz r11,7792(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 7792);
	// addi r3,r11,1700
	ctx.r3.s64 = ctx.r11.s64 + 1700;
	// bl 0x82202070
	ctx.lr = 0x8217C408;
	sub_82202070(ctx, base);
	// addi r30,r31,148
	r30.s64 = r31.s64 + 148;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1ba8
	ctx.lr = 0x8217C41C;
	sub_820E1BA8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f30,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f30.f64 = double(temp.f32);
	// lfs f31,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f31.f64 = double(temp.f32);
	// stfs f30,128(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x820e1c50
	ctx.lr = 0x8217C44C;
	sub_820E1C50(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x820e2290
	ctx.lr = 0x8217C458;
	sub_820E2290(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820e1c50
	ctx.lr = 0x8217C468;
	sub_820E1C50(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820e2290
	ctx.lr = 0x8217C474;
	sub_820E2290(ctx, base);
	// lwz r11,7792(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 7792);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,1700
	ctx.r3.s64 = ctx.r11.s64 + 1700;
	// bl 0x82202070
	ctx.lr = 0x8217C484;
	sub_82202070(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1ba8
	ctx.lr = 0x8217C494;
	sub_820E1BA8(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f30,116(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x820e2290
	ctx.lr = 0x8217C4B8;
	sub_820E2290(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e2290
	ctx.lr = 0x8217C4C4;
	sub_820E2290(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1c28
	ctx.lr = 0x8217C4D0;
	sub_820E1C28(ctx, base);
	// bl 0x822d6830
	ctx.lr = 0x8217C4D4;
	sub_822D6830(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// lfs f0,1988(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1988);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// ble cr6,0x8217c4f4
	if (!ctx.cr6.gt) goto loc_8217C4F4;
	// fneg f1,f1
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
loc_8217C4F4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f30.f64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lfs f23,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f23.f64 = double(temp.f32);
	// fmr f2,f23
	ctx.f2.f64 = f23.f64;
	// bl 0x820e0ec8
	ctx.lr = 0x8217C50C;
	sub_820E0EC8(ctx, base);
	// bl 0x821fee88
	ctx.lr = 0x8217C510;
	sub_821FEE88(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,27848(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 27848);
	f30.f64 = double(temp.f32);
	// lfs f29,16260(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16260);
	f29.f64 = double(temp.f32);
	// fmadds f0,f1,f30,f29
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f30.f64, f29.f64)));
	// fmuls f26,f0,f28
	f26.f64 = double(float(ctx.f0.f64 * f28.f64));
	// bl 0x821fee88
	ctx.lr = 0x8217C52C;
	sub_821FEE88(ctx, base);
	// fmadds f0,f1,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f30.f64, f29.f64)));
	// fmuls f30,f0,f27
	f30.f64 = double(float(ctx.f0.f64 * f27.f64));
	// bl 0x821fecf0
	ctx.lr = 0x8217C538;
	sub_821FECF0(ctx, base);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217c544
	if (ctx.cr0.eq) goto loc_8217C544;
	// fneg f26,f26
	ctx.fpscr.disableFlushMode();
	f26.u64 = f26.u64 ^ 0x8000000000000000;
loc_8217C544:
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f26.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1cc0
	ctx.lr = 0x8217C554;
	sub_820E1CC0(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x820e1cc0
	ctx.lr = 0x8217C564;
	sub_820E1CC0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1b28
	ctx.lr = 0x8217C574;
	sub_820E1B28(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1b28
	ctx.lr = 0x8217C584;
	sub_820E1B28(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r1,240
	r30.s64 = ctx.r1.s64 + 240;
	// addi r26,r11,-4924
	r26.s64 = ctx.r11.s64 + -4924;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,777
	ctx.r4.s64 = 777;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r29,4(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r28,8(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// stw r29,4(r30)
	REX_STORE_U32(r30.u32 + 4, r29.u32);
	// stw r28,8(r30)
	REX_STORE_U32(r30.u32 + 8, r28.u32);
	// stw r10,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// bl 0x821f7d50
	ctx.lr = 0x8217C5D4;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217c604
	if (ctx.cr0.eq) goto loc_8217C604;
	// addi r10,r31,132
	ctx.r10.s64 = r31.s64 + 132;
	// lwz r4,144(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 144);
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x82178b18
	ctx.lr = 0x8217C600;
	sub_82178B18(ctx, base);
	// li r27,1
	r27.s64 = 1;
loc_8217C604:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,164(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f31,168(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f31,176(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lfs f0,-30132(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30132);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,16308(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16308);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lfs f0,2024(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2024);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,16276(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16276);
	ctx.f12.f64 = double(temp.f32);
	// stfs f31,184(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f12,192(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fctiwz f13,f11
	ctx.f13.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f13,224(r1)
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.f13.u64);
	// lwz r11,228(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// subfic r30,r11,2
	ctx.xer.ca = ctx.r11.u32 <= 2;
	r30.u64 = static_cast<uint64_t>(2) - ctx.r11.u64;
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f12,212(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f31,220(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// ble cr6,0x8217c688
	if (!ctx.cr6.gt) goto loc_8217C688;
	// li r30,5
	r30.s64 = 5;
loc_8217C688:
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x8217c6b0
	if (!ctx.cr6.gt) goto loc_8217C6B0;
loc_8217C694:
	// bl 0x821fecf0
	ctx.lr = 0x8217C698;
	sub_821FECF0(ctx, base);
	// clrlwi r11,r3,29
	ctx.r11.u64 = ctx.r3.u32 & 0x7;
	// li r10,1
	ctx.r10.s64 = 1;
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// or r29,r11,r29
	r29.u64 = ctx.r11.u64 | r29.u64;
	// bne 0x8217c694
	if (!ctx.cr0.eq) goto loc_8217C694;
loc_8217C6B0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r30,r1,160
	r30.s64 = ctx.r1.s64 + 160;
	// lfs f29,16272(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16272);
	f29.f64 = double(temp.f32);
	// li r28,8
	r28.s64 = 8;
	// lfs f30,16676(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16676);
	f30.f64 = double(temp.f32);
	// lfs f24,2352(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2352);
	f24.f64 = double(temp.f32);
	// lfs f31,32172(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 32172);
	f31.f64 = double(temp.f32);
loc_8217C6D8:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217c7a4
	if (ctx.cr0.eq) goto loc_8217C7A4;
	// bl 0x821fee88
	ctx.lr = 0x8217C6E4;
	sub_821FEE88(ctx, base);
	// fmadds f26,f1,f31,f23
	ctx.fpscr.disableFlushMode();
	f26.f64 = double(float(std::fma(ctx.f1.f64, f31.f64, f23.f64)));
	// bl 0x821fee88
	ctx.lr = 0x8217C6EC;
	sub_821FEE88(ctx, base);
	// fmadds f25,f1,f31,f24
	ctx.fpscr.disableFlushMode();
	f25.f64 = double(float(std::fma(ctx.f1.f64, f31.f64, f24.f64)));
	// bl 0x821fee88
	ctx.lr = 0x8217C6F4;
	sub_821FEE88(ctx, base);
	// fmadds f0,f1,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f30.f64, f29.f64)));
	// lfs f22,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	f22.f64 = double(temp.f32);
	// fmuls f21,f0,f28
	f21.f64 = double(float(ctx.f0.f64 * f28.f64));
	// bl 0x821fee88
	ctx.lr = 0x8217C704;
	sub_821FEE88(ctx, base);
	// fmadds f0,f1,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f30.f64, f29.f64)));
	// lfs f13,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// fmuls f1,f13,f21
	ctx.f1.f64 = double(float(ctx.f13.f64 * f21.f64));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * f27.f64));
	// fmuls f22,f0,f22
	f22.f64 = double(float(ctx.f0.f64 * f22.f64));
	// bl 0x820e1cc0
	ctx.lr = 0x8217C724;
	sub_820E1CC0(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// fmr f1,f22
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f22.f64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e1cc0
	ctx.lr = 0x8217C734;
	sub_820E1CC0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1b28
	ctx.lr = 0x8217C744;
	sub_820E1B28(ctx, base);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1b28
	ctx.lr = 0x8217C754;
	sub_820E1B28(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,777
	ctx.r4.s64 = 777;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7d50
	ctx.lr = 0x8217C774;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217c7a4
	if (ctx.cr0.eq) goto loc_8217C7A4;
	// addi r10,r31,132
	ctx.r10.s64 = r31.s64 + 132;
	// lwz r4,144(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 144);
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// fmr f3,f25
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f25.f64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// fmuls f2,f26,f27
	ctx.f2.f64 = double(float(f26.f64 * f27.f64));
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// fmuls f1,f26,f28
	ctx.f1.f64 = double(float(f26.f64 * f28.f64));
	// bl 0x82178b18
	ctx.lr = 0x8217C7A0;
	sub_82178B18(ctx, base);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
loc_8217C7A4:
	// srawi r29,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	r29.s64 = r29.s32 >> 1;
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x8217c6d8
	if (!ctx.cr0.eq) goto loc_8217C6D8;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f68
	ctx.lr = 0x8217C7C0;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82189170) {
	REX_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r5,r11,27808
	ctx.r5.s64 = ctx.r11.s64 + 27808;
loc_82189184:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 + ctx.r5.u64;
loc_82189190:
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulli r7,r7,14424
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(14424));
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// stw r6,980(r7)
	REX_STORE_U32(ctx.r7.u32 + 980, ctx.r6.u32);
	// stbx r6,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82189190
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82189190;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// blt cr6,0x82189184
	if (ctx.cr6.lt) goto loc_82189184;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r11,r11,65496
	ctx.r11.u64 = ctx.r11.u64 | 65496;
	// ori r10,r10,65500
	ctx.r10.u64 = ctx.r10.u64 | 65500;
	// ori r8,r8,65502
	ctx.r8.u64 = ctx.r8.u64 | 65502;
	// ori r7,r7,65504
	ctx.r7.u64 = ctx.r7.u64 | 65504;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// stwx r9,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r9.u32);
	// sthx r6,r3,r10
	REX_STORE_U16(ctx.r3.u32 + ctx.r10.u32, ctx.r6.u16);
	// sthx r5,r3,r8
	REX_STORE_U16(ctx.r3.u32 + ctx.r8.u32, ctx.r5.u16);
	// sthx r9,r3,r7
	REX_STORE_U16(ctx.r3.u32 + ctx.r7.u32, ctx.r9.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218A980) {
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
	ctx.lr = 0x8218A988;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// bl 0x820e0810
	ctx.lr = 0x8218A9B0;
	sub_820E0810(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f13,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lfs f12,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// lfs f11,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * f31.f64));
	// lfs f10,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * f31.f64));
	// lfs f9,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * f31.f64));
	// lfs f8,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * f31.f64));
	// lfs f7,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 * f31.f64));
	// lfs f6,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f7,f31
	ctx.f7.f64 = double(float(ctx.f7.f64 * f31.f64));
	// fmuls f6,f6,f31
	ctx.f6.f64 = double(float(ctx.f6.f64 * f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f3,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0ec8
	ctx.lr = 0x8218AA30;
	sub_820E0EC8(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e0590
	ctx.lr = 0x8218AA40;
	sub_820E0590(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f8,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f12,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// lfs f4,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// stfs f4,128(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f3,136(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f9,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f7,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f12,f5,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// lfs f5,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,132(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ble cr6,0x8218ab14
	if (!ctx.cr6.gt) goto loc_8218AB14;
loc_8218AAEC:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e1df8
	ctx.lr = 0x8218AAFC;
	sub_820E1DF8(ctx, base);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bgt 0x8218aaec
	if (ctx.cr0.gt) goto loc_8218AAEC;
loc_8218AB14:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82195578) {
	REX_FUNC_PROLOGUE();
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stb r10,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, ctx.r10.u8);
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stb r9,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, ctx.r9.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82196170) {
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
	ctx.lr = 0x82196178;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x822d4f30
	ctx.lr = 0x82196180;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,4108
	ctx.r11.s64 = ctx.r11.s64 + 4108;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// bl 0x820e4bb0
	ctx.lr = 0x821961B4;
	sub_820E4BB0(ctx, base);
	// stw r3,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r3.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r10,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// addi r26,r31,96
	r26.s64 = r31.s64 + 96;
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lfs f31,29340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 29340);
	f31.f64 = double(temp.f32);
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// stfs f31,88(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x821961FC;
	sub_822D4FA0(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lis r9,15
	ctx.r9.s64 = 983040;
	// stb r23,133(r31)
	REX_STORE_U8(r31.u32 + 133, r23.u8);
	// add. r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r30,128(r31)
	REX_STORE_U32(r31.u32 + 128, r30.u32);
	// ori r27,r9,16959
	r27.u64 = ctx.r9.u64 | 16959;
	// stb r24,132(r31)
	REX_STORE_U8(r31.u32 + 132, r24.u8);
	// bge 0x82196224
	if (!ctx.cr0.lt) goto loc_82196224;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// b 0x82196230
	goto loc_82196230;
loc_82196224:
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r27.s32, ctx.xer);
	// ble cr6,0x82196234
	if (!ctx.cr6.gt) goto loc_82196234;
	// subf r11,r11,r27
	ctx.r11.u64 = r27.u64 - ctx.r11.u64;
loc_82196230:
	// stw r11,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r11.u32);
loc_82196234:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f13,20480(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20480);
	ctx.f13.f64 = double(temp.f32);
	// lfs f30,28312(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28312);
	f30.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,4008(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4008);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 + f30.f64));
	// lfs f26,-19084(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -19084);
	f26.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f13,1996(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f1,1992(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// li r4,116
	ctx.r4.s64 = 116;
	// stfs f1,92(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfs f1,108(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f26,84(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x821918a0
	ctx.lr = 0x821962A8;
	sub_821918A0(ctx, base);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r3,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r3.u32);
	// bne 0x821962e0
	if (!ctx.cr0.eq) goto loc_821962E0;
	// lbz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 132);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821962e0
	if (!ctx.cr0.eq) goto loc_821962E0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r5,r11,4100
	ctx.r5.s64 = ctx.r11.s64 + 4100;
	// addi r4,r10,21804
	ctx.r4.s64 = ctx.r10.s64 + 21804;
	// addi r3,r31,212
	ctx.r3.s64 = r31.s64 + 212;
	// bl 0x822d55f8
	ctx.lr = 0x821962D8;
	sub_822D55F8(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x821962fc
	goto loc_821962FC;
loc_821962E0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r5,r11,4096
	ctx.r5.s64 = ctx.r11.s64 + 4096;
	// addi r4,r10,21804
	ctx.r4.s64 = ctx.r10.s64 + 21804;
	// addi r3,r31,212
	ctx.r3.s64 = r31.s64 + 212;
	// bl 0x822d55f8
	ctx.lr = 0x821962F8;
	sub_822D55F8(ctx, base);
	// li r11,14
	ctx.r11.s64 = 14;
loc_821962FC:
	// lwz r5,128(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 128);
	// stw r11,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r11.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82196318
	if (!ctx.cr6.gt) goto loc_82196318;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,4088
	ctx.r4.s64 = ctx.r11.s64 + 4088;
	// b 0x82196340
	goto loc_82196340;
loc_82196318:
	// bne cr6,0x82196334
	if (!ctx.cr6.eq) goto loc_82196334;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r29,r31,148
	r29.s64 = r31.s64 + 148;
	// addi r4,r11,15964
	ctx.r4.s64 = ctx.r11.s64 + 15964;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d55f8
	ctx.lr = 0x82196330;
	sub_822D55F8(ctx, base);
	// b 0x8219634c
	goto loc_8219634C;
loc_82196334:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// addi r4,r11,4080
	ctx.r4.s64 = ctx.r11.s64 + 4080;
loc_82196340:
	// addi r29,r31,148
	r29.s64 = r31.s64 + 148;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d55f8
	ctx.lr = 0x8219634C;
	sub_822D55F8(ctx, base);
loc_8219634C:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822c80d0
	ctx.lr = 0x82196354;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8219636c
	if (ctx.cr0.eq) goto loc_8219636C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x820e7330
	ctx.lr = 0x82196368;
	sub_820E7330(ctx, base);
	// b 0x82196370
	goto loc_82196370;
loc_8219636C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82196370:
	// stw r3,280(r31)
	REX_STORE_U32(r31.u32 + 280, ctx.r3.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f2,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// li r30,-1
	r30.s64 = -1;
	// lfs f1,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,0(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lfs f31,-30184(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30184);
	f31.f64 = double(temp.f32);
	// lfs f29,4076(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4076);
	f29.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// bl 0x820e7428
	ctx.lr = 0x821963A4;
	sub_820E7428(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,280(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 280);
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 + f30.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f28,-8492(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8492);
	f28.f64 = double(temp.f32);
	// lfs f13,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fadds f2,f0,f28
	ctx.f2.f64 = double(float(ctx.f0.f64 + f28.f64));
	// lfs f0,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fnmsubs f1,f0,f13,f12
	ctx.f1.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f13.f64, -ctx.f12.f64)));
	// lfs f11,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x820e7380
	ctx.lr = 0x821963E0;
	sub_820E7380(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r27.s32, ctx.xer);
	// blt cr6,0x821963f0
	if (ctx.cr6.lt) goto loc_821963F0;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_821963F0:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r4,r10,4052
	ctx.r4.s64 = ctx.r10.s64 + 4052;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d55f8
	ctx.lr = 0x82196404;
	sub_822D55F8(ctx, base);
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822c80d0
	ctx.lr = 0x8219640C;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82196424
	if (ctx.cr0.eq) goto loc_82196424;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x820e7330
	ctx.lr = 0x82196420;
	sub_820E7330(ctx, base);
	// b 0x82196428
	goto loc_82196428;
loc_82196424:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82196428:
	// stw r3,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r3.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f2,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// bl 0x820e7428
	ctx.lr = 0x82196448;
	sub_820E7428(ctx, base);
	// lfs f11,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 + f30.f64));
	// fadds f10,f0,f26
	ctx.f10.f64 = double(float(ctx.f0.f64 + f26.f64));
	// lwz r3,284(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 284);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,2340(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2340);
	ctx.f13.f64 = double(temp.f32);
	// lfs f27,16352(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16352);
	f27.f64 = double(temp.f32);
	// lfs f12,16228(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16228);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f11,f10,f31
	ctx.f11.f64 = double(float(ctx.f10.f64 - f31.f64));
	// lfs f9,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f13,f11,f28
	ctx.f13.f64 = double(float(ctx.f11.f64 - f28.f64));
	// fsubs f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f2,f13,f27
	ctx.f2.f64 = double(float(ctx.f13.f64 - f27.f64));
	// bl 0x820e7380
	ctx.lr = 0x821964A0;
	sub_820E7380(ctx, base);
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822c80d0
	ctx.lr = 0x821964A8;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821964c0
	if (ctx.cr0.eq) goto loc_821964C0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x820e7330
	ctx.lr = 0x821964BC;
	sub_820E7330(ctx, base);
	// b 0x821964c4
	goto loc_821964C4;
loc_821964C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821964C4:
	// stw r3,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r3.u32);
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f2,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// ori r9,r9,255
	ctx.r9.u64 = ctx.r9.u64 | 255;
	// lfs f1,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// bl 0x820e7428
	ctx.lr = 0x821964E8;
	sub_820E7428(ctx, base);
	// lfs f13,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 + f26.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,288(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 288);
	// lfs f12,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-24284(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24284);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f0,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 - f31.f64));
	// lfs f13,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 - f28.f64));
	// fsubs f2,f0,f27
	ctx.f2.f64 = double(float(ctx.f0.f64 - f27.f64));
	// bl 0x820e7380
	ctx.lr = 0x82196524;
	sub_820E7380(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x822d4f7c
	ctx.lr = 0x82196534;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_821A56D0) {
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
	// li r30,0
	r30.s64 = 0;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// addi r31,r11,80
	r31.s64 = ctx.r11.s64 + 80;
	// lha r9,118(r11)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 118));
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mulli r9,r9,12
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(12));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,5932(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 5932);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821a5714
	if (!ctx.cr6.eq) goto loc_821A5714;
	// stw r30,5932(r10)
	REX_STORE_U32(ctx.r10.u32 + 5932, r30.u32);
loc_821A5714:
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a5728
	if (ctx.cr6.eq) goto loc_821A5728;
	// bl 0x8218c278
	ctx.lr = 0x821A5724;
	sub_8218C278(ctx, base);
	// stw r30,136(r31)
	REX_STORE_U32(r31.u32 + 136, r30.u32);
loc_821A5728:
	// lwz r3,140(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a573c
	if (ctx.cr6.eq) goto loc_821A573C;
	// bl 0x8218c278
	ctx.lr = 0x821A5738;
	sub_8218C278(ctx, base);
	// stw r30,140(r31)
	REX_STORE_U32(r31.u32 + 140, r30.u32);
loc_821A573C:
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

DEFINE_REX_FUNC(sub_821A78C8) {
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
	// li r31,-1
	r31.s64 = -1;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x821a790c
	if (!ctx.cr6.lt) goto loc_821A790C;
	// subfic r31,r4,1
	ctx.xer.ca = ctx.r4.u32 <= 1;
	r31.u64 = static_cast<uint64_t>(1) - ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a7a08
	if (ctx.cr6.eq) goto loc_821A7A08;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r10,r11,5880
	ctx.r10.s64 = ctx.r11.s64 + 5880;
	// lfs f1,5880(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5880);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// b 0x821a7940
	goto loc_821A7940;
loc_821A790C:
	// cmpwi cr6,r4,256
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 256, ctx.xer);
	// blt cr6,0x821a7948
	if (ctx.cr6.lt) goto loc_821A7948;
	// addi r11,r4,-256
	ctx.r11.s64 = ctx.r4.s64 + -256;
	// lis r9,-32174
	ctx.r9.s64 = -2108555264;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r9,5880
	ctx.r11.s64 = ctx.r9.s64 + 5880;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x821a7a08
	if (ctx.cr6.eq) goto loc_821A7A08;
	// lfs f4,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
loc_821A7940:
	// bl 0x82202c38
	ctx.lr = 0x821A7944;
	sub_82202C38(ctx, base);
	// b 0x821a7a08
	goto loc_821A7A08;
loc_821A7948:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lfs f10,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f10.f64 = double(temp.f32);
	// beq cr6,0x821a796c
	if (ctx.cr6.eq) goto loc_821A796C;
	// lfs f13,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821a7980
	goto loc_821A7980;
loc_821A796C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f13,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f10.f64;
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_821A7980:
	// cmpwi cr6,r4,192
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 192, ctx.xer);
	// blt cr6,0x821a79c8
	if (ctx.cr6.lt) goto loc_821A79C8;
	// cmpwi cr6,r4,193
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 193, ctx.xer);
	// ble cr6,0x821a79c0
	if (!ctx.cr6.gt) goto loc_821A79C0;
	// cmpwi cr6,r4,254
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 254, ctx.xer);
	// beq cr6,0x821a79f0
	if (ctx.cr6.eq) goto loc_821A79F0;
	// cmpwi cr6,r4,255
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 255, ctx.xer);
	// bne cr6,0x821a79c8
	if (!ctx.cr6.eq) goto loc_821A79C8;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821a79f0
	if (ctx.cr6.eq) goto loc_821A79F0;
	// lha r11,88(r6)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r6.u32 + 88));
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// addi r10,r10,14256
	ctx.r10.s64 = ctx.r10.s64 + 14256;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// b 0x821a79f0
	goto loc_821A79F0;
loc_821A79C0:
	// fmr f12,f10
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f10.f64;
	// b 0x821a79f0
	goto loc_821A79F0;
loc_821A79C8:
	// cmpwi cr6,r4,193
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 193, ctx.xer);
	// bge cr6,0x821a79f0
	if (!ctx.cr6.lt) goto loc_821A79F0;
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// lfs f13,16220(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16220);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
loc_821A79F0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a7a08
	if (ctx.cr6.eq) goto loc_821A7A08;
	// stfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
loc_821A7A08:
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

DEFINE_REX_FUNC(sub_821AF850) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x821af890
	if (!ctx.cr6.gt) goto loc_821AF890;
	// bl 0x820fefc8
	ctx.lr = 0x821AF870;
	sub_820FEFC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x821af8b0
	if (!ctx.cr6.gt) goto loc_821AF8B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// b 0x821af8b0
	goto loc_821AF8B0;
loc_821AF890:
	// bl 0x820fefc8
	ctx.lr = 0x821AF894;
	sub_820FEFC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,15944(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15944);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x821af8b0
	if (!ctx.cr6.lt) goto loc_821AF8B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
loc_821AF8B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B1050) {
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
	// bne cr6,0x821b1078
	if (!ctx.cr6.eq) goto loc_821B1078;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r11,r11,-7176
	ctx.r11.s64 = ctx.r11.s64 + -7176;
	// lwz r31,28(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
loc_821B1078:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r11,r11,-8304
	ctx.r11.s64 = ctx.r11.s64 + -8304;
	// lha r10,456(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 456));
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x821b10b0
	if (ctx.cr6.eq) goto loc_821B10B0;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x821b10b0
	if (ctx.cr6.eq) goto loc_821B10B0;
	// li r10,2
	ctx.r10.s64 = 2;
	// sth r10,456(r11)
	REX_STORE_U16(ctx.r11.u32 + 456, ctx.r10.u16);
	// bl 0x8218e678
	ctx.lr = 0x821B10A0;
	sub_8218E678(ctx, base);
	// bl 0x82120470
	ctx.lr = 0x821B10A4;
	sub_82120470(ctx, base);
	// li r4,500
	ctx.r4.s64 = 500;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8218e750
	ctx.lr = 0x821B10B0;
	sub_8218E750(ctx, base);
loc_821B10B0:
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

DEFINE_REX_FUNC(sub_821B2BB0) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,-9808(r10)
	REX_STORE_U32(ctx.r10.u32 + -9808, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B3030) {
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
	// li r6,100
	ctx.r6.s64 = 100;
	// addi r31,r11,-9940
	r31.s64 = ctx.r11.s64 + -9940;
	// li r3,0
	ctx.r3.s64 = 0;
	// lha r7,16(r31)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(r31.u32 + 16));
	// lha r5,20(r31)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r31.u32 + 20));
	// lha r4,24(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 24));
	// bl 0x821d0770
	ctx.lr = 0x821B3060;
	sub_821D0770(ctx, base);
	// li r6,100
	ctx.r6.s64 = 100;
	// lha r7,4(r31)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(r31.u32 + 4));
	// li r3,1
	ctx.r3.s64 = 1;
	// lha r5,8(r31)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r31.u32 + 8));
	// lha r4,12(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 12));
	// bl 0x821d0770
	ctx.lr = 0x821B3078;
	sub_821D0770(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r10,r10,-7072
	ctx.r10.s64 = ctx.r10.s64 + -7072;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821B308C:
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,19414(r10)
	REX_STORE_U32(ctx.r10.u32 + 19414, ctx.r9.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821b30a8
	if (ctx.cr0.eq) goto loc_821B30A8;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,74(r10)
	REX_STORE_U32(ctx.r10.u32 + 74, ctx.r11.u32);
loc_821B30A8:
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,3696
	ctx.r10.s64 = ctx.r10.s64 + 3696;
	// bdnz 0x821b308c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B308C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lha r3,0(r31)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r31.u32 + 0));
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,550
	ctx.r4.s64 = 550;
	// bl 0x821e0958
	ctx.lr = 0x821B30C8;
	sub_821E0958(ctx, base);
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

DEFINE_REX_FUNC(sub_821B9E40) {
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// addi r30,r10,-7072
	r30.s64 = ctx.r10.s64 + -7072;
	// lha r11,30(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 30));
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x821b9f28
	if (ctx.cr6.lt) goto loc_821B9F28;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x821b9ee4
	if (!ctx.cr6.gt) goto loc_821B9EE4;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821b9ecc
	if (ctx.cr6.eq) goto loc_821B9ECC;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x821b9f28
	if (!ctx.cr6.eq) goto loc_821B9F28;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-9828(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -9828);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b9e9c
	if (ctx.cr6.eq) goto loc_821B9E9C;
	// bl 0x821b10c8
	ctx.lr = 0x821B9E9C;
	sub_821B10C8(ctx, base);
loc_821B9E9C:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,9120
	ctx.r9.u64 = ctx.r10.u64 | 9120;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,5424(r30)
	REX_STORE_U32(r30.u32 + 5424, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r10,r30,r9
	REX_STORE_U32(r30.u32 + ctx.r9.u32, ctx.r10.u32);
	// bl 0x82136068
	ctx.lr = 0x821B9EBC;
	sub_82136068(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x821b2bc0
	ctx.lr = 0x821B9EC8;
	sub_821B2BC0(ctx, base);
	// b 0x821b9f28
	goto loc_821B9F28;
loc_821B9ECC:
	// lwz r11,516(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 516);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x821b9f28
	if (!ctx.cr6.gt) goto loc_821B9F28;
	// lwz r3,496(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 496);
	// bl 0x821d6f88
	ctx.lr = 0x821B9EE0;
	sub_821D6F88(ctx, base);
	// b 0x821b9f30
	goto loc_821B9F30;
loc_821B9EE4:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-9828(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -9828);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b9ef8
	if (ctx.cr6.eq) goto loc_821B9EF8;
	// bl 0x821b10c8
	ctx.lr = 0x821B9EF8;
	sub_821B10C8(ctx, base);
loc_821B9EF8:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ori r8,r11,9176
	ctx.r8.u64 = ctx.r11.u64 | 9176;
	// ori r7,r10,9120
	ctx.r7.u64 = ctx.r10.u64 | 9120;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,28724(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28724);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,5424(r30)
	REX_STORE_U32(r30.u32 + 5424, ctx.r11.u32);
	// stfs f0,5480(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 5480, temp.u32);
	// stfsx f0,r30,r8
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + ctx.r8.u32, temp.u32);
	// stwx r10,r30,r7
	REX_STORE_U32(r30.u32 + ctx.r7.u32, ctx.r10.u32);
loc_821B9F28:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821d6f70
	ctx.lr = 0x821B9F30;
	sub_821D6F70(ctx, base);
loc_821B9F30:
	// lha r11,30(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 30));
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821b9f44
	if (ctx.cr6.eq) goto loc_821B9F44;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821b9fac
	if (!ctx.cr6.eq) goto loc_821B9FAC;
loc_821B9F44:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b9fac
	if (ctx.cr6.eq) goto loc_821B9FAC;
	// bl 0x82134f58
	ctx.lr = 0x821B9F54;
	sub_82134F58(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r11,320(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 320);
	// cmpwi cr6,r11,1551
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1551, ctx.xer);
	// beq cr6,0x821b9f98
	if (ctx.cr6.eq) goto loc_821B9F98;
	// cmpwi cr6,r11,1807
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1807, ctx.xer);
	// beq cr6,0x821b9f84
	if (ctx.cr6.eq) goto loc_821B9F84;
	// cmpwi cr6,r11,2063
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2063, ctx.xer);
	// bne cr6,0x821b9fac
	if (!ctx.cr6.eq) goto loc_821B9FAC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,9
	ctx.r3.s64 = 9;
	// lfs f1,20484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20484);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821b9f90
	goto loc_821B9F90;
loc_821B9F84:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,8
	ctx.r3.s64 = 8;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
loc_821B9F90:
	// bl 0x82135280
	ctx.lr = 0x821B9F94;
	sub_82135280(ctx, base);
	// b 0x821b9fac
	goto loc_821B9FAC;
loc_821B9F98:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,5
	ctx.r3.s64 = 5;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82135320
	ctx.lr = 0x821B9FAC;
	sub_82135320(ctx, base);
loc_821B9FAC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// sth r11,548(r31)
	REX_STORE_U16(r31.u32 + 548, ctx.r11.u16);
	// stb r10,14(r31)
	REX_STORE_U8(r31.u32 + 14, ctx.r10.u8);
	// stw r9,700(r31)
	REX_STORE_U32(r31.u32 + 700, ctx.r9.u32);
	// stw r11,540(r31)
	REX_STORE_U32(r31.u32 + 540, ctx.r11.u32);
	// stw r10,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r10.u32);
	// bl 0x821b2a70
	ctx.lr = 0x821B9FD0;
	sub_821B2A70(ctx, base);
	// lbz r11,18(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 18);
	// stb r11,19(r31)
	REX_STORE_U8(r31.u32 + 19, ctx.r11.u8);
	// bl 0x821da948
	ctx.lr = 0x821B9FDC;
	sub_821DA948(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821b2ce0
	ctx.lr = 0x821B9FE4;
	sub_821B2CE0(ctx, base);
	// addis r11,r30,1
	ctx.r11.s64 = r30.s64 + 65536;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821b2ce0
	ctx.lr = 0x821B9FF0;
	sub_821B2CE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821b78b0
	ctx.lr = 0x821B9FF8;
	sub_821B78B0(ctx, base);
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

DEFINE_REX_FUNC(sub_821C11C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821C11C8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x821c0fc8
	ctx.lr = 0x821C11DC;
	sub_821C0FC8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x821c1200
	if (!ctx.cr6.gt) goto loc_821C1200;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821c1200
	if (ctx.cr6.eq) goto loc_821C1200;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821ff870
	ctx.lr = 0x821C11FC;
	sub_821FF870(ctx, base);
	// b 0x821c1204
	goto loc_821C1204;
loc_821C1200:
	// mr r31,r30
	r31.u64 = r30.u64;
loc_821C1204:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821C2040) {
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
	// lwz r31,10008(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 10008);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lha r11,100(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 100));
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821c2070
	if (!ctx.cr6.eq) goto loc_821C2070;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821c217c
	goto loc_821C217C;
loc_821C2070:
	// lwz r10,5464(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 5464);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821c2094
	if (ctx.cr6.eq) goto loc_821C2094;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,100(r31)
	REX_STORE_U16(r31.u32 + 100, ctx.r11.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r10,104(r31)
	REX_STORE_U16(r31.u32 + 104, ctx.r10.u16);
	// b 0x821c217c
	goto loc_821C217C;
loc_821C2094:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x821c2130
	if (ctx.cr6.eq) goto loc_821C2130;
	// lhz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x821c2130
	if (!ctx.cr6.eq) goto loc_821C2130;
	// lbz r11,188(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 188);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c20f0
	if (ctx.cr0.eq) goto loc_821C20F0;
	// addi r3,r30,14504
	ctx.r3.s64 = r30.s64 + 14504;
	// lwz r4,14512(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 14512);
	// bl 0x821617a8
	ctx.lr = 0x821C20C0;
	sub_821617A8(ctx, base);
	// lhz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 16);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfs f13,5736(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 5736);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfs f0,22368(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 22368);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,5736(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 5736, temp.u32);
loc_821C20F0:
	// lha r11,0(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 0));
	// lfs f1,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// lha r4,102(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 102));
	// li r10,0
	ctx.r10.s64 = 0;
	// lha r5,100(r31)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r31.u32 + 100));
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x821c2150
	if (ctx.cr6.eq) goto loc_821C2150;
	// bl 0x821c1760
	ctx.lr = 0x821C2120;
	sub_821C1760(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c15b8
	ctx.lr = 0x821C212C;
	sub_821C15B8(ctx, base);
	// b 0x821c2164
	goto loc_821C2164;
loc_821C2130:
	// lha r4,102(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 102));
	// lfs f1,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_821C2150:
	// bl 0x821c1760
	ctx.lr = 0x821C2154;
	sub_821C1760(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r10,104(r31)
	REX_STORE_U16(r31.u32 + 104, ctx.r10.u16);
	// sth r11,100(r31)
	REX_STORE_U16(r31.u32 + 100, ctx.r11.u16);
loc_821C2164:
	// lha r11,102(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 102));
	// li r10,1
	ctx.r10.s64 = 1;
	// mulli r11,r11,896
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(896));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,7268(r11)
	REX_STORE_U32(ctx.r11.u32 + 7268, ctx.r10.u32);
loc_821C217C:
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

DEFINE_REX_FUNC(sub_821C5868) {
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
	// lhz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 88);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// beq cr6,0x821c5890
	if (ctx.cr6.eq) goto loc_821C5890;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x821c58d4
	if (!ctx.cr6.eq) goto loc_821C58D4;
loc_821C5890:
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c2e38
	ctx.lr = 0x821C589C;
	sub_821C2E38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dae18
	ctx.lr = 0x821C58A4;
	sub_821DAE18(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,19708(r31)
	REX_STORE_U32(r31.u32 + 19708, ctx.r10.u32);
	// stw r10,19676(r31)
	REX_STORE_U32(r31.u32 + 19676, ctx.r10.u32);
	// stw r11,11000(r31)
	REX_STORE_U32(r31.u32 + 11000, ctx.r11.u32);
	// stw r11,11004(r31)
	REX_STORE_U32(r31.u32 + 11004, ctx.r11.u32);
	// sth r11,10988(r31)
	REX_STORE_U16(r31.u32 + 10988, ctx.r11.u16);
	// sth r11,10990(r31)
	REX_STORE_U16(r31.u32 + 10990, ctx.r11.u16);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c58d4
	if (ctx.cr6.eq) goto loc_821C58D4;
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
loc_821C58D4:
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

DEFINE_REX_FUNC(sub_821C7178) {
	REX_FUNC_PROLOGUE();
	// li r10,32
	ctx.r10.s64 = 32;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r3,19312
	ctx.r9.s64 = ctx.r3.s64 + 19312;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r8,r9,8
	ctx.r8.s64 = ctx.r9.s64 + 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821C7190:
	// stbx r7,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x821c7190
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C7190;
	// sth r7,6(r9)
	REX_STORE_U16(ctx.r9.u32 + 6, ctx.r7.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C7878) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-7176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -7176);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x821c78b8
	if (ctx.cr6.eq) goto loc_821C78B8;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x821c78b8
	if (ctx.cr6.eq) goto loc_821C78B8;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x821c78b8
	if (ctx.cr6.eq) goto loc_821C78B8;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_821C78B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C85A8) {
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
	ctx.lr = 0x821C85B0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r10,r4,52
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(52));
	// mulli r11,r5,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(24));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r11,9020
	r31.s64 = ctx.r11.s64 + 9020;
	// addi r28,r3,15912
	r28.s64 = ctx.r3.s64 + 15912;
	// sth r10,9022(r11)
	REX_STORE_U16(ctx.r11.u32 + 9022, ctx.r10.u16);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x821c86a4
	if (ctx.cr6.eq) goto loc_821C86A4;
	// lha r11,90(r3)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 90));
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// mulli r11,r11,36
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(36));
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,-17416
	ctx.r10.s64 = ctx.r10.s64 + -17416;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,13128
	ctx.r9.s64 = ctx.r9.s64 + 13128;
	// rlwinm r7,r4,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,1996(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// subf r11,r7,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r7.u64;
	// lhzx r10,r6,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r10.u32);
	// stfs f1,20(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// mulli r11,r11,88
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(88));
	// sth r10,4(r31)
	REX_STORE_U16(r31.u32 + 4, ctx.r10.u16);
	// lfs f0,1840(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// addi r3,r11,16096
	ctx.r3.s64 = ctx.r11.s64 + 16096;
	// bl 0x821617a8
	ctx.lr = 0x821C8648;
	sub_821617A8(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// subfic r10,r29,0
	ctx.xer.ca = r29.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - r29.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r11,r10,0,31,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF1;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r10,r11,47
	ctx.r10.s64 = ctx.r11.s64 + 47;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// li r11,15
	ctx.r11.s64 = 15;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// addi r10,r10,58
	ctx.r10.s64 = ctx.r10.s64 + 58;
	// lwz r8,10152(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 10152);
	// lis r9,16256
	ctx.r9.s64 = 1065353216;
	// stw r8,480(r28)
	REX_STORE_U32(r28.u32 + 480, ctx.r8.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r11,r10,r28
	ctx.r11.u64 = ctx.r10.u64 + r28.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_821C8698:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c8698
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C8698;
	// b 0x821c86ac
	goto loc_821C86AC;
loc_821C86A4:
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r11,4(r31)
	REX_STORE_U16(r31.u32 + 4, ctx.r11.u16);
loc_821C86AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821CD410) {
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
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,660(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 660);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5716(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 5716);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f12,5720(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 5720);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r3,5716
	ctx.r11.s64 = ctx.r3.s64 + 5716;
	// lfs f11,5724(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 5724);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,664(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 664);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,10532(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 10532);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fsubs f10,f9,f13
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fmadds f13,f10,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f13,5716(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 5716, temp.u32);
	// lfs f13,10536(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 10536);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmadds f13,f13,f0,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfs f13,5720(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 5720, temp.u32);
	// lfs f13,10540(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 10540);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fmadds f0,f13,f0,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f11.f64)));
	// stfs f0,5724(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 5724, temp.u32);
	// lfs f13,10540(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10540);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,5716(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 5716);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,10532(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10532);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f1,f12,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsubs f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f0,f1,f1
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmadds f0,f2,f2,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f2.f64, ctx.f2.f64, ctx.f0.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,5732(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 5732, temp.u32);
	// bl 0x820e0130
	ctx.lr = 0x821CD4A4;
	sub_820E0130(ctx, base);
	// lfs f0,10312(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 10312);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// bl 0x821af850
	ctx.lr = 0x821CD4B0;
	sub_821AF850(ctx, base);
	// lbz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 188);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821cd4f0
	if (ctx.cr0.eq) goto loc_821CD4F0;
	// addi r3,r31,14504
	ctx.r3.s64 = r31.s64 + 14504;
	// lwz r4,14512(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 14512);
	// bl 0x821617a8
	ctx.lr = 0x821CD4CC;
	sub_821617A8(ctx, base);
	// lhz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 16);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfs f0,22368(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 22368);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f31,f13,f0,f31
	f31.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f0.f64, -f31.f64)));
loc_821CD4F0:
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,2352(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2352);
	ctx.f0.f64 = double(temp.f32);
	// stwx r8,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// lfs f13,5732(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 5732);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821cd528
	if (!ctx.cr6.gt) goto loc_821CD528;
	// stfs f31,5736(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 5736, temp.u32);
	// b 0x821cd53c
	goto loc_821CD53C;
loc_821CD528:
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_821CD53C:
	// lfs f0,5736(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5736);
	ctx.f0.f64 = double(temp.f32);
	// lbz r10,180(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 180);
	// lfs f13,13572(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 13572);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,5740(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5740, temp.u32);
	// lhz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 604);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821cd574
	if (ctx.cr0.eq) goto loc_821CD574;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821cd618
	if (ctx.cr6.eq) goto loc_821CD618;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821cd618
	if (ctx.cr6.eq) goto loc_821CD618;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821cd618
	if (ctx.cr6.eq) goto loc_821CD618;
loc_821CD574:
	// lbz r11,163(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 163);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821cd598
	if (!ctx.cr0.eq) goto loc_821CD598;
	// lbz r11,178(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 178);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821cd598
	if (!ctx.cr0.eq) goto loc_821CD598;
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r30,r11,184
	r30.s64 = ctx.r11.s64 + 184;
	// b 0x821cd5a0
	goto loc_821CD5A0;
loc_821CD598:
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r30,r11,216
	r30.s64 = ctx.r11.s64 + 216;
loc_821CD5A0:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lhz r11,30(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x821cd5c8
	if (!ctx.cr6.eq) goto loc_821CD5C8;
	// bl 0x82108b98
	ctx.lr = 0x821CD5B8;
	sub_82108B98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821cd5c8
	if (ctx.cr0.eq) goto loc_821CD5C8;
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r30,r11,216
	r30.s64 = ctx.r11.s64 + 216;
loc_821CD5C8:
	// stw r30,10260(r31)
	REX_STORE_U32(r31.u32 + 10260, r30.u32);
	// lfs f1,5740(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5740);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821af850
	ctx.lr = 0x821CD5D4;
	sub_821AF850(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,12196(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12196);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// ble cr6,0x821cd5f8
	if (!ctx.cr6.gt) goto loc_821CD5F8;
	// li r11,2047
	ctx.r11.s64 = 2047;
loc_821CD5F8:
	// srawi r11,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 7;
	// subfic r11,r11,15
	ctx.xer.ca = ctx.r11.u32 <= 15;
	ctx.r11.u64 = static_cast<uint64_t>(15) - ctx.r11.u64;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// ble cr6,0x821cd60c
	if (!ctx.cr6.gt) goto loc_821CD60C;
	// li r11,31
	ctx.r11.s64 = 31;
loc_821CD60C:
	// lbzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r11,5764(r31)
	REX_STORE_U32(r31.u32 + 5764, ctx.r11.u32);
loc_821CD618:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821cd120
	ctx.lr = 0x821CD620;
	sub_821CD120(ctx, base);
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

DEFINE_REX_FUNC(sub_821D8B60) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,16600(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16600);
	// lwz r9,16544(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16544);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r10,16596(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16596);
	// lwz r11,16540(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16540);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,16600(r3)
	REX_STORE_U32(ctx.r3.u32 + 16600, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,16544(r3)
	REX_STORE_U32(ctx.r3.u32 + 16544, ctx.r9.u32);
	// stw r10,16596(r3)
	REX_STORE_U32(ctx.r3.u32 + 16596, ctx.r10.u32);
	// stw r11,16540(r3)
	REX_STORE_U32(ctx.r3.u32 + 16540, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D91C8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r3,4656(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4656);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D9440) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r10,r11,432
	ctx.r10.s64 = ctx.r11.s64 + 432;
	// lha r11,30(r10)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 30));
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821d94e8
	if (ctx.cr6.eq) goto loc_821D94E8;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821d94dc
	if (ctx.cr6.eq) goto loc_821D94DC;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r11,r11,23240
	ctx.r11.s64 = ctx.r11.s64 + 23240;
	// lwz r10,224(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// and. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821d9494
	if (!ctx.cr0.eq) goto loc_821D9494;
	// lwz r10,508(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 508);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// and. r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821d9498
	if (ctx.cr0.eq) goto loc_821D9498;
loc_821D9494:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D9498:
	// lwz r10,228(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// and. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821d94b4
	if (!ctx.cr0.eq) goto loc_821D94B4;
	// lwz r10,512(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 512);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// and. r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821d94b8
	if (ctx.cr0.eq) goto loc_821D94B8;
loc_821D94B4:
	// li r3,2
	ctx.r3.s64 = 2;
loc_821D94B8:
	// lwz r10,232(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 232);
	// and. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821d94d4
	if (!ctx.cr0.eq) goto loc_821D94D4;
	// lwz r11,516(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 516);
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
loc_821D94D4:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_821D94DC:
	// lwz r11,80(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_821D94E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DD668) {
	REX_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x821dd5d8
	sub_821DD5D8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821DD748) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,432
	ctx.r10.s64 = ctx.r10.s64 + 432;
	// sth r11,428(r10)
	REX_STORE_U16(ctx.r10.u32 + 428, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DDC28) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32165
	ctx.r8.s64 = -2107965440;
	// li r11,88
	ctx.r11.s64 = 88;
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lwz r31,-32480(r8)
	r31.u64 = REX_LOAD_U32(ctx.r8.u32 + -32480);
	// addi r10,r10,5128
	ctx.r10.s64 = ctx.r10.s64 + 5128;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821DDC5C:
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x821ddc70
	if (ctx.cr6.lt) goto loc_821DDC70;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_821DDC70:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x821ddc5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DDC5C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x821ddc90
	if (!ctx.cr6.gt) goto loc_821DDC90;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x821ddbc8
	ctx.lr = 0x821DDC8C;
	sub_821DDBC8(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
loc_821DDC90:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,88(r31)
	REX_STORE_U32(r31.u32 + 88, r30.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r30,92(r31)
	REX_STORE_U32(r31.u32 + 92, r30.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r30,100(r31)
	REX_STORE_U32(r31.u32 + 100, r30.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r7,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r7.u32);
	// lfs f13,15628(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15628);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,26936(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 26936);
	ctx.f12.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,15204(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15204);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r11,-7136
	ctx.r6.s64 = ctx.r11.s64 + -7136;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r30,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7d50
	ctx.lr = 0x821DDD00;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ddd1c
	if (ctx.cr0.eq) goto loc_821DDD1C;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r4,112(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8216ed68
	ctx.lr = 0x821DDD18;
	sub_8216ED68(ctx, base);
	// b 0x821ddd20
	goto loc_821DDD20;
loc_821DDD1C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_821DDD20:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,-7124
	ctx.r6.s64 = ctx.r10.s64 + -7124;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,-13052(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -13052);
	ctx.f0.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7d50
	ctx.lr = 0x821DDD54;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ddd70
	if (ctx.cr0.eq) goto loc_821DDD70;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r4,112(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8216ed68
	ctx.lr = 0x821DDD6C;
	sub_8216ED68(ctx, base);
	// b 0x821ddd74
	goto loc_821DDD74;
loc_821DDD70:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_821DDD74:
	// stw r3,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x8212eb40
	ctx.lr = 0x821DDD8C;
	sub_8212EB40(ctx, base);
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

DEFINE_REX_FUNC(sub_821E28D0) {
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
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821e2fb8
	ctx.lr = 0x821E28EC;
	sub_821E2FB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-25192
	ctx.r11.s64 = ctx.r11.s64 + -25192;
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

DEFINE_REX_FUNC(sub_821E2F00) {
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
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821e2fb8
	ctx.lr = 0x821E2F1C;
	sub_821E2FB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,8128
	ctx.r11.s64 = ctx.r11.s64 + 8128;
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

DEFINE_REX_FUNC(sub_821E3F10) {
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
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// lfs f1,192(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0028
	ctx.lr = 0x821E3F34;
	sub_820E0028(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 192);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r9,r9,13128
	ctx.r9.s64 = ctx.r9.s64 + 13128;
	// lfs f0,2352(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2352);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// lfs f0,1836(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1836);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,192(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 192, temp.u32);
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

DEFINE_REX_FUNC(sub_821E6268) {
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
	ctx.lr = 0x821E6270;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r31,-32480(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
	// lfs f13,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r31,112
	r29.s64 = r31.s64 + 112;
	// stfs f13,144(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f13,148(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// stfs f13,152(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821e65f4
	if (ctx.cr6.lt) goto loc_821E65F4;
	// beq cr6,0x821e65e4
	if (ctx.cr6.eq) goto loc_821E65E4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x821e64c4
	if (ctx.cr6.lt) goto loc_821E64C4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x821e6430
	if (ctx.cr6.eq) goto loc_821E6430;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x821e638c
	if (ctx.cr6.eq) goto loc_821E638C;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x821e62e4
	if (ctx.cr6.eq) goto loc_821E62E4;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x821e6664
	if (!ctx.cr6.eq) goto loc_821E6664;
	// lwz r11,-32480(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// b 0x821e6664
	goto loc_821E6664;
loc_821E62E4:
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e6304
	if (ctx.cr6.eq) goto loc_821E6304;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 32, temp.u32);
	// stfs f0,36(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 36, temp.u32);
	// stfs f0,40(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 40, temp.u32);
loc_821E6304:
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e6374
	if (!ctx.cr6.eq) goto loc_821E6374;
	// lha r11,38(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 38));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r6,r10,16344
	ctx.r6.s64 = ctx.r10.s64 + 16344;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,770
	ctx.r4.s64 = 770;
	// bl 0x821f7d50
	ctx.lr = 0x821E633C;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e635c
	if (ctx.cr0.eq) goto loc_821E635C;
	// lwz r7,236(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 236);
	// lfs f2,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// lwz r4,208(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lfs f1,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821e5208
	ctx.lr = 0x821E6358;
	sub_821E5208(ctx, base);
	// b 0x821e6360
	goto loc_821E6360;
loc_821E635C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_821E6360:
	// stw r3,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r3.u32);
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r4,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x821e3f78
	ctx.lr = 0x821E6374;
	sub_821E3F78(ctx, base);
loc_821E6374:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e6664
	if (ctx.cr6.eq) goto loc_821E6664;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,36(r11)
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r10.u8);
	// b 0x821e6660
	goto loc_821E6660;
loc_821E638C:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e6664
	if (!ctx.cr6.eq) goto loc_821E6664;
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821e63ac
	if (!ctx.cr6.eq) goto loc_821E63AC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	ctx.f13.f64 = double(temp.f32);
loc_821E63AC:
	// lfs f0,64(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,48(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f0,68(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,52(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r10,16336
	ctx.r6.s64 = ctx.r10.s64 + 16336;
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f10,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f9,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,900
	ctx.r5.s64 = 900;
	// li r4,770
	ctx.r4.s64 = 770;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmadds f31,f11,f0,f9
	f31.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f9.f64)));
	// fmadds f30,f13,f0,f10
	f30.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f10.f64)));
	// bl 0x821f7d50
	ctx.lr = 0x821E6404;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e6424
	if (ctx.cr0.eq) goto loc_821E6424;
	// addi r4,r31,212
	ctx.r4.s64 = r31.s64 + 212;
	// lwz r7,236(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 236);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821e3fc8
	ctx.lr = 0x821E6420;
	sub_821E3FC8(ctx, base);
	// b 0x821e6428
	goto loc_821E6428;
loc_821E6424:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E6428:
	// stw r3,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r3.u32);
	// b 0x821e6664
	goto loc_821E6664;
loc_821E6430:
	// lwz r10,220(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 220);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r30,0
	r30.s64 = 0;
	// li r11,12
	ctx.r11.s64 = 12;
	// stb r9,188(r31)
	REX_STORE_U8(r31.u32 + 188, ctx.r9.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e6454
	if (ctx.cr6.eq) goto loc_821E6454;
	// stb r11,36(r10)
	REX_STORE_U8(ctx.r10.u32 + 36, ctx.r11.u8);
	// stw r30,220(r31)
	REX_STORE_U32(r31.u32 + 220, r30.u32);
loc_821E6454:
	// lwz r10,224(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 224);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e6468
	if (ctx.cr6.eq) goto loc_821E6468;
	// stb r11,36(r10)
	REX_STORE_U8(ctx.r10.u32 + 36, ctx.r11.u8);
	// stw r30,224(r31)
	REX_STORE_U32(r31.u32 + 224, r30.u32);
loc_821E6468:
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e6664
	if (!ctx.cr6.eq) goto loc_821E6664;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,16328
	ctx.r6.s64 = ctx.r11.s64 + 16328;
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
	ctx.lr = 0x821E6498;
	sub_821366D8(ctx, base);
	// stw r3,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e6664
	if (ctx.cr0.eq) goto loc_821E6664;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,236(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 236);
	// lfs f1,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,16172(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16172);
	ctx.f0.f64 = double(temp.f32);
	// fadds f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x821e3db8
	ctx.lr = 0x821E64C0;
	sub_821E3DB8(ctx, base);
	// b 0x821e6664
	goto loc_821E6664;
loc_821E64C4:
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,188(r31)
	REX_STORE_U8(r31.u32 + 188, ctx.r10.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e6524
	if (!ctx.cr6.eq) goto loc_821E6524;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,16328
	ctx.r6.s64 = ctx.r11.s64 + 16328;
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
	ctx.lr = 0x821E64FC;
	sub_821366D8(ctx, base);
	// stw r3,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e6524
	if (ctx.cr0.eq) goto loc_821E6524;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,236(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 236);
	// lfs f1,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,16172(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16172);
	ctx.f0.f64 = double(temp.f32);
	// fadds f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x821e3db8
	ctx.lr = 0x821E6524;
	sub_821E3DB8(ctx, base);
loc_821E6524:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,220(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 220);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f31,2008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	f31.f64 = double(temp.f32);
	// bne cr6,0x821e657c
	if (!ctx.cr6.eq) goto loc_821E657C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,16320
	ctx.r6.s64 = ctx.r11.s64 + 16320;
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
	ctx.lr = 0x821E655C;
	sub_821366D8(ctx, base);
	// stw r3,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e657c
	if (ctx.cr0.eq) goto loc_821E657C;
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,236(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 236);
	// lfs f1,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fadds f2,f0,f31
	ctx.f2.f64 = double(float(ctx.f0.f64 + f31.f64));
	// bl 0x821e5038
	ctx.lr = 0x821E657C;
	sub_821E5038(ctx, base);
loc_821E657C:
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e65cc
	if (!ctx.cr6.eq) goto loc_821E65CC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,16308
	ctx.r6.s64 = ctx.r11.s64 + 16308;
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
	ctx.lr = 0x821E65AC;
	sub_821366D8(ctx, base);
	// stw r3,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e65cc
	if (ctx.cr0.eq) goto loc_821E65CC;
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,236(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 236);
	// lfs f1,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fadds f2,f0,f31
	ctx.f2.f64 = double(float(ctx.f0.f64 + f31.f64));
	// bl 0x821e5120
	ctx.lr = 0x821E65CC;
	sub_821E5120(ctx, base);
loc_821E65CC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r10.u32);
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// b 0x821e6664
	goto loc_821E6664;
loc_821E65E4:
	// li r9,1
	ctx.r9.s64 = 1;
	// li r30,0
	r30.s64 = 0;
	// stb r9,188(r31)
	REX_STORE_U8(r31.u32 + 188, ctx.r9.u8);
	// b 0x821e65fc
	goto loc_821E65FC;
loc_821E65F4:
	// li r30,0
	r30.s64 = 0;
	// stb r30,188(r31)
	REX_STORE_U8(r31.u32 + 188, r30.u8);
loc_821E65FC:
	// lwz r10,216(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 216);
	// li r11,12
	ctx.r11.s64 = 12;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e6614
	if (ctx.cr6.eq) goto loc_821E6614;
	// stb r11,36(r10)
	REX_STORE_U8(ctx.r10.u32 + 36, ctx.r11.u8);
	// stw r30,216(r31)
	REX_STORE_U32(r31.u32 + 216, r30.u32);
loc_821E6614:
	// lwz r10,220(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 220);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e6628
	if (ctx.cr6.eq) goto loc_821E6628;
	// stb r11,36(r10)
	REX_STORE_U8(ctx.r10.u32 + 36, ctx.r11.u8);
	// stw r30,220(r31)
	REX_STORE_U32(r31.u32 + 220, r30.u32);
loc_821E6628:
	// lwz r10,224(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 224);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e663c
	if (ctx.cr6.eq) goto loc_821E663C;
	// stb r11,36(r10)
	REX_STORE_U8(ctx.r10.u32 + 36, ctx.r11.u8);
	// stw r30,224(r31)
	REX_STORE_U32(r31.u32 + 224, r30.u32);
loc_821E663C:
	// lwz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 228);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e6650
	if (ctx.cr6.eq) goto loc_821E6650;
	// stb r11,36(r10)
	REX_STORE_U8(ctx.r10.u32 + 36, ctx.r11.u8);
	// stw r30,228(r31)
	REX_STORE_U32(r31.u32 + 228, r30.u32);
loc_821E6650:
	// lwz r10,232(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 232);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e6664
	if (ctx.cr6.eq) goto loc_821E6664;
	// stb r11,36(r10)
	REX_STORE_U8(ctx.r10.u32 + 36, ctx.r11.u8);
loc_821E6660:
	// stw r30,232(r31)
	REX_STORE_U32(r31.u32 + 232, r30.u32);
loc_821E6664:
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

DEFINE_REX_FUNC(sub_821F8C58) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,3380
	ctx.r11.s64 = ctx.r11.s64 + 3380;
	// lfs f1,76(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F91A0) {
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
	// lbz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,1
	r30.s64 = 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821f91e4
	if (!ctx.cr0.eq) goto loc_821F91E4;
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821f91e4
	if (!ctx.cr6.eq) goto loc_821F91E4;
	// stb r30,64(r3)
	REX_STORE_U8(ctx.r3.u32 + 64, r30.u8);
	// lwz r5,56(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r4,52(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x821f9130
	ctx.lr = 0x821F91E4;
	sub_821F9130(ctx, base);
loc_821F91E4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,31036(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 31036);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// stfs f12,76(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
	// stfs f13,80(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// stw r8,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r8.u32);
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// stb r7,48(r31)
	REX_STORE_U8(r31.u32 + 48, ctx.r7.u8);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// stb r30,49(r31)
	REX_STORE_U8(r31.u32 + 49, r30.u8);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
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

DEFINE_REX_FUNC(sub_821FDF28) {
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
	ctx.lr = 0x821FDF30;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,1
	r26.s64 = 1;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// slw r29,r26,r4
	r29.u64 = ctx.r4.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r4.u8 & 0x3F));
	// bge cr6,0x821fdf50
	if (!ctx.cr6.lt) goto loc_821FDF50;
	// clrlwi r29,r4,16
	r29.u64 = ctx.r4.u32 & 0xFFFF;
loc_821FDF50:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x821fdfa0
	if (!ctx.cr6.gt) goto loc_821FDFA0;
	// addi r30,r27,2304
	r30.s64 = r27.s64 + 2304;
	// addi r31,r27,1520
	r31.s64 = r27.s64 + 1520;
loc_821FDF60:
	// cmplwi cr6,r28,16
	ctx.cr6.compare<uint32_t>(r28.u32, 16, ctx.xer);
	// bge cr6,0x821fdfa0
	if (!ctx.cr6.lt) goto loc_821FDFA0;
	// clrlwi. r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821fdf8c
	if (ctx.cr0.eq) goto loc_821FDF8C;
	// extsw r11,r28
	ctx.r11.s64 = r28.s32;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// slw r11,r26,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r11.u8 & 0x3F));
	// oris r6,r11,32768
	ctx.r6.u64 = ctx.r11.u64 | 2147483648;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821fb9a8
	ctx.lr = 0x821FDF8C;
	sub_821FB9A8(ctx, base);
loc_821FDF8C:
	// srawi. r29,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	r29.s64 = r29.s32 >> 1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// addi r30,r30,192
	r30.s64 = r30.s64 + 192;
	// bgt 0x821fdf60
	if (ctx.cr0.gt) goto loc_821FDF60;
loc_821FDFA0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_821FF1C8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lwz r9,44(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r10,13064
	ctx.r10.s64 = ctx.r10.s64 + 13064;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// stw r8,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FFA58) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f31,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FFA8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FFAA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f31,12(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stfs f31,16(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f31,20(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stfs f31,68(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f12,21160(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 21160);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,21156(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 21156);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,280(r31)
	REX_STORE_U32(r31.u32 + 280, ctx.r11.u32);
	// lfs f0,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// lfs f10,2352(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2352);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
	// stw r11,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r11.u32);
	// stfs f31,72(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// stw r11,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r11.u32);
	// stfs f31,76(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
	// stfs f31,52(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// stfs f31,56(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// stw r10,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// stfs f31,60(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,240(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 240, temp.u32);
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// stfs f31,244(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 244, temp.u32);
	// stfs f31,248(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 248, temp.u32);
	// stfs f31,84(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// stfs f13,372(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 372, temp.u32);
	// stfs f31,376(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 376, temp.u32);
	// stfs f31,380(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 380, temp.u32);
	// stfs f31,384(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 384, temp.u32);
	// stfs f12,324(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 324, temp.u32);
	// stfs f11,328(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 328, temp.u32);
	// stfs f31,332(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 332, temp.u32);
	// stfs f31,340(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 340, temp.u32);
	// stfs f0,344(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 344, temp.u32);
	// stfs f31,348(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 348, temp.u32);
	// stfs f31,356(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 356, temp.u32);
	// stfs f0,360(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 360, temp.u32);
	// stfs f31,364(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 364, temp.u32);
	// stfs f31,368(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 368, temp.u32);
	// stfs f31,352(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 352, temp.u32);
	// stfs f31,336(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 336, temp.u32);
	// stfs f10,92(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 104, temp.u32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 108, temp.u32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// stfs f31,184(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 184, temp.u32);
	// stfs f31,188(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 188, temp.u32);
	// stfs f31,192(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 192, temp.u32);
	// stfs f31,200(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 200, temp.u32);
	// stfs f31,204(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 204, temp.u32);
	// stfs f31,208(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 208, temp.u32);
	// stfs f31,216(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 216, temp.u32);
	// stfs f31,220(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 220, temp.u32);
	// stfs f31,224(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 224, temp.u32);
	// stfs f31,228(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 228, temp.u32);
	// stfs f31,236(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 236, temp.u32);
	// stfs f31,292(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 292, temp.u32);
	// lfs f0,17064(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17064);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r10.u32);
	// stfs f31,288(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 288, temp.u32);
	// stfs f31,284(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 284, temp.u32);
	// stfs f31,308(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 308, temp.u32);
	// stfs f31,304(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 304, temp.u32);
	// stfs f31,300(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 300, temp.u32);
	// stfs f31,140(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
	// stfs f31,136(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// stfs f31,132(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f31,168(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
	// stfs f31,164(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 164, temp.u32);
	// stfs f31,160(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// stfs f0,15020(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 15020, temp.u32);
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

DEFINE_REX_FUNC(sub_82208578) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82208B08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82208B10;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// mulli r10,r4,52
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(52));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// beq cr6,0x82208b54
	if (ctx.cr6.eq) goto loc_82208B54;
	// addi r7,r7,-132
	ctx.r7.s64 = ctx.r7.s64 + -132;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82208B40:
	// lwzu r6,136(r7)
	ea = 136 + ctx.r7.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// mullw r6,r6,r4
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// mulli r6,r6,28
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(28));
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// bdnz 0x82208b40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82208B40;
loc_82208B54:
	// lwz r31,0(r8)
	r31.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// ble cr6,0x82208b6c
	if (!ctx.cr6.gt) goto loc_82208B6C;
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// li r3,122
	ctx.r3.s64 = 122;
	// b 0x82208bd8
	goto loc_82208BD8;
loc_82208B6C:
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r7,28
	ctx.r7.s64 = 28;
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// ori r4,r4,33
	ctx.r4.u64 = ctx.r4.u64 | 33;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// li r3,251
	ctx.r3.s64 = 251;
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x824d3ecc
	ctx.lr = 0x82208BA4;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82208bb4
	if (!ctx.cr0.lt) goto loc_82208BB4;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x82208bd8
	goto loc_82208BD8;
loc_82208BB4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x82208bd4
	if (!ctx.cr6.eq) goto loc_82208BD4;
	// bl 0x8220a878
	ctx.lr = 0x82208BC0;
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
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x82208bd8
	goto loc_82208BD8;
loc_82208BD4:
	// li r3,997
	ctx.r3.s64 = 997;
loc_82208BD8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8220CBB0) {
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
	ctx.lr = 0x8220CBB8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,2(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// lis r10,-274
	ctx.r10.s64 = -17956864;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// subf r31,r11,r4
	r31.u64 = ctx.r4.u64 - ctx.r11.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r26,1
	r26.s64 = 1;
	// ori r25,r10,65262
	r25.u64 = ctx.r10.u64 | 65262;
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8220cdc4
	if (ctx.cr6.eq) goto loc_8220CDC4;
	// lbz r11,5(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 5);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8220cdc4
	if (!ctx.cr0.eq) goto loc_8220CDC4;
	// lhz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 0);
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,61440
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61440, ctx.xer);
	// bgt cr6,0x8220cdc4
	if (ctx.cr6.gt) goto loc_8220CDC4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8220ccc0
	if (ctx.cr6.eq) goto loc_8220CCC0;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r9,r4,8
	ctx.r9.s64 = ctx.r4.s64 + 8;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8220cc74
	if (!ctx.cr6.eq) goto loc_8220CC74;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8220cc74
	if (!ctx.cr6.eq) goto loc_8220CC74;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bne cr6,0x8220cc74
	if (!ctx.cr6.eq) goto loc_8220CC74;
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x8220cc74
	if (!ctx.cr6.lt) goto loc_8220CC74;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r26,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
loc_8220CC74:
	// lbz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8220ccac
	if (ctx.cr0.eq) goto loc_8220CCAC;
	// lhz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// beq 0x8220cca0
	if (ctx.cr0.eq) goto loc_8220CCA0;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x8220cca0
	if (!ctx.cr6.gt) goto loc_8220CCA0;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_8220CCA0:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// bl 0x824d43fc
	ctx.lr = 0x8220CCAC;
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_8220CCAC:
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// lwz r10,48(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 48);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,48(r29)
	REX_STORE_U32(r29.u32 + 48, ctx.r11.u32);
loc_8220CCC0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r9,r31,8
	ctx.r9.s64 = r31.s64 + 8;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8220cd20
	if (!ctx.cr6.eq) goto loc_8220CD20;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8220cd20
	if (!ctx.cr6.eq) goto loc_8220CD20;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bne cr6,0x8220cd20
	if (!ctx.cr6.eq) goto loc_8220CD20;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x8220cd20
	if (!ctx.cr6.lt) goto loc_8220CD20;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r26,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r29
	REX_STORE_U32(ctx.r11.u32 + r29.u32, ctx.r10.u32);
loc_8220CD20:
	// lbz r11,5(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8220cd58
	if (ctx.cr0.eq) goto loc_8220CD58;
	// lhz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// beq 0x8220cd4c
	if (ctx.cr0.eq) goto loc_8220CD4C;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x8220cd4c
	if (!ctx.cr6.gt) goto loc_8220CD4C;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_8220CD4C:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x824d43fc
	ctx.lr = 0x8220CD58;
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_8220CD58:
	// lbz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r11.u8);
	// beq 0x8220cd7c
	if (ctx.cr0.eq) goto loc_8220CD7C;
	// lbz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 4);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// stw r31,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, r31.u32);
loc_8220CD7C:
	// lhz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 0);
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// lwz r10,48(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 48);
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,48(r29)
	REX_STORE_U32(r29.u32 + 48, ctx.r11.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lbz r11,5(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r10,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r10.u16);
	// bne 0x8220cdc4
	if (!ctx.cr0.eq) goto loc_8220CDC4;
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
loc_8220CDC4:
	// lbz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8220cfa8
	if (!ctx.cr0.eq) goto loc_8220CFA8;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r10,r30
	r31.u64 = ctx.r10.u64 + r30.u64;
	// lbz r10,5(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 5);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8220cfa8
	if (!ctx.cr0.eq) goto loc_8220CFA8;
	// lhz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,61440
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61440, ctx.xer);
	// bgt cr6,0x8220cfa8
	if (ctx.cr6.gt) goto loc_8220CFA8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8220cea8
	if (ctx.cr6.eq) goto loc_8220CEA8;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r9,r30,8
	ctx.r9.s64 = r30.s64 + 8;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8220ce60
	if (!ctx.cr6.eq) goto loc_8220CE60;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8220ce60
	if (!ctx.cr6.eq) goto loc_8220CE60;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bne cr6,0x8220ce60
	if (!ctx.cr6.eq) goto loc_8220CE60;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x8220ce60
	if (!ctx.cr6.lt) goto loc_8220CE60;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r26,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r29
	REX_STORE_U32(ctx.r11.u32 + r29.u32, ctx.r10.u32);
loc_8220CE60:
	// lbz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8220ce98
	if (ctx.cr0.eq) goto loc_8220CE98;
	// lhz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// beq 0x8220ce8c
	if (ctx.cr0.eq) goto loc_8220CE8C;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x8220ce8c
	if (!ctx.cr6.gt) goto loc_8220CE8C;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_8220CE8C:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// bl 0x824d43fc
	ctx.lr = 0x8220CE98;
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_8220CE98:
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// lwz r10,48(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 48);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,48(r29)
	REX_STORE_U32(r29.u32 + 48, ctx.r11.u32);
loc_8220CEA8:
	// lbz r11,5(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,5(r30)
	REX_STORE_U8(r30.u32 + 5, ctx.r11.u8);
	// beq 0x8220cecc
	if (ctx.cr0.eq) goto loc_8220CECC;
	// lbz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 4);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// stw r30,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, r30.u32);
loc_8220CECC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r9,r31,8
	ctx.r9.s64 = r31.s64 + 8;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8220cf2c
	if (!ctx.cr6.eq) goto loc_8220CF2C;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8220cf2c
	if (!ctx.cr6.eq) goto loc_8220CF2C;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bne cr6,0x8220cf2c
	if (!ctx.cr6.eq) goto loc_8220CF2C;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x8220cf2c
	if (!ctx.cr6.lt) goto loc_8220CF2C;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r26,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r29
	REX_STORE_U32(ctx.r11.u32 + r29.u32, ctx.r10.u32);
loc_8220CF2C:
	// lbz r11,5(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8220cf64
	if (ctx.cr0.eq) goto loc_8220CF64;
	// lhz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// beq 0x8220cf58
	if (ctx.cr0.eq) goto loc_8220CF58;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x8220cf58
	if (!ctx.cr6.gt) goto loc_8220CF58;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_8220CF58:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x824d43fc
	ctx.lr = 0x8220CF64;
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_8220CF64:
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// lhz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 0);
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 48);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,48(r29)
	REX_STORE_U32(r29.u32 + 48, ctx.r11.u32);
	// lbz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// sth r10,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r10.u16);
	// bne 0x8220cfa8
	if (!ctx.cr0.eq) goto loc_8220CFA8;
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
loc_8220CFA8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_822204D8) {
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
	// bl 0x822d4e78
	ctx.lr = 0x822204E0;
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// stw r5,13124(r3)
	REX_STORE_U32(ctx.r3.u32 + 13124, ctx.r5.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r30,r27
	r30.u64 = r27.u64;
	// beq cr6,0x82220588
	if (ctx.cr6.eq) goto loc_82220588;
	// addi r8,r3,13364
	ctx.r8.s64 = ctx.r3.s64 + 13364;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r11,r24,-12
	ctx.r11.s64 = r24.s64 + -12;
	// addi r10,r3,13124
	ctx.r10.s64 = ctx.r3.s64 + 13124;
loc_8222052C:
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8222053c
	if (ctx.cr6.gt) goto loc_8222053C;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_8222053C:
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8222054c
	if (ctx.cr6.gt) goto loc_8222054C;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
loc_8222054C:
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stwu r9,16(r10)
	ea = 16 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r9,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r9,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lwzu r9,16(r11)
	ea = 16 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// rlwinm r9,r9,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// stwu r9,8(r8)
	ea = 8 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8222052c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222052C;
loc_82220588:
	// rlwinm. r11,r25,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822205a4
	if (ctx.cr0.eq) goto loc_822205A4;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// rlwinm r4,r25,30,31,31
	ctx.r4.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 30) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82220248
	ctx.lr = 0x822205A4;
	sub_82220248(ctx, base);
loc_822205A4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,13560(r31)
	REX_STORE_U32(r31.u32 + 13560, r30.u32);
	// clrlwi. r10,r25,31
	ctx.r10.u64 = r25.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r6,13556(r31)
	REX_STORE_U32(r31.u32 + 13556, ctx.r6.u32);
	// stw r25,13564(r31)
	REX_STORE_U32(r31.u32 + 13564, r25.u32);
	// addi r30,r11,27388
	r30.s64 = ctx.r11.s64 + 27388;
	// bne 0x822206b8
	if (!ctx.cr0.eq) goto loc_822206B8;
	// lbz r11,11071(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11071);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822206b8
	if (!ctx.cr0.eq) goto loc_822206B8;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82220624
	if (ctx.cr6.eq) goto loc_82220624;
	// addi r10,r31,13140
	ctx.r10.s64 = r31.s64 + 13140;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// addi r11,r31,13372
	ctx.r11.s64 = r31.s64 + 13372;
loc_822205E8:
	// lwz r7,-4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subf r9,r9,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r9.u64;
	// subf r7,r5,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r5.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8222060c
	if (ctx.cr6.gt) goto loc_8222060C;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_8222060C:
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x82220618
	if (ctx.cr6.gt) goto loc_82220618;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
loc_82220618:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x822205e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822205E8;
loc_82220624:
	// addi r4,r31,13024
	ctx.r4.s64 = r31.s64 + 13024;
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x82220644;
	sub_822D4FA0(ctx, base);
	// lwz r11,13052(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13052);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,13056(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 13056);
	// lwz r8,13060(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 13060);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r7,13064(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 13064);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// bl 0x82212de0
	ctx.lr = 0x82220674;
	sub_82212DE0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,27412
	ctx.r4.s64 = ctx.r11.s64 + 27412;
	// bl 0x82212488
	ctx.lr = 0x82220684;
	sub_82212488(ctx, base);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,63
	ctx.r4.s64 = 63;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82233710
	ctx.lr = 0x822206A0;
	sub_82233710(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82212e60
	ctx.lr = 0x822206AC;
	sub_82212E60(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82212488
	ctx.lr = 0x822206B8;
	sub_82212488(ctx, base);
loc_822206B8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822206d0
	if (ctx.cr6.eq) goto loc_822206D0;
	// li r11,13568
	ctx.r11.s64 = 13568;
	// lvx128 v63,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x822206d8
	goto loc_822206D8;
loc_822206D0:
	// std r27,13568(r31)
	REX_STORE_U64(r31.u32 + 13568, r27.u64);
	// std r27,13576(r31)
	REX_STORE_U64(r31.u32 + 13576, r27.u64);
loc_822206D8:
	// lwz r11,12816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12816);
	// stfs f31,13584(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 13584, temp.u32);
	// stw r26,13588(r31)
	REX_STORE_U32(r31.u32 + 13588, r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne cr6,0x822206f4
	if (!ctx.cr6.eq) goto loc_822206F4;
	// lwz r10,12832(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12832);
loc_822206F4:
	// lbz r9,11068(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 11068);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r7,12820(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12820);
	// lwz r6,12824(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 12824);
	// ori r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 | 32;
	// lwz r5,12828(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12828);
	// lwz r4,12832(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12832);
	// rlwinm. r3,r9,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r10,13100(r31)
	REX_STORE_U32(r31.u32 + 13100, ctx.r10.u32);
	// stw r11,13104(r31)
	REX_STORE_U32(r31.u32 + 13104, ctx.r11.u32);
	// stw r7,13108(r31)
	REX_STORE_U32(r31.u32 + 13108, ctx.r7.u32);
	// stw r6,13112(r31)
	REX_STORE_U32(r31.u32 + 13112, ctx.r6.u32);
	// stw r5,13116(r31)
	REX_STORE_U32(r31.u32 + 13116, ctx.r5.u32);
	// stw r4,13120(r31)
	REX_STORE_U32(r31.u32 + 13120, ctx.r4.u32);
	// stw r8,13096(r31)
	REX_STORE_U32(r31.u32 + 13096, ctx.r8.u32);
	// stb r9,11068(r31)
	REX_STORE_U8(r31.u32 + 11068, ctx.r9.u8);
	// stw r27,13092(r31)
	REX_STORE_U32(r31.u32 + 13092, r27.u32);
	// bne 0x8222077c
	if (!ctx.cr0.eq) goto loc_8222077C;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8222077c
	if (!ctx.cr0.eq) goto loc_8222077C;
	// lbz r11,12563(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 12563);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8222077c
	if (!ctx.cr0.eq) goto loc_8222077C;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82220768
	if (ctx.cr0.eq) goto loc_82220768;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82220770
	goto loc_82220770;
loc_82220768:
	// lbz r11,11068(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11068);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82220770:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82220780
	if (!ctx.cr0.eq) goto loc_82220780;
loc_8222077C:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_82220780:
	// lbz r10,11068(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 11068);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r27,13088(r31)
	REX_STORE_U32(r31.u32 + 13088, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwimi r10,r11,0,31,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// stw r9,13084(r31)
	REX_STORE_U32(r31.u32 + 13084, ctx.r9.u32);
	// stw r27,11060(r31)
	REX_STORE_U32(r31.u32 + 11060, r27.u32);
	// stw r27,11064(r31)
	REX_STORE_U32(r31.u32 + 11064, r27.u32);
	// stb r10,11068(r31)
	REX_STORE_U8(r31.u32 + 11068, ctx.r10.u8);
	// bl 0x8221cb40
	ctx.lr = 0x822207A8;
	sub_8221CB40(ctx, base);
	// lwz r11,13772(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13772);
	// lwz r9,13776(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 13776);
	// addi r3,r31,13760
	ctx.r3.s64 = r31.s64 + 13760;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x822207c8
	if (!ctx.cr6.gt) goto loc_822207C8;
	// bl 0x82214938
	ctx.lr = 0x822207C4;
	sub_82214938(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822207C8:
	// lis r10,-31232
	ctx.r10.s64 = -2046820352;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// stw r9,13772(r31)
	REX_STORE_U32(r31.u32 + 13772, ctx.r9.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822207f4
	if (!ctx.cr6.gt) goto loc_822207F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x822207F0;
	sub_82215008(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822207F4:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,25
	ctx.r9.s64 = 25;
	// ori r10,r10,17920
	ctx.r10.u64 = ctx.r10.u64 | 17920;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// bl 0x82229e70
	ctx.lr = 0x82220820;
	sub_82229E70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82212de0
	ctx.lr = 0x8222082C;
	sub_82212DE0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82212a80
	ctx.lr = 0x82220838;
	sub_82212A80(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8222EB80) {
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
	// bl 0x822d7648
	ctx.lr = 0x8222EB98;
	sub_822D7648(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,32728
	ctx.r11.u64 = ctx.r11.u64 | 32728;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8222ebb4
	if (!ctx.cr6.lt) goto loc_8222EBB4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d7648
	ctx.lr = 0x8222EBB0;
	sub_822D7648(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
loc_8222EBB4:
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,11012(r10)
	REX_STORE_U32(ctx.r10.u32 + 11012, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_822311C8) {
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
	ctx.lr = 0x822311D0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ld r27,32(r3)
	r27.u64 = REX_LOAD_U64(ctx.r3.u32 + 32);
	// li r26,0
	r26.s64 = 0;
	// ld r28,24(r3)
	r28.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// ld r30,16(r3)
	r30.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ld r29,8(r3)
	r29.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// beq cr6,0x82231208
	if (ctx.cr6.eq) goto loc_82231208;
	// addi r6,r3,1920
	ctx.r6.s64 = ctx.r3.s64 + 1920;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// bl 0x8221ead0
	ctx.lr = 0x82231204;
	sub_8221EAD0(ctx, base);
	// std r26,0(r31)
	REX_STORE_U64(r31.u32 + 0, r26.u64);
loc_82231208:
	// cmpldi cr6,r29,0
	ctx.cr6.compare<uint64_t>(r29.u64, 0, ctx.xer);
	// beq cr6,0x82231228
	if (ctx.cr6.eq) goto loc_82231228;
	// addi r6,r31,6016
	ctx.r6.s64 = r31.s64 + 6016;
	// li r5,17408
	ctx.r5.s64 = 17408;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221ead0
	ctx.lr = 0x82231224;
	sub_8221EAD0(ctx, base);
	// std r26,8(r31)
	REX_STORE_U64(r31.u32 + 8, r26.u64);
loc_82231228:
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(r30.u64, 0, ctx.xer);
	// beq cr6,0x82231308
	if (ctx.cr6.eq) goto loc_82231308;
	// rlwinm r11,r30,0,11,14
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1E0000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8223124c
	if (ctx.cr6.eq) goto loc_8223124C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221f868
	ctx.lr = 0x82231248;
	sub_8221F868(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8223124C:
	// ld r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 40);
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & r30.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82231270
	if (ctx.cr6.eq) goto loc_82231270;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 10560);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e3a8
	ctx.lr = 0x8223126C;
	sub_8221E3A8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82231270:
	// clrldi r11,r30,52
	ctx.r11.u64 = r30.u64 & 0xFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82231290
	if (ctx.cr6.eq) goto loc_82231290;
	// addi r6,r31,10548
	ctx.r6.s64 = r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r30,52,11
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e738
	ctx.lr = 0x82231290;
	sub_8221E738(ctx, base);
loc_82231290:
	// rlwinm r11,r30,0,15,19
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822312b0
	if (ctx.cr6.eq) goto loc_822312B0;
	// addi r6,r31,10528
	ctx.r6.s64 = r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r30,47,4
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e738
	ctx.lr = 0x822312B0;
	sub_8221E738(ctx, base);
loc_822312B0:
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
	// beq cr6,0x822312dc
	if (ctx.cr6.eq) goto loc_822312DC;
	// addi r6,r31,10368
	ctx.r6.s64 = r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r30,6,15
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e738
	ctx.lr = 0x822312DC;
	sub_8221E738(ctx, base);
loc_822312DC:
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// clrldi r12,r12,22
	ctx.r12.u64 = ctx.r12.u64 & 0x3FFFFFFFFFF;
	// and r11,r30,r12
	ctx.r11.u64 = r30.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82231304
	if (ctx.cr6.eq) goto loc_82231304;
	// addi r6,r31,10444
	ctx.r6.s64 = r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r30,22,20
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e738
	ctx.lr = 0x82231304;
	sub_8221E738(ctx, base);
loc_82231304:
	// std r26,16(r31)
	REX_STORE_U64(r31.u32 + 16, r26.u64);
loc_82231308:
	// cmpldi cr6,r28,0
	ctx.cr6.compare<uint64_t>(r28.u64, 0, ctx.xer);
	// beq cr6,0x82231358
	if (ctx.cr6.eq) goto loc_82231358;
	// clrldi r11,r28,32
	ctx.r11.u64 = r28.u64 & 0xFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82231328
	if (ctx.cr6.eq) goto loc_82231328;
	// rldicr r4,r28,32,31
	ctx.r4.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e978
	ctx.lr = 0x82231328;
	sub_8221E978(ctx, base);
loc_82231328:
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
	// beq cr6,0x82231354
	if (ctx.cr6.eq) goto loc_82231354;
	// addi r6,r31,10596
	ctx.r6.s64 = r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r28,9,20
	ctx.r4.u64 = __builtin_rotateleft64(r28.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e738
	ctx.lr = 0x82231354;
	sub_8221E738(ctx, base);
loc_82231354:
	// std r26,24(r31)
	REX_STORE_U64(r31.u32 + 24, r26.u64);
loc_82231358:
	// cmpldi cr6,r27,0
	ctx.cr6.compare<uint64_t>(r27.u64, 0, ctx.xer);
	// beq cr6,0x8223141c
	if (ctx.cr6.eq) goto loc_8223141C;
	// li r12,255
	ctx.r12.s64 = 255;
	// rldicr r12,r12,38,25
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 38) & 0xFFFFFFC000000000;
	// and r11,r27,r12
	ctx.r11.u64 = r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82231388
	if (ctx.cr6.eq) goto loc_82231388;
	// addi r6,r31,10832
	ctx.r6.s64 = r31.s64 + 10832;
	// li r5,9088
	ctx.r5.s64 = 9088;
	// rldicr r4,r27,18,7
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 18) & 0xFF00000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e738
	ctx.lr = 0x82231388;
	sub_8221E738(ctx, base);
loc_82231388:
	// li r12,63
	ctx.r12.s64 = 63;
	// rldicr r12,r12,49,14
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFE000000000000;
	// and r11,r27,r12
	ctx.r11.u64 = r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822313a8
	if (ctx.cr6.eq) goto loc_822313A8;
	// rldicr r4,r27,9,5
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 9) & 0xFC00000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e7f8
	ctx.lr = 0x822313A8;
	sub_8221E7F8(ctx, base);
loc_822313A8:
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r27,r12
	ctx.r11.u64 = r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822313d0
	if (ctx.cr6.eq) goto loc_822313D0;
	// addi r6,r31,10112
	ctx.r6.s64 = r31.s64 + 10112;
	// li r5,18688
	ctx.r5.s64 = 18688;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e738
	ctx.lr = 0x822313D0;
	sub_8221E738(ctx, base);
loc_822313D0:
	// clrldi r11,r27,26
	ctx.r11.u64 = r27.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822313f0
	if (ctx.cr6.eq) goto loc_822313F0;
	// addi r6,r31,10680
	ctx.r6.s64 = r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r27,26,37
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e738
	ctx.lr = 0x822313F0;
	sub_8221E738(ctx, base);
loc_822313F0:
	// rldicr r11,r27,0,1
	ctx.r11.u64 = __builtin_rotateleft64(r27.u64, 0) & 0xC000000000000000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82231418
	if (ctx.cr6.eq) goto loc_82231418;
	// lbz r11,11072(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11072);
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82231410
	if (!ctx.cr0.eq) goto loc_82231410;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82231418
	if (ctx.cr0.eq) goto loc_82231418;
loc_82231410:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221a770
	ctx.lr = 0x82231418;
	sub_8221A770(ctx, base);
loc_82231418:
	// std r26,32(r31)
	REX_STORE_U64(r31.u32 + 32, r26.u64);
loc_8223141C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82239260) {
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
	ctx.lr = 0x82239268;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,244
	r28.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x824d438c
	ctx.lr = 0x82239288;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82238300
	ctx.lr = 0x82239294;
	sub_82238300(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822392a8
	if (!ctx.cr0.eq) goto loc_822392A8;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,87
	r31.u64 = r31.u64 | 87;
	// b 0x822392b8
	goto loc_822392B8;
loc_822392A8:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8223dfb8
	ctx.lr = 0x822392B4;
	sub_8223DFB8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_822392B8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824d437c
	ctx.lr = 0x822392C0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8223A858) {
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
	ctx.lr = 0x8223A860;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8223a078
	ctx.lr = 0x8223A870;
	sub_8223A078(ctx, base);
	// addi r28,r31,12
	r28.s64 = r31.s64 + 12;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d48fc
	ctx.lr = 0x8223A884;
	__imp__XamVoiceCreate(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// li r27,0
	r27.s64 = 0;
	// blt 0x8223a8f8
	if (ctx.cr0.lt) goto loc_8223A8F8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82240380
	ctx.lr = 0x8223A89C;
	sub_82240380(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r27,4(r31)
	REX_STORE_U32(r31.u32 + 4, r27.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,156(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 156);
	// bl 0x82239920
	ctx.lr = 0x8223A8B0;
	sub_82239920(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r11,r11,25604
	ctx.r11.u64 = ctx.r11.u64 | 25604;
	// addi r7,r31,84
	ctx.r7.s64 = r31.s64 + 84;
	// stw r11,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r11.u32);
loc_8223A8C4:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r8,0,r7
	ea = ctx.r7.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8223a8c4
	if (!ctx.cr0.eq) goto loc_8223A8C4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-6376
	ctx.r4.s64 = ctx.r11.s64 + -6376;
	// li r5,54
	ctx.r5.s64 = 54;
	// bl 0x822d4fa0
	ctx.lr = 0x8223A8F0;
	sub_822D4FA0(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge cr6,0x8223a90c
	if (!ctx.cr6.lt) goto loc_8223A90C;
loc_8223A8F8:
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223a90c
	if (ctx.cr6.eq) goto loc_8223A90C;
	// bl 0x824d48cc
	ctx.lr = 0x8223A908;
	__imp__XamVoiceClose(ctx, base);
	// stw r27,0(r28)
	REX_STORE_U32(r28.u32 + 0, r27.u32);
loc_8223A90C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8223DF40) {
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
	ctx.lr = 0x8223DF48;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r30,-32768
	r30.s64 = -2147483648;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r4,-6708(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -6708);
	// ori r30,r30,16389
	r30.u64 = r30.u64 | 16389;
	// bl 0x8223d420
	ctx.lr = 0x8223DF6C;
	sub_8223D420(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x8223dfa8
	if (ctx.cr0.eq) goto loc_8223DFA8;
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 0);
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 68);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8223df94
	if (ctx.cr6.eq) goto loc_8223DF94;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223d7b0
	ctx.lr = 0x8223DF94;
	sub_8223D7B0(ctx, base);
loc_8223DF94:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822378b8
	ctx.lr = 0x8223DFA4;
	sub_822378B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8223DFA8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82243220) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82243450
	if (ctx.cr6.eq) goto loc_82243450;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8224342c
	if (ctx.cr6.eq) goto loc_8224342C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82243240
	if (ctx.cr6.eq) goto loc_82243240;
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_82243240:
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// bgt cr6,0x82243468
	if (ctx.cr6.gt) goto loc_82243468;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,-6112
	ctx.r12.s64 = ctx.r12.s64 + -6112;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32220
	ctx.r12.s64 = -2111569920;
	// nop 
	// addi r12,r12,12916
	ctx.r12.s64 = ctx.r12.s64 + 12916;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8224327C;
	case 1:
		goto loc_822432AC;
	case 2:
		goto loc_822432DC;
	case 3:
		goto loc_82243304;
	case 4:
		goto loc_82243334;
	case 5:
		goto loc_82243364;
	case 6:
		goto loc_82243478;
	case 7:
		goto loc_822433BC;
	case 8:
		goto loc_822433EC;
	case 9:
		goto loc_8224341C;
	case 10:
		goto loc_82243468;
	case 11:
		goto loc_82243284;
	case 12:
		goto loc_8224328C;
	case 13:
		goto loc_82243294;
	case 14:
		goto loc_8224329C;
	case 15:
		goto loc_822432A4;
	case 16:
		goto loc_822432B4;
	case 17:
		goto loc_822432BC;
	case 18:
		goto loc_822432C4;
	case 19:
		goto loc_822432CC;
	case 20:
		goto loc_822432D4;
	case 21:
		goto loc_822432E4;
	case 22:
		goto loc_822432EC;
	case 23:
		goto loc_822432F4;
	case 24:
		goto loc_82243480;
	case 25:
		goto loc_822432FC;
	case 26:
		goto loc_8224330C;
	case 27:
		goto loc_82243314;
	case 28:
		goto loc_8224331C;
	case 29:
		goto loc_82243324;
	case 30:
		goto loc_8224332C;
	case 31:
		goto loc_8224333C;
	case 32:
		goto loc_82243344;
	case 33:
		goto loc_8224334C;
	case 34:
		goto loc_82243354;
	case 35:
		goto loc_8224335C;
	case 36:
		goto loc_8224336C;
	case 37:
		goto loc_82243374;
	case 38:
		goto loc_8224337C;
	case 39:
		goto loc_82243384;
	case 40:
		goto loc_8224338C;
	case 41:
		goto loc_82243394;
	case 42:
		goto loc_8224339C;
	case 43:
		goto loc_822433A4;
	case 44:
		goto loc_822433AC;
	case 45:
		goto loc_822433B4;
	case 46:
		goto loc_822433C4;
	case 47:
		goto loc_822433CC;
	case 48:
		goto loc_822433D4;
	case 49:
		goto loc_822433DC;
	case 50:
		goto loc_822433E4;
	case 51:
		goto loc_822433F4;
	case 52:
		goto loc_822433FC;
	case 53:
		goto loc_82243404;
	case 54:
		goto loc_8224340C;
	case 55:
		goto loc_82243414;
	case 56:
		goto loc_82243424;
	case 57:
		goto loc_82243470;
	case 58:
		goto loc_82243274;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82243274:
	// li r11,8800
	ctx.r11.s64 = 8800;
	// b 0x82243484
	goto loc_82243484;
loc_8224327C:
	// li r11,9600
	ctx.r11.s64 = 9600;
	// b 0x82243484
	goto loc_82243484;
loc_82243284:
	// li r11,10000
	ctx.r11.s64 = 10000;
	// b 0x82243484
	goto loc_82243484;
loc_8224328C:
	// li r11,10400
	ctx.r11.s64 = 10400;
	// b 0x82243484
	goto loc_82243484;
loc_82243294:
	// li r11,10800
	ctx.r11.s64 = 10800;
	// b 0x82243484
	goto loc_82243484;
loc_8224329C:
	// li r11,11200
	ctx.r11.s64 = 11200;
	// b 0x82243484
	goto loc_82243484;
loc_822432A4:
	// li r11,11600
	ctx.r11.s64 = 11600;
	// b 0x82243484
	goto loc_82243484;
loc_822432AC:
	// li r11,12000
	ctx.r11.s64 = 12000;
	// b 0x82243484
	goto loc_82243484;
loc_822432B4:
	// li r11,12400
	ctx.r11.s64 = 12400;
	// b 0x82243484
	goto loc_82243484;
loc_822432BC:
	// li r11,12800
	ctx.r11.s64 = 12800;
	// b 0x82243484
	goto loc_82243484;
loc_822432C4:
	// li r11,13200
	ctx.r11.s64 = 13200;
	// b 0x82243484
	goto loc_82243484;
loc_822432CC:
	// li r11,13600
	ctx.r11.s64 = 13600;
	// b 0x82243484
	goto loc_82243484;
loc_822432D4:
	// li r11,14000
	ctx.r11.s64 = 14000;
	// b 0x82243484
	goto loc_82243484;
loc_822432DC:
	// li r11,14400
	ctx.r11.s64 = 14400;
	// b 0x82243484
	goto loc_82243484;
loc_822432E4:
	// li r11,14800
	ctx.r11.s64 = 14800;
	// b 0x82243484
	goto loc_82243484;
loc_822432EC:
	// li r11,15200
	ctx.r11.s64 = 15200;
	// b 0x82243484
	goto loc_82243484;
loc_822432F4:
	// li r11,15600
	ctx.r11.s64 = 15600;
	// b 0x82243484
	goto loc_82243484;
loc_822432FC:
	// li r11,16400
	ctx.r11.s64 = 16400;
	// b 0x82243484
	goto loc_82243484;
loc_82243304:
	// li r11,16800
	ctx.r11.s64 = 16800;
	// b 0x82243484
	goto loc_82243484;
loc_8224330C:
	// li r11,17200
	ctx.r11.s64 = 17200;
	// b 0x82243484
	goto loc_82243484;
loc_82243314:
	// li r11,17600
	ctx.r11.s64 = 17600;
	// b 0x82243484
	goto loc_82243484;
loc_8224331C:
	// li r11,18000
	ctx.r11.s64 = 18000;
	// b 0x82243484
	goto loc_82243484;
loc_82243324:
	// li r11,18400
	ctx.r11.s64 = 18400;
	// b 0x82243484
	goto loc_82243484;
loc_8224332C:
	// li r11,18800
	ctx.r11.s64 = 18800;
	// b 0x82243484
	goto loc_82243484;
loc_82243334:
	// li r11,19200
	ctx.r11.s64 = 19200;
	// b 0x82243484
	goto loc_82243484;
loc_8224333C:
	// li r11,19600
	ctx.r11.s64 = 19600;
	// b 0x82243484
	goto loc_82243484;
loc_82243344:
	// li r11,20000
	ctx.r11.s64 = 20000;
	// b 0x82243484
	goto loc_82243484;
loc_8224334C:
	// li r11,20400
	ctx.r11.s64 = 20400;
	// b 0x82243484
	goto loc_82243484;
loc_82243354:
	// li r11,20800
	ctx.r11.s64 = 20800;
	// b 0x82243484
	goto loc_82243484;
loc_8224335C:
	// li r11,21200
	ctx.r11.s64 = 21200;
	// b 0x82243484
	goto loc_82243484;
loc_82243364:
	// li r11,21600
	ctx.r11.s64 = 21600;
	// b 0x82243484
	goto loc_82243484;
loc_8224336C:
	// li r11,22000
	ctx.r11.s64 = 22000;
	// b 0x82243484
	goto loc_82243484;
loc_82243374:
	// li r11,22400
	ctx.r11.s64 = 22400;
	// b 0x82243484
	goto loc_82243484;
loc_8224337C:
	// li r11,22800
	ctx.r11.s64 = 22800;
	// b 0x82243484
	goto loc_82243484;
loc_82243384:
	// li r11,23200
	ctx.r11.s64 = 23200;
	// b 0x82243484
	goto loc_82243484;
loc_8224338C:
	// li r11,23600
	ctx.r11.s64 = 23600;
	// b 0x82243484
	goto loc_82243484;
loc_82243394:
	// li r11,24400
	ctx.r11.s64 = 24400;
	// b 0x82243484
	goto loc_82243484;
loc_8224339C:
	// li r11,24800
	ctx.r11.s64 = 24800;
	// b 0x82243484
	goto loc_82243484;
loc_822433A4:
	// li r11,25200
	ctx.r11.s64 = 25200;
	// b 0x82243484
	goto loc_82243484;
loc_822433AC:
	// li r11,25600
	ctx.r11.s64 = 25600;
	// b 0x82243484
	goto loc_82243484;
loc_822433B4:
	// li r11,26000
	ctx.r11.s64 = 26000;
	// b 0x82243484
	goto loc_82243484;
loc_822433BC:
	// li r11,26400
	ctx.r11.s64 = 26400;
	// b 0x82243484
	goto loc_82243484;
loc_822433C4:
	// li r11,26800
	ctx.r11.s64 = 26800;
	// b 0x82243484
	goto loc_82243484;
loc_822433CC:
	// li r11,27200
	ctx.r11.s64 = 27200;
	// b 0x82243484
	goto loc_82243484;
loc_822433D4:
	// li r11,27600
	ctx.r11.s64 = 27600;
	// b 0x82243484
	goto loc_82243484;
loc_822433DC:
	// li r11,28000
	ctx.r11.s64 = 28000;
	// b 0x82243484
	goto loc_82243484;
loc_822433E4:
	// li r11,28400
	ctx.r11.s64 = 28400;
	// b 0x82243484
	goto loc_82243484;
loc_822433EC:
	// li r11,28800
	ctx.r11.s64 = 28800;
	// b 0x82243484
	goto loc_82243484;
loc_822433F4:
	// li r11,29200
	ctx.r11.s64 = 29200;
	// b 0x82243484
	goto loc_82243484;
loc_822433FC:
	// li r11,29600
	ctx.r11.s64 = 29600;
	// b 0x82243484
	goto loc_82243484;
loc_82243404:
	// li r11,30000
	ctx.r11.s64 = 30000;
	// b 0x82243484
	goto loc_82243484;
loc_8224340C:
	// li r11,30400
	ctx.r11.s64 = 30400;
	// b 0x82243484
	goto loc_82243484;
loc_82243414:
	// li r11,30800
	ctx.r11.s64 = 30800;
	// b 0x82243484
	goto loc_82243484;
loc_8224341C:
	// li r11,31200
	ctx.r11.s64 = 31200;
	// b 0x82243484
	goto loc_82243484;
loc_82243424:
	// li r11,31600
	ctx.r11.s64 = 31600;
	// b 0x82243484
	goto loc_82243484;
loc_8224342C:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// beq cr6,0x82243478
	if (ctx.cr6.eq) goto loc_82243478;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// beq cr6,0x82243470
	if (ctx.cr6.eq) goto loc_82243470;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bne cr6,0x82243468
	if (!ctx.cr6.eq) goto loc_82243468;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,48000
	ctx.r11.u64 = ctx.r11.u64 | 48000;
	// b 0x82243484
	goto loc_82243484;
loc_82243450:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// beq cr6,0x82243480
	if (ctx.cr6.eq) goto loc_82243480;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// beq cr6,0x82243478
	if (ctx.cr6.eq) goto loc_82243478;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// beq cr6,0x82243470
	if (ctx.cr6.eq) goto loc_82243470;
loc_82243468:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82243470:
	// li r11,32000
	ctx.r11.s64 = 32000;
	// b 0x82243484
	goto loc_82243484;
loc_82243478:
	// li r11,24000
	ctx.r11.s64 = 24000;
	// b 0x82243484
	goto loc_82243484;
loc_82243480:
	// li r11,16000
	ctx.r11.s64 = 16000;
loc_82243484:
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82249530) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82246220
	ctx.lr = 0x82249548;
	sub_82246220(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82249594
	if (ctx.cr6.eq) goto loc_82249594;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x82249594
	if (!ctx.cr6.eq) goto loc_82249594;
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,168(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 168, temp.u32);
	// lfs f0,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// lfs f0,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// lfs f0,16(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 180, temp.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x8224959c
	goto loc_8224959C;
loc_82249594:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_8224959C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8224B758) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8224b790
	if (ctx.cr6.eq) goto loc_8224B790;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8224b790
	if (!ctx.cr6.eq) goto loc_8224B790;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224b784
	if (ctx.cr6.eq) goto loc_8224B784;
	// lwz r10,132(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,132(r11)
	REX_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
loc_8224B784:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// b 0x822475b0
	sub_822475B0(ctx, base);
	return;
loc_8224B790:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8224C970) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8224C978;
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
	// addi r31,r11,26128
	r31.s64 = ctx.r11.s64 + 26128;
	// lwz r11,26224(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 26224);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8224ca54
	if (!ctx.cr0.eq) goto loc_8224CA54;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r10,-3964
	ctx.r9.s64 = ctx.r10.s64 + -3964;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r11,26224(r8)
	REX_STORE_U32(ctx.r8.u32 + 26224, ctx.r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r11,4
	ctx.r11.s64 = 4;
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
	// bl 0x8224c8b0
	ctx.lr = 0x8224C9D4;
	sub_8224C8B0(ctx, base);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// addi r9,r9,32128
	ctx.r9.s64 = ctx.r9.s64 + 32128;
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
	// addi r9,r11,-3944
	ctx.r9.s64 = ctx.r11.s64 + -3944;
	// std r30,40(r31)
	REX_STORE_U64(r31.u32 + 40, r30.u64);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// li r9,36
	ctx.r9.s64 = 36;
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
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
	// bl 0x8224c910
	ctx.lr = 0x8224CA30;
	sub_8224C910(ctx, base);
	// stw r30,76(r31)
	REX_STORE_U32(r31.u32 + 76, r30.u32);
	// stw r3,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// std r30,88(r31)
	REX_STORE_U64(r31.u32 + 88, r30.u64);
	// addi r11,r31,88
	ctx.r11.s64 = r31.s64 + 88;
loc_8224CA54:
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

DEFINE_REX_FUNC(sub_822517A0) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r4,23544(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 23544);
	// bl 0x82246920
	ctx.lr = 0x822517C0;
	sub_82246920(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82251820
	if (ctx.cr0.eq) goto loc_82251820;
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
	// bge cr6,0x82251820
	if (!ctx.cr6.lt) goto loc_82251820;
	// rlwinm r8,r11,25,7,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFC;
	// clrlwi r11,r11,23
	ctx.r11.u64 = ctx.r11.u32 & 0x1FF;
	// mulli r9,r11,12
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwzx r11,r8,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82251820
	if (!ctx.cr6.eq) goto loc_82251820;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r9,r3,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82251820
	if (!ctx.cr6.eq) goto loc_82251820;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82251820:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82251828:
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
	// bne 0x82251828
	if (!ctx.cr0.eq) goto loc_82251828;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822511b8
	ctx.lr = 0x82251850;
	sub_822511B8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82251858:
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
	// bne 0x82251858
	if (!ctx.cr0.eq) goto loc_82251858;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82251898
	if (ctx.cr0.eq) goto loc_82251898;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82251898
	if (!ctx.cr6.eq) goto loc_82251898;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8224d778
	ctx.lr = 0x82251898;
	sub_8224D778(ctx, base);
loc_82251898:
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

DEFINE_REX_FUNC(sub_82255C88) {
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
	// beq cr6,0x82255cd4
	if (ctx.cr6.eq) goto loc_82255CD4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82255cd4
	if (ctx.cr6.eq) goto loc_82255CD4;
	// bl 0x82246920
	ctx.lr = 0x82255CA8;
	sub_82246920(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82255cd4
	if (ctx.cr0.eq) goto loc_82255CD4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82246220
	ctx.lr = 0x82255CC0;
	sub_82246220(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x82255cd8
	goto loc_82255CD8;
loc_82255CD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82255CD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82256838) {
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
	ctx.lr = 0x82256850;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82256868
	if (ctx.cr0.eq) goto loc_82256868;
	// lwz r11,240(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 240);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// b 0x8225686c
	goto loc_8225686C;
loc_82256868:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225686C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822573F8) {
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
	ctx.lr = 0x82257418;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8225742c
	if (!ctx.cr0.eq) goto loc_8225742C;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x8225744c
	goto loc_8225744C;
loc_8225742C:
	// lwz r11,240(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 240);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x82257440
	if (ctx.cr6.eq) goto loc_82257440;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// b 0x82257444
	goto loc_82257444;
loc_82257440:
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
loc_82257444:
	// stw r11,240(r3)
	REX_STORE_U32(ctx.r3.u32 + 240, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225744C:
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

DEFINE_REX_FUNC(sub_822596E0) {
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
	ctx.lr = 0x822596E8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r26,r4,24
	r26.u64 = ctx.r4.u32 & 0xFF;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(r26.u32, 4, ctx.xer);
	// blt cr6,0x82259714
	if (ctx.cr6.lt) goto loc_82259714;
	// cmplwi cr6,r26,255
	ctx.cr6.compare<uint32_t>(r26.u32, 255, ctx.xer);
	// beq cr6,0x82259714
	if (ctx.cr6.eq) goto loc_82259714;
loc_82259708:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x822598fc
	goto loc_822598FC;
loc_82259714:
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// addi r28,r11,29668
	r28.s64 = ctx.r11.s64 + 29668;
	// addi r27,r10,29672
	r27.s64 = ctx.r10.s64 + 29672;
	// beq cr6,0x82259788
	if (ctx.cr6.eq) goto loc_82259788;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822469c0
	ctx.lr = 0x82259738;
	sub_822469C0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82259788
	if (ctx.cr0.eq) goto loc_82259788;
	// cmplwi cr6,r26,255
	ctx.cr6.compare<uint32_t>(r26.u32, 255, ctx.xer);
	// beq cr6,0x82259788
	if (ctx.cr6.eq) goto loc_82259788;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_8225974C:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82259760
	if (!ctx.cr6.eq) goto loc_82259760;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// b 0x82259768
	goto loc_82259768;
loc_82259760:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
loc_82259768:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x8225977c
	if (!ctx.cr6.eq) goto loc_8225977C;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, ctx.xer);
	// bne cr6,0x82259708
	if (!ctx.cr6.eq) goto loc_82259708;
loc_8225977C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x8225974c
	if (ctx.cr6.lt) goto loc_8225974C;
loc_82259788:
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(r26.u32, 4, ctx.xer);
	// bge cr6,0x822597cc
	if (!ctx.cr6.lt) goto loc_822597CC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82259850
	if (ctx.cr6.eq) goto loc_82259850;
	// lis r8,-32172
	ctx.r8.s64 = -2108424192;
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lis r7,-32163
	ctx.r7.s64 = -2107834368;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r24,-6976(r8)
	REX_STORE_U32(ctx.r8.u32 + -6976, r24.u32);
	// stw r24,29596(r7)
	REX_STORE_U32(ctx.r7.u32 + 29596, r24.u32);
	// beq cr6,0x82259824
	if (ctx.cr6.eq) goto loc_82259824;
	// li r4,255
	ctx.r4.s64 = 255;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822596e0
	ctx.lr = 0x822597C8;
	sub_822596E0(ctx, base);
	// b 0x82259824
	goto loc_82259824;
loc_822597CC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82259850
	if (ctx.cr6.eq) goto loc_82259850;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r31,r24
	r31.u64 = r24.u64;
	// stw r11,-6976(r10)
	REX_STORE_U32(ctx.r10.u32 + -6976, ctx.r11.u32);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r30,r11,29600
	r30.s64 = ctx.r11.s64 + 29600;
loc_822597F0:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stwx r24,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, r24.u32);
	// bl 0x82255fd8
	ctx.lr = 0x82259800;
	sub_82255FD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82259810
	if (ctx.cr0.eq) goto loc_82259810;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822596e0
	ctx.lr = 0x82259810;
	sub_822596E0(ctx, base);
loc_82259810:
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// blt cr6,0x822597f0
	if (ctx.cr6.lt) goto loc_822597F0;
loc_82259824:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82258510
	ctx.lr = 0x82259830;
	sub_82258510(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822598fc
	if (ctx.cr0.lt) goto loc_822598FC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82259850
	if (!ctx.cr6.eq) goto loc_82259850;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,20
	ctx.r3.u64 = ctx.r3.u64 | 20;
	// b 0x822598fc
	goto loc_822598FC;
loc_82259850:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82255fd8
	ctx.lr = 0x82259858;
	sub_82255FD8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82259880
	if (ctx.cr0.eq) goto loc_82259880;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822576c8
	ctx.lr = 0x82259874;
	sub_822576C8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8224da00
	ctx.lr = 0x82259880;
	sub_8224DA00(ctx, base);
loc_82259880:
	// cmplwi cr6,r26,255
	ctx.cr6.compare<uint32_t>(r26.u32, 255, ctx.xer);
	// bne cr6,0x82259890
	if (!ctx.cr6.eq) goto loc_82259890;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// b 0x82259898
	goto loc_82259898;
loc_82259890:
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
loc_82259898:
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822598f8
	if (ctx.cr6.eq) goto loc_822598F8;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82257708
	ctx.lr = 0x822598B8;
	sub_82257708(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8224da00
	ctx.lr = 0x822598C4;
	sub_8224DA00(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822598f8
	if (!ctx.cr6.eq) goto loc_822598F8;
	// cmplwi cr6,r26,255
	ctx.cr6.compare<uint32_t>(r26.u32, 255, ctx.xer);
	// bne cr6,0x822598e0
	if (!ctx.cr6.eq) goto loc_822598E0;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// b 0x822598e8
	goto loc_822598E8;
loc_822598E0:
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
loc_822598E8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// stw r24,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r24.u32);
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x822598fc
	goto loc_822598FC;
loc_822598F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822598FC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_822647F8) {
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
	ctx.lr = 0x82264800;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lwz r27,172(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// lwz r26,180(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 180);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,172(r3)
	REX_STORE_U32(ctx.r3.u32 + 172, r30.u32);
	// stw r30,180(r3)
	REX_STORE_U32(ctx.r3.u32 + 180, r30.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82258638
	ctx.lr = 0x82264824;
	sub_82258638(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82264854
	if (ctx.cr0.eq) goto loc_82264854;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82257030
	ctx.lr = 0x82264838;
	sub_82257030(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82264854
	if (ctx.cr0.eq) goto loc_82264854;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822568d0
	ctx.lr = 0x82264848;
	sub_822568D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225c0b8
	ctx.lr = 0x82264854;
	sub_8225C0B8(ctx, base);
loc_82264854:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x8226487c
	if (!ctx.cr6.gt) goto loc_8226487C;
	// mr r28,r30
	r28.u64 = r30.u64;
	// mr r29,r27
	r29.u64 = r27.u64;
loc_82264864:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// lwzx r3,r11,r28
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// bl 0x822516b0
	ctx.lr = 0x82264870;
	sub_822516B0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x82264864
	if (!ctx.cr0.eq) goto loc_82264864;
loc_8226487C:
	// lwz r3,176(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 176);
	// bl 0x82255b70
	ctx.lr = 0x82264884;
	sub_82255B70(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// stw r30,176(r31)
	REX_STORE_U32(r31.u32 + 176, r30.u32);
	// ble cr6,0x822648b0
	if (!ctx.cr6.gt) goto loc_822648B0;
	// mr r28,r30
	r28.u64 = r30.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_82264898:
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lwzx r3,r28,r11
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// bl 0x822516b0
	ctx.lr = 0x822648A4;
	sub_822516B0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x82264898
	if (!ctx.cr0.eq) goto loc_82264898;
loc_822648B0:
	// lwz r3,184(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 184);
	// bl 0x82255b70
	ctx.lr = 0x822648B8;
	sub_82255B70(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r30,184(r31)
	REX_STORE_U32(r31.u32 + 184, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822648d0
	if (ctx.cr6.eq) goto loc_822648D0;
	// bl 0x822516b0
	ctx.lr = 0x822648CC;
	sub_822516B0(ctx, base);
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
loc_822648D0:
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822648e4
	if (ctx.cr6.eq) goto loc_822648E4;
	// bl 0x822516b0
	ctx.lr = 0x822648E0;
	sub_822516B0(ctx, base);
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
loc_822648E4:
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822648f8
	if (ctx.cr6.eq) goto loc_822648F8;
	// bl 0x822516b0
	ctx.lr = 0x822648F4;
	sub_822516B0(ctx, base);
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
loc_822648F8:
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226490c
	if (ctx.cr6.eq) goto loc_8226490C;
	// bl 0x822516b0
	ctx.lr = 0x82264908;
	sub_822516B0(ctx, base);
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
loc_8226490C:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82264920
	if (ctx.cr6.eq) goto loc_82264920;
	// bl 0x822516b0
	ctx.lr = 0x8226491C;
	sub_822516B0(ctx, base);
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
loc_82264920:
	// lwz r3,188(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 188);
	// bl 0x82255b70
	ctx.lr = 0x82264928;
	sub_82255B70(ctx, base);
	// stw r30,188(r31)
	REX_STORE_U32(r31.u32 + 188, r30.u32);
	// stw r30,200(r31)
	REX_STORE_U32(r31.u32 + 200, r30.u32);
	// stw r30,192(r31)
	REX_STORE_U32(r31.u32 + 192, r30.u32);
	// lwz r3,204(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 204);
	// bl 0x82255b70
	ctx.lr = 0x8226493C;
	sub_82255B70(ctx, base);
	// stw r30,204(r31)
	REX_STORE_U32(r31.u32 + 204, r30.u32);
	// stw r30,216(r31)
	REX_STORE_U32(r31.u32 + 216, r30.u32);
	// stw r30,208(r31)
	REX_STORE_U32(r31.u32 + 208, r30.u32);
	// stw r30,168(r31)
	REX_STORE_U32(r31.u32 + 168, r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8226BA30) {
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
	ctx.lr = 0x8226BA38;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,88(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// bl 0x82256380
	ctx.lr = 0x8226BA4C;
	sub_82256380(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// li r27,0
	r27.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f31,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// beq cr6,0x8226bac0
	if (ctx.cr6.eq) goto loc_8226BAC0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226bac0
	if (ctx.cr6.eq) goto loc_8226BAC0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82256440
	ctx.lr = 0x8226BA78;
	sub_82256440(ctx, base);
	// stw r3,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// bl 0x82256478
	ctx.lr = 0x8226BA84;
	sub_82256478(ctx, base);
	// stw r3,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r3.u32);
	// addi r4,r31,132
	ctx.r4.s64 = r31.s64 + 132;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82281000
	ctx.lr = 0x8226BA94;
	sub_82281000(ctx, base);
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// addi r30,r31,196
	r30.s64 = r31.s64 + 196;
	// addi r29,r31,192
	r29.s64 = r31.s64 + 192;
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r11,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8225e988
	ctx.lr = 0x8226BABC;
	sub_8225E988(ctx, base);
	// b 0x8226badc
	goto loc_8226BADC;
loc_8226BAC0:
	// stfs f31,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 192, temp.u32);
	// addi r29,r31,192
	r29.s64 = r31.s64 + 192;
	// stfs f31,196(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// addi r30,r31,196
	r30.s64 = r31.s64 + 196;
	// stw r27,96(r31)
	REX_STORE_U32(r31.u32 + 96, r27.u32);
	// stw r27,132(r31)
	REX_STORE_U32(r31.u32 + 132, r27.u32);
	// stw r27,128(r31)
	REX_STORE_U32(r31.u32 + 128, r27.u32);
loc_8226BADC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225d318
	ctx.lr = 0x8226BAE4;
	sub_8225D318(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226bb10
	if (ctx.cr6.eq) goto loc_8226BB10;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226bb10
	if (ctx.cr6.eq) goto loc_8226BB10;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8226bb10
	if (ctx.cr6.eq) goto loc_8226BB10;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82265148
	ctx.lr = 0x8226BB10;
	sub_82265148(ctx, base);
loc_8226BB10:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226bbc8
	if (ctx.cr6.eq) goto loc_8226BBC8;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// bl 0x822d6130
	ctx.lr = 0x8226BB3C;
	sub_822D6130(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmsubs f13,f12,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, -ctx.f13.f64)));
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// bge cr6,0x8226bb80
	if (!ctx.cr6.lt) goto loc_8226BB80;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
	// b 0x8226bbc0
	goto loc_8226BBC0;
loc_8226BB80:
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// bl 0x822d6130
	ctx.lr = 0x8226BB8C;
	sub_822D6130(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmsubs f0,f13,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, -ctx.f0.f64)));
loc_8226BBC0:
	// stfs f0,164(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 164, temp.u32);
	// b 0x8226bbcc
	goto loc_8226BBCC;
loc_8226BBC8:
	// stfs f31,164(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 164, temp.u32);
loc_8226BBCC:
	// lwz r4,92(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8226bc40
	if (ctx.cr6.eq) goto loc_8226BC40;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226bc40
	if (ctx.cr6.eq) goto loc_8226BC40;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8226bc40
	if (ctx.cr6.eq) goto loc_8226BC40;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f13,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r7,128(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 128);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r6,96(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 96);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82284870
	ctx.lr = 0x8226BC1C;
	sub_82284870(ctx, base);
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,108(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,204(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 204, temp.u32);
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f13,200(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 200, temp.u32);
	// b 0x8226bc48
	goto loc_8226BC48;
loc_8226BC40:
	// stfs f31,204(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 204, temp.u32);
	// stfs f31,200(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 200, temp.u32);
loc_8226BC48:
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// li r29,1
	r29.s64 = 1;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8226bca4
	if (!ctx.cr6.eq) goto loc_8226BCA4;
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r29
	r30.u64 = r29.u64;
	// lfs f0,200(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8226bc74
	if (ctx.cr6.gt) goto loc_8226BC74;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_8226BC74:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// bl 0x8225e9f8
	ctx.lr = 0x8226BC80;
	sub_8225E9F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// bl 0x8225e9f8
	ctx.lr = 0x8226BC8C;
	sub_8225E9F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x8225e9f8
	ctx.lr = 0x8226BC98;
	sub_8225E9F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x8225e9f8
	ctx.lr = 0x8226BCA4;
	sub_8225E9F8(ctx, base);
loc_8226BCA4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226b6f8
	ctx.lr = 0x8226BCAC;
	sub_8226B6F8(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8226bd58
	if (!ctx.cr6.eq) goto loc_8226BD58;
	// lfs f0,164(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8226bd58
	if (!ctx.cr6.gt) goto loc_8226BD58;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,156(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,2388(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2388);
	f31.f64 = double(temp.f32);
	// fsubs f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x8226bcf0
	if (!ctx.cr6.gt) goto loc_8226BCF0;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8226bcf4
	if (ctx.cr6.lt) goto loc_8226BCF4;
loc_8226BCF0:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_8226BCF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r29,64(r31)
	REX_STORE_U8(r31.u32 + 64, r29.u8);
	// addi r4,r31,52
	ctx.r4.s64 = r31.s64 + 52;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// bl 0x822650b0
	ctx.lr = 0x8226BD14;
	sub_822650B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16808(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16808);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8226bd34
	if (!ctx.cr6.gt) goto loc_8226BD34;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// blt cr6,0x8226bd38
	if (ctx.cr6.lt) goto loc_8226BD38;
loc_8226BD34:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_8226BD38:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r29,48(r31)
	REX_STORE_U8(r31.u32 + 48, r29.u8);
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// bl 0x822650b0
	ctx.lr = 0x8226BD58;
	sub_822650B0(ctx, base);
loc_8226BD58:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8227ADF8) {
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
	ctx.lr = 0x8227AE18;
	sub_8227AD60(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
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

DEFINE_REX_FUNC(sub_8227BABC) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8227BB10) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8227bac0
	ctx.lr = 0x8227BB34;
	sub_8227BAC0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82255b48
	ctx.lr = 0x8227BB40;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// bne 0x8227bb58
	if (!ctx.cr0.eq) goto loc_8227BB58;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8227bb98
	goto loc_8227BB98;
loc_8227BB58:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8227bb90
	if (!ctx.cr6.gt) goto loc_8227BB90;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8227BB6C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,8(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r10,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8227bb6c
	if (ctx.cr6.lt) goto loc_8227BB6C;
loc_8227BB90:
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227BB98:
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

DEFINE_REX_FUNC(sub_8227D5C0) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r31,r3,24
	r31.s64 = ctx.r3.s64 + 24;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8227d5f4
	if (!ctx.cr6.eq) goto loc_8227D5F4;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8227d5f4
	if (!ctx.cr6.eq) goto loc_8227D5F4;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8227e800
	ctx.lr = 0x8227D5F4;
	sub_8227E800(ctx, base);
loc_8227D5F4:
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
	// bne 0x8227d5f4
	if (!ctx.cr0.eq) goto loc_8227D5F4;
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

DEFINE_REX_FUNC(sub_8227EA40) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// subfic r11,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r4.u64;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8227F190) {
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
loc_8227F1AC:
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
	// bne 0x8227f1ac
	if (!ctx.cr0.eq) goto loc_8227F1AC;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8227f240
	if (!ctx.cr6.eq) goto loc_8227F240;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227f1ec
	if (ctx.cr6.eq) goto loc_8227F1EC;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8227f1ec
	if (ctx.cr6.eq) goto loc_8227F1EC;
	// bl 0x82208848
	ctx.lr = 0x8227F1EC;
	sub_82208848(ctx, base);
loc_8227F1EC:
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r30,0
	r30.s64 = 0;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227f210
	if (ctx.cr6.eq) goto loc_8227F210;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227F210;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227F210:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227f224
	if (ctx.cr6.eq) goto loc_8227F224;
	// bl 0x82255b70
	ctx.lr = 0x8227F224;
	sub_82255B70(ctx, base);
loc_8227F224:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,1516
	ctx.r11.s64 = ctx.r11.s64 + 1516;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x82255b70
	ctx.lr = 0x8227F23C;
	sub_82255B70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227F240:
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

DEFINE_REX_FUNC(sub_822837A8) {
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
	ctx.lr = 0x822837B0;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r20,r8
	r20.u64 = ctx.r8.u64;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82283924
	if (ctx.cr6.eq) goto loc_82283924;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x82283924
	if (ctx.cr6.lt) goto loc_82283924;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82283924
	if (ctx.cr6.eq) goto loc_82283924;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82283924
	if (ctx.cr6.eq) goto loc_82283924;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82283924
	if (ctx.cr6.eq) goto loc_82283924;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82283924
	if (ctx.cr6.eq) goto loc_82283924;
	// rlwinm r19,r5,0,26,26
	r19.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x20;
	// li r30,0
	r30.s64 = 0;
loc_8228380C:
	// stw r30,0(r22)
	REX_STORE_U32(r22.u32 + 0, r30.u32);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// stw r30,0(r21)
	REX_STORE_U32(r21.u32 + 0, r30.u32);
	// mr r28,r30
	r28.u64 = r30.u64;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// mr r29,r30
	r29.u64 = r30.u64;
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// stw r30,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// bge cr6,0x82283840
	if (!ctx.cr6.lt) goto loc_82283840;
	// lis r25,32767
	r25.s64 = 2147418112;
	// ori r25,r25,65535
	r25.u64 = r25.u64 | 65535;
loc_82283840:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bge cr6,0x82283850
	if (!ctx.cr6.lt) goto loc_82283850;
	// lis r20,32767
	r20.s64 = 2147418112;
	// ori r20,r20,65535
	r20.u64 = r20.u64 | 65535;
loc_82283850:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x8228385c
	if (ctx.cr6.eq) goto loc_8228385C;
	// li r25,1
	r25.s64 = 1;
loc_8228385C:
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(r28.s32, r25.s32, ctx.xer);
	// bge cr6,0x82283914
	if (!ctx.cr6.lt) goto loc_82283914;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82283914
	if (ctx.cr6.eq) goto loc_82283914;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82283914
	if (ctx.cr0.eq) goto loc_82283914;
	// subf r10,r27,r11
	ctx.r10.u64 = ctx.r11.u64 - r27.u64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// subf. r6,r10,r20
	ctx.r6.u64 = r20.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble 0x82283914
	if (!ctx.cr0.gt) goto loc_82283914;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// bl 0x82283208
	ctx.lr = 0x822838B4;
	sub_82283208(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8228392c
	if (ctx.cr0.lt) goto loc_8228392C;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822838f8
	if (!ctx.cr6.eq) goto loc_822838F8;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822838dc
	if (!ctx.cr6.eq) goto loc_822838DC;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
loc_822838DC:
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// ble cr6,0x822838f0
	if (!ctx.cr6.gt) goto loc_822838F0;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
loc_822838F0:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x8228385c
	goto loc_8228385C;
loc_822838F8:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// rlwinm r5,r26,28,31,31
	ctx.r5.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 28) & 0x1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82282db0
	ctx.lr = 0x8228390C;
	sub_82282DB0(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// b 0x8228380c
	goto loc_8228380C;
loc_82283914:
	// stw r28,0(r22)
	REX_STORE_U32(r22.u32 + 0, r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,0(r21)
	REX_STORE_U32(r21.u32 + 0, r29.u32);
	// b 0x8228392c
	goto loc_8228392C;
loc_82283924:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_8228392C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_822888E8) {
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
	ctx.lr = 0x822888F0;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82288984
	if (ctx.cr6.lt) goto loc_82288984;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82288984
	if (ctx.cr6.lt) goto loc_82288984;
	// lfs f0,32(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x82288940
	if (ctx.cr6.eq) goto loc_82288940;
	// bl 0x82288680
	ctx.lr = 0x82288934;
	sub_82288680(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82288988
	if (ctx.cr0.lt) goto loc_82288988;
	// stfs f31,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
loc_82288940:
	// lwz r5,28(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x82288958
	if (!ctx.cr6.eq) goto loc_82288958;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mulli r11,r11,5
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(5));
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
loc_82288958:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,208(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82288980;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82288988
	goto loc_82288988;
loc_82288984:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82288988:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8228AF68) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r10,8032
	ctx.r10.s64 = ctx.r10.s64 + 8032;
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// li r5,68
	ctx.r5.s64 = 68;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// bl 0x822d5870
	ctx.lr = 0x8228AFA8;
	sub_822D5870(ctx, base);
	// lis r7,6184
	ctx.r7.s64 = 405274624;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,72(r31)
	REX_STORE_U32(r31.u32 + 72, r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,76(r31)
	REX_STORE_U32(r31.u32 + 76, r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// ori r7,r7,134
	ctx.r7.u64 = ctx.r7.u64 | 134;
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,92(r31)
	REX_STORE_U32(r31.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// li r3,128
	ctx.r3.s64 = 128;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x82404b08
	ctx.lr = 0x8228AFFC;
	sub_82404B08(ctx, base);
	// stw r3,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// bl 0x824d440c
	ctx.lr = 0x8228B00C;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,164(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// stw r11,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r11.u32);
	// bl 0x822d7b58
	ctx.lr = 0x8228B01C;
	sub_822D7B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_8228E178) {
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
	ctx.lr = 0x8228E180;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// li r30,0
	r30.s64 = 0;
	// std r5,240(r1)
	REX_STORE_U64(ctx.r1.u32 + 240, ctx.r5.u64);
	// lwz r26,240(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r24,244(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r30
	r29.u64 = r30.u64;
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r26.s32, ctx.xer);
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// std r5,20(r4)
	REX_STORE_U64(ctx.r4.u32 + 20, ctx.r5.u64);
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// blt cr6,0x8228e1cc
	if (ctx.cr6.lt) goto loc_8228E1CC;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r24.s32, ctx.xer);
	// bge cr6,0x8228e32c
	if (!ctx.cr6.lt) goto loc_8228E32C;
loc_8228E1CC:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228e1e0
	if (ctx.cr6.eq) goto loc_8228E1E0;
	// bl 0x82216cc8
	ctx.lr = 0x8228E1DC;
	sub_82216CC8(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
loc_8228E1E0:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r28,r31,4
	r28.s64 = r31.s64 + 4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228e1f8
	if (ctx.cr6.eq) goto loc_8228E1F8;
	// bl 0x82216cc8
	ctx.lr = 0x8228E1F4;
	sub_82216CC8(ctx, base);
	// stw r30,0(r28)
	REX_STORE_U32(r28.u32 + 0, r30.u32);
loc_8228E1F8:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r25,r31,8
	r25.s64 = r31.s64 + 8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228e20c
	if (ctx.cr6.eq) goto loc_8228E20C;
	// bl 0x82288ee8
	ctx.lr = 0x8228E20C;
	sub_82288EE8(ctx, base);
loc_8228E20C:
	// stw r30,0(r25)
	REX_STORE_U32(r25.u32 + 0, r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82288cc0
	ctx.lr = 0x8228E21C;
	sub_82288CC0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8228e2e0
	if (ctx.cr0.lt) goto loc_8228E2E0;
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// stw r30,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r30.u32);
	// addi r9,r26,31
	ctx.r9.s64 = r26.s64 + 31;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r10,r24,31
	ctx.r10.s64 = r24.s64 + 31;
	// rlwinm r4,r9,0,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// rlwinm r5,r10,0,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r4,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r5,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r5.u32);
	// lis r6,6184
	ctx.r6.s64 = 405274624;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,390
	ctx.r6.u64 = ctx.r6.u64 | 390;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228E288;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8228e2e0
	if (ctx.cr0.lt) goto loc_8228E2E0;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,6184
	ctx.r8.s64 = 405274624;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// ori r8,r8,390
	ctx.r8.u64 = ctx.r8.u64 | 390;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228E2C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8228e2e0
	if (ctx.cr0.lt) goto loc_8228E2E0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x8228abf0
	ctx.lr = 0x8228E2DC;
	sub_8228ABF0(ctx, base);
	// b 0x8228e32c
	goto loc_8228E32C;
loc_8228E2E0:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228e2f4
	if (ctx.cr6.eq) goto loc_8228E2F4;
	// bl 0x82216cc8
	ctx.lr = 0x8228E2F0;
	sub_82216CC8(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
loc_8228E2F4:
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228e308
	if (ctx.cr6.eq) goto loc_8228E308;
	// bl 0x82216cc8
	ctx.lr = 0x8228E304;
	sub_82216CC8(ctx, base);
	// stw r30,0(r28)
	REX_STORE_U32(r28.u32 + 0, r30.u32);
loc_8228E308:
	// lwz r3,0(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228e318
	if (ctx.cr6.eq) goto loc_8228E318;
	// bl 0x82288ee8
	ctx.lr = 0x8228E318;
	sub_82288EE8(ctx, base);
loc_8228E318:
	// stw r30,0(r25)
	REX_STORE_U32(r25.u32 + 0, r30.u32);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
loc_8228E32C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8228cb10
	ctx.lr = 0x8228E334;
	sub_8228CB10(ctx, base);
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x822d7b58
	ctx.lr = 0x8228E33C;
	sub_822D7B58(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_822953C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822953D0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x82255b48
	ctx.lr = 0x822953E8;
	sub_82255B48(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r5,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r5.u32);
	// bne 0x822953fc
	if (!ctx.cr0.eq) goto loc_822953FC;
	// li r31,-8
	r31.s64 = -8;
	// b 0x82295420
	goto loc_82295420;
loc_822953FC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822952f0
	ctx.lr = 0x82295408;
	sub_822952F0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x82295420
	if (!ctx.cr0.lt) goto loc_82295420;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x82255b70
	ctx.lr = 0x82295418;
	sub_82255B70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_82295420:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82295D28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82295D30;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r28,-1
	r28.s64 = -1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82295dc4
	if (ctx.cr6.eq) goto loc_82295DC4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82295dc4
	if (ctx.cr6.eq) goto loc_82295DC4;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82295dc4
	if (ctx.cr6.eq) goto loc_82295DC4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82295dc4
	if (!ctx.cr6.lt) goto loc_82295DC4;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82295dc4
	if (ctx.cr6.lt) goto loc_82295DC4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82276838
	ctx.lr = 0x82295D8C;
	sub_82276838(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82295dcc
	if (ctx.cr0.lt) goto loc_82295DCC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822767a0
	ctx.lr = 0x82295DA8;
	sub_822767A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82295dcc
	if (ctx.cr0.lt) goto loc_82295DCC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x82295dcc
	if (!ctx.cr6.eq) goto loc_82295DCC;
	// li r28,0
	r28.s64 = 0;
	// b 0x82295dcc
	goto loc_82295DCC;
loc_82295DC4:
	// lis r28,-32768
	r28.s64 = -2147483648;
	// ori r28,r28,6
	r28.u64 = r28.u64 | 6;
loc_82295DCC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8229B8F0) {
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
	// mullw r30,r4,r5
	r30.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82255b48
	ctx.lr = 0x8229B910;
	sub_82255B48(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8229b928
	if (ctx.cr0.eq) goto loc_8229B928;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5870
	ctx.lr = 0x8229B928;
	sub_822D5870(ctx, base);
loc_8229B928:
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

DEFINE_REX_FUNC(sub_8229D1C8) {
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
	ctx.lr = 0x8229D1D0;
	// lwz r11,48(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r9,52(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 52);
	// lwz r24,0(r8)
	r24.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r25,4(r8)
	r25.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// lwz r29,32(r7)
	r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 32);
	// lwz r30,28(r7)
	r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// bge cr6,0x8229d1fc
	if (!ctx.cr6.lt) goto loc_8229D1FC;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// addi r26,r11,-1
	r26.s64 = ctx.r11.s64 + -1;
	// b 0x8229d204
	goto loc_8229D204;
loc_8229D1FC:
	// lwz r11,44(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 44);
	// subf r26,r9,r11
	r26.u64 = ctx.r11.u64 - ctx.r9.u64;
loc_8229D204:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r11,22536
	r27.s64 = ctx.r11.s64 + 22536;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r22,r10,r27
	r22.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	// lwzx r23,r11,r27
	r23.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
loc_8229D21C:
	// cmplwi cr6,r30,20
	ctx.cr6.compare<uint32_t>(r30.u32, 20, ctx.xer);
	// bge cr6,0x8229d250
	if (!ctx.cr6.lt) goto loc_8229D250;
	// subfic r11,r30,19
	ctx.xer.ca = r30.u32 <= 19;
	ctx.r11.u64 = static_cast<uint64_t>(19) - r30.u64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8229D234:
	// lbz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 0);
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// slw r11,r11,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r30.u8 & 0x3F));
	// or r29,r11,r29
	r29.u64 = ctx.r11.u64 | r29.u64;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bdnz 0x8229d234
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8229D234;
loc_8229D250:
	// and r11,r22,r29
	ctx.r11.u64 = r22.u64 & r29.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbzx r3,r11,r5
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8229d280
	if (!ctx.cr0.eq) goto loc_8229D280;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lbz r10,1(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// srw r29,r29,r10
	r29.u64 = ctx.r10.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r10.u8 & 0x3F));
	// stb r11,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// subf r30,r10,r30
	r30.u64 = r30.u64 - ctx.r10.u64;
	// b 0x8229d4b4
	goto loc_8229D4B4;
loc_8229D280:
	// lbz r11,1(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// rlwinm. r31,r3,0,27,27
	r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// srw r10,r29,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r11.u8 & 0x3F));
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// bne 0x8229d2d4
	if (!ctx.cr0.eq) goto loc_8229D2D4;
loc_8229D294:
	// rlwinm. r31,r3,0,25,25
	r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8229d57c
	if (!ctx.cr0.eq) goto loc_8229D57C;
	// rlwinm r31,r3,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwzx r31,r31,r27
	r31.u64 = REX_LOAD_U32(r31.u32 + r27.u32);
	// and r31,r31,r10
	r31.u64 = r31.u64 & ctx.r10.u64;
	// add r3,r31,r3
	ctx.r3.u64 = r31.u64 + ctx.r3.u64;
	// rlwinm r3,r3,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzux r3,r4,r3
	ea = ctx.r4.u32 + ctx.r3.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8229d4a0
	if (ctx.cr0.eq) goto loc_8229D4A0;
	// lbz r31,1(r4)
	r31.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// rlwinm. r30,r3,0,27,27
	r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// srw r10,r10,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r31.u8 & 0x3F));
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// beq 0x8229d294
	if (ctx.cr0.eq) goto loc_8229D294;
loc_8229D2D4:
	// clrlwi r31,r3,28
	r31.u64 = ctx.r3.u32 & 0xF;
	// lwz r4,4(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r3,r31,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// lwzx r3,r3,r27
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + r27.u32);
	// and r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 & ctx.r10.u64;
	// srw r10,r10,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r31.u8 & 0x3F));
	// add r28,r3,r4
	r28.u64 = ctx.r3.u64 + ctx.r4.u64;
	// bge cr6,0x8229d328
	if (!ctx.cr6.lt) goto loc_8229D328;
	// subfic r4,r11,14
	ctx.xer.ca = ctx.r11.u32 <= 14;
	ctx.r4.u64 = static_cast<uint64_t>(14) - ctx.r11.u64;
	// rlwinm r4,r4,29,3,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_8229D30C:
	// lbz r4,0(r24)
	ctx.r4.u64 = REX_LOAD_U8(r24.u32 + 0);
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// slw r4,r4,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 | ctx.r10.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x8229d30c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8229D30C;
loc_8229D328:
	// and r4,r23,r10
	ctx.r4.u64 = r23.u64 & ctx.r10.u64;
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 + ctx.r6.u64;
	// lbz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// rlwinm. r30,r3,0,27,27
	r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// b 0x8229d368
	goto loc_8229D368;
loc_8229D340:
	// rlwinm. r31,r3,0,25,25
	r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8229d51c
	if (!ctx.cr0.eq) goto loc_8229D51C;
	// rlwinm r31,r3,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwzx r31,r31,r27
	r31.u64 = REX_LOAD_U32(r31.u32 + r27.u32);
	// and r31,r31,r10
	r31.u64 = r31.u64 & ctx.r10.u64;
	// add r3,r31,r3
	ctx.r3.u64 = r31.u64 + ctx.r3.u64;
	// rlwinm r3,r3,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzux r3,r4,r3
	ea = ctx.r4.u32 + ctx.r3.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// rlwinm. r31,r3,0,27,27
	r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
loc_8229D368:
	// lbz r31,1(r4)
	r31.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// srw r10,r10,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r31.u8 & 0x3F));
	// beq 0x8229d340
	if (ctx.cr0.eq) goto loc_8229D340;
	// clrlwi r3,r3,28
	ctx.r3.u64 = ctx.r3.u32 & 0xF;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x8229d3b4
	if (!ctx.cr6.lt) goto loc_8229D3B4;
	// subf r31,r11,r3
	r31.u64 = ctx.r3.u64 - ctx.r11.u64;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// rlwinm r31,r31,29,3,31
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_8229D398:
	// lbz r31,0(r24)
	r31.u64 = REX_LOAD_U8(r24.u32 + 0);
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// slw r31,r31,r11
	r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r31,r10
	ctx.r10.u64 = r31.u64 | ctx.r10.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x8229d398
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8229D398;
loc_8229D3B4:
	// rlwinm r21,r3,2,0,29
	r21.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,4(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// subf r30,r3,r11
	r30.u64 = ctx.r11.u64 - ctx.r3.u64;
	// lwz r4,40(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 40);
	// subf r26,r28,r26
	r26.u64 = r26.u64 - r28.u64;
	// srw r29,r10,r3
	r29.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r3.u8 & 0x3F));
	// lwzx r11,r21,r27
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + r27.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8229d470
	if (!ctx.cr6.lt) goto loc_8229D470;
	// lwz r10,44(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 44);
loc_8229D3E8:
	// subf r3,r4,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r4.u64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8229d3e8
	if (ctx.cr6.lt) goto loc_8229D3E8;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8229d440
	if (!ctx.cr6.gt) goto loc_8229D440;
	// subf r4,r10,r28
	ctx.r4.u64 = r28.u64 - ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8229D40C:
	// lbzu r3,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r3,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r3.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x8229d40c
	if (!ctx.cr0.eq) goto loc_8229D40C;
	// lwz r11,40(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 40);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8229D428:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stb r10,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x8229d428
	if (!ctx.cr0.eq) goto loc_8229D428;
	// b 0x8229d4bc
	goto loc_8229D4BC;
loc_8229D440:
	// lbz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r28,-2
	ctx.r10.s64 = r28.s64 + -2;
	// stb r4,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r4.u8);
	// lbzu r4,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r4,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r9.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8229D458:
	// lbzu r4,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r4,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r4.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x8229d458
	if (!ctx.cr0.eq) goto loc_8229D458;
	// b 0x8229d4bc
	goto loc_8229D4BC;
loc_8229D470:
	// lbz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r28,-2
	ctx.r10.s64 = r28.s64 + -2;
	// stb r4,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r4.u8);
	// lbzu r4,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r4,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r9.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8229D488:
	// lbzu r4,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r4,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r4.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x8229d488
	if (!ctx.cr0.eq) goto loc_8229D488;
	// b 0x8229d4bc
	goto loc_8229D4BC;
loc_8229D4A0:
	// lwz r3,4(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lbz r4,1(r4)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// srw r29,r10,r4
	r29.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r4.u8 & 0x3F));
	// stb r3,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r3.u8);
	// subf r30,r4,r11
	r30.u64 = ctx.r11.u64 - ctx.r4.u64;
loc_8229D4B4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r26,r26,-1
	r26.s64 = r26.s64 + -1;
loc_8229D4BC:
	// cmplwi cr6,r26,258
	ctx.cr6.compare<uint32_t>(r26.u32, 258, ctx.xer);
	// blt cr6,0x8229d4cc
	if (ctx.cr6.lt) goto loc_8229D4CC;
	// cmplwi cr6,r25,10
	ctx.cr6.compare<uint32_t>(r25.u32, 10, ctx.xer);
	// bge cr6,0x8229d21c
	if (!ctx.cr6.lt) goto loc_8229D21C;
loc_8229D4CC:
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r10,r30,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r11,r25,r11
	ctx.r11.u64 = ctx.r11.u64 - r25.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8229d4e4
	if (!ctx.cr6.lt) goto loc_8229D4E4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8229D4E4:
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r29,32(r7)
	REX_STORE_U32(ctx.r7.u32 + 32, r29.u32);
	// subf r10,r11,r24
	ctx.r10.u64 = r24.u64 - ctx.r11.u64;
	// subf r6,r6,r30
	ctx.r6.u64 = r30.u64 - ctx.r6.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// stw r6,28(r7)
	REX_STORE_U32(ctx.r7.u32 + 28, ctx.r6.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,8(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// subf r11,r11,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r11.u64;
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8229d5ec
	goto loc_8229D5EC;
loc_8229D51C:
	// lwz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// rlwinm r5,r11,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r4,r4,17424
	ctx.r4.s64 = ctx.r4.s64 + 17424;
	// subf r6,r25,r6
	ctx.r6.u64 = ctx.r6.u64 - r25.u64;
	// stw r4,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r4.u32);
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x8229d540
	if (!ctx.cr6.lt) goto loc_8229D540;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_8229D540:
	// li r3,-3
	ctx.r3.s64 = -3;
loc_8229D544:
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,32(r7)
	REX_STORE_U32(ctx.r7.u32 + 32, ctx.r10.u32);
	// add r4,r6,r25
	ctx.r4.u64 = ctx.r6.u64 + r25.u64;
	// subf r10,r5,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r5.u64;
	// subf r11,r6,r24
	ctx.r11.u64 = r24.u64 - ctx.r6.u64;
	// stw r10,28(r7)
	REX_STORE_U32(ctx.r7.u32 + 28, ctx.r10.u32);
	// stw r4,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r4.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// subf r10,r10,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r10.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// b 0x8229d5f0
	goto loc_8229D5F0;
loc_8229D57C:
	// rlwinm. r6,r3,0,26,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r5,r11,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r6,r25,r6
	ctx.r6.u64 = ctx.r6.u64 - r25.u64;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// beq 0x8229d5a4
	if (ctx.cr0.eq) goto loc_8229D5A4;
	// bge cr6,0x8229d59c
	if (!ctx.cr6.lt) goto loc_8229D59C;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_8229D59C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8229d544
	goto loc_8229D544;
loc_8229D5A4:
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// addi r4,r4,17396
	ctx.r4.s64 = ctx.r4.s64 + 17396;
	// stw r4,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r4.u32);
	// bge cr6,0x8229d5b8
	if (!ctx.cr6.lt) goto loc_8229D5B8;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_8229D5B8:
	// stw r10,32(r7)
	REX_STORE_U32(ctx.r7.u32 + 32, ctx.r10.u32);
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r6,r25
	ctx.r10.u64 = ctx.r6.u64 + r25.u64;
	// subf r5,r5,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r5.u64;
	// subf r11,r6,r24
	ctx.r11.u64 = r24.u64 - ctx.r6.u64;
	// stw r5,28(r7)
	REX_STORE_U32(ctx.r7.u32 + 28, ctx.r5.u32);
	// li r3,-3
	ctx.r3.s64 = -3;
	// stw r10,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8229D5EC:
	// stw r11,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
loc_8229D5F0:
	// stw r9,52(r7)
	REX_STORE_U32(ctx.r7.u32 + 52, ctx.r9.u32);
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_822AE440) {
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
	// li r3,56
	ctx.r3.s64 = 56;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x822c80d0
	ctx.lr = 0x822AE464;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ae480
	if (ctx.cr0.eq) goto loc_822AE480;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822ba708
	ctx.lr = 0x822AE478;
	sub_822BA708(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x822ae488
	goto loc_822AE488;
loc_822AE480:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_822AE488:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x822ad9c0
	ctx.lr = 0x822AE494;
	sub_822AD9C0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
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

DEFINE_REX_FUNC(sub_822B0FF0) {
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
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// beq 0x822b1050
	if (ctx.cr0.eq) goto loc_822B1050;
	// lfs f0,80(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,84(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// lfs f12,88(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
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
	// bl 0x822b0c78
	ctx.lr = 0x822B1050;
	sub_822B0C78(ctx, base);
loc_822B1050:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// beq cr6,0x822b1088
	if (ctx.cr6.eq) goto loc_822B1088;
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b107c
	if (ctx.cr6.eq) goto loc_822B107C;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x822b1080
	goto loc_822B1080;
loc_822B107C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822B1080:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,468(r11)
	REX_STORE_U8(ctx.r11.u32 + 468, ctx.r10.u8);
loc_822B1088:
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

DEFINE_REX_FUNC(sub_822B5D40) {
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
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x822b5dbc
	goto loc_822B5DBC;
loc_822B5D64:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,-4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lfs f0,124(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,124(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x822b5d94
	if (ctx.cr6.lt) goto loc_822B5D94;
	// li r9,0
	ctx.r9.s64 = 0;
loc_822B5D94:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822b5da0
	if (ctx.cr0.eq) goto loc_822B5DA0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_822B5DA0:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,1
	r31.s64 = ctx.r11.s64 + 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// stwx r9,r8,r3
	REX_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r9.u32);
loc_822B5DBC:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822b5d64
	if (ctx.cr6.lt) goto loc_822B5D64;
	// bne cr6,0x822b5de0
	if (!ctx.cr6.eq) goto loc_822B5DE0;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_822B5DE0:
	// bl 0x822b40e8
	ctx.lr = 0x822B5DE4;
	sub_822B40E8(ctx, base);
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

DEFINE_REX_FUNC(sub_822B9570) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,23504
	ctx.r11.s64 = ctx.r11.s64 + 23504;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r8,r11,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r7,r10,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,31492(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 31492);
	// subf r9,r8,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r8.u64;
	// rldicr r7,r4,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// srad r9,r7,r9
	temp.u64 = ctx.r9.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r7.s64 < 0) & (((ctx.r7.s64 >> temp.u64) << temp.u64) != ctx.r7.s64);
	ctx.r9.s64 = ctx.r7.s64 >> temp.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// srd r7,r9,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r8.u8 & 0x7F));
	// lwz r3,16(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// b 0x82226380
	sub_82226380(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822BA098) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r31,8(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a11a8
	ctx.lr = 0x822BA0C4;
	sub_822A11A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x822a11a8
	ctx.lr = 0x822BA0D4;
	sub_822A11A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x822a11a8
	ctx.lr = 0x822BA0E4;
	sub_822A11A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x822a11a8
	ctx.lr = 0x822BA0F4;
	sub_822A11A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a11a8
	ctx.lr = 0x822BA104;
	sub_822A11A8(ctx, base);
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

DEFINE_REX_FUNC(sub_822BB798) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822BB7A0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x822d6450
	ctx.lr = 0x822BB7BC;
	sub_822D6450(ctx, base);
	// lis r11,5461
	ctx.r11.s64 = 357892096;
	// li r29,-1
	r29.s64 = -1;
	// ori r10,r11,21845
	ctx.r10.u64 = ctx.r11.u64 | 21845;
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,48(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 48);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r9,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// mulli r3,r11,12
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// ble cr6,0x822bb7ec
	if (!ctx.cr6.gt) goto loc_822BB7EC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_822BB7EC:
	// bl 0x822c80d0
	ctx.lr = 0x822BB7F0;
	sub_822C80D0(ctx, base);
	// stw r3,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r4,52(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 52);
	// mulli r5,r11,12
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// bl 0x822d4fa0
	ctx.lr = 0x822BB804;
	sub_822D4FA0(ctx, base);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// beq cr6,0x822bb840
	if (ctx.cr6.eq) goto loc_822BB840;
	// lis r10,2047
	ctx.r10.s64 = 134152192;
	// rlwinm r3,r11,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822bb830
	if (!ctx.cr6.gt) goto loc_822BB830;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_822BB830:
	// bl 0x822c80d0
	ctx.lr = 0x822BB834;
	sub_822C80D0(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm r5,r11,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// b 0x822bb864
	goto loc_822BB864;
loc_822BB840:
	// lis r10,2730
	ctx.r10.s64 = 178913280;
	// mulli r3,r11,24
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// ori r10,r10,43690
	ctx.r10.u64 = ctx.r10.u64 | 43690;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822bb858
	if (!ctx.cr6.gt) goto loc_822BB858;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_822BB858:
	// bl 0x822c80d0
	ctx.lr = 0x822BB85C;
	sub_822C80D0(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mulli r5,r11,24
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
loc_822BB864:
	// stw r3,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// lwz r4,56(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 56);
	// bl 0x822d4fa0
	ctx.lr = 0x822BB870;
	sub_822D4FA0(ctx, base);
	// addi r4,r30,60
	ctx.r4.s64 = r30.s64 + 60;
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x822d4fa0
	ctx.lr = 0x822BB880;
	sub_822D4FA0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822C2888) {
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
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x822d6450
	ctx.lr = 0x822C28B4;
	sub_822D6450(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// lwz r9,44(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 44);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822c28dc
	goto loc_822C28DC;
loc_822C28CC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// beq cr6,0x822c28e4
	if (ctx.cr6.eq) goto loc_822C28E4;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_822C28DC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c28cc
	if (!ctx.cr6.eq) goto loc_822C28CC;
loc_822C28E4:
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// b 0x822c2904
	goto loc_822C2904;
loc_822C28F4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// beq cr6,0x822c290c
	if (ctx.cr6.eq) goto loc_822C290C;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
loc_822C2904:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822c28f4
	if (!ctx.cr6.eq) goto loc_822C28F4;
loc_822C290C:
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822b1128
	ctx.lr = 0x822C2918;
	sub_822B1128(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 52);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x822c2938
	goto loc_822C2938;
loc_822C2928:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// beq cr6,0x822c2940
	if (ctx.cr6.eq) goto loc_822C2940;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_822C2938:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c2928
	if (!ctx.cr6.eq) goto loc_822C2928;
loc_822C2940:
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// addi r11,r30,56
	ctx.r11.s64 = r30.s64 + 56;
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 60);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 64);
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 68);
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r11,528(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c299c
	if (ctx.cr6.eq) goto loc_822C299C;
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
loc_822C297C:
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// beq cr6,0x822c299c
	if (ctx.cr6.eq) goto loc_822C299C;
	// lwz r11,528(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c297c
	if (!ctx.cr6.eq) goto loc_822C297C;
loc_822C299C:
	// lis r10,409
	ctx.r10.s64 = 26804224;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// ori r10,r10,39321
	ctx.r10.u64 = ctx.r10.u64 | 39321;
	// mulli r3,r11,160
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(160));
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822c29b8
	if (!ctx.cr6.gt) goto loc_822C29B8;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822C29B8:
	// bl 0x822c80d0
	ctx.lr = 0x822C29BC;
	sub_822C80D0(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r9,528(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 528);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822c2aa0
	if (ctx.cr6.eq) goto loc_822C2AA0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
loc_822C29E4:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// stfs f13,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f13,36(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f13,56(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f0,72(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// stfs f13,76(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f13,80(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// addi r8,r11,80
	ctx.r8.s64 = ctx.r11.s64 + 80;
	// stfs f0,84(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// addi r10,r10,160
	ctx.r10.s64 = ctx.r10.s64 + 160;
	// stfs f0,88(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// stfs f0,92(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// stfs f0,96(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// stfs f13,100(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// stfs f0,104(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stfs f0,112(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// stfs f0,116(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// stfs f13,120(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// stfs f0,124(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 124, temp.u32);
	// stfs f0,128(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// stfs f0,132(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 132, temp.u32);
	// stfs f0,136(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 136, temp.u32);
	// stfs f13,140(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 140, temp.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c2aa0
	if (ctx.cr6.eq) goto loc_822C2AA0;
	// lwz r9,528(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 528);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822c29e4
	if (!ctx.cr6.eq) goto loc_822C29E4;
loc_822C2AA0:
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

DEFINE_REX_FUNC(sub_822CACB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r9,r3,16,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0x80000000;
	// rlwinm. r11,r3,22,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 22) & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r8,r3,17,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 17) & 0x1;
	// stw r9,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// clrlwi r10,r3,22
	ctx.r10.u64 = ctx.r3.u32 & 0x3FF;
	// bne 0x822cad2c
	if (!ctx.cr0.eq) goto loc_822CAD2C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822cad70
	if (ctx.cr6.eq) goto loc_822CAD70;
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r11.u64);
	// lfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,16632(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16632);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// beq cr6,0x822cad0c
	if (ctx.cr6.eq) goto loc_822CAD0C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822cad14
	goto loc_822CAD14;
loc_822CAD0C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
loc_822CAD14:
	// fmuls f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,25892(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 25892);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// b 0x822cad70
	goto loc_822CAD70;
loc_822CAD2C:
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bne cr6,0x822cad50
	if (!ctx.cr6.eq) goto loc_822CAD50;
	// oris r11,r9,32640
	ctx.r11.u64 = ctx.r9.u64 | 2139095040;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// beq cr6,0x822cad70
	if (ctx.cr6.eq) goto loc_822CAD70;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,0,9,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7FFFFF) | (ctx.r11.u64 & 0xFFFFFFFFFF800000);
	// b 0x822cad6c
	goto loc_822CAD6C;
loc_822CAD50:
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// rlwinm r9,r9,0,9,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFF807FFFFF;
	// rlwinm r11,r11,23,0,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xFF800000;
	// rlwinm r10,r10,13,0,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFFFE000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,0,0,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF800000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_822CAD6C:
	// stw r11,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
loc_822CAD70:
	// lfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CE140) {
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// bl 0x822c88c0
	ctx.lr = 0x822CE168;
	sub_822C88C0(ctx, base);
	// stb r30,40(r31)
	REX_STORE_U8(r31.u32 + 40, r30.u8);
	// stb r30,41(r31)
	REX_STORE_U8(r31.u32 + 41, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,42(r31)
	REX_STORE_U8(r31.u32 + 42, r30.u8);
	// stb r30,43(r31)
	REX_STORE_U8(r31.u32 + 43, r30.u8);
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

DEFINE_REX_FUNC(sub_822CF620) {
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
	ctx.lr = 0x822CF628;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822cf708
	if (ctx.cr6.eq) goto loc_822CF708;
	// lhz r11,2(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// lfs f1,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,36(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// clrlwi r25,r11,24
	r25.u64 = ctx.r11.u32 & 0xFF;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x822d2430
	ctx.lr = 0x822CF654;
	sub_822D2430(ctx, base);
	// li r26,0
	r26.s64 = 0;
	// li r29,0
	r29.s64 = 0;
loc_822CF65C:
	// lwz r3,36(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 36);
	// li r30,0
	r30.s64 = 0;
	// lwzx r11,r29,r3
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822cf6f8
	if (!ctx.cr6.gt) goto loc_822CF6F8;
loc_822CF670:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x822d2318
	ctx.lr = 0x822CF67C;
	sub_822D2318(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x822cf6e4
	if (ctx.cr0.eq) goto loc_822CF6E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d1a40
	ctx.lr = 0x822CF68C;
	sub_822D1A40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822cf6e4
	if (ctx.cr0.eq) goto loc_822CF6E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d1dc0
	ctx.lr = 0x822CF69C;
	sub_822D1DC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r25,24
	ctx.r10.u64 = r25.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822cf6e4
	if (!ctx.cr6.eq) goto loc_822CF6E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8229a710
	ctx.lr = 0x822CF6B4;
	sub_8229A710(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r24,0(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,0(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 0);
	// bl 0x822d1e98
	ctx.lr = 0x822CF6C8;
	sub_822D1E98(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lfs f0,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CF6E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822CF6E4:
	// lwz r3,36(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 36);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwzx r11,r29,r3
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r3.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822cf670
	if (ctx.cr6.lt) goto loc_822CF670;
loc_822CF6F8:
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(r29.u32, 8, ctx.xer);
	// blt cr6,0x822cf65c
	if (ctx.cr6.lt) goto loc_822CF65C;
loc_822CF708:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_822D2628) {
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
	// bl 0x822d0ad0
	ctx.lr = 0x822D2644;
	sub_822D0AD0(ctx, base);
	// lwz r30,260(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 260);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822d2668
	if (ctx.cr6.eq) goto loc_822D2668;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822cd948
	ctx.lr = 0x822D2658;
	sub_822CD948(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c80a8
	ctx.lr = 0x822D2660;
	sub_822C80A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
loc_822D2668:
	// addi r3,r31,220
	ctx.r3.s64 = r31.s64 + 220;
	// bl 0x822c8908
	ctx.lr = 0x822D2670;
	sub_822C8908(ctx, base);
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

DEFINE_REX_FUNC(sub_822D3B30) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822D3B38;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x822d1410
	ctx.lr = 0x822D3B4C;
	sub_822D1410(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822d3b6c
	if (!ctx.cr6.eq) goto loc_822D3B6C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82203958
	ctx.lr = 0x822D3B60;
	sub_82203958(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D3B64:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed8
	return;
loc_822D3B6C:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r31
	r29.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d3b94
	if (ctx.cr6.eq) goto loc_822D3B94;
	// li r31,0
	r31.s64 = 0;
loc_822D3B84:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82203958
	ctx.lr = 0x822D3B8C;
	sub_82203958(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x822d3b64
	goto loc_822D3B64;
loc_822D3B94:
	// lwz r11,4600(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4600);
	// addi r30,r31,4600
	r30.s64 = r31.s64 + 4600;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D3BAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822045a0
	ctx.lr = 0x822D3BB8;
	sub_822045A0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d39e0
	ctx.lr = 0x822D3BC4;
	sub_822D39E0(ctx, base);
	// lwz r11,4600(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4600);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D3BDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822d3b84
	goto loc_822D3B84;
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

DEFINE_REX_FUNC(__restfpr_27) {
	REX_FUNC_PROLOGUE();
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f27,-40(r12)
	ctx.fpscr.disableFlushMode();
	f27.u64 = REX_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	f28.u64 = REX_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	f29.u64 = REX_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = REX_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = REX_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D6170) {
	REX_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824d45bc
	__imp__KeBugCheck(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822D63F0) {
	REX_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d6228
	sub_822D6228(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822D6658) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r3,97
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 97, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r3,122
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 122, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D6D78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822D6D80;
	// std r4,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe. r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d6dcc
	if (!ctx.cr0.eq) goto loc_822D6DCC;
	// bl 0x822db6c0
	ctx.lr = 0x822D6DB8;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822D6DC4;
	sub_822D6910(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822d6e3c
	goto loc_822D6E3C;
loc_822D6DCC:
	// addi r11,r31,80
	ctx.r11.s64 = r31.s64 + 80;
	// addi r10,r31,152
	ctx.r10.s64 = r31.s64 + 152;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x822dcb08
	ctx.lr = 0x822D6DDC;
	sub_822DCB08(ctx, base);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822dccf0
	ctx.lr = 0x822D6DE8;
	sub_822DCCF0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x822dcb08
	ctx.lr = 0x822D6DF0;
	sub_822DCB08(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x822dcda8
	ctx.lr = 0x822D6DF8;
	sub_822DCDA8(ctx, base);
	// lwz r30,148(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 148);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x822dcb08
	ctx.lr = 0x822D6E04;
	sub_822DCB08(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// lwz r6,80(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822dab20
	ctx.lr = 0x822D6E18;
	sub_822DAB20(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// bl 0x822dcb08
	ctx.lr = 0x822D6E20;
	sub_822DCB08(ctx, base);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822dce98
	ctx.lr = 0x822D6E2C;
	sub_822DCE98(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = r31.s64 + 128;
	// bl 0x822d6e44
	ctx.lr = 0x822D6E38;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_822D6E44(ctx, base);
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
loc_822D6E3C:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(__savevmx_79) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_110) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_822D9B78) {
	REX_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x822d9b18
	sub_822D9B18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822DA2E0) {
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
	ctx.lr = 0x822DA2E8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x822da31c
	if (!ctx.cr6.eq) goto loc_822DA31C;
loc_822DA304:
	// bl 0x822db6c0
	ctx.lr = 0x822DA308;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822DA314;
	sub_822D6910(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x822da48c
	goto loc_822DA48C;
loc_822DA31C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822da304
	if (ctx.cr6.eq) goto loc_822DA304;
	// extsb. r26,r7
	r26.s64 = ctx.r7.s8;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// li r28,48
	r28.s64 = 48;
	// beq 0x822da35c
	if (ctx.cr0.eq) goto loc_822DA35C;
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r27.s32, ctx.xer);
	// bne cr6,0x822da35c
	if (!ctx.cr6.eq) goto loc_822DA35C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-45
	ctx.r11.s64 = ctx.r11.s64 + -45;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r28,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r28.u8);
	// stb r9,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
loc_822DA35C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x822da374
	if (!ctx.cr6.eq) goto loc_822DA374;
	// addi r30,r3,1
	r30.s64 = ctx.r3.s64 + 1;
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
loc_822DA374:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x822da3bc
	if (ctx.cr6.gt) goto loc_822DA3BC;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_822DA384:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822da384
	if (!ctx.cr6.eq) goto loc_822DA384;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// addi r31,r30,1
	r31.s64 = r30.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x822d6840
	ctx.lr = 0x822DA3B4;
	sub_822D6840(ctx, base);
	// stb r28,0(r30)
	REX_STORE_U8(r30.u32 + 0, r28.u8);
	// b 0x822da3c0
	goto loc_822DA3C0;
loc_822DA3BC:
	// add r31,r11,r30
	r31.u64 = ctx.r11.u64 + r30.u64;
loc_822DA3C0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x822da488
	if (!ctx.cr6.gt) goto loc_822DA488;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_822DA3CC:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822da3cc
	if (!ctx.cr6.eq) goto loc_822DA3CC;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// addi r30,r31,1
	r30.s64 = r31.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x822d6840
	ctx.lr = 0x822DA3FC;
	sub_822D6840(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r11,188(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x822da488
	if (!ctx.cr6.lt) goto loc_822DA488;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x822da430
	if (ctx.cr6.eq) goto loc_822DA430;
	// neg r27,r11
	r27.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// b 0x822da440
	goto loc_822DA440;
loc_822DA430:
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822da440
	if (ctx.cr6.lt) goto loc_822DA440;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_822DA440:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x822da478
	if (ctx.cr6.eq) goto loc_822DA478;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_822DA44C:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822da44c
	if (!ctx.cr6.eq) goto loc_822DA44C;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r3,r30,r27
	ctx.r3.u64 = r30.u64 + r27.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x822d6840
	ctx.lr = 0x822DA478;
	sub_822D6840(ctx, base);
loc_822DA478:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d5870
	ctx.lr = 0x822DA488;
	sub_822D5870(ctx, base);
loc_822DA488:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822DA48C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_822E6038) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfe. r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// bne 0x822e6084
	if (!ctx.cr0.eq) goto loc_822E6084;
	// bl 0x822db6c0
	ctx.lr = 0x822E6070;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822E607C;
	sub_822D6910(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822e609c
	goto loc_822E609C;
loc_822E6084:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e60b4
	if (ctx.cr0.eq) goto loc_822E60B4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
loc_822E6098:
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
loc_822E609C:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
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
loc_822E60B4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822dcc80
	ctx.lr = 0x822E60BC;
	sub_822DCC80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e5f90
	ctx.lr = 0x822E60C8;
	sub_822E5F90(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	ctx.r12.s64 = r31.s64 + 112;
	// bl 0x822e60fc
	ctx.lr = 0x822E60D8;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_822E60FC(ctx, base);
	r30 = ctx.r30;
	r31 = ctx.r31;
	// b 0x822e6098
	goto loc_822E6098;
}

DEFINE_REX_FUNC(sub_822E99E0) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-29736
	ctx.r10.s64 = ctx.r11.s64 + -29736;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x822e9010
	ctx.lr = 0x822E9A0C;
	sub_822E9010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822eece8
	ctx.lr = 0x822E9A14;
	sub_822EECE8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822e9a34
	if (ctx.cr6.eq) goto loc_822E9A34;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32808
	ctx.r4.u64 = ctx.r4.u64 | 32808;
	// bl 0x823cd250
	ctx.lr = 0x822E9A30;
	sub_823CD250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822E9A34:
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

DEFINE_REX_FUNC(sub_822EB168) {
	REX_FUNC_PROLOGUE();
	// lwz r3,120(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EB230) {
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
	ctx.lr = 0x822EB248;
	sub_822EECA0(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// bl 0x822eef38
	ctx.lr = 0x822EB250;
	sub_822EEF38(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x822e8d70
	ctx.lr = 0x822EB258;
	sub_822E8D70(ctx, base);
	// addi r3,r31,212
	ctx.r3.s64 = r31.s64 + 212;
	// bl 0x822f2160
	ctx.lr = 0x822EB260;
	sub_822F2160(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,-28328
	ctx.r10.s64 = ctx.r11.s64 + -28328;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x822eeff0
	ctx.lr = 0x822EB274;
	sub_822EEFF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,520(r31)
	REX_STORE_U32(r31.u32 + 520, ctx.r11.u32);
	// stw r9,508(r31)
	REX_STORE_U32(r31.u32 + 508, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,524(r31)
	REX_STORE_U32(r31.u32 + 524, ctx.r11.u32);
	// std r11,528(r31)
	REX_STORE_U64(r31.u32 + 528, ctx.r11.u64);
	// stw r11,536(r31)
	REX_STORE_U32(r31.u32 + 536, ctx.r11.u32);
	// stw r11,540(r31)
	REX_STORE_U32(r31.u32 + 540, ctx.r11.u32);
	// stw r8,544(r31)
	REX_STORE_U32(r31.u32 + 544, ctx.r8.u32);
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

DEFINE_REX_FUNC(sub_822ECFB0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,324(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 324);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,324(r10)
	REX_STORE_U32(ctx.r10.u32 + 324, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822ED0C8) {
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
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823cd378
	ctx.lr = 0x822ED0DC;
	sub_823CD378(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82208828
	ctx.lr = 0x822ED0E4;
	sub_82208828(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// ld r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// li r9,1000
	ctx.r9.s64 = 1000;
	// rotldi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 1);
	// divd r6,r7,r9
	ctx.r6.s64 = (ctx.r9.s64 && !(ctx.r7.s64 == INT64_MIN && ctx.r9.s64 == -1)) ? ctx.r7.s64 / ctx.r9.s64 : 0;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// divd r3,r11,r6
	ctx.r3.s64 = (ctx.r6.s64 && !(ctx.r11.s64 == INT64_MIN && ctx.r6.s64 == -1)) ? ctx.r11.s64 / ctx.r6.s64 : 0;
	// andc r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r8.u64;
	// tdllei r6,0
	if (ctx.r6.s64 == 0ll || ctx.r6.u64 < 0ull) ppc_trap(ctx, base, 0);
	// tdlgei r5,-1
	if (ctx.r5.s64 == -1ll || ctx.r5.u64 > 18446744073709551615ull) ppc_trap(ctx, base, 0);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EE140) {
	REX_FUNC_PROLOGUE();
	// ld r10,64(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ld r9,56(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 56);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ld r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 88);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmpld cr6,r10,r8
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r8.u64, ctx.xer);
	// bgt cr6,0x822ee16c
	if (ctx.cr6.gt) goto loc_822EE16C;
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// bge cr6,0x822ee170
	if (!ctx.cr6.lt) goto loc_822EE170;
loc_822EE16C:
	// li r9,1
	ctx.r9.s64 = 1;
loc_822EE170:
	// stw r9,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r10,88(r11)
	REX_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EFF48) {
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
	ctx.lr = 0x822EFF50;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// li r27,-1
	r27.s64 = -1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// mr r31,r29
	r31.u64 = r29.u64;
	// std r29,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, r29.u64);
	// clrldi r27,r27,5
	r27.u64 = r27.u64 & 0x7FFFFFFFFFFFFFF;
	// std r29,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r29.u64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// stb r29,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r29.u8);
	// mr r28,r29
	r28.u64 = r29.u64;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// bne cr6,0x822f0234
	if (!ctx.cr6.eq) goto loc_822F0234;
	// lis r11,10
	ctx.r11.s64 = 655360;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ori r10,r10,48
	ctx.r10.u64 = ctx.r10.u64 | 48;
	// bgt cr6,0x822f0178
	if (ctx.cr6.gt) goto loc_822F0178;
	// beq cr6,0x822f0234
	if (ctx.cr6.eq) goto loc_822F0234;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x822f0014
	if (ctx.cr6.gt) goto loc_822F0014;
	// beq cr6,0x822f0234
	if (ctx.cr6.eq) goto loc_822F0234;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822effe4
	if (ctx.cr6.eq) goto loc_822EFFE4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r9,r11,16
	ctx.r9.u64 = ctx.r11.u64 | 16;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x822f0208
	if (!ctx.cr6.eq) goto loc_822F0208;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,532(r3)
	REX_STORE_U32(ctx.r3.u32 + 532, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec8
	return;
loc_822EFFE4:
	// lwz r11,540(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 540);
	// lis r10,80
	ctx.r10.s64 = 5242880;
	// li r9,2
	ctx.r9.s64 = 2;
	// subfic r8,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r9,532(r30)
	REX_STORE_U32(r30.u32 + 532, ctx.r9.u32);
	// ori r5,r10,6
	ctx.r5.u64 = ctx.r10.u64 | 6;
	// subfe r4,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r6,528(r30)
	REX_STORE_U32(r30.u32 + 528, ctx.r6.u32);
	// and r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 & ctx.r5.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec8
	return;
loc_822F0014:
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822f0208
	if (!ctx.cr6.eq) goto loc_822F0208;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 568);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x822f9928
	ctx.lr = 0x822F0030;
	sub_822F9928(ctx, base);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r26,r11,22
	r26.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r26.u32, ctx.xer);
	// bne cr6,0x822f0050
	if (!ctx.cr6.eq) goto loc_822F0050;
	// lis r31,-32688
	r31.s64 = -2142240768;
	// ori r31,r31,167
	r31.u64 = r31.u64 | 167;
	// b 0x822f0218
	goto loc_822F0218;
loc_822F0050:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x822f0218
	if (ctx.cr6.lt) goto loc_822F0218;
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// stw r29,588(r30)
	REX_STORE_U32(r30.u32 + 588, r29.u32);
	// li r25,1
	r25.s64 = 1;
	// ori r24,r11,11
	r24.u64 = ctx.r11.u64 | 11;
loc_822F0068:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x822f0218
	if (ctx.cr6.lt) goto loc_822F0218;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822f0118
	if (ctx.cr6.eq) goto loc_822F0118;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lbz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r3,572(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 572);
	// bl 0x822f9900
	ctx.lr = 0x822F0090;
	sub_822F9900(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f0218
	if (ctx.cr6.lt) goto loc_822F0218;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822f9db8
	ctx.lr = 0x822F00B0;
	sub_822F9DB8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r24.u32, ctx.xer);
	// bne cr6,0x822f00c4
	if (!ctx.cr6.eq) goto loc_822F00C4;
	// stw r29,588(r30)
	REX_STORE_U32(r30.u32 + 588, r29.u32);
	// b 0x822f0118
	goto loc_822F0118;
loc_822F00C4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x822f0218
	if (ctx.cr6.lt) goto loc_822F0218;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// ld r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// ld r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r7,20(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmpd cr6,r8,r7
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r7.s64, ctx.xer);
	// ble cr6,0x822f00ec
	if (!ctx.cr6.gt) goto loc_822F00EC;
	// stw r25,588(r30)
	REX_STORE_U32(r30.u32 + 588, r25.u32);
loc_822F00EC:
	// cmpd cr6,r11,r27
	ctx.cr6.compare<int64_t>(ctx.r11.s64, r27.s64, ctx.xer);
	// bge cr6,0x822f00f8
	if (!ctx.cr6.lt) goto loc_822F00F8;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_822F00F8:
	// cmpd cr6,r10,r28
	ctx.cr6.compare<int64_t>(ctx.r10.s64, r28.s64, ctx.xer);
	// ble cr6,0x822f0104
	if (!ctx.cr6.gt) goto loc_822F0104;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
loc_822F0104:
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// subf r10,r27,r28
	ctx.r10.u64 = r28.u64 - r27.u64;
	// cmpd cr6,r10,r11
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r11.s64, ctx.xer);
	// ble cr6,0x822f0118
	if (!ctx.cr6.gt) goto loc_822F0118;
	// stw r25,588(r30)
	REX_STORE_U32(r30.u32 + 588, r25.u32);
loc_822F0118:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 568);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822f9990
	ctx.lr = 0x822F012C;
	sub_822F9990(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r26.u32, ctx.xer);
	// bne cr6,0x822f0068
	if (!ctx.cr6.eq) goto loc_822F0068;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,568(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 568);
	// bl 0x822f99f8
	ctx.lr = 0x822F0144;
	sub_822F99F8(ctx, base);
	// lwz r11,588(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 588);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f0168
	if (ctx.cr6.eq) goto loc_822F0168;
	// lwz r11,632(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822f0160
	if (!ctx.cr6.eq) goto loc_822F0160;
	// stw r25,632(r30)
	REX_STORE_U32(r30.u32 + 632, r25.u32);
loc_822F0160:
	// lis r31,-32688
	r31.s64 = -2142240768;
	// b 0x822f0218
	goto loc_822F0218;
loc_822F0168:
	// mr r31,r25
	r31.u64 = r25.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec8
	return;
loc_822F0178:
	// lis r11,11
	ctx.r11.s64 = 720896;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x822f01f8
	if (ctx.cr6.gt) goto loc_822F01F8;
	// beq cr6,0x822f01e0
	if (ctx.cr6.eq) goto loc_822F01E0;
	// addis r11,r4,-11
	ctx.r11.s64 = ctx.r4.s64 + -720896;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822f01b8
	if (ctx.cr0.eq) goto loc_822F01B8;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x822f0208
	if (!ctx.cr6.eq) goto loc_822F0208;
	// lhz r11,624(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 624);
	// mr r31,r29
	r31.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// sth r11,0(r5)
	REX_STORE_U16(ctx.r5.u32 + 0, ctx.r11.u16);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec8
	return;
loc_822F01B8:
	// lhz r11,626(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 626);
	// mr r31,r29
	r31.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// sth r11,2(r5)
	REX_STORE_U16(ctx.r5.u32 + 2, ctx.r11.u16);
	// lbz r10,629(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 629);
	// stb r10,1(r5)
	REX_STORE_U8(ctx.r5.u32 + 1, ctx.r10.u8);
	// lbz r9,628(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 628);
	// stb r9,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r9.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec8
	return;
loc_822F01E0:
	// lwz r11,620(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 620);
	// mr r31,r29
	r31.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec8
	return;
loc_822F01F8:
	// lis r11,11
	ctx.r11.s64 = 720896;
	// ori r9,r11,48
	ctx.r9.u64 = ctx.r11.u64 | 48;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x822f0240
	if (ctx.cr6.eq) goto loc_822F0240;
loc_822F0208:
	// lis r31,-32688
	r31.s64 = -2142240768;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// ori r31,r31,178
	r31.u64 = r31.u64 | 178;
	// bne cr6,0x822f0234
	if (!ctx.cr6.eq) goto loc_822F0234;
loc_822F0218:
	// lwz r3,568(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 568);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f0234
	if (ctx.cr6.eq) goto loc_822F0234;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822f0234
	if (ctx.cr6.eq) goto loc_822F0234;
	// bl 0x822f99f8
	ctx.lr = 0x822F0234;
	sub_822F99F8(ctx, base);
loc_822F0234:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec8
	return;
loc_822F0240:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r5,620(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 620);
	// lwz r4,616(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 616);
	// bl 0x822d4fa0
	ctx.lr = 0x822F0250;
	sub_822D4FA0(ctx, base);
	// mr r31,r29
	r31.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82300D00) {
	REX_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r4,328(r3)
	REX_STORE_U32(ctx.r3.u32 + 328, ctx.r4.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r5,332(r3)
	REX_STORE_U32(ctx.r3.u32 + 332, ctx.r5.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82300d34
	if (!ctx.cr6.gt) goto loc_82300D34;
loc_82300D18:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82300d2c
	if (!ctx.cr6.lt) goto loc_82300D2C;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82300D2C:
	// subf. r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt 0x82300d18
	if (ctx.cr0.gt) goto loc_82300D18;
loc_82300D34:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r9,r4,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// rotlwi r10,r5,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// divw r7,r4,r11
	ctx.r7.u64 = uint32_t((ctx.r11.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r4.s32 / ctx.r11.s32 : 0);
	// andc r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// divw r5,r5,r11
	ctx.r5.u64 = uint32_t((ctx.r11.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r5.s32 / ctx.r11.s32 : 0);
	// stw r7,328(r3)
	REX_STORE_U32(ctx.r3.u32 + 328, ctx.r7.u32);
	// andc r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r5,332(r3)
	REX_STORE_U32(ctx.r3.u32 + 332, ctx.r5.u32);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82304EB0) {
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
	ctx.lr = 0x82304EB8;
	// stfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, f29.u64);
	// stfd f30,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, f30.u64);
	// stfd f31,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// li r23,0
	r23.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82305230
	if (ctx.cr6.eq) goto loc_82305230;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82305230
	if (ctx.cr6.eq) goto loc_82305230;
	// lwz r11,372(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 372);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82304f54
	if (ctx.cr6.eq) goto loc_82304F54;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82304f40
	if (!ctx.cr6.gt) goto loc_82304F40;
	// mr r30,r23
	r30.u64 = r23.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
loc_82304F14:
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 372);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82304f34
	if (ctx.cr6.eq) goto loc_82304F34;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x823143d0
	ctx.lr = 0x82304F2C;
	sub_823143D0(ctx, base);
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 372);
	// stwx r23,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r23.u32);
loc_82304F34:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82304f14
	if (!ctx.cr0.eq) goto loc_82304F14;
loc_82304F40:
	// lwz r3,372(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 372);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82304f54
	if (ctx.cr6.eq) goto loc_82304F54;
	// bl 0x823143d0
	ctx.lr = 0x82304F50;
	sub_823143D0(ctx, base);
	// stw r23,372(r31)
	REX_STORE_U32(r31.u32 + 372, r23.u32);
loc_82304F54:
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 376);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82304fb0
	if (ctx.cr6.eq) goto loc_82304FB0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x82304f9c
	if (!ctx.cr6.gt) goto loc_82304F9C;
	// mr r30,r23
	r30.u64 = r23.u64;
	// mr r29,r27
	r29.u64 = r27.u64;
loc_82304F70:
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 376);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82304f90
	if (ctx.cr6.eq) goto loc_82304F90;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x823143d0
	ctx.lr = 0x82304F88;
	sub_823143D0(ctx, base);
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 376);
	// stwx r23,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r23.u32);
loc_82304F90:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82304f70
	if (!ctx.cr0.eq) goto loc_82304F70;
loc_82304F9C:
	// lwz r3,376(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 376);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82304fb0
	if (ctx.cr6.eq) goto loc_82304FB0;
	// bl 0x823143d0
	ctx.lr = 0x82304FAC;
	sub_823143D0(ctx, base);
	// stw r23,376(r31)
	REX_STORE_U32(r31.u32 + 376, r23.u32);
loc_82304FB0:
	// rlwinm r24,r27,2,0,29
	r24.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823143c0
	ctx.lr = 0x82304FBC;
	sub_823143C0(ctx, base);
	// stw r3,372(r31)
	REX_STORE_U32(r31.u32 + 372, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82304fd4
	if (!ctx.cr6.eq) goto loc_82304FD4;
loc_82304FC8:
	// lis r23,-32761
	r23.s64 = -2147024896;
	// ori r23,r23,14
	r23.u64 = r23.u64 | 14;
	// b 0x82305238
	goto loc_82305238;
loc_82304FD4:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82304FE0;
	sub_822D5870(ctx, base);
	// mr r29,r23
	r29.u64 = r23.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x82305034
	if (!ctx.cr6.gt) goto loc_82305034;
	// rlwinm r28,r22,2,0,29
	r28.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r23
	r30.u64 = r23.u64;
loc_82304FF4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823143c0
	ctx.lr = 0x82304FFC;
	sub_823143C0(ctx, base);
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 372);
	// stwx r3,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 372);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82304fc8
	if (ctx.cr6.eq) goto loc_82304FC8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82305024;
	sub_822D5870(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// blt cr6,0x82304ff4
	if (ctx.cr6.lt) goto loc_82304FF4;
loc_82305034:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823143c0
	ctx.lr = 0x8230503C;
	sub_823143C0(ctx, base);
	// stw r3,376(r31)
	REX_STORE_U32(r31.u32 + 376, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82304fc8
	if (ctx.cr6.eq) goto loc_82304FC8;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82305054;
	sub_822D5870(ctx, base);
	// mr r29,r23
	r29.u64 = r23.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x823050a8
	if (!ctx.cr6.gt) goto loc_823050A8;
	// rlwinm r28,r22,2,0,29
	r28.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r23
	r30.u64 = r23.u64;
loc_82305068:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823143c0
	ctx.lr = 0x82305070;
	sub_823143C0(ctx, base);
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 376);
	// stwx r3,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 376);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82304fc8
	if (ctx.cr6.eq) goto loc_82304FC8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82305098;
	sub_822D5870(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// blt cr6,0x82305068
	if (ctx.cr6.lt) goto loc_82305068;
loc_823050A8:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82305158
	if (ctx.cr6.eq) goto loc_82305158;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x82305238
	if (!ctx.cr6.gt) goto loc_82305238;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r28,r23
	r28.u64 = r23.u64;
	// mr r25,r27
	r25.u64 = r27.u64;
	// lfd f30,-6032(r11)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r11.u32 + -6032);
	// lis r26,-32768
	r26.s64 = -2147483648;
	// lfd f31,-24992(r10)
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + -24992);
	// lfs f29,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f29.f64 = double(temp.f32);
loc_823050DC:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x82305148
	if (!ctx.cr6.gt) goto loc_82305148;
	// mr r30,r23
	r30.u64 = r23.u64;
	// add r29,r28,r21
	r29.u64 = r28.u64 + r21.u64;
	// mr r27,r22
	r27.u64 = r22.u64;
loc_823050F0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r26.s32, ctx.xer);
	// bne cr6,0x8230510c
	if (!ctx.cr6.eq) goto loc_8230510C;
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 372);
	// lwzx r10,r28,r11
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// stfsx f29,r10,r30
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r10.u32 + r30.u32, temp.u32);
	// b 0x82305138
	goto loc_82305138;
loc_8230510C:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fmul f2,f13,f31
	ctx.f2.f64 = ctx.f13.f64 * f31.f64;
	// bl 0x822d5b48
	ctx.lr = 0x82305128;
	sub_822D5B48(ctx, base);
	// lwz r10,372(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 372);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lwzx r9,r28,r10
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + ctx.r10.u32);
	// stfsx f12,r9,r30
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + r30.u32, temp.u32);
loc_82305138:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// add r29,r29,r24
	r29.u64 = r29.u64 + r24.u64;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x823050f0
	if (!ctx.cr0.eq) goto loc_823050F0;
loc_82305148:
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x823050dc
	if (!ctx.cr0.eq) goto loc_823050DC;
	// b 0x82305238
	goto loc_82305238;
loc_82305158:
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82305188
	if (ctx.cr6.eq) goto loc_82305188;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// lwz r8,376(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 376);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r7,372(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 372);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82304620
	ctx.lr = 0x82305180;
	sub_82304620(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// b 0x82305238
	goto loc_82305238;
loc_82305188:
	// cmpw cr6,r27,r22
	ctx.cr6.compare<int32_t>(r27.s32, r22.s32, ctx.xer);
	// beq cr6,0x82305198
	if (ctx.cr6.eq) goto loc_82305198;
	// lis r23,-32764
	r23.s64 = -2147221504;
	// b 0x82305238
	goto loc_82305238;
loc_82305198:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(r27.s32, 4, ctx.xer);
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x82305204
	if (ctx.cr6.lt) goto loc_82305204;
	// addi r6,r27,-3
	ctx.r6.s64 = r27.s64 + -3;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_823051B4:
	// lwz r7,372(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 372);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// lwzx r5,r11,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// stfsx f0,r5,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, temp.u32);
	// lwz r7,372(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 372);
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r7,4(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// add r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lwz r7,372(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 372);
	// lwzx r5,r8,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stfsx f0,r5,r8
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r8.u32, temp.u32);
	// lwz r4,372(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 372);
	// lwzx r3,r10,r4
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stfsx f0,r3,r10
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + ctx.r10.u32, temp.u32);
	// blt cr6,0x823051b4
	if (ctx.cr6.lt) goto loc_823051B4;
loc_82305204:
	// cmpw cr6,r9,r27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r27.s32, ctx.xer);
	// bge cr6,0x82305238
	if (!ctx.cr6.lt) goto loc_82305238;
	// subf r10,r9,r27
	ctx.r10.u64 = r27.u64 - ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82305218:
	// lwz r10,372(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 372);
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82305218
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82305218;
	// b 0x82305238
	goto loc_82305238;
loc_82305230:
	// lis r23,-32761
	r23.s64 = -2147024896;
	// ori r23,r23,87
	r23.u64 = r23.u64 | 87;
loc_82305238:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

DEFINE_REX_FUNC(sub_82312638) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,44(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823126b0
	if (ctx.cr6.eq) goto loc_823126B0;
	// lwz r8,16(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823126b0
	if (ctx.cr6.eq) goto loc_823126B0;
loc_82312660:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823126b0
	if (ctx.cr6.eq) goto loc_823126B0;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ld r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// cmpld cr6,r4,r10
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x823126b0
	if (ctx.cr6.lt) goto loc_823126B0;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpld cr6,r4,r9
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r9.u64, ctx.xer);
	// blt cr6,0x823126a4
	if (ctx.cr6.lt) goto loc_823126A4;
	// cmpld cr6,r10,r4
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r4.u64, ctx.xer);
	// bgt cr6,0x823126b0
	if (ctx.cr6.gt) goto loc_823126B0;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82312660
	if (!ctx.cr6.eq) goto loc_82312660;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823126A4:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_823126B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82313AD8) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82313b40
	if (ctx.cr6.eq) goto loc_82313B40;
loc_82313AF8:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// bgt cr6,0x82313b20
	if (ctx.cr6.gt) goto loc_82313B20;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpld cr6,r4,r10
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x82313b34
	if (ctx.cr6.lt) goto loc_82313B34;
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// blt cr6,0x82313b40
	if (ctx.cr6.lt) goto loc_82313B40;
loc_82313B20:
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82313af8
	if (!ctx.cr6.eq) goto loc_82313AF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82313B34:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r9,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
loc_82313B40:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823143C0) {
	REX_FUNC_PROLOGUE();
	// lis r4,8356
	ctx.r4.s64 = 547618816;
	// ori r4,r4,8192
	ctx.r4.u64 = ctx.r4.u64 | 8192;
	// b 0x823cd118
	sub_823CD118(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82314498) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,-1(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + -1);
	// lis r4,8356
	ctx.r4.s64 = 547618816;
	// ori r4,r4,8192
	ctx.r4.u64 = ctx.r4.u64 | 8192;
	// subf r3,r11,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r11.u64;
	// b 0x823cd250
	sub_823CD250(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82315610) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,444(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 444);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82315654
	if (ctx.cr6.eq) goto loc_82315654;
	// lwz r9,456(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// lwz r8,252(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// lwz r7,256(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// sraw r6,r8,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r6.s64 = ctx.r8.s32 >> temp.u32;
	// lwz r10,268(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// sraw r5,r7,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r5.s64 = ctx.r7.s32 >> temp.u32;
	// stw r6,464(r3)
	REX_STORE_U32(ctx.r3.u32 + 464, ctx.r6.u32);
	// stw r5,468(r3)
	REX_STORE_U32(ctx.r3.u32 + 468, ctx.r5.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8231564c
	if (!ctx.cr6.lt) goto loc_8231564C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8231564C:
	// stw r11,472(r3)
	REX_STORE_U32(ctx.r3.u32 + 472, ctx.r11.u32);
	// blr 
	return;
loc_82315654:
	// lwz r11,448(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82315688
	if (ctx.cr6.eq) goto loc_82315688;
	// lwz r11,456(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// lwz r10,252(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// lwz r9,256(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r8,268(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// slw r7,r10,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// slw r6,r9,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// stw r7,464(r3)
	REX_STORE_U32(ctx.r3.u32 + 464, ctx.r7.u32);
	// stw r6,468(r3)
	REX_STORE_U32(ctx.r3.u32 + 468, ctx.r6.u32);
	// stw r8,472(r3)
	REX_STORE_U32(ctx.r3.u32 + 472, ctx.r8.u32);
	// blr 
	return;
loc_82315688:
	// lwz r11,252(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// lwz r10,256(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r9,268(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// stw r11,464(r3)
	REX_STORE_U32(ctx.r3.u32 + 464, ctx.r11.u32);
	// stw r10,468(r3)
	REX_STORE_U32(ctx.r3.u32 + 468, ctx.r10.u32);
	// stw r9,472(r3)
	REX_STORE_U32(ctx.r3.u32 + 472, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823198F0) {
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
	ctx.lr = 0x823198F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// li r27,0
	r27.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r28,1
	r28.s64 = 1;
	// mr r29,r27
	r29.u64 = r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82319970
	if (!ctx.cr6.gt) goto loc_82319970;
loc_8231991C:
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// subfic r8,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r8.u64 = static_cast<uint64_t>(32) - ctx.r10.u64;
	// slw r10,r9,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r7,r10,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82319950
	if (ctx.cr6.eq) goto loc_82319950;
loc_8231993C:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8231993c
	if (!ctx.cr6.eq) goto loc_8231993C;
loc_82319950:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addic. r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// bge 0x82319a60
	if (!ctx.cr0.lt) goto loc_82319A60;
loc_82319970:
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// stw r27,40(r31)
	REX_STORE_U32(r31.u32 + 40, r27.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823199c4
	if (ctx.cr6.eq) goto loc_823199C4;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// li r11,32
	ctx.r11.s64 = 32;
	// bgt cr6,0x82319990
	if (ctx.cr6.gt) goto loc_82319990;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82319990:
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r8,44(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 36);
	// slw r10,r28,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r9.u8 & 0x3F));
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// slw r5,r7,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// stw r9,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// srw r6,r8,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// or r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 | ctx.r5.u64;
	// and r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 & ctx.r8.u64;
	// stw r3,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
loc_823199C4:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x82319a38
	if (ctx.cr6.gt) goto loc_82319A38;
loc_823199D0:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82319a38
	if (!ctx.cr6.gt) goto loc_82319A38;
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
	ctx.lr = 0x82319A04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// stw r4,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r4.u32);
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// ble cr6,0x823199d0
	if (!ctx.cr6.gt) goto loc_823199D0;
loc_82319A38:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8231991c
	if (!ctx.cr6.lt) goto loc_8231991C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823195f0
	ctx.lr = 0x82319A54;
	sub_823195F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8231991c
	if (!ctx.cr6.lt) goto loc_8231991C;
loc_82319A60:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82324938) {
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
	ctx.lr = 0x82324940;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r25,4(r4)
	r25.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lhz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82324b48
	if (!ctx.cr6.lt) goto loc_82324B48;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r21,3
	r21.s64 = 3;
	// addi r22,r11,25152
	r22.s64 = ctx.r11.s64 + 25152;
	// addi r24,r10,26752
	r24.s64 = ctx.r10.s64 + 26752;
	// addi r23,r9,26512
	r23.s64 = ctx.r9.s64 + 26512;
loc_82324988:
	// lwz r11,124(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 124);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r30,0(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r27,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// beq cr6,0x823249b0
	if (ctx.cr6.eq) goto loc_823249B0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823249f4
	if (ctx.cr6.eq) goto loc_823249F4;
	// b 0x82324ab8
	goto loc_82324AB8;
loc_823249B0:
	// addi r28,r29,224
	r28.s64 = r29.s64 + 224;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82325c30
	ctx.lr = 0x823249CC;
	sub_82325C30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82324b48
	if (ctx.cr6.lt) goto loc_82324B48;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82319a70
	ctx.lr = 0x823249E0;
	sub_82319A70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82324b48
	if (ctx.cr6.lt) goto loc_82324B48;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82324a44
	if (!ctx.cr6.eq) goto loc_82324A44;
loc_823249F4:
	// stw r21,124(r29)
	REX_STORE_U32(r29.u32 + 124, r21.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,14
	ctx.r4.s64 = 14;
	// addi r3,r29,224
	ctx.r3.s64 = r29.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x82324A08;
	sub_82319780(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82324b48
	if (ctx.cr6.lt) goto loc_82324B48;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,26,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xFFFF;
	// sth r10,30(r30)
	REX_STORE_U16(r30.u32 + 30, ctx.r10.u16);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r8.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r5,r7,0,26,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x3E;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// sth r4,28(r30)
	REX_STORE_U16(r30.u32 + 28, ctx.r4.u16);
	// stw r27,124(r29)
	REX_STORE_U32(r29.u32 + 124, r27.u32);
	// b 0x82324ab8
	goto loc_82324AB8;
loc_82324A44:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82324a6c
	if (!ctx.cr6.eq) goto loc_82324A6C;
	// lhz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 32);
	// lwz r10,304(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 304);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// sth r27,30(r30)
	REX_STORE_U16(r30.u32 + 30, r27.u16);
	// subf r11,r9,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// sth r8,28(r30)
	REX_STORE_U16(r30.u32 + 28, ctx.r8.u16);
	// b 0x82324ab8
	goto loc_82324AB8;
loc_82324A6C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82319a70
	ctx.lr = 0x82324A78;
	sub_82319A70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82324b48
	if (ctx.cr6.lt) goto loc_82324B48;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r23
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r23.u32);
	// sth r8,28(r30)
	REX_STORE_U16(r30.u32 + 28, ctx.r8.u16);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r7,-2
	ctx.r6.s64 = ctx.r7.s64 + -2;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r5,r24
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + r24.u32);
	// sth r4,30(r30)
	REX_STORE_U16(r30.u32 + 30, ctx.r4.u16);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r10,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r10.u32);
loc_82324AB8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82324b48
	if (ctx.cr6.lt) goto loc_82324B48;
	// lhz r11,30(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 30);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lhz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 28);
	// xor r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// subf r5,r9,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r9.u64;
	// sth r5,30(r31)
	REX_STORE_U16(r31.u32 + 30, ctx.r5.u16);
	// lhz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r26.s32, ctx.xer);
	// bge cr6,0x82324b48
	if (!ctx.cr6.lt) goto loc_82324B48;
	// lhz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,32(r31)
	REX_STORE_U16(r31.u32 + 32, ctx.r9.u16);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lhz r7,30(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 30);
	// lwzx r9,r11,r25
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r6,r11,r25
	REX_STORE_U32(ctx.r11.u32 + r25.u32, ctx.r6.u32);
	// lhz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 32);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// sth r11,32(r31)
	REX_STORE_U16(r31.u32 + 32, ctx.r11.u16);
	// stw r27,124(r29)
	REX_STORE_U32(r29.u32 + 124, r27.u32);
	// lhz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r26.s32, ctx.xer);
	// blt cr6,0x82324988
	if (ctx.cr6.lt) goto loc_82324988;
loc_82324B48:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_8232E628) {
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
	ctx.lr = 0x8232E630;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8232e6e8
	if (ctx.cr6.lt) goto loc_8232E6E8;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,34464
	ctx.r10.u64 = ctx.r11.u64 | 34464;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8232e6e8
	if (ctx.cr6.gt) goto loc_8232E6E8;
	// bl 0x8232e5b8
	ctx.lr = 0x8232E664;
	sub_8232E5B8(ctx, base);
	// frsp f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823143c0
	ctx.lr = 0x8232E678;
	sub_823143C0(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8232e698
	if (!ctx.cr6.eq) goto loc_8232E698;
loc_8232E684:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
loc_8232E698:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x8232E6A8;
	sub_822D5870(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823143c0
	ctx.lr = 0x8232E6B4;
	sub_823143C0(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232e684
	if (ctx.cr6.eq) goto loc_8232E684;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x8232E6D0;
	sub_822D5870(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
loc_8232E6E8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82332980) {
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
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// stw r8,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lwz r7,16(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// stw r7,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lwz r6,20(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// stw r6,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// lwz r4,24(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// stw r4,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// lwz r3,28(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// lwz r11,32(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// lwz r10,36(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 36);
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// lwz r9,40(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// stw r9,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r9.u32);
	// lwz r8,44(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// stw r8,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r8.u32);
	// lwz r7,48(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 48);
	// stw r7,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r7.u32);
	// lwz r6,52(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 52);
	// stw r6,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r6.u32);
	// lwz r4,56(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 56);
	// stw r4,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r4.u32);
	// lwz r3,60(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 60);
	// stw r3,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,64(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// lwz r10,68(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// stw r10,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// lwz r9,72(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 72);
	// stw r9,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r9.u32);
	// lwz r8,76(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 76);
	// stw r8,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r8.u32);
	// lwz r7,80(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 80);
	// stw r7,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r7.u32);
	// lwz r6,84(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 84);
	// stw r6,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r6.u32);
	// lwz r4,88(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 88);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r5,128
	ctx.r5.s64 = 128;
	// beq cr6,0x82332a68
	if (ctx.cr6.eq) goto loc_82332A68;
	// bl 0x822d4fa0
	ctx.lr = 0x82332A64;
	sub_822D4FA0(ctx, base);
	// b 0x82332a70
	goto loc_82332A70;
loc_82332A68:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82332A70;
	sub_822D5870(ctx, base);
loc_82332A70:
	// lwz r11,21888(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 21888);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lwz r8,22056(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 22056);
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// lwz r7,22060(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 22060);
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
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

DEFINE_REX_FUNC(sub_8233B898) {
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
	ctx.lr = 0x8233B8A0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 3376);
	// addi r4,r3,1992
	ctx.r4.s64 = ctx.r3.s64 + 1992;
	// addi r6,r11,-5664
	ctx.r6.s64 = ctx.r11.s64 + -5664;
	// li r7,6
	ctx.r7.s64 = 6;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233B8C0;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-10072
	ctx.r6.s64 = ctx.r11.s64 + -10072;
	// addi r4,r31,2004
	ctx.r4.s64 = r31.s64 + 2004;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233B8E4;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r11,824
	ctx.r6.s64 = ctx.r11.s64 + 824;
	// addi r4,r31,2120
	ctx.r4.s64 = r31.s64 + 2120;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233B908;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,304
	ctx.r6.s64 = ctx.r11.s64 + 304;
	// addi r4,r31,2132
	ctx.r4.s64 = r31.s64 + 2132;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233B92C;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-1256
	ctx.r6.s64 = ctx.r11.s64 + -1256;
	// addi r4,r31,2148
	ctx.r4.s64 = r31.s64 + 2148;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233B950;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-736
	ctx.r6.s64 = ctx.r11.s64 + -736;
	// addi r4,r31,2160
	ctx.r4.s64 = r31.s64 + 2160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233B974;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-216
	ctx.r6.s64 = ctx.r11.s64 + -216;
	// addi r4,r31,2172
	ctx.r4.s64 = r31.s64 + 2172;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233B998;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r30,r31,2284
	r30.s64 = r31.s64 + 2284;
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,3040
	ctx.r6.s64 = ctx.r11.s64 + 3040;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233B9C0;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r27,r31,2296
	r27.s64 = r31.s64 + 2296;
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,3304
	ctx.r6.s64 = ctx.r11.s64 + 3304;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233B9E8;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r28,r31,2308
	r28.s64 = r31.s64 + 2308;
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,3568
	ctx.r6.s64 = ctx.r11.s64 + 3568;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233BA10;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r29,r31,2320
	r29.s64 = r31.s64 + 2320;
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,3832
	ctx.r6.s64 = ctx.r11.s64 + 3832;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233BA38;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// stw r30,2384(r31)
	REX_STORE_U32(r31.u32 + 2384, r30.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r27,2388(r31)
	REX_STORE_U32(r31.u32 + 2388, r27.u32);
	// addi r30,r31,2332
	r30.s64 = r31.s64 + 2332;
	// stw r28,2392(r31)
	REX_STORE_U32(r31.u32 + 2392, r28.u32);
	// li r7,138
	ctx.r7.s64 = 138;
	// stw r29,2396(r31)
	REX_STORE_U32(r31.u32 + 2396, r29.u32);
	// addi r6,r11,4096
	ctx.r6.s64 = ctx.r11.s64 + 4096;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233BA70;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r27,r31,2344
	r27.s64 = r31.s64 + 2344;
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,4392
	ctx.r6.s64 = ctx.r11.s64 + 4392;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233BA98;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r28,r31,2356
	r28.s64 = r31.s64 + 2356;
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,4688
	ctx.r6.s64 = ctx.r11.s64 + 4688;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233BAC0;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r29,r31,2368
	r29.s64 = r31.s64 + 2368;
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,4984
	ctx.r6.s64 = ctx.r11.s64 + 4984;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233BAE8;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lwz r11,22304(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22304);
	// stw r30,2400(r31)
	REX_STORE_U32(r31.u32 + 2400, r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,2404(r31)
	REX_STORE_U32(r31.u32 + 2404, r27.u32);
	// stw r28,2408(r31)
	REX_STORE_U32(r31.u32 + 2408, r28.u32);
	// stw r29,2412(r31)
	REX_STORE_U32(r31.u32 + 2412, r29.u32);
	// beq cr6,0x8233bbbc
	if (ctx.cr6.eq) goto loc_8233BBBC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r27,r31,22360
	r27.s64 = r31.s64 + 22360;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,5280
	ctx.r6.s64 = ctx.r11.s64 + 5280;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233BB2C;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r28,r31,22372
	r28.s64 = r31.s64 + 22372;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,5584
	ctx.r6.s64 = ctx.r11.s64 + 5584;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233BB54;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r29,r31,22384
	r29.s64 = r31.s64 + 22384;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,5888
	ctx.r6.s64 = ctx.r11.s64 + 5888;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233BB7C;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r30,r31,22396
	r30.s64 = r31.s64 + 22396;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,6192
	ctx.r6.s64 = ctx.r11.s64 + 6192;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233BBA4;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// stw r27,2400(r31)
	REX_STORE_U32(r31.u32 + 2400, r27.u32);
	// stw r28,2404(r31)
	REX_STORE_U32(r31.u32 + 2404, r28.u32);
	// stw r29,2408(r31)
	REX_STORE_U32(r31.u32 + 2408, r29.u32);
	// stw r30,2412(r31)
	REX_STORE_U32(r31.u32 + 2412, r30.u32);
loc_8233BBBC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,6496
	ctx.r6.s64 = ctx.r11.s64 + 6496;
	// addi r4,r31,22348
	ctx.r4.s64 = r31.s64 + 22348;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233BBD8;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,134
	ctx.r7.s64 = 134;
	// addi r6,r11,6688
	ctx.r6.s64 = ctx.r11.s64 + 6688;
	// addi r4,r31,2444
	ctx.r4.s64 = r31.s64 + 2444;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233BBFC;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,134
	ctx.r7.s64 = 134;
	// addi r6,r11,6624
	ctx.r6.s64 = ctx.r11.s64 + 6624;
	// addi r4,r31,2456
	ctx.r4.s64 = r31.s64 + 2456;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233BC20;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,134
	ctx.r7.s64 = 134;
	// addi r6,r11,6560
	ctx.r6.s64 = ctx.r11.s64 + 6560;
	// addi r4,r31,2468
	ctx.r4.s64 = r31.s64 + 2468;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233BC44;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,6752
	ctx.r6.s64 = ctx.r11.s64 + 6752;
	// addi r4,r31,2484
	ctx.r4.s64 = r31.s64 + 2484;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233BC68;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,6824
	ctx.r6.s64 = ctx.r11.s64 + 6824;
	// addi r4,r31,2496
	ctx.r4.s64 = r31.s64 + 2496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233BC8C;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,6896
	ctx.r6.s64 = ctx.r11.s64 + 6896;
	// addi r4,r31,2508
	ctx.r4.s64 = r31.s64 + 2508;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233BCB0;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,134
	ctx.r7.s64 = 134;
	// addi r6,r11,6964
	ctx.r6.s64 = ctx.r11.s64 + 6964;
	// addi r4,r31,2524
	ctx.r4.s64 = r31.s64 + 2524;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233BCD4;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,134
	ctx.r7.s64 = 134;
	// addi r6,r11,7000
	ctx.r6.s64 = ctx.r11.s64 + 7000;
	// addi r4,r31,2536
	ctx.r4.s64 = r31.s64 + 2536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233BCF8;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,134
	ctx.r7.s64 = 134;
	// addi r6,r11,7036
	ctx.r6.s64 = ctx.r11.s64 + 7036;
	// addi r4,r31,2548
	ctx.r4.s64 = r31.s64 + 2548;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233BD1C;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8233c5c0
	if (!ctx.cr6.eq) goto loc_8233C5C0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r30,r31,20788
	r30.s64 = r31.s64 + 20788;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,15336
	ctx.r6.s64 = ctx.r11.s64 + 15336;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233BD50;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r27,r31,20800
	r27.s64 = r31.s64 + 20800;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r11,15400
	ctx.r6.s64 = ctx.r11.s64 + 15400;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233BD78;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r28,r31,20812
	r28.s64 = r31.s64 + 20812;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r11,15464
	ctx.r6.s64 = ctx.r11.s64 + 15464;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233BDA0;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r29,r31,20824
	r29.s64 = r31.s64 + 20824;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,15528
	ctx.r6.s64 = ctx.r11.s64 + 15528;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233BDC8;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// stw r30,20772(r31)
	REX_STORE_U32(r31.u32 + 20772, r30.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r27,20776(r31)
	REX_STORE_U32(r31.u32 + 20776, r27.u32);
	// addi r30,r31,20852
	r30.s64 = r31.s64 + 20852;
	// stw r28,20780(r31)
	REX_STORE_U32(r31.u32 + 20780, r28.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r29,20784(r31)
	REX_STORE_U32(r31.u32 + 20784, r29.u32);
	// addi r6,r11,15592
	ctx.r6.s64 = ctx.r11.s64 + 15592;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233BE00;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r27,r31,20864
	r27.s64 = r31.s64 + 20864;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,15632
	ctx.r6.s64 = ctx.r11.s64 + 15632;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233BE28;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r28,r31,20876
	r28.s64 = r31.s64 + 20876;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,15672
	ctx.r6.s64 = ctx.r11.s64 + 15672;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233BE50;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r29,r31,20888
	r29.s64 = r31.s64 + 20888;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,15712
	ctx.r6.s64 = ctx.r11.s64 + 15712;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233BE78;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// stw r30,20836(r31)
	REX_STORE_U32(r31.u32 + 20836, r30.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r27,20840(r31)
	REX_STORE_U32(r31.u32 + 20840, r27.u32);
	// addi r26,r31,21008
	r26.s64 = r31.s64 + 21008;
	// stw r28,20844(r31)
	REX_STORE_U32(r31.u32 + 20844, r28.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r29,20848(r31)
	REX_STORE_U32(r31.u32 + 20848, r29.u32);
	// addi r6,r11,15752
	ctx.r6.s64 = ctx.r11.s64 + 15752;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233BEB0;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r23,r31,21020
	r23.s64 = r31.s64 + 21020;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r11,16008
	ctx.r6.s64 = ctx.r11.s64 + 16008;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233BED8;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r24,r31,21032
	r24.s64 = r31.s64 + 21032;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,16264
	ctx.r6.s64 = ctx.r11.s64 + 16264;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233BF00;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r25,r31,21044
	r25.s64 = r31.s64 + 21044;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,16520
	ctx.r6.s64 = ctx.r11.s64 + 16520;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233BF28;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r27,r31,21056
	r27.s64 = r31.s64 + 21056;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r11,16776
	ctx.r6.s64 = ctx.r11.s64 + 16776;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233BF50;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r28,r31,21068
	r28.s64 = r31.s64 + 21068;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,17032
	ctx.r6.s64 = ctx.r11.s64 + 17032;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233BF78;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r29,r31,21080
	r29.s64 = r31.s64 + 21080;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,17288
	ctx.r6.s64 = ctx.r11.s64 + 17288;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233BFA0;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r30,r31,21092
	r30.s64 = r31.s64 + 21092;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,17544
	ctx.r6.s64 = ctx.r11.s64 + 17544;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233BFC8;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// stw r26,21720(r31)
	REX_STORE_U32(r31.u32 + 21720, r26.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r23,21724(r31)
	REX_STORE_U32(r31.u32 + 21724, r23.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r24,21728(r31)
	REX_STORE_U32(r31.u32 + 21728, r24.u32);
	// addi r6,r11,17800
	ctx.r6.s64 = ctx.r11.s64 + 17800;
	// stw r25,21732(r31)
	REX_STORE_U32(r31.u32 + 21732, r25.u32);
	// addi r4,r31,21104
	ctx.r4.s64 = r31.s64 + 21104;
	// stw r27,21736(r31)
	REX_STORE_U32(r31.u32 + 21736, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r28,21740(r31)
	REX_STORE_U32(r31.u32 + 21740, r28.u32);
	// stw r29,21744(r31)
	REX_STORE_U32(r31.u32 + 21744, r29.u32);
	// stw r30,21748(r31)
	REX_STORE_U32(r31.u32 + 21748, r30.u32);
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// bl 0x82397dc0
	ctx.lr = 0x8233C00C;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,18312
	ctx.r6.s64 = ctx.r11.s64 + 18312;
	// addi r4,r31,21116
	ctx.r4.s64 = r31.s64 + 21116;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C030;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,18824
	ctx.r6.s64 = ctx.r11.s64 + 18824;
	// addi r4,r31,21128
	ctx.r4.s64 = r31.s64 + 21128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C054;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,19336
	ctx.r6.s64 = ctx.r11.s64 + 19336;
	// addi r4,r31,21140
	ctx.r4.s64 = r31.s64 + 21140;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C078;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r11,19848
	ctx.r6.s64 = ctx.r11.s64 + 19848;
	// addi r4,r31,21152
	ctx.r4.s64 = r31.s64 + 21152;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C09C;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,20360
	ctx.r6.s64 = ctx.r11.s64 + 20360;
	// addi r4,r31,21164
	ctx.r4.s64 = r31.s64 + 21164;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C0C0;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,20872
	ctx.r6.s64 = ctx.r11.s64 + 20872;
	// addi r4,r31,21176
	ctx.r4.s64 = r31.s64 + 21176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C0E4;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,21384
	ctx.r6.s64 = ctx.r11.s64 + 21384;
	// addi r4,r31,21188
	ctx.r4.s64 = r31.s64 + 21188;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C108;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,21896
	ctx.r6.s64 = ctx.r11.s64 + 21896;
	// addi r4,r31,21200
	ctx.r4.s64 = r31.s64 + 21200;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C12C;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,22192
	ctx.r6.s64 = ctx.r11.s64 + 22192;
	// addi r4,r31,21212
	ctx.r4.s64 = r31.s64 + 21212;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C150;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,22488
	ctx.r6.s64 = ctx.r11.s64 + 22488;
	// addi r4,r31,21224
	ctx.r4.s64 = r31.s64 + 21224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C174;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,22784
	ctx.r6.s64 = ctx.r11.s64 + 22784;
	// addi r4,r31,21236
	ctx.r4.s64 = r31.s64 + 21236;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C198;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r30,r31,21248
	r30.s64 = r31.s64 + 21248;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,14540
	ctx.r6.s64 = ctx.r11.s64 + 14540;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C1C0;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r23,r31,21260
	r23.s64 = r31.s64 + 21260;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,14636
	ctx.r6.s64 = ctx.r11.s64 + 14636;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C1E8;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r24,r31,21272
	r24.s64 = r31.s64 + 21272;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,14732
	ctx.r6.s64 = ctx.r11.s64 + 14732;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C210;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r25,r31,21284
	r25.s64 = r31.s64 + 21284;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,14828
	ctx.r6.s64 = ctx.r11.s64 + 14828;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C238;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r26,r31,21296
	r26.s64 = r31.s64 + 21296;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,14856
	ctx.r6.s64 = ctx.r11.s64 + 14856;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C260;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r27,r31,21308
	r27.s64 = r31.s64 + 21308;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,14884
	ctx.r6.s64 = ctx.r11.s64 + 14884;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C288;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r28,r31,21320
	r28.s64 = r31.s64 + 21320;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,14912
	ctx.r6.s64 = ctx.r11.s64 + 14912;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C2B0;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r29,r31,21332
	r29.s64 = r31.s64 + 21332;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,14940
	ctx.r6.s64 = ctx.r11.s64 + 14940;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C2D8;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// stw r30,20936(r31)
	REX_STORE_U32(r31.u32 + 20936, r30.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r23,20940(r31)
	REX_STORE_U32(r31.u32 + 20940, r23.u32);
	// addi r30,r31,21344
	r30.s64 = r31.s64 + 21344;
	// stw r24,20944(r31)
	REX_STORE_U32(r31.u32 + 20944, r24.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r25,20948(r31)
	REX_STORE_U32(r31.u32 + 20948, r25.u32);
	// addi r6,r11,14968
	ctx.r6.s64 = ctx.r11.s64 + 14968;
	// stw r26,20952(r31)
	REX_STORE_U32(r31.u32 + 20952, r26.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r27,20956(r31)
	REX_STORE_U32(r31.u32 + 20956, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r28,20960(r31)
	REX_STORE_U32(r31.u32 + 20960, r28.u32);
	// stw r29,20964(r31)
	REX_STORE_U32(r31.u32 + 20964, r29.u32);
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// bl 0x82397dc0
	ctx.lr = 0x8233C320;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r23,r31,21356
	r23.s64 = r31.s64 + 21356;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,15004
	ctx.r6.s64 = ctx.r11.s64 + 15004;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C348;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r24,r31,21368
	r24.s64 = r31.s64 + 21368;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,15040
	ctx.r6.s64 = ctx.r11.s64 + 15040;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C370;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r25,r31,21380
	r25.s64 = r31.s64 + 21380;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,15076
	ctx.r6.s64 = ctx.r11.s64 + 15076;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C398;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r26,r31,21392
	r26.s64 = r31.s64 + 21392;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,15112
	ctx.r6.s64 = ctx.r11.s64 + 15112;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C3C0;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r27,r31,21404
	r27.s64 = r31.s64 + 21404;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,15148
	ctx.r6.s64 = ctx.r11.s64 + 15148;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C3E8;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r28,r31,21416
	r28.s64 = r31.s64 + 21416;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,15184
	ctx.r6.s64 = ctx.r11.s64 + 15184;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C410;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r29,r31,21428
	r29.s64 = r31.s64 + 21428;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,15220
	ctx.r6.s64 = ctx.r11.s64 + 15220;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C438;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// stw r30,20904(r31)
	REX_STORE_U32(r31.u32 + 20904, r30.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r23,20908(r31)
	REX_STORE_U32(r31.u32 + 20908, r23.u32);
	// addi r30,r31,21440
	r30.s64 = r31.s64 + 21440;
	// stw r24,20912(r31)
	REX_STORE_U32(r31.u32 + 20912, r24.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r25,20916(r31)
	REX_STORE_U32(r31.u32 + 20916, r25.u32);
	// addi r6,r11,14472
	ctx.r6.s64 = ctx.r11.s64 + 14472;
	// stw r26,20920(r31)
	REX_STORE_U32(r31.u32 + 20920, r26.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r27,20924(r31)
	REX_STORE_U32(r31.u32 + 20924, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r28,20928(r31)
	REX_STORE_U32(r31.u32 + 20928, r28.u32);
	// stw r29,20932(r31)
	REX_STORE_U32(r31.u32 + 20932, r29.u32);
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// bl 0x82397dc0
	ctx.lr = 0x8233C480;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r27,r31,21452
	r27.s64 = r31.s64 + 21452;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,14568
	ctx.r6.s64 = ctx.r11.s64 + 14568;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C4A8;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r28,r31,21464
	r28.s64 = r31.s64 + 21464;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,14664
	ctx.r6.s64 = ctx.r11.s64 + 14664;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C4D0;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r29,r31,21476
	r29.s64 = r31.s64 + 21476;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,14760
	ctx.r6.s64 = ctx.r11.s64 + 14760;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C4F8;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// stw r30,20972(r31)
	REX_STORE_U32(r31.u32 + 20972, r30.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r27,20976(r31)
	REX_STORE_U32(r31.u32 + 20976, r27.u32);
	// addi r30,r31,21488
	r30.s64 = r31.s64 + 21488;
	// stw r28,20980(r31)
	REX_STORE_U32(r31.u32 + 20980, r28.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r29,20984(r31)
	REX_STORE_U32(r31.u32 + 20984, r29.u32);
	// addi r6,r11,15256
	ctx.r6.s64 = ctx.r11.s64 + 15256;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C530;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r27,r31,21500
	r27.s64 = r31.s64 + 21500;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,15276
	ctx.r6.s64 = ctx.r11.s64 + 15276;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C558;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r28,r31,21512
	r28.s64 = r31.s64 + 21512;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,15296
	ctx.r6.s64 = ctx.r11.s64 + 15296;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C580;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// addi r29,r31,21524
	r29.s64 = r31.s64 + 21524;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,15316
	ctx.r6.s64 = ctx.r11.s64 + 15316;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C5A8;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// stw r30,20992(r31)
	REX_STORE_U32(r31.u32 + 20992, r30.u32);
	// stw r27,20996(r31)
	REX_STORE_U32(r31.u32 + 20996, r27.u32);
	// stw r28,21000(r31)
	REX_STORE_U32(r31.u32 + 21000, r28.u32);
	// stw r29,21004(r31)
	REX_STORE_U32(r31.u32 + 21004, r29.u32);
loc_8233C5C0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,1088
	ctx.r6.s64 = ctx.r11.s64 + 1088;
	// addi r4,r31,2044
	ctx.r4.s64 = r31.s64 + 2044;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C5DC;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,1576
	ctx.r6.s64 = ctx.r11.s64 + 1576;
	// addi r4,r31,2056
	ctx.r4.s64 = r31.s64 + 2056;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C600;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,2064
	ctx.r6.s64 = ctx.r11.s64 + 2064;
	// addi r4,r31,2068
	ctx.r4.s64 = r31.s64 + 2068;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C624;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r11,2552
	ctx.r6.s64 = ctx.r11.s64 + 2552;
	// addi r4,r31,2080
	ctx.r4.s64 = r31.s64 + 2080;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C648;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-14832
	ctx.r6.s64 = ctx.r11.s64 + -14832;
	// addi r4,r31,2184
	ctx.r4.s64 = r31.s64 + 2184;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C66C;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-14152
	ctx.r6.s64 = ctx.r11.s64 + -14152;
	// addi r4,r31,2196
	ctx.r4.s64 = r31.s64 + 2196;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C690;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-13400
	ctx.r6.s64 = ctx.r11.s64 + -13400;
	// addi r4,r31,2208
	ctx.r4.s64 = r31.s64 + 2208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C6B4;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-12800
	ctx.r6.s64 = ctx.r11.s64 + -12800;
	// addi r4,r31,2220
	ctx.r4.s64 = r31.s64 + 2220;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C6D8;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-12264
	ctx.r6.s64 = ctx.r11.s64 + -12264;
	// addi r4,r31,2232
	ctx.r4.s64 = r31.s64 + 2232;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C6FC;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-11848
	ctx.r6.s64 = ctx.r11.s64 + -11848;
	// addi r4,r31,2244
	ctx.r4.s64 = r31.s64 + 2244;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C720;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-11432
	ctx.r6.s64 = ctx.r11.s64 + -11432;
	// addi r4,r31,2432
	ctx.r4.s64 = r31.s64 + 2432;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C744;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c770
	if (!ctx.cr6.eq) goto loc_8233C770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,3376(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3376);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,-10728
	ctx.r6.s64 = ctx.r11.s64 + -10728;
	// addi r4,r31,2256
	ctx.r4.s64 = r31.s64 + 2256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397dc0
	ctx.lr = 0x8233C768;
	sub_82397DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233c77c
	if (ctx.cr6.eq) goto loc_8233C77C;
loc_8233C770:
	// li r3,-9
	ctx.r3.s64 = -9;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec4
	return;
loc_8233C77C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_82379250) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x82379258;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v20,-1
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_set1_epi8(char(0xFF)));
	// rlwinm r30,r4,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltish v19,1
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_set1_epi16(short(0x1)));
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// vspltish v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x2)));
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// vspltish v10,3
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x3)));
	// vspltish v7,4
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_set1_epi16(short(0x4)));
	// vspltish v6,15
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0xF)));
	// ble cr6,0x82379538
	if (!ctx.cr6.gt) goto loc_82379538;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r7,r11,-22768
	ctx.r7.s64 = ctx.r11.s64 + -22768;
	// addi r29,r10,4
	r29.s64 = ctx.r10.s64 + 4;
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v1,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r7,r9
	ea = (ctx.r7.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_823792AC:
	// add r7,r29,r3
	ctx.r7.u64 = r29.u64 + ctx.r3.u64;
loc_823792B0:
	// lbz r5,0(r7)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// lbz r9,1(r7)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// subf r9,r9,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r9.u64;
	// srawi r5,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 31;
	// xor r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r5.u64;
	// subf r5,r5,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r5.u64;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bge cr6,0x823792e8
	if (!ctx.cr6.lt) goto loc_823792E8;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r6,r6,-4
	ctx.xer.ca = ctx.r6.u32 > 3;
	ctx.r6.s64 = ctx.r6.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// bgt 0x823792b0
	if (ctx.cr0.gt) goto loc_823792B0;
	// b 0x822d4ed4
	return;
loc_823792E8:
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// ble cr6,0x8237932c
	if (!ctx.cr6.gt) goto loc_8237932C;
	// add r9,r30,r10
	ctx.r9.u64 = r30.u64 + ctx.r10.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// lbz r5,5(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 5);
	// lbz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// subf r5,r5,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r5.u64;
	// srawi r9,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 31;
	// xor r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// subf r9,r9,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r9.u64;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bge cr6,0x8237953c
	if (!ctx.cr6.lt) goto loc_8237953C;
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
loc_8237932C:
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// vpkswss128 v40,v20,v0
	simde_mm_store_si128((simde__m128i*)ctx.v40.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.s32), simde_mm_load_si128((simde__m128i*)v20.s32)));
	// addi r28,r1,36
	r28.s64 = ctx.r1.s64 + 36;
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r31,r9,r8
	r31.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lvlx128 v39,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r27,r1,36
	r27.s64 = ctx.r1.s64 + 36;
	// lvrx128 v38,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// lvlx128 v37,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v29,v39,v38
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// lvrx128 v36,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v35,r9,r10
	temp.u32 = ctx.r9.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v28,v37,v36
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v36.u8)));
	// lvrx128 v34,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v33,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v27,v35,v34
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v34.u8)));
	// lvrx128 v32,r11,r31
	temp.u32 = ctx.r11.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v26,v33,v32
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8)));
	// lvrx128 v63,r11,r28
	temp.u32 = ctx.r11.u32 + r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r27
	temp.u32 = r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v13,v29,v27
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// vor128 v8,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vmrghb v9,v28,v26
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)v28.u8)));
	// vsplth v25,v8,1
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_set1_epi16(short(0xD0C))));
	// vmrglb v23,v13,v9
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v24,v13,v9
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglw v5,v23,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)v23.u32)));
	// vmrghw v9,v23,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)v23.u32)));
	// vmrghw v8,v24,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)v24.u32)));
	// vmrglw v13,v24,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)v24.u32)));
	// vmrghb v21,v0,v5
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v3,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v22,v0,v8
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v4,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v17,v0,v8
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v2,v3,v21
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vmrglb v18,v0,v5
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v13,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v5,v22,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsubshs v3,v4,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vslh v15,v2,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v31,v17,v13
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v30,v9,v18
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vsubshs v8,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vslh v16,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v4,v15,v2
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v14,v31,v31
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vaddshs v2,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vslh v30,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v5,v16,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsubshs v31,v9,v13
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v23,v2,v4
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v21,v30,v8
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsubshs v24,v14,v5
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vmaxsh v22,v8,v31
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vaddshs v18,v3,v3
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v16,v23,v7
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v17,v24,v7
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsrah v4,v22,v19
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v15,v18,v21
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vsrah v5,v8,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v2,v17,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v16,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsplth v14,v4,2
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_set1_epi16(short(0xB0A))));
	// vaddshs v8,v15,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsubshs v3,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubshs v30,v0,v31
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vsrah v8,v8,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vand128 v24,v14,v40
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8)));
	// vmaxsh v23,v2,v3
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vmaxsh v22,v31,v30
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vsrah v17,v8,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v21,v0,v24
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vsubshs v18,v0,v8
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vminsh v3,v23,v22
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vxor128 v61,v17,v5
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vsrah v16,v21,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaxsh v8,v8,v18
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vsubshs v2,v8,v3
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vcmpgtsh v15,v25,v8
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vcmpgtsh v14,v8,v3
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vand128 v60,v61,v16
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// vslh v8,v2,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vand128 v63,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// vaddshs v3,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vperm128 v59,v63,v63,v1
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vsrah v2,v3,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vand128 v58,v2,v63
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v57,v58,v59
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// vand128 v31,v57,v60
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// vminsh v30,v4,v31
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vxor v25,v30,v5
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vsubshs v24,v25,v5
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vand128 v8,v24,v40
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8)));
	// vcmpequh. v23,v0,v8
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)v23.u16), 0xFFFF);
	// mfocrf r7,2
	ctx.r7.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vsubshs v22,v13,v8
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// rlwinm r5,r7,0,24,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80;
	// vaddshs v21,v9,v8
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// cmplwi cr6,r5,128
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// vmrghh v18,v22,v21
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vpkshus v13,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// beq cr6,0x82379530
	if (ctx.cr6.eq) goto loc_82379530;
	// vsplth v9,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xF0E))));
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vsplth v8,v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xD0C))));
	// vsplth v4,v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xB0A))));
	// vsplth v3,v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0x908))));
	// vsldoi v5,v9,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vsldoi v8,v8,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vsldoi v9,v4,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vsldoi v13,v3,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vsel v4,v29,v5,v12
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v29.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8))));
	// vsel v5,v28,v8,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v28.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8))));
	// vsel v8,v27,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v27.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// vsel v9,v26,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v26.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// stvlx v4,0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvrx v4,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v4.u8[i]);
	// stvlx v5,r9,r4
	ea = ctx.r9.u32 + ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvrx v5,r7,r11
	ea = ctx.r7.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v5.u8[i]);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stvlx v8,r9,r10
	ea = ctx.r9.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// stvrx v8,r7,r11
	ea = ctx.r7.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v8.u8[i]);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stvlx v9,r9,r8
	ea = ctx.r9.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvrx v9,r7,r11
	ea = ctx.r7.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v9.u8[i]);
loc_82379530:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bgt cr6,0x823792ac
	if (ctx.cr6.gt) goto loc_823792AC;
loc_82379538:
	// b 0x822d4ed4
	return;
loc_8237953C:
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// addi r7,r7,17
	ctx.r7.s64 = ctx.r7.s64 + 17;
	// add r5,r9,r30
	ctx.r5.u64 = ctx.r9.u64 + r30.u64;
	// add r31,r7,r30
	r31.u64 = ctx.r7.u64 + r30.u64;
	// addi r28,r1,36
	r28.s64 = ctx.r1.s64 + 36;
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r27,r1,36
	r27.s64 = ctx.r1.s64 + 36;
	// lvrx128 v62,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r6,r6,-8
	ctx.r6.s64 = ctx.r6.s64 + -8;
	// lvrx128 v61,r7,r30
	temp.u32 = ctx.r7.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v2,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// lvlx128 v60,r9,r30
	temp.u32 = ctx.r9.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v59,r10,r7
	temp.u32 = ctx.r10.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v31,v60,v61
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lvlx128 v58,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v57,r10,r31
	temp.u32 = ctx.r10.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v27,v58,v59
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// lvlx128 v56,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v30,v56,v57
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vmrghb v13,v2,v31
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvrx128 v55,r4,r7
	temp.u32 = ctx.r4.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v54,r4,r9
	temp.u32 = ctx.r4.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v53,r4,r31
	temp.u32 = ctx.r4.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v28,v54,v55
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vmrghb v8,v27,v30
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)v27.u8)));
	// lvlx128 v52,r4,r5
	temp.u32 = ctx.r4.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v51,r8,r7
	temp.u32 = ctx.r8.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v3,v52,v53
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvlx128 v50,r8,r9
	temp.u32 = ctx.r8.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v49,r8,r31
	temp.u32 = ctx.r8.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v29,v50,v51
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// lvlx128 v48,r8,r5
	temp.u32 = ctx.r8.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v4,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vor128 v26,v48,v49
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// lvrx128 v47,r11,r28
	temp.u32 = ctx.r11.u32 + r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v46,r0,r27
	temp.u32 = r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v13,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vor128 v8,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// vmrghb v9,v28,v3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)v28.u8)));
	// vmrghb v5,v29,v26
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// vsplth v18,v8,1
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_set1_epi16(short(0xD0C))));
	// vmrghb v8,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// vmrglb v9,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// vmrglb v5,v4,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrghb v8,v4,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrghb v25,v13,v9
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v4,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v13,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v17,v0,v8
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v16,v0,v8
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v15,v0,v4
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v22,v17,v5
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vmrglb v14,v0,v4
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v25,v0,v25
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v8,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsubshs v4,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v23,v16,v13
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vslh v16,v22,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v24,v5,v25
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vsubshs v25,v25,v15
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vmaxsh v17,v8,v4
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vslh v15,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v21,v9,v14
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vaddshs v5,v16,v22
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vaddshs v14,v23,v23
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vslh v23,v25,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v4,v17,v19
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v24,v24,v24
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vaddshs v17,v15,v8
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsubshs v15,v14,v5
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v14,v23,v25
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vperm v22,v4,v4,v1
	simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vaddshs v16,v21,v21
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vsubshs v25,v24,v17
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vsrah v5,v8,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v23,v0,v22
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vaddshs v24,v15,v7
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsubshs v22,v16,v14
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vaddshs v21,v25,v7
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v17,v22,v7
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsrah v25,v24,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v8,v21,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v23,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v17,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v15,v0,v25
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vsubshs v14,v0,v8
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsrah v23,v8,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v22,v0,v24
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vmaxsh v21,v25,v15
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vmaxsh v8,v8,v14
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vxor128 v45,v23,v5
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmaxsh v17,v24,v22
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vcmpgtsh v15,v18,v8
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vand128 v44,v45,v16
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// vminsh v25,v21,v17
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vsubshs v24,v8,v25
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vcmpgtsh v14,v8,v25
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vslh v8,v24,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vand128 v63,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// vaddshs v25,v8,v24
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vperm128 v43,v63,v63,v1
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vsrah v24,v25,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vand128 v42,v24,v63
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v41,v42,v43
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8)));
	// vand128 v23,v41,v44
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8)));
	// vminsh v22,v4,v23
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vxor v21,v22,v5
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vsubshs v18,v21,v5
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vand v8,v18,v20
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)v20.u8)));
	// vcmpequh. v17,v0,v8
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)v17.u16), 0xFFFF);
	// mfocrf r7,2
	ctx.r7.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vsubshs v13,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// rlwinm r5,r7,0,24,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80;
	// vaddshs v8,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// add r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 + r30.u64;
	// vor v9,v26,v26
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)v26.u8));
	// cmplwi cr6,r5,128
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// vmrglh v16,v13,v8
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vmrghh v15,v13,v8
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vpkshus v13,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vsplth v14,v13,0
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xF0E))));
	// vsplth v4,v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xD0C))));
	// vsplth v25,v13,3
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0x908))));
	// vsplth v24,v13,4
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0x706))));
	// vsldoi v8,v14,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vsplth v23,v13,5
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0x504))));
	// vsplth v22,v13,2
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xB0A))));
	// vsplth v21,v13,6
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0x302))));
	// vsel v5,v2,v8,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8))));
	// vsplth v18,v13,7
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0x100))));
	// vsldoi v13,v4,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vsldoi v2,v24,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vsldoi v4,v23,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vor128 v63,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vsldoi v8,v21,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vor v5,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)v30.u8));
	// vsldoi v30,v25,v0,1
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vsel v24,v28,v13,v12
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v28.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vsldoi v26,v22,v0,1
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vsldoi v13,v18,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vsel v28,v29,v30,v12
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v29.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v30.u8))));
	// vsel v30,v31,v2,v12
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v31.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8))));
	// vsel v2,v3,v4,v12
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8))));
	// vsel v4,v5,v8,v12
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8))));
	// vsel v25,v27,v26,v12
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v27.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v26.u8))));
	// vsel v8,v9,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// beq cr6,0x82379530
	if (ctx.cr6.eq) goto loc_82379530;
	// add r5,r9,r4
	ctx.r5.u64 = ctx.r9.u64 + ctx.r4.u64;
	// stvlx128 v63,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// stvlx v24,r9,r4
	ea = ctx.r9.u32 + ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v24.u8[15 - i]);
	// stvrx v24,r5,r11
	ea = ctx.r5.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, v24.u8[i]);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stvlx v25,r9,r10
	ea = ctx.r9.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v25.u8[15 - i]);
	// stvrx v25,r5,r11
	ea = ctx.r5.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, v25.u8[i]);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stvlx v28,r9,r8
	ea = ctx.r9.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v28.u8[15 - i]);
	// add r9,r7,r4
	ctx.r9.u64 = ctx.r7.u64 + ctx.r4.u64;
	// stvrx v28,r5,r11
	ea = ctx.r5.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, v28.u8[i]);
	// stvlx v30,0,r7
	ea = ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v30.u8[15 - i]);
	// stvrx v30,r7,r11
	ea = ctx.r7.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, v30.u8[i]);
	// stvlx v2,r7,r4
	ea = ctx.r7.u32 + ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvrx v2,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v2.u8[i]);
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stvlx v4,r7,r10
	ea = ctx.r7.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvrx v4,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v4.u8[i]);
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stvlx v8,r7,r8
	ea = ctx.r7.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// stvrx v8,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v8.u8[i]);
	// b 0x82379530
	goto loc_82379530;
}

DEFINE_REX_FUNC(sub_823B9CA0) {
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
	// bl 0x822d4e50
	ctx.lr = 0x823B9CA8;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r11,16
	ctx.r11.s64 = 16;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r26,r10,-9296
	r26.s64 = ctx.r10.s64 + -9296;
	// beq cr6,0x823ba1a4
	if (ctx.cr6.eq) goto loc_823BA1A4;
	// stw r7,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r7.u32);
	// subf r10,r8,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r8.u64;
	// addi r29,r1,-192
	r29.s64 = ctx.r1.s64 + -192;
	// lvlx128 v63,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r31,r4,r8
	r31.u64 = ctx.r4.u64 + ctx.r8.u64;
	// lvlx128 v62,r4,r8
	temp.u32 = ctx.r4.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// subf r3,r8,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r8.u64;
	// lvrx128 v61,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r9,r31,r8
	ctx.r9.u64 = r31.u64 + ctx.r8.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// subf r6,r8,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r8.u64;
	// lvlx128 v60,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r30,r9,r8
	r30.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lvrx128 v59,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// subf r28,r8,r6
	r28.u64 = ctx.r6.u64 - ctx.r8.u64;
	// lvlx128 v58,r31,r8
	temp.u32 = r31.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v57,r11,r31
	temp.u32 = ctx.r11.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v22,v60,v59
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// lvlx128 v56,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v21,v63,v61
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lvlx128 v55,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v20,v62,v57
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// lvlx128 v54,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r31,r10,r8
	r31.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lvlx128 v53,r0,r28
	temp.u32 = r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltisb v14,-1
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_set1_epi8(char(0xFF)));
	// lvrx128 v52,r11,r28
	temp.u32 = ctx.r11.u32 + r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vspltish v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x3)));
	// lvrx128 v51,r11,r6
	temp.u32 = ctx.r11.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v25,v53,v52
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// lvrx128 v50,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v24,v55,v51
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// lvrx128 v49,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v23,v56,v50
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// lvrx128 v48,r11,r30
	temp.u32 = ctx.r11.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v19,v58,v49
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vor128 v18,v54,v48
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// lvx128 v1,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltish v26,4
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_set1_epi16(short(0x4)));
	// li r25,0
	r25.s64 = 0;
	// lvx128 v11,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v6,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v12,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// vsplth v27,v11,1
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_set1_epi16(short(0xD0C))));
	// addi r27,r8,-4
	r27.s64 = ctx.r8.s64 + -4;
	// vmrghb v9,v0,v23
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v22
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v21
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v16,v27,v27
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vmrghb v8,v0,v20
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v7,v0,v19
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v18
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vspltisw v17,4
	simde_mm_store_si128((simde__m128i*)v17.u32, simde_mm_set1_epi32(int(0x4)));
	// vupkhsh v15,v16
	simde_mm_store_si128((simde__m128i*)v15.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v16.s16))));
loc_823B9D98:
	// vsubshs v3,v6,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// addi r30,r1,-192
	r30.s64 = ctx.r1.s64 + -192;
	// vsubshs v2,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsubshs v29,v10,v8
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsubshs v28,v8,v7
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsubshs v4,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubshs v31,v9,v11
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v30,v11,v10
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vor128 v47,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// stvx128 v4,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v45,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor128 v43,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vsubshs v12,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vsubshs v10,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vsubshs v8,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vor128 v46,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor128 v44,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vsubshs v4,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsubshs v11,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vsubshs v9,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vor128 v42,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vmaxsh v29,v12,v29
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vmaxsh v28,v10,v28
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vmaxsh v2,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vmaxsh v30,v11,v30
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vmaxsh v31,v9,v31
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vsubshs v12,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vcmpgtuh v29,v13,v29
	simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vcmpgtuh v28,v13,v28
	simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vcmpgtuh v2,v13,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// lvx128 v7,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpgtuh v30,v13,v30
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vmaxsh v3,v7,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vcmpgtuh v31,v13,v31
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vmaxsh v12,v12,v4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v29,v29,v28
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vcmpgtuh v3,v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vaddshs v28,v31,v30
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v3,v3,v2
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vcmpgtuh v2,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vaddshs v31,v28,v29
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vaddshs v30,v2,v3
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v29,v30,v31
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vsubshs v3,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vperm v3,v3,v3,v1
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vcmpgtsh. v29,v3,v26
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)v29.u16), 0xFFFF);
	// mfocrf r24,2
	r24.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// rlwinm r30,r24,0,26,26
	r30.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x20;
	// vor128 v12,v47,v47
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v47.u8));
	// vor128 v11,v46,v46
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v46.u8));
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// vor128 v10,v45,v45
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v45.u8));
	// vor128 v9,v44,v44
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v44.u8));
	// vor128 v8,v43,v43
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v43.u8));
	// vor128 v7,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// beq cr6,0x823ba0cc
	if (ctx.cr6.eq) goto loc_823BA0CC;
	// vminsh v31,v12,v9
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vminsh v2,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vmaxsh v28,v12,v9
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vmaxsh v30,v11,v10
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vor128 v41,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vminsh v2,v31,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vminsh v0,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vmaxsh v30,v28,v30
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vmaxsh v31,v8,v7
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vminsh v28,v0,v2
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vmaxsh v2,v31,v30
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vsubshs v2,v2,v28
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vcmpgtsh. v30,v16,v2
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)v30.u16), 0xFFFF);
	// vupkhsh v31,v2
	simde_mm_store_si128((simde__m128i*)v31.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16))));
	// vcmpgtsw. v28,v15,v31
	simde_mm_store_si128((simde__m128i*)v28.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)v15.u32), simde_mm_load_si128((simde__m128i*)v31.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)v28.u32)), 0xF);
	// vand128 v63,v30,v29
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// mfocrf r30,2
	r30.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupklsh v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vcmpgtsw. v31,v15,v2
	simde_mm_store_si128((simde__m128i*)v31.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)v15.u32), simde_mm_load_si128((simde__m128i*)ctx.v2.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)v31.u32)), 0xF);
	// mfocrf r28,2
	r28.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupkhsh v30,v3
	simde_mm_store_si128((simde__m128i*)v30.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16))));
	// vcmpgtsw. v28,v30,v17
	simde_mm_store_si128((simde__m128i*)v28.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)v30.u32), simde_mm_load_si128((simde__m128i*)v17.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)v28.u32)), 0xF);
	// mfocrf r29,2
	r29.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupklsh v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vcmpgtsw. v2,v3,v17
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), simde_mm_load_si128((simde__m128i*)v17.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)ctx.v2.u32)), 0xF);
	// mfocrf r23,2
	r23.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// rlwinm r22,r29,0,26,26
	r22.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x20;
	// vor128 v0,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// mr r29,r23
	r29.u64 = r23.u64;
	// cmplwi cr6,r22,32
	ctx.cr6.compare<uint32_t>(r22.u32, 32, ctx.xer);
	// beq cr6,0x823b9f00
	if (ctx.cr6.eq) goto loc_823B9F00;
	// rlwinm r30,r30,0,26,26
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// bne cr6,0x823b9f18
	if (!ctx.cr6.eq) goto loc_823B9F18;
loc_823B9F00:
	// rlwinm r30,r29,0,26,26
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// beq cr6,0x823ba0cc
	if (ctx.cr6.eq) goto loc_823BA0CC;
	// rlwinm r30,r28,0,26,26
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// beq cr6,0x823ba0cc
	if (ctx.cr6.eq) goto loc_823BA0CC;
loc_823B9F18:
	// vsubshs v31,v0,v4
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// addi r23,r1,-208
	r23.s64 = ctx.r1.s64 + -208;
	// vsubshs v3,v12,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// addi r22,r1,-224
	r22.s64 = ctx.r1.s64 + -224;
	// vaddshs v30,v9,v11
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// addi r21,r1,-176
	r21.s64 = ctx.r1.s64 + -176;
	// vaddshs v2,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// addi r30,r1,-256
	r30.s64 = ctx.r1.s64 + -256;
	// vmaxsh v4,v31,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// addi r29,r1,-240
	r29.s64 = ctx.r1.s64 + -240;
	// vsubshs v28,v0,v3
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// addi r28,r1,-272
	r28.s64 = ctx.r1.s64 + -272;
	// vaddshs v31,v30,v26
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vandc128 v39,v12,v63
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vcmpgtsh v30,v27,v4
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vmaxsh v3,v28,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vor128 v60,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vor128 v61,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vandc128 v37,v7,v30
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vand128 v36,v5,v30
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)v30.u8)));
	// vcmpgtsh v4,v27,v3
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vaddshs v3,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v28,v11,v7
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vxor128 v5,v36,v37
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// vandc128 v34,v12,v4
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vand128 v33,v6,v4
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// stvx128 v3,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vandc128 v38,v11,v63
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vaddshs v30,v8,v5
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v3,v7,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vxor128 v6,v33,v34
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v34.u8)));
	// vsubshs v4,v5,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// stvx128 v30,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v59,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vandc128 v40,v9,v63
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// vaddshs v30,v6,v12
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v12,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v4,v4,v3
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubshs v0,v6,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v3,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vaddshs v11,v6,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// stvx128 v4,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v4,v31,v12
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v30,v0,v30
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v3,v3,v2
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vandc128 v35,v10,v63
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vandc128 v32,v7,v63
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vandc128 v62,v8,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// vaddshs v30,v30,v3
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// lvx128 v0,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v31,v11,v3
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v2,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// lvx128 v0,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v0,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsrah v31,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// lvx128 v12,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v30,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v28,v28,v3
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v4,v12,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vand128 v58,v31,v63
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v57,v30,v63
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vsrah v3,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v2,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v30,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vxor128 v56,v58,v40
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8)));
	// vxor128 v55,v57,v39
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8)));
	// vand128 v54,v3,v63
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v53,v2,v63
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v51,v31,v63
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v50,v30,v63
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vpkshus128 v52,v55,v56
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v56.s16), simde_mm_load_si128((simde__m128i*)ctx.v55.s16)));
	// vxor128 v3,v54,v35
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8)));
	// vxor128 v49,v53,v32
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8)));
	// vxor128 v48,v51,v62
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vxor128 v4,v50,v38
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// stvx128 v52,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r30,-248(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// lwz r23,-256(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// vpkshus128 v47,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v49.s16), simde_mm_load_si128((simde__m128i*)ctx.v48.s16)));
	// vpkshus128 v46,v4,v3
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// stvx128 v47,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r23,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r23.u32);
	// stvx128 v46,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r28,-232(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// lwz r23,-272(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// vor128 v0,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
	// lwz r22,-264(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// vor128 v12,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// vor128 v11,v59,v59
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v59.u8));
	// lwz r29,-240(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// stw r29,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// stw r28,-4(r31)
	REX_STORE_U32(r31.u32 + -4, r28.u32);
	// stwx r23,r27,r31
	REX_STORE_U32(r27.u32 + r31.u32, r23.u32);
	// lwz r28,-268(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// lwz r23,-260(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// lwz r21,-252(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// lwz r20,-244(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// stw r22,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r22.u32);
	// lwz r30,-236(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// lwz r29,-228(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// stw r21,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, r21.u32);
	// stw r20,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r20.u32);
	// stw r30,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r30.u32);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// stwx r28,r31,r8
	REX_STORE_U32(r31.u32 + ctx.r8.u32, r28.u32);
	// stw r23,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, r23.u32);
	// b 0x823ba0d4
	goto loc_823BA0D4;
loc_823BA0CC:
	// vor v3,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v4,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
loc_823BA0D4:
	// rlwinm r30,r24,0,24,24
	r30.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r30,128
	ctx.cr6.compare<uint32_t>(r30.u32, 128, ctx.xer);
	// beq cr6,0x823ba15c
	if (ctx.cr6.eq) goto loc_823BA15C;
	// vsubshs v2,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vxor128 v45,v14,v29
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// vsubshs v31,v0,v2
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vmaxsh v31,v31,v2
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vcmpgtsh v30,v27,v31
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vcmpgtsh v29,v31,v13
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vand128 v44,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)v30.u8)));
	// vand128 v30,v44,v45
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vcmpequh. v28,v0,v30
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)v28.u16), 0xFFFF);
	// blt cr6,0x823ba15c
	if (ctx.cr6.lt) goto loc_823BA15C;
	// vspltish v29,2
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_set1_epi16(short(0x2)));
	// addi r30,r1,-272
	r30.s64 = ctx.r1.s64 + -272;
	// vspltish v28,15
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_set1_epi16(short(0xF)));
	// vsrah v31,v31,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v2,v2,v28
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v29,v31,v31
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vand v28,v2,v29
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// vsubshs v2,v31,v28
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vand v2,v2,v30
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)v30.u8)));
	// vsubshs v31,v3,v2
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v30,v4,v2
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vpkshus128 v43,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// stvx128 v43,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r24,-268(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// lwz r29,-264(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// lwz r28,-260(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// lwz r30,-272(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// stw r30,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// stw r24,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r24.u32);
	// stw r29,-4(r31)
	REX_STORE_U32(r31.u32 + -4, r29.u32);
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
loc_823BA15C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x823ba198
	if (!ctx.cr6.eq) goto loc_823BA198;
	// vmrglb v6,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// vmrglb v12,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// vmrglb v9,v0,v23
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// vmrglb v11,v0,v22
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// vmrglb v10,v0,v21
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// vmrglb v8,v0,v20
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v19
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v18
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_823BA198:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// blt cr6,0x823b9d98
	if (ctx.cr6.lt) goto loc_823B9D98;
loc_823BA1A4:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823ba7d4
	if (ctx.cr6.eq) goto loc_823BA7D4;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// stw r7,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r7.u32);
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// addi r7,r1,-192
	ctx.r7.s64 = ctx.r1.s64 + -192;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lvx128 v1,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r26,0
	r26.s64 = 0;
	// vspltisb v21,-1
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_set1_epi8(char(0xFF)));
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// vspltish v20,2
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_set1_epi16(short(0x2)));
	// lvlx128 v42,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltish v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x3)));
	// add r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lvlx128 v41,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v40,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltish v25,4
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_set1_epi16(short(0x4)));
	// add r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lvrx128 v39,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v38,r6,r8
	temp.u32 = ctx.r6.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v12,v41,v39
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8)));
	// add r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 + ctx.r8.u64;
	// lvrx128 v37,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v36,r5,r8
	temp.u32 = ctx.r5.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v11,v42,v37
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// add r31,r3,r8
	r31.u64 = ctx.r3.u64 + ctx.r8.u64;
	// lvrx128 v35,r11,r6
	temp.u32 = ctx.r11.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v34,r4,r8
	temp.u32 = ctx.r4.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v10,v40,v35
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8)));
	// add r30,r31,r8
	r30.u64 = r31.u64 + ctx.r8.u64;
	// lvrx128 v33,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v32,r3,r8
	temp.u32 = ctx.r3.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v9,v38,v33
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// lvrx128 v63,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v62,r31,r8
	temp.u32 = r31.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v8,v36,v63
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvrx128 v61,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v11,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v60,r11,r31
	temp.u32 = ctx.r11.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v7,v34,v61
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lvrx128 v59,r11,r30
	temp.u32 = ctx.r11.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v6,v32,v60
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// vor128 v5,v62,v59
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// vmrghb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v30,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// vmrghb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stw r26,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, r26.u32);
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghh v4,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrghh v3,v11,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrghh v2,v10,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vmrghh v31,v9,v5
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vmrglh v12,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrglh v11,v11,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrglh v10,v10,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vmrglh v9,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsplth v27,v30,1
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_set1_epi16(short(0xD0C))));
	// vmrghh v8,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vmrghh v7,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vmrglh v6,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vmrglh v5,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vaddshs v24,v27,v27
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vmrghh v4,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrglh v3,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrglh v31,v11,v9
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrghh v2,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrghh v12,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vmrglh v11,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vmrghh v7,v6,v5
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vmrglh v10,v6,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vspltisw v23,4
	simde_mm_store_si128((simde__m128i*)v23.u32, simde_mm_set1_epi32(int(0x4)));
	// vmrghh v9,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vmrglh v6,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vmrghh v5,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vmrglh v8,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vupkhsh v22,v24
	simde_mm_store_si128((simde__m128i*)v22.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v24.s16))));
loc_823BA2EC:
	// vsubshs v3,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v28,v6,v5
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsubshs v30,v10,v9
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsubshs v29,v9,v6
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubshs v2,v11,v7
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsubshs v31,v7,v10
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubshs v26,v0,v3
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubshs v17,v0,v28
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vsubshs v19,v0,v30
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vsubshs v18,v0,v29
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vsubshs v16,v0,v31
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vsubshs v15,v0,v2
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubshs v4,v5,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vmaxsh v14,v26,v3
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vmaxsh v3,v17,v28
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vmaxsh v28,v19,v30
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vmaxsh v29,v18,v29
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vmaxsh v26,v16,v31
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vmaxsh v19,v15,v2
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubshs v18,v0,v4
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vcmpgtuh v17,v13,v3
	simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vcmpgtuh v3,v13,v26
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vcmpgtuh v16,v13,v29
	simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vcmpgtuh v2,v13,v19
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vmaxsh v30,v18,v4
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vcmpgtuh v15,v13,v28
	simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vcmpgtuh v31,v13,v14
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vaddshs v29,v16,v17
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vcmpgtuh v19,v13,v30
	simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vaddshs v28,v3,v15
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vaddshs v26,v31,v2
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v18,v28,v29
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vaddshs v17,v19,v26
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vaddshs v16,v17,v18
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vsubshs v3,v0,v16
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vperm v3,v3,v3,v1
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vcmpgtsh. v26,v3,v25
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)v26.u16), 0xFFFF);
	// mfocrf r27,2
	r27.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// rlwinm r7,r27,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r7,32
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 32, ctx.xer);
	// beq cr6,0x823ba5f8
	if (ctx.cr6.eq) goto loc_823BA5F8;
	// vminsh v2,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vminsh v31,v11,v7
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vmaxsh v30,v10,v9
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vmaxsh v29,v11,v7
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vminsh v28,v6,v5
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vminsh v19,v31,v2
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vmaxsh v18,v6,v5
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vmaxsh v17,v29,v30
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vminsh v16,v28,v19
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vmaxsh v15,v18,v17
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vsubshs v2,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vcmpgtsh. v31,v24,v2
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)v31.u16), 0xFFFF);
	// vupkhsh v14,v2
	simde_mm_store_si128((simde__m128i*)v14.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16))));
	// vcmpgtsw. v30,v22,v14
	simde_mm_store_si128((simde__m128i*)v30.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)v22.u32), simde_mm_load_si128((simde__m128i*)v14.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)v30.u32)), 0xF);
	// vand128 v63,v31,v26
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)v26.u8)));
	// mfocrf r7,2
	ctx.r7.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupklsh v29,v2
	simde_mm_store_si128((simde__m128i*)v29.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vcmpgtsw. v28,v22,v29
	simde_mm_store_si128((simde__m128i*)v28.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)v22.u32), simde_mm_load_si128((simde__m128i*)v29.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)v28.u32)), 0xF);
	// mfocrf r28,2
	r28.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupkhsh v19,v3
	simde_mm_store_si128((simde__m128i*)v19.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16))));
	// vcmpgtsw. v18,v19,v23
	simde_mm_store_si128((simde__m128i*)v18.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)v19.u32), simde_mm_load_si128((simde__m128i*)v23.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)v18.u32)), 0xF);
	// mfocrf r29,2
	r29.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vupklsh v17,v3
	simde_mm_store_si128((simde__m128i*)v17.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vcmpgtsw. v16,v17,v23
	simde_mm_store_si128((simde__m128i*)v16.u32, simde_mm_cmpgt_epi32(simde_mm_load_si128((simde__m128i*)v17.u32), simde_mm_load_si128((simde__m128i*)v23.u32)));
	ctx.cr6.setFromMask(simde_mm_castsi128_ps(simde_mm_load_si128((simde__m128i*)v16.u32)), 0xF);
	// mfocrf r25,2
	r25.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// rlwinm r24,r29,0,26,26
	r24.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x20;
	// mr r29,r25
	r29.u64 = r25.u64;
	// cmplwi cr6,r24,32
	ctx.cr6.compare<uint32_t>(r24.u32, 32, ctx.xer);
	// beq cr6,0x823ba410
	if (ctx.cr6.eq) goto loc_823BA410;
	// rlwinm r7,r7,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r7,32
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 32, ctx.xer);
	// bne cr6,0x823ba428
	if (!ctx.cr6.eq) goto loc_823BA428;
loc_823BA410:
	// rlwinm r7,r29,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r7,32
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 32, ctx.xer);
	// beq cr6,0x823ba5f8
	if (ctx.cr6.eq) goto loc_823BA5F8;
	// rlwinm r7,r28,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r7,32
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 32, ctx.xer);
	// beq cr6,0x823ba5f8
	if (ctx.cr6.eq) goto loc_823BA5F8;
loc_823BA428:
	// vsubshs v3,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// addi r7,r1,-272
	ctx.r7.s64 = ctx.r1.s64 + -272;
	// vsubshs v2,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// addi r29,r1,-224
	r29.s64 = ctx.r1.s64 + -224;
	// vor128 v58,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// addi r28,r1,-240
	r28.s64 = ctx.r1.s64 + -240;
	// vaddshs v31,v7,v10
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// addi r26,r1,-256
	r26.s64 = ctx.r1.s64 + -256;
	// vsubshs v30,v0,v3
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vmaxsh v29,v2,v4
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vor128 v57,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vaddshs v2,v31,v25
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vmaxsh v28,v30,v3
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vcmpgtsh v19,v27,v29
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vaddshs v31,v9,v6
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v18,v10,v5
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vcmpgtsh v17,v27,v28
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vandc128 v55,v5,v19
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vand128 v54,v8,v19
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v19.u8)));
	// vaddshs v16,v11,v9
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vandc128 v52,v11,v17
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vand128 v51,v12,v17
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v17.u8)));
	// vxor128 v8,v54,v55
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vandc128 v56,v10,v63
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vandc128 v53,v11,v63
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vxor128 v12,v51,v52
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vaddshs v3,v5,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsubshs v15,v8,v7
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v14,v6,v8
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v30,v12,v11
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v4,v12,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v29,v31,v3
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v28,v15,v3
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v19,v30,v2
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v17,v4,v30
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v15,v12,v7
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v4,v2,v29
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vaddshs v3,v19,v31
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vandc128 v50,v7,v63
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vandc128 v49,v9,v63
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// vaddshs v2,v16,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v31,v18,v3
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v30,v17,v3
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v29,v15,v3
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v19,v14,v4
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsrah v18,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v15,v28,v4
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vand128 v46,v18,v63
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v45,v17,v63
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v44,v16,v63
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vsrah v14,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v4,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v3,v15,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vxor128 v29,v46,v56
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// vxor128 v43,v45,v53
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// vxor128 v42,v44,v50
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// vand128 v40,v4,v63
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v39,v3,v63
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vandc128 v48,v6,v63
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vpkshus128 v4,v58,v43
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v43.s16), simde_mm_load_si128((simde__m128i*)ctx.v58.s16)));
	// vandc128 v47,v5,v63
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vpkshus128 v3,v42,v29
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v42.s16)));
	// vand128 v41,v14,v63
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vxor128 v38,v40,v48
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// vxor128 v37,v39,v47
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// vmrghb v30,v4,v3
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vxor128 v28,v41,v49
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrglb v4,v4,v3
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vpkshus128 v31,v37,v57
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v57.s16), simde_mm_load_si128((simde__m128i*)ctx.v37.s16)));
	// vpkshus128 v2,v28,v38
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v38.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vmrghb v19,v30,v4
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)v30.u8)));
	// vmrglb v18,v30,v4
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)v30.u8)));
	// vmrghb v3,v2,v31
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vmrglb v2,v2,v31
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// stvx128 v19,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v18,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r7,-220(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// vmrghb v17,v3,v2
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrglb v16,v3,v2
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// stvx128 v16,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r22,-256(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// lwz r21,-252(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// stvx128 v17,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r20,-248(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// lwz r18,-272(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// lwz r17,-268(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// lwz r16,-264(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// lwz r15,-260(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// lwz r14,-224(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// stw r18,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r18.u32);
	// lwz r29,-216(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// stw r17,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r17.u32);
	// lwz r28,-212(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -212);
	// stw r16,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r16.u32);
	// stw r15,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r15.u32);
	// stw r14,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r14.u32);
	// stw r7,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r28,0(r30)
	REX_STORE_U32(r30.u32 + 0, r28.u32);
	// lwz r23,-228(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// lwz r19,-244(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// lwz r26,-240(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// lwz r25,-236(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// lwz r24,-232(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// stw r26,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r26.u32);
	// stw r25,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, r25.u32);
	// stw r24,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, r24.u32);
	// stw r23,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, r23.u32);
	// stw r22,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, r22.u32);
	// stw r21,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r21.u32);
	// stw r20,4(r31)
	REX_STORE_U32(r31.u32 + 4, r20.u32);
	// lwz r26,-288(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// stw r19,4(r30)
	REX_STORE_U32(r30.u32 + 4, r19.u32);
	// b 0x823ba600
	goto loc_823BA600;
loc_823BA5F8:
	// vor v28,v9,v9
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v29,v10,v10
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
loc_823BA600:
	// rlwinm r7,r27,0,24,24
	ctx.r7.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r7,128
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 128, ctx.xer);
	// beq cr6,0x823ba6bc
	if (ctx.cr6.eq) goto loc_823BA6BC;
	// vsubshs v3,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vxor128 v36,v21,v26
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)v26.u8)));
	// vsubshs v4,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vmaxsh v4,v4,v3
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vcmpgtsh v2,v27,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vcmpgtsh v31,v4,v13
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vand128 v35,v31,v2
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vand128 v2,v35,v36
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v36.u8)));
	// vcmpequh. v30,v0,v2
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)v30.u16), 0xFFFF);
	// blt cr6,0x823ba6bc
	if (ctx.cr6.lt) goto loc_823BA6BC;
	// vsrah v4,v4,v20
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vspltish v31,15
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_set1_epi16(short(0xF)));
	// addi r7,r1,-192
	ctx.r7.s64 = ctx.r1.s64 + -192;
	// addi r29,r1,-208
	r29.s64 = ctx.r1.s64 + -208;
	// vaddshs v30,v4,v4
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsrah v26,v3,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vand v19,v26,v30
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)v30.u8)));
	// vsubshs v18,v4,v19
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vand v4,v18,v2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vaddshs v17,v29,v4
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsubshs v16,v28,v4
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vpkshus v15,v17,v17
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vpkshus v14,v16,v16
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vmrghb v4,v15,v14
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// vmrghh v3,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmrglh v2,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// stvx128 v3,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r22,-192(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// stvx128 v2,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r29,-180(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// lwz r27,-208(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// lwz r25,-204(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// lwz r24,-200(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// lwz r23,-196(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -196);
	// sth r22,3(r10)
	REX_STORE_U16(ctx.r10.u32 + 3, r22.u16);
	// lwz r7,-188(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// lwz r28,-184(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// sth r7,3(r9)
	REX_STORE_U16(ctx.r9.u32 + 3, ctx.r7.u16);
	// sth r28,3(r6)
	REX_STORE_U16(ctx.r6.u32 + 3, r28.u16);
	// sth r29,3(r5)
	REX_STORE_U16(ctx.r5.u32 + 3, r29.u16);
	// sth r27,3(r4)
	REX_STORE_U16(ctx.r4.u32 + 3, r27.u16);
	// sth r25,3(r3)
	REX_STORE_U16(ctx.r3.u32 + 3, r25.u16);
	// sth r24,3(r31)
	REX_STORE_U16(r31.u32 + 3, r24.u16);
	// sth r23,3(r30)
	REX_STORE_U16(r30.u32 + 3, r23.u16);
loc_823BA6BC:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x823ba7c4
	if (!ctx.cr6.eq) goto loc_823BA7C4;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 + ctx.r8.u64;
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// lvlx128 v34,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r31,r31,r8
	r31.u64 = r31.u64 + ctx.r8.u64;
	// lvlx128 v33,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r30,r30,r8
	r30.u64 = r30.u64 + ctx.r8.u64;
	// lvlx128 v32,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v63,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v59,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v58,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v57,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v12,v34,v58
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvrx128 v56,r11,r6
	temp.u32 = ctx.r11.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v11,v33,v57
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// lvrx128 v55,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v10,v32,v56
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// lvrx128 v54,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v63,v55
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// lvrx128 v53,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v8,v62,v54
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// lvrx128 v52,r11,r31
	temp.u32 = ctx.r11.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v7,v61,v53
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvrx128 v51,r11,r30
	temp.u32 = ctx.r11.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v6,v60,v52
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vor128 v5,v59,v51
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vmrghb v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghh v4,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrghh v3,v11,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrghh v2,v10,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vmrghh v31,v9,v5
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vmrglh v12,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrglh v11,v11,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrglh v10,v10,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vmrglh v9,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vmrghh v8,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vmrghh v7,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vmrglh v6,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vmrglh v5,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vmrghh v4,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrglh v3,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrglh v31,v11,v9
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrghh v2,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrghh v12,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vmrglh v11,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vmrghh v7,v6,v5
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vmrglh v10,v6,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vmrghh v9,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vmrglh v6,v4,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vmrghh v5,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vmrglh v8,v3,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
loc_823BA7C4:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// stw r26,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, r26.u32);
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(r26.s32, 1, ctx.xer);
	// blt cr6,0x823ba2ec
	if (ctx.cr6.lt) goto loc_823BA2EC;
loc_823BA7D4:
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_82416F20) {
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
	ctx.lr = 0x82416F28;
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
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
	// beq cr6,0x82416f5c
	if (ctx.cr6.eq) goto loc_82416F5C;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82413040
	ctx.lr = 0x82416F58;
	sub_82413040(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_82416F5C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82416f78
	if (ctx.cr6.eq) goto loc_82416F78;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413dd0
	ctx.lr = 0x82416F74;
	sub_82413DD0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_82416F78:
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
	// bne 0x82416fe0
	if (!ctx.cr0.eq) goto loc_82416FE0;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x82416fe8
	goto loc_82416FE8;
loc_82416FE0:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_82416FE8:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82417000
	if (ctx.cr6.eq) goto loc_82417000;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc658
	ctx.lr = 0x82417000;
	sub_823DC658(ctx, base);
loc_82417000:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82417210
	if (!ctx.cr6.gt) goto loc_82417210;
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r27,r30,2,0,29
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r29,r27,r28
	r29.u64 = r28.u64 - r27.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lfd f8,-9120(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + -9120);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r28,-32255
	r28.s64 = -2113863680;
	// lis r24,-32255
	r24.s64 = -2113863680;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lfs f9,16288(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16288);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f10,-7224(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -7224);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,17176(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 17176);
	ctx.f11.f64 = double(temp.f32);
	// ori r30,r11,65535
	r30.u64 = ctx.r11.u64 | 65535;
	// lfs f12,-30028(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + -30028);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,21104(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 21104);
	ctx.f7.f64 = double(temp.f32);
loc_82417068:
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
	// lwz r6,92(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
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
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f6,f6
	ctx.f6.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x82417190
	if (ctx.cr6.eq) goto loc_82417190;
	// extsw r9,r6
	ctx.r9.s64 = ctx.r6.s32;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// extsw r28,r5
	r28.s64 = ctx.r5.s32;
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f6,88(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r28,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, r28.u64);
	// lfd f5,96(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// lfs f4,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
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
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
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
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
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
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
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
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
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
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// frsp f30,f5
	f30.f64 = double(float(ctx.f5.f64));
loc_82417190:
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r30.s32, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x824171a0
	if (ctx.cr6.lt) goto loc_824171A0;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_824171A0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824171b8
	if (!ctx.cr6.gt) goto loc_824171B8;
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r30.s32, ctx.xer);
	// blt cr6,0x824171bc
	if (ctx.cr6.lt) goto loc_824171BC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// b 0x824171bc
	goto loc_824171BC;
loc_824171B8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_824171BC:
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r30.s32, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x824171cc
	if (ctx.cr6.lt) goto loc_824171CC;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_824171CC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824171e4
	if (!ctx.cr6.gt) goto loc_824171E4;
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r30.s32, ctx.xer);
	// blt cr6,0x824171e8
	if (ctx.cr6.lt) goto loc_824171E8;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// b 0x824171e8
	goto loc_824171E8;
loc_824171E4:
	// li r6,0
	ctx.r6.s64 = 0;
loc_824171E8:
	// rlwinm r11,r6,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// stwux r11,r29,r27
	ea = r29.u32 + r27.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r29.u32 = ea;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82417068
	if (ctx.cr6.lt) goto loc_82417068;
loc_82417210:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8241F2C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8241F2D0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8241f30c
	if (!ctx.cr6.eq) goto loc_8241F30C;
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
	// li r7,1521
	ctx.r7.s64 = 1521;
	// bl 0x8240e308
	ctx.lr = 0x8241F30C;
	sub_8240E308(ctx, base);
loc_8241F30C:
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240e810
	ctx.lr = 0x8241F318;
	sub_8240E810(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8241f37c
	if (!ctx.cr6.eq) goto loc_8241F37C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8241f33c
	if (ctx.cr6.eq) goto loc_8241F33C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8240e930
	ctx.lr = 0x8241F33C;
	sub_8240E930(ctx, base);
loc_8241F33C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8241f374
	if (ctx.cr6.eq) goto loc_8241F374;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8241f374
	if (ctx.cr6.eq) goto loc_8241F374;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,11440
	ctx.r11.s64 = ctx.r11.s64 + 11440;
	// addi r4,r10,-18888
	ctx.r4.s64 = ctx.r10.s64 + -18888;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,22
	ctx.r6.s64 = 22;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,88(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// bctrl 
	ctx.lr = 0x8241F374;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8241F374:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8241f3d4
	goto loc_8241F3D4;
loc_8241F37C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8241f398
	if (ctx.cr6.eq) goto loc_8241F398;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8240e930
	ctx.lr = 0x8241F398;
	sub_8240E930(ctx, base);
loc_8241F398:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8241f3d0
	if (ctx.cr6.eq) goto loc_8241F3D0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8241f3d0
	if (ctx.cr6.eq) goto loc_8241F3D0;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,11440
	ctx.r11.s64 = ctx.r11.s64 + 11440;
	// addi r4,r10,-18888
	ctx.r4.s64 = ctx.r10.s64 + -18888;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,22
	ctx.r6.s64 = 22;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,88(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// bctrl 
	ctx.lr = 0x8241F3D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8241F3D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241F3D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82421578) {
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
	ctx.lr = 0x82421580;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,16880
	r29.s64 = ctx.r11.s64 + 16880;
	// addi r28,r10,-18872
	r28.s64 = ctx.r10.s64 + -18872;
	// bne cr6,0x824215c8
	if (!ctx.cr6.eq) goto loc_824215C8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,16968
	ctx.r5.s64 = ctx.r11.s64 + 16968;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,3754
	ctx.r7.s64 = 3754;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x824215C8;
	sub_8240E308(ctx, base);
loc_824215C8:
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240e810
	ctx.lr = 0x824215D4;
	sub_8240E810(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x824215f0
	if (!ctx.cr6.eq) goto loc_824215F0;
	// li r4,166
	ctx.r4.s64 = 166;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82412bf8
	ctx.lr = 0x824215E8;
	sub_82412BF8(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// b 0x824215fc
	goto loc_824215FC;
loc_824215F0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
loc_824215FC:
	// li r4,170
	ctx.r4.s64 = 170;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240e810
	ctx.lr = 0x82421608;
	sub_8240E810(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8242162c
	if (ctx.cr6.eq) goto loc_8242162C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-18704
	ctx.r5.s64 = ctx.r11.s64 + -18704;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,3767
	ctx.r7.s64 = 3767;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x8242162C;
	sub_8240E308(ctx, base);
loc_8242162C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82421670
	if (ctx.cr6.eq) goto loc_82421670;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82421670
	if (ctx.cr6.eq) goto loc_82421670;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8241e418
	ctx.lr = 0x82421648;
	sub_8241E418(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// addi r11,r11,11440
	ctx.r11.s64 = ctx.r11.s64 + 11440;
	// addi r4,r10,-18752
	ctx.r4.s64 = ctx.r10.s64 + -18752;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,26
	ctx.r6.s64 = 26;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,104(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// bctrl 
	ctx.lr = 0x82421670;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82421670:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82426DD8) {
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
	ctx.lr = 0x82426DE0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82426DFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82426e54
	if (!ctx.cr6.eq) goto loc_82426E54;
	// lwz r27,20(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82412d18
	ctx.lr = 0x82426E2C;
	sub_82412D18(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x82426e48
	if (ctx.cr0.eq) goto loc_82426E48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x82422888
	ctx.lr = 0x82426E44;
	sub_82422888(ctx, base);
	// b 0x82426e4c
	goto loc_82426E4C;
loc_82426E48:
	// li r30,0
	r30.s64 = 0;
loc_82426E4C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stwx r30,r11,r29
	REX_STORE_U32(ctx.r11.u32 + r29.u32, r30.u32);
loc_82426E54:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r30,r11,r29
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82426ae8
	ctx.lr = 0x82426E68;
	sub_82426AE8(ctx, base);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82426e84
	if (!ctx.cr6.gt) goto loc_82426E84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82426b98
	ctx.lr = 0x82426E84;
	sub_82426B98(ctx, base);
loc_82426E84:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82428EB8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-2928
	ctx.r3.s64 = ctx.r11.s64 + -2928;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82428FC8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-2232
	ctx.r3.s64 = ctx.r11.s64 + -2232;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82429218) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-1776
	ctx.r3.s64 = ctx.r11.s64 + -1776;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82429338) {
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
	// li r4,135
	ctx.r4.s64 = 135;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82428a88
	ctx.lr = 0x8242935C;
	sub_82428A88(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-1528
	ctx.r11.s64 = ctx.r11.s64 + -1528;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// ori r11,r11,24
	ctx.r11.u64 = ctx.r11.u64 | 24;
	// stw r11,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// lwz r3,2736(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 2736);
	// bl 0x824228e0
	ctx.lr = 0x82429390;
	sub_824228E0(ctx, base);
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

DEFINE_REX_FUNC(sub_8242A008) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8242A010;
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
	ctx.lr = 0x8242A030;
	sub_82412D18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// beq 0x8242a054
	if (ctx.cr0.eq) goto loc_8242A054;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82428218
	ctx.lr = 0x8242A050;
	sub_82428218(ctx, base);
	// b 0x8242a058
	goto loc_8242A058;
loc_8242A054:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8242A058:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8242C5C8) {
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
	// bl 0x8242c4b8
	ctx.lr = 0x8242C5E8;
	sub_8242C4B8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8242c5f8
	if (ctx.cr0.eq) goto loc_8242C5F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x8242C5F8;
	sub_82473600(ctx, base);
loc_8242C5F8:
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

DEFINE_REX_FUNC(sub_8242D278) {
	REX_FUNC_PROLOGUE();
	// li r10,16
	ctx.r10.s64 = 16;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r10,216(r3)
	REX_STORE_U32(ctx.r3.u32 + 216, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// stw r11,208(r3)
	REX_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r11,212(r3)
	REX_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_8242D2A4:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// bdnz 0x8242d2a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242D2A4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8242E5A0) {
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
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8242E5C8:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stwu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242e5c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242E5C8;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x8242d278
	ctx.lr = 0x8242E5E4;
	sub_8242D278(ctx, base);
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

DEFINE_REX_FUNC(sub_82431B78) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
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
	// lfs f0,21052(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 21052);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,32(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f13,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f10,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,16(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,20(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// bne cr6,0x82431c98
	if (!ctx.cr6.eq) goto loc_82431C98;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r8,24
	ctx.r8.s64 = 24;
	// li r9,216
	ctx.r9.s64 = 216;
loc_82431BE4:
	// lhz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// std r4,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f7,f0
	ctx.f7.f64 = double(ctx.f0.s64);
	// frsp f0,f7
	ctx.f0.f64 = double(float(ctx.f7.f64));
	// dcbt r10,r8
	// dcbt r11,r9
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82431c5c
	if (ctx.cr6.eq) goto loc_82431C5C;
	// lfs f7,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f0,f13,f7
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f7.f64)));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f5,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f5.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f4,f0,f12,f5
	ctx.f4.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f5.f64)));
	// stfs f4,0(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f3,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f3.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f2,f0,f11,f3
	ctx.f2.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f3.f64)));
	// stfs f2,0(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f7,f0,f10,f1
	ctx.f7.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f1.f64)));
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f6,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f6.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f5,f0,f9,f6
	ctx.f5.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f6.f64)));
	// stfs f5,0(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f4,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f4.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f3,f0,f8,f4
	ctx.f3.f64 = double(float(std::fma(ctx.f0.f64, ctx.f8.f64, ctx.f4.f64)));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x82431c8c
	goto loc_82431C8C;
loc_82431C5C:
	// fmuls f7,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f6,f0,f12
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfsu f6,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmuls f5,f0,f11
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfsu f5,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmuls f4,f0,f10
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfsu f4,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmuls f3,f0,f9
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfsu f3,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmuls f2,f0,f8
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stfsu f2,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
loc_82431C8C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82431be4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82431BE4;
	// blr 
	return;
loc_82431C98:
	// lfs f7,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f6,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f5,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f3,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f2,20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r8,24
	ctx.r8.s64 = 24;
	// li r9,216
	ctx.r9.s64 = 216;
loc_82431CDC:
	// lhz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// std r4,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// dcbt r10,r8
	// dcbt r11,r9
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82431d54
	if (ctx.cr6.eq) goto loc_82431D54;
	// lfs f1,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f1,f0,f13,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f1.f64)));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f1,f0,f12,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f1.f64)));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f1,f0,f11,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f1.f64)));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f1,f0,f10,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f1.f64)));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f1,f0,f9,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f1.f64)));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f0,f0,f8,f1
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f8.f64, ctx.f1.f64)));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x82431d84
	goto loc_82431D84;
loc_82431D54:
	// fmuls f1,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmuls f1,f0,f11
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmuls f1,f0,f10
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmuls f1,f0,f9
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
loc_82431D84:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fadds f13,f7,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// fadds f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// fadds f11,f5,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// fadds f10,f4,f10
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// fadds f9,f3,f9
	ctx.f9.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// fadds f8,f2,f8
	ctx.f8.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// bdnz 0x82431cdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82431CDC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8243ADF0) {
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
	ctx.lr = 0x8243ADF8;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,4
	r29.s64 = ctx.r3.s64 + 4;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82444d90
	ctx.lr = 0x8243AE18;
	sub_82444D90(ctx, base);
	// rlwinm. r11,r30,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r27,1030(r31)
	r27.u64 = REX_LOAD_U16(r31.u32 + 1030);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r28,1048(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 1048);
	// beq 0x8243ae70
	if (ctx.cr0.eq) goto loc_8243AE70;
	// lwz r11,88(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243ae40
	if (ctx.cr6.eq) goto loc_8243AE40;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8243ae44
	goto loc_8243AE44;
loc_8243AE40:
	// lwz r10,100(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 100);
loc_8243AE44:
	// clrlwi r27,r10,16
	r27.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243ae58
	if (ctx.cr6.eq) goto loc_8243AE58;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8243ae6c
	goto loc_8243AE6C;
loc_8243AE58:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243AE6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243AE6C:
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_8243AE70:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8243aee0
	if (ctx.cr6.lt) goto loc_8243AEE0;
	// addi r3,r31,1028
	ctx.r3.s64 = r31.s64 + 1028;
	// lwz r30,108(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 108);
	// bl 0x8243a300
	ctx.lr = 0x8243AE84;
	sub_8243A300(ctx, base);
	// lhz r8,1042(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 1042);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r11,128
	ctx.r11.s64 = 128;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// sth r11,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8243aaa0
	ctx.lr = 0x8243AEB0;
	sub_8243AAA0(ctx, base);
	// lwz r11,88(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 88);
	// addi r8,r26,180
	ctx.r8.s64 = r26.s64 + 180;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,180(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243AEDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8243AEE0:
	// li r23,0
	r23.s64 = 0;
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r23,128(r1)
	REX_STORE_U16(ctx.r1.u32 + 128, r23.u16);
	// addi r3,r1,130
	ctx.r3.s64 = ctx.r1.s64 + 130;
	// bl 0x822d5870
	ctx.lr = 0x8243AEF8;
	sub_822D5870(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8243b358
	if (ctx.cr6.lt) goto loc_8243B358;
	// li r31,40
	r31.s64 = 40;
	// lwz r3,180(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 180);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243AF24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// beq cr6,0x8243af48
	if (ctx.cr6.eq) goto loc_8243AF48;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8243ad48
	ctx.lr = 0x8243AF48;
	sub_8243AD48(ctx, base);
loc_8243AF48:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r10,375
	ctx.r10.s64 = 375;
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r11,r11,187
	ctx.r11.s64 = ctx.r11.s64 + 187;
	// divwu r10,r11,r10
	ctx.r10.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// mulli r10,r10,375
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(375));
	// lwz r9,104(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 104);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r4,r10,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8243AF78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8243b350
	if (ctx.cr0.lt) goto loc_8243B350;
	// lwz r11,164(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8243afa4
	if (!ctx.cr6.eq) goto loc_8243AFA4;
	// lwz r11,88(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243afa0
	if (ctx.cr6.eq) goto loc_8243AFA0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8243afa4
	goto loc_8243AFA4;
loc_8243AFA0:
	// lwz r11,160(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 160);
loc_8243AFA4:
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// lwz r11,168(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243afbc
	if (ctx.cr6.eq) goto loc_8243AFBC;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// b 0x8243aff4
	goto loc_8243AFF4;
loc_8243AFBC:
	// lwz r11,88(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243afd0
	if (ctx.cr6.eq) goto loc_8243AFD0;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x8243aff0
	goto loc_8243AFF0;
loc_8243AFD0:
	// lwz r3,172(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 172);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8243aff0
	if (!ctx.cr6.eq) goto loc_8243AFF0;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243AFF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243AFF0:
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8243AFF4:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8243a300
	ctx.lr = 0x8243AFFC;
	sub_8243A300(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
	// lwz r11,88(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 88);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r24,r10,27,31,31
	r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// beq cr6,0x8243b020
	if (ctx.cr6.eq) goto loc_8243B020;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8243b024
	goto loc_8243B024;
loc_8243B020:
	// lwz r10,100(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 100);
loc_8243B024:
	// lhz r9,130(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 130);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8243b060
	if (!ctx.cr6.eq) goto loc_8243B060;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243b040
	if (ctx.cr6.eq) goto loc_8243B040;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8243b054
	goto loc_8243B054;
loc_8243B040:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243B054;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243B054:
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8243b130
	if (ctx.cr6.eq) goto loc_8243B130;
loc_8243B060:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x8243b130
	if (!ctx.cr6.eq) goto loc_8243B130;
	// lwz r11,88(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 88);
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r5,130(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 130);
	// addi r3,r11,604
	ctx.r3.s64 = ctx.r11.s64 + 604;
	// lwz r6,148(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r7,108(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 108);
	// bl 0x824348a8
	ctx.lr = 0x8243B084;
	sub_824348A8(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne 0x8243b098
	if (!ctx.cr0.eq) goto loc_8243B098;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x8243b3d4
	goto loc_8243B3D4;
loc_8243B098:
	// lwz r11,164(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 164);
	// lwz r28,4(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8243b0c0
	if (!ctx.cr6.eq) goto loc_8243B0C0;
	// lwz r11,88(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243b0bc
	if (ctx.cr6.eq) goto loc_8243B0BC;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8243b0c0
	goto loc_8243B0C0;
loc_8243B0BC:
	// lwz r11,160(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 160);
loc_8243B0C0:
	// lwz r7,168(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 168);
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8243b108
	if (!ctx.cr6.eq) goto loc_8243B108;
	// lwz r11,88(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243b0e4
	if (ctx.cr6.eq) goto loc_8243B0E4;
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x8243b108
	goto loc_8243B108;
loc_8243B0E4:
	// lwz r7,172(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 172);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8243b108
	if (!ctx.cr6.eq) goto loc_8243B108;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243B104;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_8243B108:
	// addi r10,r26,188
	ctx.r10.s64 = r26.s64 + 188;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82443770
	ctx.lr = 0x8243B128;
	sub_82443770(ctx, base);
	// lwz r27,188(r26)
	r27.u64 = REX_LOAD_U32(r26.u32 + 188);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8243B130:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8243b358
	if (ctx.cr6.lt) goto loc_8243B358;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// stw r23,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// beq cr6,0x8243b22c
	if (ctx.cr6.eq) goto loc_8243B22C;
	// bl 0x8242f3d0
	ctx.lr = 0x8243B14C;
	sub_8242F3D0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8243b350
	if (ctx.cr0.lt) goto loc_8243B350;
	// stw r23,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r23.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r23,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r23.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r4,r10,-6500
	ctx.r4.s64 = ctx.r10.s64 + -6500;
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243B188;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243B1A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243B1B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,88(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 88);
	// lwz r11,168(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r27,4(r25)
	r27.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwz r30,180(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 180);
	// bne cr6,0x8243b208
	if (!ctx.cr6.eq) goto loc_8243B208;
	// lwz r11,88(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243b1e4
	if (ctx.cr6.eq) goto loc_8243B1E4;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x8243b208
	goto loc_8243B208;
loc_8243B1E4:
	// lwz r11,172(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8243b208
	if (!ctx.cr6.eq) goto loc_8243B208;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243B204;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8243B208:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r9,4919
	ctx.r9.s64 = 322371584;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// ori r28,r9,61441
	r28.u64 = ctx.r9.u64 | 61441;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,48(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x8243b25c
	goto loc_8243B25C;
loc_8243B22C:
	// bl 0x8242f2b0
	ctx.lr = 0x8243B230;
	sub_8242F2B0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8243b350
	if (ctx.cr0.lt) goto loc_8243B350;
	// lwz r11,88(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 88);
	// lis r10,4919
	ctx.r10.s64 = 322371584;
	// lwz r6,4(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// ori r28,r10,61441
	r28.u64 = ctx.r10.u64 | 61441;
	// lwz r3,180(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8243B25C:
	// addi r31,r26,184
	r31.s64 = r26.s64 + 184;
	// lwz r7,180(r26)
	ctx.r7.u64 = REX_LOAD_U32(r26.u32 + 180);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x8243B274;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
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
	ctx.lr = 0x8243B290;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8243b358
	if (ctx.cr6.lt) goto loc_8243B358;
	// lwz r11,188(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243b2c0
	if (ctx.cr6.eq) goto loc_8243B2C0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243B2BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8243B2C0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8243b358
	if (ctx.cr6.lt) goto loc_8243B358;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243B2E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8243b350
	if (ctx.cr0.lt) goto loc_8243B350;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82443200
	ctx.lr = 0x8243B2F4;
	sub_82443200(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8243b350
	if (ctx.cr0.lt) goto loc_8243B350;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243B314;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243B328;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8243b350
	if (ctx.cr0.lt) goto loc_8243B350;
	// lwz r11,88(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 88);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,180(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243B34C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8243B350:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8243b3d4
	if (ctx.cr6.eq) goto loc_8243B3D4;
loc_8243B358:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8243b3d4
	if (ctx.cr6.eq) goto loc_8243B3D4;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16385
	ctx.r11.u64 = ctx.r11.u64 | 16385;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8243b3d4
	if (ctx.cr6.eq) goto loc_8243B3D4;
	// srawi r11,r30,16
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = r30.s32 >> 16;
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmpwi cr6,r11,2198
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2198, ctx.xer);
	// beq cr6,0x8243b3d4
	if (ctx.cr6.eq) goto loc_8243B3D4;
	// lis r11,-30600
	ctx.r11.s64 = -2005401600;
	// ori r11,r11,120
	ctx.r11.u64 = ctx.r11.u64 | 120;
	// subf. r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8243b3cc
	if (ctx.cr0.eq) goto loc_8243B3CC;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x8243b3cc
	if (ctx.cr6.eq) goto loc_8243B3CC;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// ori r10,r10,65417
	ctx.r10.u64 = ctx.r10.u64 | 65417;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8243b3cc
	if (ctx.cr6.eq) goto loc_8243B3CC;
	// lis r10,30
	ctx.r10.s64 = 1966080;
	// ori r10,r10,65417
	ctx.r10.u64 = ctx.r10.u64 | 65417;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8243b3d4
	if (!ctx.cr6.eq) goto loc_8243B3D4;
	// lis r30,-30570
	r30.s64 = -2003435520;
	// ori r30,r30,3
	r30.u64 = r30.u64 | 3;
	// b 0x8243b3d4
	goto loc_8243B3D4;
loc_8243B3CC:
	// lis r30,-30570
	r30.s64 = -2003435520;
	// ori r30,r30,4
	r30.u64 = r30.u64 | 4;
loc_8243B3D4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_82456240) {
	REX_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x82456254
	if (!ctx.cr6.eq) goto loc_82456254;
	// b 0x82454260
	sub_82454260(ctx, base);
	return;
loc_82456254:
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// bne cr6,0x82456260
	if (!ctx.cr6.eq) goto loc_82456260;
	// b 0x82454fc0
	sub_82454FC0(ctx, base);
	return;
loc_82456260:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8245626c
	if (!ctx.cr6.eq) goto loc_8245626C;
	// b 0x82454f18
	sub_82454F18(ctx, base);
	return;
loc_8245626C:
	// b 0x824555a0
	sub_824555A0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82456990) {
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
	ctx.lr = 0x82456998;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x824563e0
	ctx.lr = 0x824569A8;
	sub_824563E0(ctx, base);
	// addis r29,r30,3
	r29.s64 = r30.s64 + 196608;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// addi r29,r29,23248
	r29.s64 = r29.s64 + 23248;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d5870
	ctx.lr = 0x824569C0;
	sub_822D5870(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r7,r11,36
	ctx.r7.u64 = ctx.r11.u64 | 36;
	// addis r11,r30,5
	ctx.r11.s64 = r30.s64 + 327680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addis r28,r30,5
	r28.s64 = r30.s64 + 327680;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r6,r10,40
	ctx.r6.u64 = ctx.r10.u64 | 40;
	// addi r11,r11,23296
	ctx.r11.s64 = ctx.r11.s64 + 23296;
	// addi r28,r28,23344
	r28.s64 = r28.s64 + 23344;
	// lfs f31,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f31.f64 = double(temp.f32);
	// li r31,0
	r31.s64 = 0;
	// stfsx f31,r29,r7
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + ctx.r7.u32, temp.u32);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// stfsx f31,r29,r6
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + ctx.r6.u32, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stwx r31,r29,r8
	REX_STORE_U32(r29.u32 + ctx.r8.u32, r31.u32);
	// stfs f31,16(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f31,28(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// bl 0x822d5870
	ctx.lr = 0x82456A14;
	sub_822D5870(ctx, base);
	// addis r29,r30,5
	r29.s64 = r30.s64 + 327680;
	// stfs f31,2088(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 2088, temp.u32);
	// li r5,512
	ctx.r5.s64 = 512;
	// stfs f31,2092(r28)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 2092, temp.u32);
	// addi r29,r29,25456
	r29.s64 = r29.s64 + 25456;
	// stfs f31,2096(r28)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 2096, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,2048(r28)
	REX_STORE_U32(r28.u32 + 2048, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d5870
	ctx.lr = 0x82456A3C;
	sub_822D5870(ctx, base);
	// lwz r10,520(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 520);
	// addis r28,r30,5
	r28.s64 = r30.s64 + 327680;
	// stfs f31,532(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 532, temp.u32);
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// stw r31,512(r29)
	REX_STORE_U32(r29.u32 + 512, r31.u32);
	// addi r28,r28,26000
	r28.s64 = r28.s64 + 26000;
	// clrlwi r8,r9,25
	ctx.r8.u64 = ctx.r9.u32 & 0x7F;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,516(r29)
	REX_STORE_U32(r29.u32 + 516, ctx.r8.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822d5870
	ctx.lr = 0x82456A6C;
	sub_822D5870(ctx, base);
	// addis r29,r30,6
	r29.s64 = r30.s64 + 393216;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// stfs f31,8232(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 8232, temp.u32);
	// addi r29,r29,-31280
	r29.s64 = r29.s64 + -31280;
	// stfs f31,8236(r28)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 8236, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f31,8240(r28)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 8240, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r31,8192(r28)
	REX_STORE_U32(r28.u32 + 8192, r31.u32);
	// bl 0x822d5870
	ctx.lr = 0x82456A94;
	sub_822D5870(ctx, base);
	// lwz r7,1032(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 1032);
	// addis r28,r30,6
	r28.s64 = r30.s64 + 393216;
	// stfs f31,1044(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 1044, temp.u32);
	// neg r6,r7
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// stw r31,1024(r29)
	REX_STORE_U32(r29.u32 + 1024, r31.u32);
	// addi r28,r28,-30224
	r28.s64 = r28.s64 + -30224;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,1028(r29)
	REX_STORE_U32(r29.u32 + 1028, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822d5870
	ctx.lr = 0x82456AC4;
	sub_822D5870(ctx, base);
	// addis r29,r30,6
	r29.s64 = r30.s64 + 393216;
	// lwz r10,2056(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 2056);
	// stfs f31,2068(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 2068, temp.u32);
	// addi r29,r29,-28144
	r29.s64 = r29.s64 + -28144;
	// stw r31,2048(r28)
	REX_STORE_U32(r28.u32 + 2048, r31.u32);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// clrlwi r8,r9,23
	ctx.r8.u64 = ctx.r9.u32 & 0x1FF;
	// stw r8,2052(r28)
	REX_STORE_U32(r28.u32 + 2052, ctx.r8.u32);
	// bl 0x822d5870
	ctx.lr = 0x82456AF4;
	sub_822D5870(ctx, base);
	// addis r28,r30,6
	r28.s64 = r30.s64 + 393216;
	// stfs f31,4116(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 4116, temp.u32);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stfs f31,4120(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 4120, temp.u32);
	// addi r28,r28,-24016
	r28.s64 = r28.s64 + -24016;
	// stw r31,4096(r29)
	REX_STORE_U32(r29.u32 + 4096, r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822d5870
	ctx.lr = 0x82456B18;
	sub_822D5870(ctx, base);
	// lwz r7,2056(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 2056);
	// addis r30,r30,6
	r30.s64 = r30.s64 + 393216;
	// stfs f31,2068(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 2068, temp.u32);
	// neg r6,r7
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// stw r31,2048(r28)
	REX_STORE_U32(r28.u32 + 2048, r31.u32);
	// addi r30,r30,-21936
	r30.s64 = r30.s64 + -21936;
	// clrlwi r11,r6,23
	ctx.r11.u64 = ctx.r6.u32 & 0x1FF;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,2052(r28)
	REX_STORE_U32(r28.u32 + 2052, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d5870
	ctx.lr = 0x82456B48;
	sub_822D5870(ctx, base);
	// lwz r10,2056(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 2056);
	// stfs f31,2068(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 2068, temp.u32);
	// stw r31,2048(r30)
	REX_STORE_U32(r30.u32 + 2048, r31.u32);
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// clrlwi r8,r9,23
	ctx.r8.u64 = ctx.r9.u32 & 0x1FF;
	// stw r8,2052(r30)
	REX_STORE_U32(r30.u32 + 2052, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8245EBF0) {
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
	ctx.lr = 0x8245EBF8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245EC18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8245ec3c
	if (!ctx.cr6.eq) goto loc_8245EC3C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8245ec3c
	if (!ctx.cr6.eq) goto loc_8245EC3C;
	// lwz r3,148(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 148);
	// bl 0x82474d40
	ctx.lr = 0x8245EC38;
	sub_82474D40(ctx, base);
	// b 0x8245eca8
	goto loc_8245ECA8;
loc_8245EC3C:
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
	ctx.lr = 0x8245EC58;
	sub_8242C3B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8245ec6c
	if (!ctx.cr0.eq) goto loc_8245EC6C;
	// lis r28,-32761
	r28.s64 = -2147024896;
	// ori r28,r28,14
	r28.u64 = r28.u64 | 14;
	// b 0x8245eca8
	goto loc_8245ECA8;
loc_8245EC6C:
	// addic r11,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	ctx.r11.s64 = r29.s64 + -1;
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// subfe r11,r11,r29
	temp.u8 = (~ctx.r11.u32 + r29.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r29.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r9,r30,4
	ctx.r9.s64 = r30.s64 + 4;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// bl 0x8245f9d8
	ctx.lr = 0x8245EC98;
	sub_8245F9D8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bge 0x8245eca8
	if (!ctx.cr0.lt) goto loc_8245ECA8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x8245ECA8;
	sub_82473600(ctx, base);
loc_8245ECA8:
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245ECBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82460740) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r10,r10,31316
	ctx.r10.s64 = ctx.r10.s64 + 31316;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,31456
	ctx.r9.s64 = ctx.r9.s64 + 31456;
	// addi r8,r8,31412
	ctx.r8.s64 = ctx.r8.s64 + 31412;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r10,r7,9620
	ctx.r10.s64 = ctx.r7.s64 + 9620;
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stw r5,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
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
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// std r11,88(r3)
	REX_STORE_U64(ctx.r3.u32 + 88, ctx.r11.u64);
	// stw r11,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824638E0) {
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
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822d5870
	ctx.lr = 0x82463900;
	sub_822D5870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8247a060
	ctx.lr = 0x82463908;
	sub_8247A060(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x823dafc8
	ctx.lr = 0x82463910;
	sub_823DAFC8(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x823dafc8
	ctx.lr = 0x82463918;
	sub_823DAFC8(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x823dafc8
	ctx.lr = 0x82463920;
	sub_823DAFC8(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x823dafc8
	ctx.lr = 0x82463928;
	sub_823DAFC8(ctx, base);
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

DEFINE_REX_FUNC(sub_82464DB0) {
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
	ctx.lr = 0x82464DB8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 548);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lhz r25,34(r3)
	r25.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82464e74
	if (ctx.cr6.eq) goto loc_82464E74;
	// li r26,1
	r26.s64 = 1;
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// blt cr6,0x82464e60
	if (ctx.cr6.lt) goto loc_82464E60;
	// li r30,4
	r30.s64 = 4;
loc_82464DE4:
	// cmpwi cr6,r26,6
	ctx.cr6.compare<int32_t>(r26.s32, 6, ctx.xer);
	// ble cr6,0x82464e30
	if (!ctx.cr6.gt) goto loc_82464E30;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x82464e30
	if (!ctx.cr6.gt) goto loc_82464E30;
	// mr r31,r27
	r31.u64 = r27.u64;
	// mr r28,r26
	r28.u64 = r26.u64;
loc_82464DFC:
	// lwz r11,548(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 548);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82464e24
	if (ctx.cr6.eq) goto loc_82464E24;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82460ee8
	ctx.lr = 0x82464E18;
	sub_82460EE8(ctx, base);
	// lwz r11,548(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 548);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// stwx r27,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, r27.u32);
loc_82464E24:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x82464dfc
	if (!ctx.cr0.eq) goto loc_82464DFC;
loc_82464E30:
	// lwz r11,548(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 548);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82464e50
	if (ctx.cr6.eq) goto loc_82464E50;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82460ee8
	ctx.lr = 0x82464E48;
	sub_82460EE8(ctx, base);
	// lwz r11,548(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 548);
	// stwx r27,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r27.u32);
loc_82464E50:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(r26.s32, r25.s32, ctx.xer);
	// ble cr6,0x82464de4
	if (!ctx.cr6.gt) goto loc_82464DE4;
loc_82464E60:
	// lwz r3,548(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 548);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82464e74
	if (ctx.cr6.eq) goto loc_82464E74;
	// bl 0x82460ee8
	ctx.lr = 0x82464E70;
	sub_82460EE8(ctx, base);
	// stw r27,548(r29)
	REX_STORE_U32(r29.u32 + 548, r27.u32);
loc_82464E74:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82469B98) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// subf r9,r11,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r11.u64;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r6,28(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// and r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 & ctx.r9.u64;
	// and r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 & ctx.r9.u64;
	// srw r11,r5,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r8.u8 & 0x3F));
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82469be4
	if (ctx.cr6.eq) goto loc_82469BE4;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwzx r6,r10,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r11,r7,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// mullw r10,r6,r9
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
loc_82469BE4:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,1
	ctx.r7.s64 = 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// slw r6,r7,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf r4,r10,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r10.u64;
	// mullw r3,r4,r9
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// divw r11,r3,r6
	ctx.r11.u64 = uint32_t((ctx.r6.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r3.s32 / ctx.r6.s32 : 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8246C820) {
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
	ctx.lr = 0x8246C828;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r22,r28
	r22.u64 = r28.u64;
	// lhz r10,34(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 34);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8246c860
	if (ctx.cr6.lt) goto loc_8246C860;
loc_8246C850:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
loc_8246C860:
	// lwz r10,120(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 120);
	// mulli r11,r11,152
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(152));
	// stwx r28,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r28.u32);
	// lhz r9,34(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 34);
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r5,r9,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x822d5870
	ctx.lr = 0x8246C884;
	sub_822D5870(ctx, base);
	// lwz r8,92(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 92);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bgt cr6,0x8246c8f4
	if (ctx.cr6.gt) goto loc_8246C8F4;
	// lhz r11,34(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 34);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8246c8e8
	if (ctx.cr6.eq) goto loc_8246C8E8;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// li r25,1
	r25.s64 = 1;
loc_8246C8AC:
	// lwz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addic r5,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// subfe r4,r5,r8
	temp.u8 = (~ctx.r5.u32 + ctx.r8.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stwx r4,r6,r10
	REX_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r4.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r25,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r25.u32);
	// lhz r3,34(r30)
	ctx.r3.u64 = REX_LOAD_U16(r30.u32 + 34);
	// cmpw cr6,r7,r3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8246c8ac
	if (ctx.cr6.lt) goto loc_8246C8AC;
loc_8246C8E8:
	// lwz r11,92(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 92);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x8246c98c
	goto loc_8246C98C;
loc_8246C8F4:
	// lhz r11,580(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 580);
	// mr r23,r28
	r23.u64 = r28.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8246c98c
	if (!ctx.cr6.gt) goto loc_8246C98C;
	// mr r24,r28
	r24.u64 = r28.u64;
	// li r25,1
	r25.s64 = 1;
loc_8246C910:
	// lwz r11,584(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 584);
	// lwz r26,8(r29)
	r26.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lhzx r10,r24,r11
	ctx.r10.u64 = REX_LOAD_U16(r24.u32 + ctx.r11.u32);
	// extsh r28,r10
	r28.s64 = ctx.r10.s16;
	// rlwinm r27,r28,3,0,28
	r27.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r27,r26
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + r26.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8246c974
	if (!ctx.cr6.eq) goto loc_8246C974;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,224
	ctx.r3.s64 = r29.s64 + 224;
	// bl 0x824658f8
	ctx.lr = 0x8246C940;
	sub_824658F8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246c998
	if (ctx.cr6.lt) goto loc_8246C998;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8246c974
	if (!ctx.cr6.eq) goto loc_8246C974;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r25,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r25.u32);
	// stwx r25,r27,r26
	REX_STORE_U32(r27.u32 + r26.u32, r25.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
loc_8246C974:
	// lhz r11,580(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 580);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r24,r24,2
	r24.s64 = r24.s64 + 2;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r23,r10
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8246c910
	if (ctx.cr6.lt) goto loc_8246C910;
loc_8246C98C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x8246c850
	if (ctx.cr6.lt) goto loc_8246C850;
loc_8246C998:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82472B70) {
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
	ctx.lr = 0x82472B78;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82472e14
	if (ctx.cr6.eq) goto loc_82472E14;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82472e14
	if (ctx.cr6.eq) goto loc_82472E14;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,14
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 14, ctx.xer);
	// blt cr6,0x82472e0c
	if (ctx.cr6.lt) goto loc_82472E0C;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// clrlwi r20,r7,16
	r20.u64 = ctx.r7.u32 & 0xFFFF;
	// lfs f0,21052(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 21052);
	ctx.f0.f64 = double(temp.f32);
	// addi r21,r11,-1840
	r21.s64 = ctx.r11.s64 + -1840;
	// addi r23,r10,-1868
	r23.s64 = ctx.r10.s64 + -1868;
	// addi r22,r9,-1896
	r22.s64 = ctx.r9.s64 + -1896;
loc_82472BB8:
	// cmplw cr6,r4,r20
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r20.u32, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x82472bc8
	if (ctx.cr6.lt) goto loc_82472BC8;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_82472BC8:
	// lbz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// addic. r6,r11,-14
	ctx.xer.ca = ctx.r11.u32 > 13;
	ctx.r6.s64 = ctx.r11.s64 + -14;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lbzu r10,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// subf r4,r11,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r11.u64;
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// rotlwi r18,r10,2
	r18.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lbzu r29,1(r3)
	ea = 1 + ctx.r3.u32;
	r29.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// lwzx r25,r8,r22
	r25.u64 = REX_LOAD_U32(ctx.r8.u32 + r22.u32);
	// lwzx r24,r8,r23
	r24.u64 = REX_LOAD_U32(ctx.r8.u32 + r23.u32);
	// lwzx r26,r18,r23
	r26.u64 = REX_LOAD_U32(r18.u32 + r23.u32);
	// lbz r7,1(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// lbzu r30,2(r3)
	ea = 2 + ctx.r3.u32;
	r30.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + r29.u64;
	// lbz r10,1(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// lbzu r11,2(r3)
	ea = 2 + ctx.r3.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// rotlwi r31,r10,8
	r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lbz r9,1(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// lbzu r28,2(r3)
	ea = 2 + ctx.r3.u32;
	r28.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// rotlwi r8,r9,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r8,1(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lbzu r9,2(r3)
	ea = 2 + ctx.r3.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// rotlwi r27,r8,8
	r27.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// std r10,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r10.u64);
	// lfd f13,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lbz r11,1(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// add r8,r27,r28
	ctx.r8.u64 = r27.u64 + r28.u64;
	// lbzu r10,2(r3)
	ea = 2 + ctx.r3.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// extsw r29,r8
	r29.s64 = ctx.r8.s32;
	// lwzx r27,r18,r22
	r27.u64 = REX_LOAD_U32(r18.u32 + r22.u32);
	// std r29,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, r29.u64);
	// lfd f10,-168(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lbz r29,1(r3)
	r29.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// rotlwi r28,r29,8
	r28.u64 = __builtin_rotateleft32(r29.u32, 8);
	// add r10,r28,r10
	ctx.r10.u64 = r28.u64 + ctx.r10.u64;
	// rotlwi r28,r11,8
	r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// add r9,r28,r9
	ctx.r9.u64 = r28.u64 + ctx.r9.u64;
	// std r11,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r11.u64);
	// lfd f6,-160(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// std r11,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, ctx.r11.u64);
	// lfd f4,-152(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// fmuls f13,f8,f0
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfsu f11,4(r5)
	ea = 4 + ctx.r5.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r5.u32 = ea;
	// stfsu f7,4(r5)
	ea = 4 + ctx.r5.u32;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r5.u32 = ea;
	// stfsu f13,4(r5)
	ea = 4 + ctx.r5.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r5.u32 = ea;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// beq 0x82472e04
	if (ctx.cr0.eq) goto loc_82472E04;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82472CD8:
	// lbz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mullw r11,r9,r24
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(r24.s32);
	// extsb r9,r6
	ctx.r9.s64 = ctx.r6.s8;
	// mullw r6,r7,r25
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(r25.s32);
	// srawi r29,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	r29.s64 = ctx.r9.s32 >> 4;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// srawi r6,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 8;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x82472d1c
	if (!ctx.cr6.gt) goto loc_82472D1C;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x82472d28
	goto loc_82472D28;
loc_82472D1C:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x82472d28
	if (!ctx.cr6.lt) goto loc_82472D28;
	// li r11,-32768
	ctx.r11.s64 = -32768;
loc_82472D28:
	// rlwinm r6,r29,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0x3C;
	// lwzx r6,r6,r21
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r21.u32);
	// mullw r6,r6,r30
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(r30.s32);
	// srawi r30,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	r30.s64 = ctx.r6.s32 >> 8;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(r30.s32, 16, ctx.xer);
	// bge cr6,0x82472d44
	if (!ctx.cr6.lt) goto loc_82472D44;
	// li r30,16
	r30.s64 = 16;
loc_82472D44:
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// std r6,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, ctx.r6.u64);
	// mullw r10,r10,r26
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r26.s32);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mullw r9,r8,r27
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(r27.s32);
	// lfd f13,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r6,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 4;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// rlwinm r29,r6,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// extsb r11,r29
	ctx.r11.s64 = r29.s8;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r5)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x82472db0
	if (!ctx.cr6.gt) goto loc_82472DB0;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x82472dbc
	goto loc_82472DBC;
loc_82472DB0:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x82472dbc
	if (!ctx.cr6.lt) goto loc_82472DBC;
	// li r11,-32768
	ctx.r11.s64 = -32768;
loc_82472DBC:
	// rlwinm r10,r6,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// lwzx r6,r10,r21
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + r21.u32);
	// mullw r10,r6,r31
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(r31.s32);
	// srawi r31,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	r31.s64 = ctx.r10.s32 >> 8;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(r31.s32, 16, ctx.xer);
	// bge cr6,0x82472dd8
	if (!ctx.cr6.lt) goto loc_82472DD8;
	// li r31,16
	r31.s64 = 16;
loc_82472DD8:
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// std r6,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, ctx.r6.u64);
	// lfd f13,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r5)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bdnz 0x82472cd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82472CD8;
loc_82472E04:
	// cmplwi cr6,r4,14
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 14, ctx.xer);
	// bge cr6,0x82472bb8
	if (!ctx.cr6.lt) goto loc_82472BB8;
loc_82472E0C:
	// subf r3,r19,r5
	ctx.r3.u64 = ctx.r5.u64 - r19.u64;
	// b 0x822d4eb0
	return;
loc_82472E14:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_8247D640) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8247D648;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x8247f640
	ctx.lr = 0x8247D660;
	sub_8247F640(ctx, base);
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// blt cr6,0x8247d678
	if (ctx.cr6.lt) goto loc_8247D678;
	// subf r11,r30,r31
	ctx.r11.u64 = r31.u64 - r30.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8247d688
	if (ctx.cr6.gt) goto loc_8247D688;
loc_8247D678:
	// bl 0x822d6910
	ctx.lr = 0x8247D67C;
	sub_822D6910(ctx, base);
loc_8247D67C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8247D680:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_8247D688:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822dd3d8
	ctx.lr = 0x8247D698;
	sub_822DD3D8(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, ctx.xer);
	// bge cr6,0x8247d67c
	if (!ctx.cr6.lt) goto loc_8247D67C;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8247f638
	ctx.lr = 0x8247D6B4;
	sub_8247F638(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8247d6f0
	if (!ctx.cr0.eq) goto loc_8247D6F0;
	// subf r11,r31,r30
	ctx.r11.u64 = r30.u64 - r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d6b60
	ctx.lr = 0x8247D6D0;
	sub_822D6B60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x8247d680
	if (ctx.cr0.eq) goto loc_8247D680;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d69e8
	ctx.lr = 0x8247D6F0;
	sub_822D69E8(ctx, base);
loc_8247D6F0:
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
	// bl 0x822d69e8
	ctx.lr = 0x8247D708;
	sub_822D69E8(ctx, base);
}

DEFINE_REX_FUNC(sub_8247FF40) {
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
	ctx.lr = 0x8247FF48;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// bl 0x822e0da8
	ctx.lr = 0x8247FF64;
	sub_822E0DA8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// beq cr6,0x8247ffb8
	if (ctx.cr6.eq) goto loc_8247FFB8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e0da8
	ctx.lr = 0x8247FF80;
	sub_822E0DA8(ctx, base);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// beq cr6,0x8247ffb8
	if (ctx.cr6.eq) goto loc_8247FFB8;
	// subf r30,r3,r29
	r30.u64 = r29.u64 - ctx.r3.u64;
	// cmpdi cr6,r30,0
	ctx.cr6.compare<int64_t>(r30.s64, 0, ctx.xer);
	// ble cr6,0x82480054
	if (!ctx.cr6.gt) goto loc_82480054;
	// bl 0x8220fda0
	ctx.lr = 0x8247FF98;
	sub_8220FDA0(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// bl 0x8220e3f8
	ctx.lr = 0x8247FFA4;
	sub_8220E3F8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8247ffc8
	if (!ctx.cr0.eq) goto loc_8247FFC8;
	// bl 0x822db6c0
	ctx.lr = 0x8247FFB0;
	sub_822DB6C0(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_8247FFB8:
	// bl 0x822db6c0
	ctx.lr = 0x8247FFBC;
	sub_822DB6C0(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_8247FFC0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_8247FFC8:
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x824800d8
	ctx.lr = 0x8247FFD8;
	sub_824800D8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_8247FFDC:
	// cmpdi cr6,r30,4096
	ctx.cr6.compare<int64_t>(r30.s64, 4096, ctx.xer);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// bge cr6,0x8247ffec
	if (!ctx.cr6.lt) goto loc_8247FFEC;
	// extsw r5,r30
	ctx.r5.s64 = r30.s32;
loc_8247FFEC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e1158
	ctx.lr = 0x8247FFF8;
	sub_822E1158(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82480014
	if (ctx.cr6.eq) goto loc_82480014;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// subf r30,r11,r30
	r30.u64 = r30.u64 - ctx.r11.u64;
	// cmpdi cr6,r30,0
	ctx.cr6.compare<int64_t>(r30.s64, 0, ctx.xer);
	// bgt cr6,0x8247ffdc
	if (ctx.cr6.gt) goto loc_8247FFDC;
	// b 0x82480034
	goto loc_82480034;
loc_82480014:
	// bl 0x822db6f8
	ctx.lr = 0x82480018;
	sub_822DB6F8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x82480030
	if (!ctx.cr6.eq) goto loc_82480030;
	// bl 0x822db6c0
	ctx.lr = 0x82480028;
	sub_822DB6C0(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82480030:
	// li r27,-1
	r27.s64 = -1;
loc_82480034:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824800d8
	ctx.lr = 0x82480040;
	sub_824800D8(ctx, base);
	// bl 0x8220fda0
	ctx.lr = 0x82480044;
	sub_8220FDA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x8220ecf0
	ctx.lr = 0x82480050;
	sub_8220ECF0(ctx, base);
	// b 0x824800ac
	goto loc_824800AC;
loc_82480054:
	// bge cr6,0x824800b4
	if (!ctx.cr6.lt) goto loc_824800B4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e0da8
	ctx.lr = 0x82480068;
	sub_822E0DA8(ctx, base);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// beq cr6,0x8247ffb8
	if (ctx.cr6.eq) goto loc_8247FFB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e5b20
	ctx.lr = 0x82480078;
	sub_822E5B20(ctx, base);
	// bl 0x823cd678
	ctx.lr = 0x8248007C;
	sub_823CD678(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// extsw r27,r11
	r27.s64 = ctx.r11.s32;
	// cmpdi cr6,r27,-1
	ctx.cr6.compare<int64_t>(r27.s64, -1, ctx.xer);
	// bne cr6,0x824800b4
	if (!ctx.cr6.eq) goto loc_824800B4;
	// bl 0x822db6c0
	ctx.lr = 0x82480094;
	sub_822DB6C0(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822db6f8
	ctx.lr = 0x824800A0;
	sub_822DB6F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822098c8
	ctx.lr = 0x824800A8;
	sub_822098C8(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_824800AC:
	// cmpdi cr6,r27,-1
	ctx.cr6.compare<int64_t>(r27.s64, -1, ctx.xer);
	// beq cr6,0x8247ffb8
	if (ctx.cr6.eq) goto loc_8247FFB8;
loc_824800B4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e0da8
	ctx.lr = 0x824800C4;
	sub_822E0DA8(ctx, base);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// beq cr6,0x8247ffb8
	if (ctx.cr6.eq) goto loc_8247FFB8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8247ffc0
	goto loc_8247FFC0;
}

DEFINE_REX_FUNC(sub_82492688) {
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
	ctx.lr = 0x82492690;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r20,50(r3)
	r20.u64 = REX_LOAD_U16(ctx.r3.u32 + 50);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r24,0(r7)
	r24.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// lwz r26,348(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r18,0
	r18.s64 = 0;
	// srawi r25,r20,1
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x1) != 0);
	r25.s64 = r20.s32 >> 1;
	// beq cr6,0x824926d4
	if (ctx.cr6.eq) goto loc_824926D4;
	// lwz r11,1304(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1304);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r17,r18
	r17.u64 = r18.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824926d8
	if (ctx.cr6.eq) goto loc_824926D8;
loc_824926D4:
	// li r17,1
	r17.s64 = 1;
loc_824926D8:
	// lwz r11,344(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 344);
	// lhz r23,62(r27)
	r23.u64 = REX_LOAD_U16(r27.u32 + 62);
	// lhz r16,66(r27)
	r16.u64 = REX_LOAD_U16(r27.u32 + 66);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lhz r22,64(r27)
	r22.u64 = REX_LOAD_U16(r27.u32 + 64);
	// lhz r15,68(r27)
	r15.u64 = REX_LOAD_U16(r27.u32 + 68);
	// lwz r31,0(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 0);
	// bne cr6,0x82492708
	if (!ctx.cr6.eq) goto loc_82492708;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r30,r18
	r30.u64 = r18.u64;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// b 0x82492834
	goto loc_82492834;
loc_82492708:
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
	// blt cr6,0x824927f4
	if (ctx.cr6.lt) goto loc_824927F4;
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
	// bge cr6,0x824927ec
	if (!ctx.cr6.lt) goto loc_824927EC;
loc_82492754:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82492780
	if (ctx.cr6.lt) goto loc_82492780;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x82492770;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82492754
	if (ctx.cr6.eq) goto loc_82492754;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82492834
	goto loc_82492834;
loc_82492780:
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
loc_824927EC:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82492834
	goto loc_82492834;
loc_824927F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337f50
	ctx.lr = 0x824927FC;
	sub_82337F50(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,32768
	r29.u64 = ctx.r11.u64 | 32768;
loc_82492804:
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
	ctx.lr = 0x8249281C;
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
	// blt cr6,0x82492804
	if (ctx.cr6.lt) goto loc_82492804;
loc_82492834:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82492850
	if (ctx.cr6.eq) goto loc_82492850;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822d4ea0
	return;
loc_82492850:
	// rlwinm r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8249286c
	if (ctx.cr6.eq) goto loc_8249286C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,336(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 336);
	// bl 0x82490da8
	ctx.lr = 0x8249286C;
	sub_82490DA8(ctx, base);
loc_8249286C:
	// stw r18,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r18.u32);
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// stw r18,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r18.u32);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// stw r18,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r18.u32);
	// beq cr6,0x824928a8
	if (ctx.cr6.eq) goto loc_824928A8;
	// lwz r11,-24(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + -24);
	// rlwinm r9,r11,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824928a8
	if (ctx.cr6.eq) goto loc_824928A8;
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
loc_824928A8:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// bne cr6,0x82492984
	if (!ctx.cr6.eq) goto loc_82492984;
	// rlwinm r9,r25,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r20,r24
	ctx.r11.u64 = r24.u64 - r20.u64;
	// add r9,r25,r9
	ctx.r9.u64 = r25.u64 + ctx.r9.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r8,r8,r21
	ctx.r8.u64 = r21.u64 - ctx.r8.u64;
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r7,r9,0,14,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82492910
	if (ctx.cr6.eq) goto loc_82492910;
	// rlwinm r9,r9,0,21,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x700;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r9,512
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 512, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bge cr6,0x824928fc
	if (!ctx.cr6.lt) goto loc_824928FC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwzx r5,r9,r26
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + r26.u32);
	// stwx r5,r7,r6
	REX_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r5.u32);
	// b 0x82492910
	goto loc_82492910;
loc_824928FC:
	// subf r9,r20,r11
	ctx.r9.u64 = ctx.r11.u64 - r20.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r6,r26
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + r26.u32);
	// stwx r4,r7,r5
	REX_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r4.u32);
loc_82492910:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// beq cr6,0x82492984
	if (ctx.cr6.eq) goto loc_82492984;
	// addi r9,r25,-1
	ctx.r9.s64 = r25.s64 + -1;
	// cmpw cr6,r19,r9
	ctx.cr6.compare<int32_t>(r19.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82492930
	if (ctx.cr6.eq) goto loc_82492930;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r9,r8,24
	ctx.r9.s64 = ctx.r8.s64 + 24;
	// b 0x82492938
	goto loc_82492938;
loc_82492930:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r8,-24
	ctx.r9.s64 = ctx.r8.s64 + -24;
loc_82492938:
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r9,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82492984
	if (ctx.cr6.eq) goto loc_82492984;
	// rlwinm r9,r9,0,21,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r9,512
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 512, ctx.xer);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bge cr6,0x82492970
	if (!ctx.cr6.lt) goto loc_82492970;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwzx r7,r11,r26
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// stwx r7,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
	// b 0x82492984
	goto loc_82492984;
loc_82492970:
	// subf r11,r20,r11
	ctx.r11.u64 = ctx.r11.u64 - r20.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r26
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + r26.u32);
	// stwx r6,r9,r7
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r6.u32);
loc_82492984:
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82492ab4
	if (!ctx.cr6.gt) goto loc_82492AB4;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_824929A8:
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r4,r5,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x824929c8
	if (ctx.cr6.eq) goto loc_824929C8;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stwu r5,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
	// b 0x824929d0
	goto loc_824929D0;
loc_824929C8:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwu r5,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r8.u32 = ea;
loc_824929D0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824929a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824929A8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82492ab4
	if (!ctx.cr6.gt) goto loc_82492AB4;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x82492a10
	if (ctx.cr6.eq) goto loc_82492A10;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x82492a10
	if (ctx.cr6.eq) goto loc_82492A10;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82492a04
	if (ctx.cr6.lt) goto loc_82492A04;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82492ab8
	goto loc_82492AB8;
loc_82492A04:
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82492ab8
	goto loc_82492AB8;
loc_82492A10:
	// lhz r11,98(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 98);
	// lhz r10,94(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 94);
	// lhz r9,90(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lhz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lhz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// extsh r31,r9
	r31.s64 = ctx.r9.s16;
	// lhz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 92);
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
	// b 0x82492ab8
	goto loc_82492AB8;
loc_82492AB4:
	// stw r18,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r18.u32);
loc_82492AB8:
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// srawi r9,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 16;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r8,r30,31
	ctx.r8.u64 = r30.u32 & 0x1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r7,r11,r23
	ctx.r7.u64 = ctx.r11.u64 + r23.u64;
	// add r6,r10,r22
	ctx.r6.u64 = ctx.r10.u64 + r22.u64;
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// and r4,r6,r15
	ctx.r4.u64 = ctx.r6.u64 & r15.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// and r5,r7,r16
	ctx.r5.u64 = ctx.r7.u64 & r16.u64;
	// subf r10,r22,r4
	ctx.r10.u64 = ctx.r4.u64 - r22.u64;
	// subf r3,r23,r5
	ctx.r3.u64 = ctx.r5.u64 - r23.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sth r3,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r3.u16);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// beq cr6,0x82492b20
	if (ctx.cr6.eq) goto loc_82492B20;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,336(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 336);
	// bl 0x82490da8
	ctx.lr = 0x82492B20;
	sub_82490DA8(ctx, base);
loc_82492B20:
	// stw r18,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r18.u32);
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// stw r18,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r18.u32);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// stw r18,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r18.u32);
	// beq cr6,0x82492b60
	if (ctx.cr6.eq) goto loc_82492B60;
	// lwz r11,-24(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + -24);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82492b60
	if (ctx.cr6.eq) goto loc_82492B60;
	// add r11,r24,r20
	ctx.r11.u64 = r24.u64 + r20.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + r26.u64;
	// lwz r9,-4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
loc_82492B60:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// bne cr6,0x82492bf4
	if (!ctx.cr6.eq) goto loc_82492BF4;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r20,r24
	ctx.r10.u64 = r24.u64 - r20.u64;
	// add r11,r25,r11
	ctx.r11.u64 = r25.u64 + ctx.r11.u64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r9,r21
	ctx.r11.u64 = r21.u64 - ctx.r9.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r8,0,14,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82492ba4
	if (ctx.cr6.eq) goto loc_82492BA4;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwzx r5,r9,r26
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + r26.u32);
	// stwx r5,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r5.u32);
loc_82492BA4:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// beq cr6,0x82492bf4
	if (ctx.cr6.eq) goto loc_82492BF4;
	// addi r9,r25,-1
	ctx.r9.s64 = r25.s64 + -1;
	// cmpw cr6,r19,r9
	ctx.cr6.compare<int32_t>(r19.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82492bc4
	if (ctx.cr6.eq) goto loc_82492BC4;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// b 0x82492bcc
	goto loc_82492BCC;
loc_82492BC4:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
loc_82492BCC:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r11,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82492bf4
	if (ctx.cr6.eq) goto loc_82492BF4;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwzx r8,r11,r26
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
loc_82492BF4:
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82492d24
	if (!ctx.cr6.gt) goto loc_82492D24;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_82492C18:
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r4,r5,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82492c38
	if (ctx.cr6.eq) goto loc_82492C38;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// b 0x82492c40
	goto loc_82492C40;
loc_82492C38:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwu r5,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
loc_82492C40:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82492c18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82492C18;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82492d24
	if (!ctx.cr6.gt) goto loc_82492D24;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x82492c80
	if (ctx.cr6.eq) goto loc_82492C80;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x82492c80
	if (ctx.cr6.eq) goto loc_82492C80;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82492c74
	if (ctx.cr6.lt) goto loc_82492C74;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82492d28
	goto loc_82492D28;
loc_82492C74:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82492d28
	goto loc_82492D28;
loc_82492C80:
	// lhz r11,98(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 98);
	// lhz r10,94(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 94);
	// lhz r9,90(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lhz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lhz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// extsh r31,r9
	r31.s64 = ctx.r9.s16;
	// lhz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 92);
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
	// subf r29,r6,r4
	r29.u64 = ctx.r4.u64 - ctx.r6.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r28,r30,r6
	r28.u64 = ctx.r6.u64 - r30.u64;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r29,r29,r8
	r29.u64 = r29.u64 ^ ctx.r8.u64;
	// srawi r11,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// xor r8,r28,r8
	ctx.r8.u64 = r28.u64 ^ ctx.r8.u64;
	// srawi r10,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// srawi r9,r29,31
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = r29.s32 >> 31;
	// srawi r8,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 31;
	// or r29,r11,r10
	r29.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r28,r9,r8
	r28.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 & r31.u64;
	// andc r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 & ~r29.u64;
	// and r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 & r30.u64;
	// andc r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 & ~r28.u64;
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
	// b 0x82492d28
	goto loc_82492D28;
loc_82492D24:
	// stw r18,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r18.u32);
loc_82492D28:
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// lhz r9,82(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r11,r24,r20
	ctx.r11.u64 = r24.u64 + r20.u64;
	// add r8,r10,r22
	ctx.r8.u64 = ctx.r10.u64 + r22.u64;
	// add r4,r9,r23
	ctx.r4.u64 = ctx.r9.u64 + r23.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// and r7,r8,r15
	ctx.r7.u64 = ctx.r8.u64 & r15.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// and r10,r4,r16
	ctx.r10.u64 = ctx.r4.u64 & r16.u64;
	// subf r6,r22,r7
	ctx.r6.u64 = ctx.r7.u64 - r22.u64;
	// subf r9,r23,r10
	ctx.r9.u64 = ctx.r10.u64 - r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r6,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_824AFAE8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e80
	ctx.lr = 0x824AFAF0;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r31,r3,r4
	r31.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// add r30,r10,r4
	r30.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// lvx128 v58,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lvx128 v59,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,-96
	r29.s64 = ctx.r1.s64 + -96;
	// lvsl v6,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v63,v58,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,-80
	r28.s64 = ctx.r1.s64 + -80;
	// lvx128 v60,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v3,v62,v59,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v5,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r31,r6,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v57,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v7,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v2,v61,v60,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v56,r30,r11
	ea = (r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v11,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v54,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r31,r5
	ctx.r10.u64 = r31.u64 + ctx.r5.u64;
	// lvsl v6,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v10,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v4,v57,v56,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vsubshs v2,v11,v7
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vperm128 v3,v54,v55,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// add r30,r5,r6
	r30.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r7,r10,r6
	ctx.r7.u64 = ctx.r10.u64 + ctx.r6.u64;
	// vsubshs v31,v10,v11
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmrghb v9,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v8,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v29,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v28,v9,v10
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubshs v27,v8,v9
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v26,v30,v1
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v25,v29,v1
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v24,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v22,v26,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v21,v25,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v20,v24,v1
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v19,v23,v1
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v18,v22,v7
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v17,v21,v11
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v16,v20,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v19,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v53,v18,v17
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vaddshs v14,v16,v10
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v11,v15,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vpkshus128 v52,v14,v11
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// stvx128 v53,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r29,-88(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -88);
	// lwz r27,-96(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -96);
	// stw r27,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r27.u32);
	// stvx128 v52,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r28,-72(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r27,-80(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// stwx r29,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, r29.u32);
	// stwx r27,r31,r5
	REX_STORE_U32(r31.u32 + ctx.r5.u32, r27.u32);
	// stwx r28,r10,r6
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, r28.u32);
	// bne cr6,0x824afc3c
	if (!ctx.cr6.eq) goto loc_824AFC3C;
	// lwz r29,-92(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// lwz r28,-84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// lwz r27,-76(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r26,-68(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// stw r29,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, r29.u32);
	// stw r28,4(r30)
	REX_STORE_U32(r30.u32 + 4, r28.u32);
	// stw r27,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r27.u32);
	// stw r26,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, r26.u32);
loc_824AFC3C:
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bne cr6,0x824afd5c
	if (!ctx.cr6.eq) goto loc_824AFD5C;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v51,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r30,r4,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r8,r4
	ctx.r9.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r29,r1,-80
	r29.s64 = ctx.r1.s64 + -80;
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v50,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,-80
	r28.s64 = ctx.r1.s64 + -80;
	// lvx128 v49,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r8,r30,r3
	ctx.r8.u64 = r30.u64 + ctx.r3.u64;
	// lvx128 v48,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v5,v51,v50,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v47,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v4,v49,v48,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v3,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v44,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v11,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v45,r30,r3
	ea = (r30.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v31,v46,v47,v3
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvsl v2,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v10,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// vperm128 v30,v45,v44,v2
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vsubshs v29,v11,v8
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vmrghb v9,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v28,v10,v11
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmrghb v27,v0,v30
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v26,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v24,v9,v10
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vslh v25,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v23,v27,v9
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vslh v20,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v22,v26,v1
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v21,v25,v1
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v19,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v16,v20,v1
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v18,v22,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v21,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v15,v19,v1
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v13,v16,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v14,v18,v8
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v0,v17,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v12,v15,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v11,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vpkshus128 v43,v14,v0
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vaddshs v10,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vpkshus128 v42,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvx128 v43,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,-76(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r3,-80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// lwz r7,-72(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r4,-68(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// stwux r3,r5,r11
	ea = ctx.r5.u32 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r5.u32 = ea;
	// stvx128 v42,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,-76(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r31,-72(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lwz r30,-68(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// stw r8,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// lwz r8,-80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// stwx r7,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r7.u32);
	// stw r4,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// stwux r8,r10,r11
	ea = ctx.r10.u32 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// add r11,r10,r6
	ctx.r11.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r3,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// stwx r31,r10,r6
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, r31.u32);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
loc_824AFD5C:
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_824B9D88) {
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
	ctx.lr = 0x824B9D90;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,50(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 50);
	// mr r20,r8
	r20.u64 = ctx.r8.u64;
	// mr r19,r10
	r19.u64 = ctx.r10.u64;
	// lwz r30,292(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 292);
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r10,r5,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// lwz r9,348(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// rlwinm r5,r8,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// or r7,r10,r4
	ctx.r7.u64 = ctx.r10.u64 | ctx.r4.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lwz r6,284(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwzx r11,r5,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// rlwinm r31,r7,6,0,25
	r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r3,r11,1,15,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x10000;
	// subf r4,r31,r6
	ctx.r4.u64 = ctx.r6.u64 - r31.u64;
	// subf r10,r3,r31
	ctx.r10.u64 = r31.u64 - ctx.r3.u64;
	// extsh r28,r11
	r28.s64 = ctx.r11.s16;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r27,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	r27.s64 = ctx.r11.s32 >> 16;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// subf r7,r11,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r11.u64;
	// clrlwi r11,r28,30
	ctx.r11.u64 = r28.u32 & 0x3;
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// clrlwi r10,r27,30
	ctx.r10.u64 = r27.u32 & 0x3;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addis r3,r8,115
	ctx.r3.s64 = ctx.r8.s64 + 7536640;
	// srawi r11,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 2;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addi r3,r3,115
	ctx.r3.s64 = ctx.r3.s64 + 115;
	// srawi r23,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	r23.s64 = ctx.r11.s32 >> 1;
	// srawi r11,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 2;
	// or r10,r3,r7
	ctx.r10.u64 = ctx.r3.u64 | ctx.r7.u64;
	// stw r23,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r23.u32);
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + r27.u64;
	// rlwinm r9,r10,0,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	// srawi r22,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	r22.s64 = ctx.r8.s32 >> 1;
	// rlwinm r9,r9,0,16,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// stw r22,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r22.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824b9e60
	if (ctx.cr6.eq) goto loc_824B9E60;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824b9be8
	ctx.lr = 0x824B9E58;
	sub_824B9BE8(ctx, base);
	// lwz r28,96(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r27,100(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_824B9E60:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// srawi r5,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	ctx.r5.s64 = r31.s32 >> 1;
	// rlwimi r11,r22,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r11,1,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x10000;
	// subf r9,r11,r30
	ctx.r9.u64 = r30.u64 - ctx.r11.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r8,r5,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r5.u64;
	// add r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addis r6,r7,59
	ctx.r6.s64 = ctx.r7.s64 + 3866624;
	// addi r6,r6,59
	ctx.r6.s64 = ctx.r6.s64 + 59;
	// or r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 | ctx.r8.u64;
	// rlwinm r3,r4,0,0,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r3,r3,0,16,0
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824b9eb4
	if (ctx.cr6.eq) goto loc_824B9EB4;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824b9cb8
	ctx.lr = 0x824B9EAC;
	sub_824B9CB8(ctx, base);
	// lwz r23,104(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r22,108(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_824B9EB4:
	// lis r9,-32162
	ctx.r9.s64 = -2107768832;
	// lhz r31,74(r29)
	r31.u64 = REX_LOAD_U16(r29.u32 + 74);
	// srawi r11,r27,2
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3) != 0);
	ctx.r11.s64 = r27.s32 >> 2;
	// srawi r8,r28,2
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x3) != 0);
	ctx.r8.s64 = r28.s32 >> 2;
	// mullw r10,r11,r31
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// lwz r11,-28624(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -28624);
	// srawi r7,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 3;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// li r26,0
	r26.s64 = 0;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r10,r25
	r30.u64 = ctx.r10.u64 + r25.u64;
	// subf. r4,r5,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x824b9f5c
	if (!ctx.cr0.eq) goto loc_824B9F5C;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r30
	// addi r10,r31,128
	ctx.r10.s64 = r31.s64 + 128;
	// dcbt r10,r30
	// addi r8,r31,64
	ctx.r8.s64 = r31.s64 + 64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r7,r30
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// addi r6,r11,128
	ctx.r6.s64 = ctx.r11.s64 + 128;
	// dcbt r6,r30
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r4,r30
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// dcbt r3,r30
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// dcbt r10,r30
	// rlwinm r8,r31,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r31,r8
	ctx.r11.u64 = ctx.r8.u64 - r31.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r30
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_824B9F5C:
	// addi r10,r31,8
	ctx.r10.s64 = r31.s64 + 8;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// dcbt r8,r30
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r31,r10
	ctx.r10.u64 = r31.u64 + ctx.r10.u64;
	// addi r7,r10,64
	ctx.r7.s64 = ctx.r10.s64 + 64;
	// dcbt r7,r30
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r31,r10
	ctx.r6.u64 = r31.u64 + ctx.r10.u64;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r10,64
	ctx.r5.s64 = ctx.r10.s64 + 64;
	// dcbt r5,r30
	// mulli r10,r31,11
	ctx.r10.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(11));
	// addi r4,r10,64
	ctx.r4.s64 = ctx.r10.s64 + 64;
	// dcbt r4,r30
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r31,r10
	ctx.r3.u64 = r31.u64 + ctx.r10.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// dcbt r10,r30
	// mulli r10,r31,13
	ctx.r10.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(13));
	// addi r8,r10,64
	ctx.r8.s64 = ctx.r10.s64 + 64;
	// dcbt r8,r30
	// rlwinm r7,r31,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r6,r31,r7
	ctx.r6.u64 = ctx.r7.u64 - r31.u64;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r10,64
	ctx.r5.s64 = ctx.r10.s64 + 64;
	// dcbt r5,r30
	// rlwinm r4,r31,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r10,r31,r4
	ctx.r10.u64 = ctx.r4.u64 - r31.u64;
	// addi r3,r10,64
	ctx.r3.s64 = ctx.r10.s64 + 64;
	// dcbt r3,r30
	// clrlwi r27,r27,30
	r27.u64 = r27.u32 & 0x3;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// rlwinm r10,r28,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// stw r11,-28624(r9)
	REX_STORE_U32(ctx.r9.u32 + -28624, ctx.r11.u32);
	// clrlwi r28,r28,30
	r28.u64 = r28.u32 & 0x3;
	// addi r11,r10,241
	ctx.r11.s64 = ctx.r10.s64 + 241;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwzx r3,r4,r29
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + r29.u32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bctrl 
	ctx.lr = 0x824BA02C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824ba05c
	if (ctx.cr6.eq) goto loc_824BA05C;
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r9,35(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 35);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823af2f0
	ctx.lr = 0x824BA05C;
	sub_823AF2F0(ctx, base);
loc_824BA05C:
	// lis r27,-32162
	r27.s64 = -2107768832;
	// lhz r6,76(r29)
	ctx.r6.u64 = REX_LOAD_U16(r29.u32 + 76);
	// srawi r11,r22,2
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x3) != 0);
	ctx.r11.s64 = r22.s32 >> 2;
	// srawi r9,r23,2
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x3) != 0);
	ctx.r9.s64 = r23.s32 >> 2;
	// mullw r10,r11,r6
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// lwz r11,-28620(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + -28620);
	// srawi r8,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 4;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// add r3,r10,r21
	ctx.r3.u64 = ctx.r10.u64 + r21.u64;
	// rlwinm r5,r7,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r10,r20
	r31.u64 = ctx.r10.u64 + r20.u64;
	// subf. r4,r5,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x824ba104
	if (!ctx.cr0.eq) goto loc_824BA104;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r3
	// addi r10,r6,128
	ctx.r10.s64 = ctx.r6.s64 + 128;
	// dcbt r10,r3
	// addi r9,r6,64
	ctx.r9.s64 = ctx.r6.s64 + 64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r8,r3
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r3
	// addi r5,r6,32
	ctx.r5.s64 = ctx.r6.s64 + 32;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r4,r3
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// dcbt r11,r3
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// dcbt r9,r3
	// rlwinm r8,r6,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r6,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r6.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r3
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_824BA104:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// clrlwi r30,r22,30
	r30.u64 = r22.u32 & 0x3;
	// stw r11,-28620(r27)
	REX_STORE_U32(r27.u32 + -28620, ctx.r11.u32);
	// rlwinm r11,r23,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xC;
	// lbz r9,35(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 35);
	// clrlwi r28,r23,30
	r28.u64 = r23.u32 & 0x3;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,257
	ctx.r11.s64 = ctx.r11.s64 + 257;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824BA14C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-28620(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + -28620);
	// lhz r6,76(r29)
	ctx.r6.u64 = REX_LOAD_U16(r29.u32 + 76);
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf. r7,r8,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x824ba1d8
	if (!ctx.cr0.eq) goto loc_824BA1D8;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r31
	// addi r10,r6,128
	ctx.r10.s64 = ctx.r6.s64 + 128;
	// dcbt r10,r31
	// addi r9,r6,64
	ctx.r9.s64 = ctx.r6.s64 + 64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r8,r31
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r31
	// addi r5,r6,32
	ctx.r5.s64 = ctx.r6.s64 + 32;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r4,r31
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// dcbt r3,r31
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// dcbt r10,r31
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r6,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r6.u64;
	// addi r8,r11,128
	ctx.r8.s64 = ctx.r11.s64 + 128;
	// dcbt r8,r31
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_824BA1D8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r5,308(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r11,-28620(r27)
	REX_STORE_U32(r27.u32 + -28620, ctx.r11.u32);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r11,r11,257
	ctx.r11.s64 = ctx.r11.s64 + 257;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r11,r9,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + r29.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lbz r9,35(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 35);
	// bctrl 
	ctx.lr = 0x824BA21C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eb4
	return;
}

